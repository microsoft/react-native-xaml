#include "pch.h"
#include <roapi.h>

#include "XamlMetadata.h"
#include <JSValueReader.h>
#include <filesystem>
#include <unordered_map>
#include <Crc32Str.h>
#include <xutility>

#include "Codegen/TypeProperties.g.h"
#include "Codegen/TypeEvents.g.h"

using namespace winrt::Microsoft::ReactNative;

#define MAKE_GET_DP(type, prop) IsType<type>, []() { return type::prop(); }

//ctx.DispatchEvent(sender.as<xaml::FrameworkElement>(), L"top" L#evtName, [](auto const& evtDataWriter) noexcept {}); \


XamlMetadata::XamlMetadata() {
    //   { "Click", { [](IInspectable o, IReactContext context) {
    //     if (auto c = o.try_as<xaml::Controls::Primitives::ButtonBase>()) {
    //       c.Click([context](auto&& sender, auto&& /*args*/) {
    //         context.DispatchEvent(sender.as<xaml::FrameworkElement>(), L"top" L"Click", [](winrt::Microsoft::ReactNative::IJSValueWriter const& /*eventDataWriter*/) noexcept {}); });
    //}} } }
}

winrt::Windows::Foundation::IInspectable XamlMetadata::ActivateInstance(const winrt::hstring& hstr) {
  winrt::Windows::Foundation::IUnknown unknown{ nullptr };
  auto nhstr = (HSTRING)(winrt::get_abi(hstr));
  auto res = ::RoActivateInstance(nhstr, (::IInspectable**)winrt::put_abi(unknown));
  if (res != S_OK) {

  }
  auto e = unknown.as<winrt::Windows::Foundation::IInspectable>();
  return e;
}

struct RoutedEventInfo {
  const char* name;

  using routedEventGetter_t = xaml::RoutedEvent(*)();
  routedEventGetter_t routedEventGetter;
};

// https://docs.microsoft.com/en-us/uwp/api/windows.ui.xaml.routedevent?view=winrt-19041#events-that-use-a-routedevent-identifier
#define ROUTED_EVENT(name)  { #name, xaml::UIElement::name##Event }
constexpr RoutedEventInfo routedEvents[] = {
  ROUTED_EVENT(DoubleTapped),
  ROUTED_EVENT(DragEnter),
  ROUTED_EVENT(DragLeave),
  ROUTED_EVENT(DragOver),
  ROUTED_EVENT(Drop),
  ROUTED_EVENT(Holding),
  ROUTED_EVENT(KeyDown),
  ROUTED_EVENT(KeyUp),
  ROUTED_EVENT(ManipulationCompleted),
  ROUTED_EVENT(ManipulationDelta),
  ROUTED_EVENT(ManipulationInertiaStarting),
  ROUTED_EVENT(ManipulationStarted),
  ROUTED_EVENT(ManipulationStarting),
  ROUTED_EVENT(PointerCanceled),
  ROUTED_EVENT(PointerCaptureLost),
  ROUTED_EVENT(PointerEntered),
  ROUTED_EVENT(PointerExited),
  ROUTED_EVENT(PointerMoved),
  ROUTED_EVENT(PointerPressed),
  ROUTED_EVENT(PointerReleased),
  ROUTED_EVENT(PointerWheelChanged),
  ROUTED_EVENT(RightTapped),
  ROUTED_EVENT(Tapped),
};

winrt::Windows::Foundation::IInspectable XamlMetadata::Create(const std::string& typeName, const winrt::Microsoft::ReactNative::IReactContext& context) const {
  auto e = Create(typeName);
  // Register events
  std::for_each(EventInfo::xamlEventMap, EventInfo::xamlEventMap + ARRAYSIZE(EventInfo::xamlEventMap), [e, context](const EventInfo& entry) {entry.attachHandler(e, context); });
  return e;
}

const PropInfo* XamlMetadata::GetProp(const std::string& propertyName, const winrt::Windows::Foundation::IInspectable& obj) const {
  auto key = MAKE_KEY(propertyName.c_str());
  auto it = std::find_if(xamlPropertyMap, xamlPropertyMap + ARRAYSIZE(xamlPropertyMap), [key](const PropInfo& entry) { return entry.propName == key; });
  while (it->propName == key) {
    if (it->isType(obj)) {
      return it;
    }
  }
  
  return nullptr;
}
