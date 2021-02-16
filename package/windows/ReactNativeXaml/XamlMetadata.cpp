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

#define CREATE_TYPE(T) [](){return T();}


XamlMetadata::XamlMetadata() {
  xamlEventMap = {
    MAKE_EVENT(Click, xaml::Controls::Primitives::ButtonBase),
    //   { "Click", { [](IInspectable o, IReactContext context) {
    //     if (auto c = o.try_as<xaml::Controls::Primitives::ButtonBase>()) {
    //       c.Click([context](auto&& sender, auto&& /*args*/) {
    //         context.DispatchEvent(sender.as<xaml::FrameworkElement>(), L"top" L"Click", [](winrt::Microsoft::ReactNative::IJSValueWriter const& /*eventDataWriter*/) noexcept {}); });
    //}} } }
  };

  xamlPropertyMap = {
  { "width", { MAKE_GET_DP(FrameworkElement, WidthProperty), FromJSType::Double, XamlPropType::Double }},
  { "height", { MAKE_GET_DP(FrameworkElement, HeightProperty), FromJSType::Double, XamlPropType::Double }},
  { "text", { MAKE_GET_DP(ContentControl, ContentProperty), FromJSType::String, XamlPropType::Object }},
  { "text", { MAKE_GET_DP(TextBlock, TextProperty), FromJSType::String, XamlPropType::String }},
  { "color", { MAKE_GET_DP(Control, ForegroundProperty), FromJSType::SolidColorBrush, XamlPropType::Object }},
  { "color", { MAKE_GET_DP(TextBlock, ForegroundProperty), FromJSType::SolidColorBrush, XamlPropType::Object }},
  { "backgroundColor", { MAKE_GET_DP(Control, BackgroundProperty), FromJSType::SolidColorBrush, XamlPropType::Object }},
  };

  xamlTypeCreatorMap = {
  { "hyperlinkButton", CREATE_TYPE(HyperlinkButton)},
  { "textblock", CREATE_TYPE(TextBlock)},
  };

}
winrt::Windows::Foundation::IInspectable XamlMetadata::Create(const std::string& typeName, const winrt::Microsoft::ReactNative::IReactContext& context) {
  if (xamlTypeCreatorMap.count(typeName) != 0) {
    auto creator = xamlTypeCreatorMap.at(typeName);
    auto e = creator();
    // Register events
    std::for_each(xamlEventMap.begin(), xamlEventMap.end(), [e, context](const auto& entry) {entry.second(e, context); });
    return e;
  }
  else {
    assert(false && "xaml type not found");
    throw std::invalid_argument("xaml type not found");
  }

}


const PropInfo* XamlMetadata::GetProp(const std::string& propertyName, const IInspectable& obj) {
  auto propRange = xamlPropertyMap.equal_range(propertyName);
  for (auto prop = propRange.first; prop != propRange.second; ++prop)
  {
    if (prop->second.isType(obj)) { return &(prop->second); }
  }
  return nullptr;
}

