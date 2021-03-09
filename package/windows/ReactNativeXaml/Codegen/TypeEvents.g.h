#include "pch.h"
#include "XamlMetadata.h"
#include "Serialize.h"
#include "Crc32Str.h"
#include <JSValueWriter.h>

/*************************************************************
THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT MODIFY MANUALLY
**************************************************************/

#include <winrt/Windows.UI.Xaml.h>
#include <winrt/Windows.UI.Xaml.Controls.h>
#include <winrt/Windows.UI.Xaml.Controls.Primitives.h>
#include <winrt/Windows.UI.Xaml.Controls.Maps.h>
#include <winrt/Windows.UI.Xaml.Input.h>

/////// Events
template<typename TArgs>
void SerializeEventArgs(winrt::Microsoft::ReactNative::IJSValueWriter const& writer, const winrt::Windows::Foundation::IInspectable& sender, const TArgs& args);


template<typename T>
__declspec(noinline) T DoTheTypeChecking(const winrt::Windows::Foundation::IInspectable& ii, bool isWrapped) {
  auto o = isWrapped ? Unwrap<T>(ii) : ii.try_as<T>();
  return o;
}

template<typename T>
__declspec(noinline) void DispatchTheEvent(const EventAttachInfo& eai, const winrt::Windows::Foundation::IInspectable& sender, const T& args) {
  xaml::FrameworkElement senderAsFE = sender.try_as<FrameworkElement>();
  auto wEN = winrt::to_hstring(eai.jsEventName);
  eai.context.DispatchEvent(eai.obj.try_as<xaml::FrameworkElement>(), wEN.c_str(), 
    [senderAsFE, args](const winrt::Microsoft::ReactNative::IJSValueWriter& evtDataWriter) { 
        SerializeEventArgs(evtDataWriter, senderAsFE, args); 
        });
};

/*static*/ const EventInfo EventInfo::xamlEventMap[] = {
  {"DoubleTapped", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.DoubleTapped([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DragEnter", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.DragEnter([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DragLeave", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.DragLeave([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DragOver", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.DragOver([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Drop", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.Drop([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"GotFocus", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.GotFocus([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Holding", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.Holding([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::HoldingRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"LostFocus", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.LostFocus([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ManipulationCompleted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.ManipulationCompleted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ManipulationDelta", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.ManipulationDelta([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ManipulationInertiaStarting", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.ManipulationInertiaStarting([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ManipulationStarted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.ManipulationStarted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ManipulationStarting", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.ManipulationStarting([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PointerCanceled", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.PointerCanceled([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PointerCaptureLost", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.PointerCaptureLost([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PointerEntered", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.PointerEntered([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PointerExited", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.PointerExited([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PointerMoved", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.PointerMoved([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PointerPressed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.PointerPressed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PointerReleased", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.PointerReleased([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PointerWheelChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.PointerWheelChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"RightTapped", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.RightTapped([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::RightTappedRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Tapped", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.Tapped([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DragStarting", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.DragStarting([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::DragStartingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DropCompleted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.DropCompleted([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::DropCompletedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"AccessKeyDisplayDismissed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.AccessKeyDisplayDismissed([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"AccessKeyDisplayRequested", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.AccessKeyDisplayRequested([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"AccessKeyInvoked", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.AccessKeyInvoked([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ContextCanceled", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.ContextCanceled([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ContextRequested", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.ContextRequested([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"GettingFocus", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.GettingFocus([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"LosingFocus", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.LosingFocus([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"NoFocusCandidateFound", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.NoFocusCandidateFound([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"CharacterReceived", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.CharacterReceived([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PreviewKeyDown", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.PreviewKeyDown([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PreviewKeyUp", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.PreviewKeyUp([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ProcessKeyboardAccelerators", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.ProcessKeyboardAccelerators([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"BringIntoViewRequested", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      c.BringIntoViewRequested([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"LayoutUpdated", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(eai.obj, isWrapped)) {
      c.LayoutUpdated([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Loaded", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(eai.obj, isWrapped)) {
      c.Loaded([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SizeChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(eai.obj, isWrapped)) {
      c.SizeChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::SizeChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Unloaded", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(eai.obj, isWrapped)) {
      c.Unloaded([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DataContextChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(eai.obj, isWrapped)) {
      c.DataContextChanged([eai] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::UI::Xaml::DataContextChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Loading", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(eai.obj, isWrapped)) {
      c.Loading([eai] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ActualThemeChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(eai.obj, isWrapped)) {
      c.ActualThemeChanged([eai] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"EffectiveViewportChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(eai.obj, isWrapped)) {
      c.EffectiveViewportChanged([eai] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::UI::Xaml::EffectiveViewportChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"IsEnabledChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Control>(eai.obj, isWrapped)) {
      c.IsEnabledChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"FocusDisengaged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Control>(eai.obj, isWrapped)) {
      c.FocusDisengaged([eai] (const winrt::Windows::UI::Xaml::Controls::Control& sender, const winrt::Windows::UI::Xaml::Controls::FocusDisengagedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"FocusEngaged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Control>(eai.obj, isWrapped)) {
      c.FocusEngaged([eai] (const winrt::Windows::UI::Xaml::Controls::Control& sender, const winrt::Windows::UI::Xaml::Controls::FocusEngagedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Closed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AppBar>(eai.obj, isWrapped)) {
      c.Closed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Opened", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AppBar>(eai.obj, isWrapped)) {
      c.Opened([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Closing", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AppBar>(eai.obj, isWrapped)) {
      c.Closing([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Opening", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AppBar>(eai.obj, isWrapped)) {
      c.Opening([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Click", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase>(eai.obj, isWrapped)) {
      c.Click([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Checked", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>(eai.obj, isWrapped)) {
      c.Checked([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Indeterminate", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>(eai.obj, isWrapped)) {
      c.Indeterminate([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Unchecked", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>(eai.obj, isWrapped)) {
      c.Unchecked([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SuggestionChosen", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>(eai.obj, isWrapped)) {
      c.SuggestionChosen([eai] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxSuggestionChosenEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"TextChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>(eai.obj, isWrapped)) {
      c.TextChanged([eai] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxTextChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"QuerySubmitted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>(eai.obj, isWrapped)) {
      c.QuerySubmitted([eai] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"CalendarViewDayItemChanging", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>(eai.obj, isWrapped)) {
      c.CalendarViewDayItemChanging([eai] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Closed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>(eai.obj, isWrapped)) {
      c.Closed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DateChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>(eai.obj, isWrapped)) {
      c.DateChanged([eai] (const winrt::Windows::UI::Xaml::Controls::CalendarDatePicker& sender, const winrt::Windows::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Opened", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>(eai.obj, isWrapped)) {
      c.Opened([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"CalendarViewDayItemChanging", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarView>(eai.obj, isWrapped)) {
      c.CalendarViewDayItemChanging([eai] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SelectedDatesChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarView>(eai.obj, isWrapped)) {
      c.SelectedDatesChanged([eai] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewSelectedDatesChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ColorChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ColorPicker>(eai.obj, isWrapped)) {
      c.ColorChanged([eai] (const winrt::Windows::UI::Xaml::Controls::ColorPicker& sender, const winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SelectionChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Selector>(eai.obj, isWrapped)) {
      c.SelectionChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DropDownClosed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ComboBox>(eai.obj, isWrapped)) {
      c.DropDownClosed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DropDownOpened", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ComboBox>(eai.obj, isWrapped)) {
      c.DropDownOpened([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"TextSubmitted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ComboBox>(eai.obj, isWrapped)) {
      c.TextSubmitted([eai] (const winrt::Windows::UI::Xaml::Controls::ComboBox& sender, const winrt::Windows::UI::Xaml::Controls::ComboBoxTextSubmittedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DynamicOverflowItemsChanging", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CommandBar>(eai.obj, isWrapped)) {
      c.DynamicOverflowItemsChanging([eai] (const winrt::Windows::UI::Xaml::Controls::CommandBar& sender, const winrt::Windows::UI::Xaml::Controls::DynamicOverflowItemsChangingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Closed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>(eai.obj, isWrapped)) {
      c.Closed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Opened", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>(eai.obj, isWrapped)) {
      c.Opened([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Opening", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>(eai.obj, isWrapped)) {
      c.Opening([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Closing", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>(eai.obj, isWrapped)) {
      c.Closing([eai] (const winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Closed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(eai.obj, isWrapped)) {
      c.Closed([eai] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Closing", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(eai.obj, isWrapped)) {
      c.Closing([eai] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogClosingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Opened", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(eai.obj, isWrapped)) {
      c.Opened([eai] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogOpenedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PrimaryButtonClick", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(eai.obj, isWrapped)) {
      c.PrimaryButtonClick([eai] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SecondaryButtonClick", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(eai.obj, isWrapped)) {
      c.SecondaryButtonClick([eai] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"CloseButtonClick", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(eai.obj, isWrapped)) {
      c.CloseButtonClick([eai] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DateChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::DatePicker>(eai.obj, isWrapped)) {
      c.DateChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::DatePickerValueChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SelectedDateChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::DatePicker>(eai.obj, isWrapped)) {
      c.SelectedDateChanged([eai] (const winrt::Windows::UI::Xaml::Controls::DatePicker& sender, const winrt::Windows::UI::Xaml::Controls::DatePickerSelectedValueChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DatePicked", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::DatePickerFlyout>(eai.obj, isWrapped)) {
      c.DatePicked([eai] (const winrt::Windows::UI::Xaml::Controls::DatePickerFlyout& sender, const winrt::Windows::UI::Xaml::Controls::DatePickedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Navigated", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Frame>(eai.obj, isWrapped)) {
      c.Navigated([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Navigating", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Frame>(eai.obj, isWrapped)) {
      c.Navigating([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"NavigationFailed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Frame>(eai.obj, isWrapped)) {
      c.NavigationFailed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"NavigationStopped", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Frame>(eai.obj, isWrapped)) {
      c.NavigationStopped([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DragItemsStarting", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(eai.obj, isWrapped)) {
      c.DragItemsStarting([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ItemClick", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(eai.obj, isWrapped)) {
      c.ItemClick([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ItemClickEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ContainerContentChanging", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(eai.obj, isWrapped)) {
      c.ContainerContentChanging([eai] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ChoosingGroupHeaderContainer", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(eai.obj, isWrapped)) {
      c.ChoosingGroupHeaderContainer([eai] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ChoosingGroupHeaderContainerEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ChoosingItemContainer", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(eai.obj, isWrapped)) {
      c.ChoosingItemContainer([eai] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ChoosingItemContainerEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DragItemsCompleted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(eai.obj, isWrapped)) {
      c.DragItemsCompleted([eai] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Closed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::HandwritingView>(eai.obj, isWrapped)) {
      c.Closed([eai] (const winrt::Windows::UI::Xaml::Controls::HandwritingView& sender, const winrt::Windows::UI::Xaml::Controls::HandwritingPanelClosedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Opened", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::HandwritingView>(eai.obj, isWrapped)) {
      c.Opened([eai] (const winrt::Windows::UI::Xaml::Controls::HandwritingView& sender, const winrt::Windows::UI::Xaml::Controls::HandwritingPanelOpenedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SectionHeaderClick", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Hub>(eai.obj, isWrapped)) {
      c.SectionHeaderClick([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::HubSectionHeaderClickEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SectionsInViewChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Hub>(eai.obj, isWrapped)) {
      c.SectionsInViewChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SectionsInViewChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ImageFailed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Image>(eai.obj, isWrapped)) {
      c.ImageFailed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ImageOpened", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Image>(eai.obj, isWrapped)) {
      c.ImageOpened([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ActiveToolChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbar>(eai.obj, isWrapped)) {
      c.ActiveToolChanged([eai] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"EraseAllClicked", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbar>(eai.obj, isWrapped)) {
      c.EraseAllClicked([eai] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"InkDrawingAttributesChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbar>(eai.obj, isWrapped)) {
      c.InkDrawingAttributesChanged([eai] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"IsRulerButtonCheckedChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbar>(eai.obj, isWrapped)) {
      c.IsRulerButtonCheckedChanged([eai] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"IsStencilButtonCheckedChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbar>(eai.obj, isWrapped)) {
      c.IsStencilButtonCheckedChanged([eai] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::UI::Xaml::Controls::InkToolbarIsStencilButtonCheckedChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Checked", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem>(eai.obj, isWrapped)) {
      c.Checked([eai] (const winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Unchecked", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem>(eai.obj, isWrapped)) {
      c.Unchecked([eai] (const winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"HorizontalSnapPointsChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ItemsPresenter>(eai.obj, isWrapped)) {
      c.HorizontalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"VerticalSnapPointsChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ItemsPresenter>(eai.obj, isWrapped)) {
      c.VerticalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ItemsPicked", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListPickerFlyout>(eai.obj, isWrapped)) {
      c.ItemsPicked([eai] (const winrt::Windows::UI::Xaml::Controls::ListPickerFlyout& sender, const winrt::Windows::UI::Xaml::Controls::ItemsPickedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"CenterChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.CenterChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"HeadingChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.HeadingChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"LoadingStatusChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.LoadingStatusChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"MapDoubleTapped", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.MapDoubleTapped([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"MapHolding", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.MapHolding([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"MapTapped", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.MapTapped([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PitchChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.PitchChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"TransformOriginChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.TransformOriginChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ZoomLevelChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.ZoomLevelChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ActualCameraChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.ActualCameraChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ActualCameraChanging", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.ActualCameraChanging([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"CustomExperienceChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.CustomExperienceChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"MapElementClick", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.MapElementClick([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"MapElementPointerEntered", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.MapElementPointerEntered([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"MapElementPointerExited", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.MapElementPointerExited([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"TargetCameraChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.TargetCameraChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"MapRightTapped", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.MapRightTapped([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"MapContextRequested", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      c.MapContextRequested([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"BufferingProgressChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      c.BufferingProgressChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"CurrentStateChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      c.CurrentStateChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DownloadProgressChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      c.DownloadProgressChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"MarkerReached", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      c.MarkerReached([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"MediaEnded", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      c.MediaEnded([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"MediaFailed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      c.MediaFailed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"MediaOpened", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      c.MediaOpened([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"RateChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      c.RateChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Media::RateChangedRoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SeekCompleted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      c.SeekCompleted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"VolumeChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      c.VolumeChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PartialMediaFailureDetected", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      c.PartialMediaFailureDetected([eai] (const winrt::Windows::UI::Xaml::Controls::MediaElement& sender, const winrt::Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ThumbnailRequested", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>(eai.obj, isWrapped)) {
      c.ThumbnailRequested([eai] (const winrt::Windows::UI::Xaml::Controls::MediaTransportControls& sender, const winrt::Windows::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Click", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem>(eai.obj, isWrapped)) {
      c.Click([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DisplayModeChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      c.DisplayModeChanged([eai] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewDisplayModeChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ItemInvoked", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      c.ItemInvoked([eai] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SelectionChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      c.SelectionChanged([eai] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"BackRequested", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      c.BackRequested([eai] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewBackRequestedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PaneClosed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      c.PaneClosed([eai] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PaneClosing", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      c.PaneClosing([eai] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewPaneClosingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PaneOpened", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      c.PaneOpened([eai] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PaneOpening", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      c.PaneOpening([eai] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ContextMenuOpening", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::PasswordBox>(eai.obj, isWrapped)) {
      c.ContextMenuOpening([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PasswordChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::PasswordBox>(eai.obj, isWrapped)) {
      c.PasswordChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Paste", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::PasswordBox>(eai.obj, isWrapped)) {
      c.Paste([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PasswordChanging", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::PasswordBox>(eai.obj, isWrapped)) {
      c.PasswordChanging([eai] (const winrt::Windows::UI::Xaml::Controls::PasswordBox& sender, const winrt::Windows::UI::Xaml::Controls::PasswordBoxPasswordChangingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Confirmed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::PickerFlyout>(eai.obj, isWrapped)) {
      c.Confirmed([eai] (const winrt::Windows::UI::Xaml::Controls::PickerFlyout& sender, const winrt::Windows::UI::Xaml::Controls::PickerConfirmedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PivotItemLoaded", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Pivot>(eai.obj, isWrapped)) {
      c.PivotItemLoaded([eai] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PivotItemLoading", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Pivot>(eai.obj, isWrapped)) {
      c.PivotItemLoading([eai] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PivotItemUnloaded", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Pivot>(eai.obj, isWrapped)) {
      c.PivotItemUnloaded([eai] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PivotItemUnloading", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Pivot>(eai.obj, isWrapped)) {
      c.PivotItemUnloading([eai] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SelectionChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Pivot>(eai.obj, isWrapped)) {
      c.SelectionChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"HorizontalSnapPointsChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::CarouselPanel>(eai.obj, isWrapped)) {
      c.HorizontalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"VerticalSnapPointsChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::CarouselPanel>(eai.obj, isWrapped)) {
      c.VerticalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ValueChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase>(eai.obj, isWrapped)) {
      c.ValueChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ColorChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>(eai.obj, isWrapped)) {
      c.ColorChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum& sender, const winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SelectionChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector>(eai.obj, isWrapped)) {
      c.SelectionChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"HorizontalSnapPointsChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>(eai.obj, isWrapped)) {
      c.HorizontalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"VerticalSnapPointsChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>(eai.obj, isWrapped)) {
      c.VerticalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"HorizontalSnapPointsChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>(eai.obj, isWrapped)) {
      c.HorizontalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"VerticalSnapPointsChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>(eai.obj, isWrapped)) {
      c.VerticalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"HorizontalSnapPointsChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::PivotPanel>(eai.obj, isWrapped)) {
      c.HorizontalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"VerticalSnapPointsChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::PivotPanel>(eai.obj, isWrapped)) {
      c.VerticalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Closed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>(eai.obj, isWrapped)) {
      c.Closed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Opened", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>(eai.obj, isWrapped)) {
      c.Opened([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Scroll", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar>(eai.obj, isWrapped)) {
      c.Scroll([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DragCompleted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>(eai.obj, isWrapped)) {
      c.DragCompleted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DragDelta", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>(eai.obj, isWrapped)) {
      c.DragDelta([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DragStarted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>(eai.obj, isWrapped)) {
      c.DragStarted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ValueChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RatingControl>(eai.obj, isWrapped)) {
      c.ValueChanged([eai] (const winrt::Windows::UI::Xaml::Controls::RatingControl& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"RefreshRequested", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RefreshContainer>(eai.obj, isWrapped)) {
      c.RefreshRequested([eai] (const winrt::Windows::UI::Xaml::Controls::RefreshContainer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshRequestedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"RefreshRequested", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RefreshVisualizer>(eai.obj, isWrapped)) {
      c.RefreshRequested([eai] (const winrt::Windows::UI::Xaml::Controls::RefreshVisualizer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshRequestedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"RefreshStateChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RefreshVisualizer>(eai.obj, isWrapped)) {
      c.RefreshStateChanged([eai] (const winrt::Windows::UI::Xaml::Controls::RefreshVisualizer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshStateChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ContextMenuOpening", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      c.ContextMenuOpening([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SelectionChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      c.SelectionChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"TextChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      c.TextChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Paste", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      c.Paste([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"CandidateWindowBoundsChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      c.CandidateWindowBoundsChanged([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"TextChanging", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      c.TextChanging([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::RichEditBoxTextChangingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"TextCompositionChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      c.TextCompositionChanged([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"TextCompositionEnded", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      c.TextCompositionEnded([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"TextCompositionStarted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      c.TextCompositionStarted([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"CopyingToClipboard", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      c.CopyingToClipboard([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"CuttingToClipboard", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      c.CuttingToClipboard([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ContentLinkChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      c.ContentLinkChanged([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::ContentLinkChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ContentLinkInvoked", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      c.ContentLinkInvoked([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SelectionChanging", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      c.SelectionChanging([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::RichEditBoxSelectionChangingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ContextMenuOpening", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichTextBlock>(eai.obj, isWrapped)) {
      c.ContextMenuOpening([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SelectionChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichTextBlock>(eai.obj, isWrapped)) {
      c.SelectionChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"IsTextTrimmedChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichTextBlock>(eai.obj, isWrapped)) {
      c.IsTextTrimmedChanged([eai] (const winrt::Windows::UI::Xaml::Controls::RichTextBlock& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"IsTextTrimmedChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow>(eai.obj, isWrapped)) {
      c.IsTextTrimmedChanged([eai] (const winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ViewChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ScrollViewer>(eai.obj, isWrapped)) {
      c.ViewChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ScrollViewerViewChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ViewChanging", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ScrollViewer>(eai.obj, isWrapped)) {
      c.ViewChanging([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ScrollViewerViewChangingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DirectManipulationCompleted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ScrollViewer>(eai.obj, isWrapped)) {
      c.DirectManipulationCompleted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DirectManipulationStarted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ScrollViewer>(eai.obj, isWrapped)) {
      c.DirectManipulationStarted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"AnchorRequested", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ScrollViewer>(eai.obj, isWrapped)) {
      c.AnchorRequested([eai] (const winrt::Windows::UI::Xaml::Controls::ScrollViewer& sender, const winrt::Windows::UI::Xaml::Controls::AnchorRequestedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PrepareForFocusOnKeyboardInput", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SearchBox>(eai.obj, isWrapped)) {
      c.PrepareForFocusOnKeyboardInput([eai] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"QueryChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SearchBox>(eai.obj, isWrapped)) {
      c.QueryChanged([eai] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxQueryChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"QuerySubmitted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SearchBox>(eai.obj, isWrapped)) {
      c.QuerySubmitted([eai] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxQuerySubmittedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ResultSuggestionChosen", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SearchBox>(eai.obj, isWrapped)) {
      c.ResultSuggestionChosen([eai] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxResultSuggestionChosenEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SuggestionsRequested", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SearchBox>(eai.obj, isWrapped)) {
      c.SuggestionsRequested([eai] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxSuggestionsRequestedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ViewChangeCompleted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SemanticZoom>(eai.obj, isWrapped)) {
      c.ViewChangeCompleted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ViewChangeStarted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SemanticZoom>(eai.obj, isWrapped)) {
      c.ViewChangeStarted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"BackClick", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SettingsFlyout>(eai.obj, isWrapped)) {
      c.BackClick([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::BackClickEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Click", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SplitButton>(eai.obj, isWrapped)) {
      c.Click([eai] (const winrt::Windows::UI::Xaml::Controls::SplitButton& sender, const winrt::Windows::UI::Xaml::Controls::SplitButtonClickEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PaneClosed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SplitView>(eai.obj, isWrapped)) {
      c.PaneClosed([eai] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PaneClosing", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SplitView>(eai.obj, isWrapped)) {
      c.PaneClosing([eai] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::UI::Xaml::Controls::SplitViewPaneClosingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PaneOpened", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SplitView>(eai.obj, isWrapped)) {
      c.PaneOpened([eai] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PaneOpening", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SplitView>(eai.obj, isWrapped)) {
      c.PaneOpening([eai] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"HorizontalSnapPointsChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::StackPanel>(eai.obj, isWrapped)) {
      c.HorizontalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"VerticalSnapPointsChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::StackPanel>(eai.obj, isWrapped)) {
      c.VerticalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"CompositionScaleChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SwapChainPanel>(eai.obj, isWrapped)) {
      c.CompositionScaleChanged([eai] (const winrt::Windows::UI::Xaml::Controls::SwapChainPanel& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ContextMenuOpening", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBlock>(eai.obj, isWrapped)) {
      c.ContextMenuOpening([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SelectionChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBlock>(eai.obj, isWrapped)) {
      c.SelectionChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"IsTextTrimmedChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBlock>(eai.obj, isWrapped)) {
      c.IsTextTrimmedChanged([eai] (const winrt::Windows::UI::Xaml::Controls::TextBlock& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ContextMenuOpening", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      c.ContextMenuOpening([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SelectionChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      c.SelectionChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"TextChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      c.TextChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Paste", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      c.Paste([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"CandidateWindowBoundsChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      c.CandidateWindowBoundsChanged([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"TextChanging", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      c.TextChanging([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxTextChangingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"TextCompositionChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      c.TextCompositionChanged([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"TextCompositionEnded", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      c.TextCompositionEnded([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"TextCompositionStarted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      c.TextCompositionStarted([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"BeforeTextChanging", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      c.BeforeTextChanging([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxBeforeTextChangingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"CopyingToClipboard", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      c.CopyingToClipboard([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"CuttingToClipboard", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      c.CuttingToClipboard([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SelectionChanging", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      c.SelectionChanging([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxSelectionChangingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"TimeChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TimePicker>(eai.obj, isWrapped)) {
      c.TimeChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TimePickerValueChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SelectedTimeChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TimePicker>(eai.obj, isWrapped)) {
      c.SelectedTimeChanged([eai] (const winrt::Windows::UI::Xaml::Controls::TimePicker& sender, const winrt::Windows::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"TimePicked", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TimePickerFlyout>(eai.obj, isWrapped)) {
      c.TimePicked([eai] (const winrt::Windows::UI::Xaml::Controls::TimePickerFlyout& sender, const winrt::Windows::UI::Xaml::Controls::TimePickedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"IsCheckedChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ToggleSplitButton>(eai.obj, isWrapped)) {
      c.IsCheckedChanged([eai] (const winrt::Windows::UI::Xaml::Controls::ToggleSplitButton& sender, const winrt::Windows::UI::Xaml::Controls::ToggleSplitButtonIsCheckedChangedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Toggled", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ToggleSwitch>(eai.obj, isWrapped)) {
      c.Toggled([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Closed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ToolTip>(eai.obj, isWrapped)) {
      c.Closed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Opened", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ToolTip>(eai.obj, isWrapped)) {
      c.Opened([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Collapsed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TreeView>(eai.obj, isWrapped)) {
      c.Collapsed([eai] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewCollapsedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"Expanding", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TreeView>(eai.obj, isWrapped)) {
      c.Expanding([eai] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewExpandingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ItemInvoked", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TreeView>(eai.obj, isWrapped)) {
      c.ItemInvoked([eai] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewItemInvokedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DragItemsCompleted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TreeView>(eai.obj, isWrapped)) {
      c.DragItemsCompleted([eai] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsCompletedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DragItemsStarting", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TreeView>(eai.obj, isWrapped)) {
      c.DragItemsStarting([eai] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsStartingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ModeChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TwoPaneView>(eai.obj, isWrapped)) {
      c.ModeChanged([eai] (const winrt::Windows::UI::Xaml::Controls::TwoPaneView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"CleanUpVirtualizedItemEvent", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::VirtualizingStackPanel>(eai.obj, isWrapped)) {
      c.CleanUpVirtualizedItemEvent([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"LoadCompleted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.LoadCompleted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"NavigationFailed", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.NavigationFailed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationFailedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ScriptNotify", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.ScriptNotify([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::NotifyEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ContentLoading", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.ContentLoading([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewContentLoadingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"DOMContentLoaded", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.DOMContentLoaded([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewDOMContentLoadedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"FrameContentLoading", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.FrameContentLoading([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewContentLoadingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"FrameDOMContentLoaded", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.FrameDOMContentLoaded([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewDOMContentLoadedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"FrameNavigationCompleted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.FrameNavigationCompleted([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"FrameNavigationStarting", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.FrameNavigationStarting([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"LongRunningScriptDetected", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.LongRunningScriptDetected([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewLongRunningScriptDetectedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"NavigationCompleted", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.NavigationCompleted([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"NavigationStarting", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.NavigationStarting([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"UnsafeContentWarningDisplaying", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.UnsafeContentWarningDisplaying([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"UnviewableContentIdentified", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.UnviewableContentIdentified([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewUnviewableContentIdentifiedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"ContainsFullScreenElementChanged", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.ContainsFullScreenElementChanged([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"NewWindowRequested", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.NewWindowRequested([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNewWindowRequestedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"PermissionRequested", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.PermissionRequested([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewPermissionRequestedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"UnsupportedUriSchemeIdentified", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.UnsupportedUriSchemeIdentified([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewUnsupportedUriSchemeIdentifiedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"SeparateProcessLost", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.SeparateProcessLost([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewSeparateProcessLostEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },
  {"WebResourceRequested", [](const EventAttachInfo& eai, bool isWrapped) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      c.WebResourceRequested([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewWebResourceRequestedEventArgs& args) noexcept {
        DispatchTheEvent(eai, sender, args);
      });
    }
  } },

};

static_assert(ARRAYSIZE(EventInfo::xamlEventMap) == 270);

void JsEvent(winrt::Microsoft::ReactNative::IJSValueWriter const& constantWriter, std::wstring topName, std::wstring onName) {
    constantWriter.WritePropertyName(topName);
    constantWriter.WriteObjectBegin();
    WriteProperty(constantWriter, L"registrationName", onName);
    constantWriter.WriteObjectEnd();
  }

#define JS_EVENT(evtName) JsEvent(constantWriter, L"top" L#evtName, L"on" L#evtName)

ConstantProviderDelegate GetEvents = 
    [](winrt::Microsoft::ReactNative::IJSValueWriter const& constantWriter) {
    for (auto const& e : EventInfo::xamlEventMap) {
        auto wideName = std::wstring(winrt::to_hstring(e.name));
        JsEvent(constantWriter, L"top" + wideName, L"on" + wideName);
    }
};

