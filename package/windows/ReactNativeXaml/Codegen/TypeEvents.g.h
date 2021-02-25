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
void SerializeEventArgs(winrt::Microsoft::ReactNative::IJSValueWriter const& writer, const TArgs& args);

/*static*/ const EventInfo EventInfo::xamlEventMap[] = {
  {"DoubleTapped", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DoubleTapped([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDoubleTapped", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DragEnter", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DragEnter([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragEnter", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DragLeave", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DragLeave([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragLeave", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DragOver", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DragOver([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragOver", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Drop", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.Drop([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDrop", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"GotFocus", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.GotFocus([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topGotFocus", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Holding", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.Holding([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::HoldingRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topHolding", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"LostFocus", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.LostFocus([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topLostFocus", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ManipulationCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ManipulationCompleted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topManipulationCompleted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ManipulationDelta", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ManipulationDelta([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topManipulationDelta", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ManipulationInertiaStarting", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ManipulationInertiaStarting([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topManipulationInertiaStarting", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ManipulationStarted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ManipulationStarted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topManipulationStarted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ManipulationStarting", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ManipulationStarting([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topManipulationStarting", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PointerCanceled", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerCanceled([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPointerCanceled", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PointerCaptureLost", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerCaptureLost([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPointerCaptureLost", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PointerEntered", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerEntered([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPointerEntered", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PointerExited", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerExited([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPointerExited", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PointerMoved", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerMoved([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPointerMoved", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PointerPressed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerPressed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPointerPressed", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PointerReleased", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerReleased([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPointerReleased", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PointerWheelChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerWheelChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPointerWheelChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"RightTapped", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.RightTapped([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::RightTappedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topRightTapped", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Tapped", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.Tapped([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTapped", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DragStarting", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DragStarting([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::DragStartingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragStarting", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DropCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DropCompleted([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::DropCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDropCompleted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"AccessKeyDisplayDismissed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.AccessKeyDisplayDismissed([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topAccessKeyDisplayDismissed", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"AccessKeyDisplayRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.AccessKeyDisplayRequested([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topAccessKeyDisplayRequested", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"AccessKeyInvoked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.AccessKeyInvoked([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topAccessKeyInvoked", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ContextCanceled", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ContextCanceled([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContextCanceled", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ContextRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ContextRequested([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContextRequested", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"GettingFocus", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.GettingFocus([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topGettingFocus", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"LosingFocus", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.LosingFocus([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topLosingFocus", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"NoFocusCandidateFound", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.NoFocusCandidateFound([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNoFocusCandidateFound", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"CharacterReceived", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.CharacterReceived([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCharacterReceived", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PreviewKeyDown", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PreviewKeyDown([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPreviewKeyDown", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PreviewKeyUp", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PreviewKeyUp([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPreviewKeyUp", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ProcessKeyboardAccelerators", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ProcessKeyboardAccelerators([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topProcessKeyboardAccelerators", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"BringIntoViewRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.BringIntoViewRequested([reactContext] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topBringIntoViewRequested", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"LayoutUpdated", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.LayoutUpdated([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topLayoutUpdated", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Loaded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.Loaded([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topLoaded", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SizeChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.SizeChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::SizeChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSizeChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Unloaded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.Unloaded([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topUnloaded", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DataContextChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.DataContextChanged([reactContext] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::UI::Xaml::DataContextChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDataContextChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Loading", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.Loading([reactContext] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topLoading", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ActualThemeChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.ActualThemeChanged([reactContext] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topActualThemeChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"EffectiveViewportChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.EffectiveViewportChanged([reactContext] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::UI::Xaml::EffectiveViewportChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topEffectiveViewportChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"IsEnabledChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Control>()) {
        c.IsEnabledChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topIsEnabledChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"FocusDisengaged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Control>()) {
        c.FocusDisengaged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Control& sender, const winrt::Windows::UI::Xaml::Controls::FocusDisengagedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topFocusDisengaged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"FocusEngaged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Control>()) {
        c.FocusEngaged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Control& sender, const winrt::Windows::UI::Xaml::Controls::FocusEngagedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topFocusEngaged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Closed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AppBar>()) {
        c.Closed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClosed", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Opened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AppBar>()) {
        c.Opened([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topOpened", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Closing", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AppBar>()) {
        c.Closing([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClosing", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Opening", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AppBar>()) {
        c.Opening([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topOpening", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Click", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase>()) {
        c.Click([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClick", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Checked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>()) {
        c.Checked([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topChecked", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Indeterminate", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>()) {
        c.Indeterminate([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topIndeterminate", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Unchecked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>()) {
        c.Unchecked([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topUnchecked", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SuggestionChosen", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>()) {
        c.SuggestionChosen([reactContext] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxSuggestionChosenEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSuggestionChosen", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"TextChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>()) {
        c.TextChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxTextChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"QuerySubmitted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>()) {
        c.QuerySubmitted([reactContext] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topQuerySubmitted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"CalendarViewDayItemChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>()) {
        c.CalendarViewDayItemChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCalendarViewDayItemChanging", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Closed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>()) {
        c.Closed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClosed", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DateChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>()) {
        c.DateChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::CalendarDatePicker& sender, const winrt::Windows::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDateChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Opened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>()) {
        c.Opened([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topOpened", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"CalendarViewDayItemChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarView>()) {
        c.CalendarViewDayItemChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCalendarViewDayItemChanging", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SelectedDatesChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarView>()) {
        c.SelectedDatesChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewSelectedDatesChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectedDatesChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ColorChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ColorPicker>()) {
        c.ColorChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::ColorPicker& sender, const winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topColorChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Selector>()) {
        c.SelectionChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DropDownClosed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ComboBox>()) {
        c.DropDownClosed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDropDownClosed", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DropDownOpened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ComboBox>()) {
        c.DropDownOpened([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDropDownOpened", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"TextSubmitted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ComboBox>()) {
        c.TextSubmitted([reactContext] (const winrt::Windows::UI::Xaml::Controls::ComboBox& sender, const winrt::Windows::UI::Xaml::Controls::ComboBoxTextSubmittedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextSubmitted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DynamicOverflowItemsChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CommandBar>()) {
        c.DynamicOverflowItemsChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::CommandBar& sender, const winrt::Windows::UI::Xaml::Controls::DynamicOverflowItemsChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDynamicOverflowItemsChanging", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Closed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.Closed([reactContext] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClosed", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Closing", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.Closing([reactContext] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogClosingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClosing", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Opened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.Opened([reactContext] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogOpenedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topOpened", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PrimaryButtonClick", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.PrimaryButtonClick([reactContext] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPrimaryButtonClick", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SecondaryButtonClick", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.SecondaryButtonClick([reactContext] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSecondaryButtonClick", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"CloseButtonClick", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.CloseButtonClick([reactContext] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCloseButtonClick", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DateChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::DatePicker>()) {
        c.DateChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::DatePickerValueChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDateChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SelectedDateChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::DatePicker>()) {
        c.SelectedDateChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::DatePicker& sender, const winrt::Windows::UI::Xaml::Controls::DatePickerSelectedValueChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectedDateChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Navigated", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Frame>()) {
        c.Navigated([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNavigated", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Navigating", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Frame>()) {
        c.Navigating([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNavigating", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"NavigationFailed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Frame>()) {
        c.NavigationFailed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNavigationFailed", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"NavigationStopped", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Frame>()) {
        c.NavigationStopped([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNavigationStopped", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DragItemsStarting", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.DragItemsStarting([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragItemsStarting", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ItemClick", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.ItemClick([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ItemClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topItemClick", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ContainerContentChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.ContainerContentChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContainerContentChanging", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ChoosingGroupHeaderContainer", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.ChoosingGroupHeaderContainer([reactContext] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ChoosingGroupHeaderContainerEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topChoosingGroupHeaderContainer", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ChoosingItemContainer", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.ChoosingItemContainer([reactContext] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ChoosingItemContainerEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topChoosingItemContainer", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DragItemsCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.DragItemsCompleted([reactContext] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragItemsCompleted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Closed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::HandwritingView>()) {
        c.Closed([reactContext] (const winrt::Windows::UI::Xaml::Controls::HandwritingView& sender, const winrt::Windows::UI::Xaml::Controls::HandwritingPanelClosedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClosed", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Opened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::HandwritingView>()) {
        c.Opened([reactContext] (const winrt::Windows::UI::Xaml::Controls::HandwritingView& sender, const winrt::Windows::UI::Xaml::Controls::HandwritingPanelOpenedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topOpened", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SectionHeaderClick", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Hub>()) {
        c.SectionHeaderClick([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::HubSectionHeaderClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSectionHeaderClick", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SectionsInViewChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Hub>()) {
        c.SectionsInViewChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SectionsInViewChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSectionsInViewChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ImageFailed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Image>()) {
        c.ImageFailed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topImageFailed", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ImageOpened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Image>()) {
        c.ImageOpened([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topImageOpened", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ActiveToolChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbar>()) {
        c.ActiveToolChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topActiveToolChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"EraseAllClicked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbar>()) {
        c.EraseAllClicked([reactContext] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topEraseAllClicked", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"InkDrawingAttributesChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbar>()) {
        c.InkDrawingAttributesChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topInkDrawingAttributesChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"IsRulerButtonCheckedChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbar>()) {
        c.IsRulerButtonCheckedChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topIsRulerButtonCheckedChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"IsStencilButtonCheckedChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbar>()) {
        c.IsStencilButtonCheckedChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::UI::Xaml::Controls::InkToolbarIsStencilButtonCheckedChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topIsStencilButtonCheckedChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Checked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem>()) {
        c.Checked([reactContext] (const winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topChecked", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Unchecked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem>()) {
        c.Unchecked([reactContext] (const winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topUnchecked", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ItemsPresenter>()) {
        c.HorizontalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ItemsPresenter>()) {
        c.VerticalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"CenterChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.CenterChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCenterChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"HeadingChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.HeadingChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topHeadingChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"LoadingStatusChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.LoadingStatusChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topLoadingStatusChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"MapDoubleTapped", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapDoubleTapped([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMapDoubleTapped", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"MapHolding", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapHolding([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMapHolding", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"MapTapped", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapTapped([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMapTapped", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PitchChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.PitchChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPitchChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"TransformOriginChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.TransformOriginChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTransformOriginChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ZoomLevelChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.ZoomLevelChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topZoomLevelChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ActualCameraChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.ActualCameraChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topActualCameraChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ActualCameraChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.ActualCameraChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topActualCameraChanging", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"CustomExperienceChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.CustomExperienceChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCustomExperienceChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"MapElementClick", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapElementClick([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMapElementClick", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"MapElementPointerEntered", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapElementPointerEntered([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMapElementPointerEntered", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"MapElementPointerExited", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapElementPointerExited([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMapElementPointerExited", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"TargetCameraChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.TargetCameraChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTargetCameraChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"MapRightTapped", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapRightTapped([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMapRightTapped", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"MapContextRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapContextRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMapContextRequested", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"BufferingProgressChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.BufferingProgressChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topBufferingProgressChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"CurrentStateChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.CurrentStateChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCurrentStateChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DownloadProgressChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.DownloadProgressChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDownloadProgressChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"MarkerReached", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.MarkerReached([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMarkerReached", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"MediaEnded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.MediaEnded([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMediaEnded", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"MediaFailed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.MediaFailed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMediaFailed", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"MediaOpened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.MediaOpened([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topMediaOpened", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"RateChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.RateChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Media::RateChangedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topRateChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SeekCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.SeekCompleted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSeekCompleted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"VolumeChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.VolumeChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topVolumeChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PartialMediaFailureDetected", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.PartialMediaFailureDetected([reactContext] (const winrt::Windows::UI::Xaml::Controls::MediaElement& sender, const winrt::Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPartialMediaFailureDetected", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ThumbnailRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>()) {
        c.ThumbnailRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::MediaTransportControls& sender, const winrt::Windows::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topThumbnailRequested", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Click", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem>()) {
        c.Click([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClick", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DisplayModeChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.DisplayModeChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewDisplayModeChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDisplayModeChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ItemInvoked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.ItemInvoked([reactContext] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topItemInvoked", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.SelectionChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"BackRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.BackRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewBackRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topBackRequested", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PaneClosed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.PaneClosed([reactContext] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaneClosed", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PaneClosing", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.PaneClosing([reactContext] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewPaneClosingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaneClosing", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PaneOpened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.PaneOpened([reactContext] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaneOpened", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PaneOpening", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.PaneOpening([reactContext] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaneOpening", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ContextMenuOpening", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::PasswordBox>()) {
        c.ContextMenuOpening([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContextMenuOpening", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PasswordChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::PasswordBox>()) {
        c.PasswordChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPasswordChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Paste", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::PasswordBox>()) {
        c.Paste([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaste", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PasswordChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::PasswordBox>()) {
        c.PasswordChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::PasswordBox& sender, const winrt::Windows::UI::Xaml::Controls::PasswordBoxPasswordChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPasswordChanging", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PivotItemLoaded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Pivot>()) {
        c.PivotItemLoaded([reactContext] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPivotItemLoaded", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PivotItemLoading", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Pivot>()) {
        c.PivotItemLoading([reactContext] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPivotItemLoading", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PivotItemUnloaded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Pivot>()) {
        c.PivotItemUnloaded([reactContext] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPivotItemUnloaded", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PivotItemUnloading", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Pivot>()) {
        c.PivotItemUnloading([reactContext] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPivotItemUnloading", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Pivot>()) {
        c.SelectionChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::CarouselPanel>()) {
        c.HorizontalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::CarouselPanel>()) {
        c.VerticalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ValueChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase>()) {
        c.ValueChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topValueChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ColorChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>()) {
        c.ColorChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum& sender, const winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topColorChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector>()) {
        c.SelectionChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>()) {
        c.HorizontalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>()) {
        c.VerticalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>()) {
        c.HorizontalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>()) {
        c.VerticalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::PivotPanel>()) {
        c.HorizontalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::PivotPanel>()) {
        c.VerticalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Closed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>()) {
        c.Closed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClosed", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Opened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>()) {
        c.Opened([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topOpened", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Scroll", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar>()) {
        c.Scroll([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topScroll", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DragCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>()) {
        c.DragCompleted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragCompleted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DragDelta", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>()) {
        c.DragDelta([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragDelta", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DragStarted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>()) {
        c.DragStarted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragStarted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ValueChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RatingControl>()) {
        c.ValueChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::RatingControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topValueChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"RefreshRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RefreshContainer>()) {
        c.RefreshRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::RefreshContainer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topRefreshRequested", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"RefreshRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RefreshVisualizer>()) {
        c.RefreshRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::RefreshVisualizer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topRefreshRequested", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"RefreshStateChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RefreshVisualizer>()) {
        c.RefreshStateChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::RefreshVisualizer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshStateChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topRefreshStateChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ContextMenuOpening", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.ContextMenuOpening([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContextMenuOpening", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.SelectionChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"TextChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.TextChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Paste", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.Paste([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaste", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"CandidateWindowBoundsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.CandidateWindowBoundsChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCandidateWindowBoundsChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"TextChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.TextChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::RichEditBoxTextChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextChanging", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"TextCompositionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.TextCompositionChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextCompositionChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"TextCompositionEnded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.TextCompositionEnded([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextCompositionEnded", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"TextCompositionStarted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.TextCompositionStarted([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextCompositionStarted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"CopyingToClipboard", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.CopyingToClipboard([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCopyingToClipboard", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"CuttingToClipboard", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.CuttingToClipboard([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCuttingToClipboard", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ContentLinkChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.ContentLinkChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::ContentLinkChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContentLinkChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ContentLinkInvoked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.ContentLinkInvoked([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContentLinkInvoked", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SelectionChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.SelectionChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::RichEditBoxSelectionChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanging", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ContextMenuOpening", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichTextBlock>()) {
        c.ContextMenuOpening([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContextMenuOpening", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichTextBlock>()) {
        c.SelectionChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"IsTextTrimmedChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichTextBlock>()) {
        c.IsTextTrimmedChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichTextBlock& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topIsTextTrimmedChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"IsTextTrimmedChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow>()) {
        c.IsTextTrimmedChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topIsTextTrimmedChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ViewChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ScrollViewer>()) {
        c.ViewChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ScrollViewerViewChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topViewChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ViewChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ScrollViewer>()) {
        c.ViewChanging([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ScrollViewerViewChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topViewChanging", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DirectManipulationCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ScrollViewer>()) {
        c.DirectManipulationCompleted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDirectManipulationCompleted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DirectManipulationStarted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ScrollViewer>()) {
        c.DirectManipulationStarted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDirectManipulationStarted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"AnchorRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ScrollViewer>()) {
        c.AnchorRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::ScrollViewer& sender, const winrt::Windows::UI::Xaml::Controls::AnchorRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topAnchorRequested", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PrepareForFocusOnKeyboardInput", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SearchBox>()) {
        c.PrepareForFocusOnKeyboardInput([reactContext] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPrepareForFocusOnKeyboardInput", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"QueryChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SearchBox>()) {
        c.QueryChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxQueryChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topQueryChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"QuerySubmitted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SearchBox>()) {
        c.QuerySubmitted([reactContext] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxQuerySubmittedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topQuerySubmitted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ResultSuggestionChosen", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SearchBox>()) {
        c.ResultSuggestionChosen([reactContext] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxResultSuggestionChosenEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topResultSuggestionChosen", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SuggestionsRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SearchBox>()) {
        c.SuggestionsRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxSuggestionsRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSuggestionsRequested", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ViewChangeCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SemanticZoom>()) {
        c.ViewChangeCompleted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topViewChangeCompleted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ViewChangeStarted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SemanticZoom>()) {
        c.ViewChangeStarted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topViewChangeStarted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"BackClick", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SettingsFlyout>()) {
        c.BackClick([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::BackClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topBackClick", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Click", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SplitButton>()) {
        c.Click([reactContext] (const winrt::Windows::UI::Xaml::Controls::SplitButton& sender, const winrt::Windows::UI::Xaml::Controls::SplitButtonClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClick", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PaneClosed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SplitView>()) {
        c.PaneClosed([reactContext] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaneClosed", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PaneClosing", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SplitView>()) {
        c.PaneClosing([reactContext] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::UI::Xaml::Controls::SplitViewPaneClosingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaneClosing", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PaneOpened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SplitView>()) {
        c.PaneOpened([reactContext] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaneOpened", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PaneOpening", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SplitView>()) {
        c.PaneOpening([reactContext] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaneOpening", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::StackPanel>()) {
        c.HorizontalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::StackPanel>()) {
        c.VerticalSnapPointsChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"CompositionScaleChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SwapChainPanel>()) {
        c.CompositionScaleChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::SwapChainPanel& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCompositionScaleChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ContextMenuOpening", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBlock>()) {
        c.ContextMenuOpening([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContextMenuOpening", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBlock>()) {
        c.SelectionChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"IsTextTrimmedChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBlock>()) {
        c.IsTextTrimmedChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBlock& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topIsTextTrimmedChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ContextMenuOpening", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.ContextMenuOpening([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContextMenuOpening", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.SelectionChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"TextChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.TextChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Paste", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.Paste([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPaste", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"CandidateWindowBoundsChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.CandidateWindowBoundsChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCandidateWindowBoundsChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"TextChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.TextChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxTextChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextChanging", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"TextCompositionChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.TextCompositionChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextCompositionChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"TextCompositionEnded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.TextCompositionEnded([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextCompositionEnded", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"TextCompositionStarted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.TextCompositionStarted([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTextCompositionStarted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"BeforeTextChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.BeforeTextChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxBeforeTextChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topBeforeTextChanging", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"CopyingToClipboard", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.CopyingToClipboard([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCopyingToClipboard", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"CuttingToClipboard", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.CuttingToClipboard([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCuttingToClipboard", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SelectionChanging", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.SelectionChanging([reactContext] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxSelectionChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectionChanging", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"TimeChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TimePicker>()) {
        c.TimeChanged([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TimePickerValueChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topTimeChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SelectedTimeChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TimePicker>()) {
        c.SelectedTimeChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::TimePicker& sender, const winrt::Windows::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSelectedTimeChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"IsCheckedChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ToggleSplitButton>()) {
        c.IsCheckedChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::ToggleSplitButton& sender, const winrt::Windows::UI::Xaml::Controls::ToggleSplitButtonIsCheckedChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topIsCheckedChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Toggled", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ToggleSwitch>()) {
        c.Toggled([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topToggled", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Closed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ToolTip>()) {
        c.Closed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topClosed", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Opened", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ToolTip>()) {
        c.Opened([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topOpened", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Collapsed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TreeView>()) {
        c.Collapsed([reactContext] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewCollapsedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCollapsed", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"Expanding", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TreeView>()) {
        c.Expanding([reactContext] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewExpandingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topExpanding", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ItemInvoked", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TreeView>()) {
        c.ItemInvoked([reactContext] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewItemInvokedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topItemInvoked", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DragItemsCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TreeView>()) {
        c.DragItemsCompleted([reactContext] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragItemsCompleted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DragItemsStarting", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TreeView>()) {
        c.DragItemsStarting([reactContext] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsStartingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDragItemsStarting", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ModeChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TwoPaneView>()) {
        c.ModeChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::TwoPaneView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topModeChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"CleanUpVirtualizedItemEvent", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::VirtualizingStackPanel>()) {
        c.CleanUpVirtualizedItemEvent([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topCleanUpVirtualizedItemEvent", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"LoadCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.LoadCompleted([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topLoadCompleted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"NavigationFailed", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.NavigationFailed([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationFailedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNavigationFailed", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ScriptNotify", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.ScriptNotify([reactContext] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::NotifyEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topScriptNotify", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ContentLoading", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.ContentLoading([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewContentLoadingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContentLoading", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"DOMContentLoaded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.DOMContentLoaded([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewDOMContentLoadedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topDOMContentLoaded", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"FrameContentLoading", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.FrameContentLoading([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewContentLoadingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topFrameContentLoading", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"FrameDOMContentLoaded", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.FrameDOMContentLoaded([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewDOMContentLoadedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topFrameDOMContentLoaded", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"FrameNavigationCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.FrameNavigationCompleted([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topFrameNavigationCompleted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"FrameNavigationStarting", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.FrameNavigationStarting([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topFrameNavigationStarting", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"LongRunningScriptDetected", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.LongRunningScriptDetected([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewLongRunningScriptDetectedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topLongRunningScriptDetected", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"NavigationCompleted", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.NavigationCompleted([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNavigationCompleted", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"NavigationStarting", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.NavigationStarting([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNavigationStarting", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"UnsafeContentWarningDisplaying", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.UnsafeContentWarningDisplaying([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topUnsafeContentWarningDisplaying", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"UnviewableContentIdentified", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.UnviewableContentIdentified([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewUnviewableContentIdentifiedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topUnviewableContentIdentified", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"ContainsFullScreenElementChanged", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.ContainsFullScreenElementChanged([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topContainsFullScreenElementChanged", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"NewWindowRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.NewWindowRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNewWindowRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topNewWindowRequested", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"PermissionRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.PermissionRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewPermissionRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topPermissionRequested", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"UnsupportedUriSchemeIdentified", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.UnsupportedUriSchemeIdentified([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewUnsupportedUriSchemeIdentifiedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topUnsupportedUriSchemeIdentified", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"SeparateProcessLost", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.SeparateProcessLost([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewSeparateProcessLostEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topSeparateProcessLost", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
              });
            }
        });
    }
    } },
  {"WebResourceRequested", [](winrt::Windows::Foundation::IInspectable o, IReactContext reactContext) {
    if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.WebResourceRequested([reactContext] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewWebResourceRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : nullptr) {
              reactContext.DispatchEvent(fe, L"topWebResourceRequested", [args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, args);
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

