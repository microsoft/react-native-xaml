#include "pch.h"
#include "XamlMetadata.h"
#include "Crc32Str.h"
#include <winstring.h>

#include "winrt/Microsoft.UI.Xaml.Controls.h"
#include "winrt/Microsoft.UI.Xaml.Controls.Primitives.h"
#include "winrt/Windows.UI.Xaml.Controls.h"
#include "winrt/Windows.UI.Xaml.Controls.Maps.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "winrt/Windows.UI.Xaml.Documents.h"
#include "winrt/Windows.UI.Xaml.Input.h"
#include "winrt/Windows.UI.Xaml.Shapes.h"

/*************************************************************
THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT MODIFY MANUALLY
SOURCE WINMDS USED:
  - %USERPROFILE%\.nuget\packages\microsoft.ui.xaml\2.8.0\lib\uap10.0\Microsoft.UI.Xaml.winmd
**************************************************************/

template<typename T, typename K, size_t N>
const T* binary_search_map(const std::pair<K, T> (& map)[N], size_t low, size_t high, const K& key) {
    while (low != high) {
        size_t midpoint = (low + high) / 2;
        if (map[midpoint].first == key) return &(map[midpoint].second);
        else if (((high - low) % 2 == 1) && map[midpoint + 1].first == key) return &(map[midpoint + 1].second);
        else if (key < map[midpoint].first) high = midpoint;
        else /*if (key > map[midpoint].first)*/ low = midpoint + 1;
    }
    if (map[low].first == key) return &(map[low].second);
    return nullptr;
}

winrt::Windows::Foundation::IInspectable XamlMetadata::Create(const std::string_view& typeName) const {
  wchar_t buf[128]{};
  for (size_t i = 0; i < typeName.size() && i < ARRAYSIZE(buf) - 1; i++) {
    buf[i] = static_cast<wchar_t>(typeName[i]);
  }

  HSTRING clsid = nullptr;
  if (SUCCEEDED(WindowsCreateString(buf, static_cast<UINT32>(wcslen(buf)), &clsid))) {
    winrt::com_ptr<::IInspectable> insp{ nullptr };
    if (SUCCEEDED(RoActivateInstance(clsid, insp.put()))) {
      winrt::IUnknown unk{ nullptr };
      winrt::copy_from_abi(unk, insp.get());
      WindowsDeleteString(clsid);
      return unk.as<winrt::IInspectable>();
    } else {
      // type probably has a custom activation factory, use C++/WinRT to create it
      WindowsDeleteString(clsid);
      clsid = nullptr;
      const auto key = COMPILE_TIME_CRC32_STR(typeName.data());
      static constexpr const std::pair<uint32_t, winrt::Windows::Foundation::IInspectable(*)()> map[] = {
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarPenConfigurationControl"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::InkToolbarPenConfigurationControl(); } }, // 0x013FED5D
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarCustomPenButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::InkToolbarCustomPenButton(); } }, // 0x0827785B
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.SwipeControl"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::SwipeControl(); } }, // 0x0990BF40
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::Primitives::NavigationViewItemPresenter(); } }, // 0x09E65E23
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter(); } }, // 0x0AA85A4E
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ComboBoxItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::ComboBoxItem(); } }, // 0x0BB1FA54
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.CommandBar"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::CommandBar(); } }, // 0x0D634880
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.GridView"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::GridView(); } }, // 0x0DAD786D
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.ToggleButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton(); } }, // 0x0DC50A84
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Button"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Button(); } }, // 0x0E164BC8
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::InkToolbarBallpointPenButton(); } }, // 0x10E31045
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.RelativePanel"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::RelativePanel(); } }, // 0x133EC978
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.TimePicker"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::TimePicker(); } }, // 0x1344CE79
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.TreeViewList"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::TreeViewList(); } }, // 0x1361AC13
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::InkToolbarCustomToggleButton(); } }, // 0x1456881A
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarCustomToolButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::InkToolbarCustomToolButton(); } }, // 0x14AEE156
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Input.KeyboardAccelerator"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Input::KeyboardAccelerator(); } }, // 0x1508A89E
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.NavigationViewItemHeader"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::NavigationViewItemHeader(); } }, // 0x1541E74F
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.StackPanel"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::StackPanel(); } }, // 0x1657B672
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Hub"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Hub(); } }, // 0x16D5A5AB
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.DatePicker"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::DatePicker(); } }, // 0x1794DE08
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.RatingControl"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::RatingControl(); } }, // 0x1864387D
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.Primitives.ColorSpectrum"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::Primitives::ColorSpectrum(); } }, // 0x19AF6043
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.SettingsFlyout"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::SettingsFlyout(); } }, // 0x19FED760
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.HyperlinkButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::HyperlinkButton(); } }, // 0x1A40F8DE
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ColorPicker"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::ColorPicker(); } }, // 0x1BB82E89
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.CheckBox"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::CheckBox(); } }, // 0x1C604AF3
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.TreeView"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::TreeView(); } }, // 0x1E6A9922
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ListBoxItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::ListBoxItem(); } }, // 0x1EFA9FE0
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.RefreshVisualizer"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::RefreshVisualizer(); } }, // 0x1F3B6F74
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Documents.Span"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Documents::Span(); } }, // 0x1FC795BC
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.PathIcon"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::PathIcon(); } }, // 0x21564582
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ContentDialog"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::ContentDialog(); } }, // 0x218E0D37
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.BreadcrumbBar"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::BreadcrumbBar(); } }, // 0x25873963
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.AppBarToggleButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::AppBarToggleButton(); } }, // 0x2623C040
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.AnimatedVisualPlayer"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::AnimatedVisualPlayer(); } }, // 0x2793AA7B
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.SplitButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::SplitButton(); } }, // 0x29E1839F
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.NavigationViewList"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::NavigationViewList(); } }, // 0x2ACB18F3
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.CalendarViewDayItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::CalendarViewDayItem(); } }, // 0x2BAE0D4E
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Page"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Page(); } }, // 0x2C2B2509
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.FlipViewItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::FlipViewItem(); } }, // 0x34DBD261
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.BitmapIcon"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::BitmapIcon(); } }, // 0x36296D32
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.Primitives.MonochromaticOverlayPresenter"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::Primitives::MonochromaticOverlayPresenter(); } }, // 0x3630F3BE
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBar(); } }, // 0x3837767C
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBar(); } }, // 0x387E3DF1
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.UserControl"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::UserControl(); } }, // 0x39F6F92C
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.TreeView"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::TreeView(); } }, // 0x3E1C7F17
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MediaPlayerElement"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::MediaPlayerElement(); } }, // 0x41790703
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem(); } }, // 0x428CCCF0
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.Primitives.ColorPickerSlider"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::Primitives::ColorPickerSlider(); } }, // 0x429CFFB1
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MenuFlyoutPresenter"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::MenuFlyoutPresenter(); } }, // 0x433B1F7C
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.ProgressBar"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::ProgressBar(); } }, // 0x434DAC41
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ComboBox"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::ComboBox(); } }, // 0x49D96BC5
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.InfoBar"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::InfoBar(); } }, // 0x4A514458
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarFlyoutItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem(); } }, // 0x4AA78CB3
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.IconSourceElement"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::IconSourceElement(); } }, // 0x4AFAB350
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.RadioMenuFlyoutItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::RadioMenuFlyoutItem(); } }, // 0x4B5B3D4D
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.ImageIcon"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::ImageIcon(); } }, // 0x4D060983
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.TextCommandBarFlyout"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::TextCommandBarFlyout(); } }, // 0x4FDE4DA8
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MenuFlyoutSeparator"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::MenuFlyoutSeparator(); } }, // 0x53E44A55
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.FontIcon"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::FontIcon(); } }, // 0x5441998C
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.NavigationViewItemHeader"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::NavigationViewItemHeader(); } }, // 0x548AEF5A
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.SplitButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::SplitButton(); } }, // 0x54ECA654
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MediaTransportControls"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls(); } }, // 0x55BED84D
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.DropDownButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::DropDownButton(); } }, // 0x5886BD75
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.ItemsRepeater"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::ItemsRepeater(); } }, // 0x58B3F731
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.AnimatedIcon"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::AnimatedIcon(); } }, // 0x59601223
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.TreeViewList"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::TreeViewList(); } }, // 0x59AEF51E
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.NavigationViewItemSeparator"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::NavigationViewItemSeparator(); } }, // 0x59EF1A37
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MenuFlyoutItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem(); } }, // 0x5AC99C33
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ListViewHeaderItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::ListViewHeaderItem(); } }, // 0x5E5331BB
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ParallaxView"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::ParallaxView(); } }, // 0x608E6B3C
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.InfoBadge"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::InfoBadge(); } }, // 0x6115F836
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.MenuBarItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::MenuBarItem(); } }, // 0x64181650
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.PersonPicture"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::PersonPicture(); } }, // 0x657ADBEA
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.MenuBar"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::MenuBar(); } }, // 0x672DB5E1
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.WebView2"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::WebView2(); } }, // 0x69BFF902
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.ToggleSplitButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::ToggleSplitButton(); } }, // 0x6AE03DE1
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Frame"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Frame(); } }, // 0x6AF31BF7
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter(); } }, // 0x6C046CC4
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.NavigationView"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::NavigationView(); } }, // 0x6D011EF7
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.TabViewItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::TabViewItem(); } }, // 0x6E27C7F8
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.AppBar"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::AppBar(); } }, // 0x6E6263E2
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ProgressBar"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::ProgressBar(); } }, // 0x6E923E76
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ToggleSplitButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::ToggleSplitButton(); } }, // 0x6F13E816
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.TabView"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::TabView(); } }, // 0x713D6789
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkCanvas"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::InkCanvas(); } }, // 0x724C60CA
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.CommandBarFlyout"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::CommandBarFlyout(); } }, // 0x72A1454E
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.SwapChainPanel"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::SwapChainPanel(); } }, // 0x72B6905A
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.FlipView"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::FlipView(); } }, // 0x730343D2
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.TwoPaneView"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::TwoPaneView(); } }, // 0x740B0045
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.RefreshContainer"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::RefreshContainer(); } }, // 0x754ECAE9
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.NumberBox"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::NumberBox(); } }, // 0x77315EE9
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.RevealListViewItemPresenter"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::RevealListViewItemPresenter(); } }, // 0x78121ED4
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.NavigationViewItemSeparator"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::NavigationViewItemSeparator(); } }, // 0x79507C42
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.CommandBarFlyout"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::CommandBarFlyout(); } }, // 0x7A223043
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.Primitives.InfoBarPanel"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::Primitives::InfoBarPanel(); } }, // 0x7ADE8782
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.DropDownButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::DropDownButton(); } }, // 0x7C5DE700
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.PersonPicture"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::PersonPicture(); } }, // 0x7D2D6FDF
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider(); } }, // 0x7E15F5E6
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.ColorSpectrum"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum(); } }, // 0x819309F8
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ListViewItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::ListViewItem(); } }, // 0x87C86732
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MenuBar"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::MenuBar(); } }, // 0x89A36016
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.TwoPaneView"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::TwoPaneView(); } }, // 0x89FE1DD0
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.HandwritingView"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::HandwritingView(); } }, // 0x8A5BF526
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarRulerButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::InkToolbarRulerButton(); } }, // 0x8D42B267
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.CarouselPanel"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Primitives::CarouselPanel(); } }, // 0x9128F614
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.NavigationView"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::NavigationView(); } }, // 0x98F6B102
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.RefreshContainer"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::RefreshContainer(); } }, // 0xA4EB931E
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.ParallaxView"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::ParallaxView(); } }, // 0xA5082287
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.GridViewHeaderItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::GridViewHeaderItem(); } }, // 0xA610D185
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ItemsControl"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::ItemsControl(); } }, // 0xA67F836F
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.TextCommandBarFlyout"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::TextCommandBarFlyout(); } }, // 0xA7DA4FF3
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.SearchBox"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::SearchBox(); } }, // 0xA8C11D6B
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarHighlighterButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::InkToolbarHighlighterButton(); } }, // 0xA9BFE0CC
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.RichEditBox"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::RichEditBox(); } }, // 0xAA31A661
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.CalendarView"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::CalendarView(); } }, // 0xAA50A581
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.TextBox"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::TextBox(); } }, // 0xAA8E601A
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbar"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::InkToolbar(); } }, // 0xABDEF761
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.SwapChainBackgroundPanel"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::SwapChainBackgroundPanel(); } }, // 0xAE850A7A
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.AppBarSeparator"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::AppBarSeparator(); } }, // 0xB05CEFD3
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.Primitives.TabViewListView"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::Primitives::TabViewListView(); } }, // 0xB25E1EFA
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Slider"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Slider(); } }, // 0xB4C5592F
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MenuBarItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::MenuBarItem(); } }, // 0xB64CD8C5
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.TreeViewItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::TreeViewItem(); } }, // 0xB8A10771
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarStencilButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::InkToolbarStencilButton(); } }, // 0xBA65530F
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.TeachingTip"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::TeachingTip(); } }, // 0xBA7DAD87
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.AppBarElementContainer"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::AppBarElementContainer(); } }, // 0xBACFEF0F
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MenuBarItemFlyout"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::MenuBarItemFlyout(); } }, // 0xBAE8B8E8
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.PivotItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::PivotItem(); } }, // 0xBB51F34D
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.HubSection"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::HubSection(); } }, // 0xBB79E3A0
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MenuFlyout"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::MenuFlyout(); } }, // 0xC0932DE4
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Shapes.Path"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Shapes::Path(); } }, // 0xC258CF49
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ListView"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::ListView(); } }, // 0xC5EFD8A3
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.RefreshVisualizer"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::RefreshVisualizer(); } }, // 0xC9BF98E9
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.NavigationViewItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::NavigationViewItem(); } }, // 0xCB005E91
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.GroupItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::GroupItem(); } }, // 0xCE599348
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.GridViewItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::GridViewItem(); } }, // 0xCF8606FC
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.RadioButtons"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::RadioButtons(); } }, // 0xD0286295
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.ColorPicker"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::ColorPicker(); } }, // 0xD1AFED14
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Primitives::NavigationViewItemPresenter(); } }, // 0xD2310FD8
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.AppBarButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::AppBarButton(); } }, // 0xD3492DFE
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.Expander"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::Expander(); } }, // 0xD621D82E
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarPencilButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::InkToolbarPencilButton(); } }, // 0xD6FF91F8
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.CalendarDatePicker"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::CalendarDatePicker(); } }, // 0xD7CD3262
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.FlyoutPresenter"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::FlyoutPresenter(); } }, // 0xD9139447
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MediaPlayerPresenter"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::MediaPlayerPresenter(); } }, // 0xDB985D91
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.CommandBarOverflowPresenter"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::CommandBarOverflowPresenter(); } }, // 0xDE39968C
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.SwipeControl"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::SwipeControl(); } }, // 0xDEA685B5
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Flyout"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Flyout(); } }, // 0xE014AEAF
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.BreadcrumbBarItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::BreadcrumbBarItem(); } }, // 0xE139F112
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ContentPresenter"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::ContentPresenter(); } }, // 0xE87699FF
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarEraserButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::InkToolbarEraserButton(); } }, // 0xE98232BF
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.RadioButton"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::RadioButton(); } }, // 0xECD2D137
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Canvas"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Canvas(); } }, // 0xEDC81488
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.SplitView"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::SplitView(); } }, // 0xEF18D013
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ListBox"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::ListBox(); } }, // 0xF2512731
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::ToggleMenuFlyoutItem(); } }, // 0xF40F8935
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.PipsPager"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::PipsPager(); } }, // 0xF454ECC2
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.ProgressRing"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::ProgressRing(); } }, // 0xF55A4A1C
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Pivot"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Pivot(); } }, // 0xF60C725E
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.RatingControl"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::RatingControl(); } }, // 0xF6E08BB2
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ToolTip"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::ToolTip(); } }, // 0xFA2345F7
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ContentControl"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::ContentControl(); } }, // 0xFA3EF4E8
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Grid"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::Grid(); } }, // 0xFE197772
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.NavigationViewItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::NavigationViewItem(); } }, // 0xFE541CC6
        { COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.MenuBarItemFlyout"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Microsoft::UI::Xaml::Controls::MenuBarItemFlyout(); } }, // 0xFF2C8B33
        { COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.TreeViewItem"), []() -> winrt::Windows::Foundation::IInspectable { return winrt::Windows::UI::Xaml::Controls::TreeViewItem(); } }, // 0xFFF50DA6
      };

      if (const auto it = binary_search_map(map, 0, std::size(map), key)) {
        return (* it)();
      }
    }
  }
  assert(false && "xaml type not found");
  return nullptr;
}


