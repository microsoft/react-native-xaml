#include "pch.h"
#include "XamlViewManager.h"

#include "JSValueReader.h"
#include "NativeModules.h"
#include "XamlMetadata.h"

using namespace winrt;
using namespace Microsoft::ReactNative;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
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
    if (XamlMetadata::xamlTypeCreatorMap.count(typeName) != 0) {
      auto creator = XamlMetadata::xamlTypeCreatorMap.at(typeName);
      auto e = creator();
      //e.as<FrameworkElement>().Tag(delegating.Tag()); // event dispatching needs to have the xaml event sender have a tag
      // Register events
      std::for_each(XamlMetadata::xamlEventMap.begin(), XamlMetadata::xamlEventMap.end(), [e, context = this->m_reactContext](const auto& entry) {entry.second(e, context); });
      return e;
    }
    else {
      assert(false && "xaml type not found");
      VerifyElseCrash(false);
    }

  }

  // IViewManagerWithNativeProperties
  IMapView<hstring, ViewManagerPropertyType> XamlViewManager::NativeProps() noexcept {
    auto nativeProps = winrt::single_threaded_map<hstring, ViewManagerPropertyType>();
    nativeProps.Insert(L"type", ViewManagerPropertyType::String);
    nativeProps.Insert(L"text", ViewManagerPropertyType::String);
    nativeProps.Insert(L"color", ViewManagerPropertyType::Color);
    nativeProps.Insert(L"backgroundColor", ViewManagerPropertyType::Color);

    return nativeProps.GetView();
  }


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
        if (XamlMetadata::xamlTypeCreatorMap.count(typeName) != 0) {
          auto creator = XamlMetadata::xamlTypeCreatorMap.at(typeName);
          e = creator();
          e.as<FrameworkElement>().Tag(delegating.Tag()); // event dispatching needs to have the xaml event sender have a tag
          // Register events
          std::for_each(XamlMetadata::xamlEventMap.begin(), XamlMetadata::xamlEventMap.end(), [e, context = ReactContext()](const auto& entry) {entry.second(e, context); });
          delegating.Content(e);
        }
        else {
          assert(false && "xaml type not found");
        }
      }
      else {
        assert(false && "xaml type not specified");
      }
    }
#endif

    if (auto control = e.try_as<DependencyObject>()) {
      for (auto const& pair : propertyMap) {
        auto const& propertyName = pair.first;
        auto const& propertyValue = pair.second;

        if (auto prop = XamlMetadata::GetProp(propertyName, control)) {
          prop->SetValue(control, propertyValue);
        }
        else if (propertyName == "type") {} 
        else {
          assert(false && "unknown property");
        }
      }
    }
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
