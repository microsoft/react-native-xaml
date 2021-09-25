#pragma once
#include <pch.h>
#include <functional>
#include <string>
#include <JSValue.h>
#include <JSValueReader.h>
#include <JSValueXaml_local.h>

#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.UI.Xaml.Controls.Maps.h>
#include <UI.Xaml.Media.Imaging.h>
#include <UI.Xaml.Media.h>
#include "Crc32Str.h"
#include <JSI/JsiApiContext.h>
#include "XamlObject.h"
#include <Wrapper.h>

using namespace xaml;
using namespace xaml::Controls;
using namespace winrt::Microsoft::ReactNative;

namespace winrt::Microsoft::ReactNative {

  inline void ReadValue(JSValue const& jsValue, xaml::Style& value) noexcept {
    auto key = winrt::to_hstring(jsValue.AsJSString());
    value = Application::Current().Resources().Lookup(winrt::box_value(key)).as<Style>();
  }

  inline void ReadValue(JSValue const& jsValue, xaml::Media::SolidColorBrush& value) noexcept {
    auto color = XamlHelper::ColorFrom([&jsValue](IJSValueWriter const& writer) noexcept { jsValue.WriteTo(writer); });
    value = xaml::Media::SolidColorBrush(color);
  }

  inline void ReadValue(JSValue const& jsValue, xaml::Media::FontFamily& value) noexcept {
    auto str = winrt::to_hstring(jsValue.AsString());
    value = xaml::Media::FontFamily(str);
  }

  winrt::fire_and_forget SetImageSourceForInlineData(std::string str, xaml::DependencyObject o, xaml::DependencyProperty dp);

  enum class XamlPropType {
    Boolean,
    Int,
    Double,
    String,
    Object,
    Enum,
  };

  template <typename T> bool IsType(const winrt::Windows::Foundation::IInspectable& i) { return i.try_as<T>() != nullptr; }

  template<typename T, std::enable_if_t<std::is_enum<T>::value, int> = 0>
  void SetPropValue(const xaml::DependencyObject o, const xaml::DependencyProperty& prop, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext&) {
    auto valueEnum = MakeEnum<T>(v.AsInt32());
    o.SetValue(prop, valueEnum);
  }

  template<typename T, std::enable_if_t<
    !std::is_enum<T>::value &&
    !std::is_same<winrt::hstring, T>::value &&
    !std::is_same<winrt::Windows::Foundation::IInspectable, T>::value &&
    !std::is_same<winrt::Windows::Foundation::Uri, T>::value &&
    !std::is_same<xaml::Media::ImageSource, T>::value
    , int> = 0>
    void SetPropValue(const xaml::DependencyObject& o, const xaml::DependencyProperty& prop, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext&) {
    auto b = v.To<T>();
    o.SetValue(prop, winrt::box_value(b));
  }

  template<typename T, std::enable_if_t<
    std::is_same<xaml::Media::ImageSource, T>::value, int> = 0>
    void SetPropValue(const xaml::DependencyObject& o, const xaml::DependencyProperty& prop, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext&) {

    const auto str = v.AsString();
    const auto uri = Uri{ winrt::to_hstring(str) };

    xaml::Media::ImageSource value{ nullptr };
    if (uri.SchemeName() == L"data") {
      SetImageSourceForInlineData(str, o, prop);
    }
    else if (str.ends_with(".svg") || str.ends_with(".svgz")) {
      value = xaml::Media::Imaging::SvgImageSource{ uri };
      o.SetValue(prop, value);
    }
    else {
      value = xaml::Media::Imaging::BitmapImage{ uri };
      o.SetValue(prop, value);
    }
  }

  inline void ReadValue(JSValue const& jsValue, xaml::Media::Geometry& value) noexcept {
    const auto v = winrt::to_hstring(jsValue.AsJSString());
    value = Markup::XamlBindingHelper::ConvertValue(winrt::xaml_typename<xaml::Media::PathGeometry>(), winrt::box_value(v)).as<xaml::Media::Geometry>();
  }

  inline void ReadValue(JSValue const& jsValue, Windows::UI::Text::FontWeight& value) noexcept {
    value.Weight = jsValue.AsInt16();
  }
}


// MapStyle has a bug where it expects the property to be set as an IReference<MapStyle> always, and does not support IReference<uint32_t>
template<typename T, std::enable_if_t<
  std::is_same<winrt::Windows::UI::Xaml::Controls::Maps::MapStyle, T>::value, int> = 0>
void SetPropValue(const xaml::DependencyObject& o, const xaml::DependencyProperty& prop, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext&) {
  auto boxed = v.To<winrt::Windows::UI::Xaml::Controls::Maps::MapStyle>();
  o.SetValue(prop, winrt::box_value(boxed));
}

template<typename T, std::enable_if_t<std::is_same<T, winrt::hstring>::value, int> = 0>
void SetPropValue(const xaml::DependencyObject& o, const xaml::DependencyProperty& prop, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext&) {
  auto b = v.AsString();
  o.SetValue(prop, winrt::box_value(winrt::to_hstring(b)));
}

template<typename T, std::enable_if_t<std::is_same<T, winrt::Windows::Foundation::Uri>::value, int> = 0>
void SetPropValue(const xaml::DependencyObject& o, const xaml::DependencyProperty& prop, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext&) {
  auto cn = winrt::get_class_name(o);
  auto uri = Uri{ winrt::to_hstring(v.AsString()) };
  o.SetValue(prop, uri);
}

template<typename T, std::enable_if_t<std::is_same<T, winrt::Windows::Foundation::IInspectable>::value, int> = 0>
void SetPropValue(const xaml::DependencyObject& o, const xaml::DependencyProperty& prop, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext& context) {
  switch (v.Type()) {
  case JSValueType::String: return SetPropValue<winrt::hstring>(o, prop, v, context);
  case JSValueType::Boolean: return SetPropValue<bool>(o, prop, v, context);
  case JSValueType::Double: return SetPropValue<double>(o, prop, v, context);
  case JSValueType::Int64: return SetPropValue<int64_t>(o, prop, v, context);
  case JSValueType::Object: {
    const auto& obj = v.AsObject();
    if (obj.find("string") != obj.cend()) {
      const auto& value = obj["string"];
      return SetPropValue<winrt::Windows::Foundation::IInspectable>(o, prop, value, context);
    }
  }
  }
}

struct PropInfo {
  stringKey propName;

  using asType_t = winrt::Windows::Foundation::IInspectable (__cdecl *) (const winrt::Windows::Foundation::IInspectable&);
  asType_t asType;

  using xamlPropertyGetter_t = xaml::DependencyProperty(*)();
  xamlPropertyGetter_t xamlPropertyGetter;

  using xamlPropertySetter_t = void (*) (const xaml::DependencyObject&, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue&, const winrt::Microsoft::ReactNative::IReactContext& reactContext);
  xamlPropertySetter_t xamlPropertySetter;

  ViewManagerPropertyType jsType;

  void ClearValue(const xaml::DependencyObject& o) const {
    o.ClearValue(xamlPropertyGetter());
  }

  void SetValue(const xaml::DependencyObject& o, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext& context) const {
    auto dp = xamlPropertyGetter ? xamlPropertyGetter() : nullptr;
    if (v.IsNull()) {
      if (dp) {
        o.ClearValue(dp);
      }
    }
    else {
      xamlPropertySetter(o, dp, v, context);
    }
  }
};

template<typename T>
T Unwrap(const winrt::Windows::Foundation::IInspectable& i) {
  if (auto wrapper = i.try_as<winrt::ReactNativeXaml::Wrapper>()) {
    return wrapper.WrappedObject().try_as<T>();
  }
  return nullptr;
}


extern ConstantProviderDelegate GetEvents;

struct AttachedEventInfo {
  std::string name;
  winrt::event_token token;
};

struct WrapperInfo {
  winrt::Windows::Foundation::IInspectable wrappedObject;
  std::vector<AttachedEventInfo> events;
};

struct XamlMetadata;

struct EventAttachInfo {
  winrt::Microsoft::ReactNative::IReactContext context{ nullptr };
  winrt::Windows::Foundation::IInspectable obj{ nullptr };
  std::string jsEventName;
  const XamlMetadata& xamlMetadata;
};


struct EventInfo {
  const char* const name;

  using attachHandlers_t = winrt::event_token(*)(const EventAttachInfo&, bool isWrapped, winrt::event_token);
  attachHandlers_t attachHandler;

  static const EventInfo xamlEventMap[];
};


struct XamlObject;

struct XamlMetadata : std::enable_shared_from_this<XamlMetadata> {
  XamlMetadata() = default;
  winrt::Windows::Foundation::IInspectable Create(const std::string& typeName, const winrt::Microsoft::ReactNative::IReactContext& context);
  void SetupEventDispatcher(const winrt::Microsoft::ReactNative::IReactContext& context);
  const PropInfo* GetProp(const std::string& propertyName, const winrt::Windows::Foundation::IInspectable& obj) const;
  const EventInfo* AttachEvent(const winrt::Microsoft::ReactNative::IReactContext& context, const std::string& propertyName, const winrt::Windows::Foundation::IInspectable& obj, bool attaching);
  void DispatchCommand(FrameworkElement const& view, winrt::hstring const& commandId, const winrt::Microsoft::ReactNative::JSValueArray& args) const noexcept;

  void PopulateNativeProps(winrt::Windows::Foundation::Collections::IMap<winrt::hstring, ViewManagerPropertyType>& nativeProps) const;
  void PopulateNativeEvents(winrt::Windows::Foundation::Collections::IMap<winrt::hstring, ViewManagerPropertyType>& nativeProps) const;
  void PopulateNativeProps(std::vector<std::string>& names, const winrt::Windows::Foundation::IInspectable& obj) const;
  void PopulateCommands(const winrt::Windows::Foundation::Collections::IVector<winrt::hstring>& commands) const;

  void JsiDispatchEvent(facebook::jsi::Runtime& rt, int64_t viewTag, std::string&& eventName, std::shared_ptr<facebook::jsi::Object>& eventData) const noexcept;
  std::optional<facebook::jsi::Function> m_callFunctionReturnFlushedQueue;
  winrt::Microsoft::ReactNative::IReactDispatcher UIDispatcher() const { return m_reactContext.UIDispatcher(); }

  FrameworkElement GetFlyoutTarget(winrt::Windows::Foundation::IInspectable wrapper);

private:
  winrt::Windows::Foundation::IInspectable Create(const std::string_view& typeName) const;
  static const PropInfo* FindFirstMatch(const stringKey& key, const winrt::Windows::Foundation::IInspectable& obj, const PropInfo* map, size_t size);
  winrt::Microsoft::ReactNative::IReactContext m_reactContext;
  std::map<xaml::FrameworkElement, WrapperInfo> wrapperToWrapped;
};

xaml::DependencyProperty GetPriorityProperty();
