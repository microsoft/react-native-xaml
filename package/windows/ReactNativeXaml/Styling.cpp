#include <pch.h>
#include "Styling.h"

/// from RNW ValueUtils.cpp
#pragma region Copied from RNW ValueUtils.cpp
namespace ColorUtils {

  inline winrt::Windows::UI::Color FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b) {
      return winrt::Windows::UI::Color{ a, r, g, b };
  }

  struct ColorComp {
    bool operator()(const winrt::Windows::UI::Color& lhs, const winrt::Windows::UI::Color& rhs) const {
      return (
        lhs.A < rhs.A ||
        lhs.A == rhs.A && (lhs.R < rhs.R || lhs.R == rhs.R && (lhs.G < rhs.G || lhs.G == rhs.G && lhs.B < rhs.B)));
    }
  };

  xaml::Media::SolidColorBrush SolidBrushFromColor(winrt::Windows::UI::Color color) {
    thread_local static std::map<winrt::Windows::UI::Color, winrt::weak_ref<xaml::Media::SolidColorBrush>, ColorComp>
      solidColorBrushCache;

    if (solidColorBrushCache.count(color) != 0) {
      if (auto brush = solidColorBrushCache[color].get()) {
        return brush;
      }
    }

    xaml::Media::SolidColorBrush brush(color);
    solidColorBrushCache[color] = winrt::make_weak(brush);
    return brush;
  }

  inline BYTE GetAFromArgb(DWORD v) {
    return ((BYTE)((v & 0xFF000000) >> 24));
  }
  inline BYTE GetRFromArgb(DWORD v) {
    return ((BYTE)((v & 0x00FF0000) >> 16));
  }
  inline BYTE GetGFromArgb(DWORD v) {
    return ((BYTE)((v & 0x0000FF00) >> 8));
  }
  inline BYTE GetBFromArgb(DWORD v) {
    return ((BYTE)((v & 0x000000FF)));
  }


  winrt::Windows::UI::Color ColorFromNumber(DWORD argb) {
    return FromArgb(GetAFromArgb(argb), GetRFromArgb(argb), GetGFromArgb(argb), GetBFromArgb(argb));
  }

  winrt::Windows::UI::Color ColorFrom(const winrt::Microsoft::ReactNative::JSValue& v) {
    if (v.Type() != winrt::Microsoft::ReactNative::JSValueType::Int64 &&
      v.Type() != winrt::Microsoft::ReactNative::JSValueType::Double)
      return winrt::Windows::UI::Colors::Transparent();
    return ColorFromNumber(v.AsUInt32());
  }

  xaml::Media::Brush GetBrushFromThemeResource(winrt::hstring resourceName) {
    winrt::hstring xamlString =
      L"<ResourceDictionary"
      L"    xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation'"
      L"    xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml'>"
      L"  <SolidColorBrush"
      L"      x:Key='" +
      resourceName +
      L"'"
      L"      Color='{ThemeResource " +
      resourceName +
      "}' />"
      L"</ResourceDictionary>";

    auto dictionary{ winrt::unbox_value<xaml::ResourceDictionary>(xaml::Markup::XamlReader::Load(xamlString)) };

    auto brush{ winrt::unbox_value<xaml::Media::SolidColorBrush>(dictionary.TryLookup(winrt::box_value(resourceName))) };
    return brush;
  }

  xaml::Media::Brush BrushFromColorObject(winrt::hstring resourceName) {
    thread_local static std::map<winrt::hstring, winrt::weak_ref<xaml::Media::Brush>> accentColorMap = {
        {L"SystemAccentColor", {nullptr}},
        {L"SystemAccentColorLight1", {nullptr}},
        {L"SystemAccentColorLight2", {nullptr}},
        {L"SystemAccentColorLight3", {nullptr}},
        {L"SystemAccentColorDark1", {nullptr}},
        {L"SystemAccentColorDark2", {nullptr}},
        {L"SystemAccentColorDark3", {nullptr}},
        {L"SystemListAccentLowColor", {nullptr}},
        {L"SystemListAccentMediumColor", {nullptr}},
        {L"SystemListAccentHighColor", {nullptr}} };
    xaml::Media::Brush brush{ nullptr };

    if (accentColorMap.find(resourceName) != accentColorMap.end()) {
      if (brush = accentColorMap.at(resourceName).get()) {
        return brush;
      }
      try {
        brush = GetBrushFromThemeResource(resourceName);
      }
      catch (...) {}
    }

    if (!brush) {
      try {
        auto color = winrt::unbox_value<winrt::Windows::UI::Color>(xaml::Markup::XamlBindingHelper::ConvertValue(winrt::xaml_typename<winrt::Windows::UI::Color>(), winrt::box_value(resourceName)));
        brush = SolidBrushFromColor(color);
      }
      catch (...) {}
    }
    if (!brush) {
      winrt::IInspectable resource{ xaml::Application::Current().Resources().TryLookup(winrt::box_value(resourceName)) };
      brush = winrt::unbox_value<xaml::Media::Brush>(resource);
    }

    if (brush) {
      accentColorMap[resourceName] = winrt::make_weak(brush);
    }

    return brush;
  }



  xaml::Media::Brush BrushFrom(const winrt::Microsoft::ReactNative::JSValue& v) {
    if (v.Type() == winrt::Microsoft::ReactNative::JSValueType::String) {
      return BrushFromColorObject(winrt::to_hstring(v.AsString()));
    }

    return SolidBrushFromColor(ColorFrom(v));
  }
}
#pragma endregion
