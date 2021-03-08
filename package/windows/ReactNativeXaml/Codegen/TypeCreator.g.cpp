#include "pch.h"
#include "XamlMetadata.h"
#include "Crc32Str.h"

/*************************************************************
THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT MODIFY MANUALLY
**************************************************************/

#include <winrt/Windows.UI.Xaml.Controls.h>
#include <winrt/Windows.UI.Xaml.Controls.Primitives.h>
#include <winrt/Windows.UI.Xaml.Shapes.h>
#include <winrt/Windows.UI.Xaml.Documents.h>
#include <winrt/Windows.UI.Xaml.Controls.Maps.h>

winrt::Windows::Foundation::IInspectable XamlMetadata::Create(const std::string& typeName) const {
  auto key = COMPILE_TIME_CRC32_STR(typeName.c_str());
  switch (key) {
    case COMPILE_TIME_CRC32_STR("appBar"): { return winrt::Windows::UI::Xaml::Controls::AppBar(); }
    case COMPILE_TIME_CRC32_STR("appBarButton"): { return winrt::Windows::UI::Xaml::Controls::AppBarButton(); }
    case COMPILE_TIME_CRC32_STR("appBarElementContainer"): { return winrt::Windows::UI::Xaml::Controls::AppBarElementContainer(); }
    case COMPILE_TIME_CRC32_STR("appBarSeparator"): { return winrt::Windows::UI::Xaml::Controls::AppBarSeparator(); }
    case COMPILE_TIME_CRC32_STR("appBarToggleButton"): { return winrt::Windows::UI::Xaml::Controls::AppBarToggleButton(); }
    case COMPILE_TIME_CRC32_STR("autoSuggestBox"): { return winrt::Windows::UI::Xaml::Controls::AutoSuggestBox(); }
    case COMPILE_TIME_CRC32_STR("bitmapIcon"): { return winrt::Windows::UI::Xaml::Controls::BitmapIcon(); }
    case COMPILE_TIME_CRC32_STR("border"): { return winrt::Windows::UI::Xaml::Controls::Border(); }
    case COMPILE_TIME_CRC32_STR("button"): { return winrt::Windows::UI::Xaml::Controls::Button(); }
    case COMPILE_TIME_CRC32_STR("calendarDatePicker"): { return winrt::Windows::UI::Xaml::Controls::CalendarDatePicker(); }
    case COMPILE_TIME_CRC32_STR("calendarPanel"): { return winrt::Windows::UI::Xaml::Controls::Primitives::CalendarPanel(); }
    case COMPILE_TIME_CRC32_STR("calendarView"): { return winrt::Windows::UI::Xaml::Controls::CalendarView(); }
    case COMPILE_TIME_CRC32_STR("calendarViewDayItem"): { return winrt::Windows::UI::Xaml::Controls::CalendarViewDayItem(); }
    case COMPILE_TIME_CRC32_STR("canvas"): { return winrt::Windows::UI::Xaml::Controls::Canvas(); }
    case COMPILE_TIME_CRC32_STR("captureElement"): { return winrt::Windows::UI::Xaml::Controls::CaptureElement(); }
    case COMPILE_TIME_CRC32_STR("carouselPanel"): { return winrt::Windows::UI::Xaml::Controls::Primitives::CarouselPanel(); }
    case COMPILE_TIME_CRC32_STR("checkBox"): { return winrt::Windows::UI::Xaml::Controls::CheckBox(); }
    case COMPILE_TIME_CRC32_STR("colorPicker"): { return winrt::Windows::UI::Xaml::Controls::ColorPicker(); }
    case COMPILE_TIME_CRC32_STR("colorPickerSlider"): { return winrt::Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider(); }
    case COMPILE_TIME_CRC32_STR("colorSpectrum"): { return winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum(); }
    case COMPILE_TIME_CRC32_STR("comboBox"): { return winrt::Windows::UI::Xaml::Controls::ComboBox(); }
    case COMPILE_TIME_CRC32_STR("comboBoxItem"): { return winrt::Windows::UI::Xaml::Controls::ComboBoxItem(); }
    case COMPILE_TIME_CRC32_STR("commandBar"): { return winrt::Windows::UI::Xaml::Controls::CommandBar(); }
    case COMPILE_TIME_CRC32_STR("commandBarFlyout"): { return winrt::Windows::UI::Xaml::Controls::CommandBarFlyout(); }
    case COMPILE_TIME_CRC32_STR("commandBarFlyoutCommandBar"): { return winrt::Windows::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBar(); }
    case COMPILE_TIME_CRC32_STR("commandBarOverflowPresenter"): { return winrt::Windows::UI::Xaml::Controls::CommandBarOverflowPresenter(); }
    case COMPILE_TIME_CRC32_STR("contentControl"): { return winrt::Windows::UI::Xaml::Controls::ContentControl(); }
    case COMPILE_TIME_CRC32_STR("contentDialog"): { return winrt::Windows::UI::Xaml::Controls::ContentDialog(); }
    case COMPILE_TIME_CRC32_STR("contentPresenter"): { return winrt::Windows::UI::Xaml::Controls::ContentPresenter(); }
    case COMPILE_TIME_CRC32_STR("datePicker"): { return winrt::Windows::UI::Xaml::Controls::DatePicker(); }
    case COMPILE_TIME_CRC32_STR("datePickerFlyout"): { return winrt::Windows::UI::Xaml::Controls::DatePickerFlyout(); }
    case COMPILE_TIME_CRC32_STR("dropDownButton"): { return winrt::Windows::UI::Xaml::Controls::DropDownButton(); }
    case COMPILE_TIME_CRC32_STR("ellipse"): { return winrt::Windows::UI::Xaml::Shapes::Ellipse(); }
    case COMPILE_TIME_CRC32_STR("flipView"): { return winrt::Windows::UI::Xaml::Controls::FlipView(); }
    case COMPILE_TIME_CRC32_STR("flipViewItem"): { return winrt::Windows::UI::Xaml::Controls::FlipViewItem(); }
    case COMPILE_TIME_CRC32_STR("flyout"): { return winrt::Windows::UI::Xaml::Controls::Flyout(); }
    case COMPILE_TIME_CRC32_STR("flyoutPresenter"): { return winrt::Windows::UI::Xaml::Controls::FlyoutPresenter(); }
    case COMPILE_TIME_CRC32_STR("fontIcon"): { return winrt::Windows::UI::Xaml::Controls::FontIcon(); }
    case COMPILE_TIME_CRC32_STR("frame"): { return winrt::Windows::UI::Xaml::Controls::Frame(); }
    case COMPILE_TIME_CRC32_STR("glyphs"): { return winrt::Windows::UI::Xaml::Documents::Glyphs(); }
    case COMPILE_TIME_CRC32_STR("grid"): { return winrt::Windows::UI::Xaml::Controls::Grid(); }
    case COMPILE_TIME_CRC32_STR("gridView"): { return winrt::Windows::UI::Xaml::Controls::GridView(); }
    case COMPILE_TIME_CRC32_STR("gridViewHeaderItem"): { return winrt::Windows::UI::Xaml::Controls::GridViewHeaderItem(); }
    case COMPILE_TIME_CRC32_STR("gridViewItem"): { return winrt::Windows::UI::Xaml::Controls::GridViewItem(); }
    case COMPILE_TIME_CRC32_STR("gridViewItemPresenter"): { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter(); }
    case COMPILE_TIME_CRC32_STR("groupItem"): { return winrt::Windows::UI::Xaml::Controls::GroupItem(); }
    case COMPILE_TIME_CRC32_STR("handwritingView"): { return winrt::Windows::UI::Xaml::Controls::HandwritingView(); }
    case COMPILE_TIME_CRC32_STR("hub"): { return winrt::Windows::UI::Xaml::Controls::Hub(); }
    case COMPILE_TIME_CRC32_STR("hubSection"): { return winrt::Windows::UI::Xaml::Controls::HubSection(); }
    case COMPILE_TIME_CRC32_STR("hyperlinkButton"): { return winrt::Windows::UI::Xaml::Controls::HyperlinkButton(); }
    case COMPILE_TIME_CRC32_STR("iconSourceElement"): { return winrt::Windows::UI::Xaml::Controls::IconSourceElement(); }
    case COMPILE_TIME_CRC32_STR("image"): { return winrt::Windows::UI::Xaml::Controls::Image(); }
    case COMPILE_TIME_CRC32_STR("inkCanvas"): { return winrt::Windows::UI::Xaml::Controls::InkCanvas(); }
    case COMPILE_TIME_CRC32_STR("inkToolbar"): { return winrt::Windows::UI::Xaml::Controls::InkToolbar(); }
    case COMPILE_TIME_CRC32_STR("inkToolbarBallpointPenButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarBallpointPenButton(); }
    case COMPILE_TIME_CRC32_STR("inkToolbarCustomPenButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarCustomPenButton(); }
    case COMPILE_TIME_CRC32_STR("inkToolbarCustomToggleButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarCustomToggleButton(); }
    case COMPILE_TIME_CRC32_STR("inkToolbarCustomToolButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarCustomToolButton(); }
    case COMPILE_TIME_CRC32_STR("inkToolbarEraserButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarEraserButton(); }
    case COMPILE_TIME_CRC32_STR("inkToolbarFlyoutItem"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem(); }
    case COMPILE_TIME_CRC32_STR("inkToolbarHighlighterButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarHighlighterButton(); }
    case COMPILE_TIME_CRC32_STR("inkToolbarPencilButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarPencilButton(); }
    case COMPILE_TIME_CRC32_STR("inkToolbarPenConfigurationControl"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarPenConfigurationControl(); }
    case COMPILE_TIME_CRC32_STR("inkToolbarRulerButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarRulerButton(); }
    case COMPILE_TIME_CRC32_STR("inkToolbarStencilButton"): { return winrt::Windows::UI::Xaml::Controls::InkToolbarStencilButton(); }
    case COMPILE_TIME_CRC32_STR("itemsControl"): { return winrt::Windows::UI::Xaml::Controls::ItemsControl(); }
    case COMPILE_TIME_CRC32_STR("itemsPresenter"): { return winrt::Windows::UI::Xaml::Controls::ItemsPresenter(); }
    case COMPILE_TIME_CRC32_STR("itemsStackPanel"): { return winrt::Windows::UI::Xaml::Controls::ItemsStackPanel(); }
    case COMPILE_TIME_CRC32_STR("itemsWrapGrid"): { return winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid(); }
    case COMPILE_TIME_CRC32_STR("line"): { return winrt::Windows::UI::Xaml::Shapes::Line(); }
    case COMPILE_TIME_CRC32_STR("listBox"): { return winrt::Windows::UI::Xaml::Controls::ListBox(); }
    case COMPILE_TIME_CRC32_STR("listBoxItem"): { return winrt::Windows::UI::Xaml::Controls::ListBoxItem(); }
    case COMPILE_TIME_CRC32_STR("listPickerFlyout"): { return winrt::Windows::UI::Xaml::Controls::ListPickerFlyout(); }
    case COMPILE_TIME_CRC32_STR("listView"): { return winrt::Windows::UI::Xaml::Controls::ListView(); }
    case COMPILE_TIME_CRC32_STR("listViewHeaderItem"): { return winrt::Windows::UI::Xaml::Controls::ListViewHeaderItem(); }
    case COMPILE_TIME_CRC32_STR("listViewItem"): { return winrt::Windows::UI::Xaml::Controls::ListViewItem(); }
    case COMPILE_TIME_CRC32_STR("listViewItemPresenter"): { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter(); }
    case COMPILE_TIME_CRC32_STR("mapControl"): { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl(); }
    case COMPILE_TIME_CRC32_STR("mediaElement"): { return winrt::Windows::UI::Xaml::Controls::MediaElement(); }
    case COMPILE_TIME_CRC32_STR("mediaPlayerElement"): { return winrt::Windows::UI::Xaml::Controls::MediaPlayerElement(); }
    case COMPILE_TIME_CRC32_STR("mediaPlayerPresenter"): { return winrt::Windows::UI::Xaml::Controls::MediaPlayerPresenter(); }
    case COMPILE_TIME_CRC32_STR("mediaTransportControls"): { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls(); }
    case COMPILE_TIME_CRC32_STR("menuBar"): { return winrt::Windows::UI::Xaml::Controls::MenuBar(); }
    case COMPILE_TIME_CRC32_STR("menuBarItem"): { return winrt::Windows::UI::Xaml::Controls::MenuBarItem(); }
    case COMPILE_TIME_CRC32_STR("menuBarItemFlyout"): { return winrt::Windows::UI::Xaml::Controls::MenuBarItemFlyout(); }
    case COMPILE_TIME_CRC32_STR("menuFlyout"): { return winrt::Windows::UI::Xaml::Controls::MenuFlyout(); }
    case COMPILE_TIME_CRC32_STR("menuFlyoutItem"): { return winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem(); }
    case COMPILE_TIME_CRC32_STR("menuFlyoutPresenter"): { return winrt::Windows::UI::Xaml::Controls::MenuFlyoutPresenter(); }
    case COMPILE_TIME_CRC32_STR("menuFlyoutSeparator"): { return winrt::Windows::UI::Xaml::Controls::MenuFlyoutSeparator(); }
    case COMPILE_TIME_CRC32_STR("menuFlyoutSubItem"): { return winrt::Windows::UI::Xaml::Controls::MenuFlyoutSubItem(); }
    case COMPILE_TIME_CRC32_STR("navigationView"): { return winrt::Windows::UI::Xaml::Controls::NavigationView(); }
    case COMPILE_TIME_CRC32_STR("navigationViewItem"): { return winrt::Windows::UI::Xaml::Controls::NavigationViewItem(); }
    case COMPILE_TIME_CRC32_STR("navigationViewItemHeader"): { return winrt::Windows::UI::Xaml::Controls::NavigationViewItemHeader(); }
    case COMPILE_TIME_CRC32_STR("navigationViewItemPresenter"): { return winrt::Windows::UI::Xaml::Controls::Primitives::NavigationViewItemPresenter(); }
    case COMPILE_TIME_CRC32_STR("navigationViewItemSeparator"): { return winrt::Windows::UI::Xaml::Controls::NavigationViewItemSeparator(); }
    case COMPILE_TIME_CRC32_STR("navigationViewList"): { return winrt::Windows::UI::Xaml::Controls::NavigationViewList(); }
    case COMPILE_TIME_CRC32_STR("page"): { return winrt::Windows::UI::Xaml::Controls::Page(); }
    case COMPILE_TIME_CRC32_STR("parallaxView"): { return winrt::Windows::UI::Xaml::Controls::ParallaxView(); }
    case COMPILE_TIME_CRC32_STR("passwordBox"): { return winrt::Windows::UI::Xaml::Controls::PasswordBox(); }
    case COMPILE_TIME_CRC32_STR("path"): { return winrt::Windows::UI::Xaml::Shapes::Path(); }
    case COMPILE_TIME_CRC32_STR("pathIcon"): { return winrt::Windows::UI::Xaml::Controls::PathIcon(); }
    case COMPILE_TIME_CRC32_STR("personPicture"): { return winrt::Windows::UI::Xaml::Controls::PersonPicture(); }
    case COMPILE_TIME_CRC32_STR("pickerFlyout"): { return winrt::Windows::UI::Xaml::Controls::PickerFlyout(); }
    case COMPILE_TIME_CRC32_STR("pivot"): { return winrt::Windows::UI::Xaml::Controls::Pivot(); }
    case COMPILE_TIME_CRC32_STR("pivotHeaderItem"): { return winrt::Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem(); }
    case COMPILE_TIME_CRC32_STR("pivotHeaderPanel"): { return winrt::Windows::UI::Xaml::Controls::Primitives::PivotHeaderPanel(); }
    case COMPILE_TIME_CRC32_STR("pivotItem"): { return winrt::Windows::UI::Xaml::Controls::PivotItem(); }
    case COMPILE_TIME_CRC32_STR("pivotPanel"): { return winrt::Windows::UI::Xaml::Controls::Primitives::PivotPanel(); }
    case COMPILE_TIME_CRC32_STR("polygon"): { return winrt::Windows::UI::Xaml::Shapes::Polygon(); }
    case COMPILE_TIME_CRC32_STR("polyline"): { return winrt::Windows::UI::Xaml::Shapes::Polyline(); }
    case COMPILE_TIME_CRC32_STR("popup"): { return winrt::Windows::UI::Xaml::Controls::Primitives::Popup(); }
    case COMPILE_TIME_CRC32_STR("progressBar"): { return winrt::Windows::UI::Xaml::Controls::ProgressBar(); }
    case COMPILE_TIME_CRC32_STR("progressRing"): { return winrt::Windows::UI::Xaml::Controls::ProgressRing(); }
    case COMPILE_TIME_CRC32_STR("radioButton"): { return winrt::Windows::UI::Xaml::Controls::RadioButton(); }
    case COMPILE_TIME_CRC32_STR("ratingControl"): { return winrt::Windows::UI::Xaml::Controls::RatingControl(); }
    case COMPILE_TIME_CRC32_STR("rectangle"): { return winrt::Windows::UI::Xaml::Shapes::Rectangle(); }
    case COMPILE_TIME_CRC32_STR("refreshContainer"): { return winrt::Windows::UI::Xaml::Controls::RefreshContainer(); }
    case COMPILE_TIME_CRC32_STR("refreshVisualizer"): { return winrt::Windows::UI::Xaml::Controls::RefreshVisualizer(); }
    case COMPILE_TIME_CRC32_STR("relativePanel"): { return winrt::Windows::UI::Xaml::Controls::RelativePanel(); }
    case COMPILE_TIME_CRC32_STR("repeatButton"): { return winrt::Windows::UI::Xaml::Controls::Primitives::RepeatButton(); }
    case COMPILE_TIME_CRC32_STR("richEditBox"): { return winrt::Windows::UI::Xaml::Controls::RichEditBox(); }
    case COMPILE_TIME_CRC32_STR("richTextBlock"): { return winrt::Windows::UI::Xaml::Controls::RichTextBlock(); }
    case COMPILE_TIME_CRC32_STR("richTextBlockOverflow"): { return winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow(); }
    case COMPILE_TIME_CRC32_STR("scrollBar"): { return winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar(); }
    case COMPILE_TIME_CRC32_STR("scrollContentPresenter"): { return winrt::Windows::UI::Xaml::Controls::ScrollContentPresenter(); }
    case COMPILE_TIME_CRC32_STR("scrollViewer"): { return winrt::Windows::UI::Xaml::Controls::ScrollViewer(); }
    case COMPILE_TIME_CRC32_STR("searchBox"): { return winrt::Windows::UI::Xaml::Controls::SearchBox(); }
    case COMPILE_TIME_CRC32_STR("semanticZoom"): { return winrt::Windows::UI::Xaml::Controls::SemanticZoom(); }
    case COMPILE_TIME_CRC32_STR("settingsFlyout"): { return winrt::Windows::UI::Xaml::Controls::SettingsFlyout(); }
    case COMPILE_TIME_CRC32_STR("slider"): { return winrt::Windows::UI::Xaml::Controls::Slider(); }
    case COMPILE_TIME_CRC32_STR("splitButton"): { return winrt::Windows::UI::Xaml::Controls::SplitButton(); }
    case COMPILE_TIME_CRC32_STR("splitView"): { return winrt::Windows::UI::Xaml::Controls::SplitView(); }
    case COMPILE_TIME_CRC32_STR("stackPanel"): { return winrt::Windows::UI::Xaml::Controls::StackPanel(); }
    case COMPILE_TIME_CRC32_STR("swapChainBackgroundPanel"): { return winrt::Windows::UI::Xaml::Controls::SwapChainBackgroundPanel(); }
    case COMPILE_TIME_CRC32_STR("swapChainPanel"): { return winrt::Windows::UI::Xaml::Controls::SwapChainPanel(); }
    case COMPILE_TIME_CRC32_STR("swipeControl"): { return winrt::Windows::UI::Xaml::Controls::SwipeControl(); }
    case COMPILE_TIME_CRC32_STR("symbolIcon"): { return winrt::Windows::UI::Xaml::Controls::SymbolIcon(); }
    case COMPILE_TIME_CRC32_STR("textBlock"): { return winrt::Windows::UI::Xaml::Controls::TextBlock(); }
    case COMPILE_TIME_CRC32_STR("textBox"): { return winrt::Windows::UI::Xaml::Controls::TextBox(); }
    case COMPILE_TIME_CRC32_STR("textCommandBarFlyout"): { return winrt::Windows::UI::Xaml::Controls::TextCommandBarFlyout(); }
    case COMPILE_TIME_CRC32_STR("thumb"): { return winrt::Windows::UI::Xaml::Controls::Primitives::Thumb(); }
    case COMPILE_TIME_CRC32_STR("tickBar"): { return winrt::Windows::UI::Xaml::Controls::Primitives::TickBar(); }
    case COMPILE_TIME_CRC32_STR("timePicker"): { return winrt::Windows::UI::Xaml::Controls::TimePicker(); }
    case COMPILE_TIME_CRC32_STR("timePickerFlyout"): { return winrt::Windows::UI::Xaml::Controls::TimePickerFlyout(); }
    case COMPILE_TIME_CRC32_STR("toggleButton"): { return winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton(); }
    case COMPILE_TIME_CRC32_STR("toggleMenuFlyoutItem"): { return winrt::Windows::UI::Xaml::Controls::ToggleMenuFlyoutItem(); }
    case COMPILE_TIME_CRC32_STR("toggleSplitButton"): { return winrt::Windows::UI::Xaml::Controls::ToggleSplitButton(); }
    case COMPILE_TIME_CRC32_STR("toggleSwitch"): { return winrt::Windows::UI::Xaml::Controls::ToggleSwitch(); }
    case COMPILE_TIME_CRC32_STR("toolTip"): { return winrt::Windows::UI::Xaml::Controls::ToolTip(); }
    case COMPILE_TIME_CRC32_STR("treeView"): { return winrt::Windows::UI::Xaml::Controls::TreeView(); }
    case COMPILE_TIME_CRC32_STR("treeViewItem"): { return winrt::Windows::UI::Xaml::Controls::TreeViewItem(); }
    case COMPILE_TIME_CRC32_STR("treeViewList"): { return winrt::Windows::UI::Xaml::Controls::TreeViewList(); }
    case COMPILE_TIME_CRC32_STR("twoPaneView"): { return winrt::Windows::UI::Xaml::Controls::TwoPaneView(); }
    case COMPILE_TIME_CRC32_STR("userControl"): { return winrt::Windows::UI::Xaml::Controls::UserControl(); }
    case COMPILE_TIME_CRC32_STR("variableSizedWrapGrid"): { return winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid(); }
    case COMPILE_TIME_CRC32_STR("viewbox"): { return winrt::Windows::UI::Xaml::Controls::Viewbox(); }
    case COMPILE_TIME_CRC32_STR("virtualizingStackPanel"): { return winrt::Windows::UI::Xaml::Controls::VirtualizingStackPanel(); }
    case COMPILE_TIME_CRC32_STR("webView"): { return winrt::Windows::UI::Xaml::Controls::WebView(); }
    case COMPILE_TIME_CRC32_STR("wrapGrid"): { return winrt::Windows::UI::Xaml::Controls::WrapGrid(); }
  
  }
  return nullptr;
}


