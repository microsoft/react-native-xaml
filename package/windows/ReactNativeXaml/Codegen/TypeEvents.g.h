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
__declspec(noinline) void DispatchTheEvent(const xaml::FrameworkElement& fe, const xaml::FrameworkElement& sender, const T& args, const IReactContext& reactContext, std::wstring_view eventName) {
  reactContext.DispatchEvent(fe, eventName, [sender, args](const winrt::Microsoft::ReactNative::IJSValueWriter& evtDataWriter) { SerializeEventArgs(evtDataWriter, sender, args); });
};

/*static*/ const EventInfo EventInfo::xamlEventMap[] = {
  {"DoubleTapped", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.DoubleTapped([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDoubleTapped");
      });
    }
  } },
  {"DragEnter", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.DragEnter([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDragEnter");
      });
    }
  } },
  {"DragLeave", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.DragLeave([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDragLeave");
      });
    }
  } },
  {"DragOver", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.DragOver([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDragOver");
      });
    }
  } },
  {"Drop", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.Drop([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDrop");
      });
    }
  } },
  {"GotFocus", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.GotFocus([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topGotFocus");
      });
    }
  } },
  {"Holding", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.Holding([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::HoldingRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topHolding");
      });
    }
  } },
  {"LostFocus", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.LostFocus([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topLostFocus");
      });
    }
  } },
  {"ManipulationCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.ManipulationCompleted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topManipulationCompleted");
      });
    }
  } },
  {"ManipulationDelta", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.ManipulationDelta([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topManipulationDelta");
      });
    }
  } },
  {"ManipulationInertiaStarting", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.ManipulationInertiaStarting([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topManipulationInertiaStarting");
      });
    }
  } },
  {"ManipulationStarted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.ManipulationStarted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topManipulationStarted");
      });
    }
  } },
  {"ManipulationStarting", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.ManipulationStarting([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topManipulationStarting");
      });
    }
  } },
  {"PointerCanceled", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.PointerCanceled([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPointerCanceled");
      });
    }
  } },
  {"PointerCaptureLost", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.PointerCaptureLost([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPointerCaptureLost");
      });
    }
  } },
  {"PointerEntered", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.PointerEntered([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPointerEntered");
      });
    }
  } },
  {"PointerExited", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.PointerExited([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPointerExited");
      });
    }
  } },
  {"PointerMoved", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.PointerMoved([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPointerMoved");
      });
    }
  } },
  {"PointerPressed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.PointerPressed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPointerPressed");
      });
    }
  } },
  {"PointerReleased", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.PointerReleased([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPointerReleased");
      });
    }
  } },
  {"PointerWheelChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.PointerWheelChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPointerWheelChanged");
      });
    }
  } },
  {"RightTapped", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.RightTapped([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::RightTappedRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topRightTapped");
      });
    }
  } },
  {"Tapped", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.Tapped([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topTapped");
      });
    }
  } },
  {"DragStarting", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.DragStarting([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::DragStartingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDragStarting");
      });
    }
  } },
  {"DropCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.DropCompleted([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::DropCompletedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDropCompleted");
      });
    }
  } },
  {"AccessKeyDisplayDismissed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.AccessKeyDisplayDismissed([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topAccessKeyDisplayDismissed");
      });
    }
  } },
  {"AccessKeyDisplayRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.AccessKeyDisplayRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topAccessKeyDisplayRequested");
      });
    }
  } },
  {"AccessKeyInvoked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.AccessKeyInvoked([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topAccessKeyInvoked");
      });
    }
  } },
  {"ContextCanceled", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.ContextCanceled([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topContextCanceled");
      });
    }
  } },
  {"ContextRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.ContextRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topContextRequested");
      });
    }
  } },
  {"GettingFocus", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.GettingFocus([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topGettingFocus");
      });
    }
  } },
  {"LosingFocus", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.LosingFocus([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topLosingFocus");
      });
    }
  } },
  {"NoFocusCandidateFound", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.NoFocusCandidateFound([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topNoFocusCandidateFound");
      });
    }
  } },
  {"CharacterReceived", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.CharacterReceived([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topCharacterReceived");
      });
    }
  } },
  {"PreviewKeyDown", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.PreviewKeyDown([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPreviewKeyDown");
      });
    }
  } },
  {"PreviewKeyUp", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.PreviewKeyUp([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPreviewKeyUp");
      });
    }
  } },
  {"ProcessKeyboardAccelerators", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.ProcessKeyboardAccelerators([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topProcessKeyboardAccelerators");
      });
    }
  } },
  {"BringIntoViewRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(ii, isWrapped)) {
      c.BringIntoViewRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topBringIntoViewRequested");
      });
    }
  } },
  {"LayoutUpdated", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(ii, isWrapped)) {
      c.LayoutUpdated([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topLayoutUpdated");
      });
    }
  } },
  {"Loaded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(ii, isWrapped)) {
      c.Loaded([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topLoaded");
      });
    }
  } },
  {"SizeChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(ii, isWrapped)) {
      c.SizeChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::SizeChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSizeChanged");
      });
    }
  } },
  {"Unloaded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(ii, isWrapped)) {
      c.Unloaded([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topUnloaded");
      });
    }
  } },
  {"DataContextChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(ii, isWrapped)) {
      c.DataContextChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::UI::Xaml::DataContextChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDataContextChanged");
      });
    }
  } },
  {"Loading", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(ii, isWrapped)) {
      c.Loading([reactContext, ii] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topLoading");
      });
    }
  } },
  {"ActualThemeChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(ii, isWrapped)) {
      c.ActualThemeChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topActualThemeChanged");
      });
    }
  } },
  {"EffectiveViewportChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(ii, isWrapped)) {
      c.EffectiveViewportChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::UI::Xaml::EffectiveViewportChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topEffectiveViewportChanged");
      });
    }
  } },
  {"IsEnabledChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Control>(ii, isWrapped)) {
      c.IsEnabledChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topIsEnabledChanged");
      });
    }
  } },
  {"FocusDisengaged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Control>(ii, isWrapped)) {
      c.FocusDisengaged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Control& sender, const winrt::Windows::UI::Xaml::Controls::FocusDisengagedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topFocusDisengaged");
      });
    }
  } },
  {"FocusEngaged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Control>(ii, isWrapped)) {
      c.FocusEngaged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Control& sender, const winrt::Windows::UI::Xaml::Controls::FocusEngagedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topFocusEngaged");
      });
    }
  } },
  {"Closed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AppBar>(ii, isWrapped)) {
      c.Closed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topClosed");
      });
    }
  } },
  {"Opened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AppBar>(ii, isWrapped)) {
      c.Opened([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topOpened");
      });
    }
  } },
  {"Closing", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AppBar>(ii, isWrapped)) {
      c.Closing([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topClosing");
      });
    }
  } },
  {"Opening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AppBar>(ii, isWrapped)) {
      c.Opening([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topOpening");
      });
    }
  } },
  {"Click", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase>(ii, isWrapped)) {
      c.Click([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topClick");
      });
    }
  } },
  {"Checked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>(ii, isWrapped)) {
      c.Checked([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topChecked");
      });
    }
  } },
  {"Indeterminate", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>(ii, isWrapped)) {
      c.Indeterminate([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topIndeterminate");
      });
    }
  } },
  {"Unchecked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>(ii, isWrapped)) {
      c.Unchecked([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topUnchecked");
      });
    }
  } },
  {"SuggestionChosen", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>(ii, isWrapped)) {
      c.SuggestionChosen([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxSuggestionChosenEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSuggestionChosen");
      });
    }
  } },
  {"TextChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>(ii, isWrapped)) {
      c.TextChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxTextChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topTextChanged");
      });
    }
  } },
  {"QuerySubmitted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>(ii, isWrapped)) {
      c.QuerySubmitted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topQuerySubmitted");
      });
    }
  } },
  {"CalendarViewDayItemChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>(ii, isWrapped)) {
      c.CalendarViewDayItemChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topCalendarViewDayItemChanging");
      });
    }
  } },
  {"Closed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>(ii, isWrapped)) {
      c.Closed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topClosed");
      });
    }
  } },
  {"DateChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>(ii, isWrapped)) {
      c.DateChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::CalendarDatePicker& sender, const winrt::Windows::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDateChanged");
      });
    }
  } },
  {"Opened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>(ii, isWrapped)) {
      c.Opened([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topOpened");
      });
    }
  } },
  {"CalendarViewDayItemChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarView>(ii, isWrapped)) {
      c.CalendarViewDayItemChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topCalendarViewDayItemChanging");
      });
    }
  } },
  {"SelectedDatesChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarView>(ii, isWrapped)) {
      c.SelectedDatesChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewSelectedDatesChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSelectedDatesChanged");
      });
    }
  } },
  {"ColorChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ColorPicker>(ii, isWrapped)) {
      c.ColorChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ColorPicker& sender, const winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topColorChanged");
      });
    }
  } },
  {"SelectionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Selector>(ii, isWrapped)) {
      c.SelectionChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSelectionChanged");
      });
    }
  } },
  {"DropDownClosed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ComboBox>(ii, isWrapped)) {
      c.DropDownClosed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDropDownClosed");
      });
    }
  } },
  {"DropDownOpened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ComboBox>(ii, isWrapped)) {
      c.DropDownOpened([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDropDownOpened");
      });
    }
  } },
  {"TextSubmitted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ComboBox>(ii, isWrapped)) {
      c.TextSubmitted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ComboBox& sender, const winrt::Windows::UI::Xaml::Controls::ComboBoxTextSubmittedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topTextSubmitted");
      });
    }
  } },
  {"DynamicOverflowItemsChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CommandBar>(ii, isWrapped)) {
      c.DynamicOverflowItemsChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::CommandBar& sender, const winrt::Windows::UI::Xaml::Controls::DynamicOverflowItemsChangingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDynamicOverflowItemsChanging");
      });
    }
  } },
  {"Closed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>(ii, isWrapped)) {
      c.Closed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topClosed");
      });
    }
  } },
  {"Opened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>(ii, isWrapped)) {
      c.Opened([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topOpened");
      });
    }
  } },
  {"Opening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>(ii, isWrapped)) {
      c.Opening([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topOpening");
      });
    }
  } },
  {"Closing", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>(ii, isWrapped)) {
      c.Closing([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topClosing");
      });
    }
  } },
  {"Closed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(ii, isWrapped)) {
      c.Closed([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topClosed");
      });
    }
  } },
  {"Closing", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(ii, isWrapped)) {
      c.Closing([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogClosingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topClosing");
      });
    }
  } },
  {"Opened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(ii, isWrapped)) {
      c.Opened([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogOpenedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topOpened");
      });
    }
  } },
  {"PrimaryButtonClick", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(ii, isWrapped)) {
      c.PrimaryButtonClick([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPrimaryButtonClick");
      });
    }
  } },
  {"SecondaryButtonClick", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(ii, isWrapped)) {
      c.SecondaryButtonClick([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSecondaryButtonClick");
      });
    }
  } },
  {"CloseButtonClick", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(ii, isWrapped)) {
      c.CloseButtonClick([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topCloseButtonClick");
      });
    }
  } },
  {"DateChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::DatePicker>(ii, isWrapped)) {
      c.DateChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::DatePickerValueChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDateChanged");
      });
    }
  } },
  {"SelectedDateChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::DatePicker>(ii, isWrapped)) {
      c.SelectedDateChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::DatePicker& sender, const winrt::Windows::UI::Xaml::Controls::DatePickerSelectedValueChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSelectedDateChanged");
      });
    }
  } },
  {"DatePicked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::DatePickerFlyout>(ii, isWrapped)) {
      c.DatePicked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::DatePickerFlyout& sender, const winrt::Windows::UI::Xaml::Controls::DatePickedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDatePicked");
      });
    }
  } },
  {"Navigated", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Frame>(ii, isWrapped)) {
      c.Navigated([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topNavigated");
      });
    }
  } },
  {"Navigating", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Frame>(ii, isWrapped)) {
      c.Navigating([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topNavigating");
      });
    }
  } },
  {"NavigationFailed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Frame>(ii, isWrapped)) {
      c.NavigationFailed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topNavigationFailed");
      });
    }
  } },
  {"NavigationStopped", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Frame>(ii, isWrapped)) {
      c.NavigationStopped([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topNavigationStopped");
      });
    }
  } },
  {"DragItemsStarting", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(ii, isWrapped)) {
      c.DragItemsStarting([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDragItemsStarting");
      });
    }
  } },
  {"ItemClick", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(ii, isWrapped)) {
      c.ItemClick([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ItemClickEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topItemClick");
      });
    }
  } },
  {"ContainerContentChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(ii, isWrapped)) {
      c.ContainerContentChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topContainerContentChanging");
      });
    }
  } },
  {"ChoosingGroupHeaderContainer", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(ii, isWrapped)) {
      c.ChoosingGroupHeaderContainer([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ChoosingGroupHeaderContainerEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topChoosingGroupHeaderContainer");
      });
    }
  } },
  {"ChoosingItemContainer", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(ii, isWrapped)) {
      c.ChoosingItemContainer([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ChoosingItemContainerEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topChoosingItemContainer");
      });
    }
  } },
  {"DragItemsCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(ii, isWrapped)) {
      c.DragItemsCompleted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDragItemsCompleted");
      });
    }
  } },
  {"Closed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::HandwritingView>(ii, isWrapped)) {
      c.Closed([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::HandwritingView& sender, const winrt::Windows::UI::Xaml::Controls::HandwritingPanelClosedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topClosed");
      });
    }
  } },
  {"Opened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::HandwritingView>(ii, isWrapped)) {
      c.Opened([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::HandwritingView& sender, const winrt::Windows::UI::Xaml::Controls::HandwritingPanelOpenedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topOpened");
      });
    }
  } },
  {"SectionHeaderClick", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Hub>(ii, isWrapped)) {
      c.SectionHeaderClick([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::HubSectionHeaderClickEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSectionHeaderClick");
      });
    }
  } },
  {"SectionsInViewChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Hub>(ii, isWrapped)) {
      c.SectionsInViewChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SectionsInViewChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSectionsInViewChanged");
      });
    }
  } },
  {"ImageFailed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Image>(ii, isWrapped)) {
      c.ImageFailed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topImageFailed");
      });
    }
  } },
  {"ImageOpened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Image>(ii, isWrapped)) {
      c.ImageOpened([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topImageOpened");
      });
    }
  } },
  {"ActiveToolChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbar>(ii, isWrapped)) {
      c.ActiveToolChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topActiveToolChanged");
      });
    }
  } },
  {"EraseAllClicked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbar>(ii, isWrapped)) {
      c.EraseAllClicked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topEraseAllClicked");
      });
    }
  } },
  {"InkDrawingAttributesChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbar>(ii, isWrapped)) {
      c.InkDrawingAttributesChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topInkDrawingAttributesChanged");
      });
    }
  } },
  {"IsRulerButtonCheckedChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbar>(ii, isWrapped)) {
      c.IsRulerButtonCheckedChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topIsRulerButtonCheckedChanged");
      });
    }
  } },
  {"IsStencilButtonCheckedChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbar>(ii, isWrapped)) {
      c.IsStencilButtonCheckedChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::UI::Xaml::Controls::InkToolbarIsStencilButtonCheckedChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topIsStencilButtonCheckedChanged");
      });
    }
  } },
  {"Checked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem>(ii, isWrapped)) {
      c.Checked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topChecked");
      });
    }
  } },
  {"Unchecked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem>(ii, isWrapped)) {
      c.Unchecked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topUnchecked");
      });
    }
  } },
  {"HorizontalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ItemsPresenter>(ii, isWrapped)) {
      c.HorizontalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topHorizontalSnapPointsChanged");
      });
    }
  } },
  {"VerticalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ItemsPresenter>(ii, isWrapped)) {
      c.VerticalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topVerticalSnapPointsChanged");
      });
    }
  } },
  {"ItemsPicked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListPickerFlyout>(ii, isWrapped)) {
      c.ItemsPicked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ListPickerFlyout& sender, const winrt::Windows::UI::Xaml::Controls::ItemsPickedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topItemsPicked");
      });
    }
  } },
  {"CenterChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.CenterChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topCenterChanged");
      });
    }
  } },
  {"HeadingChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.HeadingChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topHeadingChanged");
      });
    }
  } },
  {"LoadingStatusChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.LoadingStatusChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topLoadingStatusChanged");
      });
    }
  } },
  {"MapDoubleTapped", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.MapDoubleTapped([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topMapDoubleTapped");
      });
    }
  } },
  {"MapHolding", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.MapHolding([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topMapHolding");
      });
    }
  } },
  {"MapTapped", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.MapTapped([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topMapTapped");
      });
    }
  } },
  {"PitchChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.PitchChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPitchChanged");
      });
    }
  } },
  {"TransformOriginChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.TransformOriginChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topTransformOriginChanged");
      });
    }
  } },
  {"ZoomLevelChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.ZoomLevelChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topZoomLevelChanged");
      });
    }
  } },
  {"ActualCameraChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.ActualCameraChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topActualCameraChanged");
      });
    }
  } },
  {"ActualCameraChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.ActualCameraChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topActualCameraChanging");
      });
    }
  } },
  {"CustomExperienceChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.CustomExperienceChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topCustomExperienceChanged");
      });
    }
  } },
  {"MapElementClick", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.MapElementClick([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topMapElementClick");
      });
    }
  } },
  {"MapElementPointerEntered", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.MapElementPointerEntered([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topMapElementPointerEntered");
      });
    }
  } },
  {"MapElementPointerExited", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.MapElementPointerExited([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topMapElementPointerExited");
      });
    }
  } },
  {"TargetCameraChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.TargetCameraChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topTargetCameraChanged");
      });
    }
  } },
  {"MapRightTapped", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.MapRightTapped([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topMapRightTapped");
      });
    }
  } },
  {"MapContextRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(ii, isWrapped)) {
      c.MapContextRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topMapContextRequested");
      });
    }
  } },
  {"BufferingProgressChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(ii, isWrapped)) {
      c.BufferingProgressChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topBufferingProgressChanged");
      });
    }
  } },
  {"CurrentStateChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(ii, isWrapped)) {
      c.CurrentStateChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topCurrentStateChanged");
      });
    }
  } },
  {"DownloadProgressChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(ii, isWrapped)) {
      c.DownloadProgressChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDownloadProgressChanged");
      });
    }
  } },
  {"MarkerReached", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(ii, isWrapped)) {
      c.MarkerReached([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topMarkerReached");
      });
    }
  } },
  {"MediaEnded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(ii, isWrapped)) {
      c.MediaEnded([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topMediaEnded");
      });
    }
  } },
  {"MediaFailed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(ii, isWrapped)) {
      c.MediaFailed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topMediaFailed");
      });
    }
  } },
  {"MediaOpened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(ii, isWrapped)) {
      c.MediaOpened([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topMediaOpened");
      });
    }
  } },
  {"RateChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(ii, isWrapped)) {
      c.RateChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Media::RateChangedRoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topRateChanged");
      });
    }
  } },
  {"SeekCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(ii, isWrapped)) {
      c.SeekCompleted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSeekCompleted");
      });
    }
  } },
  {"VolumeChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(ii, isWrapped)) {
      c.VolumeChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topVolumeChanged");
      });
    }
  } },
  {"PartialMediaFailureDetected", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(ii, isWrapped)) {
      c.PartialMediaFailureDetected([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::MediaElement& sender, const winrt::Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPartialMediaFailureDetected");
      });
    }
  } },
  {"ThumbnailRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>(ii, isWrapped)) {
      c.ThumbnailRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::MediaTransportControls& sender, const winrt::Windows::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topThumbnailRequested");
      });
    }
  } },
  {"Click", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem>(ii, isWrapped)) {
      c.Click([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topClick");
      });
    }
  } },
  {"DisplayModeChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(ii, isWrapped)) {
      c.DisplayModeChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewDisplayModeChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDisplayModeChanged");
      });
    }
  } },
  {"ItemInvoked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(ii, isWrapped)) {
      c.ItemInvoked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topItemInvoked");
      });
    }
  } },
  {"SelectionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(ii, isWrapped)) {
      c.SelectionChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSelectionChanged");
      });
    }
  } },
  {"BackRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(ii, isWrapped)) {
      c.BackRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewBackRequestedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topBackRequested");
      });
    }
  } },
  {"PaneClosed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(ii, isWrapped)) {
      c.PaneClosed([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPaneClosed");
      });
    }
  } },
  {"PaneClosing", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(ii, isWrapped)) {
      c.PaneClosing([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewPaneClosingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPaneClosing");
      });
    }
  } },
  {"PaneOpened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(ii, isWrapped)) {
      c.PaneOpened([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPaneOpened");
      });
    }
  } },
  {"PaneOpening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(ii, isWrapped)) {
      c.PaneOpening([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPaneOpening");
      });
    }
  } },
  {"ContextMenuOpening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::PasswordBox>(ii, isWrapped)) {
      c.ContextMenuOpening([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topContextMenuOpening");
      });
    }
  } },
  {"PasswordChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::PasswordBox>(ii, isWrapped)) {
      c.PasswordChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPasswordChanged");
      });
    }
  } },
  {"Paste", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::PasswordBox>(ii, isWrapped)) {
      c.Paste([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPaste");
      });
    }
  } },
  {"PasswordChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::PasswordBox>(ii, isWrapped)) {
      c.PasswordChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::PasswordBox& sender, const winrt::Windows::UI::Xaml::Controls::PasswordBoxPasswordChangingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPasswordChanging");
      });
    }
  } },
  {"Confirmed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::PickerFlyout>(ii, isWrapped)) {
      c.Confirmed([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::PickerFlyout& sender, const winrt::Windows::UI::Xaml::Controls::PickerConfirmedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topConfirmed");
      });
    }
  } },
  {"PivotItemLoaded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Pivot>(ii, isWrapped)) {
      c.PivotItemLoaded([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPivotItemLoaded");
      });
    }
  } },
  {"PivotItemLoading", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Pivot>(ii, isWrapped)) {
      c.PivotItemLoading([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPivotItemLoading");
      });
    }
  } },
  {"PivotItemUnloaded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Pivot>(ii, isWrapped)) {
      c.PivotItemUnloaded([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPivotItemUnloaded");
      });
    }
  } },
  {"PivotItemUnloading", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Pivot>(ii, isWrapped)) {
      c.PivotItemUnloading([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPivotItemUnloading");
      });
    }
  } },
  {"SelectionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Pivot>(ii, isWrapped)) {
      c.SelectionChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSelectionChanged");
      });
    }
  } },
  {"HorizontalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::CarouselPanel>(ii, isWrapped)) {
      c.HorizontalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topHorizontalSnapPointsChanged");
      });
    }
  } },
  {"VerticalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::CarouselPanel>(ii, isWrapped)) {
      c.VerticalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topVerticalSnapPointsChanged");
      });
    }
  } },
  {"ValueChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase>(ii, isWrapped)) {
      c.ValueChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topValueChanged");
      });
    }
  } },
  {"ColorChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>(ii, isWrapped)) {
      c.ColorChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum& sender, const winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topColorChanged");
      });
    }
  } },
  {"SelectionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector>(ii, isWrapped)) {
      c.SelectionChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSelectionChanged");
      });
    }
  } },
  {"HorizontalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>(ii, isWrapped)) {
      c.HorizontalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topHorizontalSnapPointsChanged");
      });
    }
  } },
  {"VerticalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>(ii, isWrapped)) {
      c.VerticalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topVerticalSnapPointsChanged");
      });
    }
  } },
  {"HorizontalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>(ii, isWrapped)) {
      c.HorizontalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topHorizontalSnapPointsChanged");
      });
    }
  } },
  {"VerticalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>(ii, isWrapped)) {
      c.VerticalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topVerticalSnapPointsChanged");
      });
    }
  } },
  {"HorizontalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::PivotPanel>(ii, isWrapped)) {
      c.HorizontalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topHorizontalSnapPointsChanged");
      });
    }
  } },
  {"VerticalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::PivotPanel>(ii, isWrapped)) {
      c.VerticalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topVerticalSnapPointsChanged");
      });
    }
  } },
  {"Closed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>(ii, isWrapped)) {
      c.Closed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topClosed");
      });
    }
  } },
  {"Opened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>(ii, isWrapped)) {
      c.Opened([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topOpened");
      });
    }
  } },
  {"Scroll", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar>(ii, isWrapped)) {
      c.Scroll([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topScroll");
      });
    }
  } },
  {"DragCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>(ii, isWrapped)) {
      c.DragCompleted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDragCompleted");
      });
    }
  } },
  {"DragDelta", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>(ii, isWrapped)) {
      c.DragDelta([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDragDelta");
      });
    }
  } },
  {"DragStarted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>(ii, isWrapped)) {
      c.DragStarted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDragStarted");
      });
    }
  } },
  {"ValueChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RatingControl>(ii, isWrapped)) {
      c.ValueChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RatingControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topValueChanged");
      });
    }
  } },
  {"RefreshRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RefreshContainer>(ii, isWrapped)) {
      c.RefreshRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RefreshContainer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshRequestedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topRefreshRequested");
      });
    }
  } },
  {"RefreshRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RefreshVisualizer>(ii, isWrapped)) {
      c.RefreshRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RefreshVisualizer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshRequestedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topRefreshRequested");
      });
    }
  } },
  {"RefreshStateChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RefreshVisualizer>(ii, isWrapped)) {
      c.RefreshStateChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RefreshVisualizer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshStateChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topRefreshStateChanged");
      });
    }
  } },
  {"ContextMenuOpening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(ii, isWrapped)) {
      c.ContextMenuOpening([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topContextMenuOpening");
      });
    }
  } },
  {"SelectionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(ii, isWrapped)) {
      c.SelectionChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSelectionChanged");
      });
    }
  } },
  {"TextChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(ii, isWrapped)) {
      c.TextChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topTextChanged");
      });
    }
  } },
  {"Paste", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(ii, isWrapped)) {
      c.Paste([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPaste");
      });
    }
  } },
  {"CandidateWindowBoundsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(ii, isWrapped)) {
      c.CandidateWindowBoundsChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topCandidateWindowBoundsChanged");
      });
    }
  } },
  {"TextChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(ii, isWrapped)) {
      c.TextChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::RichEditBoxTextChangingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topTextChanging");
      });
    }
  } },
  {"TextCompositionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(ii, isWrapped)) {
      c.TextCompositionChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topTextCompositionChanged");
      });
    }
  } },
  {"TextCompositionEnded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(ii, isWrapped)) {
      c.TextCompositionEnded([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topTextCompositionEnded");
      });
    }
  } },
  {"TextCompositionStarted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(ii, isWrapped)) {
      c.TextCompositionStarted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topTextCompositionStarted");
      });
    }
  } },
  {"CopyingToClipboard", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(ii, isWrapped)) {
      c.CopyingToClipboard([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topCopyingToClipboard");
      });
    }
  } },
  {"CuttingToClipboard", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(ii, isWrapped)) {
      c.CuttingToClipboard([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topCuttingToClipboard");
      });
    }
  } },
  {"ContentLinkChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(ii, isWrapped)) {
      c.ContentLinkChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::ContentLinkChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topContentLinkChanged");
      });
    }
  } },
  {"ContentLinkInvoked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(ii, isWrapped)) {
      c.ContentLinkInvoked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topContentLinkInvoked");
      });
    }
  } },
  {"SelectionChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(ii, isWrapped)) {
      c.SelectionChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::RichEditBoxSelectionChangingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSelectionChanging");
      });
    }
  } },
  {"ContextMenuOpening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichTextBlock>(ii, isWrapped)) {
      c.ContextMenuOpening([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topContextMenuOpening");
      });
    }
  } },
  {"SelectionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichTextBlock>(ii, isWrapped)) {
      c.SelectionChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSelectionChanged");
      });
    }
  } },
  {"IsTextTrimmedChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichTextBlock>(ii, isWrapped)) {
      c.IsTextTrimmedChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichTextBlock& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topIsTextTrimmedChanged");
      });
    }
  } },
  {"IsTextTrimmedChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow>(ii, isWrapped)) {
      c.IsTextTrimmedChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topIsTextTrimmedChanged");
      });
    }
  } },
  {"ViewChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ScrollViewer>(ii, isWrapped)) {
      c.ViewChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ScrollViewerViewChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topViewChanged");
      });
    }
  } },
  {"ViewChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ScrollViewer>(ii, isWrapped)) {
      c.ViewChanging([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ScrollViewerViewChangingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topViewChanging");
      });
    }
  } },
  {"DirectManipulationCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ScrollViewer>(ii, isWrapped)) {
      c.DirectManipulationCompleted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDirectManipulationCompleted");
      });
    }
  } },
  {"DirectManipulationStarted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ScrollViewer>(ii, isWrapped)) {
      c.DirectManipulationStarted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDirectManipulationStarted");
      });
    }
  } },
  {"AnchorRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ScrollViewer>(ii, isWrapped)) {
      c.AnchorRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ScrollViewer& sender, const winrt::Windows::UI::Xaml::Controls::AnchorRequestedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topAnchorRequested");
      });
    }
  } },
  {"PrepareForFocusOnKeyboardInput", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SearchBox>(ii, isWrapped)) {
      c.PrepareForFocusOnKeyboardInput([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPrepareForFocusOnKeyboardInput");
      });
    }
  } },
  {"QueryChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SearchBox>(ii, isWrapped)) {
      c.QueryChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxQueryChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topQueryChanged");
      });
    }
  } },
  {"QuerySubmitted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SearchBox>(ii, isWrapped)) {
      c.QuerySubmitted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxQuerySubmittedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topQuerySubmitted");
      });
    }
  } },
  {"ResultSuggestionChosen", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SearchBox>(ii, isWrapped)) {
      c.ResultSuggestionChosen([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxResultSuggestionChosenEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topResultSuggestionChosen");
      });
    }
  } },
  {"SuggestionsRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SearchBox>(ii, isWrapped)) {
      c.SuggestionsRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxSuggestionsRequestedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSuggestionsRequested");
      });
    }
  } },
  {"ViewChangeCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SemanticZoom>(ii, isWrapped)) {
      c.ViewChangeCompleted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topViewChangeCompleted");
      });
    }
  } },
  {"ViewChangeStarted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SemanticZoom>(ii, isWrapped)) {
      c.ViewChangeStarted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topViewChangeStarted");
      });
    }
  } },
  {"BackClick", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SettingsFlyout>(ii, isWrapped)) {
      c.BackClick([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::BackClickEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topBackClick");
      });
    }
  } },
  {"Click", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SplitButton>(ii, isWrapped)) {
      c.Click([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SplitButton& sender, const winrt::Windows::UI::Xaml::Controls::SplitButtonClickEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topClick");
      });
    }
  } },
  {"PaneClosed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SplitView>(ii, isWrapped)) {
      c.PaneClosed([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPaneClosed");
      });
    }
  } },
  {"PaneClosing", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SplitView>(ii, isWrapped)) {
      c.PaneClosing([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::UI::Xaml::Controls::SplitViewPaneClosingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPaneClosing");
      });
    }
  } },
  {"PaneOpened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SplitView>(ii, isWrapped)) {
      c.PaneOpened([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPaneOpened");
      });
    }
  } },
  {"PaneOpening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SplitView>(ii, isWrapped)) {
      c.PaneOpening([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPaneOpening");
      });
    }
  } },
  {"HorizontalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::StackPanel>(ii, isWrapped)) {
      c.HorizontalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topHorizontalSnapPointsChanged");
      });
    }
  } },
  {"VerticalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::StackPanel>(ii, isWrapped)) {
      c.VerticalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topVerticalSnapPointsChanged");
      });
    }
  } },
  {"CompositionScaleChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SwapChainPanel>(ii, isWrapped)) {
      c.CompositionScaleChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SwapChainPanel& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topCompositionScaleChanged");
      });
    }
  } },
  {"ContextMenuOpening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBlock>(ii, isWrapped)) {
      c.ContextMenuOpening([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topContextMenuOpening");
      });
    }
  } },
  {"SelectionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBlock>(ii, isWrapped)) {
      c.SelectionChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSelectionChanged");
      });
    }
  } },
  {"IsTextTrimmedChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBlock>(ii, isWrapped)) {
      c.IsTextTrimmedChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBlock& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topIsTextTrimmedChanged");
      });
    }
  } },
  {"ContextMenuOpening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(ii, isWrapped)) {
      c.ContextMenuOpening([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topContextMenuOpening");
      });
    }
  } },
  {"SelectionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(ii, isWrapped)) {
      c.SelectionChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSelectionChanged");
      });
    }
  } },
  {"TextChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(ii, isWrapped)) {
      c.TextChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topTextChanged");
      });
    }
  } },
  {"Paste", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(ii, isWrapped)) {
      c.Paste([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPaste");
      });
    }
  } },
  {"CandidateWindowBoundsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(ii, isWrapped)) {
      c.CandidateWindowBoundsChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topCandidateWindowBoundsChanged");
      });
    }
  } },
  {"TextChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(ii, isWrapped)) {
      c.TextChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxTextChangingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topTextChanging");
      });
    }
  } },
  {"TextCompositionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(ii, isWrapped)) {
      c.TextCompositionChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topTextCompositionChanged");
      });
    }
  } },
  {"TextCompositionEnded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(ii, isWrapped)) {
      c.TextCompositionEnded([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topTextCompositionEnded");
      });
    }
  } },
  {"TextCompositionStarted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(ii, isWrapped)) {
      c.TextCompositionStarted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topTextCompositionStarted");
      });
    }
  } },
  {"BeforeTextChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(ii, isWrapped)) {
      c.BeforeTextChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxBeforeTextChangingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topBeforeTextChanging");
      });
    }
  } },
  {"CopyingToClipboard", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(ii, isWrapped)) {
      c.CopyingToClipboard([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topCopyingToClipboard");
      });
    }
  } },
  {"CuttingToClipboard", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(ii, isWrapped)) {
      c.CuttingToClipboard([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topCuttingToClipboard");
      });
    }
  } },
  {"SelectionChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(ii, isWrapped)) {
      c.SelectionChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxSelectionChangingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSelectionChanging");
      });
    }
  } },
  {"TimeChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TimePicker>(ii, isWrapped)) {
      c.TimeChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TimePickerValueChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topTimeChanged");
      });
    }
  } },
  {"SelectedTimeChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TimePicker>(ii, isWrapped)) {
      c.SelectedTimeChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TimePicker& sender, const winrt::Windows::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSelectedTimeChanged");
      });
    }
  } },
  {"TimePicked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TimePickerFlyout>(ii, isWrapped)) {
      c.TimePicked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TimePickerFlyout& sender, const winrt::Windows::UI::Xaml::Controls::TimePickedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topTimePicked");
      });
    }
  } },
  {"IsCheckedChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ToggleSplitButton>(ii, isWrapped)) {
      c.IsCheckedChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ToggleSplitButton& sender, const winrt::Windows::UI::Xaml::Controls::ToggleSplitButtonIsCheckedChangedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topIsCheckedChanged");
      });
    }
  } },
  {"Toggled", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ToggleSwitch>(ii, isWrapped)) {
      c.Toggled([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topToggled");
      });
    }
  } },
  {"Closed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ToolTip>(ii, isWrapped)) {
      c.Closed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topClosed");
      });
    }
  } },
  {"Opened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ToolTip>(ii, isWrapped)) {
      c.Opened([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topOpened");
      });
    }
  } },
  {"Collapsed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TreeView>(ii, isWrapped)) {
      c.Collapsed([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewCollapsedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topCollapsed");
      });
    }
  } },
  {"Expanding", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TreeView>(ii, isWrapped)) {
      c.Expanding([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewExpandingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topExpanding");
      });
    }
  } },
  {"ItemInvoked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TreeView>(ii, isWrapped)) {
      c.ItemInvoked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewItemInvokedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topItemInvoked");
      });
    }
  } },
  {"DragItemsCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TreeView>(ii, isWrapped)) {
      c.DragItemsCompleted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsCompletedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDragItemsCompleted");
      });
    }
  } },
  {"DragItemsStarting", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TreeView>(ii, isWrapped)) {
      c.DragItemsStarting([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsStartingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDragItemsStarting");
      });
    }
  } },
  {"ModeChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TwoPaneView>(ii, isWrapped)) {
      c.ModeChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TwoPaneView& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topModeChanged");
      });
    }
  } },
  {"CleanUpVirtualizedItemEvent", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::VirtualizingStackPanel>(ii, isWrapped)) {
      c.CleanUpVirtualizedItemEvent([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topCleanUpVirtualizedItemEvent");
      });
    }
  } },
  {"LoadCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.LoadCompleted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topLoadCompleted");
      });
    }
  } },
  {"NavigationFailed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.NavigationFailed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationFailedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topNavigationFailed");
      });
    }
  } },
  {"ScriptNotify", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.ScriptNotify([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::NotifyEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topScriptNotify");
      });
    }
  } },
  {"ContentLoading", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.ContentLoading([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewContentLoadingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topContentLoading");
      });
    }
  } },
  {"DOMContentLoaded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.DOMContentLoaded([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewDOMContentLoadedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topDOMContentLoaded");
      });
    }
  } },
  {"FrameContentLoading", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.FrameContentLoading([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewContentLoadingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topFrameContentLoading");
      });
    }
  } },
  {"FrameDOMContentLoaded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.FrameDOMContentLoaded([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewDOMContentLoadedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topFrameDOMContentLoaded");
      });
    }
  } },
  {"FrameNavigationCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.FrameNavigationCompleted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topFrameNavigationCompleted");
      });
    }
  } },
  {"FrameNavigationStarting", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.FrameNavigationStarting([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topFrameNavigationStarting");
      });
    }
  } },
  {"LongRunningScriptDetected", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.LongRunningScriptDetected([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewLongRunningScriptDetectedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topLongRunningScriptDetected");
      });
    }
  } },
  {"NavigationCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.NavigationCompleted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topNavigationCompleted");
      });
    }
  } },
  {"NavigationStarting", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.NavigationStarting([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topNavigationStarting");
      });
    }
  } },
  {"UnsafeContentWarningDisplaying", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.UnsafeContentWarningDisplaying([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topUnsafeContentWarningDisplaying");
      });
    }
  } },
  {"UnviewableContentIdentified", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.UnviewableContentIdentified([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewUnviewableContentIdentifiedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topUnviewableContentIdentified");
      });
    }
  } },
  {"ContainsFullScreenElementChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.ContainsFullScreenElementChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::Foundation::IInspectable& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topContainsFullScreenElementChanged");
      });
    }
  } },
  {"NewWindowRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.NewWindowRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNewWindowRequestedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topNewWindowRequested");
      });
    }
  } },
  {"PermissionRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.PermissionRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewPermissionRequestedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topPermissionRequested");
      });
    }
  } },
  {"UnsupportedUriSchemeIdentified", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.UnsupportedUriSchemeIdentified([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewUnsupportedUriSchemeIdentifiedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topUnsupportedUriSchemeIdentified");
      });
    }
  } },
  {"SeparateProcessLost", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.SeparateProcessLost([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewSeparateProcessLostEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topSeparateProcessLost");
      });
    }
  } },
  {"WebResourceRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
    if (auto c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(ii, isWrapped)) {
      c.WebResourceRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewWebResourceRequestedEventArgs& args) {
        DispatchTheEvent(ii.try_as<xaml::FrameworkElement>(), sender.try_as<xaml::FrameworkElement>(), args, reactContext, L"topWebResourceRequested");
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

