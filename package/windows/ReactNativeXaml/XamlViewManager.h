#pragma once

#include "pch.h"
#include "CppWinRTIncludes.h"
#include "winrt/Microsoft.ReactNative.h"
#include "XamlMetadata.h"
#include "JSI/JsiApiContext.h"

namespace winrt::ReactNativeXaml {

  struct XamlViewManager : 
    winrt::implements<
      XamlViewManager,
      winrt::Microsoft::ReactNative::IViewManager,
      winrt::Microsoft::ReactNative::IViewManagerWithNativeProperties,
      winrt::Microsoft::ReactNative::IViewManagerWithCommands,
      winrt::Microsoft::ReactNative::IViewManagerWithExportedEventTypeConstants,
      winrt::Microsoft::ReactNative::IViewManagerWithReactContext,
      winrt::Microsoft::ReactNative::IViewManagerWithChildren,
      winrt::Microsoft::ReactNative::IViewManagerCreateWithProperties,
      winrt::Microsoft::ReactNative::IViewManagerRequiresNativeLayout
  > {
  public:
    XamlViewManager() = default;

    // IViewManager
    winrt::hstring Name() noexcept;

    xaml::FrameworkElement CreateView() noexcept;

    // IViewManagerCreateWithProperties
    winrt::IInspectable CreateViewWithProperties(winrt::Microsoft::ReactNative::IJSValueReader const& propertyMapReader) noexcept;

    // IViewManagerWithNativeProperties
    winrt::Windows::Foundation::Collections::
      IMapView<winrt::hstring, winrt::Microsoft::ReactNative::ViewManagerPropertyType>
      NativeProps() noexcept;

    void UpdateProperties(
      winrt::Windows::UI::Xaml::FrameworkElement const& view,
      winrt::Microsoft::ReactNative::IJSValueReader const& propertyMapReader) noexcept;

    // IViewManagerWithCommands
    winrt::Windows::Foundation::Collections::IVectorView<winrt::hstring> Commands() noexcept;

    void DispatchCommand(
      winrt::Windows::UI::Xaml::FrameworkElement const& view,
      winrt::hstring const& commandId,
      winrt::Microsoft::ReactNative::IJSValueReader const& commandArgsReader) noexcept;

    winrt::Microsoft::ReactNative::ConstantProviderDelegate ExportedCustomBubblingEventTypeConstants() noexcept;

    winrt::Microsoft::ReactNative::ConstantProviderDelegate ExportedCustomDirectEventTypeConstants() noexcept;

    // IViewManagerWithReactContext
    winrt::Microsoft::ReactNative::IReactContext ReactContext() noexcept;

    void ReactContext(winrt::Microsoft::ReactNative::IReactContext reactContext) noexcept;

    // IViewManagerRequiresNativeLayout
    bool RequiresNativeLayout() noexcept;

    // IViewManagerWithChildren
    void AddView(xaml::FrameworkElement parent, xaml::UIElement child, int64_t index);
    void RemoveAllChildren(xaml::FrameworkElement parent);
    void RemoveChildAt(xaml::FrameworkElement parent, int64_t index);
    void ReplaceChild(xaml::FrameworkElement parent, xaml::UIElement oldChild, xaml::UIElement newChild);

    static winrt::Microsoft::ReactNative::ReactPropertyId<IViewManager> XamlViewManagerProperty() {
      return { L"ReactNativeXaml", L"ViewManager" };
    }

    const std::shared_ptr<XamlMetadata>& Metadata() const { return m_xamlMetadata; }
  private:
    winrt::Microsoft::ReactNative::IReactContext m_reactContext{ nullptr };
    std::shared_ptr<XamlMetadata> m_xamlMetadata;
  };

}
