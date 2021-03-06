#include "pch.h"
#include "XamlMetadata.h"
#include "Crc32Str.h"
#include <JSValueWriter.h>

/*************************************************************
THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT MODIFY MANUALLY
**************************************************************/

#include <winrt/RuntimeComponent1.h>
#include <winrt/Windows.UI.Xaml.h>
#include <winrt/Windows.UI.Xaml.Controls.h>
#include <winrt/Windows.UI.Xaml.Controls.Primitives.h>
#include <winrt/Windows.UI.Xaml.Controls.Maps.h>
#include <winrt/Windows.UI.Xaml.Input.h>

/////// Events
template<typename TArgs>
void SerializeEventArgs(winrt::Microsoft::ReactNative::IJSValueWriter const& writer, const winrt::Windows::Foundation::IInspectable& sender, const TArgs& args);

/*static*/ const EventInfo EventInfo::xamlEventMap[] = {
  {"Happened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::RuntimeComponent1::BlankUserControl>()) {
        c.Happened([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topHappened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DoubleTapped", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DoubleTapped([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDoubleTapped", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragEnter", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DragEnter([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDragEnter", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragLeave", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DragLeave([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDragLeave", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragOver", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DragOver([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDragOver", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Drop", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.Drop([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDrop", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"GotFocus", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.GotFocus([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topGotFocus", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Holding", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.Holding([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::HoldingRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topHolding", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"LostFocus", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.LostFocus([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topLostFocus", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ManipulationCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ManipulationCompleted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topManipulationCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ManipulationDelta", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ManipulationDelta([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topManipulationDelta", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ManipulationInertiaStarting", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ManipulationInertiaStarting([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topManipulationInertiaStarting", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ManipulationStarted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ManipulationStarted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topManipulationStarted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ManipulationStarting", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ManipulationStarting([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topManipulationStarting", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PointerCanceled", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerCanceled([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPointerCanceled", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PointerCaptureLost", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerCaptureLost([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPointerCaptureLost", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PointerEntered", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerEntered([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPointerEntered", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PointerExited", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerExited([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPointerExited", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PointerMoved", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerMoved([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPointerMoved", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PointerPressed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerPressed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPointerPressed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PointerReleased", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerReleased([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPointerReleased", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PointerWheelChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PointerWheelChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPointerWheelChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"RightTapped", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.RightTapped([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::RightTappedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topRightTapped", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Tapped", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.Tapped([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topTapped", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragStarting", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DragStarting([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::DragStartingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDragStarting", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DropCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.DropCompleted([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::DropCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDropCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"AccessKeyDisplayDismissed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.AccessKeyDisplayDismissed([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topAccessKeyDisplayDismissed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"AccessKeyDisplayRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.AccessKeyDisplayRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topAccessKeyDisplayRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"AccessKeyInvoked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.AccessKeyInvoked([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topAccessKeyInvoked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContextCanceled", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ContextCanceled([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topContextCanceled", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContextRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ContextRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topContextRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"GettingFocus", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.GettingFocus([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topGettingFocus", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"LosingFocus", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.LosingFocus([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topLosingFocus", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"NoFocusCandidateFound", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.NoFocusCandidateFound([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topNoFocusCandidateFound", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CharacterReceived", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.CharacterReceived([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topCharacterReceived", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PreviewKeyDown", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PreviewKeyDown([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPreviewKeyDown", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PreviewKeyUp", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.PreviewKeyUp([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPreviewKeyUp", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ProcessKeyboardAccelerators", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.ProcessKeyboardAccelerators([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topProcessKeyboardAccelerators", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"BringIntoViewRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::UIElement>()) {
        c.BringIntoViewRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topBringIntoViewRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"LayoutUpdated", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.LayoutUpdated([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topLayoutUpdated", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Loaded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.Loaded([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topLoaded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SizeChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.SizeChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::SizeChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSizeChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Unloaded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.Unloaded([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topUnloaded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DataContextChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.DataContextChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::UI::Xaml::DataContextChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDataContextChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Loading", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.Loading([reactContext, ii] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topLoading", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ActualThemeChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.ActualThemeChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topActualThemeChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"EffectiveViewportChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::FrameworkElement>()) {
        c.EffectiveViewportChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::UI::Xaml::EffectiveViewportChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topEffectiveViewportChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"IsEnabledChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Control>()) {
        c.IsEnabledChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topIsEnabledChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"FocusDisengaged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Control>()) {
        c.FocusDisengaged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Control& sender, const winrt::Windows::UI::Xaml::Controls::FocusDisengagedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topFocusDisengaged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"FocusEngaged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Control>()) {
        c.FocusEngaged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Control& sender, const winrt::Windows::UI::Xaml::Controls::FocusEngagedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topFocusEngaged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AppBar>()) {
        c.Closed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Opened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AppBar>()) {
        c.Opened([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closing", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AppBar>()) {
        c.Closing([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topClosing", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Opening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AppBar>()) {
        c.Opening([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topOpening", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Click", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase>()) {
        c.Click([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Checked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>()) {
        c.Checked([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topChecked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Indeterminate", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>()) {
        c.Indeterminate([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topIndeterminate", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Unchecked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>()) {
        c.Unchecked([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topUnchecked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SuggestionChosen", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>()) {
        c.SuggestionChosen([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxSuggestionChosenEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSuggestionChosen", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>()) {
        c.TextChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxTextChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topTextChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"QuerySubmitted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>()) {
        c.QuerySubmitted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topQuerySubmitted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CalendarViewDayItemChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>()) {
        c.CalendarViewDayItemChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topCalendarViewDayItemChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>()) {
        c.Closed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DateChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>()) {
        c.DateChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::CalendarDatePicker& sender, const winrt::Windows::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDateChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Opened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>()) {
        c.Opened([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CalendarViewDayItemChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarView>()) {
        c.CalendarViewDayItemChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topCalendarViewDayItemChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectedDatesChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CalendarView>()) {
        c.SelectedDatesChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewSelectedDatesChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSelectedDatesChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ColorChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ColorPicker>()) {
        c.ColorChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ColorPicker& sender, const winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topColorChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Selector>()) {
        c.SelectionChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DropDownClosed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ComboBox>()) {
        c.DropDownClosed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDropDownClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DropDownOpened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ComboBox>()) {
        c.DropDownOpened([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDropDownOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextSubmitted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ComboBox>()) {
        c.TextSubmitted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ComboBox& sender, const winrt::Windows::UI::Xaml::Controls::ComboBoxTextSubmittedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topTextSubmitted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DynamicOverflowItemsChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::CommandBar>()) {
        c.DynamicOverflowItemsChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::CommandBar& sender, const winrt::Windows::UI::Xaml::Controls::DynamicOverflowItemsChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDynamicOverflowItemsChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>()) {
        c.Closed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Opened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>()) {
        c.Opened([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Opening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>()) {
        c.Opening([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topOpening", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closing", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>()) {
        c.Closing([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topClosing", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.Closed([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closing", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.Closing([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogClosingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topClosing", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Opened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.Opened([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogOpenedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PrimaryButtonClick", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.PrimaryButtonClick([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPrimaryButtonClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SecondaryButtonClick", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.SecondaryButtonClick([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSecondaryButtonClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CloseButtonClick", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ContentDialog>()) {
        c.CloseButtonClick([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topCloseButtonClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DateChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::DatePicker>()) {
        c.DateChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::DatePickerValueChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDateChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectedDateChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::DatePicker>()) {
        c.SelectedDateChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::DatePicker& sender, const winrt::Windows::UI::Xaml::Controls::DatePickerSelectedValueChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSelectedDateChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DatePicked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::DatePickerFlyout>()) {
        c.DatePicked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::DatePickerFlyout& sender, const winrt::Windows::UI::Xaml::Controls::DatePickedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDatePicked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Navigated", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Frame>()) {
        c.Navigated([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topNavigated", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Navigating", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Frame>()) {
        c.Navigating([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topNavigating", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"NavigationFailed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Frame>()) {
        c.NavigationFailed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topNavigationFailed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"NavigationStopped", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Frame>()) {
        c.NavigationStopped([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topNavigationStopped", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragItemsStarting", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.DragItemsStarting([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDragItemsStarting", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ItemClick", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.ItemClick([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ItemClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topItemClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContainerContentChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.ContainerContentChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topContainerContentChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ChoosingGroupHeaderContainer", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.ChoosingGroupHeaderContainer([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ChoosingGroupHeaderContainerEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topChoosingGroupHeaderContainer", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ChoosingItemContainer", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.ChoosingItemContainer([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ChoosingItemContainerEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topChoosingItemContainer", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragItemsCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListViewBase>()) {
        c.DragItemsCompleted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDragItemsCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::HandwritingView>()) {
        c.Closed([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::HandwritingView& sender, const winrt::Windows::UI::Xaml::Controls::HandwritingPanelClosedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Opened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::HandwritingView>()) {
        c.Opened([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::HandwritingView& sender, const winrt::Windows::UI::Xaml::Controls::HandwritingPanelOpenedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SectionHeaderClick", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Hub>()) {
        c.SectionHeaderClick([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::HubSectionHeaderClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSectionHeaderClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SectionsInViewChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Hub>()) {
        c.SectionsInViewChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SectionsInViewChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSectionsInViewChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ImageFailed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Image>()) {
        c.ImageFailed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topImageFailed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ImageOpened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Image>()) {
        c.ImageOpened([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topImageOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ActiveToolChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbar>()) {
        c.ActiveToolChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topActiveToolChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"EraseAllClicked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbar>()) {
        c.EraseAllClicked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topEraseAllClicked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"InkDrawingAttributesChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbar>()) {
        c.InkDrawingAttributesChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topInkDrawingAttributesChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"IsRulerButtonCheckedChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbar>()) {
        c.IsRulerButtonCheckedChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topIsRulerButtonCheckedChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"IsStencilButtonCheckedChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbar>()) {
        c.IsStencilButtonCheckedChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::UI::Xaml::Controls::InkToolbarIsStencilButtonCheckedChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topIsStencilButtonCheckedChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Checked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem>()) {
        c.Checked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topChecked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Unchecked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem>()) {
        c.Unchecked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topUnchecked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ItemsPresenter>()) {
        c.HorizontalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ItemsPresenter>()) {
        c.VerticalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ItemsPicked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ListPickerFlyout>()) {
        c.ItemsPicked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ListPickerFlyout& sender, const winrt::Windows::UI::Xaml::Controls::ItemsPickedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topItemsPicked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CenterChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.CenterChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topCenterChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"HeadingChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.HeadingChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topHeadingChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"LoadingStatusChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.LoadingStatusChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topLoadingStatusChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MapDoubleTapped", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapDoubleTapped([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topMapDoubleTapped", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MapHolding", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapHolding([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topMapHolding", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MapTapped", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapTapped([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topMapTapped", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PitchChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.PitchChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPitchChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TransformOriginChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.TransformOriginChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topTransformOriginChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ZoomLevelChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.ZoomLevelChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topZoomLevelChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ActualCameraChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.ActualCameraChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topActualCameraChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ActualCameraChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.ActualCameraChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topActualCameraChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CustomExperienceChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.CustomExperienceChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topCustomExperienceChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MapElementClick", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapElementClick([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topMapElementClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MapElementPointerEntered", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapElementPointerEntered([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topMapElementPointerEntered", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MapElementPointerExited", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapElementPointerExited([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topMapElementPointerExited", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TargetCameraChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.TargetCameraChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topTargetCameraChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MapRightTapped", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapRightTapped([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topMapRightTapped", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MapContextRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>()) {
        c.MapContextRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topMapContextRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"BufferingProgressChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.BufferingProgressChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topBufferingProgressChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CurrentStateChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.CurrentStateChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topCurrentStateChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DownloadProgressChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.DownloadProgressChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDownloadProgressChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MarkerReached", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.MarkerReached([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topMarkerReached", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MediaEnded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.MediaEnded([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topMediaEnded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MediaFailed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.MediaFailed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topMediaFailed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"MediaOpened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.MediaOpened([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topMediaOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"RateChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.RateChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Media::RateChangedRoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topRateChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SeekCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.SeekCompleted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSeekCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"VolumeChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.VolumeChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topVolumeChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PartialMediaFailureDetected", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaElement>()) {
        c.PartialMediaFailureDetected([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::MediaElement& sender, const winrt::Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPartialMediaFailureDetected", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ThumbnailRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>()) {
        c.ThumbnailRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::MediaTransportControls& sender, const winrt::Windows::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topThumbnailRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Click", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem>()) {
        c.Click([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DisplayModeChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.DisplayModeChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewDisplayModeChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDisplayModeChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ItemInvoked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.ItemInvoked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topItemInvoked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.SelectionChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"BackRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.BackRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewBackRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topBackRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PaneClosed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.PaneClosed([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPaneClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PaneClosing", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.PaneClosing([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewPaneClosingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPaneClosing", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PaneOpened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.PaneOpened([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPaneOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PaneOpening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::NavigationView>()) {
        c.PaneOpening([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPaneOpening", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContextMenuOpening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::PasswordBox>()) {
        c.ContextMenuOpening([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topContextMenuOpening", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PasswordChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::PasswordBox>()) {
        c.PasswordChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPasswordChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Paste", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::PasswordBox>()) {
        c.Paste([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPaste", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PasswordChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::PasswordBox>()) {
        c.PasswordChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::PasswordBox& sender, const winrt::Windows::UI::Xaml::Controls::PasswordBoxPasswordChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPasswordChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Confirmed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::PickerFlyout>()) {
        c.Confirmed([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::PickerFlyout& sender, const winrt::Windows::UI::Xaml::Controls::PickerConfirmedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topConfirmed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PivotItemLoaded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Pivot>()) {
        c.PivotItemLoaded([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPivotItemLoaded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PivotItemLoading", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Pivot>()) {
        c.PivotItemLoading([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPivotItemLoading", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PivotItemUnloaded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Pivot>()) {
        c.PivotItemUnloaded([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPivotItemUnloaded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PivotItemUnloading", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Pivot>()) {
        c.PivotItemUnloading([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPivotItemUnloading", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Pivot>()) {
        c.SelectionChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::CarouselPanel>()) {
        c.HorizontalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::CarouselPanel>()) {
        c.VerticalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ValueChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase>()) {
        c.ValueChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topValueChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ColorChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>()) {
        c.ColorChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum& sender, const winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topColorChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector>()) {
        c.SelectionChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>()) {
        c.HorizontalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>()) {
        c.VerticalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>()) {
        c.HorizontalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>()) {
        c.VerticalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::PivotPanel>()) {
        c.HorizontalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::PivotPanel>()) {
        c.VerticalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>()) {
        c.Closed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Opened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>()) {
        c.Opened([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Scroll", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar>()) {
        c.Scroll([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topScroll", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>()) {
        c.DragCompleted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDragCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragDelta", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>()) {
        c.DragDelta([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDragDelta", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragStarted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>()) {
        c.DragStarted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDragStarted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ValueChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RatingControl>()) {
        c.ValueChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RatingControl& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topValueChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"RefreshRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RefreshContainer>()) {
        c.RefreshRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RefreshContainer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topRefreshRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"RefreshRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RefreshVisualizer>()) {
        c.RefreshRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RefreshVisualizer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topRefreshRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"RefreshStateChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RefreshVisualizer>()) {
        c.RefreshStateChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RefreshVisualizer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshStateChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topRefreshStateChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContextMenuOpening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.ContextMenuOpening([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topContextMenuOpening", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.SelectionChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.TextChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topTextChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Paste", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.Paste([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPaste", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CandidateWindowBoundsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.CandidateWindowBoundsChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topCandidateWindowBoundsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.TextChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::RichEditBoxTextChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topTextChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextCompositionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.TextCompositionChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topTextCompositionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextCompositionEnded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.TextCompositionEnded([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topTextCompositionEnded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextCompositionStarted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.TextCompositionStarted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topTextCompositionStarted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CopyingToClipboard", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.CopyingToClipboard([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topCopyingToClipboard", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CuttingToClipboard", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.CuttingToClipboard([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topCuttingToClipboard", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContentLinkChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.ContentLinkChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::ContentLinkChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topContentLinkChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContentLinkInvoked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.ContentLinkInvoked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topContentLinkInvoked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichEditBox>()) {
        c.SelectionChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::RichEditBoxSelectionChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSelectionChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContextMenuOpening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichTextBlock>()) {
        c.ContextMenuOpening([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topContextMenuOpening", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichTextBlock>()) {
        c.SelectionChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"IsTextTrimmedChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichTextBlock>()) {
        c.IsTextTrimmedChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichTextBlock& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topIsTextTrimmedChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"IsTextTrimmedChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow>()) {
        c.IsTextTrimmedChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topIsTextTrimmedChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ViewChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ScrollViewer>()) {
        c.ViewChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ScrollViewerViewChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topViewChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ViewChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ScrollViewer>()) {
        c.ViewChanging([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ScrollViewerViewChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topViewChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DirectManipulationCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ScrollViewer>()) {
        c.DirectManipulationCompleted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDirectManipulationCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DirectManipulationStarted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ScrollViewer>()) {
        c.DirectManipulationStarted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDirectManipulationStarted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"AnchorRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ScrollViewer>()) {
        c.AnchorRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ScrollViewer& sender, const winrt::Windows::UI::Xaml::Controls::AnchorRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topAnchorRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PrepareForFocusOnKeyboardInput", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SearchBox>()) {
        c.PrepareForFocusOnKeyboardInput([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPrepareForFocusOnKeyboardInput", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"QueryChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SearchBox>()) {
        c.QueryChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxQueryChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topQueryChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"QuerySubmitted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SearchBox>()) {
        c.QuerySubmitted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxQuerySubmittedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topQuerySubmitted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ResultSuggestionChosen", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SearchBox>()) {
        c.ResultSuggestionChosen([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxResultSuggestionChosenEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topResultSuggestionChosen", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SuggestionsRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SearchBox>()) {
        c.SuggestionsRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxSuggestionsRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSuggestionsRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ViewChangeCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SemanticZoom>()) {
        c.ViewChangeCompleted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topViewChangeCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ViewChangeStarted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SemanticZoom>()) {
        c.ViewChangeStarted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topViewChangeStarted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"BackClick", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SettingsFlyout>()) {
        c.BackClick([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::BackClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topBackClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Click", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SplitButton>()) {
        c.Click([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SplitButton& sender, const winrt::Windows::UI::Xaml::Controls::SplitButtonClickEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topClick", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PaneClosed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SplitView>()) {
        c.PaneClosed([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPaneClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PaneClosing", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SplitView>()) {
        c.PaneClosing([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::UI::Xaml::Controls::SplitViewPaneClosingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPaneClosing", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PaneOpened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SplitView>()) {
        c.PaneOpened([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPaneOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PaneOpening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SplitView>()) {
        c.PaneOpening([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPaneOpening", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"HorizontalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::StackPanel>()) {
        c.HorizontalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topHorizontalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"VerticalSnapPointsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::StackPanel>()) {
        c.VerticalSnapPointsChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topVerticalSnapPointsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CompositionScaleChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::SwapChainPanel>()) {
        c.CompositionScaleChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::SwapChainPanel& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topCompositionScaleChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContextMenuOpening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBlock>()) {
        c.ContextMenuOpening([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topContextMenuOpening", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBlock>()) {
        c.SelectionChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"IsTextTrimmedChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBlock>()) {
        c.IsTextTrimmedChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBlock& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topIsTextTrimmedChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContextMenuOpening", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.ContextMenuOpening([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topContextMenuOpening", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.SelectionChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSelectionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.TextChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topTextChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Paste", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.Paste([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPaste", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CandidateWindowBoundsChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.CandidateWindowBoundsChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topCandidateWindowBoundsChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.TextChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxTextChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topTextChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextCompositionChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.TextCompositionChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topTextCompositionChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextCompositionEnded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.TextCompositionEnded([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topTextCompositionEnded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TextCompositionStarted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.TextCompositionStarted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topTextCompositionStarted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"BeforeTextChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.BeforeTextChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxBeforeTextChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topBeforeTextChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CopyingToClipboard", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.CopyingToClipboard([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topCopyingToClipboard", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CuttingToClipboard", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.CuttingToClipboard([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topCuttingToClipboard", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectionChanging", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TextBox>()) {
        c.SelectionChanging([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxSelectionChangingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSelectionChanging", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TimeChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TimePicker>()) {
        c.TimeChanged([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TimePickerValueChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topTimeChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SelectedTimeChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TimePicker>()) {
        c.SelectedTimeChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TimePicker& sender, const winrt::Windows::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSelectedTimeChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"TimePicked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TimePickerFlyout>()) {
        c.TimePicked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TimePickerFlyout& sender, const winrt::Windows::UI::Xaml::Controls::TimePickedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topTimePicked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"IsCheckedChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ToggleSplitButton>()) {
        c.IsCheckedChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::ToggleSplitButton& sender, const winrt::Windows::UI::Xaml::Controls::ToggleSplitButtonIsCheckedChangedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topIsCheckedChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Toggled", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ToggleSwitch>()) {
        c.Toggled([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topToggled", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Closed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ToolTip>()) {
        c.Closed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topClosed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Opened", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::ToolTip>()) {
        c.Opened([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topOpened", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Collapsed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TreeView>()) {
        c.Collapsed([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewCollapsedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topCollapsed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"Expanding", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TreeView>()) {
        c.Expanding([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewExpandingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topExpanding", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ItemInvoked", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TreeView>()) {
        c.ItemInvoked([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewItemInvokedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topItemInvoked", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragItemsCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TreeView>()) {
        c.DragItemsCompleted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDragItemsCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DragItemsStarting", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TreeView>()) {
        c.DragItemsStarting([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsStartingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDragItemsStarting", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ModeChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::TwoPaneView>()) {
        c.ModeChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::TwoPaneView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topModeChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"CleanUpVirtualizedItemEvent", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::VirtualizingStackPanel>()) {
        c.CleanUpVirtualizedItemEvent([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topCleanUpVirtualizedItemEvent", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"LoadCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.LoadCompleted([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topLoadCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"NavigationFailed", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.NavigationFailed([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationFailedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topNavigationFailed", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ScriptNotify", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.ScriptNotify([reactContext, ii] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::NotifyEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topScriptNotify", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContentLoading", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.ContentLoading([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewContentLoadingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topContentLoading", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"DOMContentLoaded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.DOMContentLoaded([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewDOMContentLoadedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topDOMContentLoaded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"FrameContentLoading", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.FrameContentLoading([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewContentLoadingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topFrameContentLoading", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"FrameDOMContentLoaded", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.FrameDOMContentLoaded([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewDOMContentLoadedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topFrameDOMContentLoaded", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"FrameNavigationCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.FrameNavigationCompleted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topFrameNavigationCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"FrameNavigationStarting", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.FrameNavigationStarting([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topFrameNavigationStarting", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"LongRunningScriptDetected", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.LongRunningScriptDetected([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewLongRunningScriptDetectedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topLongRunningScriptDetected", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"NavigationCompleted", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.NavigationCompleted([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topNavigationCompleted", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"NavigationStarting", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.NavigationStarting([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topNavigationStarting", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"UnsafeContentWarningDisplaying", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.UnsafeContentWarningDisplaying([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topUnsafeContentWarningDisplaying", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"UnviewableContentIdentified", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.UnviewableContentIdentified([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewUnviewableContentIdentifiedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topUnviewableContentIdentified", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"ContainsFullScreenElementChanged", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.ContainsFullScreenElementChanged([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::Foundation::IInspectable& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topContainsFullScreenElementChanged", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"NewWindowRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.NewWindowRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNewWindowRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topNewWindowRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"PermissionRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.PermissionRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewPermissionRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topPermissionRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"UnsupportedUriSchemeIdentified", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.UnsupportedUriSchemeIdentified([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewUnsupportedUriSchemeIdentifiedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topUnsupportedUriSchemeIdentified", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"SeparateProcessLost", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.SeparateProcessLost([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewSeparateProcessLostEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topSeparateProcessLost", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },
  {"WebResourceRequested", [](const winrt::Windows::Foundation::IInspectable& ii, const IReactContext& reactContext, bool isWrapped) {
  winrt::Windows::Foundation::IInspectable o = (isWrapped) ? ii.as<ContentControl>().Content() : ii;
  if (auto c = o.try_as<winrt::Windows::UI::Xaml::Controls::WebView>()) {
        c.WebResourceRequested([reactContext, ii] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewWebResourceRequestedEventArgs& args) {
            if (auto fe = sender ? sender.try_as<xaml::FrameworkElement>() : 
            (ii ? ii.try_as<xaml::FrameworkElement>() : nullptr)) {
              reactContext.DispatchEvent(fe, L"topWebResourceRequested", [sender, args](winrt::Microsoft::ReactNative::IJSValueWriter const& evtDataWriter) noexcept {
                SerializeEventArgs(evtDataWriter, sender, args);
              });
            }
        });
    }
    } },

};

static_assert(ARRAYSIZE(EventInfo::xamlEventMap) == 271);

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

