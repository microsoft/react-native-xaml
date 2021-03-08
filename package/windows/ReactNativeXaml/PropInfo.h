#pragma once
#include <winrt/Microsoft.ReactNative.h>

struct PropInfo {
  stringKey propName;

  using isType_t = bool (*) (const winrt::Windows::Foundation::IInspectable&);
  isType_t isType;

  using xamlPropertyGetter_t = xaml::DependencyProperty(*)();
  xamlPropertyGetter_t xamlPropertyGetter;

  using xamlPropertySetter_t = void (*) (xaml::DependencyObject, xaml::DependencyProperty, const winrt::Microsoft::ReactNative::JSValue&);
  xamlPropertySetter_t xamlPropertySetter;

  winrt::Microsoft::ReactNative::ViewManagerPropertyType jsType;

  void ClearValue(xaml::DependencyObject o) const {
    o.ClearValue(xamlPropertyGetter());
  }

  void SetValue(xaml::DependencyObject o, const winrt::Microsoft::ReactNative::JSValue& v) const {
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
