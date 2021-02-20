#include "pch.h"
#include "XamlViewManager.h"

#include "JSValueReader.h"
#include "NativeModules.h"
#include "XamlMetadata.h"
#include <winrt/Windows.UI.Xaml.Core.Direct.h>
#include <UI.Xaml.Input.h>
using namespace winrt;
using namespace Microsoft::ReactNative;
using namespace xaml;
using namespace xaml::Controls;

namespace winrt::ReactNativeXaml {

  


  using DelegatingType = xaml::Controls::ContentControl;

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

  winrt::IInspectable XamlViewManager::CreateViewWithProperties(winrt::Microsoft::ReactNative::IJSValueReader const& propertyMapReader) noexcept {
    const JSValueObject& propertyMap = JSValue::ReadObjectFrom(propertyMapReader);
    auto typeName = propertyMap["type"].AsString();
    return xamlMetadata.Create(typeName, m_reactContext);
  }

  // IViewManagerWithNativeProperties
  IMapView<hstring, ViewManagerPropertyType> XamlViewManager::NativeProps() noexcept {
    auto nativeProps = winrt::single_threaded_map<hstring, ViewManagerPropertyType>();
    nativeProps.Insert(L"type", ViewManagerPropertyType::String);
    //nativeProps.Insert(L"text", ViewManagerPropertyType::String);
    //nativeProps.Insert(L"color", ViewManagerPropertyType::Color);
    //nativeProps.Insert(L"backgroundColor", ViewManagerPropertyType::Color);
    xamlMetadata.PopulateNativeProps(nativeProps);
    return nativeProps.GetView();
  }

  xaml::RoutedEventHandler reh{ nullptr };

  void XamlViewManager::UpdateProperties(
    FrameworkElement const& view,
    IJSValueReader const& propertyMapReader) noexcept {

    const JSValueObject& propertyMap = JSValue::ReadObjectFrom(propertyMapReader);
#ifdef HAS_CREATEWITHPROPERTIES
    auto e = view;
#else
    const auto delegating = view.as<DelegatingType>();
    auto e = Content(delegating);
    if (!e) {
      if (propertyMap.count("type") != 0) {
        const auto typeName = propertyMap["type"].AsString();
        auto xd = xaml::Core::Direct::XamlDirect::GetDefault();
        auto hlb = xd.CreateInstance(xaml::Core::Direct::XamlTypeIndex::HyperlinkButton);
//        e = xd.GetObject(hlb);
        //auto peh = xaml::Input::PointerEventHandler([](auto&&, auto&&) {
        //  auto x = 0;
        //  });
        //auto del = winrt::impl::make_delegate<xaml::RoutedEventHandler>([](auto&&, auto&&) {
        //  auto x = 0;
        //  });
        //auto delBoxed = winrt::box_value(del);
        //xd.AddEventHandler(hlb, xaml::Core::Direct::XamlEventIndex::ButtonBase_Click, delBoxed, true);
        xd.SetStringProperty(hlb, xaml::Core::Direct::XamlPropertyIndex::ContentControl_Content, winrt::to_hstring(L"Hello"));

        reh = RoutedEventHandler([](auto&&, auto&&) { 
          //auto p = 0; 
          });
        xd.AddEventHandler(hlb, xaml::Core::Direct::XamlEventIndex::ButtonBase_Click, winrt::box_value(reh), true);

        auto xdParent = xd.GetXamlDirectObject(delegating);
        xd.SetXamlDirectObjectProperty(xdParent, xaml::Core::Direct::XamlPropertyIndex::ContentControl_Content, hlb);
        // auto obj = xd.GetObject(hlb).as<xaml::Controls::HyperlinkButton>();
        //obj.AddHandler(xaml::UIElement::TappedEvent(), winrt::box_value(RoutedEventHandler([](auto&&, auto&&) {

        //auto teh = xamlMetadata.ActivateInstance(L"Windows.UI.Xaml.Input.TappedEventHandler");
        //obj.AddHandler(xaml::UIElement::TappedEvent(), winrt::box_value(xaml::Input::TappedEventHandler([](auto&&, auto&&) {
        //  auto z = 0;
        //  })), true);

        ///*obj.Click([](auto&, auto&) {
        //  auto y = 0;
        //  });
        //  */
        //e = obj.as<xaml::UIElement>();
        //
        //delegating.Content(e);
        //e = xamlMetadata.Create(typeName, m_reactContext);
        //e.as<FrameworkElement>().Tag(delegating.Tag()); // event dispatching needs to have the xaml event sender have a tag
        //delegating.Content(e);
      }
      else {
        assert(false && "xaml type not specified");
      }
    }
#endif

    //if (auto control = e.try_as<DependencyObject>()) {
    //  for (auto const& pair : propertyMap) {
    //    auto const& propertyName = pair.first;
    //    auto const& propertyValue = pair.second;

    //    if (auto prop = xamlMetadata.GetProp(propertyName, control)) {
    //      prop->SetValue(control, propertyValue);
    //    }
    //    else if (propertyName == "type") {} 
    //    else {
    //      assert(false && "unknown property");
    //    }
    //  }
    //}
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
