#include "pch.h"
#include <roapi.h>

#include "XamlMetadata.h"
#include <JSValueReader.h>
#include <filesystem>
#include <unordered_map>
#include <Crc32Str.h>

using namespace winrt::Microsoft::ReactNative;
#ifdef USE_WINMD_READER
using namespace winmd::reader;
#endif

#define MAKE_GET_DP(type, prop) IsType<type>, []() { return type::prop(); }

//ctx.DispatchEvent(sender.as<xaml::FrameworkElement>(), L"top" L#evtName, [](auto const& evtDataWriter) noexcept {}); \

#define MAKE_EVENT(evtName, xamlType) \
        { #evtName, { [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) { \
          if (auto c = o.try_as<xamlType>()) {  \
            c.evtName([reactContext] (auto&& sender, auto&& /*args*/) { \
              reactContext.DispatchEvent(sender.as<xaml::FrameworkElement>(), L"top" L#evtName, [](winrt::Microsoft::ReactNative::IJSValueWriter const& /*evtDataWriter*/) noexcept {}); \
            }); \
          } \
        } } }

//#define CREATE_TYPE(T) [](){return T();}
#ifdef USE_WINMD_READER

std::string getWindowsWinMd() {
  // The root location for Windows SDKs is stored in HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows Kits\Installed Roots
  // under KitsRoot10
  // But it should be ok to check the default path for most cases

  const std::filesystem::path sdkRoot = "C:\\Program Files (x86)\\Windows Kits\\10\\UnionMetadata";

  for (const auto& d : std::filesystem::directory_iterator(sdkRoot)) {
    auto dirPath = d.path();
    auto winmd = dirPath / "Windows.winmd";
    if (std::filesystem::exists(winmd)) {
      return winmd.u8string();
    }
  }
  throw std::string("no winmd found");
}
#endif

XamlMetadata::XamlMetadata() {
#ifdef USE_WINMD_READER
  std::vector<std::string> files = {
    getWindowsWinMd(),
  };
  reader = std::make_unique<cache>(files);
#endif
  xamlEventMap = {
    MAKE_EVENT(Click, xaml::Controls::Primitives::ButtonBase),
    //   { "Click", { [](IInspectable o, IReactContext context) {
    //     if (auto c = o.try_as<xaml::Controls::Primitives::ButtonBase>()) {
    //       c.Click([context](auto&& sender, auto&& /*args*/) {
    //         context.DispatchEvent(sender.as<xaml::FrameworkElement>(), L"top" L"Click", [](winrt::Microsoft::ReactNative::IJSValueWriter const& /*eventDataWriter*/) noexcept {}); });
    //}} } }
  };

  //xamlPropertyMap = {
  //{ "width", { MAKE_GET_DP(FrameworkElement, WidthProperty), ViewManagerPropertyType::Double, XamlPropType::Double }},
  //{ "height", { MAKE_GET_DP(FrameworkElement, HeightProperty), ViewManagerPropertyType::Double, XamlPropType::Double }},
  //{ "text", { MAKE_GET_DP(ContentControl, ContentProperty), ViewManagerPropertyType::String, XamlPropType::Object }},
  //{ "text", { MAKE_GET_DP(TextBlock, TextProperty), ViewManagerPropertyType::String, XamlPropType::String }},
  //{ "color", { MAKE_GET_DP(Control, ForegroundProperty), ViewManagerPropertyType::SolidColorBrush, XamlPropType::Object }},
  //{ "color", { MAKE_GET_DP(TextBlock, ForegroundProperty), ViewManagerPropertyType::SolidColorBrush, XamlPropType::Object }},
  //{ "backgroundColor", { MAKE_GET_DP(Control, BackgroundProperty), ViewManagerPropertyType::SolidColorBrush, XamlPropType::Object }},
  //};

  InitPropertiesMap();

  //xamlTypeCreatorMap = {
  //{ "hyperlinkButton", CREATE_TYPE(HyperlinkButton)},
  //{ "textblock", CREATE_TYPE(TextBlock)},
  //};

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

#ifdef USE_WINMD_READER

template<typename T>
std::string MakeName(T t) {
  return t.TypeNamespace().data() + std::string(".") + t.TypeName().data();
}

TypeDef GetBaseClass(const TypeDef& t) {
  auto extends = t.Extends();
  if (extends) {
    if (extends.type() == TypeDefOrRef::TypeDef) {
      return extends.TypeDef();
    }
    else {
      auto tr = extends.TypeRef();
      auto td = tr.get_cache().find(tr.TypeNamespace(), tr.TypeName());
      return td;
    }
  }
  return {};
}
#endif

// https://docs.microsoft.com/en-us/uwp/api/windows.ui.xaml.routedevent?view=winrt-19041#events-that-use-a-routedevent-identifier
#define ROUTED_EVENT(name)  { #name, xaml::UIElement::name##Event }
const std::unordered_map<std::string, std::function<xaml::RoutedEvent ()>> routedEvents = {
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
  std::for_each(xamlEventMap.begin(), xamlEventMap.end(), [e, context](const auto& entry) {entry.second(e, context); });
  return e;
}

const PropInfo* XamlMetadata::GetProp(const std::string& propertyName, const winrt::Windows::Foundation::IInspectable& obj) const {
  auto propRange = xamlPropertyMap.equal_range(propertyName);
  for (auto prop = propRange.first; prop != propRange.second; ++prop)
  {
    if (prop->second.isType(obj)) { return &(prop->second); }
  }
  return nullptr;
}

void XamlMetadata::PopulateNativeProps(winrt::Windows::Foundation::Collections::IMap<winrt::hstring, ViewManagerPropertyType>& nativeProps) const {
  for (auto const& entry : xamlPropertyMap) {
    nativeProps.Insert(winrt::to_hstring(entry.first), entry.second.jsType);
  }
}