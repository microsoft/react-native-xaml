#pragma once
#include "pch.h"
#include "XamlMetadata.h"
#include "Crc32Str.h"

/*************************************************************
THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT MODIFY MANUALLY
**************************************************************/

#include <winrt/Windows.UI.Xaml.Controls.h>
#include <winrt/Windows.UI.Xaml.Documents.h>
#include <winrt/Windows.UI.Xaml.h>
#include <winrt/Windows.UI.Xaml.Controls.Primitives.h>
#include <winrt/Windows.UI.Xaml.Controls.Maps.h>
#include <winrt/Windows.UI.Xaml.Shapes.h>

template<typename T> 
winrt::Windows::Foundation::IInspectable AsType(const winrt::Windows::Foundation::IInspectable& o) {
  return o.try_as<T>();
}

template<typename T> 
winrt::Windows::Foundation::IInspectable AsUnwrappedType(const winrt::Windows::Foundation::IInspectable& o) {
  return Unwrap<T>(o);
}

/*static*/ const PropInfo xamlPropertyMap[] = {
        { MAKE_KEY("acceptsReturn"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::AcceptsReturnProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("acceptsReturn"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::AcceptsReturnProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("accessKey"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::TextElement>,  []() { return winrt::Windows::UI::Xaml::Documents::TextElement::AccessKeyProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("accessKey"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::AccessKeyProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("allowDrop"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::AllowDropProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("allowFocusOnInteraction"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase::AllowFocusOnInteractionProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("allowFocusOnInteraction"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::AllowFocusOnInteractionProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("allowFocusOnInteraction"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::TextElement>,  []() { return winrt::Windows::UI::Xaml::Documents::TextElement::AllowFocusOnInteractionProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("allowFocusWhenDisabled"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase::AllowFocusWhenDisabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("allowFocusWhenDisabled"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::AllowFocusWhenDisabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("alwaysShowHeader"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::AlwaysShowHeaderProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("areCandidatesEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::HandwritingView>,  []() { return winrt::Windows::UI::Xaml::Controls::HandwritingView::AreCandidatesEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("areOpenCloseAnimationsEnabled"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase::AreOpenCloseAnimationsEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("areScrollSnapPointsRegular"), AsType<winrt::Windows::UI::Xaml::Controls::StackPanel>,  []() { return winrt::Windows::UI::Xaml::Controls::StackPanel::AreScrollSnapPointsRegularProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("areScrollSnapPointsRegular"), AsType<winrt::Windows::UI::Xaml::Controls::VirtualizingStackPanel>,  []() { return winrt::Windows::UI::Xaml::Controls::VirtualizingStackPanel::AreScrollSnapPointsRegularProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("areStickyGroupHeadersEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsStackPanel>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsStackPanel::AreStickyGroupHeadersEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("areStickyGroupHeadersEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid::AreStickyGroupHeadersEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("areTransportControlsEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::MediaElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaElement::AreTransportControlsEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("areTransportControlsEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::MediaPlayerElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaPlayerElement::AreTransportControlsEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("audioCategory"), AsType<winrt::Windows::UI::Xaml::Controls::MediaElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaElement::AudioCategoryProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("audioDeviceType"), AsType<winrt::Windows::UI::Xaml::Controls::MediaElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaElement::AudioDeviceTypeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("autoMaximizeSuggestionArea"), AsType<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>,  []() { return winrt::Windows::UI::Xaml::Controls::AutoSuggestBox::AutoMaximizeSuggestionAreaProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("autoPlay"), AsType<winrt::Windows::UI::Xaml::Controls::MediaElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaElement::AutoPlayProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("autoPlay"), AsType<winrt::Windows::UI::Xaml::Controls::MediaPlayerElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaPlayerElement::AutoPlayProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("background"), AsType<winrt::Windows::UI::Xaml::Controls::Border>,  []() { return winrt::Windows::UI::Xaml::Controls::Border::BackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("background"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::ContentLink>,  []() { return winrt::Windows::UI::Xaml::Documents::ContentLink::BackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("background"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::BackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("background"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::BackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("background"), AsType<winrt::Windows::UI::Xaml::Controls::Panel>,  []() { return winrt::Windows::UI::Xaml::Controls::Panel::BackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("backgroundSizing"), AsType<winrt::Windows::UI::Xaml::Controls::Border>,  []() { return winrt::Windows::UI::Xaml::Controls::Border::BackgroundSizingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("backgroundSizing"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::BackgroundSizingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("backgroundSizing"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::BackgroundSizingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("backgroundSizing"), AsType<winrt::Windows::UI::Xaml::Controls::Grid>,  []() { return winrt::Windows::UI::Xaml::Controls::Grid::BackgroundSizingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("backgroundSizing"), AsType<winrt::Windows::UI::Xaml::Controls::RelativePanel>,  []() { return winrt::Windows::UI::Xaml::Controls::RelativePanel::BackgroundSizingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("backgroundSizing"), AsType<winrt::Windows::UI::Xaml::Controls::StackPanel>,  []() { return winrt::Windows::UI::Xaml::Controls::StackPanel::BackgroundSizingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("badgeGlyph"), AsType<winrt::Windows::UI::Xaml::Controls::PersonPicture>,  []() { return winrt::Windows::UI::Xaml::Controls::PersonPicture::BadgeGlyphProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("badgeNumber"), AsType<winrt::Windows::UI::Xaml::Controls::PersonPicture>,  []() { return winrt::Windows::UI::Xaml::Controls::PersonPicture::BadgeNumberProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("badgeText"), AsType<winrt::Windows::UI::Xaml::Controls::PersonPicture>,  []() { return winrt::Windows::UI::Xaml::Controls::PersonPicture::BadgeTextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("balance"), AsType<winrt::Windows::UI::Xaml::Controls::MediaElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaElement::BalanceProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("blackoutForeground"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::BlackoutForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("borderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::Border>,  []() { return winrt::Windows::UI::Xaml::Controls::Border::BorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("borderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::BorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("borderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::BorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("borderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::Grid>,  []() { return winrt::Windows::UI::Xaml::Controls::Grid::BorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("borderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::RelativePanel>,  []() { return winrt::Windows::UI::Xaml::Controls::RelativePanel::BorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("borderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::StackPanel>,  []() { return winrt::Windows::UI::Xaml::Controls::StackPanel::BorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("borderThickness"), AsType<winrt::Windows::UI::Xaml::Controls::Border>,  []() { return winrt::Windows::UI::Xaml::Controls::Border::BorderThicknessProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("borderThickness"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::BorderThicknessProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("borderThickness"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::BorderThicknessProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("borderThickness"), AsType<winrt::Windows::UI::Xaml::Controls::Grid>,  []() { return winrt::Windows::UI::Xaml::Controls::Grid::BorderThicknessProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("borderThickness"), AsType<winrt::Windows::UI::Xaml::Controls::RelativePanel>,  []() { return winrt::Windows::UI::Xaml::Controls::RelativePanel::BorderThicknessProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("borderThickness"), AsType<winrt::Windows::UI::Xaml::Controls::StackPanel>,  []() { return winrt::Windows::UI::Xaml::Controls::StackPanel::BorderThicknessProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("bringIntoViewOnFocusChange"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::BringIntoViewOnFocusChangeProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("businessLandmarksEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::BusinessLandmarksEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("businessLandmarksVisible"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::BusinessLandmarksVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("buttonFlyoutPlacement"), AsType<winrt::Windows::UI::Xaml::Controls::InkToolbar>,  []() { return winrt::Windows::UI::Xaml::Controls::InkToolbar::ButtonFlyoutPlacementProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("cacheLength"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsStackPanel>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsStackPanel::CacheLengthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("cacheLength"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid::CacheLengthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("cacheSize"), AsType<winrt::Windows::UI::Xaml::Controls::Frame>,  []() { return winrt::Windows::UI::Xaml::Controls::Frame::CacheSizeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("calendarIdentifier"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarDatePicker::CalendarIdentifierProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("calendarIdentifier"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::CalendarIdentifierProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("calendarIdentifier"), AsType<winrt::Windows::UI::Xaml::Controls::DatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePicker::CalendarIdentifierProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("calendarIdentifier"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::DatePickerFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePickerFlyout::CalendarIdentifierProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("calendarItemBackground"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::CalendarItemBackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("calendarItemBorderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::CalendarItemBorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("calendarItemBorderThickness"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::CalendarItemBorderThicknessProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("calendarItemForeground"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::CalendarItemForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("canBeScrollAnchor"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::CanBeScrollAnchorProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("canChangeViews"), AsType<winrt::Windows::UI::Xaml::Controls::SemanticZoom>,  []() { return winrt::Windows::UI::Xaml::Controls::SemanticZoom::CanChangeViewsProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("canContentRenderOutsideBounds"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollContentPresenter::CanContentRenderOutsideBoundsProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("canContentRenderOutsideBounds"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::CanContentRenderOutsideBoundsProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("canDrag"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::CanDragProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("canDragItems"), AsType<winrt::Windows::UI::Xaml::Controls::ListViewBase>,  []() { return winrt::Windows::UI::Xaml::Controls::ListViewBase::CanDragItemsProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("canDragItems"), AsType<winrt::Windows::UI::Xaml::Controls::TreeView>,  []() { return winrt::Windows::UI::Xaml::Controls::TreeView::CanDragItemsProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("canReorderItems"), AsType<winrt::Windows::UI::Xaml::Controls::ListViewBase>,  []() { return winrt::Windows::UI::Xaml::Controls::ListViewBase::CanReorderItemsProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("canReorderItems"), AsType<winrt::Windows::UI::Xaml::Controls::TreeView>,  []() { return winrt::Windows::UI::Xaml::Controls::TreeView::CanReorderItemsProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("caption"), AsType<winrt::Windows::UI::Xaml::Controls::RatingControl>,  []() { return winrt::Windows::UI::Xaml::Controls::RatingControl::CaptionProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("characterCasing"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::CharacterCasingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("characterCasing"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::CharacterCasingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("characterSpacing"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::CharacterSpacingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("characterSpacing"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::CharacterSpacingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("characterSpacing"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::CharacterSpacingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("characterSpacing"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::CharacterSpacingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("characterSpacing"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::TextElement>,  []() { return winrt::Windows::UI::Xaml::Documents::TextElement::CharacterSpacingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("checkBoxBrush"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::CheckBoxBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("checkBrush"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::CheckBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("checkBrush"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::CheckBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("checkHintBrush"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::CheckHintBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("checkHintBrush"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::CheckHintBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("checkMode"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::CheckModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("checkSelectingBrush"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::CheckSelectingBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("checkSelectingBrush"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::CheckSelectingBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("chooseSuggestionOnEnter"), AsType<winrt::Windows::UI::Xaml::Controls::SearchBox>,  []() { return winrt::Windows::UI::Xaml::Controls::SearchBox::ChooseSuggestionOnEnterProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("clickMode"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase::ClickModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("clipboardCopyFormat"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::ClipboardCopyFormatProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("clockIdentifier"), AsType<winrt::Windows::UI::Xaml::Controls::TimePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::TimePicker::ClockIdentifierProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("clockIdentifier"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::TimePickerFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::TimePickerFlyout::ClockIdentifierProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("closeButtonCommandParameter"), AsType<winrt::Windows::UI::Xaml::Controls::ContentDialog>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentDialog::CloseButtonCommandParameterProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("closeButtonText"), AsType<winrt::Windows::UI::Xaml::Controls::ContentDialog>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentDialog::CloseButtonTextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("closedDisplayMode"), AsType<winrt::Windows::UI::Xaml::Controls::AppBar>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBar::ClosedDisplayModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("collapsedGlyph"), AsType<winrt::Windows::UI::Xaml::Controls::TreeViewItem>,  []() { return winrt::Windows::UI::Xaml::Controls::TreeViewItem::CollapsedGlyphProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("colorChannel"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider::ColorChannelProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("colorFontPaletteIndex"), AsType<winrt::Windows::UI::Xaml::Documents::Glyphs>,  []() { return winrt::Windows::UI::Xaml::Documents::Glyphs::ColorFontPaletteIndexProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("colorScheme"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::ColorSchemeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("colorSpectrumComponents"), AsType<winrt::Windows::UI::Xaml::Controls::ColorPicker>,  []() { return winrt::Windows::UI::Xaml::Controls::ColorPicker::ColorSpectrumComponentsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("colorSpectrumShape"), AsType<winrt::Windows::UI::Xaml::Controls::ColorPicker>,  []() { return winrt::Windows::UI::Xaml::Controls::ColorPicker::ColorSpectrumShapeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("columnSpacing"), AsType<winrt::Windows::UI::Xaml::Controls::Grid>,  []() { return winrt::Windows::UI::Xaml::Controls::Grid::ColumnSpacingProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("commandParameter"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase::CommandParameterProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("commandParameter"), AsType<winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem>,  []() { return winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem::CommandParameterProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("commandParameter"), AsType<winrt::Windows::UI::Xaml::Controls::SplitButton>,  []() { return winrt::Windows::UI::Xaml::Controls::SplitButton::CommandParameterProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("compactModeThresholdWidth"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::CompactModeThresholdWidthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("compactPaneLength"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::CompactPaneLengthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("compactPaneLength"), AsType<winrt::Windows::UI::Xaml::Controls::SplitView>,  []() { return winrt::Windows::UI::Xaml::Controls::SplitView::CompactPaneLengthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("components"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum::ComponentsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("compositeMode"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::CompositeModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("confirmationButtonsVisible"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::PickerFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::PickerFlyout::ConfirmationButtonsVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("content"), AsType<winrt::Windows::UI::Xaml::Controls::ContentControl>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentControl::ContentProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("content"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::ContentProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("contentLinkBackgroundColor"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::ContentLinkBackgroundColorProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("contentLinkForegroundColor"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::ContentLinkForegroundColorProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("contentMargin"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::ContentMarginProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("contentMargin"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::ContentMarginProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("cursor"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::ContentLink>,  []() { return winrt::Windows::UI::Xaml::Documents::ContentLink::CursorProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("dataContext"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::DataContextProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("dataFetchSize"), AsType<winrt::Windows::UI::Xaml::Controls::ListViewBase>,  []() { return winrt::Windows::UI::Xaml::Controls::ListViewBase::DataFetchSizeProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("dateFormat"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarDatePicker::DateFormatProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("dayFormat"), AsType<winrt::Windows::UI::Xaml::Controls::DatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePicker::DayFormatProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("dayFormat"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::DatePickerFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePickerFlyout::DayFormatProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("dayItemFontSize"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::DayItemFontSizeProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("dayItemFontStyle"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::DayItemFontStyleProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("dayOfWeekFormat"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarDatePicker::DayOfWeekFormatProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("dayOfWeekFormat"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::DayOfWeekFormatProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("dayVisible"), AsType<winrt::Windows::UI::Xaml::Controls::DatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePicker::DayVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("dayVisible"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::DatePickerFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePickerFlyout::DayVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("defaultButton"), AsType<winrt::Windows::UI::Xaml::Controls::ContentDialog>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentDialog::DefaultButtonProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("defaultLabelPosition"), AsType<winrt::Windows::UI::Xaml::Controls::CommandBar>,  []() { return winrt::Windows::UI::Xaml::Controls::CommandBar::DefaultLabelPositionProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("defaultPlaybackRate"), AsType<winrt::Windows::UI::Xaml::Controls::MediaElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaElement::DefaultPlaybackRateProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("defaultSectionIndex"), AsType<winrt::Windows::UI::Xaml::Controls::Hub>,  []() { return winrt::Windows::UI::Xaml::Controls::Hub::DefaultSectionIndexProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("defaultStyleKey"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::DefaultStyleKeyProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("defaultStyleResourceUri"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::DefaultStyleResourceUriProperty(); }, SetPropValue<winrt::Windows::Foundation::Uri>, ViewManagerPropertyType::String },
        { MAKE_KEY("delay"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::RepeatButton>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::RepeatButton::DelayProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("description"), AsType<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>,  []() { return winrt::Windows::UI::Xaml::Controls::AutoSuggestBox::DescriptionProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("description"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarDatePicker::DescriptionProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("description"), AsType<winrt::Windows::UI::Xaml::Controls::ComboBox>,  []() { return winrt::Windows::UI::Xaml::Controls::ComboBox::DescriptionProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("description"), AsType<winrt::Windows::UI::Xaml::Controls::PasswordBox>,  []() { return winrt::Windows::UI::Xaml::Controls::PasswordBox::DescriptionProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("description"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::DescriptionProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("description"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::DescriptionProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("desiredCandidateWindowAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::DesiredCandidateWindowAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("desiredCandidateWindowAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::DesiredCandidateWindowAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("desiredPitch"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::DesiredPitchProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("disabledFormattingAccelerators"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::DisabledFormattingAcceleratorsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("disabledOpacity"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::DisabledOpacityProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("disabledOpacity"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::DisabledOpacityProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("displayMemberPath"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsControl>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsControl::DisplayMemberPathProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("displayMemberPath"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::ListPickerFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::ListPickerFlyout::DisplayMemberPathProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("displayMode"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarDatePicker::DisplayModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("displayMode"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::DisplayModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("displayMode"), AsType<winrt::Windows::UI::Xaml::Controls::SplitView>,  []() { return winrt::Windows::UI::Xaml::Controls::SplitView::DisplayModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("displayName"), AsType<winrt::Windows::UI::Xaml::Controls::PersonPicture>,  []() { return winrt::Windows::UI::Xaml::Controls::PersonPicture::DisplayNameProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("dragBackground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::DragBackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("dragBackground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::DragBackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("dragForeground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::DragForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("dragForeground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::DragForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("dragOpacity"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::DragOpacityProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("dragOpacity"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::DragOpacityProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("dynamicOverflowOrder"), AsType<winrt::Windows::UI::Xaml::Controls::AppBarButton>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBarButton::DynamicOverflowOrderProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("dynamicOverflowOrder"), AsType<winrt::Windows::UI::Xaml::Controls::AppBarElementContainer>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBarElementContainer::DynamicOverflowOrderProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("dynamicOverflowOrder"), AsType<winrt::Windows::UI::Xaml::Controls::AppBarSeparator>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBarSeparator::DynamicOverflowOrderProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("dynamicOverflowOrder"), AsType<winrt::Windows::UI::Xaml::Controls::AppBarToggleButton>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBarToggleButton::DynamicOverflowOrderProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("elementSoundMode"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::ContentLink>,  []() { return winrt::Windows::UI::Xaml::Documents::ContentLink::ElementSoundModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("elementSoundMode"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::ElementSoundModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("elementSoundMode"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase::ElementSoundModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("elementSoundMode"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Hyperlink>,  []() { return winrt::Windows::UI::Xaml::Documents::Hyperlink::ElementSoundModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("exitDisplayModeOnAccessKeyInvoked"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::TextElement>,  []() { return winrt::Windows::UI::Xaml::Documents::TextElement::ExitDisplayModeOnAccessKeyInvokedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("exitDisplayModeOnAccessKeyInvoked"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::ExitDisplayModeOnAccessKeyInvokedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("expandedGlyph"), AsType<winrt::Windows::UI::Xaml::Controls::TreeViewItem>,  []() { return winrt::Windows::UI::Xaml::Controls::TreeViewItem::ExpandedGlyphProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("expandedModeThresholdWidth"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::ExpandedModeThresholdWidthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fastPlayFallbackBehaviour"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::FastPlayFallbackBehaviourProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fill"), AsType<winrt::Windows::UI::Xaml::Documents::Glyphs>,  []() { return winrt::Windows::UI::Xaml::Documents::Glyphs::FillProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("fill"), AsType<winrt::Windows::UI::Xaml::Shapes::Shape>,  []() { return winrt::Windows::UI::Xaml::Shapes::Shape::FillProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("fill"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::TickBar>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::TickBar::FillProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("fillRule"), AsType<winrt::Windows::UI::Xaml::Shapes::Polygon>,  []() { return winrt::Windows::UI::Xaml::Shapes::Polygon::FillRuleProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fillRule"), AsType<winrt::Windows::UI::Xaml::Shapes::Polyline>,  []() { return winrt::Windows::UI::Xaml::Shapes::Polyline::FillRuleProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("firstDayOfWeek"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarDatePicker::FirstDayOfWeekProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("firstDayOfWeek"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::FirstDayOfWeekProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("firstOfMonthLabelFontSize"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::FirstOfMonthLabelFontSizeProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("firstOfMonthLabelFontStyle"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::FirstOfMonthLabelFontStyleProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("firstOfYearDecadeLabelFontSize"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::FirstOfYearDecadeLabelFontSizeProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("firstOfYearDecadeLabelFontStyle"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::FirstOfYearDecadeLabelFontStyleProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("flowDirection"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::FlowDirectionProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("flowDirection"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Run>,  []() { return winrt::Windows::UI::Xaml::Documents::Run::FlowDirectionProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("focusBorderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::FocusBorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("focusBorderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::FocusBorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("focusBorderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::FocusBorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("focusOnKeyboardInput"), AsType<winrt::Windows::UI::Xaml::Controls::SearchBox>,  []() { return winrt::Windows::UI::Xaml::Controls::SearchBox::FocusOnKeyboardInputProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("focusSecondaryBorderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::FocusSecondaryBorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("focusVisualMargin"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::FocusVisualMarginProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("focusVisualPrimaryBrush"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::FocusVisualPrimaryBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("focusVisualPrimaryThickness"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::FocusVisualPrimaryThicknessProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("focusVisualSecondaryBrush"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::FocusVisualSecondaryBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("focusVisualSecondaryThickness"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::FocusVisualSecondaryThicknessProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("fontRenderingEmSize"), AsType<winrt::Windows::UI::Xaml::Documents::Glyphs>,  []() { return winrt::Windows::UI::Xaml::Documents::Glyphs::FontRenderingEmSizeProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontSize"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::FontSizeProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontSize"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::FontSizeProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontSize"), AsType<winrt::Windows::UI::Xaml::Controls::FontIcon>,  []() { return winrt::Windows::UI::Xaml::Controls::FontIcon::FontSizeProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontSize"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::FontSizeProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontSize"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::FontSizeProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontSize"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::TextElement>,  []() { return winrt::Windows::UI::Xaml::Documents::TextElement::FontSizeProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStretch"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::FontStretchProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStretch"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::FontStretchProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStretch"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::FontStretchProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStretch"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::FontStretchProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStretch"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::TextElement>,  []() { return winrt::Windows::UI::Xaml::Documents::TextElement::FontStretchProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStyle"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::FontStyleProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStyle"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::FontStyleProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStyle"), AsType<winrt::Windows::UI::Xaml::Controls::FontIcon>,  []() { return winrt::Windows::UI::Xaml::Controls::FontIcon::FontStyleProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStyle"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::FontStyleProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStyle"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::FontStyleProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontStyle"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::TextElement>,  []() { return winrt::Windows::UI::Xaml::Documents::TextElement::FontStyleProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("fontUri"), AsType<winrt::Windows::UI::Xaml::Documents::Glyphs>,  []() { return winrt::Windows::UI::Xaml::Documents::Glyphs::FontUriProperty(); }, SetPropValue<winrt::Windows::Foundation::Uri>, ViewManagerPropertyType::String },
        { MAKE_KEY("footer"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsPresenter::FooterProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("footer"), AsType<winrt::Windows::UI::Xaml::Controls::ListViewBase>,  []() { return winrt::Windows::UI::Xaml::Controls::ListViewBase::FooterProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("foreground"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::ForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("foreground"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::ForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("foreground"), AsType<winrt::Windows::UI::Xaml::Controls::IconElement>,  []() { return winrt::Windows::UI::Xaml::Controls::IconElement::ForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("foreground"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::ForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("foreground"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::ForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("foreground"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::TextElement>,  []() { return winrt::Windows::UI::Xaml::Documents::TextElement::ForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("fullSizeDesired"), AsType<winrt::Windows::UI::Xaml::Controls::ContentDialog>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentDialog::FullSizeDesiredProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("glyph"), AsType<winrt::Windows::UI::Xaml::Controls::FontIcon>,  []() { return winrt::Windows::UI::Xaml::Controls::FontIcon::GlyphProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("glyphBrush"), AsType<winrt::Windows::UI::Xaml::Controls::TreeViewItem>,  []() { return winrt::Windows::UI::Xaml::Controls::TreeViewItem::GlyphBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("glyphOpacity"), AsType<winrt::Windows::UI::Xaml::Controls::TreeViewItem>,  []() { return winrt::Windows::UI::Xaml::Controls::TreeViewItem::GlyphOpacityProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("glyphSize"), AsType<winrt::Windows::UI::Xaml::Controls::TreeViewItem>,  []() { return winrt::Windows::UI::Xaml::Controls::TreeViewItem::GlyphSizeProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("gridViewItemPresenterHorizontalContentAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::GridViewItemPresenterHorizontalContentAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("gridViewItemPresenterPadding"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::GridViewItemPresenterPaddingProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("gridViewItemPresenterVerticalContentAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::GridViewItemPresenterVerticalContentAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("groupHeaderPlacement"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsStackPanel>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsStackPanel::GroupHeaderPlacementProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("groupHeaderPlacement"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid::GroupHeaderPlacementProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("groupName"), AsType<winrt::Windows::UI::Xaml::Controls::RadioButton>,  []() { return winrt::Windows::UI::Xaml::Controls::RadioButton::GroupNameProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("groupPadding"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsStackPanel>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsStackPanel::GroupPaddingProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("groupPadding"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid::GroupPaddingProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("hasUnrealizedChildren"), AsType<winrt::Windows::UI::Xaml::Controls::TreeViewItem>,  []() { return winrt::Windows::UI::Xaml::Controls::TreeViewItem::HasUnrealizedChildrenProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("header"), AsType<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>,  []() { return winrt::Windows::UI::Xaml::Controls::AutoSuggestBox::HeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarDatePicker::HeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), AsType<winrt::Windows::UI::Xaml::Controls::ComboBox>,  []() { return winrt::Windows::UI::Xaml::Controls::ComboBox::HeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), AsType<winrt::Windows::UI::Xaml::Controls::DatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePicker::HeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), AsType<winrt::Windows::UI::Xaml::Controls::Hub>,  []() { return winrt::Windows::UI::Xaml::Controls::Hub::HeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), AsType<winrt::Windows::UI::Xaml::Controls::HubSection>,  []() { return winrt::Windows::UI::Xaml::Controls::HubSection::HeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsPresenter::HeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), AsType<winrt::Windows::UI::Xaml::Controls::ListViewBase>,  []() { return winrt::Windows::UI::Xaml::Controls::ListViewBase::HeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::HeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), AsType<winrt::Windows::UI::Xaml::Controls::PasswordBox>,  []() { return winrt::Windows::UI::Xaml::Controls::PasswordBox::HeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), AsType<winrt::Windows::UI::Xaml::Controls::PivotItem>,  []() { return winrt::Windows::UI::Xaml::Controls::PivotItem::HeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::HeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), AsType<winrt::Windows::UI::Xaml::Controls::Slider>,  []() { return winrt::Windows::UI::Xaml::Controls::Slider::HeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::HeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), AsType<winrt::Windows::UI::Xaml::Controls::TimePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::TimePicker::HeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("header"), AsType<winrt::Windows::UI::Xaml::Controls::ToggleSwitch>,  []() { return winrt::Windows::UI::Xaml::Controls::ToggleSwitch::HeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("headerBackground"), AsType<winrt::Windows::UI::Xaml::Controls::SettingsFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::SettingsFlyout::HeaderBackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("headerFocusVisualPlacement"), AsType<winrt::Windows::UI::Xaml::Controls::Pivot>,  []() { return winrt::Windows::UI::Xaml::Controls::Pivot::HeaderFocusVisualPlacementProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("headerForeground"), AsType<winrt::Windows::UI::Xaml::Controls::SettingsFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::SettingsFlyout::HeaderForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("heading"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::HeadingProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("height"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::HeightProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("highContrastAdjustment"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::HighContrastAdjustmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalAlignment"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::HorizontalAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalAnchorRatio"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::HorizontalAnchorRatioProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalChildrenAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid::HorizontalChildrenAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalChildrenAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::WrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::WrapGrid::HorizontalChildrenAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalContentAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::HorizontalContentAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalContentAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::HorizontalContentAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalDayItemAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::HorizontalDayItemAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalFirstOfMonthLabelAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::HorizontalFirstOfMonthLabelAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalOffset"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::Popup::HorizontalOffsetProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalOffset"), AsType<winrt::Windows::UI::Xaml::Controls::ToolTip>,  []() { return winrt::Windows::UI::Xaml::Controls::ToolTip::HorizontalOffsetProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalScrollBarVisibility"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::HorizontalScrollBarVisibilityProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalScrollMode"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::HorizontalScrollModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalShift"), AsType<winrt::Windows::UI::Xaml::Controls::ParallaxView>,  []() { return winrt::Windows::UI::Xaml::Controls::ParallaxView::HorizontalShiftProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalSnapPointsAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::HorizontalSnapPointsAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalSnapPointsType"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::HorizontalSnapPointsTypeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalSourceEndOffset"), AsType<winrt::Windows::UI::Xaml::Controls::ParallaxView>,  []() { return winrt::Windows::UI::Xaml::Controls::ParallaxView::HorizontalSourceEndOffsetProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalSourceOffsetKind"), AsType<winrt::Windows::UI::Xaml::Controls::ParallaxView>,  []() { return winrt::Windows::UI::Xaml::Controls::ParallaxView::HorizontalSourceOffsetKindProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalSourceStartOffset"), AsType<winrt::Windows::UI::Xaml::Controls::ParallaxView>,  []() { return winrt::Windows::UI::Xaml::Controls::ParallaxView::HorizontalSourceStartOffsetProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalTextAlignment"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Block>,  []() { return winrt::Windows::UI::Xaml::Documents::Block::HorizontalTextAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalTextAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::HorizontalTextAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalTextAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::HorizontalTextAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalTextAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::HorizontalTextAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("horizontalTextAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::HorizontalTextAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("hoverBorderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::HoverBorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("incrementalLoadingThreshold"), AsType<winrt::Windows::UI::Xaml::Controls::ListViewBase>,  []() { return winrt::Windows::UI::Xaml::Controls::ListViewBase::IncrementalLoadingThresholdProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("incrementalLoadingTrigger"), AsType<winrt::Windows::UI::Xaml::Controls::ListViewBase>,  []() { return winrt::Windows::UI::Xaml::Controls::ListViewBase::IncrementalLoadingTriggerProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("indicatorMode"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar::IndicatorModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("indices"), AsType<winrt::Windows::UI::Xaml::Documents::Glyphs>,  []() { return winrt::Windows::UI::Xaml::Documents::Glyphs::IndicesProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("initialControls"), AsType<winrt::Windows::UI::Xaml::Controls::InkToolbar>,  []() { return winrt::Windows::UI::Xaml::Controls::InkToolbar::InitialControlsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("initials"), AsType<winrt::Windows::UI::Xaml::Controls::PersonPicture>,  []() { return winrt::Windows::UI::Xaml::Controls::PersonPicture::InitialsProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("initialSetValue"), AsType<winrt::Windows::UI::Xaml::Controls::RatingControl>,  []() { return winrt::Windows::UI::Xaml::Controls::RatingControl::InitialSetValueProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("intermediateValue"), AsType<winrt::Windows::UI::Xaml::Controls::Slider>,  []() { return winrt::Windows::UI::Xaml::Controls::Slider::IntermediateValueProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("interval"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::RepeatButton>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::RepeatButton::IntervalProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("isAccessKeyScope"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::TextElement>,  []() { return winrt::Windows::UI::Xaml::Documents::TextElement::IsAccessKeyScopeProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isAccessKeyScope"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::IsAccessKeyScopeProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isActive"), AsType<winrt::Windows::UI::Xaml::Controls::ProgressRing>,  []() { return winrt::Windows::UI::Xaml::Controls::ProgressRing::IsActiveProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isActiveView"), AsType<winrt::Windows::UI::Xaml::Controls::Hub>,  []() { return winrt::Windows::UI::Xaml::Controls::Hub::IsActiveViewProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isActiveView"), AsType<winrt::Windows::UI::Xaml::Controls::ListViewBase>,  []() { return winrt::Windows::UI::Xaml::Controls::ListViewBase::IsActiveViewProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isAlphaEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ColorPicker>,  []() { return winrt::Windows::UI::Xaml::Controls::ColorPicker::IsAlphaEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isAlphaSliderVisible"), AsType<winrt::Windows::UI::Xaml::Controls::ColorPicker>,  []() { return winrt::Windows::UI::Xaml::Controls::ColorPicker::IsAlphaSliderVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isAlphaTextInputVisible"), AsType<winrt::Windows::UI::Xaml::Controls::ColorPicker>,  []() { return winrt::Windows::UI::Xaml::Controls::ColorPicker::IsAlphaTextInputVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isBackButtonVisible"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::IsBackButtonVisibleProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("isBackEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::IsBackEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isBlackout"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarViewDayItem>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarViewDayItem::IsBlackoutProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isCalendarOpen"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarDatePicker::IsCalendarOpenProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isChecked"), AsType<winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem>,  []() { return winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem::IsCheckedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isChecked"), AsType<winrt::Windows::UI::Xaml::Controls::ToggleMenuFlyoutItem>,  []() { return winrt::Windows::UI::Xaml::Controls::ToggleMenuFlyoutItem::IsCheckedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isClearAllVisible"), AsType<winrt::Windows::UI::Xaml::Controls::InkToolbarEraserButton>,  []() { return winrt::Windows::UI::Xaml::Controls::InkToolbarEraserButton::IsClearAllVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isClearEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::RatingControl>,  []() { return winrt::Windows::UI::Xaml::Controls::RatingControl::IsClearEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorChannelTextInputVisible"), AsType<winrt::Windows::UI::Xaml::Controls::ColorPicker>,  []() { return winrt::Windows::UI::Xaml::Controls::ColorPicker::IsColorChannelTextInputVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorFontEnabled"), AsType<winrt::Windows::UI::Xaml::Documents::Glyphs>,  []() { return winrt::Windows::UI::Xaml::Documents::Glyphs::IsColorFontEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorFontEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::IsColorFontEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorFontEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::IsColorFontEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorFontEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::IsColorFontEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorFontEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::IsColorFontEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorPreviewVisible"), AsType<winrt::Windows::UI::Xaml::Controls::ColorPicker>,  []() { return winrt::Windows::UI::Xaml::Controls::ColorPicker::IsColorPreviewVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorSliderVisible"), AsType<winrt::Windows::UI::Xaml::Controls::ColorPicker>,  []() { return winrt::Windows::UI::Xaml::Controls::ColorPicker::IsColorSliderVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isColorSpectrumVisible"), AsType<winrt::Windows::UI::Xaml::Controls::ColorPicker>,  []() { return winrt::Windows::UI::Xaml::Controls::ColorPicker::IsColorSpectrumVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isCompact"), AsType<winrt::Windows::UI::Xaml::Controls::AppBarButton>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBarButton::IsCompactProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isCompact"), AsType<winrt::Windows::UI::Xaml::Controls::AppBarElementContainer>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBarElementContainer::IsCompactProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isCompact"), AsType<winrt::Windows::UI::Xaml::Controls::AppBarSeparator>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBarSeparator::IsCompactProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isCompact"), AsType<winrt::Windows::UI::Xaml::Controls::AppBarToggleButton>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBarToggleButton::IsCompactProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isCompact"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsCompactProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isCompactOverlayButtonVisible"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsCompactOverlayButtonVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isCompactOverlayEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsCompactOverlayEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDefaultShadowEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::DatePickerFlyoutPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePickerFlyoutPresenter::IsDefaultShadowEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDefaultShadowEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::FlyoutPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::FlyoutPresenter::IsDefaultShadowEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDefaultShadowEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::MenuFlyoutPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::MenuFlyoutPresenter::IsDefaultShadowEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDefaultShadowEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::TimePickerFlyoutPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::TimePickerFlyoutPresenter::IsDefaultShadowEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDeferredScrollingEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::IsDeferredScrollingEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDirectionReversed"), AsType<winrt::Windows::UI::Xaml::Controls::Slider>,  []() { return winrt::Windows::UI::Xaml::Controls::Slider::IsDirectionReversedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDoubleTapEnabled"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::IsDoubleTapEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDropDownOpen"), AsType<winrt::Windows::UI::Xaml::Controls::ComboBox>,  []() { return winrt::Windows::UI::Xaml::Controls::ComboBox::IsDropDownOpenProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isDynamicOverflowEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::CommandBar>,  []() { return winrt::Windows::UI::Xaml::Controls::CommandBar::IsDynamicOverflowEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isEditable"), AsType<winrt::Windows::UI::Xaml::Controls::ComboBox>,  []() { return winrt::Windows::UI::Xaml::Controls::ComboBox::IsEditableProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::IsEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isExpanded"), AsType<winrt::Windows::UI::Xaml::Controls::TreeViewItem>,  []() { return winrt::Windows::UI::Xaml::Controls::TreeViewItem::IsExpandedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isExtensionGlyphShown"), AsType<winrt::Windows::UI::Xaml::Controls::InkToolbarMenuButton>,  []() { return winrt::Windows::UI::Xaml::Controls::InkToolbarMenuButton::IsExtensionGlyphShownProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isExtensionGlyphShown"), AsType<winrt::Windows::UI::Xaml::Controls::InkToolbarToolButton>,  []() { return winrt::Windows::UI::Xaml::Controls::InkToolbarToolButton::IsExtensionGlyphShownProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFastForwardButtonVisible"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsFastForwardButtonVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFastForwardEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsFastForwardEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFastRewindButtonVisible"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsFastRewindButtonVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFastRewindEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsFastRewindEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFocusEngaged"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::IsFocusEngagedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFocusEngagementEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::IsFocusEngagementEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFullWindow"), AsType<winrt::Windows::UI::Xaml::Controls::MediaElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaElement::IsFullWindowProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFullWindow"), AsType<winrt::Windows::UI::Xaml::Controls::MediaPlayerElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaPlayerElement::IsFullWindowProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFullWindow"), AsType<winrt::Windows::UI::Xaml::Controls::MediaPlayerPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaPlayerPresenter::IsFullWindowProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFullWindowButtonVisible"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsFullWindowButtonVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isFullWindowEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsFullWindowEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isGroup"), AsType<winrt::Windows::UI::Xaml::Controls::PersonPicture>,  []() { return winrt::Windows::UI::Xaml::Controls::PersonPicture::IsGroupProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isGroupLabelVisible"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarDatePicker::IsGroupLabelVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isGroupLabelVisible"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::IsGroupLabelVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHandwritingViewEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::IsHandwritingViewEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHandwritingViewEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::IsHandwritingViewEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHeaderInteractive"), AsType<winrt::Windows::UI::Xaml::Controls::HubSection>,  []() { return winrt::Windows::UI::Xaml::Controls::HubSection::IsHeaderInteractiveProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHeaderItemsCarouselEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::Pivot>,  []() { return winrt::Windows::UI::Xaml::Controls::Pivot::IsHeaderItemsCarouselEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHexInputVisible"), AsType<winrt::Windows::UI::Xaml::Controls::ColorPicker>,  []() { return winrt::Windows::UI::Xaml::Controls::ColorPicker::IsHexInputVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHitTestVisible"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::IsHitTestVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHoldingEnabled"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::IsHoldingEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHorizontalRailEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::IsHorizontalRailEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHorizontalScrollChainingEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::IsHorizontalScrollChainingEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isHorizontalShiftClamped"), AsType<winrt::Windows::UI::Xaml::Controls::ParallaxView>,  []() { return winrt::Windows::UI::Xaml::Controls::ParallaxView::IsHorizontalShiftClampedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isIndeterminate"), AsType<winrt::Windows::UI::Xaml::Controls::ProgressBar>,  []() { return winrt::Windows::UI::Xaml::Controls::ProgressBar::IsIndeterminateProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isItemClickEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ListViewBase>,  []() { return winrt::Windows::UI::Xaml::Controls::ListViewBase::IsItemClickEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isLightDismissEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::Popup::IsLightDismissEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isLocked"), AsType<winrt::Windows::UI::Xaml::Controls::Pivot>,  []() { return winrt::Windows::UI::Xaml::Controls::Pivot::IsLockedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isLooping"), AsType<winrt::Windows::UI::Xaml::Controls::MediaElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaElement::IsLoopingProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isMoreButtonVisible"), AsType<winrt::Windows::UI::Xaml::Controls::ColorPicker>,  []() { return winrt::Windows::UI::Xaml::Controls::ColorPicker::IsMoreButtonVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isMultiSelectCheckBoxEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ListViewBase>,  []() { return winrt::Windows::UI::Xaml::Controls::ListViewBase::IsMultiSelectCheckBoxEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isMuted"), AsType<winrt::Windows::UI::Xaml::Controls::MediaElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaElement::IsMutedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isNavigationStackEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::Frame>,  []() { return winrt::Windows::UI::Xaml::Controls::Frame::IsNavigationStackEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isNextTrackButtonVisible"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsNextTrackButtonVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isOn"), AsType<winrt::Windows::UI::Xaml::Controls::ToggleSwitch>,  []() { return winrt::Windows::UI::Xaml::Controls::ToggleSwitch::IsOnProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isOpen"), AsType<winrt::Windows::UI::Xaml::Controls::AppBar>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBar::IsOpenProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isOpen"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::Popup::IsOpenProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isOpen"), AsType<winrt::Windows::UI::Xaml::Controls::ToolTip>,  []() { return winrt::Windows::UI::Xaml::Controls::ToolTip::IsOpenProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isOutOfScopeEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarDatePicker::IsOutOfScopeEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isOutOfScopeEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::IsOutOfScopeEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPaneOpen"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::IsPaneOpenProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPaneOpen"), AsType<winrt::Windows::UI::Xaml::Controls::SplitView>,  []() { return winrt::Windows::UI::Xaml::Controls::SplitView::IsPaneOpenProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPaneToggleButtonVisible"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::IsPaneToggleButtonVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPaneVisible"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::IsPaneVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPasswordRevealButtonEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::PasswordBox>,  []() { return winrt::Windows::UI::Xaml::Controls::PasswordBox::IsPasswordRevealButtonEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPlaybackRateButtonVisible"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsPlaybackRateButtonVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPlaybackRateEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsPlaybackRateEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPreviousTrackButtonVisible"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsPreviousTrackButtonVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isPrimaryButtonEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ContentDialog>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentDialog::IsPrimaryButtonEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isProtractorItemVisible"), AsType<winrt::Windows::UI::Xaml::Controls::InkToolbarStencilButton>,  []() { return winrt::Windows::UI::Xaml::Controls::InkToolbarStencilButton::IsProtractorItemVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isReadOnly"), AsType<winrt::Windows::UI::Xaml::Controls::RatingControl>,  []() { return winrt::Windows::UI::Xaml::Controls::RatingControl::IsReadOnlyProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isReadOnly"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::IsReadOnlyProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isReadOnly"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::IsReadOnlyProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isRepeatButtonVisible"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsRepeatButtonVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isRepeatEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsRepeatEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isRightTapEnabled"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::IsRightTapEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isRulerButtonChecked"), AsType<winrt::Windows::UI::Xaml::Controls::InkToolbar>,  []() { return winrt::Windows::UI::Xaml::Controls::InkToolbar::IsRulerButtonCheckedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isRulerItemVisible"), AsType<winrt::Windows::UI::Xaml::Controls::InkToolbarStencilButton>,  []() { return winrt::Windows::UI::Xaml::Controls::InkToolbarStencilButton::IsRulerItemVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isScrollInertiaEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::IsScrollInertiaEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSecondaryButtonEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ContentDialog>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentDialog::IsSecondaryButtonEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSeekBarVisible"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsSeekBarVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSeekEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsSeekEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSelected"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::SelectorItem>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::SelectorItem::IsSelectedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSettingsVisible"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::IsSettingsVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSkipBackwardButtonVisible"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsSkipBackwardButtonVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSkipBackwardEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsSkipBackwardEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSkipForwardButtonVisible"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsSkipForwardButtonVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSkipForwardEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsSkipForwardEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSpellCheckEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::IsSpellCheckEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSpellCheckEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::IsSpellCheckEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isStencilButtonChecked"), AsType<winrt::Windows::UI::Xaml::Controls::InkToolbar>,  []() { return winrt::Windows::UI::Xaml::Controls::InkToolbar::IsStencilButtonCheckedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSticky"), AsType<winrt::Windows::UI::Xaml::Controls::AppBar>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBar::IsStickyProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isStopButtonVisible"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsStopButtonVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isStopEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsStopEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSuggestionListOpen"), AsType<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>,  []() { return winrt::Windows::UI::Xaml::Controls::AutoSuggestBox::IsSuggestionListOpenProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isSwipeEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ListViewBase>,  []() { return winrt::Windows::UI::Xaml::Controls::ListViewBase::IsSwipeEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTabStop"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::ContentLink>,  []() { return winrt::Windows::UI::Xaml::Documents::ContentLink::IsTabStopProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTabStop"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::IsTabStopProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTabStop"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Hyperlink>,  []() { return winrt::Windows::UI::Xaml::Documents::Hyperlink::IsTabStopProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTapEnabled"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::IsTapEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextPredictionEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::IsTextPredictionEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextPredictionEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::IsTextPredictionEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextScaleFactorEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::IsTextScaleFactorEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextScaleFactorEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::IsTextScaleFactorEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextScaleFactorEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::FontIcon>,  []() { return winrt::Windows::UI::Xaml::Controls::FontIcon::IsTextScaleFactorEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextScaleFactorEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::IsTextScaleFactorEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextScaleFactorEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::IsTextScaleFactorEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextScaleFactorEnabled"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::TextElement>,  []() { return winrt::Windows::UI::Xaml::Documents::TextElement::IsTextScaleFactorEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextSearchEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ComboBox>,  []() { return winrt::Windows::UI::Xaml::Controls::ComboBox::IsTextSearchEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextSelectionEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::IsTextSelectionEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTextSelectionEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::IsTextSelectionEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isThreeState"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton::IsThreeStateProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isThumbToolTipEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::Slider>,  []() { return winrt::Windows::UI::Xaml::Controls::Slider::IsThumbToolTipEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTodayHighlighted"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarDatePicker::IsTodayHighlightedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isTodayHighlighted"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::IsTodayHighlightedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isVerticalRailEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::IsVerticalRailEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isVerticalScrollChainingEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::IsVerticalScrollChainingEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isVerticalShiftClamped"), AsType<winrt::Windows::UI::Xaml::Controls::ParallaxView>,  []() { return winrt::Windows::UI::Xaml::Controls::ParallaxView::IsVerticalShiftClampedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isVolumeButtonVisible"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsVolumeButtonVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isVolumeEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsVolumeEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isZoomButtonVisible"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsZoomButtonVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isZoomChainingEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::IsZoomChainingEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isZoomedInView"), AsType<winrt::Windows::UI::Xaml::Controls::Hub>,  []() { return winrt::Windows::UI::Xaml::Controls::Hub::IsZoomedInViewProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isZoomedInView"), AsType<winrt::Windows::UI::Xaml::Controls::ListViewBase>,  []() { return winrt::Windows::UI::Xaml::Controls::ListViewBase::IsZoomedInViewProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isZoomedInViewActive"), AsType<winrt::Windows::UI::Xaml::Controls::SemanticZoom>,  []() { return winrt::Windows::UI::Xaml::Controls::SemanticZoom::IsZoomedInViewActiveProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isZoomEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::IsZoomEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isZoomInertiaEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::IsZoomInertiaEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("isZoomOutButtonEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::SemanticZoom>,  []() { return winrt::Windows::UI::Xaml::Controls::SemanticZoom::IsZoomOutButtonEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("itemHeight"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid::ItemHeightProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("itemHeight"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector::ItemHeightProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("itemHeight"), AsType<winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid::ItemHeightProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("itemHeight"), AsType<winrt::Windows::UI::Xaml::Controls::WrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::WrapGrid::ItemHeightProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("itemsSource"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsControl>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsControl::ItemsSourceProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("itemsSource"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::ListPickerFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::ListPickerFlyout::ItemsSourceProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("itemsSource"), AsType<winrt::Windows::UI::Xaml::Controls::TreeView>,  []() { return winrt::Windows::UI::Xaml::Controls::TreeView::ItemsSourceProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("itemsSource"), AsType<winrt::Windows::UI::Xaml::Controls::TreeViewItem>,  []() { return winrt::Windows::UI::Xaml::Controls::TreeViewItem::ItemsSourceProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("itemWidth"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid::ItemWidthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("itemWidth"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector::ItemWidthProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("itemWidth"), AsType<winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid::ItemWidthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("itemWidth"), AsType<winrt::Windows::UI::Xaml::Controls::WrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::WrapGrid::ItemWidthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("keyboardAcceleratorPlacementMode"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::KeyboardAcceleratorPlacementModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("keyboardAcceleratorTextOverride"), AsType<winrt::Windows::UI::Xaml::Controls::AppBarButton>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBarButton::KeyboardAcceleratorTextOverrideProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("keyboardAcceleratorTextOverride"), AsType<winrt::Windows::UI::Xaml::Controls::AppBarToggleButton>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBarToggleButton::KeyboardAcceleratorTextOverrideProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("keyboardAcceleratorTextOverride"), AsType<winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem>,  []() { return winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem::KeyboardAcceleratorTextOverrideProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("keyTipHorizontalOffset"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::TextElement>,  []() { return winrt::Windows::UI::Xaml::Documents::TextElement::KeyTipHorizontalOffsetProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("keyTipHorizontalOffset"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::KeyTipHorizontalOffsetProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("keyTipPlacementMode"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::TextElement>,  []() { return winrt::Windows::UI::Xaml::Documents::TextElement::KeyTipPlacementModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("keyTipPlacementMode"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::KeyTipPlacementModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("keyTipVerticalOffset"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::TextElement>,  []() { return winrt::Windows::UI::Xaml::Documents::TextElement::KeyTipVerticalOffsetProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("keyTipVerticalOffset"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::KeyTipVerticalOffsetProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("kind"), AsType<winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem>,  []() { return winrt::Windows::UI::Xaml::Controls::InkToolbarFlyoutItem::KindProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("label"), AsType<winrt::Windows::UI::Xaml::Controls::AppBarButton>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBarButton::LabelProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("label"), AsType<winrt::Windows::UI::Xaml::Controls::AppBarToggleButton>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBarToggleButton::LabelProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("labelPosition"), AsType<winrt::Windows::UI::Xaml::Controls::AppBarButton>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBarButton::LabelPositionProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("labelPosition"), AsType<winrt::Windows::UI::Xaml::Controls::AppBarToggleButton>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBarToggleButton::LabelPositionProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("landmarksVisible"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::LandmarksVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("language"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::LanguageProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("language"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::TextElement>,  []() { return winrt::Windows::UI::Xaml::Documents::TextElement::LanguageProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("largeChange"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase::LargeChangeProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("leftHeader"), AsType<winrt::Windows::UI::Xaml::Controls::Pivot>,  []() { return winrt::Windows::UI::Xaml::Controls::Pivot::LeftHeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("lightDismissOverlayMode"), AsType<winrt::Windows::UI::Xaml::Controls::AppBar>,  []() { return winrt::Windows::UI::Xaml::Controls::AppBar::LightDismissOverlayModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lightDismissOverlayMode"), AsType<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>,  []() { return winrt::Windows::UI::Xaml::Controls::AutoSuggestBox::LightDismissOverlayModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lightDismissOverlayMode"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarDatePicker::LightDismissOverlayModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lightDismissOverlayMode"), AsType<winrt::Windows::UI::Xaml::Controls::ComboBox>,  []() { return winrt::Windows::UI::Xaml::Controls::ComboBox::LightDismissOverlayModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lightDismissOverlayMode"), AsType<winrt::Windows::UI::Xaml::Controls::DatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePicker::LightDismissOverlayModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lightDismissOverlayMode"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase::LightDismissOverlayModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lightDismissOverlayMode"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::Popup::LightDismissOverlayModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lightDismissOverlayMode"), AsType<winrt::Windows::UI::Xaml::Controls::SplitView>,  []() { return winrt::Windows::UI::Xaml::Controls::SplitView::LightDismissOverlayModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lightDismissOverlayMode"), AsType<winrt::Windows::UI::Xaml::Controls::TimePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::TimePicker::LightDismissOverlayModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lineHeight"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Block>,  []() { return winrt::Windows::UI::Xaml::Documents::Block::LineHeightProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lineHeight"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::LineHeightProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lineHeight"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::LineHeightProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lineHeight"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::LineHeightProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lineStackingStrategy"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Block>,  []() { return winrt::Windows::UI::Xaml::Documents::Block::LineStackingStrategyProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lineStackingStrategy"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::LineStackingStrategyProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lineStackingStrategy"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::LineStackingStrategyProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("lineStackingStrategy"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::LineStackingStrategyProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("listViewItemPresenterHorizontalContentAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::ListViewItemPresenterHorizontalContentAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("listViewItemPresenterPadding"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::ListViewItemPresenterPaddingProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("listViewItemPresenterVerticalContentAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::ListViewItemPresenterVerticalContentAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("manipulationMode"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::ManipulationModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("mapProjection"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::MapProjectionProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("mapServiceToken"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::MapServiceTokenProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("margin"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Block>,  []() { return winrt::Windows::UI::Xaml::Documents::Block::MarginProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("margin"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::MarginProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("maxDropDownHeight"), AsType<winrt::Windows::UI::Xaml::Controls::ComboBox>,  []() { return winrt::Windows::UI::Xaml::Controls::ComboBox::MaxDropDownHeightProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxHeight"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::MaxHeightProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxHorizontalShiftRatio"), AsType<winrt::Windows::UI::Xaml::Controls::ParallaxView>,  []() { return winrt::Windows::UI::Xaml::Controls::ParallaxView::MaxHorizontalShiftRatioProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxHue"), AsType<winrt::Windows::UI::Xaml::Controls::ColorPicker>,  []() { return winrt::Windows::UI::Xaml::Controls::ColorPicker::MaxHueProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxHue"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum::MaxHueProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maximum"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase::MaximumProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maximumRowsOrColumns"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid::MaximumRowsOrColumnsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maximumRowsOrColumns"), AsType<winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid::MaximumRowsOrColumnsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maximumRowsOrColumns"), AsType<winrt::Windows::UI::Xaml::Controls::WrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::WrapGrid::MaximumRowsOrColumnsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxLength"), AsType<winrt::Windows::UI::Xaml::Controls::PasswordBox>,  []() { return winrt::Windows::UI::Xaml::Controls::PasswordBox::MaxLengthProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxLength"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::MaxLengthProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxLength"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::MaxLengthProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxLines"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::MaxLinesProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxLines"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::MaxLinesProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxLines"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow::MaxLinesProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxLines"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::MaxLinesProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxRating"), AsType<winrt::Windows::UI::Xaml::Controls::RatingControl>,  []() { return winrt::Windows::UI::Xaml::Controls::RatingControl::MaxRatingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxSaturation"), AsType<winrt::Windows::UI::Xaml::Controls::ColorPicker>,  []() { return winrt::Windows::UI::Xaml::Controls::ColorPicker::MaxSaturationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxSaturation"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum::MaxSaturationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxStrokeWidth"), AsType<winrt::Windows::UI::Xaml::Controls::InkToolbarPenButton>,  []() { return winrt::Windows::UI::Xaml::Controls::InkToolbarPenButton::MaxStrokeWidthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxSuggestionListHeight"), AsType<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>,  []() { return winrt::Windows::UI::Xaml::Controls::AutoSuggestBox::MaxSuggestionListHeightProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxValue"), AsType<winrt::Windows::UI::Xaml::Controls::ColorPicker>,  []() { return winrt::Windows::UI::Xaml::Controls::ColorPicker::MaxValueProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxValue"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum::MaxValueProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxVerticalShiftRatio"), AsType<winrt::Windows::UI::Xaml::Controls::ParallaxView>,  []() { return winrt::Windows::UI::Xaml::Controls::ParallaxView::MaxVerticalShiftRatioProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxWidth"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::MaxWidthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("maxZoomFactor"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::MaxZoomFactorProperty(); }, SetPropValue<float>, ViewManagerPropertyType::Number },
        { MAKE_KEY("menuItemsSource"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::MenuItemsSourceProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("minHeight"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::MinHeightProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minHue"), AsType<winrt::Windows::UI::Xaml::Controls::ColorPicker>,  []() { return winrt::Windows::UI::Xaml::Controls::ColorPicker::MinHueProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minHue"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum::MinHueProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minimum"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase::MinimumProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minSaturation"), AsType<winrt::Windows::UI::Xaml::Controls::ColorPicker>,  []() { return winrt::Windows::UI::Xaml::Controls::ColorPicker::MinSaturationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minSaturation"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum::MinSaturationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minStrokeWidth"), AsType<winrt::Windows::UI::Xaml::Controls::InkToolbarPenButton>,  []() { return winrt::Windows::UI::Xaml::Controls::InkToolbarPenButton::MinStrokeWidthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minTallModeHeight"), AsType<winrt::Windows::UI::Xaml::Controls::TwoPaneView>,  []() { return winrt::Windows::UI::Xaml::Controls::TwoPaneView::MinTallModeHeightProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minuteIncrement"), AsType<winrt::Windows::UI::Xaml::Controls::TimePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::TimePicker::MinuteIncrementProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minuteIncrement"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::TimePickerFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::TimePickerFlyout::MinuteIncrementProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minValue"), AsType<winrt::Windows::UI::Xaml::Controls::ColorPicker>,  []() { return winrt::Windows::UI::Xaml::Controls::ColorPicker::MinValueProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minValue"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum::MinValueProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minWideModeWidth"), AsType<winrt::Windows::UI::Xaml::Controls::TwoPaneView>,  []() { return winrt::Windows::UI::Xaml::Controls::TwoPaneView::MinWideModeWidthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minWidth"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::MinWidthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("minZoomFactor"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::MinZoomFactorProperty(); }, SetPropValue<float>, ViewManagerPropertyType::Number },
        { MAKE_KEY("mirroredWhenRightToLeft"), AsType<winrt::Windows::UI::Xaml::Controls::FontIcon>,  []() { return winrt::Windows::UI::Xaml::Controls::FontIcon::MirroredWhenRightToLeftProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("monthFormat"), AsType<winrt::Windows::UI::Xaml::Controls::DatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePicker::MonthFormatProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("monthFormat"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::DatePickerFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePickerFlyout::MonthFormatProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("monthVisible"), AsType<winrt::Windows::UI::Xaml::Controls::DatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePicker::MonthVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("monthVisible"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::DatePickerFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePickerFlyout::MonthVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("monthYearItemFontSize"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::MonthYearItemFontSizeProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("monthYearItemFontStyle"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::MonthYearItemFontStyleProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("name"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::NameProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("navigateUri"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Hyperlink>,  []() { return winrt::Windows::UI::Xaml::Documents::Hyperlink::NavigateUriProperty(); }, SetPropValue<winrt::Windows::Foundation::Uri>, ViewManagerPropertyType::String },
        { MAKE_KEY("navigateUri"), AsType<winrt::Windows::UI::Xaml::Controls::HyperlinkButton>,  []() { return winrt::Windows::UI::Xaml::Controls::HyperlinkButton::NavigateUriProperty(); }, SetPropValue<winrt::Windows::Foundation::Uri>, ViewManagerPropertyType::String },
        { MAKE_KEY("nineGrid"), AsType<winrt::Windows::UI::Xaml::Controls::Image>,  []() { return winrt::Windows::UI::Xaml::Controls::Image::NineGridProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("numberOfWeeksInView"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::NumberOfWeeksInViewProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("offContent"), AsType<winrt::Windows::UI::Xaml::Controls::ToggleSwitch>,  []() { return winrt::Windows::UI::Xaml::Controls::ToggleSwitch::OffContentProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("onContent"), AsType<winrt::Windows::UI::Xaml::Controls::ToggleSwitch>,  []() { return winrt::Windows::UI::Xaml::Controls::ToggleSwitch::OnContentProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("opacity"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::OpacityProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("openPaneLength"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::OpenPaneLengthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("openPaneLength"), AsType<winrt::Windows::UI::Xaml::Controls::SplitView>,  []() { return winrt::Windows::UI::Xaml::Controls::SplitView::OpenPaneLengthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("opticalMarginAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::OpticalMarginAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("opticalMarginAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::OpticalMarginAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("opticalMarginAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::OpticalMarginAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), AsType<winrt::Windows::UI::Xaml::Controls::DatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePicker::OrientationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), AsType<winrt::Windows::UI::Xaml::Controls::Hub>,  []() { return winrt::Windows::UI::Xaml::Controls::Hub::OrientationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), AsType<winrt::Windows::UI::Xaml::Controls::InkToolbar>,  []() { return winrt::Windows::UI::Xaml::Controls::InkToolbar::OrientationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsStackPanel>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsStackPanel::OrientationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsWrapGrid::OrientationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), AsType<winrt::Windows::UI::Xaml::Controls::RefreshVisualizer>,  []() { return winrt::Windows::UI::Xaml::Controls::RefreshVisualizer::OrientationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar::OrientationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), AsType<winrt::Windows::UI::Xaml::Controls::Slider>,  []() { return winrt::Windows::UI::Xaml::Controls::Slider::OrientationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), AsType<winrt::Windows::UI::Xaml::Controls::StackPanel>,  []() { return winrt::Windows::UI::Xaml::Controls::StackPanel::OrientationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), AsType<winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid::OrientationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), AsType<winrt::Windows::UI::Xaml::Controls::VirtualizingStackPanel>,  []() { return winrt::Windows::UI::Xaml::Controls::VirtualizingStackPanel::OrientationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("orientation"), AsType<winrt::Windows::UI::Xaml::Controls::WrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::WrapGrid::OrientationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("originX"), AsType<winrt::Windows::UI::Xaml::Documents::Glyphs>,  []() { return winrt::Windows::UI::Xaml::Documents::Glyphs::OriginXProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("originY"), AsType<winrt::Windows::UI::Xaml::Documents::Glyphs>,  []() { return winrt::Windows::UI::Xaml::Documents::Glyphs::OriginYProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("outOfScopeBackground"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::OutOfScopeBackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("outOfScopeForeground"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::OutOfScopeForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("overflowButtonVisibility"), AsType<winrt::Windows::UI::Xaml::Controls::CommandBar>,  []() { return winrt::Windows::UI::Xaml::Controls::CommandBar::OverflowButtonVisibilityProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("overflowLabelMode"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::OverflowLabelModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("padding"), AsType<winrt::Windows::UI::Xaml::Controls::Border>,  []() { return winrt::Windows::UI::Xaml::Controls::Border::PaddingProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::PaddingProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::PaddingProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), AsType<winrt::Windows::UI::Xaml::Controls::Grid>,  []() { return winrt::Windows::UI::Xaml::Controls::Grid::PaddingProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), AsType<winrt::Windows::UI::Xaml::Controls::ItemsPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ItemsPresenter::PaddingProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), AsType<winrt::Windows::UI::Xaml::Controls::RelativePanel>,  []() { return winrt::Windows::UI::Xaml::Controls::RelativePanel::PaddingProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::PaddingProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlockOverflow::PaddingProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), AsType<winrt::Windows::UI::Xaml::Controls::StackPanel>,  []() { return winrt::Windows::UI::Xaml::Controls::StackPanel::PaddingProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("padding"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::PaddingProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("paneBackground"), AsType<winrt::Windows::UI::Xaml::Controls::SplitView>,  []() { return winrt::Windows::UI::Xaml::Controls::SplitView::PaneBackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("paneDisplayMode"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::PaneDisplayModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("panePlacement"), AsType<winrt::Windows::UI::Xaml::Controls::SplitView>,  []() { return winrt::Windows::UI::Xaml::Controls::SplitView::PanePlacementProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("panePriority"), AsType<winrt::Windows::UI::Xaml::Controls::TwoPaneView>,  []() { return winrt::Windows::UI::Xaml::Controls::TwoPaneView::PanePriorityProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("paneTitle"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::PaneTitleProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("panInteractionMode"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::PanInteractionModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("password"), AsType<winrt::Windows::UI::Xaml::Controls::PasswordBox>,  []() { return winrt::Windows::UI::Xaml::Controls::PasswordBox::PasswordProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("passwordChar"), AsType<winrt::Windows::UI::Xaml::Controls::PasswordBox>,  []() { return winrt::Windows::UI::Xaml::Controls::PasswordBox::PasswordCharProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("passwordRevealMode"), AsType<winrt::Windows::UI::Xaml::Controls::PasswordBox>,  []() { return winrt::Windows::UI::Xaml::Controls::PasswordBox::PasswordRevealModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("pedestrianFeaturesVisible"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::PedestrianFeaturesVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("placeholderBackground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::PlaceholderBackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("placeholderBackground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::PlaceholderBackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("placeholderForeground"), AsType<winrt::Windows::UI::Xaml::Controls::ComboBox>,  []() { return winrt::Windows::UI::Xaml::Controls::ComboBox::PlaceholderForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("placeholderForeground"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::PlaceholderForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("placeholderText"), AsType<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>,  []() { return winrt::Windows::UI::Xaml::Controls::AutoSuggestBox::PlaceholderTextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("placeholderText"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarDatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarDatePicker::PlaceholderTextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("placeholderText"), AsType<winrt::Windows::UI::Xaml::Controls::ComboBox>,  []() { return winrt::Windows::UI::Xaml::Controls::ComboBox::PlaceholderTextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("placeholderText"), AsType<winrt::Windows::UI::Xaml::Controls::PasswordBox>,  []() { return winrt::Windows::UI::Xaml::Controls::PasswordBox::PlaceholderTextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("placeholderText"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::PlaceholderTextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("placeholderText"), AsType<winrt::Windows::UI::Xaml::Controls::SearchBox>,  []() { return winrt::Windows::UI::Xaml::Controls::SearchBox::PlaceholderTextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("placeholderText"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::PlaceholderTextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("placeholderValue"), AsType<winrt::Windows::UI::Xaml::Controls::RatingControl>,  []() { return winrt::Windows::UI::Xaml::Controls::RatingControl::PlaceholderValueProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("placement"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase::PlacementProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("placement"), AsType<winrt::Windows::UI::Xaml::Controls::ToolTip>,  []() { return winrt::Windows::UI::Xaml::Controls::ToolTip::PlacementProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("placementAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::HandwritingView>,  []() { return winrt::Windows::UI::Xaml::Controls::HandwritingView::PlacementAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("playbackRate"), AsType<winrt::Windows::UI::Xaml::Controls::MediaElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaElement::PlaybackRateProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("playToPreferredSourceUri"), AsType<winrt::Windows::UI::Xaml::Controls::MediaElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaElement::PlayToPreferredSourceUriProperty(); }, SetPropValue<winrt::Windows::Foundation::Uri>, ViewManagerPropertyType::String },
        { MAKE_KEY("pointerOverBackground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::PointerOverBackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("pointerOverBackground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::PointerOverBackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("pointerOverBackgroundMargin"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::PointerOverBackgroundMarginProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("pointerOverBackgroundMargin"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::PointerOverBackgroundMarginProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("pointerOverForeground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::PointerOverForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("preferSmallImage"), AsType<winrt::Windows::UI::Xaml::Controls::PersonPicture>,  []() { return winrt::Windows::UI::Xaml::Controls::PersonPicture::PreferSmallImageProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("pressedBackground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::PressedBackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("pressedBorderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::PressedBorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("pressedForeground"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::PressedForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("preventKeyboardDisplayOnProgrammaticFocus"), AsType<winrt::Windows::UI::Xaml::Controls::PasswordBox>,  []() { return winrt::Windows::UI::Xaml::Controls::PasswordBox::PreventKeyboardDisplayOnProgrammaticFocusProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("preventKeyboardDisplayOnProgrammaticFocus"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::PreventKeyboardDisplayOnProgrammaticFocusProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("preventKeyboardDisplayOnProgrammaticFocus"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::PreventKeyboardDisplayOnProgrammaticFocusProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("primaryButtonCommandParameter"), AsType<winrt::Windows::UI::Xaml::Controls::ContentDialog>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentDialog::PrimaryButtonCommandParameterProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("primaryButtonText"), AsType<winrt::Windows::UI::Xaml::Controls::ContentDialog>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentDialog::PrimaryButtonTextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("pullDirection"), AsType<winrt::Windows::UI::Xaml::Controls::RefreshContainer>,  []() { return winrt::Windows::UI::Xaml::Controls::RefreshContainer::PullDirectionProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("queryText"), AsType<winrt::Windows::UI::Xaml::Controls::SearchBox>,  []() { return winrt::Windows::UI::Xaml::Controls::SearchBox::QueryTextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("radiusX"), AsType<winrt::Windows::UI::Xaml::Shapes::Rectangle>,  []() { return winrt::Windows::UI::Xaml::Shapes::Rectangle::RadiusXProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("radiusY"), AsType<winrt::Windows::UI::Xaml::Shapes::Rectangle>,  []() { return winrt::Windows::UI::Xaml::Shapes::Rectangle::RadiusYProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("realTimePlayback"), AsType<winrt::Windows::UI::Xaml::Controls::MediaElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaElement::RealTimePlaybackProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("reduceViewportForCoreInputViewOcclusions"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::ReduceViewportForCoreInputViewOcclusionsProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("region"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::RegionProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("reorderHintOffset"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::ReorderHintOffsetProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("reorderHintOffset"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::ReorderHintOffsetProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("reorderMode"), AsType<winrt::Windows::UI::Xaml::Controls::ListViewBase>,  []() { return winrt::Windows::UI::Xaml::Controls::ListViewBase::ReorderModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("requestedTheme"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::RequestedThemeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("requiresPointer"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::RequiresPointerProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("revealBackground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::RevealBackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("revealBackgroundShowsAboveContent"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::RevealBackgroundShowsAboveContentProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("revealBorderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::RevealBorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("revealBorderThickness"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::RevealBorderThicknessProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("rightHeader"), AsType<winrt::Windows::UI::Xaml::Controls::Pivot>,  []() { return winrt::Windows::UI::Xaml::Controls::Pivot::RightHeaderProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("rotateInteractionMode"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::RotateInteractionModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("rowSpacing"), AsType<winrt::Windows::UI::Xaml::Controls::Grid>,  []() { return winrt::Windows::UI::Xaml::Controls::Grid::RowSpacingProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("searchHistoryContext"), AsType<winrt::Windows::UI::Xaml::Controls::SearchBox>,  []() { return winrt::Windows::UI::Xaml::Controls::SearchBox::SearchHistoryContextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("searchHistoryEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::SearchBox>,  []() { return winrt::Windows::UI::Xaml::Controls::SearchBox::SearchHistoryEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("secondaryButtonCommandParameter"), AsType<winrt::Windows::UI::Xaml::Controls::ContentDialog>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentDialog::SecondaryButtonCommandParameterProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("secondaryButtonText"), AsType<winrt::Windows::UI::Xaml::Controls::ContentDialog>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentDialog::SecondaryButtonTextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("selectedBackground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::SelectedBackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedBackground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::SelectedBackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedBorderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::SelectedBorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedBorderThickness"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::SelectedBorderThicknessProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedBorderThickness"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::SelectedBorderThicknessProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedBrushIndex"), AsType<winrt::Windows::UI::Xaml::Controls::InkToolbarPenButton>,  []() { return winrt::Windows::UI::Xaml::Controls::InkToolbarPenButton::SelectedBrushIndexProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectedForeground"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::SelectedForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedForeground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::SelectedForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedForeground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::SelectedForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedHoverBorderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::SelectedHoverBorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedIndex"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::ListPickerFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::ListPickerFlyout::SelectedIndexProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectedIndex"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector::SelectedIndexProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectedIndex"), AsType<winrt::Windows::UI::Xaml::Controls::Pivot>,  []() { return winrt::Windows::UI::Xaml::Controls::Pivot::SelectedIndexProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectedIndex"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::Selector>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::Selector::SelectedIndexProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectedItem"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::ListPickerFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::ListPickerFlyout::SelectedItemProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedItem"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector::SelectedItemProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedItem"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::SelectedItemProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedItem"), AsType<winrt::Windows::UI::Xaml::Controls::Pivot>,  []() { return winrt::Windows::UI::Xaml::Controls::Pivot::SelectedItemProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedItem"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::Selector>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::Selector::SelectedItemProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedPointerOverBackground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::SelectedPointerOverBackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedPointerOverBackground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::SelectedPointerOverBackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedPointerOverBorderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::SelectedPointerOverBorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedPointerOverBorderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::SelectedPointerOverBorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedPressedBackground"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::SelectedPressedBackgroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedPressedBorderBrush"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::SelectedPressedBorderBrushProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectedStencil"), AsType<winrt::Windows::UI::Xaml::Controls::InkToolbarStencilButton>,  []() { return winrt::Windows::UI::Xaml::Controls::InkToolbarStencilButton::SelectedStencilProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectedStrokeWidth"), AsType<winrt::Windows::UI::Xaml::Controls::InkToolbarPenButton>,  []() { return winrt::Windows::UI::Xaml::Controls::InkToolbarPenButton::SelectedStrokeWidthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectedValue"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::ListPickerFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::ListPickerFlyout::SelectedValueProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedValue"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::Selector>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::Selector::SelectedValueProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("selectedValuePath"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::ListPickerFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::ListPickerFlyout::SelectedValuePathProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("selectedValuePath"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::Selector>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::Selector::SelectedValuePathProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("selectionChangedTrigger"), AsType<winrt::Windows::UI::Xaml::Controls::ComboBox>,  []() { return winrt::Windows::UI::Xaml::Controls::ComboBox::SelectionChangedTriggerProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectionCheckMarkVisualEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter::SelectionCheckMarkVisualEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("selectionCheckMarkVisualEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter::SelectionCheckMarkVisualEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("selectionFollowsFocus"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::SelectionFollowsFocusProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectionHighlightColor"), AsType<winrt::Windows::UI::Xaml::Controls::PasswordBox>,  []() { return winrt::Windows::UI::Xaml::Controls::PasswordBox::SelectionHighlightColorProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectionHighlightColor"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::SelectionHighlightColorProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectionHighlightColor"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::SelectionHighlightColorProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectionHighlightColor"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::SelectionHighlightColorProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectionHighlightColor"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::SelectionHighlightColorProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectionHighlightColorWhenNotFocused"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::SelectionHighlightColorWhenNotFocusedProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectionHighlightColorWhenNotFocused"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::SelectionHighlightColorWhenNotFocusedProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::SolidColorBrush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("selectionMode"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::SelectionModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectionMode"), AsType<winrt::Windows::UI::Xaml::Controls::ListBox>,  []() { return winrt::Windows::UI::Xaml::Controls::ListBox::SelectionModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectionMode"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::ListPickerFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::ListPickerFlyout::SelectionModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectionMode"), AsType<winrt::Windows::UI::Xaml::Controls::ListViewBase>,  []() { return winrt::Windows::UI::Xaml::Controls::ListViewBase::SelectionModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectionMode"), AsType<winrt::Windows::UI::Xaml::Controls::TreeView>,  []() { return winrt::Windows::UI::Xaml::Controls::TreeView::SelectionModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("selectsOnInvoked"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationViewItem>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationViewItem::SelectsOnInvokedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("shape"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum::ShapeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("shouldConstrainToRootBounds"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase::ShouldConstrainToRootBoundsProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("shouldConstrainToRootBounds"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::Popup::ShouldConstrainToRootBoundsProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("shoulderNavigationEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::NavigationView>,  []() { return winrt::Windows::UI::Xaml::Controls::NavigationView::ShoulderNavigationEnabledProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("shouldLoop"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector::ShouldLoopProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("showAndHideAutomatically"), AsType<winrt::Windows::UI::Xaml::Controls::MediaTransportControls>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaTransportControls::ShowAndHideAutomaticallyProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("showAsMonochrome"), AsType<winrt::Windows::UI::Xaml::Controls::BitmapIcon>,  []() { return winrt::Windows::UI::Xaml::Controls::BitmapIcon::ShowAsMonochromeProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("showError"), AsType<winrt::Windows::UI::Xaml::Controls::ProgressBar>,  []() { return winrt::Windows::UI::Xaml::Controls::ProgressBar::ShowErrorProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("showMode"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase::ShowModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("showPaused"), AsType<winrt::Windows::UI::Xaml::Controls::ProgressBar>,  []() { return winrt::Windows::UI::Xaml::Controls::ProgressBar::ShowPausedProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("showsScrollingPlaceholders"), AsType<winrt::Windows::UI::Xaml::Controls::ListViewBase>,  []() { return winrt::Windows::UI::Xaml::Controls::ListViewBase::ShowsScrollingPlaceholdersProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("singleSelectionFollowsFocus"), AsType<winrt::Windows::UI::Xaml::Controls::ListBox>,  []() { return winrt::Windows::UI::Xaml::Controls::ListBox::SingleSelectionFollowsFocusProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("singleSelectionFollowsFocus"), AsType<winrt::Windows::UI::Xaml::Controls::ListViewBase>,  []() { return winrt::Windows::UI::Xaml::Controls::ListViewBase::SingleSelectionFollowsFocusProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("sizesContentToTemplatedParent"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollContentPresenter::SizesContentToTemplatedParentProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("smallChange"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase::SmallChangeProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("snapsTo"), AsType<winrt::Windows::UI::Xaml::Controls::Slider>,  []() { return winrt::Windows::UI::Xaml::Controls::Slider::SnapsToProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("source"), AsType<winrt::Windows::UI::Xaml::Controls::MediaElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaElement::SourceProperty(); }, SetPropValue<winrt::Windows::Foundation::Uri>, ViewManagerPropertyType::String },
        { MAKE_KEY("source"), AsType<winrt::Windows::UI::Xaml::Controls::WebView>,  []() { return winrt::Windows::UI::Xaml::Controls::WebView::SourceProperty(); }, SetPropValue<winrt::Windows::Foundation::Uri>, ViewManagerPropertyType::String },
        { MAKE_KEY("spacing"), AsType<winrt::Windows::UI::Xaml::Controls::StackPanel>,  []() { return winrt::Windows::UI::Xaml::Controls::StackPanel::SpacingProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stepFrequency"), AsType<winrt::Windows::UI::Xaml::Controls::Slider>,  []() { return winrt::Windows::UI::Xaml::Controls::Slider::StepFrequencyProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stereo3DVideoPackingMode"), AsType<winrt::Windows::UI::Xaml::Controls::MediaElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaElement::Stereo3DVideoPackingModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stereo3DVideoRenderMode"), AsType<winrt::Windows::UI::Xaml::Controls::MediaElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaElement::Stereo3DVideoRenderModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stretch"), AsType<winrt::Windows::UI::Xaml::Controls::CaptureElement>,  []() { return winrt::Windows::UI::Xaml::Controls::CaptureElement::StretchProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stretch"), AsType<winrt::Windows::UI::Xaml::Controls::Image>,  []() { return winrt::Windows::UI::Xaml::Controls::Image::StretchProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stretch"), AsType<winrt::Windows::UI::Xaml::Controls::MediaElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaElement::StretchProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stretch"), AsType<winrt::Windows::UI::Xaml::Controls::MediaPlayerElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaPlayerElement::StretchProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stretch"), AsType<winrt::Windows::UI::Xaml::Controls::MediaPlayerPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaPlayerPresenter::StretchProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stretch"), AsType<winrt::Windows::UI::Xaml::Shapes::Shape>,  []() { return winrt::Windows::UI::Xaml::Shapes::Shape::StretchProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stretch"), AsType<winrt::Windows::UI::Xaml::Controls::Viewbox>,  []() { return winrt::Windows::UI::Xaml::Controls::Viewbox::StretchProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stretchDirection"), AsType<winrt::Windows::UI::Xaml::Controls::Viewbox>,  []() { return winrt::Windows::UI::Xaml::Controls::Viewbox::StretchDirectionProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("stroke"), AsType<winrt::Windows::UI::Xaml::Shapes::Shape>,  []() { return winrt::Windows::UI::Xaml::Shapes::Shape::StrokeProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("strokeDashCap"), AsType<winrt::Windows::UI::Xaml::Shapes::Shape>,  []() { return winrt::Windows::UI::Xaml::Shapes::Shape::StrokeDashCapProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("strokeDashOffset"), AsType<winrt::Windows::UI::Xaml::Shapes::Shape>,  []() { return winrt::Windows::UI::Xaml::Shapes::Shape::StrokeDashOffsetProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("strokeEndLineCap"), AsType<winrt::Windows::UI::Xaml::Shapes::Shape>,  []() { return winrt::Windows::UI::Xaml::Shapes::Shape::StrokeEndLineCapProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("strokeLineJoin"), AsType<winrt::Windows::UI::Xaml::Shapes::Shape>,  []() { return winrt::Windows::UI::Xaml::Shapes::Shape::StrokeLineJoinProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("strokeMiterLimit"), AsType<winrt::Windows::UI::Xaml::Shapes::Shape>,  []() { return winrt::Windows::UI::Xaml::Shapes::Shape::StrokeMiterLimitProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("strokeStartLineCap"), AsType<winrt::Windows::UI::Xaml::Shapes::Shape>,  []() { return winrt::Windows::UI::Xaml::Shapes::Shape::StrokeStartLineCapProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("strokeThickness"), AsType<winrt::Windows::UI::Xaml::Shapes::Shape>,  []() { return winrt::Windows::UI::Xaml::Shapes::Shape::StrokeThicknessProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("styleSimulations"), AsType<winrt::Windows::UI::Xaml::Documents::Glyphs>,  []() { return winrt::Windows::UI::Xaml::Documents::Glyphs::StyleSimulationsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("symbol"), AsType<winrt::Windows::UI::Xaml::Controls::SymbolIcon>,  []() { return winrt::Windows::UI::Xaml::Controls::SymbolIcon::SymbolProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("tabFocusNavigation"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::TabFocusNavigationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("tabIndex"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::ContentLink>,  []() { return winrt::Windows::UI::Xaml::Documents::ContentLink::TabIndexProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("tabIndex"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::TabIndexProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("tabIndex"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Hyperlink>,  []() { return winrt::Windows::UI::Xaml::Documents::Hyperlink::TabIndexProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("tabNavigation"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::TabNavigationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("tag"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::TagProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("tallModeConfiguration"), AsType<winrt::Windows::UI::Xaml::Controls::TwoPaneView>,  []() { return winrt::Windows::UI::Xaml::Controls::TwoPaneView::TallModeConfigurationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("text"), AsType<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>,  []() { return winrt::Windows::UI::Xaml::Controls::AutoSuggestBox::TextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("text"), AsType<winrt::Windows::UI::Xaml::Controls::ComboBox>,  []() { return winrt::Windows::UI::Xaml::Controls::ComboBox::TextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("text"), AsType<winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem>,  []() { return winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem::TextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("text"), AsType<winrt::Windows::UI::Xaml::Controls::MenuFlyoutSubItem>,  []() { return winrt::Windows::UI::Xaml::Controls::MenuFlyoutSubItem::TextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("text"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::TextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("text"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::TextProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("textAlignment"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Block>,  []() { return winrt::Windows::UI::Xaml::Documents::Block::TextAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::TextAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::TextAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::TextAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::TextAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textDecorations"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::TextDecorationsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textDecorations"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::TextDecorationsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textDecorations"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::TextElement>,  []() { return winrt::Windows::UI::Xaml::Documents::TextElement::TextDecorationsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textIndent"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Paragraph>,  []() { return winrt::Windows::UI::Xaml::Documents::Paragraph::TextIndentProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textIndent"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::TextIndentProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textLineBounds"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::TextLineBoundsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textLineBounds"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::TextLineBoundsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textLineBounds"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::TextLineBoundsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textMemberPath"), AsType<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>,  []() { return winrt::Windows::UI::Xaml::Controls::AutoSuggestBox::TextMemberPathProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("textReadingOrder"), AsType<winrt::Windows::UI::Xaml::Controls::PasswordBox>,  []() { return winrt::Windows::UI::Xaml::Controls::PasswordBox::TextReadingOrderProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textReadingOrder"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::TextReadingOrderProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textReadingOrder"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::TextReadingOrderProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textReadingOrder"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::TextReadingOrderProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textReadingOrder"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::TextReadingOrderProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textTrimming"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::TextTrimmingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textTrimming"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::TextTrimmingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textWrapping"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::TextWrappingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textWrapping"), AsType<winrt::Windows::UI::Xaml::Controls::RichEditBox>,  []() { return winrt::Windows::UI::Xaml::Controls::RichEditBox::TextWrappingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textWrapping"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::RichTextBlock::TextWrappingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textWrapping"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBlock::TextWrappingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("textWrapping"), AsType<winrt::Windows::UI::Xaml::Controls::TextBox>,  []() { return winrt::Windows::UI::Xaml::Controls::TextBox::TextWrappingProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("tickFrequency"), AsType<winrt::Windows::UI::Xaml::Controls::Slider>,  []() { return winrt::Windows::UI::Xaml::Controls::Slider::TickFrequencyProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("tickPlacement"), AsType<winrt::Windows::UI::Xaml::Controls::Slider>,  []() { return winrt::Windows::UI::Xaml::Controls::Slider::TickPlacementProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("tiltInteractionMode"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::TiltInteractionModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("title"), AsType<winrt::Windows::UI::Xaml::Controls::ContentDialog>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentDialog::TitleProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("title"), AsType<winrt::Windows::UI::Xaml::Controls::MenuBarItem>,  []() { return winrt::Windows::UI::Xaml::Controls::MenuBarItem::TitleProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("title"), AsType<winrt::Windows::UI::Xaml::Controls::Pivot>,  []() { return winrt::Windows::UI::Xaml::Controls::Pivot::TitleProperty(); }, SetPropValue<winrt::Windows::Foundation::IInspectable>, ViewManagerPropertyType::Map },
        { MAKE_KEY("title"), AsType<winrt::Windows::UI::Xaml::Controls::SettingsFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::SettingsFlyout::TitleProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("todayForeground"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::TodayForegroundProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Media::Brush>, ViewManagerPropertyType::Color },
        { MAKE_KEY("trafficFlowVisible"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::TrafficFlowVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("transitFeaturesEnabled"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::TransitFeaturesEnabledProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("transitFeaturesVisible"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::TransitFeaturesVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("underlineStyle"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Hyperlink>,  []() { return winrt::Windows::UI::Xaml::Documents::Hyperlink::UnderlineStyleProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("unicodeString"), AsType<winrt::Windows::UI::Xaml::Documents::Glyphs>,  []() { return winrt::Windows::UI::Xaml::Documents::Glyphs::UnicodeStringProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("updateTextOnSelect"), AsType<winrt::Windows::UI::Xaml::Controls::AutoSuggestBox>,  []() { return winrt::Windows::UI::Xaml::Controls::AutoSuggestBox::UpdateTextOnSelectProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("uriSource"), AsType<winrt::Windows::UI::Xaml::Controls::BitmapIcon>,  []() { return winrt::Windows::UI::Xaml::Controls::BitmapIcon::UriSourceProperty(); }, SetPropValue<winrt::Windows::Foundation::Uri>, ViewManagerPropertyType::String },
        { MAKE_KEY("useLayoutRounding"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::UseLayoutRoundingProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("useSystemFocusVisuals"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::UseSystemFocusVisualsProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("useTouchAnimationsForAllNavigation"), AsType<winrt::Windows::UI::Xaml::Controls::FlipView>,  []() { return winrt::Windows::UI::Xaml::Controls::FlipView::UseTouchAnimationsForAllNavigationProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("value"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase::ValueProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("value"), AsType<winrt::Windows::UI::Xaml::Controls::RatingControl>,  []() { return winrt::Windows::UI::Xaml::Controls::RatingControl::ValueProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalAlignment"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::VerticalAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalAnchorRatio"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::VerticalAnchorRatioProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalChildrenAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::VariableSizedWrapGrid::VerticalChildrenAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalChildrenAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::WrapGrid>,  []() { return winrt::Windows::UI::Xaml::Controls::WrapGrid::VerticalChildrenAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalContentAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::ContentPresenter>,  []() { return winrt::Windows::UI::Xaml::Controls::ContentPresenter::VerticalContentAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalContentAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::Control>,  []() { return winrt::Windows::UI::Xaml::Controls::Control::VerticalContentAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalDayItemAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::VerticalDayItemAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalFirstOfMonthLabelAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::CalendarView>,  []() { return winrt::Windows::UI::Xaml::Controls::CalendarView::VerticalFirstOfMonthLabelAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalOffset"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::Popup::VerticalOffsetProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalOffset"), AsType<winrt::Windows::UI::Xaml::Controls::ToolTip>,  []() { return winrt::Windows::UI::Xaml::Controls::ToolTip::VerticalOffsetProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalScrollBarVisibility"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::VerticalScrollBarVisibilityProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalScrollMode"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::VerticalScrollModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalShift"), AsType<winrt::Windows::UI::Xaml::Controls::ParallaxView>,  []() { return winrt::Windows::UI::Xaml::Controls::ParallaxView::VerticalShiftProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalSnapPointsAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::VerticalSnapPointsAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalSnapPointsType"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::VerticalSnapPointsTypeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalSourceEndOffset"), AsType<winrt::Windows::UI::Xaml::Controls::ParallaxView>,  []() { return winrt::Windows::UI::Xaml::Controls::ParallaxView::VerticalSourceEndOffsetProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalSourceOffsetKind"), AsType<winrt::Windows::UI::Xaml::Controls::ParallaxView>,  []() { return winrt::Windows::UI::Xaml::Controls::ParallaxView::VerticalSourceOffsetKindProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("verticalSourceStartOffset"), AsType<winrt::Windows::UI::Xaml::Controls::ParallaxView>,  []() { return winrt::Windows::UI::Xaml::Controls::ParallaxView::VerticalSourceStartOffsetProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("viewPadding"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::ViewPaddingProperty(); }, SetPropValue<winrt::Windows::UI::Xaml::Thickness>, ViewManagerPropertyType::Map },
        { MAKE_KEY("viewportSize"), AsType<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar>,  []() { return winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar::ViewportSizeProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("visibility"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::VisibilityProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("volume"), AsType<winrt::Windows::UI::Xaml::Controls::MediaElement>,  []() { return winrt::Windows::UI::Xaml::Controls::MediaElement::VolumeProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("watermarkMode"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::WatermarkModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("wideModeConfiguration"), AsType<winrt::Windows::UI::Xaml::Controls::TwoPaneView>,  []() { return winrt::Windows::UI::Xaml::Controls::TwoPaneView::WideModeConfigurationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("width"), AsType<winrt::Windows::UI::Xaml::FrameworkElement>,  []() { return winrt::Windows::UI::Xaml::FrameworkElement::WidthProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("x1"), AsType<winrt::Windows::UI::Xaml::Shapes::Line>,  []() { return winrt::Windows::UI::Xaml::Shapes::Line::X1Property(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("x2"), AsType<winrt::Windows::UI::Xaml::Shapes::Line>,  []() { return winrt::Windows::UI::Xaml::Shapes::Line::X2Property(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusDownNavigationStrategy"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::ContentLink>,  []() { return winrt::Windows::UI::Xaml::Documents::ContentLink::XYFocusDownNavigationStrategyProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusDownNavigationStrategy"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Hyperlink>,  []() { return winrt::Windows::UI::Xaml::Documents::Hyperlink::XYFocusDownNavigationStrategyProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusDownNavigationStrategy"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::XYFocusDownNavigationStrategyProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusKeyboardNavigation"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::XYFocusKeyboardNavigationProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusLeftNavigationStrategy"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::ContentLink>,  []() { return winrt::Windows::UI::Xaml::Documents::ContentLink::XYFocusLeftNavigationStrategyProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusLeftNavigationStrategy"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Hyperlink>,  []() { return winrt::Windows::UI::Xaml::Documents::Hyperlink::XYFocusLeftNavigationStrategyProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusLeftNavigationStrategy"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::XYFocusLeftNavigationStrategyProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusRightNavigationStrategy"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::ContentLink>,  []() { return winrt::Windows::UI::Xaml::Documents::ContentLink::XYFocusRightNavigationStrategyProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusRightNavigationStrategy"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Hyperlink>,  []() { return winrt::Windows::UI::Xaml::Documents::Hyperlink::XYFocusRightNavigationStrategyProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusRightNavigationStrategy"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::XYFocusRightNavigationStrategyProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusUpNavigationStrategy"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::ContentLink>,  []() { return winrt::Windows::UI::Xaml::Documents::ContentLink::XYFocusUpNavigationStrategyProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusUpNavigationStrategy"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Hyperlink>,  []() { return winrt::Windows::UI::Xaml::Documents::Hyperlink::XYFocusUpNavigationStrategyProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("xyFocusUpNavigationStrategy"), AsUnwrappedType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::UIElement::XYFocusUpNavigationStrategyProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("y1"), AsType<winrt::Windows::UI::Xaml::Shapes::Line>,  []() { return winrt::Windows::UI::Xaml::Shapes::Line::Y1Property(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("y2"), AsType<winrt::Windows::UI::Xaml::Shapes::Line>,  []() { return winrt::Windows::UI::Xaml::Shapes::Line::Y2Property(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("yearFormat"), AsType<winrt::Windows::UI::Xaml::Controls::DatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePicker::YearFormatProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("yearFormat"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::DatePickerFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePickerFlyout::YearFormatProperty(); }, SetPropValue<winrt::hstring>, ViewManagerPropertyType::String },
        { MAKE_KEY("yearVisible"), AsType<winrt::Windows::UI::Xaml::Controls::DatePicker>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePicker::YearVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("yearVisible"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::DatePickerFlyout>,  []() { return winrt::Windows::UI::Xaml::Controls::DatePickerFlyout::YearVisibleProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("zoomInteractionMode"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::ZoomInteractionModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("zoomLevel"), AsType<winrt::Windows::UI::Xaml::Controls::Maps::MapControl>,  []() { return winrt::Windows::UI::Xaml::Controls::Maps::MapControl::ZoomLevelProperty(); }, SetPropValue<double>, ViewManagerPropertyType::Number },
        { MAKE_KEY("zoomMode"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::ZoomModeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("zoomSnapPointsType"), AsType<winrt::Windows::UI::Xaml::Controls::ScrollViewer>,  []() { return winrt::Windows::UI::Xaml::Controls::ScrollViewer::ZoomSnapPointsTypeProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
  };

void SetIsOpen_FlyoutBase(const xaml::DependencyObject& o, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v);
void SetText_Run(const xaml::DependencyObject& o, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v);

void SetGridRow_UIElement(const xaml::DependencyObject& o, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v);
void SetGridColumn_UIElement(const xaml::DependencyObject& o, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v);
void SetGridLayout_Grid(const xaml::DependencyObject& o, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v);
void SetPriority_UIElement(const xaml::DependencyObject& o, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v);
void SetResources_UIElement(const xaml::DependencyObject& o, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v);

/*static*/ const PropInfo fakeProps[] = {
    { MAKE_KEY("isOpen"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>, nullptr, SetIsOpen_FlyoutBase, ViewManagerPropertyType::Boolean },
    { MAKE_KEY("text"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Run>, nullptr, SetText_Run, ViewManagerPropertyType::String },
    { MAKE_KEY("gridRow"), AsType<winrt::Windows::UI::Xaml::UIElement>, nullptr, SetGridRow_UIElement, ViewManagerPropertyType::Number },
    { MAKE_KEY("gridColumn"), AsType<winrt::Windows::UI::Xaml::UIElement>, nullptr, SetGridColumn_UIElement, ViewManagerPropertyType::Number },
    { MAKE_KEY("gridLayout"), AsType<winrt::Windows::UI::Xaml::Controls::Grid>, nullptr, SetGridLayout_Grid, ViewManagerPropertyType::Map },
    { MAKE_KEY("priority"), AsType<winrt::Windows::UI::Xaml::UIElement>, nullptr, SetPriority_UIElement, ViewManagerPropertyType::Number },
    { MAKE_KEY("resources"), AsType<winrt::Windows::UI::Xaml::UIElement>, nullptr, SetResources_UIElement, ViewManagerPropertyType::Map },

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
    nativeProps.Insert(winrt::to_hstring("cursor"), ViewManagerPropertyType::Number);
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
    nativeProps.Insert(winrt::to_hstring("defaultStyleResourceUri"), ViewManagerPropertyType::String);
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
    nativeProps.Insert(winrt::to_hstring("fontUri"), ViewManagerPropertyType::String);
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
    nativeProps.Insert(winrt::to_hstring("navigateUri"), ViewManagerPropertyType::String);
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
    nativeProps.Insert(winrt::to_hstring("playToPreferredSourceUri"), ViewManagerPropertyType::String);
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
    nativeProps.Insert(winrt::to_hstring("source"), ViewManagerPropertyType::String);
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
    nativeProps.Insert(winrt::to_hstring("underlineStyle"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("unicodeString"), ViewManagerPropertyType::String);
    nativeProps.Insert(winrt::to_hstring("updateTextOnSelect"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("uriSource"), ViewManagerPropertyType::String);
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
  for (auto const& entry : fakeProps) {
    nativeProps.Insert(winrt::to_hstring(entry.propName), entry.jsType);
  }
}
#endif



