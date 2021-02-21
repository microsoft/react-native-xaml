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
        e = xamlMetadata.Create(typeName, m_reactContext);

        //auto xd = xaml::Core::Direct::XamlDirect::GetDefault();
        //auto hlb = xd.CreateInstance(xaml::Core::Direct::XamlTypeIndex::HyperlinkButton);
        //e = xd.GetObject(hlb);
        //xd.SetStringProperty(hlb, xaml::Core::Direct::XamlPropertyIndex::ContentControl_Content, winrt::to_hstring(L"Hello"));

        //reh = RoutedEventHandler([](auto&&, auto&&) { 
        //  });
        //xd.AddEventHandler(hlb, xaml::Core::Direct::XamlEventIndex::ButtonBase_Click, winrt::box_value(reh), true);

        //auto xdParent = xd.GetXamlDirectObject(delegating);
        //xd.SetXamlDirectObjectProperty(xdParent, xaml::Core::Direct::XamlPropertyIndex::ContentControl_Content, hlb);

        delegating.Content(e);
        e.as<FrameworkElement>().Tag(delegating.Tag()); // event dispatching needs to have the xaml event sender have a tag
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

  ConstantProviderDelegate XamlViewManager::ExportedCustomDirectEventTypeConstants() noexcept {
    return GetEvents;
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
