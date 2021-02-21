
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



  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::VerticalAlignment>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::VerticalAlignment ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("top"): { ret = winrt::Windows::UI::Xaml::VerticalAlignment::Top; break; }
      case COMPILE_TIME_CRC32_STR("center"): { ret = winrt::Windows::UI::Xaml::VerticalAlignment::Center; break; }
      case COMPILE_TIME_CRC32_STR("bottom"): { ret = winrt::Windows::UI::Xaml::VerticalAlignment::Bottom; break; }
      case COMPILE_TIME_CRC32_STR("stretch"): { ret = winrt::Windows::UI::Xaml::VerticalAlignment::Stretch; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::HorizontalAlignment>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::HorizontalAlignment ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("left"): { ret = winrt::Windows::UI::Xaml::HorizontalAlignment::Left; break; }
      case COMPILE_TIME_CRC32_STR("center"): { ret = winrt::Windows::UI::Xaml::HorizontalAlignment::Center; break; }
      case COMPILE_TIME_CRC32_STR("right"): { ret = winrt::Windows::UI::Xaml::HorizontalAlignment::Right; break; }
      case COMPILE_TIME_CRC32_STR("stretch"): { ret = winrt::Windows::UI::Xaml::HorizontalAlignment::Stretch; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::FlowDirection>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::FlowDirection ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("leftToRight"): { ret = winrt::Windows::UI::Xaml::FlowDirection::LeftToRight; break; }
      case COMPILE_TIME_CRC32_STR("rightToLeft"): { ret = winrt::Windows::UI::Xaml::FlowDirection::RightToLeft; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::ElementTheme>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::ElementTheme ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("default"): { ret = winrt::Windows::UI::Xaml::ElementTheme::Default; break; }
      case COMPILE_TIME_CRC32_STR("light"): { ret = winrt::Windows::UI::Xaml::ElementTheme::Light; break; }
      case COMPILE_TIME_CRC32_STR("dark"): { ret = winrt::Windows::UI::Xaml::ElementTheme::Dark; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Text::FontStyle>(const std::string& value) noexcept { 
  winrt::Windows::UI::Text::FontStyle ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("normal"): { ret = winrt::Windows::UI::Text::FontStyle::Normal; break; }
      case COMPILE_TIME_CRC32_STR("oblique"): { ret = winrt::Windows::UI::Text::FontStyle::Oblique; break; }
      case COMPILE_TIME_CRC32_STR("italic"): { ret = winrt::Windows::UI::Text::FontStyle::Italic; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Text::FontStretch>(const std::string& value) noexcept { 
  winrt::Windows::UI::Text::FontStretch ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("undefined"): { ret = winrt::Windows::UI::Text::FontStretch::Undefined; break; }
      case COMPILE_TIME_CRC32_STR("ultraCondensed"): { ret = winrt::Windows::UI::Text::FontStretch::UltraCondensed; break; }
      case COMPILE_TIME_CRC32_STR("extraCondensed"): { ret = winrt::Windows::UI::Text::FontStretch::ExtraCondensed; break; }
      case COMPILE_TIME_CRC32_STR("condensed"): { ret = winrt::Windows::UI::Text::FontStretch::Condensed; break; }
      case COMPILE_TIME_CRC32_STR("semiCondensed"): { ret = winrt::Windows::UI::Text::FontStretch::SemiCondensed; break; }
      case COMPILE_TIME_CRC32_STR("normal"): { ret = winrt::Windows::UI::Text::FontStretch::Normal; break; }
      case COMPILE_TIME_CRC32_STR("semiExpanded"): { ret = winrt::Windows::UI::Text::FontStretch::SemiExpanded; break; }
      case COMPILE_TIME_CRC32_STR("expanded"): { ret = winrt::Windows::UI::Text::FontStretch::Expanded; break; }
      case COMPILE_TIME_CRC32_STR("extraExpanded"): { ret = winrt::Windows::UI::Text::FontStretch::ExtraExpanded; break; }
      case COMPILE_TIME_CRC32_STR("ultraExpanded"): { ret = winrt::Windows::UI::Text::FontStretch::UltraExpanded; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Input::KeyboardNavigationMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Input::KeyboardNavigationMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("local"): { ret = winrt::Windows::UI::Xaml::Input::KeyboardNavigationMode::Local; break; }
      case COMPILE_TIME_CRC32_STR("cycle"): { ret = winrt::Windows::UI::Xaml::Input::KeyboardNavigationMode::Cycle; break; }
      case COMPILE_TIME_CRC32_STR("once"): { ret = winrt::Windows::UI::Xaml::Input::KeyboardNavigationMode::Once; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::RequiresPointer>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::RequiresPointer ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("never"): { ret = winrt::Windows::UI::Xaml::Controls::RequiresPointer::Never; break; }
      case COMPILE_TIME_CRC32_STR("whenEngaged"): { ret = winrt::Windows::UI::Xaml::Controls::RequiresPointer::WhenEngaged; break; }
      case COMPILE_TIME_CRC32_STR("whenFocused"): { ret = winrt::Windows::UI::Xaml::Controls::RequiresPointer::WhenFocused; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::ElementSoundMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::ElementSoundMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("default"): { ret = winrt::Windows::UI::Xaml::ElementSoundMode::Default; break; }
      case COMPILE_TIME_CRC32_STR("focusOnly"): { ret = winrt::Windows::UI::Xaml::ElementSoundMode::FocusOnly; break; }
      case COMPILE_TIME_CRC32_STR("off"): { ret = winrt::Windows::UI::Xaml::ElementSoundMode::Off; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::BackgroundSizing>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::BackgroundSizing ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("innerBorderEdge"): { ret = winrt::Windows::UI::Xaml::Controls::BackgroundSizing::InnerBorderEdge; break; }
      case COMPILE_TIME_CRC32_STR("outerBorderEdge"): { ret = winrt::Windows::UI::Xaml::Controls::BackgroundSizing::OuterBorderEdge; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::AppBarClosedDisplayMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::AppBarClosedDisplayMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("compact"): { ret = winrt::Windows::UI::Xaml::Controls::AppBarClosedDisplayMode::Compact; break; }
      case COMPILE_TIME_CRC32_STR("minimal"): { ret = winrt::Windows::UI::Xaml::Controls::AppBarClosedDisplayMode::Minimal; break; }
      case COMPILE_TIME_CRC32_STR("hidden"): { ret = winrt::Windows::UI::Xaml::Controls::AppBarClosedDisplayMode::Hidden; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::LightDismissOverlayMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::LightDismissOverlayMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("auto"): { ret = winrt::Windows::UI::Xaml::Controls::LightDismissOverlayMode::Auto; break; }
      case COMPILE_TIME_CRC32_STR("on"): { ret = winrt::Windows::UI::Xaml::Controls::LightDismissOverlayMode::On; break; }
      case COMPILE_TIME_CRC32_STR("off"): { ret = winrt::Windows::UI::Xaml::Controls::LightDismissOverlayMode::Off; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ClickMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::ClickMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("release"): { ret = winrt::Windows::UI::Xaml::Controls::ClickMode::Release; break; }
      case COMPILE_TIME_CRC32_STR("press"): { ret = winrt::Windows::UI::Xaml::Controls::ClickMode::Press; break; }
      case COMPILE_TIME_CRC32_STR("hover"): { ret = winrt::Windows::UI::Xaml::Controls::ClickMode::Hover; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::CommandBarLabelPosition>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::CommandBarLabelPosition ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("default"): { ret = winrt::Windows::UI::Xaml::Controls::CommandBarLabelPosition::Default; break; }
      case COMPILE_TIME_CRC32_STR("collapsed"): { ret = winrt::Windows::UI::Xaml::Controls::CommandBarLabelPosition::Collapsed; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::Globalization::DayOfWeek>(const std::string& value) noexcept { 
  winrt::Windows::Globalization::DayOfWeek ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("sunday"): { ret = winrt::Windows::Globalization::DayOfWeek::Sunday; break; }
      case COMPILE_TIME_CRC32_STR("monday"): { ret = winrt::Windows::Globalization::DayOfWeek::Monday; break; }
      case COMPILE_TIME_CRC32_STR("tuesday"): { ret = winrt::Windows::Globalization::DayOfWeek::Tuesday; break; }
      case COMPILE_TIME_CRC32_STR("wednesday"): { ret = winrt::Windows::Globalization::DayOfWeek::Wednesday; break; }
      case COMPILE_TIME_CRC32_STR("thursday"): { ret = winrt::Windows::Globalization::DayOfWeek::Thursday; break; }
      case COMPILE_TIME_CRC32_STR("friday"): { ret = winrt::Windows::Globalization::DayOfWeek::Friday; break; }
      case COMPILE_TIME_CRC32_STR("saturday"): { ret = winrt::Windows::Globalization::DayOfWeek::Saturday; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::CalendarViewDisplayMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::CalendarViewDisplayMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("month"): { ret = winrt::Windows::UI::Xaml::Controls::CalendarViewDisplayMode::Month; break; }
      case COMPILE_TIME_CRC32_STR("year"): { ret = winrt::Windows::UI::Xaml::Controls::CalendarViewDisplayMode::Year; break; }
      case COMPILE_TIME_CRC32_STR("decade"): { ret = winrt::Windows::UI::Xaml::Controls::CalendarViewDisplayMode::Decade; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::CalendarViewSelectionMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::CalendarViewSelectionMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { ret = winrt::Windows::UI::Xaml::Controls::CalendarViewSelectionMode::None; break; }
      case COMPILE_TIME_CRC32_STR("single"): { ret = winrt::Windows::UI::Xaml::Controls::CalendarViewSelectionMode::Single; break; }
      case COMPILE_TIME_CRC32_STR("multiple"): { ret = winrt::Windows::UI::Xaml::Controls::CalendarViewSelectionMode::Multiple; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::Stretch>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Media::Stretch ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { ret = winrt::Windows::UI::Xaml::Media::Stretch::None; break; }
      case COMPILE_TIME_CRC32_STR("fill"): { ret = winrt::Windows::UI::Xaml::Media::Stretch::Fill; break; }
      case COMPILE_TIME_CRC32_STR("uniform"): { ret = winrt::Windows::UI::Xaml::Media::Stretch::Uniform; break; }
      case COMPILE_TIME_CRC32_STR("uniformToFill"): { ret = winrt::Windows::UI::Xaml::Media::Stretch::UniformToFill; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ColorSpectrumShape>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::ColorSpectrumShape ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("box"): { ret = winrt::Windows::UI::Xaml::Controls::ColorSpectrumShape::Box; break; }
      case COMPILE_TIME_CRC32_STR("ring"): { ret = winrt::Windows::UI::Xaml::Controls::ColorSpectrumShape::Ring; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ColorSpectrumComponents>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::ColorSpectrumComponents ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("hueValue"): { ret = winrt::Windows::UI::Xaml::Controls::ColorSpectrumComponents::HueValue; break; }
      case COMPILE_TIME_CRC32_STR("valueHue"): { ret = winrt::Windows::UI::Xaml::Controls::ColorSpectrumComponents::ValueHue; break; }
      case COMPILE_TIME_CRC32_STR("hueSaturation"): { ret = winrt::Windows::UI::Xaml::Controls::ColorSpectrumComponents::HueSaturation; break; }
      case COMPILE_TIME_CRC32_STR("saturationHue"): { ret = winrt::Windows::UI::Xaml::Controls::ColorSpectrumComponents::SaturationHue; break; }
      case COMPILE_TIME_CRC32_STR("saturationValue"): { ret = winrt::Windows::UI::Xaml::Controls::ColorSpectrumComponents::SaturationValue; break; }
      case COMPILE_TIME_CRC32_STR("valueSaturation"): { ret = winrt::Windows::UI::Xaml::Controls::ColorSpectrumComponents::ValueSaturation; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ComboBoxSelectionChangedTrigger>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::ComboBoxSelectionChangedTrigger ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("committed"): { ret = winrt::Windows::UI::Xaml::Controls::ComboBoxSelectionChangedTrigger::Committed; break; }
      case COMPILE_TIME_CRC32_STR("always"): { ret = winrt::Windows::UI::Xaml::Controls::ComboBoxSelectionChangedTrigger::Always; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::CommandBarOverflowButtonVisibility>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::CommandBarOverflowButtonVisibility ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("auto"): { ret = winrt::Windows::UI::Xaml::Controls::CommandBarOverflowButtonVisibility::Auto; break; }
      case COMPILE_TIME_CRC32_STR("visible"): { ret = winrt::Windows::UI::Xaml::Controls::CommandBarOverflowButtonVisibility::Visible; break; }
      case COMPILE_TIME_CRC32_STR("collapsed"): { ret = winrt::Windows::UI::Xaml::Controls::CommandBarOverflowButtonVisibility::Collapsed; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::CommandBarDefaultLabelPosition>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::CommandBarDefaultLabelPosition ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("bottom"): { ret = winrt::Windows::UI::Xaml::Controls::CommandBarDefaultLabelPosition::Bottom; break; }
      case COMPILE_TIME_CRC32_STR("right"): { ret = winrt::Windows::UI::Xaml::Controls::CommandBarDefaultLabelPosition::Right; break; }
      case COMPILE_TIME_CRC32_STR("collapsed"): { ret = winrt::Windows::UI::Xaml::Controls::CommandBarDefaultLabelPosition::Collapsed; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ContentDialogButton>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::ContentDialogButton ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { ret = winrt::Windows::UI::Xaml::Controls::ContentDialogButton::None; break; }
      case COMPILE_TIME_CRC32_STR("primary"): { ret = winrt::Windows::UI::Xaml::Controls::ContentDialogButton::Primary; break; }
      case COMPILE_TIME_CRC32_STR("secondary"): { ret = winrt::Windows::UI::Xaml::Controls::ContentDialogButton::Secondary; break; }
      case COMPILE_TIME_CRC32_STR("close"): { ret = winrt::Windows::UI::Xaml::Controls::ContentDialogButton::Close; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::TextLineBounds>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::TextLineBounds ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("full"): { ret = winrt::Windows::UI::Xaml::TextLineBounds::Full; break; }
      case COMPILE_TIME_CRC32_STR("trimToCapHeight"): { ret = winrt::Windows::UI::Xaml::TextLineBounds::TrimToCapHeight; break; }
      case COMPILE_TIME_CRC32_STR("trimToBaseline"): { ret = winrt::Windows::UI::Xaml::TextLineBounds::TrimToBaseline; break; }
      case COMPILE_TIME_CRC32_STR("tight"): { ret = winrt::Windows::UI::Xaml::TextLineBounds::Tight; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::OpticalMarginAlignment>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::OpticalMarginAlignment ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { ret = winrt::Windows::UI::Xaml::OpticalMarginAlignment::None; break; }
      case COMPILE_TIME_CRC32_STR("trimSideBearings"): { ret = winrt::Windows::UI::Xaml::OpticalMarginAlignment::TrimSideBearings; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::TextWrapping>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::TextWrapping ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("noWrap"): { ret = winrt::Windows::UI::Xaml::TextWrapping::NoWrap; break; }
      case COMPILE_TIME_CRC32_STR("wrap"): { ret = winrt::Windows::UI::Xaml::TextWrapping::Wrap; break; }
      case COMPILE_TIME_CRC32_STR("wrapWholeWords"): { ret = winrt::Windows::UI::Xaml::TextWrapping::WrapWholeWords; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::LineStackingStrategy>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::LineStackingStrategy ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("maxHeight"): { ret = winrt::Windows::UI::Xaml::LineStackingStrategy::MaxHeight; break; }
      case COMPILE_TIME_CRC32_STR("blockLineHeight"): { ret = winrt::Windows::UI::Xaml::LineStackingStrategy::BlockLineHeight; break; }
      case COMPILE_TIME_CRC32_STR("baselineToBaseline"): { ret = winrt::Windows::UI::Xaml::LineStackingStrategy::BaselineToBaseline; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Orientation>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::Orientation ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("vertical"): { ret = winrt::Windows::UI::Xaml::Controls::Orientation::Vertical; break; }
      case COMPILE_TIME_CRC32_STR("horizontal"): { ret = winrt::Windows::UI::Xaml::Controls::Orientation::Horizontal; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ListViewSelectionMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::ListViewSelectionMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { ret = winrt::Windows::UI::Xaml::Controls::ListViewSelectionMode::None; break; }
      case COMPILE_TIME_CRC32_STR("single"): { ret = winrt::Windows::UI::Xaml::Controls::ListViewSelectionMode::Single; break; }
      case COMPILE_TIME_CRC32_STR("multiple"): { ret = winrt::Windows::UI::Xaml::Controls::ListViewSelectionMode::Multiple; break; }
      case COMPILE_TIME_CRC32_STR("extended"): { ret = winrt::Windows::UI::Xaml::Controls::ListViewSelectionMode::Extended; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::IncrementalLoadingTrigger>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::IncrementalLoadingTrigger ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { ret = winrt::Windows::UI::Xaml::Controls::IncrementalLoadingTrigger::None; break; }
      case COMPILE_TIME_CRC32_STR("edge"): { ret = winrt::Windows::UI::Xaml::Controls::IncrementalLoadingTrigger::Edge; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ListViewReorderMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::ListViewReorderMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("disabled"): { ret = winrt::Windows::UI::Xaml::Controls::ListViewReorderMode::Disabled; break; }
      case COMPILE_TIME_CRC32_STR("enabled"): { ret = winrt::Windows::UI::Xaml::Controls::ListViewReorderMode::Enabled; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::HandwritingPanelPlacementAlignment>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::HandwritingPanelPlacementAlignment ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("auto"): { ret = winrt::Windows::UI::Xaml::Controls::HandwritingPanelPlacementAlignment::Auto; break; }
      case COMPILE_TIME_CRC32_STR("topLeft"): { ret = winrt::Windows::UI::Xaml::Controls::HandwritingPanelPlacementAlignment::TopLeft; break; }
      case COMPILE_TIME_CRC32_STR("topRight"): { ret = winrt::Windows::UI::Xaml::Controls::HandwritingPanelPlacementAlignment::TopRight; break; }
      case COMPILE_TIME_CRC32_STR("bottomLeft"): { ret = winrt::Windows::UI::Xaml::Controls::HandwritingPanelPlacementAlignment::BottomLeft; break; }
      case COMPILE_TIME_CRC32_STR("bottomRight"): { ret = winrt::Windows::UI::Xaml::Controls::HandwritingPanelPlacementAlignment::BottomRight; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::InkToolbarInitialControls>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::InkToolbarInitialControls ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("all"): { ret = winrt::Windows::UI::Xaml::Controls::InkToolbarInitialControls::All; break; }
      case COMPILE_TIME_CRC32_STR("none"): { ret = winrt::Windows::UI::Xaml::Controls::InkToolbarInitialControls::None; break; }
      case COMPILE_TIME_CRC32_STR("pensOnly"): { ret = winrt::Windows::UI::Xaml::Controls::InkToolbarInitialControls::PensOnly; break; }
      case COMPILE_TIME_CRC32_STR("allExceptPens"): { ret = winrt::Windows::UI::Xaml::Controls::InkToolbarInitialControls::AllExceptPens; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::InkToolbarButtonFlyoutPlacement>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::InkToolbarButtonFlyoutPlacement ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("auto"): { ret = winrt::Windows::UI::Xaml::Controls::InkToolbarButtonFlyoutPlacement::Auto; break; }
      case COMPILE_TIME_CRC32_STR("top"): { ret = winrt::Windows::UI::Xaml::Controls::InkToolbarButtonFlyoutPlacement::Top; break; }
      case COMPILE_TIME_CRC32_STR("bottom"): { ret = winrt::Windows::UI::Xaml::Controls::InkToolbarButtonFlyoutPlacement::Bottom; break; }
      case COMPILE_TIME_CRC32_STR("left"): { ret = winrt::Windows::UI::Xaml::Controls::InkToolbarButtonFlyoutPlacement::Left; break; }
      case COMPILE_TIME_CRC32_STR("right"): { ret = winrt::Windows::UI::Xaml::Controls::InkToolbarButtonFlyoutPlacement::Right; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItemKind>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItemKind ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("simple"): { ret = winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItemKind::Simple; break; }
      case COMPILE_TIME_CRC32_STR("radio"): { ret = winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItemKind::Radio; break; }
      case COMPILE_TIME_CRC32_STR("check"): { ret = winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItemKind::Check; break; }
      case COMPILE_TIME_CRC32_STR("radioCheck"): { ret = winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItemKind::RadioCheck; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::InkToolbarStencilKind>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::InkToolbarStencilKind ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("ruler"): { ret = winrt::Windows::UI::Xaml::Controls::InkToolbarStencilKind::Ruler; break; }
      case COMPILE_TIME_CRC32_STR("protractor"): { ret = winrt::Windows::UI::Xaml::Controls::InkToolbarStencilKind::Protractor; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Primitives::GroupHeaderPlacement>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::Primitives::GroupHeaderPlacement ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("top"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::GroupHeaderPlacement::Top; break; }
      case COMPILE_TIME_CRC32_STR("left"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::GroupHeaderPlacement::Left; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::SelectionMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::SelectionMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("single"): { ret = winrt::Windows::UI::Xaml::Controls::SelectionMode::Single; break; }
      case COMPILE_TIME_CRC32_STR("multiple"): { ret = winrt::Windows::UI::Xaml::Controls::SelectionMode::Multiple; break; }
      case COMPILE_TIME_CRC32_STR("extended"): { ret = winrt::Windows::UI::Xaml::Controls::SelectionMode::Extended; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Maps::MapWatermarkMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::Maps::MapWatermarkMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("automatic"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapWatermarkMode::Automatic; break; }
      case COMPILE_TIME_CRC32_STR("on"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapWatermarkMode::On; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Maps::MapStyle>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::Maps::MapStyle ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapStyle::None; break; }
      case COMPILE_TIME_CRC32_STR("road"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapStyle::Road; break; }
      case COMPILE_TIME_CRC32_STR("aerial"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapStyle::Aerial; break; }
      case COMPILE_TIME_CRC32_STR("aerialWithRoads"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapStyle::AerialWithRoads; break; }
      case COMPILE_TIME_CRC32_STR("terrain"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapStyle::Terrain; break; }
      case COMPILE_TIME_CRC32_STR("aerial3D"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapStyle::Aerial3D; break; }
      case COMPILE_TIME_CRC32_STR("aerial3DWithRoads"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapStyle::Aerial3DWithRoads; break; }
      case COMPILE_TIME_CRC32_STR("custom"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapStyle::Custom; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Maps::MapColorScheme>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::Maps::MapColorScheme ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("light"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapColorScheme::Light; break; }
      case COMPILE_TIME_CRC32_STR("dark"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapColorScheme::Dark; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("auto"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode::Auto; break; }
      case COMPILE_TIME_CRC32_STR("disabled"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode::Disabled; break; }
      case COMPILE_TIME_CRC32_STR("gestureOnly"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode::GestureOnly; break; }
      case COMPILE_TIME_CRC32_STR("pointerAndKeyboard"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode::PointerAndKeyboard; break; }
      case COMPILE_TIME_CRC32_STR("controlOnly"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode::ControlOnly; break; }
      case COMPILE_TIME_CRC32_STR("gestureAndControl"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode::GestureAndControl; break; }
      case COMPILE_TIME_CRC32_STR("pointerKeyboardAndControl"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode::PointerKeyboardAndControl; break; }
      case COMPILE_TIME_CRC32_STR("pointerOnly"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapInteractionMode::PointerOnly; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("auto"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode::Auto; break; }
      case COMPILE_TIME_CRC32_STR("disabled"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode::Disabled; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Maps::MapProjection>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::Maps::MapProjection ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("webMercator"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapProjection::WebMercator; break; }
      case COMPILE_TIME_CRC32_STR("globe"): { ret = winrt::Windows::UI::Xaml::Controls::Maps::MapProjection::Globe; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::Stereo3DVideoRenderMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Media::Stereo3DVideoRenderMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("mono"): { ret = winrt::Windows::UI::Xaml::Media::Stereo3DVideoRenderMode::Mono; break; }
      case COMPILE_TIME_CRC32_STR("stereo"): { ret = winrt::Windows::UI::Xaml::Media::Stereo3DVideoRenderMode::Stereo; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::Stereo3DVideoPackingMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Media::Stereo3DVideoPackingMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { ret = winrt::Windows::UI::Xaml::Media::Stereo3DVideoPackingMode::None; break; }
      case COMPILE_TIME_CRC32_STR("sideBySide"): { ret = winrt::Windows::UI::Xaml::Media::Stereo3DVideoPackingMode::SideBySide; break; }
      case COMPILE_TIME_CRC32_STR("topBottom"): { ret = winrt::Windows::UI::Xaml::Media::Stereo3DVideoPackingMode::TopBottom; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::AudioDeviceType>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Media::AudioDeviceType ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("console"): { ret = winrt::Windows::UI::Xaml::Media::AudioDeviceType::Console; break; }
      case COMPILE_TIME_CRC32_STR("multimedia"): { ret = winrt::Windows::UI::Xaml::Media::AudioDeviceType::Multimedia; break; }
      case COMPILE_TIME_CRC32_STR("communications"): { ret = winrt::Windows::UI::Xaml::Media::AudioDeviceType::Communications; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::AudioCategory>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Media::AudioCategory ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("other"): { ret = winrt::Windows::UI::Xaml::Media::AudioCategory::Other; break; }
      case COMPILE_TIME_CRC32_STR("foregroundOnlyMedia"): { ret = winrt::Windows::UI::Xaml::Media::AudioCategory::ForegroundOnlyMedia; break; }
      case COMPILE_TIME_CRC32_STR("backgroundCapableMedia"): { ret = winrt::Windows::UI::Xaml::Media::AudioCategory::BackgroundCapableMedia; break; }
      case COMPILE_TIME_CRC32_STR("communications"): { ret = winrt::Windows::UI::Xaml::Media::AudioCategory::Communications; break; }
      case COMPILE_TIME_CRC32_STR("alerts"): { ret = winrt::Windows::UI::Xaml::Media::AudioCategory::Alerts; break; }
      case COMPILE_TIME_CRC32_STR("soundEffects"): { ret = winrt::Windows::UI::Xaml::Media::AudioCategory::SoundEffects; break; }
      case COMPILE_TIME_CRC32_STR("gameEffects"): { ret = winrt::Windows::UI::Xaml::Media::AudioCategory::GameEffects; break; }
      case COMPILE_TIME_CRC32_STR("gameMedia"): { ret = winrt::Windows::UI::Xaml::Media::AudioCategory::GameMedia; break; }
      case COMPILE_TIME_CRC32_STR("gameChat"): { ret = winrt::Windows::UI::Xaml::Media::AudioCategory::GameChat; break; }
      case COMPILE_TIME_CRC32_STR("speech"): { ret = winrt::Windows::UI::Xaml::Media::AudioCategory::Speech; break; }
      case COMPILE_TIME_CRC32_STR("movie"): { ret = winrt::Windows::UI::Xaml::Media::AudioCategory::Movie; break; }
      case COMPILE_TIME_CRC32_STR("media"): { ret = winrt::Windows::UI::Xaml::Media::AudioCategory::Media; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::FastPlayFallbackBehaviour>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Media::FastPlayFallbackBehaviour ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("skip"): { ret = winrt::Windows::UI::Xaml::Media::FastPlayFallbackBehaviour::Skip; break; }
      case COMPILE_TIME_CRC32_STR("hide"): { ret = winrt::Windows::UI::Xaml::Media::FastPlayFallbackBehaviour::Hide; break; }
      case COMPILE_TIME_CRC32_STR("disable"): { ret = winrt::Windows::UI::Xaml::Media::FastPlayFallbackBehaviour::Disable; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::NavigationViewBackButtonVisible>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::NavigationViewBackButtonVisible ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("collapsed"): { ret = winrt::Windows::UI::Xaml::Controls::NavigationViewBackButtonVisible::Collapsed; break; }
      case COMPILE_TIME_CRC32_STR("visible"): { ret = winrt::Windows::UI::Xaml::Controls::NavigationViewBackButtonVisible::Visible; break; }
      case COMPILE_TIME_CRC32_STR("auto"): { ret = winrt::Windows::UI::Xaml::Controls::NavigationViewBackButtonVisible::Auto; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::NavigationViewShoulderNavigationEnabled>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::NavigationViewShoulderNavigationEnabled ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("whenSelectionFollowsFocus"): { ret = winrt::Windows::UI::Xaml::Controls::NavigationViewShoulderNavigationEnabled::WhenSelectionFollowsFocus; break; }
      case COMPILE_TIME_CRC32_STR("always"): { ret = winrt::Windows::UI::Xaml::Controls::NavigationViewShoulderNavigationEnabled::Always; break; }
      case COMPILE_TIME_CRC32_STR("never"): { ret = winrt::Windows::UI::Xaml::Controls::NavigationViewShoulderNavigationEnabled::Never; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionFollowsFocus>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionFollowsFocus ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("disabled"): { ret = winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionFollowsFocus::Disabled; break; }
      case COMPILE_TIME_CRC32_STR("enabled"): { ret = winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionFollowsFocus::Enabled; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::NavigationViewPaneDisplayMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::NavigationViewPaneDisplayMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("auto"): { ret = winrt::Windows::UI::Xaml::Controls::NavigationViewPaneDisplayMode::Auto; break; }
      case COMPILE_TIME_CRC32_STR("left"): { ret = winrt::Windows::UI::Xaml::Controls::NavigationViewPaneDisplayMode::Left; break; }
      case COMPILE_TIME_CRC32_STR("top"): { ret = winrt::Windows::UI::Xaml::Controls::NavigationViewPaneDisplayMode::Top; break; }
      case COMPILE_TIME_CRC32_STR("leftCompact"): { ret = winrt::Windows::UI::Xaml::Controls::NavigationViewPaneDisplayMode::LeftCompact; break; }
      case COMPILE_TIME_CRC32_STR("leftMinimal"): { ret = winrt::Windows::UI::Xaml::Controls::NavigationViewPaneDisplayMode::LeftMinimal; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::NavigationViewOverflowLabelMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::NavigationViewOverflowLabelMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("moreLabel"): { ret = winrt::Windows::UI::Xaml::Controls::NavigationViewOverflowLabelMode::MoreLabel; break; }
      case COMPILE_TIME_CRC32_STR("noLabel"): { ret = winrt::Windows::UI::Xaml::Controls::NavigationViewOverflowLabelMode::NoLabel; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ParallaxSourceOffsetKind>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::ParallaxSourceOffsetKind ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("absolute"): { ret = winrt::Windows::UI::Xaml::Controls::ParallaxSourceOffsetKind::Absolute; break; }
      case COMPILE_TIME_CRC32_STR("relative"): { ret = winrt::Windows::UI::Xaml::Controls::ParallaxSourceOffsetKind::Relative; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::TextReadingOrder>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::TextReadingOrder ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("default"): { ret = winrt::Windows::UI::Xaml::TextReadingOrder::Default; break; }
      case COMPILE_TIME_CRC32_STR("useFlowDirection"): { ret = winrt::Windows::UI::Xaml::TextReadingOrder::UseFlowDirection; break; }
      case COMPILE_TIME_CRC32_STR("detectFromContent"): { ret = winrt::Windows::UI::Xaml::TextReadingOrder::DetectFromContent; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::PasswordRevealMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::PasswordRevealMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("peek"): { ret = winrt::Windows::UI::Xaml::Controls::PasswordRevealMode::Peek; break; }
      case COMPILE_TIME_CRC32_STR("hidden"): { ret = winrt::Windows::UI::Xaml::Controls::PasswordRevealMode::Hidden; break; }
      case COMPILE_TIME_CRC32_STR("visible"): { ret = winrt::Windows::UI::Xaml::Controls::PasswordRevealMode::Visible; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::PivotHeaderFocusVisualPlacement>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::PivotHeaderFocusVisualPlacement ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("itemHeaders"): { ret = winrt::Windows::UI::Xaml::Controls::PivotHeaderFocusVisualPlacement::ItemHeaders; break; }
      case COMPILE_TIME_CRC32_STR("selectedItemHeader"): { ret = winrt::Windows::UI::Xaml::Controls::PivotHeaderFocusVisualPlacement::SelectedItemHeader; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Primitives::TickPlacement>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::Primitives::TickPlacement ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::TickPlacement::None; break; }
      case COMPILE_TIME_CRC32_STR("topLeft"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::TickPlacement::TopLeft; break; }
      case COMPILE_TIME_CRC32_STR("bottomRight"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::TickPlacement::BottomRight; break; }
      case COMPILE_TIME_CRC32_STR("outside"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::TickPlacement::Outside; break; }
      case COMPILE_TIME_CRC32_STR("inline"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::TickPlacement::Inline; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Primitives::SliderSnapsTo>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::Primitives::SliderSnapsTo ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("stepValues"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::SliderSnapsTo::StepValues; break; }
      case COMPILE_TIME_CRC32_STR("ticks"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::SliderSnapsTo::Ticks; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ColorPickerHsvChannel>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::ColorPickerHsvChannel ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("hue"): { ret = winrt::Windows::UI::Xaml::Controls::ColorPickerHsvChannel::Hue; break; }
      case COMPILE_TIME_CRC32_STR("saturation"): { ret = winrt::Windows::UI::Xaml::Controls::ColorPickerHsvChannel::Saturation; break; }
      case COMPILE_TIME_CRC32_STR("value"): { ret = winrt::Windows::UI::Xaml::Controls::ColorPickerHsvChannel::Value; break; }
      case COMPILE_TIME_CRC32_STR("alpha"): { ret = winrt::Windows::UI::Xaml::Controls::ColorPickerHsvChannel::Alpha; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("inline"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode::Inline; break; }
      case COMPILE_TIME_CRC32_STR("overlay"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode::Overlay; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode::None; break; }
      case COMPILE_TIME_CRC32_STR("touchIndicator"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode::TouchIndicator; break; }
      case COMPILE_TIME_CRC32_STR("mouseIndicator"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode::MouseIndicator; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::RefreshPullDirection>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::RefreshPullDirection ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("leftToRight"): { ret = winrt::Windows::UI::Xaml::Controls::RefreshPullDirection::LeftToRight; break; }
      case COMPILE_TIME_CRC32_STR("topToBottom"): { ret = winrt::Windows::UI::Xaml::Controls::RefreshPullDirection::TopToBottom; break; }
      case COMPILE_TIME_CRC32_STR("rightToLeft"): { ret = winrt::Windows::UI::Xaml::Controls::RefreshPullDirection::RightToLeft; break; }
      case COMPILE_TIME_CRC32_STR("bottomToTop"): { ret = winrt::Windows::UI::Xaml::Controls::RefreshPullDirection::BottomToTop; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::RefreshVisualizerOrientation>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::RefreshVisualizerOrientation ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("auto"): { ret = winrt::Windows::UI::Xaml::Controls::RefreshVisualizerOrientation::Auto; break; }
      case COMPILE_TIME_CRC32_STR("normal"): { ret = winrt::Windows::UI::Xaml::Controls::RefreshVisualizerOrientation::Normal; break; }
      case COMPILE_TIME_CRC32_STR("rotate90DegreesCounterclockwise"): { ret = winrt::Windows::UI::Xaml::Controls::RefreshVisualizerOrientation::Rotate90DegreesCounterclockwise; break; }
      case COMPILE_TIME_CRC32_STR("rotate270DegreesCounterclockwise"): { ret = winrt::Windows::UI::Xaml::Controls::RefreshVisualizerOrientation::Rotate270DegreesCounterclockwise; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::TextAlignment>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::TextAlignment ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("center"): { ret = winrt::Windows::UI::Xaml::TextAlignment::Center; break; }
      case COMPILE_TIME_CRC32_STR("left"): { ret = winrt::Windows::UI::Xaml::TextAlignment::Left; break; }
      case COMPILE_TIME_CRC32_STR("start"): { ret = winrt::Windows::UI::Xaml::TextAlignment::Start; break; }
      case COMPILE_TIME_CRC32_STR("right"): { ret = winrt::Windows::UI::Xaml::TextAlignment::Right; break; }
      case COMPILE_TIME_CRC32_STR("end"): { ret = winrt::Windows::UI::Xaml::TextAlignment::End; break; }
      case COMPILE_TIME_CRC32_STR("justify"): { ret = winrt::Windows::UI::Xaml::TextAlignment::Justify; break; }
      case COMPILE_TIME_CRC32_STR("detectFromContent"): { ret = winrt::Windows::UI::Xaml::TextAlignment::DetectFromContent; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::CandidateWindowAlignment>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::CandidateWindowAlignment ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("default"): { ret = winrt::Windows::UI::Xaml::Controls::CandidateWindowAlignment::Default; break; }
      case COMPILE_TIME_CRC32_STR("bottomEdge"): { ret = winrt::Windows::UI::Xaml::Controls::CandidateWindowAlignment::BottomEdge; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::RichEditClipboardFormat>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::RichEditClipboardFormat ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("allFormats"): { ret = winrt::Windows::UI::Xaml::Controls::RichEditClipboardFormat::AllFormats; break; }
      case COMPILE_TIME_CRC32_STR("plainText"): { ret = winrt::Windows::UI::Xaml::Controls::RichEditClipboardFormat::PlainText; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::DisabledFormattingAccelerators>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::DisabledFormattingAccelerators ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { ret = winrt::Windows::UI::Xaml::Controls::DisabledFormattingAccelerators::None; break; }
      case COMPILE_TIME_CRC32_STR("bold"): { ret = winrt::Windows::UI::Xaml::Controls::DisabledFormattingAccelerators::Bold; break; }
      case COMPILE_TIME_CRC32_STR("italic"): { ret = winrt::Windows::UI::Xaml::Controls::DisabledFormattingAccelerators::Italic; break; }
      case COMPILE_TIME_CRC32_STR("underline"): { ret = winrt::Windows::UI::Xaml::Controls::DisabledFormattingAccelerators::Underline; break; }
      case COMPILE_TIME_CRC32_STR("all"): { ret = winrt::Windows::UI::Xaml::Controls::DisabledFormattingAccelerators::All; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::CharacterCasing>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::CharacterCasing ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("normal"): { ret = winrt::Windows::UI::Xaml::Controls::CharacterCasing::Normal; break; }
      case COMPILE_TIME_CRC32_STR("lower"): { ret = winrt::Windows::UI::Xaml::Controls::CharacterCasing::Lower; break; }
      case COMPILE_TIME_CRC32_STR("upper"): { ret = winrt::Windows::UI::Xaml::Controls::CharacterCasing::Upper; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::TextTrimming>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::TextTrimming ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { ret = winrt::Windows::UI::Xaml::TextTrimming::None; break; }
      case COMPILE_TIME_CRC32_STR("characterEllipsis"): { ret = winrt::Windows::UI::Xaml::TextTrimming::CharacterEllipsis; break; }
      case COMPILE_TIME_CRC32_STR("wordEllipsis"): { ret = winrt::Windows::UI::Xaml::TextTrimming::WordEllipsis; break; }
      case COMPILE_TIME_CRC32_STR("clip"): { ret = winrt::Windows::UI::Xaml::TextTrimming::Clip; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Text::TextDecorations>(const std::string& value) noexcept { 
  winrt::Windows::UI::Text::TextDecorations ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { ret = winrt::Windows::UI::Text::TextDecorations::None; break; }
      case COMPILE_TIME_CRC32_STR("underline"): { ret = winrt::Windows::UI::Text::TextDecorations::Underline; break; }
      case COMPILE_TIME_CRC32_STR("strikethrough"): { ret = winrt::Windows::UI::Text::TextDecorations::Strikethrough; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::SnapPointsType>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::SnapPointsType ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { ret = winrt::Windows::UI::Xaml::Controls::SnapPointsType::None; break; }
      case COMPILE_TIME_CRC32_STR("optional"): { ret = winrt::Windows::UI::Xaml::Controls::SnapPointsType::Optional; break; }
      case COMPILE_TIME_CRC32_STR("mandatory"): { ret = winrt::Windows::UI::Xaml::Controls::SnapPointsType::Mandatory; break; }
      case COMPILE_TIME_CRC32_STR("optionalSingle"): { ret = winrt::Windows::UI::Xaml::Controls::SnapPointsType::OptionalSingle; break; }
      case COMPILE_TIME_CRC32_STR("mandatorySingle"): { ret = winrt::Windows::UI::Xaml::Controls::SnapPointsType::MandatorySingle; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("near"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment::Near; break; }
      case COMPILE_TIME_CRC32_STR("center"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment::Center; break; }
      case COMPILE_TIME_CRC32_STR("far"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment::Far; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ScrollMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::ScrollMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("disabled"): { ret = winrt::Windows::UI::Xaml::Controls::ScrollMode::Disabled; break; }
      case COMPILE_TIME_CRC32_STR("enabled"): { ret = winrt::Windows::UI::Xaml::Controls::ScrollMode::Enabled; break; }
      case COMPILE_TIME_CRC32_STR("auto"): { ret = winrt::Windows::UI::Xaml::Controls::ScrollMode::Auto; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ScrollBarVisibility>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::ScrollBarVisibility ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("disabled"): { ret = winrt::Windows::UI::Xaml::Controls::ScrollBarVisibility::Disabled; break; }
      case COMPILE_TIME_CRC32_STR("auto"): { ret = winrt::Windows::UI::Xaml::Controls::ScrollBarVisibility::Auto; break; }
      case COMPILE_TIME_CRC32_STR("hidden"): { ret = winrt::Windows::UI::Xaml::Controls::ScrollBarVisibility::Hidden; break; }
      case COMPILE_TIME_CRC32_STR("visible"): { ret = winrt::Windows::UI::Xaml::Controls::ScrollBarVisibility::Visible; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::ZoomMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::ZoomMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("disabled"): { ret = winrt::Windows::UI::Xaml::Controls::ZoomMode::Disabled; break; }
      case COMPILE_TIME_CRC32_STR("enabled"): { ret = winrt::Windows::UI::Xaml::Controls::ZoomMode::Enabled; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::SplitViewPanePlacement>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::SplitViewPanePlacement ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("left"): { ret = winrt::Windows::UI::Xaml::Controls::SplitViewPanePlacement::Left; break; }
      case COMPILE_TIME_CRC32_STR("right"): { ret = winrt::Windows::UI::Xaml::Controls::SplitViewPanePlacement::Right; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::SplitViewDisplayMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::SplitViewDisplayMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("overlay"): { ret = winrt::Windows::UI::Xaml::Controls::SplitViewDisplayMode::Overlay; break; }
      case COMPILE_TIME_CRC32_STR("inline"): { ret = winrt::Windows::UI::Xaml::Controls::SplitViewDisplayMode::Inline; break; }
      case COMPILE_TIME_CRC32_STR("compactOverlay"): { ret = winrt::Windows::UI::Xaml::Controls::SplitViewDisplayMode::CompactOverlay; break; }
      case COMPILE_TIME_CRC32_STR("compactInline"): { ret = winrt::Windows::UI::Xaml::Controls::SplitViewDisplayMode::CompactInline; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Symbol>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::Symbol ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("previous"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Previous; break; }
      case COMPILE_TIME_CRC32_STR("next"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Next; break; }
      case COMPILE_TIME_CRC32_STR("play"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Play; break; }
      case COMPILE_TIME_CRC32_STR("pause"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Pause; break; }
      case COMPILE_TIME_CRC32_STR("edit"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Edit; break; }
      case COMPILE_TIME_CRC32_STR("save"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Save; break; }
      case COMPILE_TIME_CRC32_STR("clear"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Clear; break; }
      case COMPILE_TIME_CRC32_STR("delete"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Delete; break; }
      case COMPILE_TIME_CRC32_STR("remove"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Remove; break; }
      case COMPILE_TIME_CRC32_STR("add"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Add; break; }
      case COMPILE_TIME_CRC32_STR("cancel"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Cancel; break; }
      case COMPILE_TIME_CRC32_STR("accept"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Accept; break; }
      case COMPILE_TIME_CRC32_STR("more"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::More; break; }
      case COMPILE_TIME_CRC32_STR("redo"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Redo; break; }
      case COMPILE_TIME_CRC32_STR("undo"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Undo; break; }
      case COMPILE_TIME_CRC32_STR("home"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Home; break; }
      case COMPILE_TIME_CRC32_STR("up"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Up; break; }
      case COMPILE_TIME_CRC32_STR("forward"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Forward; break; }
      case COMPILE_TIME_CRC32_STR("back"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Back; break; }
      case COMPILE_TIME_CRC32_STR("favorite"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Favorite; break; }
      case COMPILE_TIME_CRC32_STR("camera"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Camera; break; }
      case COMPILE_TIME_CRC32_STR("setting"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Setting; break; }
      case COMPILE_TIME_CRC32_STR("video"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Video; break; }
      case COMPILE_TIME_CRC32_STR("sync"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Sync; break; }
      case COMPILE_TIME_CRC32_STR("download"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Download; break; }
      case COMPILE_TIME_CRC32_STR("mail"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Mail; break; }
      case COMPILE_TIME_CRC32_STR("find"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Find; break; }
      case COMPILE_TIME_CRC32_STR("help"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Help; break; }
      case COMPILE_TIME_CRC32_STR("upload"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Upload; break; }
      case COMPILE_TIME_CRC32_STR("emoji"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Emoji; break; }
      case COMPILE_TIME_CRC32_STR("twoPage"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::TwoPage; break; }
      case COMPILE_TIME_CRC32_STR("leaveChat"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::LeaveChat; break; }
      case COMPILE_TIME_CRC32_STR("mailForward"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::MailForward; break; }
      case COMPILE_TIME_CRC32_STR("clock"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Clock; break; }
      case COMPILE_TIME_CRC32_STR("send"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Send; break; }
      case COMPILE_TIME_CRC32_STR("crop"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Crop; break; }
      case COMPILE_TIME_CRC32_STR("rotateCamera"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::RotateCamera; break; }
      case COMPILE_TIME_CRC32_STR("people"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::People; break; }
      case COMPILE_TIME_CRC32_STR("openPane"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::OpenPane; break; }
      case COMPILE_TIME_CRC32_STR("closePane"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::ClosePane; break; }
      case COMPILE_TIME_CRC32_STR("world"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::World; break; }
      case COMPILE_TIME_CRC32_STR("flag"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Flag; break; }
      case COMPILE_TIME_CRC32_STR("previewLink"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::PreviewLink; break; }
      case COMPILE_TIME_CRC32_STR("globe"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Globe; break; }
      case COMPILE_TIME_CRC32_STR("trim"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Trim; break; }
      case COMPILE_TIME_CRC32_STR("attachCamera"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::AttachCamera; break; }
      case COMPILE_TIME_CRC32_STR("zoomIn"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::ZoomIn; break; }
      case COMPILE_TIME_CRC32_STR("bookmarks"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Bookmarks; break; }
      case COMPILE_TIME_CRC32_STR("document"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Document; break; }
      case COMPILE_TIME_CRC32_STR("protectedDocument"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::ProtectedDocument; break; }
      case COMPILE_TIME_CRC32_STR("page"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Page; break; }
      case COMPILE_TIME_CRC32_STR("bullets"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Bullets; break; }
      case COMPILE_TIME_CRC32_STR("comment"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Comment; break; }
      case COMPILE_TIME_CRC32_STR("mailFilled"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::MailFilled; break; }
      case COMPILE_TIME_CRC32_STR("contactInfo"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::ContactInfo; break; }
      case COMPILE_TIME_CRC32_STR("hangUp"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::HangUp; break; }
      case COMPILE_TIME_CRC32_STR("viewAll"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::ViewAll; break; }
      case COMPILE_TIME_CRC32_STR("mapPin"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::MapPin; break; }
      case COMPILE_TIME_CRC32_STR("phone"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Phone; break; }
      case COMPILE_TIME_CRC32_STR("videoChat"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::VideoChat; break; }
      case COMPILE_TIME_CRC32_STR("switch"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Switch; break; }
      case COMPILE_TIME_CRC32_STR("contact"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Contact; break; }
      case COMPILE_TIME_CRC32_STR("rename"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Rename; break; }
      case COMPILE_TIME_CRC32_STR("pin"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Pin; break; }
      case COMPILE_TIME_CRC32_STR("musicInfo"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::MusicInfo; break; }
      case COMPILE_TIME_CRC32_STR("go"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Go; break; }
      case COMPILE_TIME_CRC32_STR("keyboard"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Keyboard; break; }
      case COMPILE_TIME_CRC32_STR("dockLeft"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::DockLeft; break; }
      case COMPILE_TIME_CRC32_STR("dockRight"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::DockRight; break; }
      case COMPILE_TIME_CRC32_STR("dockBottom"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::DockBottom; break; }
      case COMPILE_TIME_CRC32_STR("remote"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Remote; break; }
      case COMPILE_TIME_CRC32_STR("refresh"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Refresh; break; }
      case COMPILE_TIME_CRC32_STR("rotate"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Rotate; break; }
      case COMPILE_TIME_CRC32_STR("shuffle"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Shuffle; break; }
      case COMPILE_TIME_CRC32_STR("list"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::List; break; }
      case COMPILE_TIME_CRC32_STR("shop"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Shop; break; }
      case COMPILE_TIME_CRC32_STR("selectAll"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::SelectAll; break; }
      case COMPILE_TIME_CRC32_STR("orientation"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Orientation; break; }
      case COMPILE_TIME_CRC32_STR("import"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Import; break; }
      case COMPILE_TIME_CRC32_STR("importAll"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::ImportAll; break; }
      case COMPILE_TIME_CRC32_STR("browsePhotos"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::BrowsePhotos; break; }
      case COMPILE_TIME_CRC32_STR("webCam"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::WebCam; break; }
      case COMPILE_TIME_CRC32_STR("pictures"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Pictures; break; }
      case COMPILE_TIME_CRC32_STR("saveLocal"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::SaveLocal; break; }
      case COMPILE_TIME_CRC32_STR("caption"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Caption; break; }
      case COMPILE_TIME_CRC32_STR("stop"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Stop; break; }
      case COMPILE_TIME_CRC32_STR("showResults"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::ShowResults; break; }
      case COMPILE_TIME_CRC32_STR("volume"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Volume; break; }
      case COMPILE_TIME_CRC32_STR("repair"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Repair; break; }
      case COMPILE_TIME_CRC32_STR("message"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Message; break; }
      case COMPILE_TIME_CRC32_STR("page2"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Page2; break; }
      case COMPILE_TIME_CRC32_STR("calendarDay"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::CalendarDay; break; }
      case COMPILE_TIME_CRC32_STR("calendarWeek"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::CalendarWeek; break; }
      case COMPILE_TIME_CRC32_STR("calendar"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Calendar; break; }
      case COMPILE_TIME_CRC32_STR("character"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Character; break; }
      case COMPILE_TIME_CRC32_STR("mailReplyAll"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::MailReplyAll; break; }
      case COMPILE_TIME_CRC32_STR("read"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Read; break; }
      case COMPILE_TIME_CRC32_STR("link"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Link; break; }
      case COMPILE_TIME_CRC32_STR("account"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Account; break; }
      case COMPILE_TIME_CRC32_STR("showBcc"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::ShowBcc; break; }
      case COMPILE_TIME_CRC32_STR("hideBcc"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::HideBcc; break; }
      case COMPILE_TIME_CRC32_STR("cut"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Cut; break; }
      case COMPILE_TIME_CRC32_STR("attach"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Attach; break; }
      case COMPILE_TIME_CRC32_STR("paste"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Paste; break; }
      case COMPILE_TIME_CRC32_STR("filter"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Filter; break; }
      case COMPILE_TIME_CRC32_STR("copy"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Copy; break; }
      case COMPILE_TIME_CRC32_STR("emoji2"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Emoji2; break; }
      case COMPILE_TIME_CRC32_STR("important"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Important; break; }
      case COMPILE_TIME_CRC32_STR("mailReply"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::MailReply; break; }
      case COMPILE_TIME_CRC32_STR("slideShow"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::SlideShow; break; }
      case COMPILE_TIME_CRC32_STR("sort"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Sort; break; }
      case COMPILE_TIME_CRC32_STR("manage"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Manage; break; }
      case COMPILE_TIME_CRC32_STR("allApps"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::AllApps; break; }
      case COMPILE_TIME_CRC32_STR("disconnectDrive"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::DisconnectDrive; break; }
      case COMPILE_TIME_CRC32_STR("mapDrive"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::MapDrive; break; }
      case COMPILE_TIME_CRC32_STR("newWindow"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::NewWindow; break; }
      case COMPILE_TIME_CRC32_STR("openWith"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::OpenWith; break; }
      case COMPILE_TIME_CRC32_STR("contactPresence"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::ContactPresence; break; }
      case COMPILE_TIME_CRC32_STR("priority"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Priority; break; }
      case COMPILE_TIME_CRC32_STR("goToToday"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::GoToToday; break; }
      case COMPILE_TIME_CRC32_STR("font"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Font; break; }
      case COMPILE_TIME_CRC32_STR("fontColor"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::FontColor; break; }
      case COMPILE_TIME_CRC32_STR("contact2"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Contact2; break; }
      case COMPILE_TIME_CRC32_STR("folder"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Folder; break; }
      case COMPILE_TIME_CRC32_STR("audio"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Audio; break; }
      case COMPILE_TIME_CRC32_STR("placeholder"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Placeholder; break; }
      case COMPILE_TIME_CRC32_STR("view"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::View; break; }
      case COMPILE_TIME_CRC32_STR("setLockScreen"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::SetLockScreen; break; }
      case COMPILE_TIME_CRC32_STR("setTile"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::SetTile; break; }
      case COMPILE_TIME_CRC32_STR("closedCaption"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::ClosedCaption; break; }
      case COMPILE_TIME_CRC32_STR("stopSlideShow"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::StopSlideShow; break; }
      case COMPILE_TIME_CRC32_STR("permissions"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Permissions; break; }
      case COMPILE_TIME_CRC32_STR("highlight"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Highlight; break; }
      case COMPILE_TIME_CRC32_STR("disableUpdates"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::DisableUpdates; break; }
      case COMPILE_TIME_CRC32_STR("unFavorite"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::UnFavorite; break; }
      case COMPILE_TIME_CRC32_STR("unPin"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::UnPin; break; }
      case COMPILE_TIME_CRC32_STR("openLocal"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::OpenLocal; break; }
      case COMPILE_TIME_CRC32_STR("mute"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Mute; break; }
      case COMPILE_TIME_CRC32_STR("italic"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Italic; break; }
      case COMPILE_TIME_CRC32_STR("underline"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Underline; break; }
      case COMPILE_TIME_CRC32_STR("bold"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Bold; break; }
      case COMPILE_TIME_CRC32_STR("moveToFolder"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::MoveToFolder; break; }
      case COMPILE_TIME_CRC32_STR("likeDislike"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::LikeDislike; break; }
      case COMPILE_TIME_CRC32_STR("dislike"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Dislike; break; }
      case COMPILE_TIME_CRC32_STR("like"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Like; break; }
      case COMPILE_TIME_CRC32_STR("alignRight"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::AlignRight; break; }
      case COMPILE_TIME_CRC32_STR("alignCenter"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::AlignCenter; break; }
      case COMPILE_TIME_CRC32_STR("alignLeft"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::AlignLeft; break; }
      case COMPILE_TIME_CRC32_STR("zoom"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Zoom; break; }
      case COMPILE_TIME_CRC32_STR("zoomOut"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::ZoomOut; break; }
      case COMPILE_TIME_CRC32_STR("openFile"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::OpenFile; break; }
      case COMPILE_TIME_CRC32_STR("otherUser"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::OtherUser; break; }
      case COMPILE_TIME_CRC32_STR("admin"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Admin; break; }
      case COMPILE_TIME_CRC32_STR("street"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Street; break; }
      case COMPILE_TIME_CRC32_STR("map"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Map; break; }
      case COMPILE_TIME_CRC32_STR("clearSelection"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::ClearSelection; break; }
      case COMPILE_TIME_CRC32_STR("fontDecrease"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::FontDecrease; break; }
      case COMPILE_TIME_CRC32_STR("fontIncrease"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::FontIncrease; break; }
      case COMPILE_TIME_CRC32_STR("fontSize"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::FontSize; break; }
      case COMPILE_TIME_CRC32_STR("cellPhone"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::CellPhone; break; }
      case COMPILE_TIME_CRC32_STR("reShare"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::ReShare; break; }
      case COMPILE_TIME_CRC32_STR("tag"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Tag; break; }
      case COMPILE_TIME_CRC32_STR("repeatOne"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::RepeatOne; break; }
      case COMPILE_TIME_CRC32_STR("repeatAll"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::RepeatAll; break; }
      case COMPILE_TIME_CRC32_STR("outlineStar"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::OutlineStar; break; }
      case COMPILE_TIME_CRC32_STR("solidStar"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::SolidStar; break; }
      case COMPILE_TIME_CRC32_STR("calculator"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Calculator; break; }
      case COMPILE_TIME_CRC32_STR("directions"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Directions; break; }
      case COMPILE_TIME_CRC32_STR("target"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Target; break; }
      case COMPILE_TIME_CRC32_STR("library"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Library; break; }
      case COMPILE_TIME_CRC32_STR("phoneBook"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::PhoneBook; break; }
      case COMPILE_TIME_CRC32_STR("memo"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Memo; break; }
      case COMPILE_TIME_CRC32_STR("microphone"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Microphone; break; }
      case COMPILE_TIME_CRC32_STR("postUpdate"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::PostUpdate; break; }
      case COMPILE_TIME_CRC32_STR("backToWindow"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::BackToWindow; break; }
      case COMPILE_TIME_CRC32_STR("fullScreen"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::FullScreen; break; }
      case COMPILE_TIME_CRC32_STR("newFolder"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::NewFolder; break; }
      case COMPILE_TIME_CRC32_STR("calendarReply"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::CalendarReply; break; }
      case COMPILE_TIME_CRC32_STR("unSyncFolder"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::UnSyncFolder; break; }
      case COMPILE_TIME_CRC32_STR("reportHacked"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::ReportHacked; break; }
      case COMPILE_TIME_CRC32_STR("syncFolder"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::SyncFolder; break; }
      case COMPILE_TIME_CRC32_STR("blockContact"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::BlockContact; break; }
      case COMPILE_TIME_CRC32_STR("switchApps"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::SwitchApps; break; }
      case COMPILE_TIME_CRC32_STR("addFriend"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::AddFriend; break; }
      case COMPILE_TIME_CRC32_STR("touchPointer"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::TouchPointer; break; }
      case COMPILE_TIME_CRC32_STR("goToStart"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::GoToStart; break; }
      case COMPILE_TIME_CRC32_STR("zeroBars"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::ZeroBars; break; }
      case COMPILE_TIME_CRC32_STR("oneBar"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::OneBar; break; }
      case COMPILE_TIME_CRC32_STR("twoBars"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::TwoBars; break; }
      case COMPILE_TIME_CRC32_STR("threeBars"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::ThreeBars; break; }
      case COMPILE_TIME_CRC32_STR("fourBars"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::FourBars; break; }
      case COMPILE_TIME_CRC32_STR("scan"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Scan; break; }
      case COMPILE_TIME_CRC32_STR("preview"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Preview; break; }
      case COMPILE_TIME_CRC32_STR("globalNavigationButton"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::GlobalNavigationButton; break; }
      case COMPILE_TIME_CRC32_STR("share"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Share; break; }
      case COMPILE_TIME_CRC32_STR("print"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::Print; break; }
      case COMPILE_TIME_CRC32_STR("xboxOneConsole"): { ret = winrt::Windows::UI::Xaml::Controls::Symbol::XboxOneConsole; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::Primitives::PlacementMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::Primitives::PlacementMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("bottom"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::PlacementMode::Bottom; break; }
      case COMPILE_TIME_CRC32_STR("left"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::PlacementMode::Left; break; }
      case COMPILE_TIME_CRC32_STR("mouse"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::PlacementMode::Mouse; break; }
      case COMPILE_TIME_CRC32_STR("right"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::PlacementMode::Right; break; }
      case COMPILE_TIME_CRC32_STR("top"): { ret = winrt::Windows::UI::Xaml::Controls::Primitives::PlacementMode::Top; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::TreeViewSelectionMode>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::TreeViewSelectionMode ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { ret = winrt::Windows::UI::Xaml::Controls::TreeViewSelectionMode::None; break; }
      case COMPILE_TIME_CRC32_STR("single"): { ret = winrt::Windows::UI::Xaml::Controls::TreeViewSelectionMode::Single; break; }
      case COMPILE_TIME_CRC32_STR("multiple"): { ret = winrt::Windows::UI::Xaml::Controls::TreeViewSelectionMode::Multiple; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::TwoPaneViewWideModeConfiguration>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::TwoPaneViewWideModeConfiguration ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("singlePane"): { ret = winrt::Windows::UI::Xaml::Controls::TwoPaneViewWideModeConfiguration::SinglePane; break; }
      case COMPILE_TIME_CRC32_STR("leftRight"): { ret = winrt::Windows::UI::Xaml::Controls::TwoPaneViewWideModeConfiguration::LeftRight; break; }
      case COMPILE_TIME_CRC32_STR("rightLeft"): { ret = winrt::Windows::UI::Xaml::Controls::TwoPaneViewWideModeConfiguration::RightLeft; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::TwoPaneViewTallModeConfiguration>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::TwoPaneViewTallModeConfiguration ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("singlePane"): { ret = winrt::Windows::UI::Xaml::Controls::TwoPaneViewTallModeConfiguration::SinglePane; break; }
      case COMPILE_TIME_CRC32_STR("topBottom"): { ret = winrt::Windows::UI::Xaml::Controls::TwoPaneViewTallModeConfiguration::TopBottom; break; }
      case COMPILE_TIME_CRC32_STR("bottomTop"): { ret = winrt::Windows::UI::Xaml::Controls::TwoPaneViewTallModeConfiguration::BottomTop; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::TwoPaneViewPriority>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::TwoPaneViewPriority ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("pane1"): { ret = winrt::Windows::UI::Xaml::Controls::TwoPaneViewPriority::Pane1; break; }
      case COMPILE_TIME_CRC32_STR("pane2"): { ret = winrt::Windows::UI::Xaml::Controls::TwoPaneViewPriority::Pane2; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Controls::StretchDirection>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Controls::StretchDirection ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("upOnly"): { ret = winrt::Windows::UI::Xaml::Controls::StretchDirection::UpOnly; break; }
      case COMPILE_TIME_CRC32_STR("downOnly"): { ret = winrt::Windows::UI::Xaml::Controls::StretchDirection::DownOnly; break; }
      case COMPILE_TIME_CRC32_STR("both"): { ret = winrt::Windows::UI::Xaml::Controls::StretchDirection::Both; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::StyleSimulations>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Media::StyleSimulations ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("none"): { ret = winrt::Windows::UI::Xaml::Media::StyleSimulations::None; break; }
      case COMPILE_TIME_CRC32_STR("boldSimulation"): { ret = winrt::Windows::UI::Xaml::Media::StyleSimulations::BoldSimulation; break; }
      case COMPILE_TIME_CRC32_STR("italicSimulation"): { ret = winrt::Windows::UI::Xaml::Media::StyleSimulations::ItalicSimulation; break; }
      case COMPILE_TIME_CRC32_STR("boldItalicSimulation"): { ret = winrt::Windows::UI::Xaml::Media::StyleSimulations::BoldItalicSimulation; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::PenLineCap>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Media::PenLineCap ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("flat"): { ret = winrt::Windows::UI::Xaml::Media::PenLineCap::Flat; break; }
      case COMPILE_TIME_CRC32_STR("square"): { ret = winrt::Windows::UI::Xaml::Media::PenLineCap::Square; break; }
      case COMPILE_TIME_CRC32_STR("round"): { ret = winrt::Windows::UI::Xaml::Media::PenLineCap::Round; break; }
      case COMPILE_TIME_CRC32_STR("triangle"): { ret = winrt::Windows::UI::Xaml::Media::PenLineCap::Triangle; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::PenLineJoin>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Media::PenLineJoin ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("miter"): { ret = winrt::Windows::UI::Xaml::Media::PenLineJoin::Miter; break; }
      case COMPILE_TIME_CRC32_STR("bevel"): { ret = winrt::Windows::UI::Xaml::Media::PenLineJoin::Bevel; break; }
      case COMPILE_TIME_CRC32_STR("round"): { ret = winrt::Windows::UI::Xaml::Media::PenLineJoin::Round; break; }
    }

  return winrt::box_value(ret);
  }

  template<> winrt::IInspectable MakeEnum<winrt::Windows::UI::Xaml::Media::FillRule>(const std::string& value) noexcept { 
  winrt::Windows::UI::Xaml::Media::FillRule ret;
  switch (COMPILE_TIME_CRC32_STR(value.c_str())) {
	    case COMPILE_TIME_CRC32_STR("evenOdd"): { ret = winrt::Windows::UI::Xaml::Media::FillRule::EvenOdd; break; }
      case COMPILE_TIME_CRC32_STR("nonzero"): { ret = winrt::Windows::UI::Xaml::Media::FillRule::Nonzero; break; }
    }

  return winrt::box_value(ret);
  }

