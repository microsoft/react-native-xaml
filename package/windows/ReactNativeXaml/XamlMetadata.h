#pragma once
#include <pch.h>
#include <winrt/base.h>
#include <functional>
#include <JSValue.h>
#include <JSValueReader.h>
#include <JSValueXaml.h>
using namespace xaml;
using namespace xaml::Controls;

// MUST BE KEPT IN SYNC WITH JSValueType
enum class FromJSType
{
  Null = 0,
  Object = 1,
  Array = 2,
  String = 3,
  Boolean = 4,
  Int64 = 5,
  Double = 6,
  SolidColorBrush = 7
};

enum class XamlPropType {
  Int,
  Double,
  String,
  Object
};

template <typename T> bool IsType(IInspectable i) { return i.try_as<T>() != nullptr; }

struct PropInfo {
  std::function<bool(IInspectable)> isType;
  std::function<xaml::DependencyProperty()> xamlPropertyGetter;
  FromJSType jsType;
  XamlPropType xamlType;

  void ClearValue(xaml::DependencyObject o) const {
    o.ClearValue(xamlPropertyGetter());
  }

  void SetValue(xaml::DependencyObject o, const winrt::Microsoft::ReactNative::JSValue& v) const {
    switch (xamlType) {
    case XamlPropType::Double: {
      auto d = v.AsDouble();
      SetValue(o, d);
      break;
    }
    case XamlPropType::Int: {
      auto i = v.AsInt32();
      SetValue(o, i);
      break;
    }
    case XamlPropType::String: {
      auto s = v.AsString();
      SetValue(o, winrt::to_hstring(s));
      break;
    }
    case XamlPropType::Object: {
      switch (jsType)
      {
      case FromJSType::SolidColorBrush: {
        auto scb = v.To<xaml::Media::Brush>();
        SetValue(o, scb);
        break;
      }
      case winrt::Microsoft::ReactNative::JSValueType::String: {
        auto s = v.AsString();
        SetValue(o, winrt::box_value(winrt::to_hstring(s)));
      }
      default:
        break;
      }
    }
    }
  }
private:
  void SetValue(xaml::DependencyObject o, int v) const {
    if (xamlType == XamlPropType::Int) {
      o.SetValue(xamlPropertyGetter(), winrt::box_value(v));
    }
    else if (xamlType == XamlPropType::Double) {
      o.SetValue(xamlPropertyGetter(), winrt::box_value((double)v));
    }
    else { assert(false); }
  }
  void SetValue(xaml::DependencyObject o, double v) const {
    if (xamlType == XamlPropType::Double) {
      o.SetValue(xamlPropertyGetter(), winrt::box_value(v));
    }
    else assert(false);
  }
  void SetValue(xaml::DependencyObject  o, const winrt::hstring& v) const {
    if (xamlType == XamlPropType::String) {
      o.SetValue(xamlPropertyGetter(), winrt::box_value(v));
    }
    else assert(false);
  }
  void SetValue(xaml::DependencyObject o, const winrt::IInspectable& v) const {
    if (xamlType == XamlPropType::Object) {
      o.SetValue(xamlPropertyGetter(), v);
    }
    else assert(false);
  }

};

struct XamlMetadata {
  static const std::map<std::string, std::function<xaml::DependencyObject()>> xamlTypeCreatorMap;
  static const std::multimap<std::string, PropInfo> xamlPropertyMap;
  static const std::map<std::string, std::function<void(IInspectable o, winrt::Microsoft::ReactNative::IReactContext context)> > xamlEventMap;
  static const PropInfo* GetProp(const std::string& propertyName, const IInspectable& obj);
};