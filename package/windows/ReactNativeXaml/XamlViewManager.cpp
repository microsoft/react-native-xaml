#include "pch.h"
#include "XamlViewManager.h"

#include "JSValueReader.h"
#include "NativeModules.h"
#include "XamlMetadata.h"
#include <winrt/Windows.UI.Xaml.Core.Direct.h>
#include <UI.Xaml.Input.h>
using namespace winrt;
using namespace Microsoft::ReactNative;
using namespace xaml;
using namespace xaml::Controls;

namespace winrt::ReactNativeXaml {

  // IViewManager
  hstring XamlViewManager::Name() noexcept {
    return L"XamlControl";
  }

  xaml::FrameworkElement XamlViewManager::CreateView() noexcept {
    assert(false);
    return nullptr;
  }

  winrt::IInspectable XamlViewManager::CreateViewWithProperties(winrt::Microsoft::ReactNative::IJSValueReader const& propertyMapReader) noexcept {
    const JSValueObject& propertyMap = JSValue::ReadObjectFrom(propertyMapReader);
    auto typeName = propertyMap["type"].AsString();
    return xamlMetadata.Create(typeName, m_reactContext);
  }

  // IViewManagerWithNativeProperties
  IMapView<hstring, ViewManagerPropertyType> XamlViewManager::NativeProps() noexcept {
    auto nativeProps = winrt::single_threaded_map<hstring, ViewManagerPropertyType>();
    nativeProps.Insert(L"type", ViewManagerPropertyType::String);
    xamlMetadata.PopulateNativeProps(nativeProps);
    return nativeProps.GetView();
  }

  void XamlViewManager::UpdateProperties(
    FrameworkElement const& view,
    IJSValueReader const& propertyMapReader) noexcept {

    const JSValueObject& propertyMap = JSValue::ReadObjectFrom(propertyMapReader);

    auto e = view;
    if (auto control = e.try_as<DependencyObject>()) {
      for (auto const& pair : propertyMap) {
        bool handled = false;
        auto const& propertyName = pair.first;
        auto const& propertyValue = pair.second;

        auto cn = get_class_name(e);
        if (auto prop = xamlMetadata.GetProp(propertyName, control)) {
          prop->SetValue(control, propertyValue);
          handled = true;
        }
        else if (propertyName == "type") {}
        else {
          auto className = winrt::get_class_name(e);
          assert(false && "unknown property");
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

  // IViewManagerWithCommands
  IVectorView<hstring> XamlViewManager::Commands() noexcept {
    auto commands = winrt::single_threaded_vector<hstring>();
    commands.Append(L"CustomCommand");
    return commands.GetView();
  }

  void XamlViewManager::DispatchCommand(
    FrameworkElement const& view,
    winrt::hstring const& commandId,
    winrt::Microsoft::ReactNative::IJSValueReader const& /*commandArgsReader*/) noexcept {
    if (auto control = view.try_as<winrt::Windows::UI::Xaml::Controls::HyperlinkButton>()) {
      if (commandId == L"CustomCommand") {
        // const JSValueArray& commandArgs = JSValue::ReadArrayFrom(commandArgsReader);
        // Execute command
      }
    }
  }

  // IViewManagerWithReactContext
  IReactContext XamlViewManager::ReactContext() noexcept {
    return m_reactContext;
  }

  void XamlViewManager::ReactContext(IReactContext reactContext) noexcept {
    m_reactContext = reactContext;
  }

  void XamlViewManager::AddView(xaml::FrameworkElement parent, xaml::UIElement child, int64_t index) {
    auto e = parent;
    auto parentType = winrt::get_class_name(e);
    auto childType = winrt::get_class_name(child);
    if (auto childAsCC = child.try_as<ContentControl>()) {
      auto childContent = childAsCC.Content();
      childType = winrt::get_class_name(childContent);
      if (auto childFlyout = childContent.try_as<Controls::Primitives::FlyoutBase>()) {
        Primitives::FlyoutBase::SetAttachedFlyout(e, childFlyout);
        childAsCC.DataContext(e);
        if (auto button = e.try_as<Button>()) {
          return button.Flyout(childFlyout);
        }
        else {
          if (auto uiParent = e.try_as<UIElement>()) {
            return uiParent.ContextFlyout(childFlyout);
          }
        }
      }
    }

    if (auto panel = e.try_as<Panel>()) {
      return panel.Children().InsertAt(static_cast<uint32_t>(index), child);
    }
    else if (auto contentCtrl = e.try_as<ContentControl>()) {
      auto parentContent = contentCtrl.Content();
      if (auto menuFlyout = parentContent.try_as<MenuFlyout>()) {
        if (auto mfi = child.try_as<MenuFlyoutItemBase>()) {
          return menuFlyout.Items().InsertAt(static_cast<uint32_t>(index), mfi);
        }
      }
      else if (auto flyout = parentContent.try_as<Flyout>()) {
        if (index == 0) {
          return flyout.Content(child);
        }
      }

      if (index == 0) {
        return contentCtrl.Content(child);
      }
    }
    else if (auto border = e.try_as<Border>()) {
      if (index == 0) {
        return border.Child(child);
      }
    }
    else if (auto itemsControl = e.try_as<ItemsControl>()) {
      return itemsControl.Items().InsertAt(static_cast<uint32_t>(index), child);
    }
    //else 
    {
      auto cn = winrt::get_class_name(e);
      assert(false && "this element cannot have children");
    }
  }

  void XamlViewManager::RemoveAllChildren(xaml::FrameworkElement parent) {
    auto e = parent;
    if (auto panel = e.try_as<Panel>()) {
      return panel.Children().Clear();
    }
    else if (auto contentCtrl = e.try_as<ContentControl>()) {
      return contentCtrl.Content(nullptr);
    }
    else if (auto border = e.try_as<Border>()) {
      return border.Child(nullptr);
    }
    else if (auto itemsControl = e.try_as<ItemsControl>()) {
      return itemsControl.Items().Clear();
    }
  }

  void XamlViewManager::RemoveChildAt(xaml::FrameworkElement parent, int64_t index) {
    auto e = parent;
    if (auto panel = e.try_as<Panel>()) {
      return panel.Children().RemoveAt(static_cast<uint32_t>(index));
    }
    else if (auto itemsControl = e.try_as<ItemsControl>()) {
      return itemsControl.Items().RemoveAt(static_cast<uint32_t>(index));
    }
    else if (index == 0) {
      if (auto contentCtrl = e.try_as<ContentControl>()) {
        return contentCtrl.Content(nullptr);
      }
      else if (auto border = e.try_as<Border>()) {
        return border.Child(nullptr);
      }
    }
  }

  void XamlViewManager::ReplaceChild(xaml::FrameworkElement parent, xaml::UIElement oldChild, xaml::UIElement newChild) {
    assert(false && "nyi");
  }
}
