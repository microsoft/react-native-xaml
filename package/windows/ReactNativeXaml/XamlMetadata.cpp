#include "pch.h"
#include "XamlMetadata.h"
#include <JSValueReader.h>

using namespace winrt::Microsoft::ReactNative;

#define MAKE_GET_DP(type, prop) IsType<type>, []() { return type::prop(); }

  //ctx.DispatchEvent(sender.as<xaml::FrameworkElement>(), L"top" L#evtName, [](auto const& evtDataWriter) noexcept {}); \

#define MAKE_EVENT(evtName, xamlType) \
        { #evtName, { [](IInspectable o, IReactContext reactContext) { \
          if (auto c = o.try_as<xamlType>()) {  \
            c.evtName([reactContext] (auto&& sender, auto&& /*args*/) { \
              reactContext.DispatchEvent(sender.as<xaml::FrameworkElement>(), L"top" L#evtName, [](winrt::Microsoft::ReactNative::IJSValueWriter const& /*evtDataWriter*/) noexcept {}); \
            }); \
          } \
        } } }

  const std::map<std::string, std::function<void(IInspectable o, IReactContext context)> > XamlMetadata::xamlEventMap = {
    MAKE_EVENT(Click, xaml::Controls::Primitives::ButtonBase),
    //   { "Click", { [](IInspectable o, IReactContext context) {
    //     if (auto c = o.try_as<xaml::Controls::Primitives::ButtonBase>()) {
    //       c.Click([context](auto&& sender, auto&& /*args*/) {
    //         context.DispatchEvent(sender.as<xaml::FrameworkElement>(), L"top" L"Click", [](winrt::Microsoft::ReactNative::IJSValueWriter const& /*eventDataWriter*/) noexcept {}); });
    //}} } }
  };

  const std::multimap<std::string, PropInfo> XamlMetadata::xamlPropertyMap = {
  { "width", { MAKE_GET_DP(FrameworkElement, WidthProperty), FromJSType::Double, XamlPropType::Double }},
  { "height", { MAKE_GET_DP(FrameworkElement, HeightProperty), FromJSType::Double, XamlPropType::Double }},
  { "text", { MAKE_GET_DP(ContentControl, ContentProperty), FromJSType::String, XamlPropType::Object }},
  { "text", { MAKE_GET_DP(TextBlock, TextProperty), FromJSType::String, XamlPropType::String }},
  { "color", { MAKE_GET_DP(Control, ForegroundProperty), FromJSType::SolidColorBrush, XamlPropType::Object }},
  { "color", { MAKE_GET_DP(TextBlock, ForegroundProperty), FromJSType::SolidColorBrush, XamlPropType::Object }},
  { "backgroundColor", { MAKE_GET_DP(Control, BackgroundProperty), FromJSType::SolidColorBrush, XamlPropType::Object }},
  };

  const PropInfo* XamlMetadata::GetProp(const std::string& propertyName, const IInspectable& obj) {
    auto propRange = xamlPropertyMap.equal_range(propertyName);
    for (auto prop = propRange.first; prop != propRange.second; ++prop)
    {
      if (prop->second.isType(obj)) { return &(prop->second); }
    }
    return nullptr;
  }

#define CREATE_TYPE(T) [](){return T();}

  const std::map<std::string, std::function<xaml::DependencyObject()>> XamlMetadata::xamlTypeCreatorMap = {
    { "hyperlinkButton", CREATE_TYPE(HyperlinkButton)},
    { "textblock", CREATE_TYPE(TextBlock)},
  };

