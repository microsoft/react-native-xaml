#include "pch.h"
#include "XamlMetadata.h"
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

/*static*/ const EventInfo EventInfo::xamlEventMap[] = {
  {"DoubleTapped", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DoubleTapped([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDoubleTapped", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragEnter", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DragEnter([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragEnter", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragLeave", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DragLeave([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragLeave", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragOver", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DragOver([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragOver", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Drop", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.Drop([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDrop", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"GotFocus", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.GotFocus([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topGotFocus", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Holding", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.Holding([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::HoldingRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topHolding", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"LostFocus", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.LostFocus([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topLostFocus", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ManipulationCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ManipulationCompleted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topManipulationCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ManipulationDelta", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ManipulationDelta([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topManipulationDelta", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ManipulationInertiaStarting", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ManipulationInertiaStarting([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topManipulationInertiaStarting", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ManipulationStarted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ManipulationStarted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topManipulationStarted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ManipulationStarting", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ManipulationStarting([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topManipulationStarting", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PointerCanceled", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerCanceled([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPointerCanceled", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PointerCaptureLost", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerCaptureLost([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPointerCaptureLost", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PointerEntered", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerEntered([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPointerEntered", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PointerExited", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerExited([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPointerExited", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PointerMoved", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerMoved([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPointerMoved", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PointerPressed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerPressed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPointerPressed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PointerReleased", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerReleased([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPointerReleased", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PointerWheelChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerWheelChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPointerWheelChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"RightTapped", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.RightTapped([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::RightTappedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topRightTapped", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Tapped", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.Tapped([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTapped", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragStarting", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DragStarting([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::DragStartingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragStarting", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DropCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DropCompleted([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::DropCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDropCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"AccessKeyDisplayDismissed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.AccessKeyDisplayDismissed([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topAccessKeyDisplayDismissed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"AccessKeyDisplayRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.AccessKeyDisplayRequested([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topAccessKeyDisplayRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"AccessKeyInvoked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.AccessKeyInvoked([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topAccessKeyInvoked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContextCanceled", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ContextCanceled([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContextCanceled", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContextRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ContextRequested([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContextRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"GettingFocus", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.GettingFocus([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topGettingFocus", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"LosingFocus", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.LosingFocus([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topLosingFocus", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"NoFocusCandidateFound", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.NoFocusCandidateFound([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNoFocusCandidateFound", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CharacterReceived", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.CharacterReceived([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCharacterReceived", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PreviewKeyDown", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PreviewKeyDown([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPreviewKeyDown", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PreviewKeyUp", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PreviewKeyUp([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPreviewKeyUp", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ProcessKeyboardAccelerators", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ProcessKeyboardAccelerators([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topProcessKeyboardAccelerators", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"BringIntoViewRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.BringIntoViewRequested([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topBringIntoViewRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"LayoutUpdated", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.LayoutUpdated([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topLayoutUpdated", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Loaded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.Loaded([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topLoaded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SizeChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.SizeChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::SizeChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSizeChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Unloaded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.Unloaded([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topUnloaded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DataContextChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.DataContextChanged([reactContext] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::UI::Xaml::DataContextChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDataContextChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Loading", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.Loading([reactContext] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topLoading", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ActualThemeChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.ActualThemeChanged([reactContext] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topActualThemeChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"EffectiveViewportChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.EffectiveViewportChanged([reactContext] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::UI::Xaml::EffectiveViewportChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topEffectiveViewportChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"IsEnabledChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Control>()) {
        c.IsEnabledChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topIsEnabledChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"FocusDisengaged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Control>()) {
        c.FocusDisengaged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Control& sender, const winrt::Windows::UI::Xaml::Controls::FocusDisengagedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topFocusDisengaged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"FocusEngaged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Control>()) {
        c.FocusEngaged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Control& sender, const winrt::Windows::UI::Xaml::Controls::FocusEngagedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topFocusEngaged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AppBar>()) {
        c.Closed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Opened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AppBar>()) {
        c.Opened([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closing", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AppBar>()) {
        c.Closing([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClosing", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Opening", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AppBar>()) {
        c.Opening([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topOpening", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Click", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase>()) {
        c.Click([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Checked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>()) {
        c.Checked([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topChecked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Indeterminate", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>()) {
        c.Indeterminate([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topIndeterminate", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Unchecked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>()) {
        c.Unchecked([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topUnchecked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SuggestionChosen", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>()) {
        c.SuggestionChosen([reactContext] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxSuggestionChosenEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSuggestionChosen", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>()) {
        c.TextChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxTextChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"QuerySubmitted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>()) {
        c.QuerySubmitted([reactContext] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topQuerySubmitted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CalendarViewDayItemChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>()) {
        c.CalendarViewDayItemChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCalendarViewDayItemChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>()) {
        c.Closed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DateChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>()) {
        c.DateChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::CalendarDatePicker& sender, const winrt::Windows::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDateChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Opened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>()) {
        c.Opened([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CalendarViewDayItemChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarView>()) {
        c.CalendarViewDayItemChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCalendarViewDayItemChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectedDatesChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarView>()) {
        c.SelectedDatesChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewSelectedDatesChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectedDatesChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ColorChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ColorPicker>()) {
        c.ColorChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::ColorPicker& sender, const winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topColorChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Selector>()) {
        c.SelectionChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DropDownClosed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ComboBox>()) {
        c.DropDownClosed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDropDownClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DropDownOpened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ComboBox>()) {
        c.DropDownOpened([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDropDownOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextSubmitted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ComboBox>()) {
        c.TextSubmitted([reactContext] (const winrt::Windows::UI::Xaml::Controls::ComboBox& sender, const winrt::Windows::UI::Xaml::Controls::ComboBoxTextSubmittedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextSubmitted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DynamicOverflowItemsChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CommandBar>()) {
        c.DynamicOverflowItemsChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::CommandBar& sender, const winrt::Windows::UI::Xaml::Controls::DynamicOverflowItemsChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDynamicOverflowItemsChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.Closed([reactContext] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closing", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.Closing([reactContext] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogClosingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClosing", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Opened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.Opened([reactContext] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogOpenedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PrimaryButtonClick", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.PrimaryButtonClick([reactContext] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPrimaryButtonClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SecondaryButtonClick", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.SecondaryButtonClick([reactContext] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSecondaryButtonClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CloseButtonClick", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.CloseButtonClick([reactContext] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCloseButtonClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DateChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::DatePicker>()) {
        c.DateChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::DatePickerValueChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDateChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectedDateChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::DatePicker>()) {
        c.SelectedDateChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::DatePicker& sender, const winrt::Windows::UI::Xaml::Controls::DatePickerSelectedValueChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectedDateChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Navigated", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Frame>()) {
        c.Navigated([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNavigated", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Navigating", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Frame>()) {
        c.Navigating([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNavigating", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"NavigationFailed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Frame>()) {
        c.NavigationFailed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNavigationFailed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"NavigationStopped", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Frame>()) {
        c.NavigationStopped([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNavigationStopped", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragItemsStarting", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.DragItemsStarting([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragItemsStarting", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ItemClick", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.ItemClick([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ItemClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topItemClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContainerContentChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.ContainerContentChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContainerContentChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ChoosingGroupHeaderContainer", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.ChoosingGroupHeaderContainer([reactContext] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ChoosingGroupHeaderContainerEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topChoosingGroupHeaderContainer", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ChoosingItemContainer", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.ChoosingItemContainer([reactContext] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ChoosingItemContainerEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topChoosingItemContainer", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragItemsCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.DragItemsCompleted([reactContext] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragItemsCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::HandwritingView>()) {
        c.Closed([reactContext] (const winrt::Windows::UI::Xaml::Controls::HandwritingView& sender, const winrt::Windows::UI::Xaml::Controls::HandwritingPanelClosedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Opened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::HandwritingView>()) {
        c.Opened([reactContext] (const winrt::Windows::UI::Xaml::Controls::HandwritingView& sender, const winrt::Windows::UI::Xaml::Controls::HandwritingPanelOpenedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SectionHeaderClick", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Hub>()) {
        c.SectionHeaderClick([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::HubSectionHeaderClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSectionHeaderClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SectionsInViewChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Hub>()) {
        c.SectionsInViewChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SectionsInViewChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSectionsInViewChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ImageFailed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Image>()) {
        c.ImageFailed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topImageFailed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ImageOpened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Image>()) {
        c.ImageOpened([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topImageOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ActiveToolChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbar>()) {
        c.ActiveToolChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topActiveToolChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"EraseAllClicked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbar>()) {
        c.EraseAllClicked([reactContext] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topEraseAllClicked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"InkDrawingAttributesChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbar>()) {
        c.InkDrawingAttributesChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topInkDrawingAttributesChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"IsRulerButtonCheckedChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbar>()) {
        c.IsRulerButtonCheckedChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topIsRulerButtonCheckedChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"IsStencilButtonCheckedChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbar>()) {
        c.IsStencilButtonCheckedChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::UI::Xaml::Controls::InkToolbarIsStencilButtonCheckedChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topIsStencilButtonCheckedChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Checked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem>()) {
        c.Checked([reactContext] (const winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topChecked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Unchecked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem>()) {
        c.Unchecked([reactContext] (const winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topUnchecked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ItemsPresenter>()) {
        c.HorizontalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ItemsPresenter>()) {
        c.VerticalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CenterChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.CenterChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCenterChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"HeadingChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.HeadingChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topHeadingChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"LoadingStatusChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.LoadingStatusChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topLoadingStatusChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MapDoubleTapped", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapDoubleTapped([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMapDoubleTapped", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MapHolding", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapHolding([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMapHolding", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MapTapped", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapTapped([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMapTapped", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PitchChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.PitchChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPitchChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TransformOriginChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.TransformOriginChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTransformOriginChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ZoomLevelChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.ZoomLevelChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topZoomLevelChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ActualCameraChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.ActualCameraChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topActualCameraChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ActualCameraChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.ActualCameraChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topActualCameraChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CustomExperienceChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.CustomExperienceChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCustomExperienceChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MapElementClick", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapElementClick([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMapElementClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MapElementPointerEntered", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapElementPointerEntered([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMapElementPointerEntered", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MapElementPointerExited", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapElementPointerExited([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMapElementPointerExited", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TargetCameraChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.TargetCameraChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTargetCameraChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MapRightTapped", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapRightTapped([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMapRightTapped", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MapContextRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapContextRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMapContextRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"BufferingProgressChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.BufferingProgressChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topBufferingProgressChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CurrentStateChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.CurrentStateChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCurrentStateChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DownloadProgressChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.DownloadProgressChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDownloadProgressChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MarkerReached", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.MarkerReached([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMarkerReached", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MediaEnded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.MediaEnded([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMediaEnded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MediaFailed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.MediaFailed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMediaFailed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MediaOpened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.MediaOpened([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMediaOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"RateChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.RateChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Media::RateChangedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topRateChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SeekCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.SeekCompleted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSeekCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"VolumeChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.VolumeChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topVolumeChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PartialMediaFailureDetected", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.PartialMediaFailureDetected([reactContext] (const winrt::Windows::UI::Xaml::Controls::MediaElement& sender, const winrt::Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPartialMediaFailureDetected", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ThumbnailRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>()) {
        c.ThumbnailRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::MediaTransportControls& sender, const winrt::Windows::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topThumbnailRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Click", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem>()) {
        c.Click([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DisplayModeChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.DisplayModeChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewDisplayModeChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDisplayModeChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ItemInvoked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.ItemInvoked([reactContext] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topItemInvoked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.SelectionChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"BackRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.BackRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewBackRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topBackRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PaneClosed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.PaneClosed([reactContext] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaneClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PaneClosing", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.PaneClosing([reactContext] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewPaneClosingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaneClosing", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PaneOpened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.PaneOpened([reactContext] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaneOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PaneOpening", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.PaneOpening([reactContext] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaneOpening", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContextMenuOpening", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::PasswordBox>()) {
        c.ContextMenuOpening([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContextMenuOpening", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PasswordChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::PasswordBox>()) {
        c.PasswordChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPasswordChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Paste", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::PasswordBox>()) {
        c.Paste([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaste", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PasswordChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::PasswordBox>()) {
        c.PasswordChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::PasswordBox& sender, const winrt::Windows::UI::Xaml::Controls::PasswordBoxPasswordChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPasswordChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PivotItemLoaded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Pivot>()) {
        c.PivotItemLoaded([reactContext] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPivotItemLoaded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PivotItemLoading", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Pivot>()) {
        c.PivotItemLoading([reactContext] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPivotItemLoading", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PivotItemUnloaded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Pivot>()) {
        c.PivotItemUnloaded([reactContext] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPivotItemUnloaded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PivotItemUnloading", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Pivot>()) {
        c.PivotItemUnloading([reactContext] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPivotItemUnloading", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Pivot>()) {
        c.SelectionChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::CarouselPanel>()) {
        c.HorizontalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::CarouselPanel>()) {
        c.VerticalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ValueChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase>()) {
        c.ValueChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topValueChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ColorChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>()) {
        c.ColorChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum& sender, const winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topColorChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector>()) {
        c.SelectionChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>()) {
        c.HorizontalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>()) {
        c.VerticalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>()) {
        c.HorizontalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>()) {
        c.VerticalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::PivotPanel>()) {
        c.HorizontalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::PivotPanel>()) {
        c.VerticalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>()) {
        c.Closed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Opened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>()) {
        c.Opened([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Scroll", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar>()) {
        c.Scroll([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topScroll", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>()) {
        c.DragCompleted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragDelta", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>()) {
        c.DragDelta([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragDelta", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragStarted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>()) {
        c.DragStarted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragStarted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ValueChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RatingControl>()) {
        c.ValueChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::RatingControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topValueChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"RefreshRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RefreshContainer>()) {
        c.RefreshRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::RefreshContainer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topRefreshRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"RefreshRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RefreshVisualizer>()) {
        c.RefreshRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::RefreshVisualizer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topRefreshRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"RefreshStateChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RefreshVisualizer>()) {
        c.RefreshStateChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::RefreshVisualizer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshStateChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topRefreshStateChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContextMenuOpening", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.ContextMenuOpening([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContextMenuOpening", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.SelectionChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.TextChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Paste", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.Paste([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaste", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CandidateWindowBoundsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.CandidateWindowBoundsChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCandidateWindowBoundsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.TextChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::RichEditBoxTextChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextCompositionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.TextCompositionChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextCompositionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextCompositionEnded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.TextCompositionEnded([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextCompositionEnded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextCompositionStarted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.TextCompositionStarted([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextCompositionStarted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CopyingToClipboard", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.CopyingToClipboard([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCopyingToClipboard", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CuttingToClipboard", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.CuttingToClipboard([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCuttingToClipboard", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContentLinkChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.ContentLinkChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::ContentLinkChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContentLinkChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContentLinkInvoked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.ContentLinkInvoked([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContentLinkInvoked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.SelectionChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::RichEditBoxSelectionChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContextMenuOpening", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichTextBlock>()) {
        c.ContextMenuOpening([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContextMenuOpening", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichTextBlock>()) {
        c.SelectionChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"IsTextTrimmedChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichTextBlock>()) {
        c.IsTextTrimmedChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichTextBlock& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topIsTextTrimmedChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"IsTextTrimmedChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow>()) {
        c.IsTextTrimmedChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topIsTextTrimmedChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ViewChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ScrollViewer>()) {
        c.ViewChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ScrollViewerViewChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topViewChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ViewChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ScrollViewer>()) {
        c.ViewChanging([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ScrollViewerViewChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topViewChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DirectManipulationCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ScrollViewer>()) {
        c.DirectManipulationCompleted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDirectManipulationCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DirectManipulationStarted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ScrollViewer>()) {
        c.DirectManipulationStarted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDirectManipulationStarted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"AnchorRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ScrollViewer>()) {
        c.AnchorRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::ScrollViewer& sender, const winrt::Windows::UI::Xaml::Controls::AnchorRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topAnchorRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PrepareForFocusOnKeyboardInput", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SearchBox>()) {
        c.PrepareForFocusOnKeyboardInput([reactContext] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPrepareForFocusOnKeyboardInput", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"QueryChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SearchBox>()) {
        c.QueryChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxQueryChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topQueryChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"QuerySubmitted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SearchBox>()) {
        c.QuerySubmitted([reactContext] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxQuerySubmittedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topQuerySubmitted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ResultSuggestionChosen", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SearchBox>()) {
        c.ResultSuggestionChosen([reactContext] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxResultSuggestionChosenEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topResultSuggestionChosen", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SuggestionsRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SearchBox>()) {
        c.SuggestionsRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxSuggestionsRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSuggestionsRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ViewChangeCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SemanticZoom>()) {
        c.ViewChangeCompleted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topViewChangeCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ViewChangeStarted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SemanticZoom>()) {
        c.ViewChangeStarted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topViewChangeStarted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"BackClick", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SettingsFlyout>()) {
        c.BackClick([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::BackClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topBackClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Click", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SplitButton>()) {
        c.Click([reactContext] (const winrt::Windows::UI::Xaml::Controls::SplitButton& sender, const winrt::Windows::UI::Xaml::Controls::SplitButtonClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PaneClosed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SplitView>()) {
        c.PaneClosed([reactContext] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaneClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PaneClosing", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SplitView>()) {
        c.PaneClosing([reactContext] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::UI::Xaml::Controls::SplitViewPaneClosingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaneClosing", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PaneOpened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SplitView>()) {
        c.PaneOpened([reactContext] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaneOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PaneOpening", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SplitView>()) {
        c.PaneOpening([reactContext] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaneOpening", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::StackPanel>()) {
        c.HorizontalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::StackPanel>()) {
        c.VerticalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CompositionScaleChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SwapChainPanel>()) {
        c.CompositionScaleChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::SwapChainPanel& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCompositionScaleChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContextMenuOpening", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBlock>()) {
        c.ContextMenuOpening([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContextMenuOpening", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBlock>()) {
        c.SelectionChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"IsTextTrimmedChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBlock>()) {
        c.IsTextTrimmedChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBlock& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topIsTextTrimmedChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContextMenuOpening", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.ContextMenuOpening([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContextMenuOpening", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.SelectionChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.TextChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Paste", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.Paste([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaste", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CandidateWindowBoundsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.CandidateWindowBoundsChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCandidateWindowBoundsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.TextChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxTextChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextCompositionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.TextCompositionChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextCompositionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextCompositionEnded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.TextCompositionEnded([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextCompositionEnded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextCompositionStarted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.TextCompositionStarted([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextCompositionStarted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"BeforeTextChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.BeforeTextChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxBeforeTextChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topBeforeTextChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CopyingToClipboard", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.CopyingToClipboard([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCopyingToClipboard", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CuttingToClipboard", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.CuttingToClipboard([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCuttingToClipboard", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.SelectionChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxSelectionChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TimeChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TimePicker>()) {
        c.TimeChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TimePickerValueChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTimeChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectedTimeChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TimePicker>()) {
        c.SelectedTimeChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::TimePicker& sender, const winrt::Windows::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectedTimeChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"IsCheckedChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ToggleSplitButton>()) {
        c.IsCheckedChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::ToggleSplitButton& sender, const winrt::Windows::UI::Xaml::Controls::ToggleSplitButtonIsCheckedChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topIsCheckedChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Toggled", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ToggleSwitch>()) {
        c.Toggled([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topToggled", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ToolTip>()) {
        c.Closed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Opened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ToolTip>()) {
        c.Opened([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Collapsed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TreeView>()) {
        c.Collapsed([reactContext] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewCollapsedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCollapsed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Expanding", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TreeView>()) {
        c.Expanding([reactContext] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewExpandingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topExpanding", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ItemInvoked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TreeView>()) {
        c.ItemInvoked([reactContext] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewItemInvokedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topItemInvoked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragItemsCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TreeView>()) {
        c.DragItemsCompleted([reactContext] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragItemsCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragItemsStarting", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TreeView>()) {
        c.DragItemsStarting([reactContext] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsStartingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragItemsStarting", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ModeChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TwoPaneView>()) {
        c.ModeChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::TwoPaneView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topModeChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CleanUpVirtualizedItemEvent", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::VirtualizingStackPanel>()) {
        c.CleanUpVirtualizedItemEvent([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCleanUpVirtualizedItemEvent", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"LoadCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.LoadCompleted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topLoadCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"NavigationFailed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.NavigationFailed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationFailedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNavigationFailed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ScriptNotify", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.ScriptNotify([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::NotifyEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topScriptNotify", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContentLoading", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.ContentLoading([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewContentLoadingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContentLoading", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DOMContentLoaded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.DOMContentLoaded([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewDOMContentLoadedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDOMContentLoaded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"FrameContentLoading", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.FrameContentLoading([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewContentLoadingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topFrameContentLoading", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"FrameDOMContentLoaded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.FrameDOMContentLoaded([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewDOMContentLoadedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topFrameDOMContentLoaded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"FrameNavigationCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.FrameNavigationCompleted([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topFrameNavigationCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"FrameNavigationStarting", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.FrameNavigationStarting([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topFrameNavigationStarting", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"LongRunningScriptDetected", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.LongRunningScriptDetected([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewLongRunningScriptDetectedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topLongRunningScriptDetected", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"NavigationCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.NavigationCompleted([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNavigationCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"NavigationStarting", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.NavigationStarting([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNavigationStarting", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"UnsafeContentWarningDisplaying", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.UnsafeContentWarningDisplaying([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topUnsafeContentWarningDisplaying", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"UnviewableContentIdentified", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.UnviewableContentIdentified([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewUnviewableContentIdentifiedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topUnviewableContentIdentified", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContainsFullScreenElementChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.ContainsFullScreenElementChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContainsFullScreenElementChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"NewWindowRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.NewWindowRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNewWindowRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNewWindowRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PermissionRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.PermissionRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewPermissionRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPermissionRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"UnsupportedUriSchemeIdentified", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.UnsupportedUriSchemeIdentified([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewUnsupportedUriSchemeIdentifiedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topUnsupportedUriSchemeIdentified", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SeparateProcessLost", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.SeparateProcessLost([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewSeparateProcessLostEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSeparateProcessLost", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"WebResourceRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.WebResourceRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewWebResourceRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topWebResourceRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },

};

static_assert(ARRAYSIZE(EventInfo::xamlEventMap) == 262);

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

