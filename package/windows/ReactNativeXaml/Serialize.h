// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#pragma once

#include <JSValueWriter.h>
#include <UI.Xaml.Input.h>

namespace winrt::Microsoft::ReactNative {
void WriteValue(winrt::Microsoft::ReactNative::IJSValueWriter const &writer, const winrt::IInspectable &ii);

void WriteValue(const winrt::Microsoft::ReactNative::IJSValueWriter &writer, const Point &p) noexcept;
void WriteIInspectable(winrt::Microsoft::ReactNative::IJSValueWriter const &writer, const winrt::IInspectable &item);
void WriteValue(winrt::Microsoft::ReactNative::IJSValueWriter const &writer, const winrt::IInspectable &item);

template <typename TElems>
void WriteValue(winrt::Microsoft::ReactNative::IJSValueWriter const &writer, const winrt::IVector<TElems> &t) {
  writer.WriteArrayBegin();
  for (const auto &e : t) {
    WriteValue(writer, e);
  }
  writer.WriteArrayEnd();
}

} // namespace winrt::Microsoft::ReactNative

std::vector<uint32_t> VectorToIndices(
    const winrt::IVector<winrt::IInspectable> &vector,
    const xaml::Controls::ItemCollection &coll);

template <typename T>
void Serialize(
    winrt::Microsoft::ReactNative::IJSValueWriter const &writer,
    const winrt::IInspectable &sender,
    const T &args) {
  //  assert(false);
}

#define SERIALIZE_IMPL(type)                                       \
  template <>                                                      \
  void Serialize(                                                  \
      winrt::Microsoft::ReactNative::IJSValueWriter const &writer, \
      const winrt::IInspectable &sender,                           \
      const type &args)

SERIALIZE_IMPL(xaml::RoutedEventArgs);
SERIALIZE_IMPL(xaml::Controls::SelectionChangedEventArgs);

template <typename TArgs>
void SerializeEventArgs(
    winrt::Microsoft::ReactNative::IJSValueWriter const &writer,
    const winrt::IInspectable &sender,
    const TArgs &args) {
  Serialize(writer, sender, args);
}

/*
template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::DragEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter const&,
winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::DragEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::RoutedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter const&,
winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::RoutedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::HoldingRoutedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Input::HoldingRoutedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::RightTappedRoutedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Input::RightTappedRoutedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs const&);
template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::DragStartingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::DragStartingEventArgs const&);
template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::DropCompletedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::DropCompletedEventArgs const&);
template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs const&);
template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs const&);
template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs const&);
template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::Foundation::IInspectable>(winrt::Microsoft::ReactNative::IJSValueWriter const&,
winrt::Windows::Foundation::IInspectable const&, winrt::Windows::Foundation::IInspectable const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::SizeChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter const&,
winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::SizeChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::DataContextChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::DataContextChangedEventArgs const&);
template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::EffectiveViewportChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::EffectiveViewportChangedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::FocusDisengagedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::FocusDisengagedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::FocusEngagedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::FocusEngagedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxSuggestionChosenEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxSuggestionChosenEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxTextChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxTextChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::CalendarViewSelectedDatesChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::CalendarViewSelectedDatesChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::ComboBoxTextSubmittedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::ComboBoxTextSubmittedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::DynamicOverflowItemsChangingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::DynamicOverflowItemsChangingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::ContentDialogClosingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::ContentDialogClosingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::ContentDialogOpenedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::ContentDialogOpenedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::DatePickerValueChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::DatePickerValueChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::DatePickerSelectedValueChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::DatePickerSelectedValueChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::DatePickedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::DatePickedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::ItemClickEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::ItemClickEventArgs const&);
template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::ChoosingGroupHeaderContainerEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::ChoosingGroupHeaderContainerEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::ChoosingItemContainerEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::ChoosingItemContainerEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::HandwritingPanelClosedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::HandwritingPanelClosedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::HandwritingPanelOpenedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::HandwritingPanelOpenedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::HubSectionHeaderClickEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::HubSectionHeaderClickEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::SectionsInViewChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::SectionsInViewChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs const&);
template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::InkToolbarIsStencilButtonCheckedChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::InkToolbarIsStencilButtonCheckedChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::ItemsPickedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::ItemsPickedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Media::RateChangedRoutedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Media::RateChangedRoutedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::NavigationViewDisplayModeChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::NavigationViewDisplayModeChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::NavigationViewBackRequestedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::NavigationViewBackRequestedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::NavigationViewPaneClosingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::NavigationViewPaneClosingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::PasswordBoxPasswordChangingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::PasswordBoxPasswordChangingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::PickerConfirmedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::PickerConfirmedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs const&);
template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::RefreshRequestedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::RefreshRequestedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::RefreshStateChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::RefreshStateChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::RichEditBoxTextChangingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::RichEditBoxTextChangingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::ContentLinkChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::ContentLinkChangedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::RichEditBoxSelectionChangingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::RichEditBoxSelectionChangingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::ScrollViewerViewChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::ScrollViewerViewChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::ScrollViewerViewChangingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::ScrollViewerViewChangingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::AnchorRequestedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::AnchorRequestedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::SearchBoxQueryChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::SearchBoxQueryChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::SearchBoxQuerySubmittedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::SearchBoxQuerySubmittedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::SearchBoxResultSuggestionChosenEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::SearchBoxResultSuggestionChosenEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::SearchBoxSuggestionsRequestedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::SearchBoxSuggestionsRequestedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::BackClickEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::BackClickEventArgs const&);
template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::SplitButtonClickEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::SplitButtonClickEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::SplitViewPaneClosingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::SplitViewPaneClosingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TextChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::TextChangedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TextBoxTextChangingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::TextBoxTextChangingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TextBoxBeforeTextChangingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::TextBoxBeforeTextChangingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TextBoxSelectionChangingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::TextBoxSelectionChangingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TimePickerValueChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::TimePickerValueChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TimePickedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::TimePickedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::ToggleSplitButtonIsCheckedChangedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::ToggleSplitButtonIsCheckedChangedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TreeViewCollapsedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::TreeViewCollapsedEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TreeViewExpandingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::TreeViewExpandingEventArgs
const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TreeViewItemInvokedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::TreeViewItemInvokedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsCompletedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsCompletedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsStartingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsStartingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::WebViewNavigationFailedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::WebViewNavigationFailedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::NotifyEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Controls::NotifyEventArgs const&);
template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::WebViewContentLoadingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::WebViewContentLoadingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::WebViewDOMContentLoadedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::WebViewDOMContentLoadedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::WebViewLongRunningScriptDetectedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::WebViewLongRunningScriptDetectedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::WebViewUnviewableContentIdentifiedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::WebViewUnviewableContentIdentifiedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::WebViewNewWindowRequestedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::WebViewNewWindowRequestedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::WebViewPermissionRequestedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::WebViewPermissionRequestedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::WebViewUnsupportedUriSchemeIdentifiedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::WebViewUnsupportedUriSchemeIdentifiedEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::WebViewSeparateProcessLostEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::WebViewSeparateProcessLostEventArgs const&); template<> void
SerializeEventArgs<winrt::Windows::UI::Xaml::Controls::WebViewWebResourceRequestedEventArgs>(winrt::Microsoft::ReactNative::IJSValueWriter
const&, winrt::Windows::Foundation::IInspectable const&,
winrt::Windows::UI::Xaml::Controls::WebViewWebResourceRequestedEventArgs const&);
*/