#include "pch.h"

#include "XamlMetadata.h"
#include <JSValueReader.h>
#include <filesystem>
#include <unordered_map>

using namespace winrt::Microsoft::ReactNative;
using namespace winmd::reader;

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

#define CREATE_TYPE(T) [](){return T();}

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

XamlMetadata::XamlMetadata() {
  std::vector<std::string> files = {
    getWindowsWinMd(),
  };
  reader = std::make_unique<cache>(files);

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

winrt::Windows::Foundation::IInspectable XamlMetadata::ActivateInstance(const winrt::hstring& hstr) {
  winrt::Windows::Foundation::IUnknown unknown{ nullptr };
  auto nhstr = (HSTRING)(winrt::get_abi(hstr));
  auto res = ::RoActivateInstance(nhstr, (::IInspectable**)winrt::put_abi(unknown));
  auto e = unknown.as<winrt::Windows::Foundation::IInspectable>();
  return e;
}

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

// https://docs.microsoft.com/en-us/uwp/api/windows.ui.xaml.routedevent?view=winrt-19041#events-that-use-a-routedevent-identifier
#define ROUTED_EVENT(name)  { #name, []() {return xaml::UIElement::name##Event();} }
std::unordered_map<std::string, std::function<xaml::RoutedEvent ()>> routedEvents = {
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

void AttachEventHandlers(xaml::UIElement uie, TypeDef typeFromMD) {
  for (auto base = typeFromMD; base != TypeDef{}; base = GetBaseClass(base)) {
    auto baseName = MakeName(base);
    for (const auto& event : base.EventList()) {
      const auto evtName = event.Name();
      auto evtType = event.EventType();
      std::string evtTypeName;
      if (evtType.type() == TypeDefOrRef::TypeRef) {
        auto evtTypeRef = evtType.TypeRef();
        evtTypeName = MakeName(evtTypeRef);
      }
      else if (evtType.type() == TypeDefOrRef::TypeDef) {
        auto evtTypeDef = evtType.TypeDef();
        evtTypeName = MakeName(evtTypeDef);
      }
      if (routedEvents.count(std::string(evtName)) != 0) {
        winrt::Windows::Foundation::IInspectable handler;
        auto routedEvent = routedEvents[std::string(evtName)];
        uie.AddHandler(routedEvent(), handler, true);
      }

    }
  }

}
winrt::Windows::Foundation::IInspectable XamlMetadata::Create(const std::string& typeName, const winrt::Microsoft::ReactNative::IReactContext& context) {
  auto xamlTypeName = (char)std::toupper(typeName[0]) + typeName.substr(1);
  const std::vector<std::string> projectedNamespaces = {
    "Windows.UI.Xaml",
    "Windows.UI.Xaml.Controls",
    "Windows.UI.Xaml.Controls.Primitives",
  };
  TypeDef typeFromMD;
  for (const auto& ns : projectedNamespaces) {
    typeFromMD = reader->find(ns, xamlTypeName);
    if (typeFromMD) break;
  }
  
  if (typeFromMD) {
    auto name = MakeName(typeFromMD);
    auto hstr = winrt::to_hstring(name);
    auto uie = ActivateInstance(hstr).as<xaml::UIElement>();

    AttachEventHandlers(uie, typeFromMD);

  

    //xaml::RoutedEventHandler reh(winrt::impl::make_agile_delegate([](const winrt::Windows::Foundation::IInspectable, const xaml::RoutedEventArgs) {
    //  auto x = 0;
    //  }));

    //uie.AddHandler(UIElement::TappedEvent(), reh, true);
    return uie;
  }
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


const PropInfo* XamlMetadata::GetProp(const std::string& propertyName, const winrt::Windows::Foundation::IInspectable& obj) {
  auto propRange = xamlPropertyMap.equal_range(propertyName);
  for (auto prop = propRange.first; prop != propRange.second; ++prop)
  {
    if (prop->second.isType(obj)) { return &(prop->second); }
  }
  return nullptr;
}

