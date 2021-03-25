#pragma once
#include <pch.h>
#include <functional>
#include <string>
#include <JSValue.h>
#include <JSValueReader.h>
#include <JSValueXaml.h>

#include <winrt/Windows.Foundation.Collections.h>
#include <UI.Xaml.Media.h>
#include "Crc32Str.h"

using namespace xaml;
using namespace xaml::Controls;
using namespace winrt::Microsoft::ReactNative;

namespace winrt::Microsoft::ReactNative {
  inline void ReadValue(JSValue const& jsValue, xaml::Media::SolidColorBrush& value) noexcept {
    auto color = XamlHelper::ColorFrom([&jsValue](IJSValueWriter const& writer) noexcept { jsValue.WriteTo(writer); });
    value = xaml::Media::SolidColorBrush(color);
  }

  inline void ReadValue(JSValue const& jsValue, xaml::Thickness& value) noexcept {
    if (auto array = jsValue.TryGetArray()) {
      if (array->size() == 4) {
        value = Thickness{ (*array)[0].AsDouble(), (*array)[1].AsDouble(), (*array)[2].AsDouble() , (*array)[3].AsDouble() };
        return;
      }
    }
    else {
      const auto& obj = jsValue.AsObject();
      value = Thickness{ obj["left"].AsDouble(), obj["top"].AsDouble(), obj["bottom"].AsDouble(), obj["right"].AsDouble() };
      return;
    }
  }

  inline void ReadValue(JSValue const& jsValue, winrt::Windows::Foundation::Uri& value) noexcept {
    value = Uri{ winrt::to_hstring(jsValue.AsString()) };
  }
}


using Wrapper = winrt::Windows::UI::Xaml::Controls::ContentControl;

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
void SetPropValue(const xaml::DependencyObject o, const xaml::DependencyProperty& prop, const winrt::Microsoft::ReactNative::JSValue& v) {
  auto valueEnum = MakeEnum<T>(v.AsInt32());
  o.SetValue(prop, valueEnum);
}

template<typename T, std::enable_if_t<
  !std::is_enum<T>::value && 
  !std::is_same<winrt::hstring, T>::value && 
  !std::is_same<winrt::Windows::Foundation::IInspectable, T>::value &&
  !std::is_same<winrt::Windows::Foundation::Uri, T>::value
  , int> = 0>
void SetPropValue(const xaml::DependencyObject& o, const xaml::DependencyProperty& prop, const winrt::Microsoft::ReactNative::JSValue& v) {
  auto b = v.To<T>();
  o.SetValue(prop, winrt::box_value(b));
}

template<typename T, std::enable_if_t<std::is_same<T, winrt::hstring>::value, int> = 0>
void SetPropValue(const xaml::DependencyObject& o, const xaml::DependencyProperty& prop, const winrt::Microsoft::ReactNative::JSValue& v) {
  auto b = v.AsString();
  o.SetValue(prop, winrt::box_value(winrt::to_hstring(b)));
}

template<typename T, std::enable_if_t<std::is_same<T, winrt::Windows::Foundation::Uri>::value, int> = 0>
void SetPropValue(const xaml::DependencyObject& o, const xaml::DependencyProperty& prop, const winrt::Microsoft::ReactNative::JSValue& v) {
  auto cn = winrt::get_class_name(o);
  auto uri = Uri{ winrt::to_hstring(v.AsString()) };
  o.SetValue(prop, uri);
}

template<typename T, std::enable_if_t<std::is_same<T, winrt::Windows::Foundation::IInspectable>::value, int> = 0>
void SetPropValue(const xaml::DependencyObject& o, const xaml::DependencyProperty& prop, const winrt::Microsoft::ReactNative::JSValue& v) {
  switch (v.Type()) {
  case JSValueType::String: return SetPropValue<winrt::hstring>(o, prop, v);
  case JSValueType::Boolean: return SetPropValue<bool>(o, prop, v);
  case JSValueType::Double: return SetPropValue<double>(o, prop, v);
  case JSValueType::Int64: return SetPropValue<int64_t>(o, prop, v);
  case JSValueType::Object: {
    const auto& obj = v.AsObject();
    if (obj.find("string") != obj.cend()) {
      const auto& value = obj["string"];
      return SetPropValue<winrt::Windows::Foundation::IInspectable>(o, prop, value);
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

  using xamlPropertySetter_t = void (*) (const xaml::DependencyObject&, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue&);
  xamlPropertySetter_t xamlPropertySetter;

  ViewManagerPropertyType jsType;

  void ClearValue(const xaml::DependencyObject& o) const {
    o.ClearValue(xamlPropertyGetter());
  }

  void SetValue(const xaml::DependencyObject& o, const winrt::Microsoft::ReactNative::JSValue& v) const {
    auto dp = xamlPropertyGetter ? xamlPropertyGetter() : nullptr;
    if (v.IsNull()) {
      if (dp) {
        o.ClearValue(dp);
      }
    }
    else {
      xamlPropertySetter(o, dp, v);
    }
  }
};

template<typename T>
T Unwrap(const winrt::Windows::Foundation::IInspectable& i) {
  if (auto contentControl = i.try_as<Wrapper>()) {
    return contentControl.Content().try_as<T>();
  }
  return nullptr;
}


struct EventAttachInfo {
  winrt::Microsoft::ReactNative::IReactContext context{ nullptr };
  winrt::Windows::Foundation::IInspectable obj{ nullptr };
  std::string jsEventName;
};

struct EventInfo {
  const char* const name;

  using attachHandlers_t = winrt::event_token (*)(const EventAttachInfo&, bool isWrapped, winrt::event_token);
  attachHandlers_t attachHandler;

  static const EventInfo xamlEventMap[];
};

extern ConstantProviderDelegate GetEvents;

struct AttachedEventInfo {
  std::string name;
  winrt::event_token token;
};

struct WrapperInfo {
  winrt::Windows::Foundation::IInspectable wrappedObject;
  std::vector<AttachedEventInfo> events;
};

struct XamlMetadata {
  winrt::Windows::Foundation::IInspectable Create(const std::string& typeName, const winrt::Microsoft::ReactNative::IReactContext& context);
  XamlMetadata();
  const PropInfo* GetProp(const std::string& propertyName, const winrt::Windows::Foundation::IInspectable& obj) const;
  const EventInfo* AttachEvent(const winrt::Microsoft::ReactNative::IReactContext& context, const std::string& propertyName, const winrt::Windows::Foundation::IInspectable& obj, bool attaching);

  void PopulateNativeProps(winrt::Windows::Foundation::Collections::IMap<winrt::hstring, ViewManagerPropertyType>& nativeProps) const;
  void PopulateNativeEvents(winrt::Windows::Foundation::Collections::IMap<winrt::hstring, ViewManagerPropertyType>& nativeProps) const;

private:
  winrt::Windows::Foundation::IInspectable XamlMetadata::Create(const std::string_view& typeName) const;
  static const PropInfo* FindFirstMatch(const stringKey& key, const winrt::Windows::Foundation::IInspectable& obj, const PropInfo* map, size_t size);
  std::map<xaml::FrameworkElement, WrapperInfo> wrapperToWrapped;
};