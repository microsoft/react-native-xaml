#include "pch.h"
#include "XamlViewManager.h"

#include "JSValueReader.h"
#include "NativeModules.h"
#include "XamlMetadata.h"
#include <winrt/Windows.UI.Xaml.Core.Direct.h>
#include <UI.Xaml.Input.h>

/// from RNW ValueUtils.cpp
#pragma region Copied from RNW ValueUtils.cpp
namespace ColorUtils {
  struct ColorComp {
    bool operator()(const winrt::Windows::UI::Color& lhs, const winrt::Windows::UI::Color& rhs) const {
      return (
        lhs.A < rhs.A ||
        lhs.A == rhs.A && (lhs.R < rhs.R || lhs.R == rhs.R && (lhs.G < rhs.G || lhs.G == rhs.G && lhs.B < rhs.B)));
    }
  };

  xaml::Media::SolidColorBrush SolidBrushFromColor(winrt::Windows::UI::Color color) {
    thread_local static std::map<winrt::Windows::UI::Color, winrt::weak_ref<xaml::Media::SolidColorBrush>, ColorComp>
      solidColorBrushCache;

    if (solidColorBrushCache.count(color) != 0) {
      if (auto brush = solidColorBrushCache[color].get()) {
        return brush;
      }
    }

    xaml::Media::SolidColorBrush brush(color);
    solidColorBrushCache[color] = winrt::make_weak(brush);
    return brush;
  }

  inline BYTE GetAFromArgb(DWORD v) {
    return ((BYTE)((v & 0xFF000000) >> 24));
  }
  inline BYTE GetRFromArgb(DWORD v) {
    return ((BYTE)((v & 0x00FF0000) >> 16));
  }
  inline BYTE GetGFromArgb(DWORD v) {
    return ((BYTE)((v & 0x0000FF00) >> 8));
  }
  inline BYTE GetBFromArgb(DWORD v) {
    return ((BYTE)((v & 0x000000FF)));
  }


  winrt::Windows::UI::Color ColorFromNumber(DWORD argb) {
    return winrt::ColorHelper::FromArgb(GetAFromArgb(argb), GetRFromArgb(argb), GetGFromArgb(argb), GetBFromArgb(argb));
  }

  winrt::Windows::UI::Color ColorFrom(const winrt::Microsoft::ReactNative::JSValue& v) {
    if (v.Type() != winrt::Microsoft::ReactNative::JSValueType::Int64 &&
      v.Type() != winrt::Microsoft::ReactNative::JSValueType::Double)
      return winrt::Windows::UI::Colors::Transparent();
    return ColorFromNumber(v.AsUInt32());
  }

  xaml::Media::Brush GetBrushFromThemeResource(winrt::hstring resourceName) {
    winrt::hstring xamlString =
      L"<ResourceDictionary"
      L"    xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation'"
      L"    xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml'>"
      L"  <SolidColorBrush"
      L"      x:Key='" +
      resourceName +
      L"'"
      L"      Color='{ThemeResource " +
      resourceName +
      "}' />"
      L"</ResourceDictionary>";

    auto dictionary{ winrt::unbox_value<xaml::ResourceDictionary>(xaml::Markup::XamlReader::Load(xamlString)) };

    auto brush{ winrt::unbox_value<xaml::Media::SolidColorBrush>(dictionary.TryLookup(winrt::box_value(resourceName))) };
    return brush;
  }

  xaml::Media::Brush BrushFromColorObject(winrt::hstring resourceName) {
    thread_local static std::map<winrt::hstring, winrt::weak_ref<xaml::Media::Brush>> accentColorMap = {
        {L"SystemAccentColor", {nullptr}},
        {L"SystemAccentColorLight1", {nullptr}},
        {L"SystemAccentColorLight2", {nullptr}},
        {L"SystemAccentColorLight3", {nullptr}},
        {L"SystemAccentColorDark1", {nullptr}},
        {L"SystemAccentColorDark2", {nullptr}},
        {L"SystemAccentColorDark3", {nullptr}},
        {L"SystemListAccentLowColor", {nullptr}},
        {L"SystemListAccentMediumColor", {nullptr}},
        {L"SystemListAccentHighColor", {nullptr}} };
    xaml::Media::Brush brush{ nullptr };

    if (accentColorMap.find(resourceName) != accentColorMap.end()) {
      if (brush = accentColorMap.at(resourceName).get()) {
        return brush;
      }
      try {
        brush = GetBrushFromThemeResource(resourceName);
      } catch (...) {}
    }

    if (!brush) {
      try {
        auto color = winrt::unbox_value<winrt::Windows::UI::Color>(xaml::Markup::XamlBindingHelper::ConvertValue(winrt::xaml_typename<winrt::Windows::UI::Color>(), winrt::box_value(resourceName)));
        brush = SolidBrushFromColor(color);
      }
      catch (...) {}
    }
    if (!brush) {
      winrt::IInspectable resource{ xaml::Application::Current().Resources().TryLookup(winrt::box_value(resourceName)) };
      brush = winrt::unbox_value<xaml::Media::Brush>(resource);
    }

    if (brush) {
      accentColorMap[resourceName] = winrt::make_weak(brush);
    }

    return brush;
  }



  xaml::Media::Brush BrushFrom(const winrt::Microsoft::ReactNative::JSValue& v) {
    if (v.Type() == winrt::Microsoft::ReactNative::JSValueType::String) {
      return BrushFromColorObject(winrt::to_hstring(v.AsString()));
    }

    return SolidBrushFromColor(ColorFrom(v));
  }
}
#pragma endregion

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

  void SetResources(const xaml::FrameworkElement& fe, const JSValueObject& dict) {
    ResourceDictionary rd;

    for (auto const& entry : dict) {
      const auto& name = entry.first;
      const auto& value = entry.second;
      auto brush = ColorUtils::BrushFrom(value);
      auto nameII = winrt::box_value(winrt::to_hstring(name));
      rd.Insert(nameII, brush);
      //if (auto v = rd.TryLookup(nameII)) {
      //  if (auto scb = v.try_as<xaml::Media::SolidColorBrush>()) {
      //    if (auto newScb = brush.try_as<xaml::Media::SolidColorBrush>()) {
      //      scb.Color(newScb.Color());
      //      continue;
      //    }
      //    else {
      //      assert(false && "changing from a color to a non-color brush");
      //    }
      //  }
      //  else {
      //    assert(false && "changing from a non-color brush");
      //  }
      //}
      ////else 
      //{
      //  rd.Insert(nameII, brush);
      //}
    }
    fe.Resources(rd);
  }

  // IViewManagerWithNativeProperties
  IMapView<hstring, ViewManagerPropertyType> XamlViewManager::NativeProps() noexcept {
    auto nativeProps = winrt::single_threaded_map<hstring, ViewManagerPropertyType>();
    nativeProps.Insert(L"type", ViewManagerPropertyType::String);
    nativeProps.Insert(L"resources", ViewManagerPropertyType::Map);
    xamlMetadata.PopulateNativeProps(nativeProps);
    xamlMetadata.PopulateNativeEvents(nativeProps);
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
        else if (auto eventAttacher = xamlMetadata.AttachEvent(m_reactContext, propertyName, control, propertyValue.AsBoolean())) {
        }
        else if (propertyName == "type") {}
        else if (propertyName == "resources" && propertyValue.Type() == JSValueType::Object && control.try_as<xaml::FrameworkElement>()) {
          SetResources(control.as<xaml::FrameworkElement>(), propertyValue.AsObject());
        }
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
