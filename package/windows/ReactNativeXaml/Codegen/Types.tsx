import type {
    NativeContentControlProps,
    NativeAppBarProps,
    NativeButtonProps,
    NativeAppBarButtonProps,
    NativeAppBarElementContainerProps,
    NativeAppBarSeparatorProps,
    NativeToggleButtonProps,
    NativeAppBarToggleButtonProps,
    NativeItemsControlProps,
    NativeAutoSuggestBoxProps,
    NativeBitmapIconProps,
    NativeBorderProps,
    NativeCalendarDatePickerProps,
    NativeCalendarViewProps,
    NativeCalendarViewDayItemProps,
    NativeCanvasProps,
    NativeCaptureElementProps,
    NativeCheckBoxProps,
    NativeColorPickerProps,
    NativeComboBoxProps,
    NativeComboBoxItemProps,
    NativeCommandBarProps,
    NativeCommandBarOverflowPresenterProps,
    NativeContentDialogProps,
    NativeContentPresenterProps,
    NativeDatePickerProps,
    NativeDropDownButtonProps,
    NativeFlipViewProps,
    NativeFlipViewItemProps,
    NativeFlyoutPresenterProps,
    NativeFontIconProps,
    NativeFrameProps,
    NativeGridProps,
    NativeGridViewProps,
    NativeGridViewHeaderItemProps,
    NativeGridViewItemProps,
    NativeGroupItemProps,
    NativeHandwritingViewProps,
    NativeHubProps,
    NativeHubSectionProps,
    NativeHyperlinkButtonProps,
    NativeIconSourceElementProps,
    NativeImageProps,
    NativeInkCanvasProps,
    NativeInkToolbarProps,
    NativeRadioButtonProps,
    NativeInkToolbarBallpointPenButtonProps,
    NativeInkToolbarCustomPenButtonProps,
    NativeInkToolbarCustomToggleButtonProps,
    NativeInkToolbarCustomToolButtonProps,
    NativeInkToolbarEraserButtonProps,
    NativeInkToolbarFlyoutItemProps,
    NativeInkToolbarHighlighterButtonProps,
    NativeInkToolbarPenConfigurationControlProps,
    NativeInkToolbarPencilButtonProps,
    NativeInkToolbarRulerButtonProps,
    NativeInkToolbarStencilButtonProps,
    NativeItemsPresenterProps,
    NativeItemsStackPanelProps,
    NativeItemsWrapGridProps,
    NativeListBoxProps,
    NativeListBoxItemProps,
    NativeListViewProps,
    NativeListViewHeaderItemProps,
    NativeListViewItemProps,
    NativeMapControlProps,
    NativeMediaElementProps,
    NativeMediaPlayerElementProps,
    NativeMediaPlayerPresenterProps,
    NativeMediaTransportControlsProps,
    NativeMenuBarProps,
    NativeMenuBarItemProps,
    NativeMenuFlyoutItemProps,
    NativeMenuFlyoutPresenterProps,
    NativeMenuFlyoutSeparatorProps,
    NativeMenuFlyoutSubItemProps,
    NativeNavigationViewProps,
    NativeNavigationViewItemProps,
    NativeNavigationViewItemHeaderProps,
    NativeNavigationViewItemSeparatorProps,
    NativeNavigationViewListProps,
    NativeUserControlProps,
    NativePageProps,
    NativeParallaxViewProps,
    NativePasswordBoxProps,
    NativePathIconProps,
    NativePersonPictureProps,
    NativePivotProps,
    NativePivotItemProps,
    NativeCalendarPanelProps,
    NativeCarouselPanelProps,
    NativeSliderProps,
    NativeColorPickerSliderProps,
    NativeColorSpectrumProps,
    NativeCommandBarFlyoutCommandBarProps,
    NativeGridViewItemPresenterProps,
    NativeListViewItemPresenterProps,
    NativeNavigationViewItemPresenterProps,
    NativePivotHeaderItemProps,
    NativePivotHeaderPanelProps,
    NativePivotPanelProps,
    NativePopupProps,
    NativeRepeatButtonProps,
    NativeScrollBarProps,
    NativeThumbProps,
    NativeTickBarProps,
    NativeProgressBarProps,
    NativeProgressRingProps,
    NativeRatingControlProps,
    NativeRefreshContainerProps,
    NativeRefreshVisualizerProps,
    NativeRelativePanelProps,
    NativeRichEditBoxProps,
    NativeRichTextBlockProps,
    NativeRichTextBlockOverflowProps,
    NativeScrollContentPresenterProps,
    NativeScrollViewerProps,
    NativeSearchBoxProps,
    NativeSemanticZoomProps,
    NativeSettingsFlyoutProps,
    NativeSplitButtonProps,
    NativeSplitViewProps,
    NativeStackPanelProps,
    NativeSwapChainBackgroundPanelProps,
    NativeSwapChainPanelProps,
    NativeSwipeControlProps,
    NativeSymbolIconProps,
    NativeTextBlockProps,
    NativeTextBoxProps,
    NativeTimePickerProps,
    NativeToggleMenuFlyoutItemProps,
    NativeToggleSplitButtonProps,
    NativeToggleSwitchProps,
    NativeToolTipProps,
    NativeTreeViewProps,
    NativeTreeViewItemProps,
    NativeTreeViewListProps,
    NativeTwoPaneViewProps,
    NativeVariableSizedWrapGridProps,
    NativeViewboxProps,
    NativeVirtualizingStackPanelProps,
    NativeWebViewProps,
    NativeWrapGridProps,
    NativeGlyphsProps,
    NativeEllipseProps,
    NativeLineProps,
    NativePathProps,
    NativePolygonProps,
    NativePolylineProps,
    NativeRectangleProps,
} from './Props';
import React from 'react';
import { NativeXamlControl } from './NativeXamlControl';


export type ContentControlProps = Omit<NativeContentControlProps, 'type'>;

export const ContentControl: React.FC<ContentControlProps> = (props: ContentControlProps) => {
    return (
        <NativeXamlControl type="contentControl" {...props} />
    );
};
export type AppBarProps = Omit<NativeAppBarProps, 'type'>;

export const AppBar: React.FC<AppBarProps> = (props: AppBarProps) => {
    return (
        <NativeXamlControl type="appBar" {...props} />
    );
};
export type ButtonProps = Omit<NativeButtonProps, 'type'>;

export const Button: React.FC<ButtonProps> = (props: ButtonProps) => {
    return (
        <NativeXamlControl type="button" {...props} />
    );
};
export type AppBarButtonProps = Omit<NativeAppBarButtonProps, 'type'>;

export const AppBarButton: React.FC<AppBarButtonProps> = (props: AppBarButtonProps) => {
    return (
        <NativeXamlControl type="appBarButton" {...props} />
    );
};
export type AppBarElementContainerProps = Omit<NativeAppBarElementContainerProps, 'type'>;

export const AppBarElementContainer: React.FC<AppBarElementContainerProps> = (props: AppBarElementContainerProps) => {
    return (
        <NativeXamlControl type="appBarElementContainer" {...props} />
    );
};
export type AppBarSeparatorProps = Omit<NativeAppBarSeparatorProps, 'type'>;

export const AppBarSeparator: React.FC<AppBarSeparatorProps> = (props: AppBarSeparatorProps) => {
    return (
        <NativeXamlControl type="appBarSeparator" {...props} />
    );
};
export type ToggleButtonProps = Omit<NativeToggleButtonProps, 'type'>;

export const ToggleButton: React.FC<ToggleButtonProps> = (props: ToggleButtonProps) => {
    return (
        <NativeXamlControl type="toggleButton" {...props} />
    );
};
export type AppBarToggleButtonProps = Omit<NativeAppBarToggleButtonProps, 'type'>;

export const AppBarToggleButton: React.FC<AppBarToggleButtonProps> = (props: AppBarToggleButtonProps) => {
    return (
        <NativeXamlControl type="appBarToggleButton" {...props} />
    );
};
export type ItemsControlProps = Omit<NativeItemsControlProps, 'type'>;

export const ItemsControl: React.FC<ItemsControlProps> = (props: ItemsControlProps) => {
    return (
        <NativeXamlControl type="itemsControl" {...props} />
    );
};
export type AutoSuggestBoxProps = Omit<NativeAutoSuggestBoxProps, 'type'>;

export const AutoSuggestBox: React.FC<AutoSuggestBoxProps> = (props: AutoSuggestBoxProps) => {
    return (
        <NativeXamlControl type="autoSuggestBox" {...props} />
    );
};
export type BitmapIconProps = Omit<NativeBitmapIconProps, 'type'>;

export const BitmapIcon: React.FC<BitmapIconProps> = (props: BitmapIconProps) => {
    return (
        <NativeXamlControl type="bitmapIcon" {...props} />
    );
};
export type BorderProps = Omit<NativeBorderProps, 'type'>;

export const Border: React.FC<BorderProps> = (props: BorderProps) => {
    return (
        <NativeXamlControl type="border" {...props} />
    );
};
export type CalendarDatePickerProps = Omit<NativeCalendarDatePickerProps, 'type'>;

export const CalendarDatePicker: React.FC<CalendarDatePickerProps> = (props: CalendarDatePickerProps) => {
    return (
        <NativeXamlControl type="calendarDatePicker" {...props} />
    );
};
export type CalendarViewProps = Omit<NativeCalendarViewProps, 'type'>;

export const CalendarView: React.FC<CalendarViewProps> = (props: CalendarViewProps) => {
    return (
        <NativeXamlControl type="calendarView" {...props} />
    );
};
export type CalendarViewDayItemProps = Omit<NativeCalendarViewDayItemProps, 'type'>;

export const CalendarViewDayItem: React.FC<CalendarViewDayItemProps> = (props: CalendarViewDayItemProps) => {
    return (
        <NativeXamlControl type="calendarViewDayItem" {...props} />
    );
};
export type CanvasProps = Omit<NativeCanvasProps, 'type'>;

export const Canvas: React.FC<CanvasProps> = (props: CanvasProps) => {
    return (
        <NativeXamlControl type="canvas" {...props} />
    );
};
export type CaptureElementProps = Omit<NativeCaptureElementProps, 'type'>;

export const CaptureElement: React.FC<CaptureElementProps> = (props: CaptureElementProps) => {
    return (
        <NativeXamlControl type="captureElement" {...props} />
    );
};
export type CheckBoxProps = Omit<NativeCheckBoxProps, 'type'>;

export const CheckBox: React.FC<CheckBoxProps> = (props: CheckBoxProps) => {
    return (
        <NativeXamlControl type="checkBox" {...props} />
    );
};
export type ColorPickerProps = Omit<NativeColorPickerProps, 'type'>;

export const ColorPicker: React.FC<ColorPickerProps> = (props: ColorPickerProps) => {
    return (
        <NativeXamlControl type="colorPicker" {...props} />
    );
};
export type ComboBoxProps = Omit<NativeComboBoxProps, 'type'>;

export const ComboBox: React.FC<ComboBoxProps> = (props: ComboBoxProps) => {
    return (
        <NativeXamlControl type="comboBox" {...props} />
    );
};
export type ComboBoxItemProps = Omit<NativeComboBoxItemProps, 'type'>;

export const ComboBoxItem: React.FC<ComboBoxItemProps> = (props: ComboBoxItemProps) => {
    return (
        <NativeXamlControl type="comboBoxItem" {...props} />
    );
};
export type CommandBarProps = Omit<NativeCommandBarProps, 'type'>;

export const CommandBar: React.FC<CommandBarProps> = (props: CommandBarProps) => {
    return (
        <NativeXamlControl type="commandBar" {...props} />
    );
};
export type CommandBarOverflowPresenterProps = Omit<NativeCommandBarOverflowPresenterProps, 'type'>;

export const CommandBarOverflowPresenter: React.FC<CommandBarOverflowPresenterProps> = (props: CommandBarOverflowPresenterProps) => {
    return (
        <NativeXamlControl type="commandBarOverflowPresenter" {...props} />
    );
};
export type ContentDialogProps = Omit<NativeContentDialogProps, 'type'>;

export const ContentDialog: React.FC<ContentDialogProps> = (props: ContentDialogProps) => {
    return (
        <NativeXamlControl type="contentDialog" {...props} />
    );
};
export type ContentPresenterProps = Omit<NativeContentPresenterProps, 'type'>;

export const ContentPresenter: React.FC<ContentPresenterProps> = (props: ContentPresenterProps) => {
    return (
        <NativeXamlControl type="contentPresenter" {...props} />
    );
};
export type DatePickerProps = Omit<NativeDatePickerProps, 'type'>;

export const DatePicker: React.FC<DatePickerProps> = (props: DatePickerProps) => {
    return (
        <NativeXamlControl type="datePicker" {...props} />
    );
};
export type DropDownButtonProps = Omit<NativeDropDownButtonProps, 'type'>;

export const DropDownButton: React.FC<DropDownButtonProps> = (props: DropDownButtonProps) => {
    return (
        <NativeXamlControl type="dropDownButton" {...props} />
    );
};
export type FlipViewProps = Omit<NativeFlipViewProps, 'type'>;

export const FlipView: React.FC<FlipViewProps> = (props: FlipViewProps) => {
    return (
        <NativeXamlControl type="flipView" {...props} />
    );
};
export type FlipViewItemProps = Omit<NativeFlipViewItemProps, 'type'>;

export const FlipViewItem: React.FC<FlipViewItemProps> = (props: FlipViewItemProps) => {
    return (
        <NativeXamlControl type="flipViewItem" {...props} />
    );
};
export type FlyoutPresenterProps = Omit<NativeFlyoutPresenterProps, 'type'>;

export const FlyoutPresenter: React.FC<FlyoutPresenterProps> = (props: FlyoutPresenterProps) => {
    return (
        <NativeXamlControl type="flyoutPresenter" {...props} />
    );
};
export type FontIconProps = Omit<NativeFontIconProps, 'type'>;

export const FontIcon: React.FC<FontIconProps> = (props: FontIconProps) => {
    return (
        <NativeXamlControl type="fontIcon" {...props} />
    );
};
export type FrameProps = Omit<NativeFrameProps, 'type'>;

export const Frame: React.FC<FrameProps> = (props: FrameProps) => {
    return (
        <NativeXamlControl type="frame" {...props} />
    );
};
export type GridProps = Omit<NativeGridProps, 'type'>;

export const Grid: React.FC<GridProps> = (props: GridProps) => {
    return (
        <NativeXamlControl type="grid" {...props} />
    );
};
export type GridViewProps = Omit<NativeGridViewProps, 'type'>;

export const GridView: React.FC<GridViewProps> = (props: GridViewProps) => {
    return (
        <NativeXamlControl type="gridView" {...props} />
    );
};
export type GridViewHeaderItemProps = Omit<NativeGridViewHeaderItemProps, 'type'>;

export const GridViewHeaderItem: React.FC<GridViewHeaderItemProps> = (props: GridViewHeaderItemProps) => {
    return (
        <NativeXamlControl type="gridViewHeaderItem" {...props} />
    );
};
export type GridViewItemProps = Omit<NativeGridViewItemProps, 'type'>;

export const GridViewItem: React.FC<GridViewItemProps> = (props: GridViewItemProps) => {
    return (
        <NativeXamlControl type="gridViewItem" {...props} />
    );
};
export type GroupItemProps = Omit<NativeGroupItemProps, 'type'>;

export const GroupItem: React.FC<GroupItemProps> = (props: GroupItemProps) => {
    return (
        <NativeXamlControl type="groupItem" {...props} />
    );
};
export type HandwritingViewProps = Omit<NativeHandwritingViewProps, 'type'>;

export const HandwritingView: React.FC<HandwritingViewProps> = (props: HandwritingViewProps) => {
    return (
        <NativeXamlControl type="handwritingView" {...props} />
    );
};
export type HubProps = Omit<NativeHubProps, 'type'>;

export const Hub: React.FC<HubProps> = (props: HubProps) => {
    return (
        <NativeXamlControl type="hub" {...props} />
    );
};
export type HubSectionProps = Omit<NativeHubSectionProps, 'type'>;

export const HubSection: React.FC<HubSectionProps> = (props: HubSectionProps) => {
    return (
        <NativeXamlControl type="hubSection" {...props} />
    );
};
export type HyperlinkButtonProps = Omit<NativeHyperlinkButtonProps, 'type'>;

export const HyperlinkButton: React.FC<HyperlinkButtonProps> = (props: HyperlinkButtonProps) => {
    return (
        <NativeXamlControl type="hyperlinkButton" {...props} />
    );
};
export type IconSourceElementProps = Omit<NativeIconSourceElementProps, 'type'>;

export const IconSourceElement: React.FC<IconSourceElementProps> = (props: IconSourceElementProps) => {
    return (
        <NativeXamlControl type="iconSourceElement" {...props} />
    );
};
export type ImageProps = Omit<NativeImageProps, 'type'>;

export const Image: React.FC<ImageProps> = (props: ImageProps) => {
    return (
        <NativeXamlControl type="image" {...props} />
    );
};
export type InkCanvasProps = Omit<NativeInkCanvasProps, 'type'>;

export const InkCanvas: React.FC<InkCanvasProps> = (props: InkCanvasProps) => {
    return (
        <NativeXamlControl type="inkCanvas" {...props} />
    );
};
export type InkToolbarProps = Omit<NativeInkToolbarProps, 'type'>;

export const InkToolbar: React.FC<InkToolbarProps> = (props: InkToolbarProps) => {
    return (
        <NativeXamlControl type="inkToolbar" {...props} />
    );
};
export type RadioButtonProps = Omit<NativeRadioButtonProps, 'type'>;

export const RadioButton: React.FC<RadioButtonProps> = (props: RadioButtonProps) => {
    return (
        <NativeXamlControl type="radioButton" {...props} />
    );
};
export type InkToolbarBallpointPenButtonProps = Omit<NativeInkToolbarBallpointPenButtonProps, 'type'>;

export const InkToolbarBallpointPenButton: React.FC<InkToolbarBallpointPenButtonProps> = (props: InkToolbarBallpointPenButtonProps) => {
    return (
        <NativeXamlControl type="inkToolbarBallpointPenButton" {...props} />
    );
};
export type InkToolbarCustomPenButtonProps = Omit<NativeInkToolbarCustomPenButtonProps, 'type'>;

export const InkToolbarCustomPenButton: React.FC<InkToolbarCustomPenButtonProps> = (props: InkToolbarCustomPenButtonProps) => {
    return (
        <NativeXamlControl type="inkToolbarCustomPenButton" {...props} />
    );
};
export type InkToolbarCustomToggleButtonProps = Omit<NativeInkToolbarCustomToggleButtonProps, 'type'>;

export const InkToolbarCustomToggleButton: React.FC<InkToolbarCustomToggleButtonProps> = (props: InkToolbarCustomToggleButtonProps) => {
    return (
        <NativeXamlControl type="inkToolbarCustomToggleButton" {...props} />
    );
};
export type InkToolbarCustomToolButtonProps = Omit<NativeInkToolbarCustomToolButtonProps, 'type'>;

export const InkToolbarCustomToolButton: React.FC<InkToolbarCustomToolButtonProps> = (props: InkToolbarCustomToolButtonProps) => {
    return (
        <NativeXamlControl type="inkToolbarCustomToolButton" {...props} />
    );
};
export type InkToolbarEraserButtonProps = Omit<NativeInkToolbarEraserButtonProps, 'type'>;

export const InkToolbarEraserButton: React.FC<InkToolbarEraserButtonProps> = (props: InkToolbarEraserButtonProps) => {
    return (
        <NativeXamlControl type="inkToolbarEraserButton" {...props} />
    );
};
export type InkToolbarFlyoutItemProps = Omit<NativeInkToolbarFlyoutItemProps, 'type'>;

export const InkToolbarFlyoutItem: React.FC<InkToolbarFlyoutItemProps> = (props: InkToolbarFlyoutItemProps) => {
    return (
        <NativeXamlControl type="inkToolbarFlyoutItem" {...props} />
    );
};
export type InkToolbarHighlighterButtonProps = Omit<NativeInkToolbarHighlighterButtonProps, 'type'>;

export const InkToolbarHighlighterButton: React.FC<InkToolbarHighlighterButtonProps> = (props: InkToolbarHighlighterButtonProps) => {
    return (
        <NativeXamlControl type="inkToolbarHighlighterButton" {...props} />
    );
};
export type InkToolbarPenConfigurationControlProps = Omit<NativeInkToolbarPenConfigurationControlProps, 'type'>;

export const InkToolbarPenConfigurationControl: React.FC<InkToolbarPenConfigurationControlProps> = (props: InkToolbarPenConfigurationControlProps) => {
    return (
        <NativeXamlControl type="inkToolbarPenConfigurationControl" {...props} />
    );
};
export type InkToolbarPencilButtonProps = Omit<NativeInkToolbarPencilButtonProps, 'type'>;

export const InkToolbarPencilButton: React.FC<InkToolbarPencilButtonProps> = (props: InkToolbarPencilButtonProps) => {
    return (
        <NativeXamlControl type="inkToolbarPencilButton" {...props} />
    );
};
export type InkToolbarRulerButtonProps = Omit<NativeInkToolbarRulerButtonProps, 'type'>;

export const InkToolbarRulerButton: React.FC<InkToolbarRulerButtonProps> = (props: InkToolbarRulerButtonProps) => {
    return (
        <NativeXamlControl type="inkToolbarRulerButton" {...props} />
    );
};
export type InkToolbarStencilButtonProps = Omit<NativeInkToolbarStencilButtonProps, 'type'>;

export const InkToolbarStencilButton: React.FC<InkToolbarStencilButtonProps> = (props: InkToolbarStencilButtonProps) => {
    return (
        <NativeXamlControl type="inkToolbarStencilButton" {...props} />
    );
};
export type ItemsPresenterProps = Omit<NativeItemsPresenterProps, 'type'>;

export const ItemsPresenter: React.FC<ItemsPresenterProps> = (props: ItemsPresenterProps) => {
    return (
        <NativeXamlControl type="itemsPresenter" {...props} />
    );
};
export type ItemsStackPanelProps = Omit<NativeItemsStackPanelProps, 'type'>;

export const ItemsStackPanel: React.FC<ItemsStackPanelProps> = (props: ItemsStackPanelProps) => {
    return (
        <NativeXamlControl type="itemsStackPanel" {...props} />
    );
};
export type ItemsWrapGridProps = Omit<NativeItemsWrapGridProps, 'type'>;

export const ItemsWrapGrid: React.FC<ItemsWrapGridProps> = (props: ItemsWrapGridProps) => {
    return (
        <NativeXamlControl type="itemsWrapGrid" {...props} />
    );
};
export type ListBoxProps = Omit<NativeListBoxProps, 'type'>;

export const ListBox: React.FC<ListBoxProps> = (props: ListBoxProps) => {
    return (
        <NativeXamlControl type="listBox" {...props} />
    );
};
export type ListBoxItemProps = Omit<NativeListBoxItemProps, 'type'>;

export const ListBoxItem: React.FC<ListBoxItemProps> = (props: ListBoxItemProps) => {
    return (
        <NativeXamlControl type="listBoxItem" {...props} />
    );
};
export type ListViewProps = Omit<NativeListViewProps, 'type'>;

export const ListView: React.FC<ListViewProps> = (props: ListViewProps) => {
    return (
        <NativeXamlControl type="listView" {...props} />
    );
};
export type ListViewHeaderItemProps = Omit<NativeListViewHeaderItemProps, 'type'>;

export const ListViewHeaderItem: React.FC<ListViewHeaderItemProps> = (props: ListViewHeaderItemProps) => {
    return (
        <NativeXamlControl type="listViewHeaderItem" {...props} />
    );
};
export type ListViewItemProps = Omit<NativeListViewItemProps, 'type'>;

export const ListViewItem: React.FC<ListViewItemProps> = (props: ListViewItemProps) => {
    return (
        <NativeXamlControl type="listViewItem" {...props} />
    );
};
export type MapControlProps = Omit<NativeMapControlProps, 'type'>;

export const MapControl: React.FC<MapControlProps> = (props: MapControlProps) => {
    return (
        <NativeXamlControl type="mapControl" {...props} />
    );
};
export type MediaElementProps = Omit<NativeMediaElementProps, 'type'>;

export const MediaElement: React.FC<MediaElementProps> = (props: MediaElementProps) => {
    return (
        <NativeXamlControl type="mediaElement" {...props} />
    );
};
export type MediaPlayerElementProps = Omit<NativeMediaPlayerElementProps, 'type'>;

export const MediaPlayerElement: React.FC<MediaPlayerElementProps> = (props: MediaPlayerElementProps) => {
    return (
        <NativeXamlControl type="mediaPlayerElement" {...props} />
    );
};
export type MediaPlayerPresenterProps = Omit<NativeMediaPlayerPresenterProps, 'type'>;

export const MediaPlayerPresenter: React.FC<MediaPlayerPresenterProps> = (props: MediaPlayerPresenterProps) => {
    return (
        <NativeXamlControl type="mediaPlayerPresenter" {...props} />
    );
};
export type MediaTransportControlsProps = Omit<NativeMediaTransportControlsProps, 'type'>;

export const MediaTransportControls: React.FC<MediaTransportControlsProps> = (props: MediaTransportControlsProps) => {
    return (
        <NativeXamlControl type="mediaTransportControls" {...props} />
    );
};
export type MenuBarProps = Omit<NativeMenuBarProps, 'type'>;

export const MenuBar: React.FC<MenuBarProps> = (props: MenuBarProps) => {
    return (
        <NativeXamlControl type="menuBar" {...props} />
    );
};
export type MenuBarItemProps = Omit<NativeMenuBarItemProps, 'type'>;

export const MenuBarItem: React.FC<MenuBarItemProps> = (props: MenuBarItemProps) => {
    return (
        <NativeXamlControl type="menuBarItem" {...props} />
    );
};
export type MenuFlyoutItemProps = Omit<NativeMenuFlyoutItemProps, 'type'>;

export const MenuFlyoutItem: React.FC<MenuFlyoutItemProps> = (props: MenuFlyoutItemProps) => {
    return (
        <NativeXamlControl type="menuFlyoutItem" {...props} />
    );
};
export type MenuFlyoutPresenterProps = Omit<NativeMenuFlyoutPresenterProps, 'type'>;

export const MenuFlyoutPresenter: React.FC<MenuFlyoutPresenterProps> = (props: MenuFlyoutPresenterProps) => {
    return (
        <NativeXamlControl type="menuFlyoutPresenter" {...props} />
    );
};
export type MenuFlyoutSeparatorProps = Omit<NativeMenuFlyoutSeparatorProps, 'type'>;

export const MenuFlyoutSeparator: React.FC<MenuFlyoutSeparatorProps> = (props: MenuFlyoutSeparatorProps) => {
    return (
        <NativeXamlControl type="menuFlyoutSeparator" {...props} />
    );
};
export type MenuFlyoutSubItemProps = Omit<NativeMenuFlyoutSubItemProps, 'type'>;

export const MenuFlyoutSubItem: React.FC<MenuFlyoutSubItemProps> = (props: MenuFlyoutSubItemProps) => {
    return (
        <NativeXamlControl type="menuFlyoutSubItem" {...props} />
    );
};
export type NavigationViewProps = Omit<NativeNavigationViewProps, 'type'>;

export const NavigationView: React.FC<NavigationViewProps> = (props: NavigationViewProps) => {
    return (
        <NativeXamlControl type="navigationView" {...props} />
    );
};
export type NavigationViewItemProps = Omit<NativeNavigationViewItemProps, 'type'>;

export const NavigationViewItem: React.FC<NavigationViewItemProps> = (props: NavigationViewItemProps) => {
    return (
        <NativeXamlControl type="navigationViewItem" {...props} />
    );
};
export type NavigationViewItemHeaderProps = Omit<NativeNavigationViewItemHeaderProps, 'type'>;

export const NavigationViewItemHeader: React.FC<NavigationViewItemHeaderProps> = (props: NavigationViewItemHeaderProps) => {
    return (
        <NativeXamlControl type="navigationViewItemHeader" {...props} />
    );
};
export type NavigationViewItemSeparatorProps = Omit<NativeNavigationViewItemSeparatorProps, 'type'>;

export const NavigationViewItemSeparator: React.FC<NavigationViewItemSeparatorProps> = (props: NavigationViewItemSeparatorProps) => {
    return (
        <NativeXamlControl type="navigationViewItemSeparator" {...props} />
    );
};
export type NavigationViewListProps = Omit<NativeNavigationViewListProps, 'type'>;

export const NavigationViewList: React.FC<NavigationViewListProps> = (props: NavigationViewListProps) => {
    return (
        <NativeXamlControl type="navigationViewList" {...props} />
    );
};
export type UserControlProps = Omit<NativeUserControlProps, 'type'>;

export const UserControl: React.FC<UserControlProps> = (props: UserControlProps) => {
    return (
        <NativeXamlControl type="userControl" {...props} />
    );
};
export type PageProps = Omit<NativePageProps, 'type'>;

export const Page: React.FC<PageProps> = (props: PageProps) => {
    return (
        <NativeXamlControl type="page" {...props} />
    );
};
export type ParallaxViewProps = Omit<NativeParallaxViewProps, 'type'>;

export const ParallaxView: React.FC<ParallaxViewProps> = (props: ParallaxViewProps) => {
    return (
        <NativeXamlControl type="parallaxView" {...props} />
    );
};
export type PasswordBoxProps = Omit<NativePasswordBoxProps, 'type'>;

export const PasswordBox: React.FC<PasswordBoxProps> = (props: PasswordBoxProps) => {
    return (
        <NativeXamlControl type="passwordBox" {...props} />
    );
};
export type PathIconProps = Omit<NativePathIconProps, 'type'>;

export const PathIcon: React.FC<PathIconProps> = (props: PathIconProps) => {
    return (
        <NativeXamlControl type="pathIcon" {...props} />
    );
};
export type PersonPictureProps = Omit<NativePersonPictureProps, 'type'>;

export const PersonPicture: React.FC<PersonPictureProps> = (props: PersonPictureProps) => {
    return (
        <NativeXamlControl type="personPicture" {...props} />
    );
};
export type PivotProps = Omit<NativePivotProps, 'type'>;

export const Pivot: React.FC<PivotProps> = (props: PivotProps) => {
    return (
        <NativeXamlControl type="pivot" {...props} />
    );
};
export type PivotItemProps = Omit<NativePivotItemProps, 'type'>;

export const PivotItem: React.FC<PivotItemProps> = (props: PivotItemProps) => {
    return (
        <NativeXamlControl type="pivotItem" {...props} />
    );
};
export type CalendarPanelProps = Omit<NativeCalendarPanelProps, 'type'>;

export const CalendarPanel: React.FC<CalendarPanelProps> = (props: CalendarPanelProps) => {
    return (
        <NativeXamlControl type="calendarPanel" {...props} />
    );
};
export type CarouselPanelProps = Omit<NativeCarouselPanelProps, 'type'>;

export const CarouselPanel: React.FC<CarouselPanelProps> = (props: CarouselPanelProps) => {
    return (
        <NativeXamlControl type="carouselPanel" {...props} />
    );
};
export type SliderProps = Omit<NativeSliderProps, 'type'>;

export const Slider: React.FC<SliderProps> = (props: SliderProps) => {
    return (
        <NativeXamlControl type="slider" {...props} />
    );
};
export type ColorPickerSliderProps = Omit<NativeColorPickerSliderProps, 'type'>;

export const ColorPickerSlider: React.FC<ColorPickerSliderProps> = (props: ColorPickerSliderProps) => {
    return (
        <NativeXamlControl type="colorPickerSlider" {...props} />
    );
};
export type ColorSpectrumProps = Omit<NativeColorSpectrumProps, 'type'>;

export const ColorSpectrum: React.FC<ColorSpectrumProps> = (props: ColorSpectrumProps) => {
    return (
        <NativeXamlControl type="colorSpectrum" {...props} />
    );
};
export type CommandBarFlyoutCommandBarProps = Omit<NativeCommandBarFlyoutCommandBarProps, 'type'>;

export const CommandBarFlyoutCommandBar: React.FC<CommandBarFlyoutCommandBarProps> = (props: CommandBarFlyoutCommandBarProps) => {
    return (
        <NativeXamlControl type="commandBarFlyoutCommandBar" {...props} />
    );
};
export type GridViewItemPresenterProps = Omit<NativeGridViewItemPresenterProps, 'type'>;

export const GridViewItemPresenter: React.FC<GridViewItemPresenterProps> = (props: GridViewItemPresenterProps) => {
    return (
        <NativeXamlControl type="gridViewItemPresenter" {...props} />
    );
};
export type ListViewItemPresenterProps = Omit<NativeListViewItemPresenterProps, 'type'>;

export const ListViewItemPresenter: React.FC<ListViewItemPresenterProps> = (props: ListViewItemPresenterProps) => {
    return (
        <NativeXamlControl type="listViewItemPresenter" {...props} />
    );
};
export type NavigationViewItemPresenterProps = Omit<NativeNavigationViewItemPresenterProps, 'type'>;

export const NavigationViewItemPresenter: React.FC<NavigationViewItemPresenterProps> = (props: NavigationViewItemPresenterProps) => {
    return (
        <NativeXamlControl type="navigationViewItemPresenter" {...props} />
    );
};
export type PivotHeaderItemProps = Omit<NativePivotHeaderItemProps, 'type'>;

export const PivotHeaderItem: React.FC<PivotHeaderItemProps> = (props: PivotHeaderItemProps) => {
    return (
        <NativeXamlControl type="pivotHeaderItem" {...props} />
    );
};
export type PivotHeaderPanelProps = Omit<NativePivotHeaderPanelProps, 'type'>;

export const PivotHeaderPanel: React.FC<PivotHeaderPanelProps> = (props: PivotHeaderPanelProps) => {
    return (
        <NativeXamlControl type="pivotHeaderPanel" {...props} />
    );
};
export type PivotPanelProps = Omit<NativePivotPanelProps, 'type'>;

export const PivotPanel: React.FC<PivotPanelProps> = (props: PivotPanelProps) => {
    return (
        <NativeXamlControl type="pivotPanel" {...props} />
    );
};
export type PopupProps = Omit<NativePopupProps, 'type'>;

export const Popup: React.FC<PopupProps> = (props: PopupProps) => {
    return (
        <NativeXamlControl type="popup" {...props} />
    );
};
export type RepeatButtonProps = Omit<NativeRepeatButtonProps, 'type'>;

export const RepeatButton: React.FC<RepeatButtonProps> = (props: RepeatButtonProps) => {
    return (
        <NativeXamlControl type="repeatButton" {...props} />
    );
};
export type ScrollBarProps = Omit<NativeScrollBarProps, 'type'>;

export const ScrollBar: React.FC<ScrollBarProps> = (props: ScrollBarProps) => {
    return (
        <NativeXamlControl type="scrollBar" {...props} />
    );
};
export type ThumbProps = Omit<NativeThumbProps, 'type'>;

export const Thumb: React.FC<ThumbProps> = (props: ThumbProps) => {
    return (
        <NativeXamlControl type="thumb" {...props} />
    );
};
export type TickBarProps = Omit<NativeTickBarProps, 'type'>;

export const TickBar: React.FC<TickBarProps> = (props: TickBarProps) => {
    return (
        <NativeXamlControl type="tickBar" {...props} />
    );
};
export type ProgressBarProps = Omit<NativeProgressBarProps, 'type'>;

export const ProgressBar: React.FC<ProgressBarProps> = (props: ProgressBarProps) => {
    return (
        <NativeXamlControl type="progressBar" {...props} />
    );
};
export type ProgressRingProps = Omit<NativeProgressRingProps, 'type'>;

export const ProgressRing: React.FC<ProgressRingProps> = (props: ProgressRingProps) => {
    return (
        <NativeXamlControl type="progressRing" {...props} />
    );
};
export type RatingControlProps = Omit<NativeRatingControlProps, 'type'>;

export const RatingControl: React.FC<RatingControlProps> = (props: RatingControlProps) => {
    return (
        <NativeXamlControl type="ratingControl" {...props} />
    );
};
export type RefreshContainerProps = Omit<NativeRefreshContainerProps, 'type'>;

export const RefreshContainer: React.FC<RefreshContainerProps> = (props: RefreshContainerProps) => {
    return (
        <NativeXamlControl type="refreshContainer" {...props} />
    );
};
export type RefreshVisualizerProps = Omit<NativeRefreshVisualizerProps, 'type'>;

export const RefreshVisualizer: React.FC<RefreshVisualizerProps> = (props: RefreshVisualizerProps) => {
    return (
        <NativeXamlControl type="refreshVisualizer" {...props} />
    );
};
export type RelativePanelProps = Omit<NativeRelativePanelProps, 'type'>;

export const RelativePanel: React.FC<RelativePanelProps> = (props: RelativePanelProps) => {
    return (
        <NativeXamlControl type="relativePanel" {...props} />
    );
};
export type RichEditBoxProps = Omit<NativeRichEditBoxProps, 'type'>;

export const RichEditBox: React.FC<RichEditBoxProps> = (props: RichEditBoxProps) => {
    return (
        <NativeXamlControl type="richEditBox" {...props} />
    );
};
export type RichTextBlockProps = Omit<NativeRichTextBlockProps, 'type'>;

export const RichTextBlock: React.FC<RichTextBlockProps> = (props: RichTextBlockProps) => {
    return (
        <NativeXamlControl type="richTextBlock" {...props} />
    );
};
export type RichTextBlockOverflowProps = Omit<NativeRichTextBlockOverflowProps, 'type'>;

export const RichTextBlockOverflow: React.FC<RichTextBlockOverflowProps> = (props: RichTextBlockOverflowProps) => {
    return (
        <NativeXamlControl type="richTextBlockOverflow" {...props} />
    );
};
export type ScrollContentPresenterProps = Omit<NativeScrollContentPresenterProps, 'type'>;

export const ScrollContentPresenter: React.FC<ScrollContentPresenterProps> = (props: ScrollContentPresenterProps) => {
    return (
        <NativeXamlControl type="scrollContentPresenter" {...props} />
    );
};
export type ScrollViewerProps = Omit<NativeScrollViewerProps, 'type'>;

export const ScrollViewer: React.FC<ScrollViewerProps> = (props: ScrollViewerProps) => {
    return (
        <NativeXamlControl type="scrollViewer" {...props} />
    );
};
export type SearchBoxProps = Omit<NativeSearchBoxProps, 'type'>;

export const SearchBox: React.FC<SearchBoxProps> = (props: SearchBoxProps) => {
    return (
        <NativeXamlControl type="searchBox" {...props} />
    );
};
export type SemanticZoomProps = Omit<NativeSemanticZoomProps, 'type'>;

export const SemanticZoom: React.FC<SemanticZoomProps> = (props: SemanticZoomProps) => {
    return (
        <NativeXamlControl type="semanticZoom" {...props} />
    );
};
export type SettingsFlyoutProps = Omit<NativeSettingsFlyoutProps, 'type'>;

export const SettingsFlyout: React.FC<SettingsFlyoutProps> = (props: SettingsFlyoutProps) => {
    return (
        <NativeXamlControl type="settingsFlyout" {...props} />
    );
};
export type SplitButtonProps = Omit<NativeSplitButtonProps, 'type'>;

export const SplitButton: React.FC<SplitButtonProps> = (props: SplitButtonProps) => {
    return (
        <NativeXamlControl type="splitButton" {...props} />
    );
};
export type SplitViewProps = Omit<NativeSplitViewProps, 'type'>;

export const SplitView: React.FC<SplitViewProps> = (props: SplitViewProps) => {
    return (
        <NativeXamlControl type="splitView" {...props} />
    );
};
export type StackPanelProps = Omit<NativeStackPanelProps, 'type'>;

export const StackPanel: React.FC<StackPanelProps> = (props: StackPanelProps) => {
    return (
        <NativeXamlControl type="stackPanel" {...props} />
    );
};
export type SwapChainBackgroundPanelProps = Omit<NativeSwapChainBackgroundPanelProps, 'type'>;

export const SwapChainBackgroundPanel: React.FC<SwapChainBackgroundPanelProps> = (props: SwapChainBackgroundPanelProps) => {
    return (
        <NativeXamlControl type="swapChainBackgroundPanel" {...props} />
    );
};
export type SwapChainPanelProps = Omit<NativeSwapChainPanelProps, 'type'>;

export const SwapChainPanel: React.FC<SwapChainPanelProps> = (props: SwapChainPanelProps) => {
    return (
        <NativeXamlControl type="swapChainPanel" {...props} />
    );
};
export type SwipeControlProps = Omit<NativeSwipeControlProps, 'type'>;

export const SwipeControl: React.FC<SwipeControlProps> = (props: SwipeControlProps) => {
    return (
        <NativeXamlControl type="swipeControl" {...props} />
    );
};
export type SymbolIconProps = Omit<NativeSymbolIconProps, 'type'>;

export const SymbolIcon: React.FC<SymbolIconProps> = (props: SymbolIconProps) => {
    return (
        <NativeXamlControl type="symbolIcon" {...props} />
    );
};
export type TextBlockProps = Omit<NativeTextBlockProps, 'type'>;

export const TextBlock: React.FC<TextBlockProps> = (props: TextBlockProps) => {
    return (
        <NativeXamlControl type="textBlock" {...props} />
    );
};
export type TextBoxProps = Omit<NativeTextBoxProps, 'type'>;

export const TextBox: React.FC<TextBoxProps> = (props: TextBoxProps) => {
    return (
        <NativeXamlControl type="textBox" {...props} />
    );
};
export type TimePickerProps = Omit<NativeTimePickerProps, 'type'>;

export const TimePicker: React.FC<TimePickerProps> = (props: TimePickerProps) => {
    return (
        <NativeXamlControl type="timePicker" {...props} />
    );
};
export type ToggleMenuFlyoutItemProps = Omit<NativeToggleMenuFlyoutItemProps, 'type'>;

export const ToggleMenuFlyoutItem: React.FC<ToggleMenuFlyoutItemProps> = (props: ToggleMenuFlyoutItemProps) => {
    return (
        <NativeXamlControl type="toggleMenuFlyoutItem" {...props} />
    );
};
export type ToggleSplitButtonProps = Omit<NativeToggleSplitButtonProps, 'type'>;

export const ToggleSplitButton: React.FC<ToggleSplitButtonProps> = (props: ToggleSplitButtonProps) => {
    return (
        <NativeXamlControl type="toggleSplitButton" {...props} />
    );
};
export type ToggleSwitchProps = Omit<NativeToggleSwitchProps, 'type'>;

export const ToggleSwitch: React.FC<ToggleSwitchProps> = (props: ToggleSwitchProps) => {
    return (
        <NativeXamlControl type="toggleSwitch" {...props} />
    );
};
export type ToolTipProps = Omit<NativeToolTipProps, 'type'>;

export const ToolTip: React.FC<ToolTipProps> = (props: ToolTipProps) => {
    return (
        <NativeXamlControl type="toolTip" {...props} />
    );
};
export type TreeViewProps = Omit<NativeTreeViewProps, 'type'>;

export const TreeView: React.FC<TreeViewProps> = (props: TreeViewProps) => {
    return (
        <NativeXamlControl type="treeView" {...props} />
    );
};
export type TreeViewItemProps = Omit<NativeTreeViewItemProps, 'type'>;

export const TreeViewItem: React.FC<TreeViewItemProps> = (props: TreeViewItemProps) => {
    return (
        <NativeXamlControl type="treeViewItem" {...props} />
    );
};
export type TreeViewListProps = Omit<NativeTreeViewListProps, 'type'>;

export const TreeViewList: React.FC<TreeViewListProps> = (props: TreeViewListProps) => {
    return (
        <NativeXamlControl type="treeViewList" {...props} />
    );
};
export type TwoPaneViewProps = Omit<NativeTwoPaneViewProps, 'type'>;

export const TwoPaneView: React.FC<TwoPaneViewProps> = (props: TwoPaneViewProps) => {
    return (
        <NativeXamlControl type="twoPaneView" {...props} />
    );
};
export type VariableSizedWrapGridProps = Omit<NativeVariableSizedWrapGridProps, 'type'>;

export const VariableSizedWrapGrid: React.FC<VariableSizedWrapGridProps> = (props: VariableSizedWrapGridProps) => {
    return (
        <NativeXamlControl type="variableSizedWrapGrid" {...props} />
    );
};
export type ViewboxProps = Omit<NativeViewboxProps, 'type'>;

export const Viewbox: React.FC<ViewboxProps> = (props: ViewboxProps) => {
    return (
        <NativeXamlControl type="viewbox" {...props} />
    );
};
export type VirtualizingStackPanelProps = Omit<NativeVirtualizingStackPanelProps, 'type'>;

export const VirtualizingStackPanel: React.FC<VirtualizingStackPanelProps> = (props: VirtualizingStackPanelProps) => {
    return (
        <NativeXamlControl type="virtualizingStackPanel" {...props} />
    );
};
export type WebViewProps = Omit<NativeWebViewProps, 'type'>;

export const WebView: React.FC<WebViewProps> = (props: WebViewProps) => {
    return (
        <NativeXamlControl type="webView" {...props} />
    );
};
export type WrapGridProps = Omit<NativeWrapGridProps, 'type'>;

export const WrapGrid: React.FC<WrapGridProps> = (props: WrapGridProps) => {
    return (
        <NativeXamlControl type="wrapGrid" {...props} />
    );
};
export type GlyphsProps = Omit<NativeGlyphsProps, 'type'>;

export const Glyphs: React.FC<GlyphsProps> = (props: GlyphsProps) => {
    return (
        <NativeXamlControl type="glyphs" {...props} />
    );
};
export type EllipseProps = Omit<NativeEllipseProps, 'type'>;

export const Ellipse: React.FC<EllipseProps> = (props: EllipseProps) => {
    return (
        <NativeXamlControl type="ellipse" {...props} />
    );
};
export type LineProps = Omit<NativeLineProps, 'type'>;

export const Line: React.FC<LineProps> = (props: LineProps) => {
    return (
        <NativeXamlControl type="line" {...props} />
    );
};
export type PathProps = Omit<NativePathProps, 'type'>;

export const Path: React.FC<PathProps> = (props: PathProps) => {
    return (
        <NativeXamlControl type="path" {...props} />
    );
};
export type PolygonProps = Omit<NativePolygonProps, 'type'>;

export const Polygon: React.FC<PolygonProps> = (props: PolygonProps) => {
    return (
        <NativeXamlControl type="polygon" {...props} />
    );
};
export type PolylineProps = Omit<NativePolylineProps, 'type'>;

export const Polyline: React.FC<PolylineProps> = (props: PolylineProps) => {
    return (
        <NativeXamlControl type="polyline" {...props} />
    );
};
export type RectangleProps = Omit<NativeRectangleProps, 'type'>;

export const Rectangle: React.FC<RectangleProps> = (props: RectangleProps) => {
    return (
        <NativeXamlControl type="rectangle" {...props} />
    );
};
