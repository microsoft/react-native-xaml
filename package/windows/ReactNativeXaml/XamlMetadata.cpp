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

#include <JSValueWriter.h>
#include "Serialize.h"

using namespace winrt::Microsoft::ReactNative;

#define MAKE_GET_DP(type, prop) IsType<type>, []() { return type::prop(); }

XamlMetadata::XamlMetadata() {}

/*
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
*/

FrameworkElement Wrap(const winrt::Windows::Foundation::IInspectable& d) {
  if (auto fe = d.try_as<FrameworkElement>()) {
    return fe;
  }
  else {
    ContentControl cc;
    cc.Content(d);
    return cc;
  }
}

winrt::Windows::Foundation::IInspectable XamlMetadata::Create(const std::string& typeName, const winrt::Microsoft::ReactNative::IReactContext& context) {
  
  auto key = COMPILE_TIME_CRC32_STR(typeName.c_str());
  auto obj = Create(typeName);
  auto e = obj.try_as<FrameworkElement>();
  bool wrapped = e == nullptr;
  if (!e) {
    e = Wrap(obj);
    wrapperToWrapped.emplace(e, WrapperInfo{ obj, {} });
  }
  else {
    wrapperToWrapped.emplace(e, WrapperInfo{ nullptr, {} });
  }

  return e;
}

// FlyoutBase.IsOpen is read-only but we need a way to call ShowAt/Hide, so this hooks it up
void SetIsOpen_FlyoutBase(xaml::DependencyObject o, xaml::DependencyProperty prop, const winrt::Microsoft::ReactNative::JSValue& v) {
  auto flyout = Unwrap<Controls::Primitives::FlyoutBase>(o);
  if (flyout && v.Type() == JSValueType::Boolean) {
    if (v.AsBoolean()) {
      auto target = flyout.Target();

      // Go from the wrapping ContentControl to the flyout's parent. 
      // We can't use Parent() since we unparent the CC once we add the flyout to the tree
      if (!target) target = o.as<ContentControl>().DataContext().as<FrameworkElement>();
      auto cn = winrt::get_class_name(target);
      flyout.ShowAt(target);
    }
    else {
      flyout.Hide();
    }
  }
}

const PropInfo* XamlMetadata::FindFirstMatch(const stringKey& key, const winrt::Windows::Foundation::IInspectable& obj, const PropInfo* map, size_t size) {
  auto it = std::find_if(map, map + size, [key](const PropInfo& entry) { return Equals(entry.propName, key); });
  while ((it != map + size) && Equals(it->propName, key)) {
    if (it->isType(obj)) {
      return it;
    }
    it++;
  }
  return nullptr;
}

template<typename T> bool IsWrapped(const winrt::Windows::Foundation::IInspectable& i) { return Unwrap<T>(i) != nullptr; }

const PropInfo fakeProps[] = {
    { MAKE_KEY("isOpen"), IsWrapped<Controls::Primitives::FlyoutBase>, nullptr, SetIsOpen_FlyoutBase, ViewManagerPropertyType::Boolean },
};

const struct {
  const PropInfo* map;
  size_t size;
} propertyMaps[] = {
  { xamlPropertyMap, ARRAYSIZE(xamlPropertyMap) },
  { fakeProps, ARRAYSIZE(fakeProps) }
};

const PropInfo* XamlMetadata::GetProp(const std::string& propertyName, const winrt::Windows::Foundation::IInspectable& obj) const {
  auto key = MAKE_KEY(propertyName.c_str());
  for (const auto& mapInfo : propertyMaps) {
    auto it = FindFirstMatch(key, obj, mapInfo.map, mapInfo.size);
    if (it) return it;
  }
  return nullptr;
}

// contentControl -> parent   via DataContext
// contentControl -> flyout   via wrapperToWrapped

const EventInfo* XamlMetadata::AttachEvent(const winrt::Microsoft::ReactNative::IReactContext& context, 
  const std::string& propertyName, const winrt::Windows::Foundation::IInspectable& obj, bool attaching) {
  // obj is always a FrameworkElement (either a control or a wrapped control)
  if (!propertyName._Starts_with("on")) return nullptr;
  const std::string evtName = propertyName.substr(2);
  auto key = MAKE_KEY(evtName.data());

  auto e = obj.try_as<FrameworkElement>();
  auto wrapper = wrapperToWrapped.find(e);
  bool isWrapped = wrapper != wrapperToWrapped.end() && wrapper->second.wrappedObject != nullptr;
  auto attachedEvt = std::find_if(wrapper->second.events.cbegin(), wrapper->second.events.cend(),
    [&evtName](AttachedEventInfo const& ei) { return ei.name == evtName; });
  winrt::event_token token{ 0 };
  if (attachedEvt != wrapper->second.events.cend()) {
    token = attachedEvt->token;
  }
  if (!attaching) {
    wrapper->second.events.erase(attachedEvt);
  }
  EventAttachInfo eai { context, e, "top" + evtName };
  for (const auto& entry : EventInfo::xamlEventMap) {
    if (Equals(MAKE_KEY(entry.name), key)) {
      auto attached = entry.attachHandler(eai, isWrapped, token);
      if (attached == winrt::event_token{ -1 } && !attaching) {
        return &entry;
      }
      else if (attached) {
        wrapper->second.events.push_back({ evtName, attached });
        return &entry;
      }
    }
  }
  return nullptr;

}
