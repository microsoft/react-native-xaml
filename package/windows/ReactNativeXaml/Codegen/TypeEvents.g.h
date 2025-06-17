#pragma once
#include "pch.h"
#include "XamlMetadata.h"
#include "Serialize.h"
#include "Crc32Str.h"
#include <JSValueWriter.h>

/*************************************************************
THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT MODIFY MANUALLY
SOURCE WINMDS USED:
  - %USERPROFILE%\.nuget\packages\microsoft.ui.xaml\2.8.0\lib\uap10.0\Microsoft.UI.Xaml.winmd
**************************************************************/

#include <winrt/Microsoft.UI.Xaml.Controls.h>
#include <winrt/Microsoft.UI.Xaml.Controls.Primitives.h>
#include <winrt/Windows.UI.Xaml.h>
#include <winrt/Windows.UI.Xaml.Controls.h>
#include <winrt/Windows.UI.Xaml.Controls.Primitives.h>
#include <winrt/Windows.UI.Xaml.Controls.Maps.h>
#include <winrt/Windows.UI.Xaml.Documents.h>
#include <winrt/Windows.UI.Xaml.Input.h>
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
__declspec(noinline) void DispatchTheEvent(const EventAttachInfo eai, const winrt::Windows::Foundation::IInspectable& sender, const T& args) {
  auto senderAsFE = sender.try_as<FrameworkElement>();
  auto wEN = winrt::to_hstring(eai.jsEventName);
  if (eai.xamlMetadata->m_receiveEvent.has_value()) {
    const auto tag = XamlMetadata::TagFromElement(eai.obj.as<xaml::DependencyObject>());
    ExecuteJsi(eai.context, [metadata = eai.xamlMetadata, tag, senderAsFE, args, eventName = eai.jsEventName](facebook::jsi::Runtime& rt) {
      auto objSender = std::make_shared<XamlObject>(senderAsFE, metadata);
      auto objArgs = std::make_shared<XamlObject>(args, metadata);
      auto obj = std::make_shared<facebook::jsi::Object>(rt);
      obj->setProperty(rt, "sender", rt.global().createFromHostObject(rt, objSender));
      obj->setProperty(rt, "args", rt.global().createFromHostObject(rt, objArgs));

      metadata->JsiDispatchEvent(rt, tag, std::string(eventName), obj);
      });
  }
  else {
    XamlUIService::FromContext(eai.context).DispatchEvent(eai.obj.try_as<xaml::FrameworkElement>(), wEN.c_str(),
      [senderAsFE, args](const winrt::Microsoft::ReactNative::IJSValueWriter& evtDataWriter) {
        SerializeEventArgs(evtDataWriter, senderAsFE, args);
      });
  }
};

/*static*/ const EventInfo EventInfo::xamlEventMap[] = {
  {"ItemClicked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::BreadcrumbBar>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ItemClicked([eai] (const winrt::Microsoft::UI::Xaml::Controls::BreadcrumbBar& sender, const winrt::Microsoft::UI::Xaml::Controls::BreadcrumbBarItemClickedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ItemClicked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ColorChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::ColorPicker>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ColorChanged([eai] (const winrt::Microsoft::UI::Xaml::Controls::ColorPicker& sender, const winrt::Microsoft::UI::Xaml::Controls::ColorChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ColorChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Collapsed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::Expander>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Collapsed([eai] (const winrt::Microsoft::UI::Xaml::Controls::Expander& sender, const winrt::Microsoft::UI::Xaml::Controls::ExpanderCollapsedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Collapsed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Expanding", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::Expander>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Expanding([eai] (const winrt::Microsoft::UI::Xaml::Controls::Expander& sender, const winrt::Microsoft::UI::Xaml::Controls::ExpanderExpandingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Expanding(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CloseButtonClick", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::InfoBar>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CloseButtonClick([eai] (const winrt::Microsoft::UI::Xaml::Controls::InfoBar& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CloseButtonClick(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Closed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::InfoBar>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Closed([eai] (const winrt::Microsoft::UI::Xaml::Controls::InfoBar& sender, const winrt::Microsoft::UI::Xaml::Controls::InfoBarClosedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Closed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Closing", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::InfoBar>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Closing([eai] (const winrt::Microsoft::UI::Xaml::Controls::InfoBar& sender, const winrt::Microsoft::UI::Xaml::Controls::InfoBarClosingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Closing(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ElementClearing", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::ItemsRepeater>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ElementClearing([eai] (const winrt::Microsoft::UI::Xaml::Controls::ItemsRepeater& sender, const winrt::Microsoft::UI::Xaml::Controls::ItemsRepeaterElementClearingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ElementClearing(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ElementIndexChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::ItemsRepeater>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ElementIndexChanged([eai] (const winrt::Microsoft::UI::Xaml::Controls::ItemsRepeater& sender, const winrt::Microsoft::UI::Xaml::Controls::ItemsRepeaterElementIndexChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ElementIndexChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ElementPrepared", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::ItemsRepeater>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ElementPrepared([eai] (const winrt::Microsoft::UI::Xaml::Controls::ItemsRepeater& sender, const winrt::Microsoft::UI::Xaml::Controls::ItemsRepeaterElementPreparedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ElementPrepared(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DisplayModeChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DisplayModeChanged([eai] (const winrt::Microsoft::UI::Xaml::Controls::NavigationView& sender, const winrt::Microsoft::UI::Xaml::Controls::NavigationViewDisplayModeChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DisplayModeChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ItemInvoked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ItemInvoked([eai] (const winrt::Microsoft::UI::Xaml::Controls::NavigationView& sender, const winrt::Microsoft::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ItemInvoked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SelectionChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SelectionChanged([eai] (const winrt::Microsoft::UI::Xaml::Controls::NavigationView& sender, const winrt::Microsoft::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SelectionChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"BackRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.BackRequested([eai] (const winrt::Microsoft::UI::Xaml::Controls::NavigationView& sender, const winrt::Microsoft::UI::Xaml::Controls::NavigationViewBackRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.BackRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Collapsed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Collapsed([eai] (const winrt::Microsoft::UI::Xaml::Controls::NavigationView& sender, const winrt::Microsoft::UI::Xaml::Controls::NavigationViewItemCollapsedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Collapsed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Expanding", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Expanding([eai] (const winrt::Microsoft::UI::Xaml::Controls::NavigationView& sender, const winrt::Microsoft::UI::Xaml::Controls::NavigationViewItemExpandingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Expanding(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PaneClosed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PaneClosed([eai] (const winrt::Microsoft::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PaneClosed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PaneClosing", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PaneClosing([eai] (const winrt::Microsoft::UI::Xaml::Controls::NavigationView& sender, const winrt::Microsoft::UI::Xaml::Controls::NavigationViewPaneClosingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PaneClosing(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PaneOpened", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PaneOpened([eai] (const winrt::Microsoft::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PaneOpened(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PaneOpening", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PaneOpening([eai] (const winrt::Microsoft::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PaneOpening(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ValueChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::NumberBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ValueChanged([eai] (const winrt::Microsoft::UI::Xaml::Controls::NumberBox& sender, const winrt::Microsoft::UI::Xaml::Controls::NumberBoxValueChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ValueChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SelectedIndexChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::PipsPager>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SelectedIndexChanged([eai] (const winrt::Microsoft::UI::Xaml::Controls::PipsPager& sender, const winrt::Microsoft::UI::Xaml::Controls::PipsPagerSelectedIndexChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SelectedIndexChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ColorChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::Primitives::ColorSpectrum>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ColorChanged([eai] (const winrt::Microsoft::UI::Xaml::Controls::Primitives::ColorSpectrum& sender, const winrt::Microsoft::UI::Xaml::Controls::ColorChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ColorChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SelectionChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::RadioButtons>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SelectionChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SelectionChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ValueChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::RatingControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ValueChanged([eai] (const winrt::Microsoft::UI::Xaml::Controls::RatingControl& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ValueChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"RefreshRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::RefreshContainer>(eai.obj, isWrapped)) {
      if (!token) {
        return c.RefreshRequested([eai] (const winrt::Microsoft::UI::Xaml::Controls::RefreshContainer& sender, const winrt::Microsoft::UI::Xaml::Controls::RefreshRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.RefreshRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"RefreshRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::RefreshVisualizer>(eai.obj, isWrapped)) {
      if (!token) {
        return c.RefreshRequested([eai] (const winrt::Microsoft::UI::Xaml::Controls::RefreshVisualizer& sender, const winrt::Microsoft::UI::Xaml::Controls::RefreshRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.RefreshRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"RefreshStateChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::RefreshVisualizer>(eai.obj, isWrapped)) {
      if (!token) {
        return c.RefreshStateChanged([eai] (const winrt::Microsoft::UI::Xaml::Controls::RefreshVisualizer& sender, const winrt::Microsoft::UI::Xaml::Controls::RefreshStateChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.RefreshStateChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Click", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::SplitButton>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Click([eai] (const winrt::Microsoft::UI::Xaml::Controls::SplitButton& sender, const winrt::Microsoft::UI::Xaml::Controls::SplitButtonClickEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Click(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"AddTabButtonClick", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TabView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.AddTabButtonClick([eai] (const winrt::Microsoft::UI::Xaml::Controls::TabView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.AddTabButtonClick(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SelectionChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TabView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SelectionChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SelectionChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TabCloseRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TabView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TabCloseRequested([eai] (const winrt::Microsoft::UI::Xaml::Controls::TabView& sender, const winrt::Microsoft::UI::Xaml::Controls::TabViewTabCloseRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TabCloseRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TabDragCompleted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TabView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TabDragCompleted([eai] (const winrt::Microsoft::UI::Xaml::Controls::TabView& sender, const winrt::Microsoft::UI::Xaml::Controls::TabViewTabDragCompletedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TabDragCompleted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TabDragStarting", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TabView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TabDragStarting([eai] (const winrt::Microsoft::UI::Xaml::Controls::TabView& sender, const winrt::Microsoft::UI::Xaml::Controls::TabViewTabDragStartingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TabDragStarting(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TabDroppedOutside", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TabView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TabDroppedOutside([eai] (const winrt::Microsoft::UI::Xaml::Controls::TabView& sender, const winrt::Microsoft::UI::Xaml::Controls::TabViewTabDroppedOutsideEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TabDroppedOutside(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TabItemsChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TabView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TabItemsChanged([eai] (const winrt::Microsoft::UI::Xaml::Controls::TabView& sender, const winrt::Windows::Foundation::Collections::IVectorChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TabItemsChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TabStripDragOver", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TabView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TabStripDragOver([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TabStripDragOver(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TabStripDrop", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TabView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TabStripDrop([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TabStripDrop(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CloseRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TabViewItem>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CloseRequested([eai] (const winrt::Microsoft::UI::Xaml::Controls::TabViewItem& sender, const winrt::Microsoft::UI::Xaml::Controls::TabViewTabCloseRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CloseRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ActionButtonClick", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TeachingTip>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ActionButtonClick([eai] (const winrt::Microsoft::UI::Xaml::Controls::TeachingTip& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ActionButtonClick(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CloseButtonClick", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TeachingTip>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CloseButtonClick([eai] (const winrt::Microsoft::UI::Xaml::Controls::TeachingTip& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CloseButtonClick(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Closed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TeachingTip>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Closed([eai] (const winrt::Microsoft::UI::Xaml::Controls::TeachingTip& sender, const winrt::Microsoft::UI::Xaml::Controls::TeachingTipClosedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Closed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Closing", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TeachingTip>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Closing([eai] (const winrt::Microsoft::UI::Xaml::Controls::TeachingTip& sender, const winrt::Microsoft::UI::Xaml::Controls::TeachingTipClosingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Closing(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"IsCheckedChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::ToggleSplitButton>(eai.obj, isWrapped)) {
      if (!token) {
        return c.IsCheckedChanged([eai] (const winrt::Microsoft::UI::Xaml::Controls::ToggleSplitButton& sender, const winrt::Microsoft::UI::Xaml::Controls::ToggleSplitButtonIsCheckedChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.IsCheckedChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Collapsed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TreeView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Collapsed([eai] (const winrt::Microsoft::UI::Xaml::Controls::TreeView& sender, const winrt::Microsoft::UI::Xaml::Controls::TreeViewCollapsedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Collapsed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Expanding", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TreeView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Expanding([eai] (const winrt::Microsoft::UI::Xaml::Controls::TreeView& sender, const winrt::Microsoft::UI::Xaml::Controls::TreeViewExpandingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Expanding(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ItemInvoked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TreeView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ItemInvoked([eai] (const winrt::Microsoft::UI::Xaml::Controls::TreeView& sender, const winrt::Microsoft::UI::Xaml::Controls::TreeViewItemInvokedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ItemInvoked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DragItemsCompleted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TreeView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DragItemsCompleted([eai] (const winrt::Microsoft::UI::Xaml::Controls::TreeView& sender, const winrt::Microsoft::UI::Xaml::Controls::TreeViewDragItemsCompletedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DragItemsCompleted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DragItemsStarting", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TreeView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DragItemsStarting([eai] (const winrt::Microsoft::UI::Xaml::Controls::TreeView& sender, const winrt::Microsoft::UI::Xaml::Controls::TreeViewDragItemsStartingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DragItemsStarting(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ModeChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::TwoPaneView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ModeChanged([eai] (const winrt::Microsoft::UI::Xaml::Controls::TwoPaneView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ModeChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CoreProcessFailed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::WebView2>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CoreProcessFailed([eai] (const winrt::Microsoft::UI::Xaml::Controls::WebView2& sender, const winrt::Microsoft::Web::WebView2::Core::CoreWebView2ProcessFailedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CoreProcessFailed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CoreWebView2Initialized", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::WebView2>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CoreWebView2Initialized([eai] (const winrt::Microsoft::UI::Xaml::Controls::WebView2& sender, const winrt::Microsoft::UI::Xaml::Controls::CoreWebView2InitializedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CoreWebView2Initialized(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"NavigationCompleted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::WebView2>(eai.obj, isWrapped)) {
      if (!token) {
        return c.NavigationCompleted([eai] (const winrt::Microsoft::UI::Xaml::Controls::WebView2& sender, const winrt::Microsoft::Web::WebView2::Core::CoreWebView2NavigationCompletedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.NavigationCompleted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"NavigationStarting", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::WebView2>(eai.obj, isWrapped)) {
      if (!token) {
        return c.NavigationStarting([eai] (const winrt::Microsoft::UI::Xaml::Controls::WebView2& sender, const winrt::Microsoft::Web::WebView2::Core::CoreWebView2NavigationStartingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.NavigationStarting(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"WebMessageReceived", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Microsoft::UI::Xaml::Controls::WebView2>(eai.obj, isWrapped)) {
      if (!token) {
        return c.WebMessageReceived([eai] (const winrt::Microsoft::UI::Xaml::Controls::WebView2& sender, const winrt::Microsoft::Web::WebView2::Core::CoreWebView2WebMessageReceivedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.WebMessageReceived(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DoubleTapped", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DoubleTapped([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DoubleTapped(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DragEnter", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DragEnter([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DragEnter(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DragLeave", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DragLeave([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DragLeave(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DragOver", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DragOver([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DragOver(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Drop", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Drop([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DragEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Drop(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"GotFocus", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.GotFocus([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.GotFocus(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Holding", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Holding([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::HoldingRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Holding(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"LostFocus", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.LostFocus([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.LostFocus(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ManipulationCompleted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ManipulationCompleted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ManipulationCompleted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ManipulationDelta", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ManipulationDelta([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ManipulationDelta(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ManipulationInertiaStarting", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ManipulationInertiaStarting([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ManipulationInertiaStarting(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ManipulationStarted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ManipulationStarted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ManipulationStarted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ManipulationStarting", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ManipulationStarting([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ManipulationStarting(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PointerCanceled", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PointerCanceled([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PointerCanceled(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PointerCaptureLost", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PointerCaptureLost([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PointerCaptureLost(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PointerEntered", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PointerEntered([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PointerEntered(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PointerExited", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PointerExited([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PointerExited(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PointerMoved", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PointerMoved([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PointerMoved(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PointerPressed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PointerPressed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PointerPressed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PointerReleased", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PointerReleased([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PointerReleased(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PointerWheelChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PointerWheelChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PointerWheelChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"RightTapped", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.RightTapped([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::RightTappedRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.RightTapped(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Tapped", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Tapped([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Tapped(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DragStarting", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DragStarting([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::DragStartingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DragStarting(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DropCompleted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DropCompleted([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::DropCompletedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DropCompleted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"AccessKeyDisplayDismissed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.AccessKeyDisplayDismissed([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.AccessKeyDisplayDismissed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"AccessKeyDisplayRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.AccessKeyDisplayRequested([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.AccessKeyDisplayRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"AccessKeyInvoked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.AccessKeyInvoked([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.AccessKeyInvoked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ContextCanceled", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ContextCanceled([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ContextCanceled(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ContextRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ContextRequested([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ContextRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"GettingFocus", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.GettingFocus([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.GettingFocus(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"LosingFocus", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.LosingFocus([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.LosingFocus(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"NoFocusCandidateFound", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.NoFocusCandidateFound([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.NoFocusCandidateFound(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CharacterReceived", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CharacterReceived([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CharacterReceived(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PreviewKeyDown", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PreviewKeyDown([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PreviewKeyDown(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PreviewKeyUp", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PreviewKeyUp([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PreviewKeyUp(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ProcessKeyboardAccelerators", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ProcessKeyboardAccelerators([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ProcessKeyboardAccelerators(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"BringIntoViewRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::UIElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.BringIntoViewRequested([eai] (const winrt::Windows::UI::Xaml::UIElement& sender, const winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.BringIntoViewRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"LayoutUpdated", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.LayoutUpdated([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.LayoutUpdated(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Loaded", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Loaded([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Loaded(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SizeChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SizeChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::SizeChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SizeChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Unloaded", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Unloaded([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Unloaded(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DataContextChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DataContextChanged([eai] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::UI::Xaml::DataContextChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DataContextChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Loading", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Loading([eai] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Loading(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ActualThemeChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ActualThemeChanged([eai] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ActualThemeChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"EffectiveViewportChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::FrameworkElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.EffectiveViewportChanged([eai] (const winrt::Windows::UI::Xaml::FrameworkElement& sender, const winrt::Windows::UI::Xaml::EffectiveViewportChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.EffectiveViewportChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"IsEnabledChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Control>(eai.obj, isWrapped)) {
      if (!token) {
        return c.IsEnabledChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.IsEnabledChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"FocusDisengaged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Control>(eai.obj, isWrapped)) {
      if (!token) {
        return c.FocusDisengaged([eai] (const winrt::Windows::UI::Xaml::Controls::Control& sender, const winrt::Windows::UI::Xaml::Controls::FocusDisengagedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.FocusDisengaged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"FocusEngaged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Control>(eai.obj, isWrapped)) {
      if (!token) {
        return c.FocusEngaged([eai] (const winrt::Windows::UI::Xaml::Controls::Control& sender, const winrt::Windows::UI::Xaml::Controls::FocusEngagedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.FocusEngaged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Closed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AppBar>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Closed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Closed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Opened", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AppBar>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Opened([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Opened(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Closing", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AppBar>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Closing([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Closing(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Opening", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AppBar>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Opening([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Opening(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Click", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Click([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Click(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Checked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Checked([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Checked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Indeterminate", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Indeterminate([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Indeterminate(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Unchecked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Unchecked([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Unchecked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SuggestionChosen", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SuggestionChosen([eai] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxSuggestionChosenEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SuggestionChosen(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TextChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TextChanged([eai] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxTextChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TextChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"QuerySubmitted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.QuerySubmitted([eai] (const winrt::Windows::UI::Xaml::Controls::AutoSuggestBox& sender, const winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.QuerySubmitted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CalendarViewDayItemChanging", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CalendarViewDayItemChanging([eai] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CalendarViewDayItemChanging(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Closed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Closed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Closed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DateChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DateChanged([eai] (const winrt::Windows::UI::Xaml::Controls::CalendarDatePicker& sender, const winrt::Windows::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DateChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Opened", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Opened([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Opened(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CalendarViewDayItemChanging", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CalendarViewDayItemChanging([eai] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CalendarViewDayItemChanging(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SelectedDatesChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CalendarView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SelectedDatesChanged([eai] (const winrt::Windows::UI::Xaml::Controls::CalendarView& sender, const winrt::Windows::UI::Xaml::Controls::CalendarViewSelectedDatesChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SelectedDatesChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ColorChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ColorPicker>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ColorChanged([eai] (const winrt::Windows::UI::Xaml::Controls::ColorPicker& sender, const winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ColorChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SelectionChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Selector>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SelectionChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SelectionChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DropDownClosed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ComboBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DropDownClosed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DropDownClosed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DropDownOpened", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ComboBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DropDownOpened([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DropDownOpened(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TextSubmitted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ComboBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TextSubmitted([eai] (const winrt::Windows::UI::Xaml::Controls::ComboBox& sender, const winrt::Windows::UI::Xaml::Controls::ComboBoxTextSubmittedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TextSubmitted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DynamicOverflowItemsChanging", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::CommandBar>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DynamicOverflowItemsChanging([eai] (const winrt::Windows::UI::Xaml::Controls::CommandBar& sender, const winrt::Windows::UI::Xaml::Controls::DynamicOverflowItemsChangingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DynamicOverflowItemsChanging(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Closed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Closed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Closed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Opened", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Opened([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Opened(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Opening", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Opening([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Opening(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Closing", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Closing([eai] (const winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Closing(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Closed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Closed([eai] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Closed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Closing", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Closing([eai] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogClosingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Closing(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Opened", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Opened([eai] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogOpenedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Opened(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PrimaryButtonClick", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PrimaryButtonClick([eai] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PrimaryButtonClick(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SecondaryButtonClick", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SecondaryButtonClick([eai] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SecondaryButtonClick(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CloseButtonClick", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ContentDialog>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CloseButtonClick([eai] (const winrt::Windows::UI::Xaml::Controls::ContentDialog& sender, const winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CloseButtonClick(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DateChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::DatePicker>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DateChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::DatePickerValueChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DateChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SelectedDateChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::DatePicker>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SelectedDateChanged([eai] (const winrt::Windows::UI::Xaml::Controls::DatePicker& sender, const winrt::Windows::UI::Xaml::Controls::DatePickerSelectedValueChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SelectedDateChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DatePicked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::DatePickerFlyout>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DatePicked([eai] (const winrt::Windows::UI::Xaml::Controls::DatePickerFlyout& sender, const winrt::Windows::UI::Xaml::Controls::DatePickedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DatePicked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Navigated", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Frame>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Navigated([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Navigated(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Navigating", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Frame>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Navigating([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Navigating(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"NavigationFailed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Frame>(eai.obj, isWrapped)) {
      if (!token) {
        return c.NavigationFailed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.NavigationFailed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"NavigationStopped", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Frame>(eai.obj, isWrapped)) {
      if (!token) {
        return c.NavigationStopped([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.NavigationStopped(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DragItemsStarting", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DragItemsStarting([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DragItemsStarting(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ItemClick", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ItemClick([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ItemClickEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ItemClick(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ContainerContentChanging", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ContainerContentChanging([eai] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ContainerContentChanging(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ChoosingGroupHeaderContainer", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ChoosingGroupHeaderContainer([eai] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ChoosingGroupHeaderContainerEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ChoosingGroupHeaderContainer(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ChoosingItemContainer", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ChoosingItemContainer([eai] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::ChoosingItemContainerEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ChoosingItemContainer(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DragItemsCompleted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListViewBase>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DragItemsCompleted([eai] (const winrt::Windows::UI::Xaml::Controls::ListViewBase& sender, const winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DragItemsCompleted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Closed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::HandwritingView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Closed([eai] (const winrt::Windows::UI::Xaml::Controls::HandwritingView& sender, const winrt::Windows::UI::Xaml::Controls::HandwritingPanelClosedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Closed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Opened", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::HandwritingView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Opened([eai] (const winrt::Windows::UI::Xaml::Controls::HandwritingView& sender, const winrt::Windows::UI::Xaml::Controls::HandwritingPanelOpenedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Opened(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SectionHeaderClick", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Hub>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SectionHeaderClick([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::HubSectionHeaderClickEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SectionHeaderClick(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SectionsInViewChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Hub>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SectionsInViewChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SectionsInViewChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SectionsInViewChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ImageFailed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Image>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ImageFailed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ImageFailed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ImageOpened", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Image>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ImageOpened([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ImageOpened(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ActiveToolChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbar>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ActiveToolChanged([eai] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ActiveToolChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"EraseAllClicked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbar>(eai.obj, isWrapped)) {
      if (!token) {
        return c.EraseAllClicked([eai] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.EraseAllClicked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"InkDrawingAttributesChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbar>(eai.obj, isWrapped)) {
      if (!token) {
        return c.InkDrawingAttributesChanged([eai] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.InkDrawingAttributesChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"IsRulerButtonCheckedChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbar>(eai.obj, isWrapped)) {
      if (!token) {
        return c.IsRulerButtonCheckedChanged([eai] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.IsRulerButtonCheckedChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"IsStencilButtonCheckedChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbar>(eai.obj, isWrapped)) {
      if (!token) {
        return c.IsStencilButtonCheckedChanged([eai] (const winrt::Windows::UI::Xaml::Controls::InkToolbar& sender, const winrt::Windows::UI::Xaml::Controls::InkToolbarIsStencilButtonCheckedChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.IsStencilButtonCheckedChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Checked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Checked([eai] (const winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Checked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Unchecked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Unchecked([eai] (const winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Unchecked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"HorizontalSnapPointsChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ItemsPresenter>(eai.obj, isWrapped)) {
      if (!token) {
        return c.HorizontalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.HorizontalSnapPointsChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"VerticalSnapPointsChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ItemsPresenter>(eai.obj, isWrapped)) {
      if (!token) {
        return c.VerticalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.VerticalSnapPointsChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ItemsPicked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ListPickerFlyout>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ItemsPicked([eai] (const winrt::Windows::UI::Xaml::Controls::ListPickerFlyout& sender, const winrt::Windows::UI::Xaml::Controls::ItemsPickedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ItemsPicked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CenterChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CenterChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CenterChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"HeadingChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.HeadingChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.HeadingChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"LoadingStatusChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.LoadingStatusChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.LoadingStatusChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"MapDoubleTapped", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.MapDoubleTapped([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.MapDoubleTapped(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"MapHolding", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.MapHolding([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.MapHolding(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"MapTapped", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.MapTapped([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.MapTapped(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PitchChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PitchChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PitchChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TransformOriginChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TransformOriginChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TransformOriginChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ZoomLevelChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ZoomLevelChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ZoomLevelChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ActualCameraChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ActualCameraChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ActualCameraChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ActualCameraChanging", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ActualCameraChanging([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ActualCameraChanging(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CustomExperienceChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CustomExperienceChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CustomExperienceChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"MapElementClick", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.MapElementClick([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.MapElementClick(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"MapElementPointerEntered", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.MapElementPointerEntered([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.MapElementPointerEntered(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"MapElementPointerExited", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.MapElementPointerExited([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.MapElementPointerExited(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TargetCameraChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TargetCameraChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TargetCameraChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"MapRightTapped", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.MapRightTapped([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.MapRightTapped(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"MapContextRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.MapContextRequested([eai] (const winrt::Windows::UI::Xaml::Controls::Maps::MapControl& sender, const winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.MapContextRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"BufferingProgressChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.BufferingProgressChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.BufferingProgressChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CurrentStateChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CurrentStateChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CurrentStateChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DownloadProgressChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DownloadProgressChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DownloadProgressChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"MarkerReached", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.MarkerReached([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.MarkerReached(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"MediaEnded", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.MediaEnded([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.MediaEnded(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"MediaFailed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.MediaFailed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.MediaFailed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"MediaOpened", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.MediaOpened([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.MediaOpened(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"RateChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.RateChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Media::RateChangedRoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.RateChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SeekCompleted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SeekCompleted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SeekCompleted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"VolumeChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.VolumeChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.VolumeChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PartialMediaFailureDetected", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PartialMediaFailureDetected([eai] (const winrt::Windows::UI::Xaml::Controls::MediaElement& sender, const winrt::Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PartialMediaFailureDetected(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ThumbnailRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ThumbnailRequested([eai] (const winrt::Windows::UI::Xaml::Controls::MediaTransportControls& sender, const winrt::Windows::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ThumbnailRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Click", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Click([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Click(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DisplayModeChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DisplayModeChanged([eai] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewDisplayModeChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DisplayModeChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ItemInvoked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ItemInvoked([eai] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ItemInvoked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SelectionChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SelectionChanged([eai] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SelectionChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"BackRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.BackRequested([eai] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewBackRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.BackRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PaneClosed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PaneClosed([eai] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PaneClosed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PaneClosing", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PaneClosing([eai] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::UI::Xaml::Controls::NavigationViewPaneClosingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PaneClosing(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PaneOpened", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PaneOpened([eai] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PaneOpened(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PaneOpening", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::NavigationView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PaneOpening([eai] (const winrt::Windows::UI::Xaml::Controls::NavigationView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PaneOpening(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ContextMenuOpening", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::PasswordBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ContextMenuOpening([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ContextMenuOpening(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PasswordChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::PasswordBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PasswordChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PasswordChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Paste", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::PasswordBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Paste([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Paste(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PasswordChanging", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::PasswordBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PasswordChanging([eai] (const winrt::Windows::UI::Xaml::Controls::PasswordBox& sender, const winrt::Windows::UI::Xaml::Controls::PasswordBoxPasswordChangingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PasswordChanging(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Confirmed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::PickerFlyout>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Confirmed([eai] (const winrt::Windows::UI::Xaml::Controls::PickerFlyout& sender, const winrt::Windows::UI::Xaml::Controls::PickerConfirmedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Confirmed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PivotItemLoaded", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Pivot>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PivotItemLoaded([eai] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PivotItemLoaded(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PivotItemLoading", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Pivot>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PivotItemLoading([eai] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PivotItemLoading(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PivotItemUnloaded", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Pivot>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PivotItemUnloaded([eai] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PivotItemUnloaded(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PivotItemUnloading", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Pivot>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PivotItemUnloading([eai] (const winrt::Windows::UI::Xaml::Controls::Pivot& sender, const winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PivotItemUnloading(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SelectionChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Pivot>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SelectionChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SelectionChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"HorizontalSnapPointsChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::CarouselPanel>(eai.obj, isWrapped)) {
      if (!token) {
        return c.HorizontalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.HorizontalSnapPointsChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"VerticalSnapPointsChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::CarouselPanel>(eai.obj, isWrapped)) {
      if (!token) {
        return c.VerticalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.VerticalSnapPointsChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ValueChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ValueChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ValueChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ColorChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ColorChanged([eai] (const winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum& sender, const winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ColorChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SelectionChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SelectionChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SelectionChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"HorizontalSnapPointsChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>(eai.obj, isWrapped)) {
      if (!token) {
        return c.HorizontalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.HorizontalSnapPointsChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"VerticalSnapPointsChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>(eai.obj, isWrapped)) {
      if (!token) {
        return c.VerticalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.VerticalSnapPointsChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"HorizontalSnapPointsChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>(eai.obj, isWrapped)) {
      if (!token) {
        return c.HorizontalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.HorizontalSnapPointsChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"VerticalSnapPointsChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>(eai.obj, isWrapped)) {
      if (!token) {
        return c.VerticalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.VerticalSnapPointsChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"HorizontalSnapPointsChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::PivotPanel>(eai.obj, isWrapped)) {
      if (!token) {
        return c.HorizontalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.HorizontalSnapPointsChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"VerticalSnapPointsChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::PivotPanel>(eai.obj, isWrapped)) {
      if (!token) {
        return c.VerticalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.VerticalSnapPointsChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Closed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Closed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Closed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Opened", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Opened([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Opened(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Scroll", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Scroll([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Scroll(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DragCompleted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DragCompleted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DragCompleted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DragDelta", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DragDelta([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DragDelta(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DragStarted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DragStarted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DragStarted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ValueChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RatingControl>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ValueChanged([eai] (const winrt::Windows::UI::Xaml::Controls::RatingControl& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ValueChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"RefreshRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RefreshContainer>(eai.obj, isWrapped)) {
      if (!token) {
        return c.RefreshRequested([eai] (const winrt::Windows::UI::Xaml::Controls::RefreshContainer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.RefreshRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"RefreshRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RefreshVisualizer>(eai.obj, isWrapped)) {
      if (!token) {
        return c.RefreshRequested([eai] (const winrt::Windows::UI::Xaml::Controls::RefreshVisualizer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.RefreshRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"RefreshStateChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RefreshVisualizer>(eai.obj, isWrapped)) {
      if (!token) {
        return c.RefreshStateChanged([eai] (const winrt::Windows::UI::Xaml::Controls::RefreshVisualizer& sender, const winrt::Windows::UI::Xaml::Controls::RefreshStateChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.RefreshStateChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ContextMenuOpening", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ContextMenuOpening([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ContextMenuOpening(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SelectionChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SelectionChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SelectionChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TextChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TextChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TextChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Paste", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Paste([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Paste(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CandidateWindowBoundsChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CandidateWindowBoundsChanged([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CandidateWindowBoundsChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TextChanging", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TextChanging([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::RichEditBoxTextChangingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TextChanging(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TextCompositionChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TextCompositionChanged([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TextCompositionChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TextCompositionEnded", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TextCompositionEnded([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TextCompositionEnded(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TextCompositionStarted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TextCompositionStarted([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TextCompositionStarted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CopyingToClipboard", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CopyingToClipboard([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CopyingToClipboard(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CuttingToClipboard", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CuttingToClipboard([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CuttingToClipboard(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ContentLinkChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ContentLinkChanged([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::ContentLinkChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ContentLinkChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ContentLinkInvoked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ContentLinkInvoked([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ContentLinkInvoked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SelectionChanging", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichEditBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SelectionChanging([eai] (const winrt::Windows::UI::Xaml::Controls::RichEditBox& sender, const winrt::Windows::UI::Xaml::Controls::RichEditBoxSelectionChangingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SelectionChanging(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ContextMenuOpening", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichTextBlock>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ContextMenuOpening([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ContextMenuOpening(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SelectionChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichTextBlock>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SelectionChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SelectionChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"IsTextTrimmedChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichTextBlock>(eai.obj, isWrapped)) {
      if (!token) {
        return c.IsTextTrimmedChanged([eai] (const winrt::Windows::UI::Xaml::Controls::RichTextBlock& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.IsTextTrimmedChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"IsTextTrimmedChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow>(eai.obj, isWrapped)) {
      if (!token) {
        return c.IsTextTrimmedChanged([eai] (const winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.IsTextTrimmedChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ViewChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ScrollViewer>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ViewChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ScrollViewerViewChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ViewChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ViewChanging", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ScrollViewer>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ViewChanging([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ScrollViewerViewChangingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ViewChanging(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DirectManipulationCompleted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ScrollViewer>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DirectManipulationCompleted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DirectManipulationCompleted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DirectManipulationStarted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ScrollViewer>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DirectManipulationStarted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DirectManipulationStarted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"AnchorRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ScrollViewer>(eai.obj, isWrapped)) {
      if (!token) {
        return c.AnchorRequested([eai] (const winrt::Windows::UI::Xaml::Controls::ScrollViewer& sender, const winrt::Windows::UI::Xaml::Controls::AnchorRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.AnchorRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PrepareForFocusOnKeyboardInput", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SearchBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PrepareForFocusOnKeyboardInput([eai] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PrepareForFocusOnKeyboardInput(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"QueryChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SearchBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.QueryChanged([eai] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxQueryChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.QueryChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"QuerySubmitted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SearchBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.QuerySubmitted([eai] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxQuerySubmittedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.QuerySubmitted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ResultSuggestionChosen", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SearchBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ResultSuggestionChosen([eai] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxResultSuggestionChosenEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ResultSuggestionChosen(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SuggestionsRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SearchBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SuggestionsRequested([eai] (const winrt::Windows::UI::Xaml::Controls::SearchBox& sender, const winrt::Windows::UI::Xaml::Controls::SearchBoxSuggestionsRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SuggestionsRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ViewChangeCompleted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SemanticZoom>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ViewChangeCompleted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ViewChangeCompleted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ViewChangeStarted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SemanticZoom>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ViewChangeStarted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ViewChangeStarted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"BackClick", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SettingsFlyout>(eai.obj, isWrapped)) {
      if (!token) {
        return c.BackClick([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::BackClickEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.BackClick(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Click", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SplitButton>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Click([eai] (const winrt::Windows::UI::Xaml::Controls::SplitButton& sender, const winrt::Windows::UI::Xaml::Controls::SplitButtonClickEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Click(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PaneClosed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SplitView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PaneClosed([eai] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PaneClosed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PaneClosing", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SplitView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PaneClosing([eai] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::UI::Xaml::Controls::SplitViewPaneClosingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PaneClosing(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PaneOpened", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SplitView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PaneOpened([eai] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PaneOpened(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PaneOpening", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SplitView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PaneOpening([eai] (const winrt::Windows::UI::Xaml::Controls::SplitView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PaneOpening(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"HorizontalSnapPointsChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::StackPanel>(eai.obj, isWrapped)) {
      if (!token) {
        return c.HorizontalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.HorizontalSnapPointsChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"VerticalSnapPointsChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::StackPanel>(eai.obj, isWrapped)) {
      if (!token) {
        return c.VerticalSnapPointsChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.VerticalSnapPointsChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CompositionScaleChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::SwapChainPanel>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CompositionScaleChanged([eai] (const winrt::Windows::UI::Xaml::Controls::SwapChainPanel& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CompositionScaleChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ContextMenuOpening", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBlock>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ContextMenuOpening([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ContextMenuOpening(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SelectionChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBlock>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SelectionChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SelectionChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"IsTextTrimmedChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBlock>(eai.obj, isWrapped)) {
      if (!token) {
        return c.IsTextTrimmedChanged([eai] (const winrt::Windows::UI::Xaml::Controls::TextBlock& sender, const winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.IsTextTrimmedChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ContextMenuOpening", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ContextMenuOpening([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ContextMenuOpening(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SelectionChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SelectionChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SelectionChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TextChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TextChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TextChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Paste", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Paste([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Paste(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CandidateWindowBoundsChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CandidateWindowBoundsChanged([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CandidateWindowBoundsChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TextChanging", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TextChanging([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxTextChangingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TextChanging(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TextCompositionChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TextCompositionChanged([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TextCompositionChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TextCompositionEnded", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TextCompositionEnded([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TextCompositionEnded(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TextCompositionStarted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TextCompositionStarted([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TextCompositionStarted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"BeforeTextChanging", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.BeforeTextChanging([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxBeforeTextChangingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.BeforeTextChanging(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CopyingToClipboard", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CopyingToClipboard([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CopyingToClipboard(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CuttingToClipboard", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CuttingToClipboard([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CuttingToClipboard(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SelectionChanging", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TextBox>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SelectionChanging([eai] (const winrt::Windows::UI::Xaml::Controls::TextBox& sender, const winrt::Windows::UI::Xaml::Controls::TextBoxSelectionChangingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SelectionChanging(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TimeChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TimePicker>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TimeChanged([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::TimePickerValueChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TimeChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SelectedTimeChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TimePicker>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SelectedTimeChanged([eai] (const winrt::Windows::UI::Xaml::Controls::TimePicker& sender, const winrt::Windows::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SelectedTimeChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"TimePicked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TimePickerFlyout>(eai.obj, isWrapped)) {
      if (!token) {
        return c.TimePicked([eai] (const winrt::Windows::UI::Xaml::Controls::TimePickerFlyout& sender, const winrt::Windows::UI::Xaml::Controls::TimePickedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.TimePicked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"IsCheckedChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ToggleSplitButton>(eai.obj, isWrapped)) {
      if (!token) {
        return c.IsCheckedChanged([eai] (const winrt::Windows::UI::Xaml::Controls::ToggleSplitButton& sender, const winrt::Windows::UI::Xaml::Controls::ToggleSplitButtonIsCheckedChangedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.IsCheckedChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Toggled", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ToggleSwitch>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Toggled([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Toggled(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Closed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ToolTip>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Closed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Closed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Opened", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::ToolTip>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Opened([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Opened(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Collapsed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TreeView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Collapsed([eai] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewCollapsedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Collapsed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Expanding", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TreeView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Expanding([eai] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewExpandingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Expanding(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ItemInvoked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TreeView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ItemInvoked([eai] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewItemInvokedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ItemInvoked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DragItemsCompleted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TreeView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DragItemsCompleted([eai] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsCompletedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DragItemsCompleted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DragItemsStarting", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TreeView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DragItemsStarting([eai] (const winrt::Windows::UI::Xaml::Controls::TreeView& sender, const winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsStartingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DragItemsStarting(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ModeChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::TwoPaneView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ModeChanged([eai] (const winrt::Windows::UI::Xaml::Controls::TwoPaneView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ModeChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"CleanUpVirtualizedItemEvent", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::VirtualizingStackPanel>(eai.obj, isWrapped)) {
      if (!token) {
        return c.CleanUpVirtualizedItemEvent([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.CleanUpVirtualizedItemEvent(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"LoadCompleted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.LoadCompleted([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.LoadCompleted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"NavigationFailed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.NavigationFailed([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationFailedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.NavigationFailed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ScriptNotify", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ScriptNotify([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::Controls::NotifyEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ScriptNotify(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ContentLoading", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ContentLoading([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewContentLoadingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ContentLoading(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"DOMContentLoaded", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.DOMContentLoaded([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewDOMContentLoadedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.DOMContentLoaded(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"FrameContentLoading", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.FrameContentLoading([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewContentLoadingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.FrameContentLoading(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"FrameDOMContentLoaded", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.FrameDOMContentLoaded([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewDOMContentLoadedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.FrameDOMContentLoaded(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"FrameNavigationCompleted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.FrameNavigationCompleted([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.FrameNavigationCompleted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"FrameNavigationStarting", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.FrameNavigationStarting([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.FrameNavigationStarting(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"LongRunningScriptDetected", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.LongRunningScriptDetected([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewLongRunningScriptDetectedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.LongRunningScriptDetected(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"NavigationCompleted", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.NavigationCompleted([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.NavigationCompleted(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"NavigationStarting", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.NavigationStarting([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.NavigationStarting(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"UnsafeContentWarningDisplaying", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.UnsafeContentWarningDisplaying([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.UnsafeContentWarningDisplaying(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"UnviewableContentIdentified", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.UnviewableContentIdentified([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewUnviewableContentIdentifiedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.UnviewableContentIdentified(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ContainsFullScreenElementChanged", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.ContainsFullScreenElementChanged([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::Foundation::IInspectable& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.ContainsFullScreenElementChanged(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"NewWindowRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.NewWindowRequested([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewNewWindowRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.NewWindowRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"PermissionRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.PermissionRequested([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewPermissionRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.PermissionRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"UnsupportedUriSchemeIdentified", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.UnsupportedUriSchemeIdentified([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewUnsupportedUriSchemeIdentifiedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.UnsupportedUriSchemeIdentified(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"SeparateProcessLost", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.SeparateProcessLost([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewSeparateProcessLostEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.SeparateProcessLost(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"WebResourceRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Controls::WebView>(eai.obj, isWrapped)) {
      if (!token) {
        return c.WebResourceRequested([eai] (const winrt::Windows::UI::Xaml::Controls::WebView& sender, const winrt::Windows::UI::Xaml::Controls::WebViewWebResourceRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.WebResourceRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"AccessKeyDisplayDismissed", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Documents::TextElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.AccessKeyDisplayDismissed([eai] (const winrt::Windows::UI::Xaml::Documents::TextElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.AccessKeyDisplayDismissed(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"AccessKeyDisplayRequested", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Documents::TextElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.AccessKeyDisplayRequested([eai] (const winrt::Windows::UI::Xaml::Documents::TextElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.AccessKeyDisplayRequested(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"AccessKeyInvoked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Documents::TextElement>(eai.obj, isWrapped)) {
      if (!token) {
        return c.AccessKeyInvoked([eai] (const winrt::Windows::UI::Xaml::Documents::TextElement& sender, const winrt::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.AccessKeyInvoked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"GotFocus", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Documents::ContentLink>(eai.obj, isWrapped)) {
      if (!token) {
        return c.GotFocus([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.GotFocus(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Invoked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Documents::ContentLink>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Invoked([eai] (const winrt::Windows::UI::Xaml::Documents::ContentLink& sender, const winrt::Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Invoked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"LostFocus", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Documents::ContentLink>(eai.obj, isWrapped)) {
      if (!token) {
        return c.LostFocus([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.LostFocus(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Click", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Documents::Hyperlink>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Click([eai] (const winrt::Windows::UI::Xaml::Documents::Hyperlink& sender, const winrt::Windows::UI::Xaml::Documents::HyperlinkClickEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Click(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"GotFocus", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Documents::Hyperlink>(eai.obj, isWrapped)) {
      if (!token) {
        return c.GotFocus([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.GotFocus(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"LostFocus", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Documents::Hyperlink>(eai.obj, isWrapped)) {
      if (!token) {
        return c.LostFocus([eai] (const winrt::Windows::Foundation::IInspectable& sender, const winrt::Windows::UI::Xaml::RoutedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.LostFocus(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"Invoked", [](const EventAttachInfo eai, bool isWrapped, winrt::event_token token) noexcept {
    if (const auto& c = DoTheTypeChecking<winrt::Windows::UI::Xaml::Input::KeyboardAccelerator>(eai.obj, isWrapped)) {
      if (!token) {
        return c.Invoked([eai] (const winrt::Windows::UI::Xaml::Input::KeyboardAccelerator& sender, const winrt::Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs& args) noexcept {
            DispatchTheEvent(eai, sender, args);
        });
      } else {
        c.Invoked(token);
        return winrt::event_token{ -1 };
      }
    }
    return winrt::event_token{0};
  } },
  {"ContentDialogClosed", nullptr /* synthetic event */},
};

static_assert(ARRAYSIZE(EventInfo::xamlEventMap) == 336);

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

void XamlMetadata::PopulateNativeEvents(winrt::Windows::Foundation::Collections::IMap<winrt::hstring, ViewManagerPropertyType>& nativeProps) const {
    for (const auto& evtInfo : EventInfo::xamlEventMap) {
        auto jsEvtName = L"on" + winrt::to_hstring(evtInfo.name);
        nativeProps.Insert(jsEvtName, ViewManagerPropertyType::Boolean);
    }
}

