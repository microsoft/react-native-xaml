#include "pch.h"
#include "BlankUserControl.h"
#if __has_include("BlankUserControl.g.cpp")
#include "BlankUserControl.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::RuntimeComponent1::implementation
{
    BlankUserControl::BlankUserControl()
    {
        InitializeComponent();
    }

    int32_t BlankUserControl::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void BlankUserControl::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void BlankUserControl::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }

    winrt::Windows::UI::Xaml::DependencyProperty BlankUserControl::MyPropertyProperty() {
      if (m_myPropertyProperty == nullptr) {
        auto typeMetadata = PropertyMetadata::Create(winrt::box_value(0), [](const DependencyObject& sender, const DependencyPropertyChangedEventArgs& args) {
          if (auto control = sender.try_as<winrt::RuntimeComponent1::BlankUserControl>()) {
            auto v = winrt::unbox_value<int32_t>(args.NewValue());
            control.MyProperty(v);
          }
          });
        m_myPropertyProperty = winrt::Windows::UI::Xaml::DependencyProperty::Register(L"MyProperty", winrt::xaml_typename<int32_t>(), winrt::xaml_typename<winrt::RuntimeComponent1::BlankUserControl>(), typeMetadata);
      }
      return m_myPropertyProperty;
    }
    winrt::Windows::UI::Xaml::DependencyProperty BlankUserControl::m_myPropertyProperty = nullptr;

}

