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
    switch (key) {
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.AnimatedIcon"): { return winrt::Microsoft::UI::Xaml::Controls::AnimatedIcon(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.AnimatedVisualPlayer"): { return winrt::Microsoft::UI::Xaml::Controls::AnimatedVisualPlayer(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.BreadcrumbBar"): { return winrt::Microsoft::UI::Xaml::Controls::BreadcrumbBar(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.BreadcrumbBarItem"): { return winrt::Microsoft::UI::Xaml::Controls::BreadcrumbBarItem(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.ColorPicker"): { return winrt::Microsoft::UI::Xaml::Controls::ColorPicker(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.CommandBarFlyout"): { return winrt::Microsoft::UI::Xaml::Controls::CommandBarFlyout(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.DropDownButton"): { return winrt::Microsoft::UI::Xaml::Controls::DropDownButton(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.Expander"): { return winrt::Microsoft::UI::Xaml::Controls::Expander(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.ImageIcon"): { return winrt::Microsoft::UI::Xaml::Controls::ImageIcon(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.InfoBadge"): { return winrt::Microsoft::UI::Xaml::Controls::InfoBadge(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.InfoBar"): { return winrt::Microsoft::UI::Xaml::Controls::InfoBar(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.ItemsRepeater"): { return winrt::Microsoft::UI::Xaml::Controls::ItemsRepeater(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.MenuBar"): { return winrt::Microsoft::UI::Xaml::Controls::MenuBar(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.MenuBarItem"): { return winrt::Microsoft::UI::Xaml::Controls::MenuBarItem(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.MenuBarItemFlyout"): { return winrt::Microsoft::UI::Xaml::Controls::MenuBarItemFlyout(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.NavigationView"): { return winrt::Microsoft::UI::Xaml::Controls::NavigationView(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.NavigationViewItem"): { return winrt::Microsoft::UI::Xaml::Controls::NavigationViewItem(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.NavigationViewItemHeader"): { return winrt::Microsoft::UI::Xaml::Controls::NavigationViewItemHeader(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.NavigationViewItemSeparator"): { return winrt::Microsoft::UI::Xaml::Controls::NavigationViewItemSeparator(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.NumberBox"): { return winrt::Microsoft::UI::Xaml::Controls::NumberBox(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.ParallaxView"): { return winrt::Microsoft::UI::Xaml::Controls::ParallaxView(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.PersonPicture"): { return winrt::Microsoft::UI::Xaml::Controls::PersonPicture(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.PipsPager"): { return winrt::Microsoft::UI::Xaml::Controls::PipsPager(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.Primitives.ColorPickerSlider"): { return winrt::Microsoft::UI::Xaml::Controls::Primitives::ColorPickerSlider(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.Primitives.ColorSpectrum"): { return winrt::Microsoft::UI::Xaml::Controls::Primitives::ColorSpectrum(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar"): { return winrt::Microsoft::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBar(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.Primitives.InfoBarPanel"): { return winrt::Microsoft::UI::Xaml::Controls::Primitives::InfoBarPanel(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.Primitives.MonochromaticOverlayPresenter"): { return winrt::Microsoft::UI::Xaml::Controls::Primitives::MonochromaticOverlayPresenter(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter"): { return winrt::Microsoft::UI::Xaml::Controls::Primitives::NavigationViewItemPresenter(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.Primitives.TabViewListView"): { return winrt::Microsoft::UI::Xaml::Controls::Primitives::TabViewListView(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.ProgressBar"): { return winrt::Microsoft::UI::Xaml::Controls::ProgressBar(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.ProgressRing"): { return winrt::Microsoft::UI::Xaml::Controls::ProgressRing(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.RadioButtons"): { return winrt::Microsoft::UI::Xaml::Controls::RadioButtons(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.RadioMenuFlyoutItem"): { return winrt::Microsoft::UI::Xaml::Controls::RadioMenuFlyoutItem(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.RatingControl"): { return winrt::Microsoft::UI::Xaml::Controls::RatingControl(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.RefreshContainer"): { return winrt::Microsoft::UI::Xaml::Controls::RefreshContainer(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.RefreshVisualizer"): { return winrt::Microsoft::UI::Xaml::Controls::RefreshVisualizer(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.RevealListViewItemPresenter"): { return winrt::Microsoft::UI::Xaml::Controls::RevealListViewItemPresenter(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.SplitButton"): { return winrt::Microsoft::UI::Xaml::Controls::SplitButton(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.SwipeControl"): { return winrt::Microsoft::UI::Xaml::Controls::SwipeControl(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.TabView"): { return winrt::Microsoft::UI::Xaml::Controls::TabView(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.TabViewItem"): { return winrt::Microsoft::UI::Xaml::Controls::TabViewItem(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.TeachingTip"): { return winrt::Microsoft::UI::Xaml::Controls::TeachingTip(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.TextCommandBarFlyout"): { return winrt::Microsoft::UI::Xaml::Controls::TextCommandBarFlyout(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.ToggleSplitButton"): { return winrt::Microsoft::UI::Xaml::Controls::ToggleSplitButton(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.TreeView"): { return winrt::Microsoft::UI::Xaml::Controls::TreeView(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.TreeViewItem"): { return winrt::Microsoft::UI::Xaml::Controls::TreeViewItem(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.TreeViewList"): { return winrt::Microsoft::UI::Xaml::Controls::TreeViewList(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.TwoPaneView"): { return winrt::Microsoft::UI::Xaml::Controls::TwoPaneView(); }
        case COMPILE_TIME_CRC32_STR("Microsoft.UI.Xaml.Controls.WebView2"): { return winrt::Microsoft::UI::Xaml::Controls::WebView2(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.AppBar"): { return winrt::Windows::UI::Xaml::Controls::AppBar(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.AppBarButton"): { return winrt::Windows::UI::Xaml::Controls::AppBarButton(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.AppBarElementContainer"): { return winrt::Windows::UI::Xaml::Controls::AppBarElementContainer(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.AppBarSeparator"): { return winrt::Windows::UI::Xaml::Controls::AppBarSeparator(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.AppBarToggleButton"): { return winrt::Windows::UI::Xaml::Controls::AppBarToggleButton(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.BitmapIcon"): { return winrt::Windows::UI::Xaml::Controls::BitmapIcon(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Button"): { return winrt::Windows::UI::Xaml::Controls::Button(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.CalendarDatePicker"): { return winrt::Windows::UI::Xaml::Controls::CalendarDatePicker(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.CalendarView"): { return winrt::Windows::UI::Xaml::Controls::CalendarView(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.CalendarViewDayItem"): { return winrt::Windows::UI::Xaml::Controls::CalendarViewDayItem(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Canvas"): { return winrt::Windows::UI::Xaml::Controls::Canvas(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.CheckBox"): { return winrt::Windows::UI::Xaml::Controls::CheckBox(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ColorPicker"): { return winrt::Windows::UI::Xaml::Controls::ColorPicker(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ComboBox"): { return winrt::Windows::UI::Xaml::Controls::ComboBox(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ComboBoxItem"): { return winrt::Windows::UI::Xaml::Controls::ComboBoxItem(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.CommandBar"): { return winrt::Windows::UI::Xaml::Controls::CommandBar(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.CommandBarFlyout"): { return winrt::Windows::UI::Xaml::Controls::CommandBarFlyout(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.CommandBarOverflowPresenter"): { return winrt::Windows::UI::Xaml::Controls::CommandBarOverflowPresenter(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ContentControl"): { return winrt::Windows::UI::Xaml::Controls::ContentControl(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ContentDialog"): { return winrt::Windows::UI::Xaml::Controls::ContentDialog(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ContentPresenter"): { return winrt::Windows::UI::Xaml::Controls::ContentPresenter(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.DatePicker"): { return winrt::Windows::UI::Xaml::Controls::DatePicker(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.DropDownButton"): { return winrt::Windows::UI::Xaml::Controls::DropDownButton(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.FlipView"): { return winrt::Windows::UI::Xaml::Controls::FlipView(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.FlipViewItem"): { return winrt::Windows::UI::Xaml::Controls::FlipViewItem(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Flyout"): { return winrt::Windows::UI::Xaml::Controls::Flyout(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.FlyoutPresenter"): { return winrt::Windows::UI::Xaml::Controls::FlyoutPresenter(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.FontIcon"): { return winrt::Windows::UI::Xaml::Controls::FontIcon(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Frame"): { return winrt::Windows::UI::Xaml::Controls::Frame(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Grid"): { return winrt::Windows::UI::Xaml::Controls::Grid(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.GridView"): { return winrt::Windows::UI::Xaml::Controls::GridView(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.GridViewHeaderItem"): { return winrt::Windows::UI::Xaml::Controls::GridViewHeaderItem(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.GridViewItem"): { return winrt::Windows::UI::Xaml::Controls::GridViewItem(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.GroupItem"): { return winrt::Windows::UI::Xaml::Controls::GroupItem(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.HandwritingView"): { return winrt::Windows::UI::Xaml::Controls::HandwritingView(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Hub"): { return winrt::Windows::UI::Xaml::Controls::Hub(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.HubSection"): { return winrt::Windows::UI::Xaml::Controls::HubSection(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.HyperlinkButton"): { return winrt::Windows::UI::Xaml::Controls::HyperlinkButton(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.IconSourceElement"): { return winrt::Windows::UI::Xaml::Controls::IconSourceElement(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkCanvas"): { return winrt::Windows::UI::Xaml::Controls::InkCanvas(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbar"): { return winrt::Windows::UI::Xaml::Controls::InkToolbar(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarBallpointPenButton(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarCustomPenButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarCustomPenButton(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarCustomToggleButton(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarCustomToolButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarCustomToolButton(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarEraserButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarEraserButton(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarFlyoutItem"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarHighlighterButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarHighlighterButton(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarPencilButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarPencilButton(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarPenConfigurationControl"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarPenConfigurationControl(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarRulerButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarRulerButton(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.InkToolbarStencilButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarStencilButton(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ItemsControl"): { return winrt::Windows::UI::Xaml::Controls::ItemsControl(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ListBox"): { return winrt::Windows::UI::Xaml::Controls::ListBox(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ListBoxItem"): { return winrt::Windows::UI::Xaml::Controls::ListBoxItem(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ListView"): { return winrt::Windows::UI::Xaml::Controls::ListView(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ListViewHeaderItem"): { return winrt::Windows::UI::Xaml::Controls::ListViewHeaderItem(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ListViewItem"): { return winrt::Windows::UI::Xaml::Controls::ListViewItem(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MediaPlayerElement"): { return winrt::Windows::UI::Xaml::Controls::MediaPlayerElement(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MediaPlayerPresenter"): { return winrt::Windows::UI::Xaml::Controls::MediaPlayerPresenter(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MediaTransportControls"): { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MenuBar"): { return winrt::Windows::UI::Xaml::Controls::MenuBar(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MenuBarItem"): { return winrt::Windows::UI::Xaml::Controls::MenuBarItem(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MenuBarItemFlyout"): { return winrt::Windows::UI::Xaml::Controls::MenuBarItemFlyout(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MenuFlyout"): { return winrt::Windows::UI::Xaml::Controls::MenuFlyout(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MenuFlyoutItem"): { return winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MenuFlyoutPresenter"): { return winrt::Windows::UI::Xaml::Controls::MenuFlyoutPresenter(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.MenuFlyoutSeparator"): { return winrt::Windows::UI::Xaml::Controls::MenuFlyoutSeparator(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.NavigationView"): { return winrt::Windows::UI::Xaml::Controls::NavigationView(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.NavigationViewItem"): { return winrt::Windows::UI::Xaml::Controls::NavigationViewItem(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.NavigationViewItemHeader"): { return winrt::Windows::UI::Xaml::Controls::NavigationViewItemHeader(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.NavigationViewItemSeparator"): { return winrt::Windows::UI::Xaml::Controls::NavigationViewItemSeparator(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.NavigationViewList"): { return winrt::Windows::UI::Xaml::Controls::NavigationViewList(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Page"): { return winrt::Windows::UI::Xaml::Controls::Page(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ParallaxView"): { return winrt::Windows::UI::Xaml::Controls::ParallaxView(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.PathIcon"): { return winrt::Windows::UI::Xaml::Controls::PathIcon(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.PersonPicture"): { return winrt::Windows::UI::Xaml::Controls::PersonPicture(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Pivot"): { return winrt::Windows::UI::Xaml::Controls::Pivot(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.PivotItem"): { return winrt::Windows::UI::Xaml::Controls::PivotItem(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.CarouselPanel"): { return winrt::Windows::UI::Xaml::Controls::Primitives::CarouselPanel(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider"): { return winrt::Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.ColorSpectrum"): { return winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar"): { return winrt::Windows::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBar(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter"): { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter"): { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter"): { return winrt::Windows::UI::Xaml::Controls::Primitives::NavigationViewItemPresenter(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem"): { return winrt::Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Primitives.ToggleButton"): { return winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ProgressBar"): { return winrt::Windows::UI::Xaml::Controls::ProgressBar(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.RadioButton"): { return winrt::Windows::UI::Xaml::Controls::RadioButton(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.RatingControl"): { return winrt::Windows::UI::Xaml::Controls::RatingControl(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.RefreshContainer"): { return winrt::Windows::UI::Xaml::Controls::RefreshContainer(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.RefreshVisualizer"): { return winrt::Windows::UI::Xaml::Controls::RefreshVisualizer(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.RelativePanel"): { return winrt::Windows::UI::Xaml::Controls::RelativePanel(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.RichEditBox"): { return winrt::Windows::UI::Xaml::Controls::RichEditBox(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.SearchBox"): { return winrt::Windows::UI::Xaml::Controls::SearchBox(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.SettingsFlyout"): { return winrt::Windows::UI::Xaml::Controls::SettingsFlyout(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.Slider"): { return winrt::Windows::UI::Xaml::Controls::Slider(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.SplitButton"): { return winrt::Windows::UI::Xaml::Controls::SplitButton(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.SplitView"): { return winrt::Windows::UI::Xaml::Controls::SplitView(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.StackPanel"): { return winrt::Windows::UI::Xaml::Controls::StackPanel(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.SwapChainBackgroundPanel"): { return winrt::Windows::UI::Xaml::Controls::SwapChainBackgroundPanel(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.SwapChainPanel"): { return winrt::Windows::UI::Xaml::Controls::SwapChainPanel(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.SwipeControl"): { return winrt::Windows::UI::Xaml::Controls::SwipeControl(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.TextBox"): { return winrt::Windows::UI::Xaml::Controls::TextBox(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.TextCommandBarFlyout"): { return winrt::Windows::UI::Xaml::Controls::TextCommandBarFlyout(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.TimePicker"): { return winrt::Windows::UI::Xaml::Controls::TimePicker(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem"): { return winrt::Windows::UI::Xaml::Controls::ToggleMenuFlyoutItem(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ToggleSplitButton"): { return winrt::Windows::UI::Xaml::Controls::ToggleSplitButton(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.ToolTip"): { return winrt::Windows::UI::Xaml::Controls::ToolTip(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.TreeView"): { return winrt::Windows::UI::Xaml::Controls::TreeView(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.TreeViewItem"): { return winrt::Windows::UI::Xaml::Controls::TreeViewItem(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.TreeViewList"): { return winrt::Windows::UI::Xaml::Controls::TreeViewList(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.TwoPaneView"): { return winrt::Windows::UI::Xaml::Controls::TwoPaneView(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Controls.UserControl"): { return winrt::Windows::UI::Xaml::Controls::UserControl(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Documents.Span"): { return winrt::Windows::UI::Xaml::Documents::Span(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Input.KeyboardAccelerator"): { return winrt::Windows::UI::Xaml::Input::KeyboardAccelerator(); }
        case COMPILE_TIME_CRC32_STR("Windows.UI.Xaml.Shapes.Path"): { return winrt::Windows::UI::Xaml::Shapes::Path(); }
    }
    }
  }
  assert(false && "xaml type not found");
  return nullptr;
}


