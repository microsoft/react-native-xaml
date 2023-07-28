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
#include <UI.Xaml.Documents.h>
#include <JSI/JsiApiContext.h>
#include "XamlViewManager.h"

#include "Styling.h"

#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.Security.Cryptography.h>
#include <cdebug.h>

namespace jsi = facebook::jsi;
using namespace winrt;
using namespace winrt::Microsoft::ReactNative;

#define MAKE_GET_DP(type, prop) IsType<type>, []() { return type::prop(); }

void XamlMetadata::SetupEventDispatcher(const IReactContext& reactContext) {
  if (!m_reactContext) {
    m_reactContext = reactContext;
  }

  if (!m_receiveEvent.has_value()) {
    ExecuteJsi(m_reactContext, [shared = shared_from_this()](facebook::jsi::Runtime& rt) {
      auto batchedBridge = rt.global().getProperty(rt, "__fbBatchedBridge");
      if (!batchedBridge.isUndefined() && batchedBridge.isObject()) {
        if (auto vm = shared.get()) {
           auto getCallableModule = batchedBridge.asObject(rt).getPropertyAsFunction(rt, "getCallableModule");
           vm->m_eventEmitter = getCallableModule.callWithThis(rt, batchedBridge.asObject(rt), "RCTEventEmitter").asObject(rt);
           vm->m_receiveEvent = vm->m_eventEmitter->getPropertyAsFunction(rt, "receiveEvent");
        }
      }
    });
}

FrameworkElement Wrap(const winrt::Windows::Foundation::IInspectable& d) {
  if (auto fe = d.try_as<FrameworkElement>()) {
    return fe;
  }
  else {
    winrt::ReactNativeXaml::Wrapper wrapper{};
    wrapper.WrappedObject(d);

    return wrapper;
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

/*static*/ int64_t XamlMetadata::TagFromElement(xaml::DependencyObject const& element) {
#ifdef RNW_REACTTAG_API 
  return XamlHelper::GetReactTag(element);
#else
  if (auto fe = element.try_as<FrameworkElement>()) {
    if (auto tagII = fe.Tag()) {
      return winrt::unbox_value<int64_t>(tagII);
    }
  }
  return InvalidTag;
#endif
}

/*static*/ void XamlMetadata::ElementSetTag(xaml::DependencyObject const& element, int64_t tag) {
#ifdef RNW_REACTTAG_API
  XamlHelper::SetReactTag(element, tag);
#else
  element.SetValue(FrameworkElement::TagProperty(), winrt::box_value(tag));
#endif
}

FrameworkElement XamlMetadata::GetFlyoutTarget(winrt::Windows::Foundation::IInspectable flyout) const {
  auto it = std::find_if(wrapperToWrapped.begin(), wrapperToWrapped.end(), [flyout](auto& entry) {
    WrapperInfo wrapperInfo = entry.second;
    return wrapperInfo.wrappedObject == flyout;
    });
  if (it != wrapperToWrapped.end()) {
    auto parent = it->first.as<ReactNativeXaml::Wrapper>().DataContext();
    return parent.as<FrameworkElement>();
  }
  return nullptr;
}

// FlyoutBase.IsOpen is read-only but we need a way to call ShowAt/Hide, so this hooks it up
void SetIsOpen_FlyoutBase(const xaml::DependencyObject& o, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext& context) {
  const auto& xaml = context.Properties().Get(ReactNativeXaml::XamlViewManager::XamlViewManagerProperty().Handle()).as<ReactNativeXaml::XamlViewManager>();
  auto flyout = o.try_as<Controls::Primitives::FlyoutBase>();
  if (flyout && v.Type() == JSValueType::Boolean) {
    if (v.AsBoolean()) {
      auto target = flyout.Target();

      if (!target) {
        target = xaml->Metadata()->GetFlyoutTarget(o);
      }
      if (target) {
        auto cn = winrt::get_class_name(target);
        flyout.ShowAt(target);
      }
      else {
        cdebug << "Couldn't determine flyout target\n";
      }
    }
    else {
      flyout.Hide();
    }
  }
}

void SetText_Run(const xaml::DependencyObject& o, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext&) {
  if (auto run = o.try_as<Documents::Run>()) {
    run.Text(winrt::to_hstring(v.AsString()));
  }
}

void SetNavigateUri_Hyperlink(const xaml::DependencyObject& o, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext&) {
  if (auto hyperlink = o.try_as<Documents::Hyperlink>()) {
    hyperlink.NavigateUri(winrt::Windows::Foundation::Uri{ winrt::to_hstring(v.AsString()) });
  }
}

GridLength GetGridLength(const winrt::Microsoft::ReactNative::JSValue& v) {
  if (v.Type() == JSValueType::Double || v.Type() == JSValueType::Int64) {
    return GridLengthHelper::FromValueAndType(v.AsDouble(), GridUnitType::Pixel);
  }
  else if (v.Type() == JSValueType::String) {
    auto str = v.AsString();
    double units = 1;
    GridUnitType unitType = GridUnitType::Pixel;
    if (str.back() == '*') {
      unitType = GridUnitType::Star;
      str.pop_back();
      if (str.length() > 0) {
        units = std::stod(str);
      }
    }
    else if (str == "auto") {
      unitType = GridUnitType::Auto;
    }
    else {
      units = std::stod(str);
    }
    return GridLengthHelper::FromValueAndType(units, unitType);
  }
  return GridLengthHelper::FromValueAndType(1, GridUnitType::Auto);
}

void SetGridLayout_Grid(const xaml::DependencyObject& o, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext&) {
  if (auto grid = o.try_as<Grid>()) {
    const auto& cols = v.AsObject()["columns"].AsArray();
    const auto& rows = v.AsObject()["rows"].AsArray();
    grid.ColumnDefinitions().Clear();
    grid.RowDefinitions().Clear();
    for (const auto& col : cols) {
      ColumnDefinition cd;
      cd.Width(GetGridLength(col));
      grid.ColumnDefinitions().Append(cd);
    }

    for (const auto& row : rows) {
      RowDefinition rd;
      rd.Height(GetGridLength(row));
      grid.RowDefinitions().Append(rd);
    }
  }
}

void SetResources_UIElement(const xaml::DependencyObject& dobj, const xaml::DependencyProperty&, const JSValue& jsValue, const winrt::Microsoft::ReactNative::IReactContext&) {
  ResourceDictionary rd;
  const auto& dict = jsValue.AsObject();

  const auto fe = dobj.as<FrameworkElement>();

  for (auto const& entry : dict) {
    const auto& name = entry.first;
    const auto& value = entry.second;
    auto brush = ColorUtils::BrushFrom(value);
    auto nameII = winrt::box_value(winrt::to_hstring(name));
    rd.Insert(nameII, brush);
    if (auto v = rd.TryLookup(nameII)) {
      if (auto scb = v.try_as<xaml::Media::SolidColorBrush>()) {
        if (auto newScb = brush.try_as<xaml::Media::SolidColorBrush>()) {
          scb.Color(newScb.Color());
          continue;
        }
        else {
          assert(false && "changing from a color to a non-color brush");
        }
      }
      else {
        assert(false && "changing from a non-color brush");
      }
    }
  }
  fe.Resources(rd);
}

void SetShowState_ContentDialog(const xaml::DependencyObject& dobj, const xaml::DependencyProperty&, const JSValue& jsValue, const winrt::Microsoft::ReactNative::IReactContext& context) {
  if (auto cd = dobj.try_as<ContentDialog>()) {
    auto val = jsValue.AsInt32();
    IAsyncOperation<ContentDialogResult> op{ nullptr };
    switch (val) {
    case 0: // Popup
      op = cd.ShowAsync(ContentDialogPlacement::Popup);
      break;
    case 1: // InPlace
      op = cd.ShowAsync(ContentDialogPlacement::InPlace);
      break;
    case 3: // Hidden
      return cd.Hide();
    }
    op.Completed([cd, context](const IAsyncOperation<ContentDialogResult>& operation, const AsyncStatus& asyncStatus) {
      if (asyncStatus == AsyncStatus::Completed) {
        auto result = static_cast<int32_t>(operation.GetResults());

        XamlUIService::FromContext(context).DispatchEvent(cd, L"topContentDialogClosed",
          [result](const winrt::Microsoft::ReactNative::IJSValueWriter& evtDataWriter) {
            evtDataWriter.WriteInt64(result);
          });
      }
      });
  }
}

const xaml::Interop::TypeName viewPanelTypeName{ winrt::hstring{L"ViewPanel"}, xaml::Interop::TypeKind::Metadata };

xaml::DependencyProperty GetPriorityProperty() {
  static const auto priority = DependencyProperty::RegisterAttached(L"Priority", winrt::xaml_typename<uint32_t>(), viewPanelTypeName, xaml::PropertyMetadata{ winrt::box_value(0u) });
  return priority;
}

void SetPriority_DependencyObject(const DependencyObject& u, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext& reactContext) {
  const auto priorityValue = v.AsUInt32();
  u.SetValue(GetPriorityProperty(), winrt::box_value(priorityValue));
}

const PropInfo* XamlMetadata::FindFirstMatch(const stringKey& key, const winrt::Windows::Foundation::IInspectable& obj, const PropInfo* map, size_t size) {
  auto it = std::find_if(map, map + size, [key](const PropInfo& entry) { return Equals(entry.propName, key); });
  while ((it != map + size) && Equals(it->propName, key)) {
    if (it->asType(obj)) {
      return it;
    }
    it++;
  }
  return nullptr;
}

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

// wrapper -> flyout   via wrapperToWrapped

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
  EventAttachInfo eai{ context, e, "top" + evtName, *this };
  for (const auto& entry : EventInfo::xamlEventMap) {
    if (Equals(MAKE_KEY(entry.name), key)) {
      if (!entry.attachHandler) {
        // this is a synthetic event. it will only be raised programmatically, there is no equivalent native event
        return &entry;
      }
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

void XamlMetadata::JsiDispatchEvent(jsi::Runtime& rt, int64_t viewTag, std::string&& eventName, std::shared_ptr<facebook::jsi::Object>& eventData) const noexcept {
  m_receiveEvent->callWithThis(rt, *m_eventEmitter,  static_cast<int>(viewTag), std::move(eventName), *eventData.get());
}



void XamlMetadata::PopulateNativeProps(std::vector<std::string>& names, const winrt::Windows::Foundation::IInspectable& obj) const {
  if (auto dobj = obj.try_as<DependencyObject>()) {
    for (auto const& map : propertyMaps) {
      for (auto e = map.map; e != map.map + map.size; e++) {
        if (auto cast = e->asType(obj)) {
          names.push_back(e->propName);
        }
      }
    }
  }
  else if (auto rea = obj.try_as<xaml::RoutedEventArgs>()) {
    auto cn = winrt::get_class_name(rea);
    auto trea = rea.try_as<xaml::Input::TappedRoutedEventArgs>();
  }
}

winrt::IAsyncOperation<winrt::Windows::Storage::Streams::InMemoryRandomAccessStream> GetImageInlineDataAsync(const std::string& uri) {
  size_t start = uri.find(',');
  if (start == std::string::npos || start + 1 > uri.length())
    co_return nullptr;

  try {
    co_await winrt::resume_background();

    std::string_view base64String(uri.c_str() + start + 1, uri.length() - start - 1);
    auto buffer =
      winrt::Windows::Security::Cryptography::CryptographicBuffer::DecodeFromBase64String(winrt::to_hstring(base64String));

    winrt::Windows::Storage::Streams::InMemoryRandomAccessStream memoryStream;
    auto b = memoryStream.CanWrite();
    co_await memoryStream.WriteAsync(buffer);
    memoryStream.Seek(0);

    co_return memoryStream;
  }
  catch (winrt::hresult_error const&) {
    // Base64 decode failed
  }

  co_return nullptr;
}

winrt::fire_and_forget winrt::Microsoft::ReactNative::SetImageSourceForInlineData(std::string str, xaml::DependencyObject o, xaml::DependencyProperty dp) {
  // inline data
  const auto streamOp = GetImageInlineDataAsync(str);
  auto stream = co_await streamOp;

  xaml::Media::ImageSource source{ nullptr };
  if (str.find("image/svg+xml;base64") != std::string::npos) {
    auto src = xaml::Media::Imaging::SvgImageSource();
    co_await src.SetSourceAsync(stream);
    source = src;
  }
  else if (str.find("image/png;base64") != std::string::npos) {
    auto src = xaml::Media::Imaging::BitmapImage();
    co_await src.SetSourceAsync(stream);
    source = src;
  }

  o.SetValue(dp, source);
}

void XamlMetadata::DispatchCommand(FrameworkElement const& view, winrt::hstring const& commandId, const winrt::Microsoft::ReactNative::JSValueArray& args) const noexcept {
  const std::string name = winrt::to_string(commandId);
  auto it = std::find_if(xamlCommands, xamlCommands + std::size(xamlCommands), [name](const XamlCommand& entry) { return Equals(entry.name, name.c_str()); });
  if (it != xamlCommands + std::size(xamlCommands)) {
    return it->pfn(view, args, *this);
  }
  else if (commandId == L"focus") {
    xaml::Input::FocusManager::TryFocusAsync(view, xaml::FocusState::Programmatic);
  } else if (commandId == L"blur") {
    // XAML doesn't have a concept of focus blur.
  }
}