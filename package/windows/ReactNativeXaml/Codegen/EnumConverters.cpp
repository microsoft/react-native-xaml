
#include "pch.h"
#include "XamlMetadata.h"
#include "Crc32Str.h"

/*************************************************************
THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT MODIFY MANUALLY
**************************************************************/

#include <winrt/Windows.UI.Xaml.h>
#include <winrt/Windows.UI.Text.h>
#include <winrt/Windows.UI.Xaml.Input.h>
#include <winrt/Windows.UI.Xaml.Controls.h>
#include <winrt/Windows.Globalization.h>
#include <winrt/Windows.UI.Xaml.Media.h>
#include <winrt/Windows.UI.Xaml.Controls.Primitives.h>
#include <winrt/Windows.UI.Xaml.Controls.Maps.h>



  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::VerticalAlignment>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("top"): { return winrt::box_value(winrt::Windows::UI::Xaml::VerticalAlignment::Top); }
      case COMPILE_TIME_CRC32_STR("center"): { return winrt::box_value(winrt::Windows::UI::Xaml::VerticalAlignment::Center); }
      case COMPILE_TIME_CRC32_STR("bottom"): { return winrt::box_value(winrt::Windows::UI::Xaml::VerticalAlignment::Bottom); }
      case COMPILE_TIME_CRC32_STR("stretch"): { return winrt::box_value(winrt::Windows::UI::Xaml::VerticalAlignment::Stretch); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::HorizontalAlignment>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("left"): { return winrt::box_value(winrt::Windows::UI::Xaml::HorizontalAlignment::Left); }
      case COMPILE_TIME_CRC32_STR("center"): { return winrt::box_value(winrt::Windows::UI::Xaml::HorizontalAlignment::Center); }
      case COMPILE_TIME_CRC32_STR("right"): { return winrt::box_value(winrt::Windows::UI::Xaml::HorizontalAlignment::Right); }
      case COMPILE_TIME_CRC32_STR("stretch"): { return winrt::box_value(winrt::Windows::UI::Xaml::HorizontalAlignment::Stretch); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::FlowDirection>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("leftToRight"): { return winrt::box_value(winrt::Windows::UI::Xaml::FlowDirection::LeftToRight); }
      case COMPILE_TIME_CRC32_STR("rightToLeft"): { return winrt::box_value(winrt::Windows::UI::Xaml::FlowDirection::RightToLeft); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::ElementTheme>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("default"): { return winrt::box_value(winrt::Windows::UI::Xaml::ElementTheme::Default); }
      case COMPILE_TIME_CRC32_STR("light"): { return winrt::box_value(winrt::Windows::UI::Xaml::ElementTheme::Light); }
      case COMPILE_TIME_CRC32_STR("dark"): { return winrt::box_value(winrt::Windows::UI::Xaml::ElementTheme::Dark); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Text::FontStyle>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("normal"): { return winrt::box_value(winrt::Windows::UI::Text::FontStyle::Normal); }
      case COMPILE_TIME_CRC32_STR("oblique"): { return winrt::box_value(winrt::Windows::UI::Text::FontStyle::Oblique); }
      case COMPILE_TIME_CRC32_STR("italic"): { return winrt::box_value(winrt::Windows::UI::Text::FontStyle::Italic); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Text::FontStretch>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("undefined"): { return winrt::box_value(winrt::Windows::UI::Text::FontStretch::Undefined); }
      case COMPILE_TIME_CRC32_STR("ultraCondensed"): { return winrt::box_value(winrt::Windows::UI::Text::FontStretch::UltraCondensed); }
      case COMPILE_TIME_CRC32_STR("extraCondensed"): { return winrt::box_value(winrt::Windows::UI::Text::FontStretch::ExtraCondensed); }
      case COMPILE_TIME_CRC32_STR("condensed"): { return winrt::box_value(winrt::Windows::UI::Text::FontStretch::Condensed); }
      case COMPILE_TIME_CRC32_STR("semiCondensed"): { return winrt::box_value(winrt::Windows::UI::Text::FontStretch::SemiCondensed); }
      case COMPILE_TIME_CRC32_STR("normal"): { return winrt::box_value(winrt::Windows::UI::Text::FontStretch::Normal); }
      case COMPILE_TIME_CRC32_STR("semiExpanded"): { return winrt::box_value(winrt::Windows::UI::Text::FontStretch::SemiExpanded); }
      case COMPILE_TIME_CRC32_STR("expanded"): { return winrt::box_value(winrt::Windows::UI::Text::FontStretch::Expanded); }
      case COMPILE_TIME_CRC32_STR("extraExpanded"): { return winrt::box_value(winrt::Windows::UI::Text::FontStretch::ExtraExpanded); }
      case COMPILE_TIME_CRC32_STR("ultraExpanded"): { return winrt::box_value(winrt::Windows::UI::Text::FontStretch::UltraExpanded); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Input::KeyboardNavigationMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("local"): { return winrt::box_value(winrt::Windows::UI::Xaml::Input::KeyboardNavigationMode::Local); }
      case COMPILE_TIME_CRC32_STR("cycle"): { return winrt::box_value(winrt::Windows::UI::Xaml::Input::KeyboardNavigationMode::Cycle); }
      case COMPILE_TIME_CRC32_STR("once"): { return winrt::box_value(winrt::Windows::UI::Xaml::Input::KeyboardNavigationMode::Once); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::RequiresPointer>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("never"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::RequiresPointer::Never); }
      case COMPILE_TIME_CRC32_STR("whenEngaged"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::RequiresPointer::WhenEngaged); }
      case COMPILE_TIME_CRC32_STR("whenFocused"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::RequiresPointer::WhenFocused); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::ElementSoundMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("default"): { return winrt::box_value(winrt::Windows::UI::Xaml::ElementSoundMode::Default); }
      case COMPILE_TIME_CRC32_STR("focusOnly"): { return winrt::box_value(winrt::Windows::UI::Xaml::ElementSoundMode::FocusOnly); }
      case COMPILE_TIME_CRC32_STR("off"): { return winrt::box_value(winrt::Windows::UI::Xaml::ElementSoundMode::Off); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::BackgroundSizing>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("innerBorderEdge"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::BackgroundSizing::InnerBorderEdge); }
      case COMPILE_TIME_CRC32_STR("outerBorderEdge"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::BackgroundSizing::OuterBorderEdge); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::AppBarClosedDisplayMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("compact"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::AppBarClosedDisplayMode::Compact); }
      case COMPILE_TIME_CRC32_STR("minimal"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::AppBarClosedDisplayMode::Minimal); }
      case COMPILE_TIME_CRC32_STR("hidden"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::AppBarClosedDisplayMode::Hidden); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::LightDismissOverlayMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("auto"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::LightDismissOverlayMode::Auto); }
      case COMPILE_TIME_CRC32_STR("on"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::LightDismissOverlayMode::On); }
      case COMPILE_TIME_CRC32_STR("off"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::LightDismissOverlayMode::Off); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ClickMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("release"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ClickMode::Release); }
      case COMPILE_TIME_CRC32_STR("press"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ClickMode::Press); }
      case COMPILE_TIME_CRC32_STR("hover"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ClickMode::Hover); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::CommandBarLabelPosition>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("default"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CommandBarLabelPosition::Default); }
      case COMPILE_TIME_CRC32_STR("collapsed"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CommandBarLabelPosition::Collapsed); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::Globalization::DayOfWeek>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("sunday"): { return winrt::box_value(winrt::Windows::Globalization::DayOfWeek::Sunday); }
      case COMPILE_TIME_CRC32_STR("monday"): { return winrt::box_value(winrt::Windows::Globalization::DayOfWeek::Monday); }
      case COMPILE_TIME_CRC32_STR("tuesday"): { return winrt::box_value(winrt::Windows::Globalization::DayOfWeek::Tuesday); }
      case COMPILE_TIME_CRC32_STR("wednesday"): { return winrt::box_value(winrt::Windows::Globalization::DayOfWeek::Wednesday); }
      case COMPILE_TIME_CRC32_STR("thursday"): { return winrt::box_value(winrt::Windows::Globalization::DayOfWeek::Thursday); }
      case COMPILE_TIME_CRC32_STR("friday"): { return winrt::box_value(winrt::Windows::Globalization::DayOfWeek::Friday); }
      case COMPILE_TIME_CRC32_STR("saturday"): { return winrt::box_value(winrt::Windows::Globalization::DayOfWeek::Saturday); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::CalendarViewDisplayMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("month"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CalendarViewDisplayMode::Month); }
      case COMPILE_TIME_CRC32_STR("year"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CalendarViewDisplayMode::Year); }
      case COMPILE_TIME_CRC32_STR("decade"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CalendarViewDisplayMode::Decade); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::CalendarViewSelectionMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CalendarViewSelectionMode::None); }
      case COMPILE_TIME_CRC32_STR("single"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CalendarViewSelectionMode::Single); }
      case COMPILE_TIME_CRC32_STR("multiple"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CalendarViewSelectionMode::Multiple); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::Stretch>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::Stretch::None); }
      case COMPILE_TIME_CRC32_STR("fill"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::Stretch::Fill); }
      case COMPILE_TIME_CRC32_STR("uniform"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::Stretch::Uniform); }
      case COMPILE_TIME_CRC32_STR("uniformToFill"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::Stretch::UniformToFill); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ColorSpectrumShape>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("box"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ColorSpectrumShape::Box); }
      case COMPILE_TIME_CRC32_STR("ring"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ColorSpectrumShape::Ring); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ColorSpectrumComponents>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("hueValue"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ColorSpectrumComponents::HueValue); }
      case COMPILE_TIME_CRC32_STR("valueHue"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ColorSpectrumComponents::ValueHue); }
      case COMPILE_TIME_CRC32_STR("hueSaturation"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ColorSpectrumComponents::HueSaturation); }
      case COMPILE_TIME_CRC32_STR("saturationHue"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ColorSpectrumComponents::SaturationHue); }
      case COMPILE_TIME_CRC32_STR("saturationValue"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ColorSpectrumComponents::SaturationValue); }
      case COMPILE_TIME_CRC32_STR("valueSaturation"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ColorSpectrumComponents::ValueSaturation); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ComboBoxSelectionChangedTrigger>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("committed"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ComboBoxSelectionChangedTrigger::Committed); }
      case COMPILE_TIME_CRC32_STR("always"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ComboBoxSelectionChangedTrigger::Always); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::CommandBarOverflowButtonVisibility>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("auto"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CommandBarOverflowButtonVisibility::Auto); }
      case COMPILE_TIME_CRC32_STR("visible"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CommandBarOverflowButtonVisibility::Visible); }
      case COMPILE_TIME_CRC32_STR("collapsed"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CommandBarOverflowButtonVisibility::Collapsed); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::CommandBarDefaultLabelPosition>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("bottom"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CommandBarDefaultLabelPosition::Bottom); }
      case COMPILE_TIME_CRC32_STR("right"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CommandBarDefaultLabelPosition::Right); }
      case COMPILE_TIME_CRC32_STR("collapsed"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CommandBarDefaultLabelPosition::Collapsed); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ContentDialogButton>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ContentDialogButton::None); }
      case COMPILE_TIME_CRC32_STR("primary"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ContentDialogButton::Primary); }
      case COMPILE_TIME_CRC32_STR("secondary"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ContentDialogButton::Secondary); }
      case COMPILE_TIME_CRC32_STR("close"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ContentDialogButton::Close); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::TextLineBounds>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("full"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextLineBounds::Full); }
      case COMPILE_TIME_CRC32_STR("trimToCapHeight"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextLineBounds::TrimToCapHeight); }
      case COMPILE_TIME_CRC32_STR("trimToBaseline"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextLineBounds::TrimToBaseline); }
      case COMPILE_TIME_CRC32_STR("tight"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextLineBounds::Tight); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::OpticalMarginAlignment>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { return winrt::box_value(winrt::Windows::UI::Xaml::OpticalMarginAlignment::None); }
      case COMPILE_TIME_CRC32_STR("trimSideBearings"): { return winrt::box_value(winrt::Windows::UI::Xaml::OpticalMarginAlignment::TrimSideBearings); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::TextWrapping>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("noWrap"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextWrapping::NoWrap); }
      case COMPILE_TIME_CRC32_STR("wrap"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextWrapping::Wrap); }
      case COMPILE_TIME_CRC32_STR("wrapWholeWords"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextWrapping::WrapWholeWords); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::LineStackingStrategy>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("maxHeight"): { return winrt::box_value(winrt::Windows::UI::Xaml::LineStackingStrategy::MaxHeight); }
      case COMPILE_TIME_CRC32_STR("blockLineHeight"): { return winrt::box_value(winrt::Windows::UI::Xaml::LineStackingStrategy::BlockLineHeight); }
      case COMPILE_TIME_CRC32_STR("baselineToBaseline"): { return winrt::box_value(winrt::Windows::UI::Xaml::LineStackingStrategy::BaselineToBaseline); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Orientation>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("vertical"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Orientation::Vertical); }
      case COMPILE_TIME_CRC32_STR("horizontal"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Orientation::Horizontal); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ListViewSelectionMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ListViewSelectionMode::None); }
      case COMPILE_TIME_CRC32_STR("single"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ListViewSelectionMode::Single); }
      case COMPILE_TIME_CRC32_STR("multiple"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ListViewSelectionMode::Multiple); }
      case COMPILE_TIME_CRC32_STR("extended"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ListViewSelectionMode::Extended); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::IncrementalLoadingTrigger>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::IncrementalLoadingTrigger::None); }
      case COMPILE_TIME_CRC32_STR("edge"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::IncrementalLoadingTrigger::Edge); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ListViewReorderMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("disabled"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ListViewReorderMode::Disabled); }
      case COMPILE_TIME_CRC32_STR("enabled"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ListViewReorderMode::Enabled); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::HandwritingPanelPlacementAlignment>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("auto"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::HandwritingPanelPlacementAlignment::Auto); }
      case COMPILE_TIME_CRC32_STR("topLeft"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::HandwritingPanelPlacementAlignment::TopLeft); }
      case COMPILE_TIME_CRC32_STR("topRight"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::HandwritingPanelPlacementAlignment::TopRight); }
      case COMPILE_TIME_CRC32_STR("bottomLeft"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::HandwritingPanelPlacementAlignment::BottomLeft); }
      case COMPILE_TIME_CRC32_STR("bottomRight"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::HandwritingPanelPlacementAlignment::BottomRight); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::InkToolbarInitialControls>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("all"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::InkToolbarInitialControls::All); }
      case COMPILE_TIME_CRC32_STR("none"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::InkToolbarInitialControls::None); }
      case COMPILE_TIME_CRC32_STR("pensOnly"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::InkToolbarInitialControls::PensOnly); }
      case COMPILE_TIME_CRC32_STR("allExceptPens"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::InkToolbarInitialControls::AllExceptPens); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::InkToolbarButtonFlyoutPlacement>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("auto"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::InkToolbarButtonFlyoutPlacement::Auto); }
      case COMPILE_TIME_CRC32_STR("top"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::InkToolbarButtonFlyoutPlacement::Top); }
      case COMPILE_TIME_CRC32_STR("bottom"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::InkToolbarButtonFlyoutPlacement::Bottom); }
      case COMPILE_TIME_CRC32_STR("left"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::InkToolbarButtonFlyoutPlacement::Left); }
      case COMPILE_TIME_CRC32_STR("right"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::InkToolbarButtonFlyoutPlacement::Right); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItemKind>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("simple"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItemKind::Simple); }
      case COMPILE_TIME_CRC32_STR("radio"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItemKind::Radio); }
      case COMPILE_TIME_CRC32_STR("check"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItemKind::Check); }
      case COMPILE_TIME_CRC32_STR("radioCheck"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItemKind::RadioCheck); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::InkToolbarStencilKind>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("ruler"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::InkToolbarStencilKind::Ruler); }
      case COMPILE_TIME_CRC32_STR("protractor"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::InkToolbarStencilKind::Protractor); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Primitives::GroupHeaderPlacement>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("top"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::GroupHeaderPlacement::Top); }
      case COMPILE_TIME_CRC32_STR("left"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::GroupHeaderPlacement::Left); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::SelectionMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("single"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::SelectionMode::Single); }
      case COMPILE_TIME_CRC32_STR("multiple"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::SelectionMode::Multiple); }
      case COMPILE_TIME_CRC32_STR("extended"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::SelectionMode::Extended); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Maps::MapWatermarkMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("automatic"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Maps::MapWatermarkMode::Automatic); }
      case COMPILE_TIME_CRC32_STR("on"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Maps::MapWatermarkMode::On); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Maps::MapColorScheme>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("light"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Maps::MapColorScheme::Light); }
      case COMPILE_TIME_CRC32_STR("dark"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Maps::MapColorScheme::Dark); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("auto"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode::Auto); }
      case COMPILE_TIME_CRC32_STR("disabled"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode::Disabled); }
      case COMPILE_TIME_CRC32_STR("gestureOnly"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode::GestureOnly); }
      case COMPILE_TIME_CRC32_STR("pointerAndKeyboard"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode::PointerAndKeyboard); }
      case COMPILE_TIME_CRC32_STR("controlOnly"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode::ControlOnly); }
      case COMPILE_TIME_CRC32_STR("gestureAndControl"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode::GestureAndControl); }
      case COMPILE_TIME_CRC32_STR("pointerKeyboardAndControl"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode::PointerKeyboardAndControl); }
      case COMPILE_TIME_CRC32_STR("pointerOnly"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode::PointerOnly); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("auto"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode::Auto); }
      case COMPILE_TIME_CRC32_STR("disabled"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode::Disabled); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Maps::MapProjection>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("webMercator"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Maps::MapProjection::WebMercator); }
      case COMPILE_TIME_CRC32_STR("globe"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Maps::MapProjection::Globe); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::Stereo3DVideoRenderMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("mono"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::Stereo3DVideoRenderMode::Mono); }
      case COMPILE_TIME_CRC32_STR("stereo"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::Stereo3DVideoRenderMode::Stereo); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::Stereo3DVideoPackingMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::Stereo3DVideoPackingMode::None); }
      case COMPILE_TIME_CRC32_STR("sideBySide"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::Stereo3DVideoPackingMode::SideBySide); }
      case COMPILE_TIME_CRC32_STR("topBottom"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::Stereo3DVideoPackingMode::TopBottom); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::AudioDeviceType>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("console"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::AudioDeviceType::Console); }
      case COMPILE_TIME_CRC32_STR("multimedia"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::AudioDeviceType::Multimedia); }
      case COMPILE_TIME_CRC32_STR("communications"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::AudioDeviceType::Communications); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::AudioCategory>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("other"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::AudioCategory::Other); }
      case COMPILE_TIME_CRC32_STR("foregroundOnlyMedia"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::AudioCategory::ForegroundOnlyMedia); }
      case COMPILE_TIME_CRC32_STR("backgroundCapableMedia"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::AudioCategory::BackgroundCapableMedia); }
      case COMPILE_TIME_CRC32_STR("communications"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::AudioCategory::Communications); }
      case COMPILE_TIME_CRC32_STR("alerts"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::AudioCategory::Alerts); }
      case COMPILE_TIME_CRC32_STR("soundEffects"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::AudioCategory::SoundEffects); }
      case COMPILE_TIME_CRC32_STR("gameEffects"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::AudioCategory::GameEffects); }
      case COMPILE_TIME_CRC32_STR("gameMedia"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::AudioCategory::GameMedia); }
      case COMPILE_TIME_CRC32_STR("gameChat"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::AudioCategory::GameChat); }
      case COMPILE_TIME_CRC32_STR("speech"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::AudioCategory::Speech); }
      case COMPILE_TIME_CRC32_STR("movie"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::AudioCategory::Movie); }
      case COMPILE_TIME_CRC32_STR("media"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::AudioCategory::Media); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::FastPlayFallbackBehaviour>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("skip"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::FastPlayFallbackBehaviour::Skip); }
      case COMPILE_TIME_CRC32_STR("hide"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::FastPlayFallbackBehaviour::Hide); }
      case COMPILE_TIME_CRC32_STR("disable"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::FastPlayFallbackBehaviour::Disable); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::NavigationViewBackButtonVisible>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("collapsed"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::NavigationViewBackButtonVisible::Collapsed); }
      case COMPILE_TIME_CRC32_STR("visible"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::NavigationViewBackButtonVisible::Visible); }
      case COMPILE_TIME_CRC32_STR("auto"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::NavigationViewBackButtonVisible::Auto); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::NavigationViewShoulderNavigationEnabled>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("whenSelectionFollowsFocus"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::NavigationViewShoulderNavigationEnabled::WhenSelectionFollowsFocus); }
      case COMPILE_TIME_CRC32_STR("always"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::NavigationViewShoulderNavigationEnabled::Always); }
      case COMPILE_TIME_CRC32_STR("never"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::NavigationViewShoulderNavigationEnabled::Never); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionFollowsFocus>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("disabled"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionFollowsFocus::Disabled); }
      case COMPILE_TIME_CRC32_STR("enabled"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionFollowsFocus::Enabled); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::NavigationViewPaneDisplayMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("auto"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::NavigationViewPaneDisplayMode::Auto); }
      case COMPILE_TIME_CRC32_STR("left"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::NavigationViewPaneDisplayMode::Left); }
      case COMPILE_TIME_CRC32_STR("top"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::NavigationViewPaneDisplayMode::Top); }
      case COMPILE_TIME_CRC32_STR("leftCompact"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::NavigationViewPaneDisplayMode::LeftCompact); }
      case COMPILE_TIME_CRC32_STR("leftMinimal"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::NavigationViewPaneDisplayMode::LeftMinimal); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::NavigationViewOverflowLabelMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("moreLabel"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::NavigationViewOverflowLabelMode::MoreLabel); }
      case COMPILE_TIME_CRC32_STR("noLabel"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::NavigationViewOverflowLabelMode::NoLabel); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ParallaxSourceOffsetKind>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("absolute"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ParallaxSourceOffsetKind::Absolute); }
      case COMPILE_TIME_CRC32_STR("relative"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ParallaxSourceOffsetKind::Relative); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::TextReadingOrder>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("default"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextReadingOrder::Default); }
      case COMPILE_TIME_CRC32_STR("useFlowDirection"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextReadingOrder::UseFlowDirection); }
      case COMPILE_TIME_CRC32_STR("detectFromContent"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextReadingOrder::DetectFromContent); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::PasswordRevealMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("peek"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::PasswordRevealMode::Peek); }
      case COMPILE_TIME_CRC32_STR("hidden"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::PasswordRevealMode::Hidden); }
      case COMPILE_TIME_CRC32_STR("visible"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::PasswordRevealMode::Visible); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::PivotHeaderFocusVisualPlacement>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("itemHeaders"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::PivotHeaderFocusVisualPlacement::ItemHeaders); }
      case COMPILE_TIME_CRC32_STR("selectedItemHeader"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::PivotHeaderFocusVisualPlacement::SelectedItemHeader); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Primitives::TickPlacement>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::TickPlacement::None); }
      case COMPILE_TIME_CRC32_STR("topLeft"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::TickPlacement::TopLeft); }
      case COMPILE_TIME_CRC32_STR("bottomRight"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::TickPlacement::BottomRight); }
      case COMPILE_TIME_CRC32_STR("outside"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::TickPlacement::Outside); }
      case COMPILE_TIME_CRC32_STR("inline"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::TickPlacement::Inline); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Primitives::SliderSnapsTo>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("stepValues"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::SliderSnapsTo::StepValues); }
      case COMPILE_TIME_CRC32_STR("ticks"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::SliderSnapsTo::Ticks); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ColorPickerHsvChannel>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("hue"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ColorPickerHsvChannel::Hue); }
      case COMPILE_TIME_CRC32_STR("saturation"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ColorPickerHsvChannel::Saturation); }
      case COMPILE_TIME_CRC32_STR("value"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ColorPickerHsvChannel::Value); }
      case COMPILE_TIME_CRC32_STR("alpha"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ColorPickerHsvChannel::Alpha); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("inline"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode::Inline); }
      case COMPILE_TIME_CRC32_STR("overlay"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode::Overlay); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode::None); }
      case COMPILE_TIME_CRC32_STR("touchIndicator"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode::TouchIndicator); }
      case COMPILE_TIME_CRC32_STR("mouseIndicator"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode::MouseIndicator); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::RefreshPullDirection>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("leftToRight"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::RefreshPullDirection::LeftToRight); }
      case COMPILE_TIME_CRC32_STR("topToBottom"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::RefreshPullDirection::TopToBottom); }
      case COMPILE_TIME_CRC32_STR("rightToLeft"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::RefreshPullDirection::RightToLeft); }
      case COMPILE_TIME_CRC32_STR("bottomToTop"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::RefreshPullDirection::BottomToTop); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::RefreshVisualizerOrientation>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("auto"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::RefreshVisualizerOrientation::Auto); }
      case COMPILE_TIME_CRC32_STR("normal"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::RefreshVisualizerOrientation::Normal); }
      case COMPILE_TIME_CRC32_STR("rotate90DegreesCounterclockwise"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::RefreshVisualizerOrientation::Rotate90DegreesCounterclockwise); }
      case COMPILE_TIME_CRC32_STR("rotate270DegreesCounterclockwise"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::RefreshVisualizerOrientation::Rotate270DegreesCounterclockwise); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::TextAlignment>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("center"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextAlignment::Center); }
      case COMPILE_TIME_CRC32_STR("left"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextAlignment::Left); }
      case COMPILE_TIME_CRC32_STR("start"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextAlignment::Start); }
      case COMPILE_TIME_CRC32_STR("right"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextAlignment::Right); }
      case COMPILE_TIME_CRC32_STR("end"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextAlignment::End); }
      case COMPILE_TIME_CRC32_STR("justify"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextAlignment::Justify); }
      case COMPILE_TIME_CRC32_STR("detectFromContent"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextAlignment::DetectFromContent); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::CandidateWindowAlignment>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("default"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CandidateWindowAlignment::Default); }
      case COMPILE_TIME_CRC32_STR("bottomEdge"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CandidateWindowAlignment::BottomEdge); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::RichEditClipboardFormat>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("allFormats"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::RichEditClipboardFormat::AllFormats); }
      case COMPILE_TIME_CRC32_STR("plainText"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::RichEditClipboardFormat::PlainText); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::DisabledFormattingAccelerators>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::DisabledFormattingAccelerators::None); }
      case COMPILE_TIME_CRC32_STR("bold"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::DisabledFormattingAccelerators::Bold); }
      case COMPILE_TIME_CRC32_STR("italic"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::DisabledFormattingAccelerators::Italic); }
      case COMPILE_TIME_CRC32_STR("underline"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::DisabledFormattingAccelerators::Underline); }
      case COMPILE_TIME_CRC32_STR("all"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::DisabledFormattingAccelerators::All); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::CharacterCasing>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("normal"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CharacterCasing::Normal); }
      case COMPILE_TIME_CRC32_STR("lower"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CharacterCasing::Lower); }
      case COMPILE_TIME_CRC32_STR("upper"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::CharacterCasing::Upper); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::TextTrimming>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextTrimming::None); }
      case COMPILE_TIME_CRC32_STR("characterEllipsis"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextTrimming::CharacterEllipsis); }
      case COMPILE_TIME_CRC32_STR("wordEllipsis"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextTrimming::WordEllipsis); }
      case COMPILE_TIME_CRC32_STR("clip"): { return winrt::box_value(winrt::Windows::UI::Xaml::TextTrimming::Clip); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Text::TextDecorations>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { return winrt::box_value(winrt::Windows::UI::Text::TextDecorations::None); }
      case COMPILE_TIME_CRC32_STR("underline"): { return winrt::box_value(winrt::Windows::UI::Text::TextDecorations::Underline); }
      case COMPILE_TIME_CRC32_STR("strikethrough"): { return winrt::box_value(winrt::Windows::UI::Text::TextDecorations::Strikethrough); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::SnapPointsType>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::SnapPointsType::None); }
      case COMPILE_TIME_CRC32_STR("optional"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::SnapPointsType::Optional); }
      case COMPILE_TIME_CRC32_STR("mandatory"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::SnapPointsType::Mandatory); }
      case COMPILE_TIME_CRC32_STR("optionalSingle"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::SnapPointsType::OptionalSingle); }
      case COMPILE_TIME_CRC32_STR("mandatorySingle"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::SnapPointsType::MandatorySingle); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("near"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment::Near); }
      case COMPILE_TIME_CRC32_STR("center"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment::Center); }
      case COMPILE_TIME_CRC32_STR("far"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment::Far); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ScrollMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("disabled"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ScrollMode::Disabled); }
      case COMPILE_TIME_CRC32_STR("enabled"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ScrollMode::Enabled); }
      case COMPILE_TIME_CRC32_STR("auto"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ScrollMode::Auto); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ScrollBarVisibility>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("disabled"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ScrollBarVisibility::Disabled); }
      case COMPILE_TIME_CRC32_STR("auto"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ScrollBarVisibility::Auto); }
      case COMPILE_TIME_CRC32_STR("hidden"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ScrollBarVisibility::Hidden); }
      case COMPILE_TIME_CRC32_STR("visible"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ScrollBarVisibility::Visible); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ZoomMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("disabled"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ZoomMode::Disabled); }
      case COMPILE_TIME_CRC32_STR("enabled"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::ZoomMode::Enabled); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::SplitViewPanePlacement>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("left"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::SplitViewPanePlacement::Left); }
      case COMPILE_TIME_CRC32_STR("right"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::SplitViewPanePlacement::Right); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::SplitViewDisplayMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("overlay"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::SplitViewDisplayMode::Overlay); }
      case COMPILE_TIME_CRC32_STR("inline"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::SplitViewDisplayMode::Inline); }
      case COMPILE_TIME_CRC32_STR("compactOverlay"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::SplitViewDisplayMode::CompactOverlay); }
      case COMPILE_TIME_CRC32_STR("compactInline"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::SplitViewDisplayMode::CompactInline); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Symbol>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("previous"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Previous); }
      case COMPILE_TIME_CRC32_STR("next"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Next); }
      case COMPILE_TIME_CRC32_STR("play"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Play); }
      case COMPILE_TIME_CRC32_STR("pause"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Pause); }
      case COMPILE_TIME_CRC32_STR("edit"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Edit); }
      case COMPILE_TIME_CRC32_STR("save"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Save); }
      case COMPILE_TIME_CRC32_STR("clear"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Clear); }
      case COMPILE_TIME_CRC32_STR("delete"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Delete); }
      case COMPILE_TIME_CRC32_STR("remove"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Remove); }
      case COMPILE_TIME_CRC32_STR("add"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Add); }
      case COMPILE_TIME_CRC32_STR("cancel"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Cancel); }
      case COMPILE_TIME_CRC32_STR("accept"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Accept); }
      case COMPILE_TIME_CRC32_STR("more"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::More); }
      case COMPILE_TIME_CRC32_STR("redo"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Redo); }
      case COMPILE_TIME_CRC32_STR("undo"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Undo); }
      case COMPILE_TIME_CRC32_STR("home"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Home); }
      case COMPILE_TIME_CRC32_STR("up"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Up); }
      case COMPILE_TIME_CRC32_STR("forward"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Forward); }
      case COMPILE_TIME_CRC32_STR("back"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Back); }
      case COMPILE_TIME_CRC32_STR("favorite"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Favorite); }
      case COMPILE_TIME_CRC32_STR("camera"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Camera); }
      case COMPILE_TIME_CRC32_STR("setting"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Setting); }
      case COMPILE_TIME_CRC32_STR("video"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Video); }
      case COMPILE_TIME_CRC32_STR("sync"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Sync); }
      case COMPILE_TIME_CRC32_STR("download"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Download); }
      case COMPILE_TIME_CRC32_STR("mail"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Mail); }
      case COMPILE_TIME_CRC32_STR("find"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Find); }
      case COMPILE_TIME_CRC32_STR("help"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Help); }
      case COMPILE_TIME_CRC32_STR("upload"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Upload); }
      case COMPILE_TIME_CRC32_STR("emoji"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Emoji); }
      case COMPILE_TIME_CRC32_STR("twoPage"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::TwoPage); }
      case COMPILE_TIME_CRC32_STR("leaveChat"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::LeaveChat); }
      case COMPILE_TIME_CRC32_STR("mailForward"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::MailForward); }
      case COMPILE_TIME_CRC32_STR("clock"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Clock); }
      case COMPILE_TIME_CRC32_STR("send"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Send); }
      case COMPILE_TIME_CRC32_STR("crop"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Crop); }
      case COMPILE_TIME_CRC32_STR("rotateCamera"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::RotateCamera); }
      case COMPILE_TIME_CRC32_STR("people"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::People); }
      case COMPILE_TIME_CRC32_STR("openPane"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::OpenPane); }
      case COMPILE_TIME_CRC32_STR("closePane"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::ClosePane); }
      case COMPILE_TIME_CRC32_STR("world"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::World); }
      case COMPILE_TIME_CRC32_STR("flag"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Flag); }
      case COMPILE_TIME_CRC32_STR("previewLink"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::PreviewLink); }
      case COMPILE_TIME_CRC32_STR("globe"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Globe); }
      case COMPILE_TIME_CRC32_STR("trim"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Trim); }
      case COMPILE_TIME_CRC32_STR("attachCamera"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::AttachCamera); }
      case COMPILE_TIME_CRC32_STR("zoomIn"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::ZoomIn); }
      case COMPILE_TIME_CRC32_STR("bookmarks"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Bookmarks); }
      case COMPILE_TIME_CRC32_STR("document"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Document); }
      case COMPILE_TIME_CRC32_STR("protectedDocument"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::ProtectedDocument); }
      case COMPILE_TIME_CRC32_STR("page"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Page); }
      case COMPILE_TIME_CRC32_STR("bullets"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Bullets); }
      case COMPILE_TIME_CRC32_STR("comment"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Comment); }
      case COMPILE_TIME_CRC32_STR("mailFilled"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::MailFilled); }
      case COMPILE_TIME_CRC32_STR("contactInfo"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::ContactInfo); }
      case COMPILE_TIME_CRC32_STR("hangUp"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::HangUp); }
      case COMPILE_TIME_CRC32_STR("viewAll"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::ViewAll); }
      case COMPILE_TIME_CRC32_STR("mapPin"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::MapPin); }
      case COMPILE_TIME_CRC32_STR("phone"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Phone); }
      case COMPILE_TIME_CRC32_STR("videoChat"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::VideoChat); }
      case COMPILE_TIME_CRC32_STR("switch"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Switch); }
      case COMPILE_TIME_CRC32_STR("contact"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Contact); }
      case COMPILE_TIME_CRC32_STR("rename"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Rename); }
      case COMPILE_TIME_CRC32_STR("pin"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Pin); }
      case COMPILE_TIME_CRC32_STR("musicInfo"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::MusicInfo); }
      case COMPILE_TIME_CRC32_STR("go"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Go); }
      case COMPILE_TIME_CRC32_STR("keyboard"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Keyboard); }
      case COMPILE_TIME_CRC32_STR("dockLeft"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::DockLeft); }
      case COMPILE_TIME_CRC32_STR("dockRight"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::DockRight); }
      case COMPILE_TIME_CRC32_STR("dockBottom"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::DockBottom); }
      case COMPILE_TIME_CRC32_STR("remote"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Remote); }
      case COMPILE_TIME_CRC32_STR("refresh"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Refresh); }
      case COMPILE_TIME_CRC32_STR("rotate"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Rotate); }
      case COMPILE_TIME_CRC32_STR("shuffle"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Shuffle); }
      case COMPILE_TIME_CRC32_STR("list"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::List); }
      case COMPILE_TIME_CRC32_STR("shop"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Shop); }
      case COMPILE_TIME_CRC32_STR("selectAll"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::SelectAll); }
      case COMPILE_TIME_CRC32_STR("orientation"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Orientation); }
      case COMPILE_TIME_CRC32_STR("import"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Import); }
      case COMPILE_TIME_CRC32_STR("importAll"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::ImportAll); }
      case COMPILE_TIME_CRC32_STR("browsePhotos"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::BrowsePhotos); }
      case COMPILE_TIME_CRC32_STR("webCam"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::WebCam); }
      case COMPILE_TIME_CRC32_STR("pictures"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Pictures); }
      case COMPILE_TIME_CRC32_STR("saveLocal"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::SaveLocal); }
      case COMPILE_TIME_CRC32_STR("caption"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Caption); }
      case COMPILE_TIME_CRC32_STR("stop"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Stop); }
      case COMPILE_TIME_CRC32_STR("showResults"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::ShowResults); }
      case COMPILE_TIME_CRC32_STR("volume"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Volume); }
      case COMPILE_TIME_CRC32_STR("repair"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Repair); }
      case COMPILE_TIME_CRC32_STR("message"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Message); }
      case COMPILE_TIME_CRC32_STR("page2"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Page2); }
      case COMPILE_TIME_CRC32_STR("calendarDay"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::CalendarDay); }
      case COMPILE_TIME_CRC32_STR("calendarWeek"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::CalendarWeek); }
      case COMPILE_TIME_CRC32_STR("calendar"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Calendar); }
      case COMPILE_TIME_CRC32_STR("character"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Character); }
      case COMPILE_TIME_CRC32_STR("mailReplyAll"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::MailReplyAll); }
      case COMPILE_TIME_CRC32_STR("read"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Read); }
      case COMPILE_TIME_CRC32_STR("link"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Link); }
      case COMPILE_TIME_CRC32_STR("account"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Account); }
      case COMPILE_TIME_CRC32_STR("showBcc"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::ShowBcc); }
      case COMPILE_TIME_CRC32_STR("hideBcc"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::HideBcc); }
      case COMPILE_TIME_CRC32_STR("cut"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Cut); }
      case COMPILE_TIME_CRC32_STR("attach"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Attach); }
      case COMPILE_TIME_CRC32_STR("paste"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Paste); }
      case COMPILE_TIME_CRC32_STR("filter"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Filter); }
      case COMPILE_TIME_CRC32_STR("copy"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Copy); }
      case COMPILE_TIME_CRC32_STR("emoji2"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Emoji2); }
      case COMPILE_TIME_CRC32_STR("important"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Important); }
      case COMPILE_TIME_CRC32_STR("mailReply"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::MailReply); }
      case COMPILE_TIME_CRC32_STR("slideShow"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::SlideShow); }
      case COMPILE_TIME_CRC32_STR("sort"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Sort); }
      case COMPILE_TIME_CRC32_STR("manage"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Manage); }
      case COMPILE_TIME_CRC32_STR("allApps"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::AllApps); }
      case COMPILE_TIME_CRC32_STR("disconnectDrive"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::DisconnectDrive); }
      case COMPILE_TIME_CRC32_STR("mapDrive"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::MapDrive); }
      case COMPILE_TIME_CRC32_STR("newWindow"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::NewWindow); }
      case COMPILE_TIME_CRC32_STR("openWith"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::OpenWith); }
      case COMPILE_TIME_CRC32_STR("contactPresence"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::ContactPresence); }
      case COMPILE_TIME_CRC32_STR("priority"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Priority); }
      case COMPILE_TIME_CRC32_STR("goToToday"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::GoToToday); }
      case COMPILE_TIME_CRC32_STR("font"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Font); }
      case COMPILE_TIME_CRC32_STR("fontColor"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::FontColor); }
      case COMPILE_TIME_CRC32_STR("contact2"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Contact2); }
      case COMPILE_TIME_CRC32_STR("folder"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Folder); }
      case COMPILE_TIME_CRC32_STR("audio"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Audio); }
      case COMPILE_TIME_CRC32_STR("placeholder"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Placeholder); }
      case COMPILE_TIME_CRC32_STR("view"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::View); }
      case COMPILE_TIME_CRC32_STR("setLockScreen"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::SetLockScreen); }
      case COMPILE_TIME_CRC32_STR("setTile"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::SetTile); }
      case COMPILE_TIME_CRC32_STR("closedCaption"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::ClosedCaption); }
      case COMPILE_TIME_CRC32_STR("stopSlideShow"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::StopSlideShow); }
      case COMPILE_TIME_CRC32_STR("permissions"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Permissions); }
      case COMPILE_TIME_CRC32_STR("highlight"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Highlight); }
      case COMPILE_TIME_CRC32_STR("disableUpdates"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::DisableUpdates); }
      case COMPILE_TIME_CRC32_STR("unFavorite"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::UnFavorite); }
      case COMPILE_TIME_CRC32_STR("unPin"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::UnPin); }
      case COMPILE_TIME_CRC32_STR("openLocal"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::OpenLocal); }
      case COMPILE_TIME_CRC32_STR("mute"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Mute); }
      case COMPILE_TIME_CRC32_STR("italic"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Italic); }
      case COMPILE_TIME_CRC32_STR("underline"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Underline); }
      case COMPILE_TIME_CRC32_STR("bold"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Bold); }
      case COMPILE_TIME_CRC32_STR("moveToFolder"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::MoveToFolder); }
      case COMPILE_TIME_CRC32_STR("likeDislike"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::LikeDislike); }
      case COMPILE_TIME_CRC32_STR("dislike"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Dislike); }
      case COMPILE_TIME_CRC32_STR("like"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Like); }
      case COMPILE_TIME_CRC32_STR("alignRight"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::AlignRight); }
      case COMPILE_TIME_CRC32_STR("alignCenter"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::AlignCenter); }
      case COMPILE_TIME_CRC32_STR("alignLeft"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::AlignLeft); }
      case COMPILE_TIME_CRC32_STR("zoom"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Zoom); }
      case COMPILE_TIME_CRC32_STR("zoomOut"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::ZoomOut); }
      case COMPILE_TIME_CRC32_STR("openFile"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::OpenFile); }
      case COMPILE_TIME_CRC32_STR("otherUser"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::OtherUser); }
      case COMPILE_TIME_CRC32_STR("admin"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Admin); }
      case COMPILE_TIME_CRC32_STR("street"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Street); }
      case COMPILE_TIME_CRC32_STR("map"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Map); }
      case COMPILE_TIME_CRC32_STR("clearSelection"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::ClearSelection); }
      case COMPILE_TIME_CRC32_STR("fontDecrease"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::FontDecrease); }
      case COMPILE_TIME_CRC32_STR("fontIncrease"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::FontIncrease); }
      case COMPILE_TIME_CRC32_STR("fontSize"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::FontSize); }
      case COMPILE_TIME_CRC32_STR("cellPhone"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::CellPhone); }
      case COMPILE_TIME_CRC32_STR("reShare"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::ReShare); }
      case COMPILE_TIME_CRC32_STR("tag"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Tag); }
      case COMPILE_TIME_CRC32_STR("repeatOne"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::RepeatOne); }
      case COMPILE_TIME_CRC32_STR("repeatAll"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::RepeatAll); }
      case COMPILE_TIME_CRC32_STR("outlineStar"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::OutlineStar); }
      case COMPILE_TIME_CRC32_STR("solidStar"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::SolidStar); }
      case COMPILE_TIME_CRC32_STR("calculator"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Calculator); }
      case COMPILE_TIME_CRC32_STR("directions"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Directions); }
      case COMPILE_TIME_CRC32_STR("target"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Target); }
      case COMPILE_TIME_CRC32_STR("library"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Library); }
      case COMPILE_TIME_CRC32_STR("phoneBook"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::PhoneBook); }
      case COMPILE_TIME_CRC32_STR("memo"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Memo); }
      case COMPILE_TIME_CRC32_STR("microphone"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Microphone); }
      case COMPILE_TIME_CRC32_STR("postUpdate"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::PostUpdate); }
      case COMPILE_TIME_CRC32_STR("backToWindow"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::BackToWindow); }
      case COMPILE_TIME_CRC32_STR("fullScreen"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::FullScreen); }
      case COMPILE_TIME_CRC32_STR("newFolder"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::NewFolder); }
      case COMPILE_TIME_CRC32_STR("calendarReply"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::CalendarReply); }
      case COMPILE_TIME_CRC32_STR("unSyncFolder"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::UnSyncFolder); }
      case COMPILE_TIME_CRC32_STR("reportHacked"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::ReportHacked); }
      case COMPILE_TIME_CRC32_STR("syncFolder"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::SyncFolder); }
      case COMPILE_TIME_CRC32_STR("blockContact"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::BlockContact); }
      case COMPILE_TIME_CRC32_STR("switchApps"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::SwitchApps); }
      case COMPILE_TIME_CRC32_STR("addFriend"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::AddFriend); }
      case COMPILE_TIME_CRC32_STR("touchPointer"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::TouchPointer); }
      case COMPILE_TIME_CRC32_STR("goToStart"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::GoToStart); }
      case COMPILE_TIME_CRC32_STR("zeroBars"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::ZeroBars); }
      case COMPILE_TIME_CRC32_STR("oneBar"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::OneBar); }
      case COMPILE_TIME_CRC32_STR("twoBars"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::TwoBars); }
      case COMPILE_TIME_CRC32_STR("threeBars"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::ThreeBars); }
      case COMPILE_TIME_CRC32_STR("fourBars"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::FourBars); }
      case COMPILE_TIME_CRC32_STR("scan"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Scan); }
      case COMPILE_TIME_CRC32_STR("preview"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Preview); }
      case COMPILE_TIME_CRC32_STR("globalNavigationButton"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::GlobalNavigationButton); }
      case COMPILE_TIME_CRC32_STR("share"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Share); }
      case COMPILE_TIME_CRC32_STR("print"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::Print); }
      case COMPILE_TIME_CRC32_STR("xboxOneConsole"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Symbol::XboxOneConsole); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Primitives::PlacementMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("bottom"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::PlacementMode::Bottom); }
      case COMPILE_TIME_CRC32_STR("left"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::PlacementMode::Left); }
      case COMPILE_TIME_CRC32_STR("mouse"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::PlacementMode::Mouse); }
      case COMPILE_TIME_CRC32_STR("right"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::PlacementMode::Right); }
      case COMPILE_TIME_CRC32_STR("top"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::Primitives::PlacementMode::Top); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::TreeViewSelectionMode>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::TreeViewSelectionMode::None); }
      case COMPILE_TIME_CRC32_STR("single"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::TreeViewSelectionMode::Single); }
      case COMPILE_TIME_CRC32_STR("multiple"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::TreeViewSelectionMode::Multiple); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::TwoPaneViewWideModeConfiguration>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("singlePane"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::TwoPaneViewWideModeConfiguration::SinglePane); }
      case COMPILE_TIME_CRC32_STR("leftRight"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::TwoPaneViewWideModeConfiguration::LeftRight); }
      case COMPILE_TIME_CRC32_STR("rightLeft"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::TwoPaneViewWideModeConfiguration::RightLeft); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::TwoPaneViewTallModeConfiguration>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("singlePane"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::TwoPaneViewTallModeConfiguration::SinglePane); }
      case COMPILE_TIME_CRC32_STR("topBottom"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::TwoPaneViewTallModeConfiguration::TopBottom); }
      case COMPILE_TIME_CRC32_STR("bottomTop"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::TwoPaneViewTallModeConfiguration::BottomTop); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::TwoPaneViewPriority>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("pane1"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::TwoPaneViewPriority::Pane1); }
      case COMPILE_TIME_CRC32_STR("pane2"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::TwoPaneViewPriority::Pane2); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::StretchDirection>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("upOnly"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::StretchDirection::UpOnly); }
      case COMPILE_TIME_CRC32_STR("downOnly"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::StretchDirection::DownOnly); }
      case COMPILE_TIME_CRC32_STR("both"): { return winrt::box_value(winrt::Windows::UI::Xaml::Controls::StretchDirection::Both); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::StyleSimulations>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::StyleSimulations::None); }
      case COMPILE_TIME_CRC32_STR("boldSimulation"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::StyleSimulations::BoldSimulation); }
      case COMPILE_TIME_CRC32_STR("italicSimulation"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::StyleSimulations::ItalicSimulation); }
      case COMPILE_TIME_CRC32_STR("boldItalicSimulation"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::StyleSimulations::BoldItalicSimulation); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::PenLineCap>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("flat"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::PenLineCap::Flat); }
      case COMPILE_TIME_CRC32_STR("square"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::PenLineCap::Square); }
      case COMPILE_TIME_CRC32_STR("round"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::PenLineCap::Round); }
      case COMPILE_TIME_CRC32_STR("triangle"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::PenLineCap::Triangle); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::PenLineJoin>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("miter"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::PenLineJoin::Miter); }
      case COMPILE_TIME_CRC32_STR("bevel"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::PenLineJoin::Bevel); }
      case COMPILE_TIME_CRC32_STR("round"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::PenLineJoin::Round); }
    }
  return nullptr;
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::FillRule>(const std::string& value) { 
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("evenOdd"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::FillRule::EvenOdd); }
      case COMPILE_TIME_CRC32_STR("nonzero"): { return winrt::box_value(winrt::Windows::UI::Xaml::Media::FillRule::Nonzero); }
    }
  return nullptr;
  }

