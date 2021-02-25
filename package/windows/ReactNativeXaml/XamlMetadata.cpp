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

using namespace winrt::Microsoft::ReactNative;

#define MAKE_GET_DP(type, prop) IsType<type>, []() { return type::prop(); }

XamlMetadata::XamlMetadata() {}

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

winrt::Windows::Foundation::IInspectable XamlMetadata::Create(const std::string& typeName, const winrt::Microsoft::ReactNative::IReactContext& context, const winrt::Windows::Foundation::IInspectable& tag) const {
  auto e = Create(typeName);
  auto fe = e.as<FrameworkElement>();
  fe.Tag(tag); // event dispatching needs to have the xaml event sender have a tag
  auto ntag = fe.Tag();
  // Register events
  std::for_each(EventInfo::xamlEventMap, EventInfo::xamlEventMap + ARRAYSIZE(EventInfo::xamlEventMap), [e, context](const EventInfo& entry) {entry.attachHandler(e, context); });
  return e;
}

const PropInfo* XamlMetadata::GetProp(const std::string& propertyName, const winrt::Windows::Foundation::IInspectable& obj) const {
  auto key = MAKE_KEY(propertyName.c_str());
  auto it = std::find_if(xamlPropertyMap, xamlPropertyMap + ARRAYSIZE(xamlPropertyMap), [key](const PropInfo& entry) { return entry.propName == key; });
  while ((it != xamlPropertyMap + ARRAYSIZE(xamlPropertyMap)) && it->propName == key) {
    if (it->isType(obj)) {
      return it;
    }
    it++;
  }
  
  return nullptr;
}

void SerializeEventArgsInternal(winrt::Microsoft::ReactNative::IJSValueWriter const& writer, const winrt::IInspectable& sender, const xaml::RoutedEventArgs& args) {
  writer.WriteObjectBegin();
  writer.WritePropertyName(L"foo");
  writer.WriteInt64(42);
  writer.WriteObjectEnd();
}

std::vector<uint32_t> VectorToIndices(const winrt::IVector<winrt::IInspectable>& vector, const Controls::ItemCollection& coll)
{
  std::vector<uint32_t> vec;
  for (const auto& item : vector) {
    uint32_t index;
    if (coll.IndexOf(item, index)) {
      vec.push_back(index);
    }
  }
  return vec;
}
namespace winrt::Microsoft::ReactNative {
  void WriteValue(winrt::Microsoft::ReactNative::IJSValueWriter const& writer, const winrt::IInspectable& ii);

  void WriteIInspectable(winrt::Microsoft::ReactNative::IJSValueWriter const& writer, const winrt::IInspectable& item) {
    if (auto str = item.try_as<winrt::IReference<winrt::hstring>>()) {
      writer.WriteString(str.GetString());
    }
    else if (auto cc = item.try_as<xaml::Controls::ContentControl>()) {
      WriteIInspectable(writer, cc.Content());
    }
    else {
      assert(false);
    }
  }
  void WriteValue(winrt::Microsoft::ReactNative::IJSValueWriter const& writer, const winrt::IInspectable& ii) {
    auto item = ii.as<xaml::Controls::ContentControl>().Content();
    auto cn = winrt::get_class_name(item);
    writer.WriteObjectBegin();
    WriteProperty(writer, L"type", cn);
    writer.WritePropertyName(L"value");
    WriteIInspectable(writer, ii);
    writer.WriteObjectEnd();
  }

  template<typename TElems>
  void WriteValue(winrt::Microsoft::ReactNative::IJSValueWriter const& writer, const winrt::IVector<TElems>& t) {
    writer.WriteArrayBegin();
    for (const auto& e : t) {
      WriteValue(writer, e);
    }
    writer.WriteArrayEnd();
  }
}

void SerializeEventArgsInternal(winrt::Microsoft::ReactNative::IJSValueWriter const& writer, const winrt::IInspectable& sender, const xaml::Controls::SelectionChangedEventArgs& args) {
  auto sel = sender.as<Controls::Primitives::Selector>();
  const auto& items = sel.Items();
  auto added = VectorToIndices(args.AddedItems(), items);
  auto removed = VectorToIndices(args.RemovedItems(), items);

  writer.WriteObjectBegin();
  WriteProperty(writer, L"addedIndices", added);
  WriteProperty(writer, L"removedIndices", removed);
  WriteProperty(writer, L"addedItems", args.AddedItems());
  WriteProperty(writer, L"removedItems", args.RemovedItems());
  writer.WriteObjectEnd();
}

template<typename TArgs>
void SerializeEventArgs(winrt::Microsoft::ReactNative::IJSValueWriter const& writer, const winrt::IInspectable& sender, const TArgs& args)
{
  if constexpr (std::is_same_v<TArgs, xaml::RoutedEventArgs>)
  {
    SerializeEventArgsInternal(writer, sender, args);
  }
  else if constexpr (std::is_same_v<TArgs, xaml::Controls::SelectionChangedEventArgs>) {
    SerializeEventArgsInternal(writer, sender, args);
  }
}
