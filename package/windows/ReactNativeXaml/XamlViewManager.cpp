// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#include "pch.h"
#include "XamlViewManager.h"

#include "Codegen/TypeEnums.g.h"
#include <UI.Xaml.Documents.h>
#include <UI.Xaml.Input.h>
#include <cdebug.h>
#include <winrt/Windows.UI.Xaml.Core.Direct.h>
#include "JSValueReader.h"
#include "NativeModules.h"
#include "XamlMetadata.h"

using namespace winrt;
using namespace Microsoft::ReactNative;
using namespace xaml;
using namespace xaml::Controls;
namespace mux = winrt::Microsoft::UI::Xaml;

namespace winrt::ReactNativeXaml {

// IViewManager
hstring XamlViewManager::Name() noexcept {
  return L"XamlControl";
}

xaml::FrameworkElement XamlViewManager::CreateView() noexcept {
  assert(false);
  return nullptr;
}

bool XamlViewManager::RequiresNativeLayout() noexcept {
  return true;
}

winrt::IInspectable XamlViewManager::CreateViewWithProperties(
    winrt::Microsoft::ReactNative::IJSValueReader const &propertyMapReader) noexcept {
  m_xamlMetadata->SetupEventDispatcher(m_reactContext);

  const JSValueObject &propertyMap = JSValue::ReadObjectFrom(propertyMapReader);
  auto typeName = propertyMap["type"].AsString();
  auto e = m_xamlMetadata->Create(typeName, m_reactContext);
  return e;
}

// IViewManagerWithNativeProperties
IMapView<hstring, ViewManagerPropertyType> XamlViewManager::NativeProps() noexcept {
  auto nativeProps = winrt::single_threaded_map<hstring, ViewManagerPropertyType>();
  nativeProps.Insert(L"type", ViewManagerPropertyType::String);

  m_xamlMetadata->PopulateNativeProps(nativeProps);
  m_xamlMetadata->PopulateNativeEvents(nativeProps);
  return nativeProps.GetView();
}

void XamlViewManager::UpdateProperties(FrameworkElement const &view, IJSValueReader const &propertyMapReader) noexcept {
  const JSValueObject &propertyMap = JSValue::ReadObjectFrom(propertyMapReader);

  auto e = view;
  auto cn = get_class_name(e);
  if (auto control = e.try_as<DependencyObject>()) {
    for (auto const &pair : propertyMap) {
      bool handled = false;
      auto const &propertyName = pair.first;
      auto const &propertyValue = pair.second;

      if (auto prop = m_xamlMetadata->GetProp(propertyName, control)) {
        auto realObject = prop->asType(control).as<DependencyObject>();
        auto rcn = get_class_name(realObject);
        prop->SetValue(realObject, propertyValue, m_reactContext);
        handled = true;
        continue;
      } else if (
          auto eventAttacher =
              m_xamlMetadata->AttachEvent(m_reactContext, propertyName, control, propertyValue.AsBoolean())) {
        continue;
      } else if (propertyName == "type") {
        continue;
      } else {
        // cdebug << "[react-native-xaml] Unhandled call to UpdateProperties " << propertyName << " on view: " << cn <<
        // "\n"; auto className = winrt::get_class_name(e); if (IsDebuggerPresent()) {
        //   assert(false && "unknown property"); // this can happen e.g. for layout / style props, ignore unless
        //   debugging an issue
        // }
      }
    }
  }
}

// IViewManagerWithExportedEventTypeConstants
ConstantProviderDelegate XamlViewManager::ExportedCustomBubblingEventTypeConstants() noexcept {
  return nullptr;
}

ConstantProviderDelegate XamlViewManager::ExportedCustomDirectEventTypeConstants() noexcept {
  return GetEvents;
}

template <typename PriorityEnum>
auto GetPriority(const UIElement &u) {
  return static_cast<PriorityEnum>(winrt::unbox_value<uint32_t>(u.GetValue(GetPriorityProperty())));
}

// IViewManagerWithCommands
IVectorView<hstring> XamlViewManager::Commands() noexcept {
  auto commands = winrt::single_threaded_vector<hstring>();
  m_xamlMetadata->PopulateCommands(commands);
  return commands.GetView();
}

void XamlViewManager::DispatchCommand(
    FrameworkElement const &view,
    winrt::hstring const &commandId,
    winrt::Microsoft::ReactNative::IJSValueReader const &commandArgsReader) noexcept {
  const auto args = JSValue::ReadArrayFrom(commandArgsReader);
  m_xamlMetadata->DispatchCommand(view, commandId, args);
}

// IViewManagerWithReactContext
IReactContext XamlViewManager::ReactContext() noexcept {
  return m_reactContext;
}

void XamlViewManager::ReactContext(IReactContext reactContext) noexcept {
  m_reactContext = reactContext;
  m_xamlMetadata = std::make_shared<XamlMetadata>();

  React::ReactContext ctx(reactContext);
  auto vm = this->get_strong().as<IViewManager>();
  ctx.Properties().Set(XamlViewManagerProperty(), vm);
}

void XamlViewManager::AddView(xaml::FrameworkElement parent, xaml::UIElement child, int64_t _index) {
  auto index = static_cast<uint32_t>(_index);

  auto e = parent;
  auto parentType = winrt::get_class_name(e);
  auto childType = winrt::get_class_name(child);

  if (auto wrapper = child.try_as<Wrapper>()) {
    if (auto childContent = wrapper.WrappedObject()) {
      childType = winrt::get_class_name(childContent);
      auto childDO = child.as<DependencyObject>();
      auto tag = XamlMetadata::TagFromElement(childDO);
      if (auto depObj = childContent.try_as<DependencyObject>()) {
        // transfer the Tag from the wrapper
        // This is used for dispatching events and TouchEventHandler
        XamlMetadata::ElementSetTag(depObj, tag);
      }

      if (auto childFlyout = childContent.try_as<Controls::Primitives::FlyoutBase>()) {
        wrapper.DataContext(e);
        auto priority = GetPriority<MenuFlyoutPriority>(child);
        if (priority == MenuFlyoutPriority::Context) {
          if (auto button = e.try_as<Button>()) {
            return button.Flyout(childFlyout);
          } else {
            if (auto uiParent = e.try_as<UIElement>()) {
              return uiParent.ContextFlyout(childFlyout);
            }
          }
        } else {
          return Primitives::FlyoutBase::SetAttachedFlyout(e, childFlyout);
        }
      } else if (auto rtbParent = parent.try_as<RichTextBlock>()) {
        if (auto childBlock = childContent.try_as<Documents::Block>()) {
          return rtbParent.Blocks().InsertAt(index, childBlock);
        }
      } else if (auto tbParent = parent.try_as<TextBlock>()) {
        if (auto childInline = childContent.try_as<Documents::Inline>()) {
          return tbParent.Inlines().InsertAt(index, childInline);
        }
      } else if (auto paragraphParent = Unwrap<Documents::Paragraph>(parent)) {
        if (auto childInline = childContent.try_as<Documents::Inline>()) {
          return paragraphParent.Inlines().InsertAt(index, childInline);
        }
      } else if (auto spanParent = Unwrap<Documents::Span>(parent)) {
        if (auto childInline = childContent.try_as<Documents::Inline>()) {
          return spanParent.Inlines().InsertAt(index, childInline);
        }
      } else if (auto childKeyboardAccelerator = childContent.try_as<xaml::Input::KeyboardAccelerator>()) {
        if (auto uiParent = parent.try_as<UIElement>()) {
          return uiParent.KeyboardAccelerators().Append(childKeyboardAccelerator);
        }
      }
    }
  }

  if (auto panel = e.try_as<Panel>()) {
    return panel.Children().InsertAt(index, child);
  }

  if (auto navView = e.try_as<NavigationView>()) {
    auto childCN = winrt::get_class_name(child);
    auto priority = GetPriority<NavigationViewPriority>(child);
    if (priority == NavigationViewPriority::MenuItem) {
      return navView.MenuItems().Append(child);
    }
  } else if (auto navViewMUX = e.try_as<mux::Controls::NavigationView>()) {
    auto childCN = winrt::get_class_name(child);
    auto priority = GetPriority<NavigationViewPriority>(child);
    if (priority == NavigationViewPriority::MenuItem) {
      return navViewMUX.MenuItems().Append(child);
    } else if (priority == NavigationViewPriority::FooterMenuItem) {
      return navViewMUX.FooterMenuItems().Append(child);
    }
  }

  if (auto navViewItem = e.try_as<NavigationViewItem>()) {
    if (auto childIconElement = child.try_as<IconElement>()) {
      return navViewItem.Icon(childIconElement);
    }
  } else if (auto muxNavViewItem = e.try_as<mux::Controls::NavigationViewItem>()) {
    if (auto childIconElement = child.try_as<IconElement>()) {
      return muxNavViewItem.Icon(childIconElement);
    }
  }

  if (auto splitView = e.try_as<SplitView>()) {
    const auto priority = GetPriority<SplitViewPriority>(child);
    if (priority == SplitViewPriority::Content && splitView.Content() == nullptr) {
      return splitView.Content(child);
    } else if (priority == SplitViewPriority::Pane && splitView.Pane() == nullptr) {
      return splitView.Pane(child);
    }
  }

  if (auto appBarButton = e.try_as<AppBarButton>()) {
    if (auto icon = child.try_as<IconElement>()) {
      return appBarButton.Icon(icon);
    }
  }
  if (auto commandBar = e.try_as<CommandBar>()) {
    if (auto commandBarElement = child.try_as<ICommandBarElement>()) {
      const auto priority = GetPriority<CommandBarPriority>(child);
      if (priority == CommandBarPriority::PrimaryCommand) {
        return commandBar.PrimaryCommands().Append(commandBarElement);
      } else if (priority == CommandBarPriority::SecondaryCommand) {
        return commandBar.SecondaryCommands().Append(commandBarElement);
      }
    }
  }

  if (auto wrapper = e.try_as<Wrapper>()) {
    auto parentContent = wrapper.WrappedObject();
    if (auto menuFlyout = parentContent.try_as<MenuFlyout>()) {
      if (auto mfi = child.try_as<MenuFlyoutItemBase>()) {
        return menuFlyout.Items().InsertAt(index, mfi);
      }
    }
    if (auto flyout = parentContent.try_as<Flyout>()) {
      if (index == 0) {
        return flyout.Content(child);
      }
    }
  }

  if (auto contentCtrl = e.try_as<ContentControl>()) {
    if (index == 0 || contentCtrl.Content() == nullptr) {
      return contentCtrl.Content(child);
    } else {
      assert(false && "Parent is a ContentControl, but it already has a child");
    }
  }
  if (auto border = e.try_as<Border>()) {
    if (index == 0) {
      return border.Child(child);
    }
  }
  if (auto viewbox = e.try_as<Viewbox>()) {
    if (index == 0) {
      return viewbox.Child(child);
    }
  }
  if (auto autoSuggestBox = e.try_as<AutoSuggestBox>()) {
    if (auto iconElement = child.try_as<IconElement>()) {
      return autoSuggestBox.QueryIcon(iconElement);
    }
  }
  if (auto itemsControl = e.try_as<ItemsControl>()) {
    return itemsControl.Items().InsertAt(index, child);
  }
  if (auto menuFlyoutItem = e.try_as<MenuFlyoutItem>()) {
    if (auto childIcon = child.try_as<IconElement>()) {
      return menuFlyoutItem.Icon(childIcon);
    }
  }
  if (auto menuFlyoutSubItem = e.try_as<MenuFlyoutSubItem>()) {
    if (auto childMenuItem = child.try_as<MenuFlyoutItemBase>()) {
      return menuFlyoutSubItem.Items().Append(childMenuItem);
    }
  }
  if (auto infoBar = e.try_as<mux::Controls::InfoBar>()) {
    if (auto buttonBase = child.try_as<Controls::Primitives::ButtonBase>()) {
      return infoBar.ActionButton(buttonBase);
    }
  }
  if (auto menuBar = e.try_as<MenuBar>()) {
    if (auto mbi = child.try_as<MenuBarItem>()) {
      return menuBar.Items().InsertAt(index, mbi);
    }
  }
  if (auto muxMenuBar = e.try_as<mux::Controls::MenuBar>()) {
    if (auto mbi = child.try_as<mux::Controls::MenuBarItem>()) {
      return muxMenuBar.Items().InsertAt(index, mbi);
    }
  }
  if (auto menuBarItem = e.try_as<MenuBarItem>()) {
    if (auto mfi = child.try_as<MenuFlyoutItemBase>()) {
      return menuBarItem.Items().InsertAt(index, mfi);
    }
  }
  if (auto muxMenuBarItem = e.try_as<mux::Controls::MenuBarItem>()) {
    if (auto mfi = child.try_as<MenuFlyoutItemBase>()) {
      return muxMenuBarItem.Items().InsertAt(index, mfi);
    }
  }
  // else
  {
    auto cn = winrt::get_class_name(e);
    assert(false && "this element cannot have children");
  }
}

void XamlViewManager::RemoveAllChildren(xaml::FrameworkElement parent) {
  auto e = parent;
  if (auto panel = e.try_as<Panel>()) {
    return panel.Children().Clear();
  } else if (auto contentCtrl = e.try_as<ContentControl>()) {
    return contentCtrl.Content(nullptr);
  } else if (auto border = e.try_as<Border>()) {
    return border.Child(nullptr);
  } else if (auto itemsControl = e.try_as<ItemsControl>()) {
    return itemsControl.Items().Clear();
  }

  auto parentType = get_class_name(e);
  cdebug << "[react-native-xaml] Unhandled call to RemoveAllChildren with parent: " << parentType << "\n";
}

void XamlViewManager::RemoveChildAt(xaml::FrameworkElement parent, int64_t index) {
  auto e = parent;
  if (auto panel = e.try_as<Panel>()) {
    return panel.Children().RemoveAt(static_cast<uint32_t>(index));
  } else if (auto itemsControl = e.try_as<ItemsControl>()) {
    return itemsControl.Items().RemoveAt(static_cast<uint32_t>(index));
  } else if (auto wrapper = e.try_as<Wrapper>()) {
    if (auto parentContent = wrapper.WrappedObject()) {
      if (auto menuFlyout = parentContent.try_as<MenuFlyout>()) {
        return menuFlyout.Items().RemoveAt(static_cast<uint32_t>(index));
      }
    }
  } else if (index == 0) {
    if (auto contentCtrl = e.try_as<ContentControl>()) {
      return contentCtrl.Content(nullptr);
    } else if (auto border = e.try_as<Border>()) {
      return border.Child(nullptr);
    }
  }

  auto parentType = get_class_name(e);
  cdebug << "[react-native-xaml] Unhandled call to RemoveChildAt with parent: " << parentType << ", index: " << index
         << "\n";
}

void XamlViewManager::ReplaceChild(xaml::FrameworkElement parent, xaml::UIElement oldChild, xaml::UIElement newChild) {
  assert(false && "nyi");
}
} // namespace winrt::ReactNativeXaml
