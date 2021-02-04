#include "pch.h"
#include "XamlViewManager.h"

#include "JSValueReader.h"
#include "NativeModules.h"
#include <JSValueXaml.h>

using namespace winrt;
using namespace Microsoft::ReactNative;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace xaml;
using namespace xaml::Controls;

namespace winrt::ReactNativeXaml {
  using DelegatingType = xaml::Controls::ContentControl;
  //using DelegatingType = xaml::Controls::Panel;
  IInspectable Content(const xaml::Controls::ContentControl& t) {
    return t.Content();
  }
  void Content(const xaml::Controls::ContentControl& t, const IInspectable& v) {
    t.Content(v);
  }

  // IViewManager
  hstring XamlViewManager::Name() noexcept {
    return L"XamlControl";
  }

  xaml::FrameworkElement XamlViewManager::CreateView() noexcept {
    auto delegating = DelegatingType();
    return delegating;
  }

  // IViewManagerWithNativeProperties
  IMapView<hstring, ViewManagerPropertyType> XamlViewManager::NativeProps() noexcept {
    auto nativeProps = winrt::single_threaded_map<hstring, ViewManagerPropertyType>();
    nativeProps.Insert(L"type", ViewManagerPropertyType::String);
    nativeProps.Insert(L"text", ViewManagerPropertyType::String);
    nativeProps.Insert(L"color", ViewManagerPropertyType::Color);
    nativeProps.Insert(L"backgroundColor", ViewManagerPropertyType::Color);

    return nativeProps.GetView();
  }

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

#define MAKE_GET_DP(type, prop) IsType<type>, []() { return type::prop(); }

  struct PropInfo {
    std::function<bool(IInspectable)> isType;
    std::function<xaml::DependencyProperty()> xamlPropertyGetter;
    FromJSType jsType;
    XamlPropType xamlType;

    void ClearValue(xaml::DependencyObject o) const {
      o.ClearValue(xamlPropertyGetter());
    }

    void SetValue(xaml::DependencyObject o, const JSValue& v) const {
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
        case JSValueType::String: {
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

#define CREATE_TYPE(T) [](){return T();}

  const std::map<std::string, std::function<xaml::DependencyObject()>> xamlTypeCreatorMap = {
    { "hyperlinkButton", CREATE_TYPE(HyperlinkButton)},
    { "textblock", CREATE_TYPE(TextBlock)},
  };

  const std::multimap<std::string, PropInfo> xamlPropertyMap = {
    { "width", { MAKE_GET_DP(FrameworkElement, WidthProperty), FromJSType::Double, XamlPropType::Double }},
    { "height", { MAKE_GET_DP(FrameworkElement, HeightProperty), FromJSType::Double, XamlPropType::Double }},
    { "text", { MAKE_GET_DP(ContentControl, ContentProperty), FromJSType::String, XamlPropType::Object }},
    { "text", { MAKE_GET_DP(TextBlock, TextProperty), FromJSType::String, XamlPropType::String }},
    { "color", { MAKE_GET_DP(Control, ForegroundProperty), FromJSType::SolidColorBrush, XamlPropType::Object }},
    { "color", { MAKE_GET_DP(TextBlock, ForegroundProperty), FromJSType::SolidColorBrush, XamlPropType::Object }},
    { "backgroundColor", { MAKE_GET_DP(Control, BackgroundProperty), FromJSType::SolidColorBrush, XamlPropType::Object }},
  };

  void DispatchEvent(winrt::weak_ref<IReactContext> ctx, IInspectable sender, std::wstring topEvtName) {
    
  }

  //ctx.DispatchEvent(sender.as<xaml::FrameworkElement>(), L"top" L#evtName, [](auto const& evtDataWriter) noexcept {}); \

#define MAKE_EVENT(evtName, xamlType) { #evtName, { [](IInspectable o, IReactContext reactContext) { \
          if (auto c = o.try_as<xamlType>()) {  \
            auto ctx = winrt::make_weak(reactContext); \
            c.evtName([ctx] (auto&& sender, auto&& /*args*/) { \
              if (auto context = ctx.get()) { \
                context.DispatchEvent(sender.as<xaml::FrameworkElement>(), L"top" L#evtName, [](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {}); \
              } \
            }); \
          } \
        } } }

  const std::map<std::string, std::function<void(IInspectable o, IReactContext context)> > xamlEventMap = {
//    MAKE_EVENT(Click, xaml::Controls::Primitives::ButtonBase),
       { "Click", { [](IInspectable o, IReactContext context) {
         if (auto c = o.try_as<xaml::Controls::Primitives::ButtonBase>()) {
           c.Click([context](auto&& sender, auto&& /*args*/) {
             context.DispatchEvent(sender.as<xaml::FrameworkElement>(), L"top" L"Click", [](winrt::Microsoft::ReactNative::IJSValueWriter const& /*eventDataWriter*/) noexcept {}); });
    }} } }
  };

  const PropInfo* GetProp(const std::string& propertyName, const IInspectable& obj) {
    auto propRange = xamlPropertyMap.equal_range(propertyName);
    for (auto prop = propRange.first; prop != propRange.second; ++prop)
    {
      if (prop->second.isType(obj)) { return &(prop->second); }
    }
    return nullptr;
  }

  void XamlViewManager::UpdateProperties(
    FrameworkElement const& view,
    IJSValueReader const& propertyMapReader) noexcept {

    const JSValueObject& propertyMap = JSValue::ReadObjectFrom(propertyMapReader);

    const auto delegating = view.as<DelegatingType>();
    auto e = Content(delegating);
    if (!e) {
      if (propertyMap.count("type") != 0) {
        const auto typeName = propertyMap["type"].AsString();
        if (xamlTypeCreatorMap.count(typeName) != 0) {
          auto creator = xamlTypeCreatorMap.at(typeName);
          e = creator();
          e.as<FrameworkElement>().Tag(delegating.Tag()); // event dispatching needs to have the xaml event sender have a tag
          // Register events
          std::for_each(xamlEventMap.begin(), xamlEventMap.end(), [e, context = ReactContext()](const auto& entry) {entry.second(e, context); });
          delegating.Content(e);
        }
        else {
          assert(false && "xaml type not found");
        }
      }
      else {
        assert(false && "xaml type not specified");
      }
    }

    if (auto control = e.try_as<DependencyObject>()) {
      for (auto const& pair : propertyMap) {
        auto const& propertyName = pair.first;
        auto const& propertyValue = pair.second;

        if (auto prop = GetProp(propertyName, control)) {
          prop->SetValue(control, propertyValue);
        }
        else if (propertyName == "type") {} 
        else {
          assert(false && "unknown property");
        }
      }
    }
  }

  // IViewManagerWithExportedEventTypeConstants
  ConstantProviderDelegate XamlViewManager::ExportedCustomBubblingEventTypeConstants() noexcept {
    return nullptr;
  }

  void JsEvent(winrt::Microsoft::ReactNative::IJSValueWriter const& constantWriter, std::wstring topName, std::wstring onName) {
    constantWriter.WritePropertyName(topName);
    constantWriter.WriteObjectBegin();
    WriteProperty(constantWriter, L"registrationName", onName);
    constantWriter.WriteObjectEnd();
  }

#define JS_EVENT(evtName) JsEvent(constantWriter, L"top" L#evtName, L"on" L#evtName)


  ConstantProviderDelegate XamlViewManager::ExportedCustomDirectEventTypeConstants() noexcept {
    return [](winrt::Microsoft::ReactNative::IJSValueWriter const& constantWriter) {
      JS_EVENT(Click);
    };
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

}
