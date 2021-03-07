#pragma once
#include "pch.h"
#include "XamlMetadata.h"
#include "Crc32Str.h"

/*************************************************************
THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT MODIFY MANUALLY
**************************************************************/

#include <winrt/Windows.UI.Xaml.Controls.h>
#include <winrt/Windows.UI.Xaml.h>
#include <winrt/Windows.UI.Xaml.Controls.Primitives.h>
#include <winrt/Windows.UI.Xaml.Controls.Maps.h>
#include <winrt/Windows.UI.Xaml.Documents.h>
#include <winrt/Windows.UI.Xaml.Shapes.h>

#define MAKE_GET_DP(type, prop) IsType<type>, []() { return type::prop(); }

/*static*/ const PropInfo xamlPropertyMap[] = {
        { MAKE_KEY("acceptsReturn"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, AcceptsReturnProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("acceptsReturn"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, AcceptsReturnProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("accessKey"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, AccessKeyProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("allowDrop"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, AllowDropProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("allowFocusOnInteraction"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, AllowFocusOnInteractionProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("allowFocusOnInteraction"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, AllowFocusOnInteractionProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("allowFocusWhenDisabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, AllowFocusWhenDisabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("allowFocusWhenDisabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, AllowFocusWhenDisabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("alwaysShowHeader"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, AlwaysShowHeaderProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("areCandidatesEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::HandwritingView, AreCandidatesEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("areOpenCloseAnimationsEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, AreOpenCloseAnimationsEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("areScrollSnapPointsRegular"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::StackPanel, AreScrollSnapPointsRegularProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("areScrollSnapPointsRegular"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::VirtualizingStackPanel, AreScrollSnapPointsRegularProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("areStickyGroupHeadersEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid, AreStickyGroupHeadersEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("areStickyGroupHeadersEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsStackPanel, AreStickyGroupHeadersEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("areTransportControlsEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaElement, AreTransportControlsEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("areTransportControlsEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaPlayerElement, AreTransportControlsEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("audioCategory"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaElement, AudioCategoryProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("audioDeviceType"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaElement, AudioDeviceTypeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("autoMaximizeSuggestionArea"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AutoSuggestBox, AutoMaximizeSuggestionAreaProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("autoPlay"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaElement, AutoPlayProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("autoPlay"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaPlayerElement, AutoPlayProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("background"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, BackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("background"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Panel, BackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("background"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, BackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("background"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Border, BackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("backgroundSizing"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::StackPanel, BackgroundSizingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("backgroundSizing"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RelativePanel, BackgroundSizingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("backgroundSizing"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Grid, BackgroundSizingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("backgroundSizing"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, BackgroundSizingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("backgroundSizing"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, BackgroundSizingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("backgroundSizing"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Border, BackgroundSizingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("badgeGlyph"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PersonPicture, BadgeGlyphProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("badgeNumber"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PersonPicture, BadgeNumberProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("badgeText"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PersonPicture, BadgeTextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("balance"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaElement, BalanceProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("blackoutForeground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, BlackoutForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("borderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RelativePanel, BorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("borderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::StackPanel, BorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("borderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Border, BorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("borderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, BorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("borderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, BorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("borderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Grid, BorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("borderThickness"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, BorderThicknessProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("borderThickness"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, BorderThicknessProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("borderThickness"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Grid, BorderThicknessProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("borderThickness"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RelativePanel, BorderThicknessProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("borderThickness"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::StackPanel, BorderThicknessProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("borderThickness"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Border, BorderThicknessProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("bringIntoViewOnFocusChange"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, BringIntoViewOnFocusChangeProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("businessLandmarksEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, BusinessLandmarksEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("businessLandmarksVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, BusinessLandmarksVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("buttonFlyoutPlacement"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::InkToolbar, ButtonFlyoutPlacementProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("cacheLength"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid, CacheLengthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("cacheLength"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsStackPanel, CacheLengthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("cacheSize"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Frame, CacheSizeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("calendarIdentifier"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePickerFlyout, CalendarIdentifierProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("calendarIdentifier"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePicker, CalendarIdentifierProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("calendarIdentifier"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarDatePicker, CalendarIdentifierProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("calendarIdentifier"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, CalendarIdentifierProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("calendarItemBackground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, CalendarItemBackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("calendarItemBorderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, CalendarItemBorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("calendarItemBorderThickness"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, CalendarItemBorderThicknessProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("calendarItemForeground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, CalendarItemForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("canBeScrollAnchor"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, CanBeScrollAnchorProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("canChangeViews"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SemanticZoom, CanChangeViewsProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("canContentRenderOutsideBounds"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollContentPresenter, CanContentRenderOutsideBoundsProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("canContentRenderOutsideBounds"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, CanContentRenderOutsideBoundsProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("canDrag"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, CanDragProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("canDragItems"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListViewBase, CanDragItemsProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("canDragItems"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TreeView, CanDragItemsProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("canReorderItems"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListViewBase, CanReorderItemsProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("canReorderItems"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TreeView, CanReorderItemsProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("caption"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RatingControl, CaptionProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("characterCasing"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, CharacterCasingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("characterCasing"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, CharacterCasingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("characterSpacing"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, CharacterSpacingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("characterSpacing"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, CharacterSpacingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("characterSpacing"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, CharacterSpacingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("characterSpacing"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, CharacterSpacingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("checkBoxBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, CheckBoxBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("checkBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, CheckBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("checkBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, CheckBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("checkHintBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, CheckHintBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("checkHintBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, CheckHintBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("checkMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, CheckModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("checkSelectingBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, CheckSelectingBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("checkSelectingBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, CheckSelectingBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("chooseSuggestionOnEnter"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SearchBox, ChooseSuggestionOnEnterProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("clickMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, ClickModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("clipboardCopyFormat"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, ClipboardCopyFormatProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("clockIdentifier"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TimePicker, ClockIdentifierProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("clockIdentifier"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TimePickerFlyout, ClockIdentifierProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("closeButtonCommandParameter"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentDialog, CloseButtonCommandParameterProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("closeButtonText"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentDialog, CloseButtonTextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("closedDisplayMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBar, ClosedDisplayModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("collapsedGlyph"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TreeViewItem, CollapsedGlyphProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("colorChannel"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider, ColorChannelProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("colorFontPaletteIndex"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Documents::Glyphs, ColorFontPaletteIndexProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("colorScheme"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, ColorSchemeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("colorSpectrumComponents"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ColorPicker, ColorSpectrumComponentsProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("colorSpectrumShape"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ColorPicker, ColorSpectrumShapeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("columnSpacing"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Grid, ColumnSpacingProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("commandParameter"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SplitButton, CommandParameterProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("commandParameter"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, CommandParameterProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("commandParameter"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem, CommandParameterProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("compactModeThresholdWidth"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, CompactModeThresholdWidthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("compactPaneLength"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SplitView, CompactPaneLengthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("compactPaneLength"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, CompactPaneLengthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("components"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, ComponentsProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("compositeMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, CompositeModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("confirmationButtonsVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PickerFlyout, ConfirmationButtonsVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("content"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, ContentProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("content"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentControl, ContentProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("contentLinkBackgroundColor"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, ContentLinkBackgroundColorProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("contentLinkForegroundColor"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, ContentLinkForegroundColorProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("contentMargin"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, ContentMarginProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("contentMargin"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, ContentMarginProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("dataContext"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, DataContextProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("dataFetchSize"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListViewBase, DataFetchSizeProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("dateFormat"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarDatePicker, DateFormatProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("dayFormat"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePicker, DayFormatProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("dayFormat"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePickerFlyout, DayFormatProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("dayItemFontSize"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, DayItemFontSizeProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("dayItemFontStyle"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, DayItemFontStyleProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("dayOfWeekFormat"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, DayOfWeekFormatProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("dayOfWeekFormat"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarDatePicker, DayOfWeekFormatProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("dayVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePickerFlyout, DayVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("dayVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePicker, DayVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("defaultButton"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentDialog, DefaultButtonProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("defaultLabelPosition"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CommandBar, DefaultLabelPositionProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("defaultPlaybackRate"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaElement, DefaultPlaybackRateProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("defaultSectionIndex"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Hub, DefaultSectionIndexProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("defaultStyleKey"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, DefaultStyleKeyProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("delay"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::RepeatButton, DelayProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("description"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, DescriptionProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("description"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, DescriptionProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("description"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ComboBox, DescriptionProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("description"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarDatePicker, DescriptionProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("description"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AutoSuggestBox, DescriptionProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("description"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PasswordBox, DescriptionProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("desiredCandidateWindowAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, DesiredCandidateWindowAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("desiredCandidateWindowAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, DesiredCandidateWindowAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("desiredPitch"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, DesiredPitchProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("disabledFormattingAccelerators"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, DisabledFormattingAcceleratorsProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("disabledOpacity"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, DisabledOpacityProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("disabledOpacity"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, DisabledOpacityProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("displayMemberPath"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListPickerFlyout, DisplayMemberPathProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("displayMemberPath"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsControl, DisplayMemberPathProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("displayMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SplitView, DisplayModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("displayMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarDatePicker, DisplayModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("displayMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, DisplayModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("displayName"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PersonPicture, DisplayNameProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("dragBackground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, DragBackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("dragBackground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, DragBackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("dragForeground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, DragForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("dragForeground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, DragForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("dragOpacity"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, DragOpacityProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("dragOpacity"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, DragOpacityProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("dynamicOverflowOrder"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBarButton, DynamicOverflowOrderProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("dynamicOverflowOrder"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBarElementContainer, DynamicOverflowOrderProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("dynamicOverflowOrder"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBarSeparator, DynamicOverflowOrderProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("dynamicOverflowOrder"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBarToggleButton, DynamicOverflowOrderProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("elementSoundMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, ElementSoundModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("elementSoundMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, ElementSoundModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("exitDisplayModeOnAccessKeyInvoked"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, ExitDisplayModeOnAccessKeyInvokedProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("expandedGlyph"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TreeViewItem, ExpandedGlyphProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("expandedModeThresholdWidth"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, ExpandedModeThresholdWidthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fastPlayFallbackBehaviour"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, FastPlayFallbackBehaviourProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fill"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Documents::Glyphs, FillProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("fill"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Shape, FillProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("fill"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::TickBar, FillProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("fillRule"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Polygon, FillRuleProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fillRule"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Polyline, FillRuleProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("firstDayOfWeek"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, FirstDayOfWeekProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("firstDayOfWeek"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarDatePicker, FirstDayOfWeekProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("firstOfMonthLabelFontSize"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, FirstOfMonthLabelFontSizeProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("firstOfMonthLabelFontStyle"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, FirstOfMonthLabelFontStyleProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("firstOfYearDecadeLabelFontSize"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, FirstOfYearDecadeLabelFontSizeProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("firstOfYearDecadeLabelFontStyle"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, FirstOfYearDecadeLabelFontStyleProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("flowDirection"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, FlowDirectionProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("focusBorderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, FocusBorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("focusBorderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, FocusBorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("focusBorderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, FocusBorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("focusOnKeyboardInput"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SearchBox, FocusOnKeyboardInputProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("focusSecondaryBorderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, FocusSecondaryBorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("focusVisualMargin"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, FocusVisualMarginProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("focusVisualPrimaryBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, FocusVisualPrimaryBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("focusVisualPrimaryThickness"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, FocusVisualPrimaryThicknessProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("focusVisualSecondaryBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, FocusVisualSecondaryBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("focusVisualSecondaryThickness"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, FocusVisualSecondaryThicknessProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("fontRenderingEmSize"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Documents::Glyphs, FontRenderingEmSizeProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontSize"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::FontIcon, FontSizeProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontSize"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, FontSizeProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontSize"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, FontSizeProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontSize"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, FontSizeProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontSize"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, FontSizeProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStretch"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, FontStretchProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStretch"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, FontStretchProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStretch"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, FontStretchProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStretch"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, FontStretchProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStyle"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, FontStyleProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStyle"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, FontStyleProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStyle"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::FontIcon, FontStyleProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStyle"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, FontStyleProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStyle"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, FontStyleProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("footer"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsPresenter, FooterProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("footer"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListViewBase, FooterProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("foreground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::IconElement, ForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("foreground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, ForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("foreground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, ForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("foreground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, ForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("foreground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, ForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("fullSizeDesired"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentDialog, FullSizeDesiredProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("glyph"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::FontIcon, GlyphProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("glyphBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TreeViewItem, GlyphBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("glyphOpacity"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TreeViewItem, GlyphOpacityProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("glyphSize"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TreeViewItem, GlyphSizeProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("gridViewItemPresenterHorizontalContentAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, GridViewItemPresenterHorizontalContentAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("gridViewItemPresenterPadding"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, GridViewItemPresenterPaddingProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("gridViewItemPresenterVerticalContentAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, GridViewItemPresenterVerticalContentAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("groupHeaderPlacement"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsStackPanel, GroupHeaderPlacementProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("groupHeaderPlacement"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid, GroupHeaderPlacementProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("groupName"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RadioButton, GroupNameProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("groupPadding"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid, GroupPaddingProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("groupPadding"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsStackPanel, GroupPaddingProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("hasUnrealizedChildren"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TreeViewItem, HasUnrealizedChildrenProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("header"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PivotItem, HeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PasswordBox, HeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, HeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListViewBase, HeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Slider, HeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, HeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsPresenter, HeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::HubSection, HeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Hub, HeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, HeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePicker, HeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TimePicker, HeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AutoSuggestBox, HeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ToggleSwitch, HeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ComboBox, HeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarDatePicker, HeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("headerBackground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SettingsFlyout, HeaderBackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("headerFocusVisualPlacement"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Pivot, HeaderFocusVisualPlacementProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("headerForeground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SettingsFlyout, HeaderForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("heading"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, HeadingProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("height"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, HeightProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("highContrastAdjustment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, HighContrastAdjustmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, HorizontalAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalAnchorRatio"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, HorizontalAnchorRatioProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalChildrenAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::WrapGrid, HorizontalChildrenAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalChildrenAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid, HorizontalChildrenAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalContentAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, HorizontalContentAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalContentAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, HorizontalContentAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalDayItemAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, HorizontalDayItemAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalFirstOfMonthLabelAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, HorizontalFirstOfMonthLabelAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalOffset"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::Popup, HorizontalOffsetProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalOffset"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ToolTip, HorizontalOffsetProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalScrollBarVisibility"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, HorizontalScrollBarVisibilityProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalScrollMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, HorizontalScrollModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalShift"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ParallaxView, HorizontalShiftProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalSnapPointsAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, HorizontalSnapPointsAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalSnapPointsType"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, HorizontalSnapPointsTypeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalSourceEndOffset"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ParallaxView, HorizontalSourceEndOffsetProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalSourceOffsetKind"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ParallaxView, HorizontalSourceOffsetKindProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalSourceStartOffset"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ParallaxView, HorizontalSourceStartOffsetProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalTextAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, HorizontalTextAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalTextAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, HorizontalTextAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalTextAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, HorizontalTextAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalTextAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, HorizontalTextAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("hoverBorderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, HoverBorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("incrementalLoadingThreshold"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListViewBase, IncrementalLoadingThresholdProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("incrementalLoadingTrigger"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListViewBase, IncrementalLoadingTriggerProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("indicatorMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar, IndicatorModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("indices"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Documents::Glyphs, IndicesProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("initialControls"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::InkToolbar, InitialControlsProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("initials"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PersonPicture, InitialsProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("initialSetValue"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RatingControl, InitialSetValueProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("intermediateValue"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Slider, IntermediateValueProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("interval"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::RepeatButton, IntervalProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("isAccessKeyScope"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, IsAccessKeyScopeProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isActive"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ProgressRing, IsActiveProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isActiveView"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListViewBase, IsActiveViewProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isActiveView"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Hub, IsActiveViewProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isAlphaEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ColorPicker, IsAlphaEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isAlphaSliderVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ColorPicker, IsAlphaSliderVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isAlphaTextInputVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ColorPicker, IsAlphaTextInputVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isBackButtonVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, IsBackButtonVisibleProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("isBackEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, IsBackEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isBlackout"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarViewDayItem, IsBlackoutProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isCalendarOpen"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarDatePicker, IsCalendarOpenProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isChecked"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem, IsCheckedProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isChecked"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ToggleMenuFlyoutItem, IsCheckedProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isClearAllVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::InkToolbarEraserButton, IsClearAllVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isClearEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RatingControl, IsClearEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorChannelTextInputVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ColorPicker, IsColorChannelTextInputVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorFontEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, IsColorFontEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorFontEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, IsColorFontEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorFontEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, IsColorFontEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorFontEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, IsColorFontEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorFontEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Documents::Glyphs, IsColorFontEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorPreviewVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ColorPicker, IsColorPreviewVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorSliderVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ColorPicker, IsColorSliderVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorSpectrumVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ColorPicker, IsColorSpectrumVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isCompact"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsCompactProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isCompact"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBarToggleButton, IsCompactProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isCompact"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBarButton, IsCompactProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isCompact"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBarElementContainer, IsCompactProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isCompact"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBarSeparator, IsCompactProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isCompactOverlayButtonVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsCompactOverlayButtonVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isCompactOverlayEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsCompactOverlayEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDefaultShadowEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TimePickerFlyoutPresenter, IsDefaultShadowEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDefaultShadowEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MenuFlyoutPresenter, IsDefaultShadowEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDefaultShadowEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::FlyoutPresenter, IsDefaultShadowEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDefaultShadowEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePickerFlyoutPresenter, IsDefaultShadowEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDeferredScrollingEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, IsDeferredScrollingEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDirectionReversed"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Slider, IsDirectionReversedProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDoubleTapEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, IsDoubleTapEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDropDownOpen"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ComboBox, IsDropDownOpenProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDynamicOverflowEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CommandBar, IsDynamicOverflowEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isEditable"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ComboBox, IsEditableProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, IsEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isExpanded"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TreeViewItem, IsExpandedProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isExtensionGlyphShown"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::InkToolbarMenuButton, IsExtensionGlyphShownProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isExtensionGlyphShown"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::InkToolbarToolButton, IsExtensionGlyphShownProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFastForwardButtonVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsFastForwardButtonVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFastForwardEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsFastForwardEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFastRewindButtonVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsFastRewindButtonVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFastRewindEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsFastRewindEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFocusEngaged"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, IsFocusEngagedProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFocusEngagementEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, IsFocusEngagementEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFullWindow"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaElement, IsFullWindowProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFullWindow"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaPlayerElement, IsFullWindowProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFullWindow"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaPlayerPresenter, IsFullWindowProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFullWindowButtonVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsFullWindowButtonVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFullWindowEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsFullWindowEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isGroup"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PersonPicture, IsGroupProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isGroupLabelVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarDatePicker, IsGroupLabelVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isGroupLabelVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, IsGroupLabelVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHandwritingViewEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, IsHandwritingViewEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHandwritingViewEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, IsHandwritingViewEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHeaderInteractive"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::HubSection, IsHeaderInteractiveProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHeaderItemsCarouselEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Pivot, IsHeaderItemsCarouselEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHexInputVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ColorPicker, IsHexInputVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHitTestVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, IsHitTestVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHoldingEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, IsHoldingEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHorizontalRailEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, IsHorizontalRailEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHorizontalScrollChainingEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, IsHorizontalScrollChainingEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHorizontalShiftClamped"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ParallaxView, IsHorizontalShiftClampedProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isIndeterminate"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ProgressBar, IsIndeterminateProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isItemClickEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListViewBase, IsItemClickEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isLightDismissEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::Popup, IsLightDismissEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isLocked"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Pivot, IsLockedProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isLooping"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaElement, IsLoopingProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isMoreButtonVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ColorPicker, IsMoreButtonVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isMultiSelectCheckBoxEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListViewBase, IsMultiSelectCheckBoxEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isMuted"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaElement, IsMutedProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isNavigationStackEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Frame, IsNavigationStackEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isNextTrackButtonVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsNextTrackButtonVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isOn"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ToggleSwitch, IsOnProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isOpen"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBar, IsOpenProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isOpen"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::Popup, IsOpenProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isOpen"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ToolTip, IsOpenProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isOutOfScopeEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarDatePicker, IsOutOfScopeEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isOutOfScopeEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, IsOutOfScopeEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPaneOpen"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, IsPaneOpenProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPaneOpen"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SplitView, IsPaneOpenProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPaneToggleButtonVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, IsPaneToggleButtonVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPaneVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, IsPaneVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPasswordRevealButtonEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PasswordBox, IsPasswordRevealButtonEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPlaybackRateButtonVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsPlaybackRateButtonVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPlaybackRateEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsPlaybackRateEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPreviousTrackButtonVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsPreviousTrackButtonVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPrimaryButtonEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentDialog, IsPrimaryButtonEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isProtractorItemVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::InkToolbarStencilButton, IsProtractorItemVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isReadOnly"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, IsReadOnlyProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isReadOnly"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RatingControl, IsReadOnlyProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isReadOnly"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, IsReadOnlyProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isRepeatButtonVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsRepeatButtonVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isRepeatEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsRepeatEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isRightTapEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, IsRightTapEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isRulerButtonChecked"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::InkToolbar, IsRulerButtonCheckedProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isRulerItemVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::InkToolbarStencilButton, IsRulerItemVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isScrollInertiaEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, IsScrollInertiaEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSecondaryButtonEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentDialog, IsSecondaryButtonEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSeekBarVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsSeekBarVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSeekEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsSeekEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSelected"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::SelectorItem, IsSelectedProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSettingsVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, IsSettingsVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSkipBackwardButtonVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsSkipBackwardButtonVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSkipBackwardEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsSkipBackwardEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSkipForwardButtonVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsSkipForwardButtonVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSkipForwardEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsSkipForwardEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSpellCheckEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, IsSpellCheckEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSpellCheckEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, IsSpellCheckEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isStencilButtonChecked"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::InkToolbar, IsStencilButtonCheckedProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSticky"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBar, IsStickyProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isStopButtonVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsStopButtonVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isStopEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsStopEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSuggestionListOpen"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AutoSuggestBox, IsSuggestionListOpenProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSwipeEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListViewBase, IsSwipeEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTabStop"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, IsTabStopProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTapEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, IsTapEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextPredictionEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, IsTextPredictionEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextPredictionEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, IsTextPredictionEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextScaleFactorEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, IsTextScaleFactorEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextScaleFactorEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, IsTextScaleFactorEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextScaleFactorEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::FontIcon, IsTextScaleFactorEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextScaleFactorEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, IsTextScaleFactorEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextScaleFactorEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, IsTextScaleFactorEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextSearchEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ComboBox, IsTextSearchEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextSelectionEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, IsTextSelectionEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextSelectionEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, IsTextSelectionEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isThreeState"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton, IsThreeStateProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isThumbToolTipEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Slider, IsThumbToolTipEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTodayHighlighted"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, IsTodayHighlightedProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTodayHighlighted"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarDatePicker, IsTodayHighlightedProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isVerticalRailEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, IsVerticalRailEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isVerticalScrollChainingEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, IsVerticalScrollChainingEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isVerticalShiftClamped"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ParallaxView, IsVerticalShiftClampedProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isVolumeButtonVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsVolumeButtonVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isVolumeEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsVolumeEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isZoomButtonVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsZoomButtonVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isZoomChainingEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, IsZoomChainingEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isZoomedInView"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListViewBase, IsZoomedInViewProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isZoomedInView"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Hub, IsZoomedInViewProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isZoomedInViewActive"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SemanticZoom, IsZoomedInViewActiveProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isZoomEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, IsZoomEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isZoomInertiaEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, IsZoomInertiaEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isZoomOutButtonEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SemanticZoom, IsZoomOutButtonEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("itemHeight"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid, ItemHeightProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("itemHeight"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector, ItemHeightProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("itemHeight"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid, ItemHeightProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("itemHeight"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::WrapGrid, ItemHeightProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("itemsSource"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsControl, ItemsSourceProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("itemsSource"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListPickerFlyout, ItemsSourceProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("itemsSource"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TreeView, ItemsSourceProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("itemsSource"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TreeViewItem, ItemsSourceProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("itemWidth"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::WrapGrid, ItemWidthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("itemWidth"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid, ItemWidthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("itemWidth"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid, ItemWidthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("itemWidth"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector, ItemWidthProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("keyboardAcceleratorPlacementMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, KeyboardAcceleratorPlacementModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("keyboardAcceleratorTextOverride"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBarToggleButton, KeyboardAcceleratorTextOverrideProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("keyboardAcceleratorTextOverride"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem, KeyboardAcceleratorTextOverrideProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("keyboardAcceleratorTextOverride"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBarButton, KeyboardAcceleratorTextOverrideProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("keyTipHorizontalOffset"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, KeyTipHorizontalOffsetProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("keyTipPlacementMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, KeyTipPlacementModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("keyTipVerticalOffset"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, KeyTipVerticalOffsetProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("kind"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem, KindProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("label"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBarToggleButton, LabelProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("label"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBarButton, LabelProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("labelPosition"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBarButton, LabelPositionProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("labelPosition"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBarToggleButton, LabelPositionProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("landmarksVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, LandmarksVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("language"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, LanguageProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("largeChange"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase, LargeChangeProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("leftHeader"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Pivot, LeftHeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("lightDismissOverlayMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TimePicker, LightDismissOverlayModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lightDismissOverlayMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SplitView, LightDismissOverlayModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lightDismissOverlayMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, LightDismissOverlayModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lightDismissOverlayMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePicker, LightDismissOverlayModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lightDismissOverlayMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::Popup, LightDismissOverlayModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lightDismissOverlayMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarDatePicker, LightDismissOverlayModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lightDismissOverlayMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AutoSuggestBox, LightDismissOverlayModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lightDismissOverlayMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AppBar, LightDismissOverlayModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lightDismissOverlayMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ComboBox, LightDismissOverlayModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lineHeight"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, LineHeightProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lineHeight"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, LineHeightProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lineHeight"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, LineHeightProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lineStackingStrategy"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, LineStackingStrategyProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lineStackingStrategy"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, LineStackingStrategyProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lineStackingStrategy"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, LineStackingStrategyProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("listViewItemPresenterHorizontalContentAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, ListViewItemPresenterHorizontalContentAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("listViewItemPresenterPadding"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, ListViewItemPresenterPaddingProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("listViewItemPresenterVerticalContentAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, ListViewItemPresenterVerticalContentAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("manipulationMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, ManipulationModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("mapProjection"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, MapProjectionProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("mapServiceToken"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, MapServiceTokenProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("margin"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, MarginProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("maxDropDownHeight"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ComboBox, MaxDropDownHeightProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxHeight"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, MaxHeightProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxHorizontalShiftRatio"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ParallaxView, MaxHorizontalShiftRatioProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxHue"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, MaxHueProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxHue"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ColorPicker, MaxHueProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maximum"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase, MaximumProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maximumRowsOrColumns"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid, MaximumRowsOrColumnsProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maximumRowsOrColumns"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid, MaximumRowsOrColumnsProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maximumRowsOrColumns"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::WrapGrid, MaximumRowsOrColumnsProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxLength"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, MaxLengthProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxLength"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, MaxLengthProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxLength"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PasswordBox, MaxLengthProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxLines"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, MaxLinesProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxLines"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, MaxLinesProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxLines"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow, MaxLinesProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxLines"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, MaxLinesProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxRating"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RatingControl, MaxRatingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxSaturation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, MaxSaturationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxSaturation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ColorPicker, MaxSaturationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxStrokeWidth"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::InkToolbarPenButton, MaxStrokeWidthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxSuggestionListHeight"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AutoSuggestBox, MaxSuggestionListHeightProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxValue"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, MaxValueProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxValue"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ColorPicker, MaxValueProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxVerticalShiftRatio"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ParallaxView, MaxVerticalShiftRatioProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxWidth"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, MaxWidthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxZoomFactor"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, MaxZoomFactorProperty), SetPropValue<float>, ViewManagerPropertyType::Number },
        { MAKE_KEY("menuItemsSource"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, MenuItemsSourceProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("minHeight"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, MinHeightProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minHue"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, MinHueProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minHue"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ColorPicker, MinHueProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minimum"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase, MinimumProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minSaturation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, MinSaturationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minSaturation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ColorPicker, MinSaturationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minStrokeWidth"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::InkToolbarPenButton, MinStrokeWidthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minTallModeHeight"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TwoPaneView, MinTallModeHeightProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minuteIncrement"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TimePicker, MinuteIncrementProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minuteIncrement"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TimePickerFlyout, MinuteIncrementProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minValue"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ColorPicker, MinValueProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minValue"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, MinValueProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minWideModeWidth"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TwoPaneView, MinWideModeWidthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minWidth"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, MinWidthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minZoomFactor"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, MinZoomFactorProperty), SetPropValue<float>, ViewManagerPropertyType::Number },
        { MAKE_KEY("mirroredWhenRightToLeft"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::FontIcon, MirroredWhenRightToLeftProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("monthFormat"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePickerFlyout, MonthFormatProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("monthFormat"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePicker, MonthFormatProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("monthVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePicker, MonthVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("monthVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePickerFlyout, MonthVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("monthYearItemFontSize"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, MonthYearItemFontSizeProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("monthYearItemFontStyle"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, MonthYearItemFontStyleProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("name"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, NameProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("nineGrid"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Image, NineGridProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("numberOfWeeksInView"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, NumberOfWeeksInViewProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("offContent"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ToggleSwitch, OffContentProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("onContent"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ToggleSwitch, OnContentProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("opacity"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, OpacityProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("openPaneLength"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SplitView, OpenPaneLengthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("openPaneLength"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, OpenPaneLengthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("opticalMarginAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, OpticalMarginAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("opticalMarginAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, OpticalMarginAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("opticalMarginAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, OpticalMarginAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar, OrientationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::VirtualizingStackPanel, OrientationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid, OrientationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::StackPanel, OrientationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Slider, OrientationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RefreshVisualizer, OrientationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid, OrientationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePicker, OrientationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsStackPanel, OrientationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::InkToolbar, OrientationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Hub, OrientationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::WrapGrid, OrientationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("originX"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Documents::Glyphs, OriginXProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("originY"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Documents::Glyphs, OriginYProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("outOfScopeBackground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, OutOfScopeBackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("outOfScopeForeground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, OutOfScopeForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("overflowButtonVisibility"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CommandBar, OverflowButtonVisibilityProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("overflowLabelMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, OverflowLabelModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("padding"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::StackPanel, PaddingProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RelativePanel, PaddingProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Border, PaddingProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, PaddingProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, PaddingProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, PaddingProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow, PaddingProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Grid, PaddingProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, PaddingProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ItemsPresenter, PaddingProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("paneBackground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SplitView, PaneBackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("paneDisplayMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, PaneDisplayModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("panePlacement"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SplitView, PanePlacementProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("panePriority"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TwoPaneView, PanePriorityProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("paneTitle"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, PaneTitleProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("panInteractionMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, PanInteractionModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("password"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PasswordBox, PasswordProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("passwordChar"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PasswordBox, PasswordCharProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("passwordRevealMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PasswordBox, PasswordRevealModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("pedestrianFeaturesVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, PedestrianFeaturesVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("placeholderBackground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, PlaceholderBackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("placeholderBackground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, PlaceholderBackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("placeholderForeground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ComboBox, PlaceholderForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("placeholderForeground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, PlaceholderForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("placeholderText"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, PlaceholderTextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("placeholderText"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AutoSuggestBox, PlaceholderTextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("placeholderText"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ComboBox, PlaceholderTextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("placeholderText"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarDatePicker, PlaceholderTextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("placeholderText"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, PlaceholderTextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("placeholderText"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SearchBox, PlaceholderTextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("placeholderText"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PasswordBox, PlaceholderTextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("placeholderValue"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RatingControl, PlaceholderValueProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("placement"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ToolTip, PlacementProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("placement"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, PlacementProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("placementAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::HandwritingView, PlacementAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("playbackRate"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaElement, PlaybackRateProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("pointerOverBackground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, PointerOverBackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("pointerOverBackground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, PointerOverBackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("pointerOverBackgroundMargin"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, PointerOverBackgroundMarginProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("pointerOverBackgroundMargin"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, PointerOverBackgroundMarginProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("pointerOverForeground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, PointerOverForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("preferSmallImage"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PersonPicture, PreferSmallImageProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("pressedBackground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, PressedBackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("pressedBorderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, PressedBorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("pressedForeground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, PressedForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("preventKeyboardDisplayOnProgrammaticFocus"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PasswordBox, PreventKeyboardDisplayOnProgrammaticFocusProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("preventKeyboardDisplayOnProgrammaticFocus"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, PreventKeyboardDisplayOnProgrammaticFocusProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("preventKeyboardDisplayOnProgrammaticFocus"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, PreventKeyboardDisplayOnProgrammaticFocusProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("primaryButtonCommandParameter"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentDialog, PrimaryButtonCommandParameterProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("primaryButtonText"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentDialog, PrimaryButtonTextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("pullDirection"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RefreshContainer, PullDirectionProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("queryText"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SearchBox, QueryTextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("radiusX"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Rectangle, RadiusXProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("radiusY"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Rectangle, RadiusYProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("realTimePlayback"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaElement, RealTimePlaybackProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("reduceViewportForCoreInputViewOcclusions"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, ReduceViewportForCoreInputViewOcclusionsProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("region"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, RegionProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("reorderHintOffset"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, ReorderHintOffsetProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("reorderHintOffset"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, ReorderHintOffsetProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("reorderMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListViewBase, ReorderModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("requestedTheme"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, RequestedThemeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("requiresPointer"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, RequiresPointerProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("revealBackground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, RevealBackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("revealBackgroundShowsAboveContent"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, RevealBackgroundShowsAboveContentProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("revealBorderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, RevealBorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("revealBorderThickness"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, RevealBorderThicknessProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("rightHeader"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Pivot, RightHeaderProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("rotateInteractionMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, RotateInteractionModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("rowSpacing"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Grid, RowSpacingProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("searchHistoryContext"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SearchBox, SearchHistoryContextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("searchHistoryEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SearchBox, SearchHistoryEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("secondaryButtonCommandParameter"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentDialog, SecondaryButtonCommandParameterProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("secondaryButtonText"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentDialog, SecondaryButtonTextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("selectedBackground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, SelectedBackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedBackground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, SelectedBackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedBorderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, SelectedBorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedBorderThickness"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, SelectedBorderThicknessProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedBorderThickness"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, SelectedBorderThicknessProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedBrushIndex"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::InkToolbarPenButton, SelectedBrushIndexProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectedForeground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, SelectedForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedForeground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, SelectedForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedForeground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, SelectedForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedHoverBorderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, SelectedHoverBorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedIndex"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector, SelectedIndexProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectedIndex"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Pivot, SelectedIndexProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectedIndex"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::Selector, SelectedIndexProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectedIndex"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListPickerFlyout, SelectedIndexProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectedItem"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::Selector, SelectedItemProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedItem"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Pivot, SelectedItemProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedItem"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListPickerFlyout, SelectedItemProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedItem"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector, SelectedItemProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedItem"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, SelectedItemProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedPointerOverBackground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, SelectedPointerOverBackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedPointerOverBackground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, SelectedPointerOverBackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedPointerOverBorderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, SelectedPointerOverBorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedPointerOverBorderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, SelectedPointerOverBorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedPressedBackground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, SelectedPressedBackgroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedPressedBorderBrush"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, SelectedPressedBorderBrushProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedStencil"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::InkToolbarStencilButton, SelectedStencilProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectedStrokeWidth"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::InkToolbarPenButton, SelectedStrokeWidthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectedValue"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::Selector, SelectedValueProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedValue"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListPickerFlyout, SelectedValueProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedValuePath"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::Selector, SelectedValuePathProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("selectedValuePath"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListPickerFlyout, SelectedValuePathProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("selectionChangedTrigger"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ComboBox, SelectionChangedTriggerProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectionCheckMarkVisualEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, SelectionCheckMarkVisualEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("selectionCheckMarkVisualEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, SelectionCheckMarkVisualEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("selectionFollowsFocus"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, SelectionFollowsFocusProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectionHighlightColor"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, SelectionHighlightColorProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectionHighlightColor"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, SelectionHighlightColorProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectionHighlightColor"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, SelectionHighlightColorProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectionHighlightColor"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, SelectionHighlightColorProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectionHighlightColor"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PasswordBox, SelectionHighlightColorProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectionHighlightColorWhenNotFocused"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, SelectionHighlightColorWhenNotFocusedProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectionHighlightColorWhenNotFocused"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, SelectionHighlightColorWhenNotFocusedProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectionMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListPickerFlyout, SelectionModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectionMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, SelectionModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectionMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListBox, SelectionModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectionMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListViewBase, SelectionModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectionMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TreeView, SelectionModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectsOnInvoked"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationViewItem, SelectsOnInvokedProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("shape"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, ShapeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("shouldConstrainToRootBounds"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::Popup, ShouldConstrainToRootBoundsProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("shouldConstrainToRootBounds"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, ShouldConstrainToRootBoundsProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("shoulderNavigationEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::NavigationView, ShoulderNavigationEnabledProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("shouldLoop"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector, ShouldLoopProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("showAndHideAutomatically"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaTransportControls, ShowAndHideAutomaticallyProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("showAsMonochrome"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::BitmapIcon, ShowAsMonochromeProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("showError"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ProgressBar, ShowErrorProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("showMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, ShowModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("showPaused"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ProgressBar, ShowPausedProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("showsScrollingPlaceholders"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListViewBase, ShowsScrollingPlaceholdersProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("singleSelectionFollowsFocus"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListViewBase, SingleSelectionFollowsFocusProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("singleSelectionFollowsFocus"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ListBox, SingleSelectionFollowsFocusProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("sizesContentToTemplatedParent"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollContentPresenter, SizesContentToTemplatedParentProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("smallChange"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase, SmallChangeProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("snapsTo"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Slider, SnapsToProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("spacing"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::StackPanel, SpacingProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stepFrequency"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Slider, StepFrequencyProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stereo3DVideoPackingMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaElement, Stereo3DVideoPackingModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stereo3DVideoRenderMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaElement, Stereo3DVideoRenderModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stretch"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaPlayerPresenter, StretchProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stretch"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaPlayerElement, StretchProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stretch"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaElement, StretchProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stretch"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Image, StretchProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stretch"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Shape, StretchProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stretch"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Viewbox, StretchProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stretch"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CaptureElement, StretchProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stretchDirection"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Viewbox, StretchDirectionProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stroke"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Shape, StrokeProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("strokeDashCap"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Shape, StrokeDashCapProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("strokeDashOffset"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Shape, StrokeDashOffsetProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("strokeEndLineCap"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Shape, StrokeEndLineCapProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("strokeLineJoin"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Shape, StrokeLineJoinProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("strokeMiterLimit"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Shape, StrokeMiterLimitProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("strokeStartLineCap"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Shape, StrokeStartLineCapProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("strokeThickness"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Shape, StrokeThicknessProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("styleSimulations"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Documents::Glyphs, StyleSimulationsProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("symbol"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SymbolIcon, SymbolProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("tabFocusNavigation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, TabFocusNavigationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("tabIndex"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, TabIndexProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("tabNavigation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, TabNavigationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("tag"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, TagProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("tallModeConfiguration"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TwoPaneView, TallModeConfigurationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("text"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AutoSuggestBox, TextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("text"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ComboBox, TextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("text"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, TextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("text"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, TextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("text"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem, TextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("text"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MenuFlyoutSubItem, TextProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("textAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, TextAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, TextAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, TextAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, TextAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textDecorations"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, TextDecorationsProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textDecorations"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, TextDecorationsProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textIndent"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, TextIndentProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textLineBounds"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, TextLineBoundsProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textLineBounds"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, TextLineBoundsProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textLineBounds"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, TextLineBoundsProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textMemberPath"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AutoSuggestBox, TextMemberPathProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("textReadingOrder"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, TextReadingOrderProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textReadingOrder"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, TextReadingOrderProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textReadingOrder"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, TextReadingOrderProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textReadingOrder"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::PasswordBox, TextReadingOrderProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textReadingOrder"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, TextReadingOrderProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textTrimming"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, TextTrimmingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textTrimming"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, TextTrimmingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textWrapping"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichTextBlock, TextWrappingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textWrapping"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, TextWrappingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textWrapping"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RichEditBox, TextWrappingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textWrapping"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBox, TextWrappingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textWrapping"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TextBlock, TextWrappingProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("tickFrequency"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Slider, TickFrequencyProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("tickPlacement"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Slider, TickPlacementProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("tiltInteractionMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, TiltInteractionModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("title"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Pivot, TitleProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("title"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentDialog, TitleProperty), SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("title"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::SettingsFlyout, TitleProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("title"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MenuBarItem, TitleProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("todayForeground"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, TodayForegroundProperty), SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("trafficFlowVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, TrafficFlowVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("transitFeaturesEnabled"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, TransitFeaturesEnabledProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("transitFeaturesVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, TransitFeaturesVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("unicodeString"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Documents::Glyphs, UnicodeStringProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("updateTextOnSelect"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::AutoSuggestBox, UpdateTextOnSelectProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("useLayoutRounding"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, UseLayoutRoundingProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("useSystemFocusVisuals"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, UseSystemFocusVisualsProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("useTouchAnimationsForAllNavigation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::FlipView, UseTouchAnimationsForAllNavigationProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("value"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase, ValueProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("value"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::RatingControl, ValueProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, VerticalAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalAnchorRatio"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, VerticalAnchorRatioProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalChildrenAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::WrapGrid, VerticalChildrenAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalChildrenAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid, VerticalChildrenAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalContentAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ContentPresenter, VerticalContentAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalContentAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Control, VerticalContentAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalDayItemAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, VerticalDayItemAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalFirstOfMonthLabelAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::CalendarView, VerticalFirstOfMonthLabelAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalOffset"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ToolTip, VerticalOffsetProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalOffset"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::Popup, VerticalOffsetProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalScrollBarVisibility"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, VerticalScrollBarVisibilityProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalScrollMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, VerticalScrollModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalShift"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ParallaxView, VerticalShiftProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalSnapPointsAlignment"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, VerticalSnapPointsAlignmentProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalSnapPointsType"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, VerticalSnapPointsTypeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalSourceEndOffset"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ParallaxView, VerticalSourceEndOffsetProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalSourceOffsetKind"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ParallaxView, VerticalSourceOffsetKindProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalSourceStartOffset"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ParallaxView, VerticalSourceStartOffsetProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("viewPadding"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, ViewPaddingProperty), SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("viewportSize"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar, ViewportSizeProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("visibility"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, VisibilityProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("volume"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::MediaElement, VolumeProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("watermarkMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, WatermarkModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("wideModeConfiguration"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::TwoPaneView, WideModeConfigurationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("width"), MAKE_GET_DP(winrt::Windows::UI::Xaml::FrameworkElement, WidthProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("x1"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Line, X1Property), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("x2"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Line, X2Property), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusDownNavigationStrategy"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, XYFocusDownNavigationStrategyProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusKeyboardNavigation"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, XYFocusKeyboardNavigationProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusLeftNavigationStrategy"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, XYFocusLeftNavigationStrategyProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusRightNavigationStrategy"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, XYFocusRightNavigationStrategyProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusUpNavigationStrategy"), MAKE_GET_DP(winrt::Windows::UI::Xaml::UIElement, XYFocusUpNavigationStrategyProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("y1"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Line, Y1Property), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("y2"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Shapes::Line, Y2Property), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("yearFormat"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePicker, YearFormatProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("yearFormat"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePickerFlyout, YearFormatProperty), SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("yearVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePicker, YearVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("yearVisible"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::DatePickerFlyout, YearVisibleProperty), SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("zoomInteractionMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, ZoomInteractionModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("zoomLevel"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::Maps::MapControl, ZoomLevelProperty), SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("zoomMode"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, ZoomModeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("zoomSnapPointsType"), MAKE_GET_DP(winrt::Windows::UI::Xaml::Controls::ScrollViewer, ZoomSnapPointsTypeProperty), SetPropValue<int32_t>, ViewManagerPropertyType::Number },
  };

#ifdef USE_CRC32
void XamlMetadata::PopulateNativeProps(winrt::Windows::Foundation::Collections::IMap<winrt::hstring, ViewManagerPropertyType>& nativeProps) const {
    nativeProps.Insert(winrt::to_hstring("acceptsReturn"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("accessKey"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("allowDrop"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("allowFocusOnInteraction"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("allowFocusWhenDisabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("alwaysShowHeader"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("areCandidatesEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("areOpenCloseAnimationsEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("areScrollSnapPointsRegular"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("areStickyGroupHeadersEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("areTransportControlsEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("audioCategory"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("audioDeviceType"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("autoMaximizeSuggestionArea"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("autoPlay"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("background"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("backgroundSizing"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("badgeGlyph"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("badgeNumber"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("badgeText"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("balance"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("blackoutForeground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("borderBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("borderThickness"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("bringIntoViewOnFocusChange"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("businessLandmarksEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("businessLandmarksVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("buttonFlyoutPlacement"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("cacheLength"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("cacheSize"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("calendarIdentifier"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("calendarItemBackground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("calendarItemBorderBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("calendarItemBorderThickness"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("calendarItemForeground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("canBeScrollAnchor"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("canChangeViews"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("canContentRenderOutsideBounds"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("canDrag"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("canDragItems"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("canReorderItems"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("caption"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("characterCasing"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("characterSpacing"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("checkBoxBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("checkBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("checkHintBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("checkMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("checkSelectingBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("chooseSuggestionOnEnter"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("clickMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("clipboardCopyFormat"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("clockIdentifier"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("closeButtonCommandParameter"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("closeButtonText"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("closedDisplayMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("collapsedGlyph"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("colorChannel"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("colorFontPaletteIndex"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("colorScheme"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("colorSpectrumComponents"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("colorSpectrumShape"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("columnSpacing"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("commandParameter"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("compactModeThresholdWidth"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("compactPaneLength"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("components"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("compositeMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("confirmationButtonsVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("content"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("contentLinkBackgroundColor"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("contentLinkForegroundColor"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("contentMargin"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("dataContext"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("dataFetchSize"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("dateFormat"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("dayFormat"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("dayItemFontSize"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("dayItemFontStyle"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("dayOfWeekFormat"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("dayVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("defaultButton"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("defaultLabelPosition"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("defaultPlaybackRate"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("defaultSectionIndex"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("defaultStyleKey"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("delay"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("description"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("desiredCandidateWindowAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("desiredPitch"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("disabledFormattingAccelerators"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("disabledOpacity"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("displayMemberPath"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("displayMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("displayName"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("dragBackground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("dragForeground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("dragOpacity"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("dynamicOverflowOrder"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("elementSoundMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("exitDisplayModeOnAccessKeyInvoked"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("expandedGlyph"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("expandedModeThresholdWidth"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("fastPlayFallbackBehaviour"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("fill"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("fillRule"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("firstDayOfWeek"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("firstOfMonthLabelFontSize"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("firstOfMonthLabelFontStyle"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("firstOfYearDecadeLabelFontSize"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("firstOfYearDecadeLabelFontStyle"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("flowDirection"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("focusBorderBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("focusOnKeyboardInput"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("focusSecondaryBorderBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("focusVisualMargin"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("focusVisualPrimaryBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("focusVisualPrimaryThickness"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("focusVisualSecondaryBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("focusVisualSecondaryThickness"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("fontRenderingEmSize"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("fontSize"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("fontStretch"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("fontStyle"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("footer"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("foreground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("fullSizeDesired"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("glyph"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("glyphBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("glyphOpacity"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("glyphSize"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("gridViewItemPresenterHorizontalContentAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("gridViewItemPresenterPadding"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("gridViewItemPresenterVerticalContentAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("groupHeaderPlacement"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("groupName"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("groupPadding"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("hasUnrealizedChildren"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("header"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("headerBackground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("headerFocusVisualPlacement"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("headerForeground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("heading"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("height"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("highContrastAdjustment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("horizontalAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("horizontalAnchorRatio"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("horizontalChildrenAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("horizontalContentAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("horizontalDayItemAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("horizontalFirstOfMonthLabelAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("horizontalOffset"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("horizontalScrollBarVisibility"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("horizontalScrollMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("horizontalShift"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("horizontalSnapPointsAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("horizontalSnapPointsType"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("horizontalSourceEndOffset"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("horizontalSourceOffsetKind"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("horizontalSourceStartOffset"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("horizontalTextAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("hoverBorderBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("incrementalLoadingThreshold"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("incrementalLoadingTrigger"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("indicatorMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("indices"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("initialControls"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("initials"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("initialSetValue"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("intermediateValue"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("interval"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("isAccessKeyScope"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isActive"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isActiveView"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isAlphaEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isAlphaSliderVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isAlphaTextInputVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isBackButtonVisible"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("isBackEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isBlackout"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isCalendarOpen"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isChecked"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isClearAllVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isClearEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isColorChannelTextInputVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isColorFontEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isColorPreviewVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isColorSliderVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isColorSpectrumVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isCompact"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isCompactOverlayButtonVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isCompactOverlayEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isDefaultShadowEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isDeferredScrollingEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isDirectionReversed"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isDoubleTapEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isDropDownOpen"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isDynamicOverflowEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isEditable"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isExpanded"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isExtensionGlyphShown"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isFastForwardButtonVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isFastForwardEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isFastRewindButtonVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isFastRewindEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isFocusEngaged"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isFocusEngagementEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isFullWindow"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isFullWindowButtonVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isFullWindowEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isGroup"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isGroupLabelVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isHandwritingViewEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isHeaderInteractive"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isHeaderItemsCarouselEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isHexInputVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isHitTestVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isHoldingEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isHorizontalRailEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isHorizontalScrollChainingEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isHorizontalShiftClamped"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isIndeterminate"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isItemClickEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isLightDismissEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isLocked"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isLooping"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isMoreButtonVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isMultiSelectCheckBoxEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isMuted"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isNavigationStackEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isNextTrackButtonVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isOn"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isOpen"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isOutOfScopeEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isPaneOpen"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isPaneToggleButtonVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isPaneVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isPasswordRevealButtonEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isPlaybackRateButtonVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isPlaybackRateEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isPreviousTrackButtonVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isPrimaryButtonEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isProtractorItemVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isReadOnly"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isRepeatButtonVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isRepeatEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isRightTapEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isRulerButtonChecked"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isRulerItemVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isScrollInertiaEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isSecondaryButtonEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isSeekBarVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isSeekEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isSelected"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isSettingsVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isSkipBackwardButtonVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isSkipBackwardEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isSkipForwardButtonVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isSkipForwardEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isSpellCheckEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isStencilButtonChecked"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isSticky"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isStopButtonVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isStopEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isSuggestionListOpen"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isSwipeEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isTabStop"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isTapEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isTextPredictionEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isTextScaleFactorEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isTextSearchEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isTextSelectionEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isThreeState"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isThumbToolTipEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isTodayHighlighted"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isVerticalRailEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isVerticalScrollChainingEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isVerticalShiftClamped"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isVolumeButtonVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isVolumeEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isZoomButtonVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isZoomChainingEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isZoomedInView"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isZoomedInViewActive"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isZoomEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isZoomInertiaEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("isZoomOutButtonEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("itemHeight"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("itemsSource"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("itemWidth"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("keyboardAcceleratorPlacementMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("keyboardAcceleratorTextOverride"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("keyTipHorizontalOffset"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("keyTipPlacementMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("keyTipVerticalOffset"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("kind"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("label"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("labelPosition"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("landmarksVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("language"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("largeChange"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("leftHeader"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("lightDismissOverlayMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("lineHeight"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("lineStackingStrategy"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("listViewItemPresenterHorizontalContentAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("listViewItemPresenterPadding"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("listViewItemPresenterVerticalContentAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("manipulationMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("mapProjection"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("mapServiceToken"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("margin"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("maxDropDownHeight"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("maxHeight"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("maxHorizontalShiftRatio"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("maxHue"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("maximum"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("maximumRowsOrColumns"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("maxLength"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("maxLines"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("maxRating"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("maxSaturation"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("maxStrokeWidth"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("maxSuggestionListHeight"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("maxValue"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("maxVerticalShiftRatio"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("maxWidth"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("maxZoomFactor"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("menuItemsSource"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("minHeight"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("minHue"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("minimum"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("minSaturation"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("minStrokeWidth"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("minTallModeHeight"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("minuteIncrement"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("minValue"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("minWideModeWidth"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("minWidth"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("minZoomFactor"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("mirroredWhenRightToLeft"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("monthFormat"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("monthVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("monthYearItemFontSize"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("monthYearItemFontStyle"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("name"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("nineGrid"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("numberOfWeeksInView"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("offContent"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("onContent"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("opacity"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("openPaneLength"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("opticalMarginAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("orientation"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("originX"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("originY"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("outOfScopeBackground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("outOfScopeForeground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("overflowButtonVisibility"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("overflowLabelMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("padding"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("paneBackground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("paneDisplayMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("panePlacement"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("panePriority"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("paneTitle"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("panInteractionMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("password"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("passwordChar"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("passwordRevealMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("pedestrianFeaturesVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("placeholderBackground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("placeholderForeground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("placeholderText"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("placeholderValue"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("placement"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("placementAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("playbackRate"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("pointerOverBackground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("pointerOverBackgroundMargin"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("pointerOverForeground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("preferSmallImage"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("pressedBackground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("pressedBorderBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("pressedForeground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("preventKeyboardDisplayOnProgrammaticFocus"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("primaryButtonCommandParameter"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("primaryButtonText"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("pullDirection"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("queryText"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("radiusX"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("radiusY"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("realTimePlayback"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("reduceViewportForCoreInputViewOcclusions"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("region"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("reorderHintOffset"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("reorderMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("requestedTheme"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("requiresPointer"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("revealBackground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("revealBackgroundShowsAboveContent"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("revealBorderBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("revealBorderThickness"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("rightHeader"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("rotateInteractionMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("rowSpacing"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("searchHistoryContext"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("searchHistoryEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("secondaryButtonCommandParameter"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("secondaryButtonText"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("selectedBackground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("selectedBorderBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("selectedBorderThickness"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("selectedBrushIndex"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("selectedForeground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("selectedHoverBorderBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("selectedIndex"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("selectedItem"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("selectedPointerOverBackground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("selectedPointerOverBorderBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("selectedPressedBackground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("selectedPressedBorderBrush"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("selectedStencil"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("selectedStrokeWidth"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("selectedValue"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("selectedValuePath"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("selectionChangedTrigger"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("selectionCheckMarkVisualEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("selectionFollowsFocus"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("selectionHighlightColor"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("selectionHighlightColorWhenNotFocused"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("selectionMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("selectsOnInvoked"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("shape"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("shouldConstrainToRootBounds"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("shoulderNavigationEnabled"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("shouldLoop"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("showAndHideAutomatically"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("showAsMonochrome"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("showError"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("showMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("showPaused"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("showsScrollingPlaceholders"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("singleSelectionFollowsFocus"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("sizesContentToTemplatedParent"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("smallChange"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("snapsTo"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("spacing"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("stepFrequency"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("stereo3DVideoPackingMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("stereo3DVideoRenderMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("stretch"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("stretchDirection"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("stroke"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("strokeDashCap"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("strokeDashOffset"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("strokeEndLineCap"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("strokeLineJoin"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("strokeMiterLimit"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("strokeStartLineCap"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("strokeThickness"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("styleSimulations"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("symbol"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("tabFocusNavigation"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("tabIndex"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("tabNavigation"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("tag"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("tallModeConfiguration"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("text"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("textAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("textDecorations"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("textIndent"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("textLineBounds"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("textMemberPath"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("textReadingOrder"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("textTrimming"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("textWrapping"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("tickFrequency"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("tickPlacement"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("tiltInteractionMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("title"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("todayForeground"), ViewManagerPropertyType::Color);
    nativeProps.Insert(winrt::to_hstring("trafficFlowVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("transitFeaturesEnabled"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("transitFeaturesVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("unicodeString"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("updateTextOnSelect"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("useLayoutRounding"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("useSystemFocusVisuals"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("useTouchAnimationsForAllNavigation"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("value"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("verticalAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("verticalAnchorRatio"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("verticalChildrenAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("verticalContentAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("verticalDayItemAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("verticalFirstOfMonthLabelAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("verticalOffset"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("verticalScrollBarVisibility"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("verticalScrollMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("verticalShift"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("verticalSnapPointsAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("verticalSnapPointsType"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("verticalSourceEndOffset"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("verticalSourceOffsetKind"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("verticalSourceStartOffset"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("viewPadding"), ViewManagerPropertyType::Map);
    nativeProps.Insert(winrt::to_hstring("viewportSize"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("visibility"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("volume"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("watermarkMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("wideModeConfiguration"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("width"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("x1"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("x2"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("xyFocusDownNavigationStrategy"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("xyFocusKeyboardNavigation"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("xyFocusLeftNavigationStrategy"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("xyFocusRightNavigationStrategy"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("xyFocusUpNavigationStrategy"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("y1"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("y2"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("yearFormat"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("yearVisible"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("zoomInteractionMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("zoomLevel"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("zoomMode"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("zoomSnapPointsType"), ViewManagerPropertyType::Number);
}
#else
void XamlMetadata::PopulateNativeProps(winrt::Windows::Foundation::Collections::IMap<winrt::hstring, ViewManagerPropertyType>& nativeProps) const {
  for (auto const& entry : xamlPropertyMap) {
    nativeProps.Insert(winrt::to_hstring(entry.propName), entry.jsType);
  }
}
#endif



