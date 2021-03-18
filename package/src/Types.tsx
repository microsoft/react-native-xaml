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
    NativeCommandBarFlyoutProps,
    NativeCommandBarOverflowPresenterProps,
    NativeContentDialogProps,
    NativeContentPresenterProps,
    NativeDatePickerProps,
    NativeDatePickerFlyoutProps,
    NativeDropDownButtonProps,
    NativeFlipViewProps,
    NativeFlipViewItemProps,
    NativeFlyoutProps,
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
    NativeListPickerFlyoutProps,
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
    NativeMenuFlyoutProps,
    NativeMenuBarItemFlyoutProps,
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
    NativePickerFlyoutProps,
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
    NativeTextCommandBarFlyoutProps,
    NativeTimePickerProps,
    NativeTimePickerFlyoutProps,
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
    NativeSpanProps,
    NativeBoldProps,
    NativeContentLinkProps,
    NativeGlyphsProps,
    NativeHyperlinkProps,
    NativeInlineUIContainerProps,
    NativeItalicProps,
    NativeLineBreakProps,
    NativeParagraphProps,
    NativeRunProps,
    NativeUnderlineProps,
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
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ContentControl" {...props} />
    );
};
export type AppBarProps = Omit<NativeAppBarProps, 'type'>;

export const AppBar: React.FC<AppBarProps> = (props: AppBarProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.AppBar" {...props} />
    );
};
export type ButtonProps = Omit<NativeButtonProps, 'type'>;

export const Button: React.FC<ButtonProps> = (props: ButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Button" {...props} />
    );
};
export type AppBarButtonProps = Omit<NativeAppBarButtonProps, 'type'>;

export const AppBarButton: React.FC<AppBarButtonProps> = (props: AppBarButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.AppBarButton" {...props} />
    );
};
export type AppBarElementContainerProps = Omit<NativeAppBarElementContainerProps, 'type'>;

export const AppBarElementContainer: React.FC<AppBarElementContainerProps> = (props: AppBarElementContainerProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.AppBarElementContainer" {...props} />
    );
};
export type AppBarSeparatorProps = Omit<NativeAppBarSeparatorProps, 'type'>;

export const AppBarSeparator: React.FC<AppBarSeparatorProps> = (props: AppBarSeparatorProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.AppBarSeparator" {...props} />
    );
};
export type ToggleButtonProps = Omit<NativeToggleButtonProps, 'type'>;

export const ToggleButton: React.FC<ToggleButtonProps> = (props: ToggleButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Primitives.ToggleButton" {...props} />
    );
};
export type AppBarToggleButtonProps = Omit<NativeAppBarToggleButtonProps, 'type'>;

export const AppBarToggleButton: React.FC<AppBarToggleButtonProps> = (props: AppBarToggleButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.AppBarToggleButton" {...props} />
    );
};
export type ItemsControlProps = Omit<NativeItemsControlProps, 'type'>;

export const ItemsControl: React.FC<ItemsControlProps> = (props: ItemsControlProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ItemsControl" {...props} />
    );
};
export type AutoSuggestBoxProps = Omit<NativeAutoSuggestBoxProps, 'type'>;

export const AutoSuggestBox: React.FC<AutoSuggestBoxProps> = (props: AutoSuggestBoxProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.AutoSuggestBox" {...props} />
    );
};
export type BitmapIconProps = Omit<NativeBitmapIconProps, 'type'>;

export const BitmapIcon: React.FC<BitmapIconProps> = (props: BitmapIconProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.BitmapIcon" {...props} />
    );
};
export type BorderProps = Omit<NativeBorderProps, 'type'>;

export const Border: React.FC<BorderProps> = (props: BorderProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Border" {...props} />
    );
};
export type CalendarDatePickerProps = Omit<NativeCalendarDatePickerProps, 'type'>;

export const CalendarDatePicker: React.FC<CalendarDatePickerProps> = (props: CalendarDatePickerProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.CalendarDatePicker" {...props} />
    );
};
export type CalendarViewProps = Omit<NativeCalendarViewProps, 'type'>;

export const CalendarView: React.FC<CalendarViewProps> = (props: CalendarViewProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.CalendarView" {...props} />
    );
};
export type CalendarViewDayItemProps = Omit<NativeCalendarViewDayItemProps, 'type'>;

export const CalendarViewDayItem: React.FC<CalendarViewDayItemProps> = (props: CalendarViewDayItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.CalendarViewDayItem" {...props} />
    );
};
export type CanvasProps = Omit<NativeCanvasProps, 'type'>;

export const Canvas: React.FC<CanvasProps> = (props: CanvasProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Canvas" {...props} />
    );
};
export type CaptureElementProps = Omit<NativeCaptureElementProps, 'type'>;

export const CaptureElement: React.FC<CaptureElementProps> = (props: CaptureElementProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.CaptureElement" {...props} />
    );
};
export type CheckBoxProps = Omit<NativeCheckBoxProps, 'type'>;

export const CheckBox: React.FC<CheckBoxProps> = (props: CheckBoxProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.CheckBox" {...props} />
    );
};
export type ColorPickerProps = Omit<NativeColorPickerProps, 'type'>;

export const ColorPicker: React.FC<ColorPickerProps> = (props: ColorPickerProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ColorPicker" {...props} />
    );
};
export type ComboBoxProps = Omit<NativeComboBoxProps, 'type'>;

export const ComboBox: React.FC<ComboBoxProps> = (props: ComboBoxProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ComboBox" {...props} />
    );
};
export type ComboBoxItemProps = Omit<NativeComboBoxItemProps, 'type'>;

export const ComboBoxItem: React.FC<ComboBoxItemProps> = (props: ComboBoxItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ComboBoxItem" {...props} />
    );
};
export type CommandBarProps = Omit<NativeCommandBarProps, 'type'>;

export const CommandBar: React.FC<CommandBarProps> = (props: CommandBarProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.CommandBar" {...props} />
    );
};
export type CommandBarFlyoutProps = Omit<NativeCommandBarFlyoutProps, 'type'>;

export const CommandBarFlyout: React.FC<CommandBarFlyoutProps> = (props: CommandBarFlyoutProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.CommandBarFlyout" {...props} />
    );
};
export type CommandBarOverflowPresenterProps = Omit<NativeCommandBarOverflowPresenterProps, 'type'>;

export const CommandBarOverflowPresenter: React.FC<CommandBarOverflowPresenterProps> = (props: CommandBarOverflowPresenterProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.CommandBarOverflowPresenter" {...props} />
    );
};
export type ContentDialogProps = Omit<NativeContentDialogProps, 'type'>;

export const ContentDialog: React.FC<ContentDialogProps> = (props: ContentDialogProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ContentDialog" {...props} />
    );
};
export type ContentPresenterProps = Omit<NativeContentPresenterProps, 'type'>;

export const ContentPresenter: React.FC<ContentPresenterProps> = (props: ContentPresenterProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ContentPresenter" {...props} />
    );
};
export type DatePickerProps = Omit<NativeDatePickerProps, 'type'>;

export const DatePicker: React.FC<DatePickerProps> = (props: DatePickerProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.DatePicker" {...props} />
    );
};
export type DatePickerFlyoutProps = Omit<NativeDatePickerFlyoutProps, 'type'>;

export const DatePickerFlyout: React.FC<DatePickerFlyoutProps> = (props: DatePickerFlyoutProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.DatePickerFlyout" {...props} />
    );
};
export type DropDownButtonProps = Omit<NativeDropDownButtonProps, 'type'>;

export const DropDownButton: React.FC<DropDownButtonProps> = (props: DropDownButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.DropDownButton" {...props} />
    );
};
export type FlipViewProps = Omit<NativeFlipViewProps, 'type'>;

export const FlipView: React.FC<FlipViewProps> = (props: FlipViewProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.FlipView" {...props} />
    );
};
export type FlipViewItemProps = Omit<NativeFlipViewItemProps, 'type'>;

export const FlipViewItem: React.FC<FlipViewItemProps> = (props: FlipViewItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.FlipViewItem" {...props} />
    );
};
export type FlyoutProps = Omit<NativeFlyoutProps, 'type'>;

export const Flyout: React.FC<FlyoutProps> = (props: FlyoutProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Flyout" {...props} />
    );
};
export type FlyoutPresenterProps = Omit<NativeFlyoutPresenterProps, 'type'>;

export const FlyoutPresenter: React.FC<FlyoutPresenterProps> = (props: FlyoutPresenterProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.FlyoutPresenter" {...props} />
    );
};
export type FontIconProps = Omit<NativeFontIconProps, 'type'>;

export const FontIcon: React.FC<FontIconProps> = (props: FontIconProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.FontIcon" {...props} />
    );
};
export type FrameProps = Omit<NativeFrameProps, 'type'>;

export const Frame: React.FC<FrameProps> = (props: FrameProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Frame" {...props} />
    );
};
export type GridProps = Omit<NativeGridProps, 'type'>;

export const Grid: React.FC<GridProps> = (props: GridProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Grid" {...props} />
    );
};
export type GridViewProps = Omit<NativeGridViewProps, 'type'>;

export const GridView: React.FC<GridViewProps> = (props: GridViewProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.GridView" {...props} />
    );
};
export type GridViewHeaderItemProps = Omit<NativeGridViewHeaderItemProps, 'type'>;

export const GridViewHeaderItem: React.FC<GridViewHeaderItemProps> = (props: GridViewHeaderItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.GridViewHeaderItem" {...props} />
    );
};
export type GridViewItemProps = Omit<NativeGridViewItemProps, 'type'>;

export const GridViewItem: React.FC<GridViewItemProps> = (props: GridViewItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.GridViewItem" {...props} />
    );
};
export type GroupItemProps = Omit<NativeGroupItemProps, 'type'>;

export const GroupItem: React.FC<GroupItemProps> = (props: GroupItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.GroupItem" {...props} />
    );
};
export type HandwritingViewProps = Omit<NativeHandwritingViewProps, 'type'>;

export const HandwritingView: React.FC<HandwritingViewProps> = (props: HandwritingViewProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.HandwritingView" {...props} />
    );
};
export type HubProps = Omit<NativeHubProps, 'type'>;

export const Hub: React.FC<HubProps> = (props: HubProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Hub" {...props} />
    );
};
export type HubSectionProps = Omit<NativeHubSectionProps, 'type'>;

export const HubSection: React.FC<HubSectionProps> = (props: HubSectionProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.HubSection" {...props} />
    );
};
export type HyperlinkButtonProps = Omit<NativeHyperlinkButtonProps, 'type'>;

export const HyperlinkButton: React.FC<HyperlinkButtonProps> = (props: HyperlinkButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.HyperlinkButton" {...props} />
    );
};
export type IconSourceElementProps = Omit<NativeIconSourceElementProps, 'type'>;

export const IconSourceElement: React.FC<IconSourceElementProps> = (props: IconSourceElementProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.IconSourceElement" {...props} />
    );
};
export type ImageProps = Omit<NativeImageProps, 'type'>;

export const Image: React.FC<ImageProps> = (props: ImageProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Image" {...props} />
    );
};
export type InkCanvasProps = Omit<NativeInkCanvasProps, 'type'>;

export const InkCanvas: React.FC<InkCanvasProps> = (props: InkCanvasProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.InkCanvas" {...props} />
    );
};
export type InkToolbarProps = Omit<NativeInkToolbarProps, 'type'>;

export const InkToolbar: React.FC<InkToolbarProps> = (props: InkToolbarProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.InkToolbar" {...props} />
    );
};
export type RadioButtonProps = Omit<NativeRadioButtonProps, 'type'>;

export const RadioButton: React.FC<RadioButtonProps> = (props: RadioButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.RadioButton" {...props} />
    );
};
export type InkToolbarBallpointPenButtonProps = Omit<NativeInkToolbarBallpointPenButtonProps, 'type'>;

export const InkToolbarBallpointPenButton: React.FC<InkToolbarBallpointPenButtonProps> = (props: InkToolbarBallpointPenButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton" {...props} />
    );
};
export type InkToolbarCustomPenButtonProps = Omit<NativeInkToolbarCustomPenButtonProps, 'type'>;

export const InkToolbarCustomPenButton: React.FC<InkToolbarCustomPenButtonProps> = (props: InkToolbarCustomPenButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.InkToolbarCustomPenButton" {...props} />
    );
};
export type InkToolbarCustomToggleButtonProps = Omit<NativeInkToolbarCustomToggleButtonProps, 'type'>;

export const InkToolbarCustomToggleButton: React.FC<InkToolbarCustomToggleButtonProps> = (props: InkToolbarCustomToggleButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton" {...props} />
    );
};
export type InkToolbarCustomToolButtonProps = Omit<NativeInkToolbarCustomToolButtonProps, 'type'>;

export const InkToolbarCustomToolButton: React.FC<InkToolbarCustomToolButtonProps> = (props: InkToolbarCustomToolButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.InkToolbarCustomToolButton" {...props} />
    );
};
export type InkToolbarEraserButtonProps = Omit<NativeInkToolbarEraserButtonProps, 'type'>;

export const InkToolbarEraserButton: React.FC<InkToolbarEraserButtonProps> = (props: InkToolbarEraserButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.InkToolbarEraserButton" {...props} />
    );
};
export type InkToolbarFlyoutItemProps = Omit<NativeInkToolbarFlyoutItemProps, 'type'>;

export const InkToolbarFlyoutItem: React.FC<InkToolbarFlyoutItemProps> = (props: InkToolbarFlyoutItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.InkToolbarFlyoutItem" {...props} />
    );
};
export type InkToolbarHighlighterButtonProps = Omit<NativeInkToolbarHighlighterButtonProps, 'type'>;

export const InkToolbarHighlighterButton: React.FC<InkToolbarHighlighterButtonProps> = (props: InkToolbarHighlighterButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.InkToolbarHighlighterButton" {...props} />
    );
};
export type InkToolbarPenConfigurationControlProps = Omit<NativeInkToolbarPenConfigurationControlProps, 'type'>;

export const InkToolbarPenConfigurationControl: React.FC<InkToolbarPenConfigurationControlProps> = (props: InkToolbarPenConfigurationControlProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.InkToolbarPenConfigurationControl" {...props} />
    );
};
export type InkToolbarPencilButtonProps = Omit<NativeInkToolbarPencilButtonProps, 'type'>;

export const InkToolbarPencilButton: React.FC<InkToolbarPencilButtonProps> = (props: InkToolbarPencilButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.InkToolbarPencilButton" {...props} />
    );
};
export type InkToolbarRulerButtonProps = Omit<NativeInkToolbarRulerButtonProps, 'type'>;

export const InkToolbarRulerButton: React.FC<InkToolbarRulerButtonProps> = (props: InkToolbarRulerButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.InkToolbarRulerButton" {...props} />
    );
};
export type InkToolbarStencilButtonProps = Omit<NativeInkToolbarStencilButtonProps, 'type'>;

export const InkToolbarStencilButton: React.FC<InkToolbarStencilButtonProps> = (props: InkToolbarStencilButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.InkToolbarStencilButton" {...props} />
    );
};
export type ItemsPresenterProps = Omit<NativeItemsPresenterProps, 'type'>;

export const ItemsPresenter: React.FC<ItemsPresenterProps> = (props: ItemsPresenterProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ItemsPresenter" {...props} />
    );
};
export type ItemsStackPanelProps = Omit<NativeItemsStackPanelProps, 'type'>;

export const ItemsStackPanel: React.FC<ItemsStackPanelProps> = (props: ItemsStackPanelProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ItemsStackPanel" {...props} />
    );
};
export type ItemsWrapGridProps = Omit<NativeItemsWrapGridProps, 'type'>;

export const ItemsWrapGrid: React.FC<ItemsWrapGridProps> = (props: ItemsWrapGridProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ItemsWrapGrid" {...props} />
    );
};
export type ListBoxProps = Omit<NativeListBoxProps, 'type'>;

export const ListBox: React.FC<ListBoxProps> = (props: ListBoxProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ListBox" {...props} />
    );
};
export type ListBoxItemProps = Omit<NativeListBoxItemProps, 'type'>;

export const ListBoxItem: React.FC<ListBoxItemProps> = (props: ListBoxItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ListBoxItem" {...props} />
    );
};
export type ListPickerFlyoutProps = Omit<NativeListPickerFlyoutProps, 'type'>;

export const ListPickerFlyout: React.FC<ListPickerFlyoutProps> = (props: ListPickerFlyoutProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ListPickerFlyout" {...props} />
    );
};
export type ListViewProps = Omit<NativeListViewProps, 'type'>;

export const ListView: React.FC<ListViewProps> = (props: ListViewProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ListView" {...props} />
    );
};
export type ListViewHeaderItemProps = Omit<NativeListViewHeaderItemProps, 'type'>;

export const ListViewHeaderItem: React.FC<ListViewHeaderItemProps> = (props: ListViewHeaderItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ListViewHeaderItem" {...props} />
    );
};
export type ListViewItemProps = Omit<NativeListViewItemProps, 'type'>;

export const ListViewItem: React.FC<ListViewItemProps> = (props: ListViewItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ListViewItem" {...props} />
    );
};
export type MapControlProps = Omit<NativeMapControlProps, 'type'>;

export const MapControl: React.FC<MapControlProps> = (props: MapControlProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Maps.MapControl" {...props} />
    );
};
export type MediaElementProps = Omit<NativeMediaElementProps, 'type'>;

export const MediaElement: React.FC<MediaElementProps> = (props: MediaElementProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.MediaElement" {...props} />
    );
};
export type MediaPlayerElementProps = Omit<NativeMediaPlayerElementProps, 'type'>;

export const MediaPlayerElement: React.FC<MediaPlayerElementProps> = (props: MediaPlayerElementProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.MediaPlayerElement" {...props} />
    );
};
export type MediaPlayerPresenterProps = Omit<NativeMediaPlayerPresenterProps, 'type'>;

export const MediaPlayerPresenter: React.FC<MediaPlayerPresenterProps> = (props: MediaPlayerPresenterProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.MediaPlayerPresenter" {...props} />
    );
};
export type MediaTransportControlsProps = Omit<NativeMediaTransportControlsProps, 'type'>;

export const MediaTransportControls: React.FC<MediaTransportControlsProps> = (props: MediaTransportControlsProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.MediaTransportControls" {...props} />
    );
};
export type MenuBarProps = Omit<NativeMenuBarProps, 'type'>;

export const MenuBar: React.FC<MenuBarProps> = (props: MenuBarProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.MenuBar" {...props} />
    );
};
export type MenuBarItemProps = Omit<NativeMenuBarItemProps, 'type'>;

export const MenuBarItem: React.FC<MenuBarItemProps> = (props: MenuBarItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.MenuBarItem" {...props} />
    );
};
export type MenuFlyoutProps = Omit<NativeMenuFlyoutProps, 'type'>;

export const MenuFlyout: React.FC<MenuFlyoutProps> = (props: MenuFlyoutProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.MenuFlyout" {...props} />
    );
};
export type MenuBarItemFlyoutProps = Omit<NativeMenuBarItemFlyoutProps, 'type'>;

export const MenuBarItemFlyout: React.FC<MenuBarItemFlyoutProps> = (props: MenuBarItemFlyoutProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.MenuBarItemFlyout" {...props} />
    );
};
export type MenuFlyoutItemProps = Omit<NativeMenuFlyoutItemProps, 'type'>;

export const MenuFlyoutItem: React.FC<MenuFlyoutItemProps> = (props: MenuFlyoutItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.MenuFlyoutItem" {...props} />
    );
};
export type MenuFlyoutPresenterProps = Omit<NativeMenuFlyoutPresenterProps, 'type'>;

export const MenuFlyoutPresenter: React.FC<MenuFlyoutPresenterProps> = (props: MenuFlyoutPresenterProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.MenuFlyoutPresenter" {...props} />
    );
};
export type MenuFlyoutSeparatorProps = Omit<NativeMenuFlyoutSeparatorProps, 'type'>;

export const MenuFlyoutSeparator: React.FC<MenuFlyoutSeparatorProps> = (props: MenuFlyoutSeparatorProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.MenuFlyoutSeparator" {...props} />
    );
};
export type MenuFlyoutSubItemProps = Omit<NativeMenuFlyoutSubItemProps, 'type'>;

export const MenuFlyoutSubItem: React.FC<MenuFlyoutSubItemProps> = (props: MenuFlyoutSubItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.MenuFlyoutSubItem" {...props} />
    );
};
export type NavigationViewProps = Omit<NativeNavigationViewProps, 'type'>;

export const NavigationView: React.FC<NavigationViewProps> = (props: NavigationViewProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.NavigationView" {...props} />
    );
};
export type NavigationViewItemProps = Omit<NativeNavigationViewItemProps, 'type'>;

export const NavigationViewItem: React.FC<NavigationViewItemProps> = (props: NavigationViewItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.NavigationViewItem" {...props} />
    );
};
export type NavigationViewItemHeaderProps = Omit<NativeNavigationViewItemHeaderProps, 'type'>;

export const NavigationViewItemHeader: React.FC<NavigationViewItemHeaderProps> = (props: NavigationViewItemHeaderProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.NavigationViewItemHeader" {...props} />
    );
};
export type NavigationViewItemSeparatorProps = Omit<NativeNavigationViewItemSeparatorProps, 'type'>;

export const NavigationViewItemSeparator: React.FC<NavigationViewItemSeparatorProps> = (props: NavigationViewItemSeparatorProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.NavigationViewItemSeparator" {...props} />
    );
};
export type NavigationViewListProps = Omit<NativeNavigationViewListProps, 'type'>;

export const NavigationViewList: React.FC<NavigationViewListProps> = (props: NavigationViewListProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.NavigationViewList" {...props} />
    );
};
export type UserControlProps = Omit<NativeUserControlProps, 'type'>;

export const UserControl: React.FC<UserControlProps> = (props: UserControlProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.UserControl" {...props} />
    );
};
export type PageProps = Omit<NativePageProps, 'type'>;

export const Page: React.FC<PageProps> = (props: PageProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Page" {...props} />
    );
};
export type ParallaxViewProps = Omit<NativeParallaxViewProps, 'type'>;

export const ParallaxView: React.FC<ParallaxViewProps> = (props: ParallaxViewProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ParallaxView" {...props} />
    );
};
export type PasswordBoxProps = Omit<NativePasswordBoxProps, 'type'>;

export const PasswordBox: React.FC<PasswordBoxProps> = (props: PasswordBoxProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.PasswordBox" {...props} />
    );
};
export type PathIconProps = Omit<NativePathIconProps, 'type'>;

export const PathIcon: React.FC<PathIconProps> = (props: PathIconProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.PathIcon" {...props} />
    );
};
export type PersonPictureProps = Omit<NativePersonPictureProps, 'type'>;

export const PersonPicture: React.FC<PersonPictureProps> = (props: PersonPictureProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.PersonPicture" {...props} />
    );
};
export type PickerFlyoutProps = Omit<NativePickerFlyoutProps, 'type'>;

export const PickerFlyout: React.FC<PickerFlyoutProps> = (props: PickerFlyoutProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.PickerFlyout" {...props} />
    );
};
export type PivotProps = Omit<NativePivotProps, 'type'>;

export const Pivot: React.FC<PivotProps> = (props: PivotProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Pivot" {...props} />
    );
};
export type PivotItemProps = Omit<NativePivotItemProps, 'type'>;

export const PivotItem: React.FC<PivotItemProps> = (props: PivotItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.PivotItem" {...props} />
    );
};
export type CalendarPanelProps = Omit<NativeCalendarPanelProps, 'type'>;

export const CalendarPanel: React.FC<CalendarPanelProps> = (props: CalendarPanelProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Primitives.CalendarPanel" {...props} />
    );
};
export type CarouselPanelProps = Omit<NativeCarouselPanelProps, 'type'>;

export const CarouselPanel: React.FC<CarouselPanelProps> = (props: CarouselPanelProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Primitives.CarouselPanel" {...props} />
    );
};
export type SliderProps = Omit<NativeSliderProps, 'type'>;

export const Slider: React.FC<SliderProps> = (props: SliderProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Slider" {...props} />
    );
};
export type ColorPickerSliderProps = Omit<NativeColorPickerSliderProps, 'type'>;

export const ColorPickerSlider: React.FC<ColorPickerSliderProps> = (props: ColorPickerSliderProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider" {...props} />
    );
};
export type ColorSpectrumProps = Omit<NativeColorSpectrumProps, 'type'>;

export const ColorSpectrum: React.FC<ColorSpectrumProps> = (props: ColorSpectrumProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Primitives.ColorSpectrum" {...props} />
    );
};
export type CommandBarFlyoutCommandBarProps = Omit<NativeCommandBarFlyoutCommandBarProps, 'type'>;

export const CommandBarFlyoutCommandBar: React.FC<CommandBarFlyoutCommandBarProps> = (props: CommandBarFlyoutCommandBarProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar" {...props} />
    );
};
export type GridViewItemPresenterProps = Omit<NativeGridViewItemPresenterProps, 'type'>;

export const GridViewItemPresenter: React.FC<GridViewItemPresenterProps> = (props: GridViewItemPresenterProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter" {...props} />
    );
};
export type ListViewItemPresenterProps = Omit<NativeListViewItemPresenterProps, 'type'>;

export const ListViewItemPresenter: React.FC<ListViewItemPresenterProps> = (props: ListViewItemPresenterProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter" {...props} />
    );
};
export type NavigationViewItemPresenterProps = Omit<NativeNavigationViewItemPresenterProps, 'type'>;

export const NavigationViewItemPresenter: React.FC<NavigationViewItemPresenterProps> = (props: NavigationViewItemPresenterProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter" {...props} />
    );
};
export type PivotHeaderItemProps = Omit<NativePivotHeaderItemProps, 'type'>;

export const PivotHeaderItem: React.FC<PivotHeaderItemProps> = (props: PivotHeaderItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem" {...props} />
    );
};
export type PivotHeaderPanelProps = Omit<NativePivotHeaderPanelProps, 'type'>;

export const PivotHeaderPanel: React.FC<PivotHeaderPanelProps> = (props: PivotHeaderPanelProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel" {...props} />
    );
};
export type PivotPanelProps = Omit<NativePivotPanelProps, 'type'>;

export const PivotPanel: React.FC<PivotPanelProps> = (props: PivotPanelProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Primitives.PivotPanel" {...props} />
    );
};
export type PopupProps = Omit<NativePopupProps, 'type'>;

export const Popup: React.FC<PopupProps> = (props: PopupProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Primitives.Popup" {...props} />
    );
};
export type RepeatButtonProps = Omit<NativeRepeatButtonProps, 'type'>;

export const RepeatButton: React.FC<RepeatButtonProps> = (props: RepeatButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Primitives.RepeatButton" {...props} />
    );
};
export type ScrollBarProps = Omit<NativeScrollBarProps, 'type'>;

export const ScrollBar: React.FC<ScrollBarProps> = (props: ScrollBarProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Primitives.ScrollBar" {...props} />
    );
};
export type ThumbProps = Omit<NativeThumbProps, 'type'>;

export const Thumb: React.FC<ThumbProps> = (props: ThumbProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Primitives.Thumb" {...props} />
    );
};
export type TickBarProps = Omit<NativeTickBarProps, 'type'>;

export const TickBar: React.FC<TickBarProps> = (props: TickBarProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Primitives.TickBar" {...props} />
    );
};
export type ProgressBarProps = Omit<NativeProgressBarProps, 'type'>;

export const ProgressBar: React.FC<ProgressBarProps> = (props: ProgressBarProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ProgressBar" {...props} />
    );
};
export type ProgressRingProps = Omit<NativeProgressRingProps, 'type'>;

export const ProgressRing: React.FC<ProgressRingProps> = (props: ProgressRingProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ProgressRing" {...props} />
    );
};
export type RatingControlProps = Omit<NativeRatingControlProps, 'type'>;

export const RatingControl: React.FC<RatingControlProps> = (props: RatingControlProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.RatingControl" {...props} />
    );
};
export type RefreshContainerProps = Omit<NativeRefreshContainerProps, 'type'>;

export const RefreshContainer: React.FC<RefreshContainerProps> = (props: RefreshContainerProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.RefreshContainer" {...props} />
    );
};
export type RefreshVisualizerProps = Omit<NativeRefreshVisualizerProps, 'type'>;

export const RefreshVisualizer: React.FC<RefreshVisualizerProps> = (props: RefreshVisualizerProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.RefreshVisualizer" {...props} />
    );
};
export type RelativePanelProps = Omit<NativeRelativePanelProps, 'type'>;

export const RelativePanel: React.FC<RelativePanelProps> = (props: RelativePanelProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.RelativePanel" {...props} />
    );
};
export type RichEditBoxProps = Omit<NativeRichEditBoxProps, 'type'>;

export const RichEditBox: React.FC<RichEditBoxProps> = (props: RichEditBoxProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.RichEditBox" {...props} />
    );
};
export type RichTextBlockProps = Omit<NativeRichTextBlockProps, 'type'>;

export const RichTextBlock: React.FC<RichTextBlockProps> = (props: RichTextBlockProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.RichTextBlock" {...props} />
    );
};
export type RichTextBlockOverflowProps = Omit<NativeRichTextBlockOverflowProps, 'type'>;

export const RichTextBlockOverflow: React.FC<RichTextBlockOverflowProps> = (props: RichTextBlockOverflowProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.RichTextBlockOverflow" {...props} />
    );
};
export type ScrollContentPresenterProps = Omit<NativeScrollContentPresenterProps, 'type'>;

export const ScrollContentPresenter: React.FC<ScrollContentPresenterProps> = (props: ScrollContentPresenterProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ScrollContentPresenter" {...props} />
    );
};
export type ScrollViewerProps = Omit<NativeScrollViewerProps, 'type'>;

export const ScrollViewer: React.FC<ScrollViewerProps> = (props: ScrollViewerProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ScrollViewer" {...props} />
    );
};
export type SearchBoxProps = Omit<NativeSearchBoxProps, 'type'>;

export const SearchBox: React.FC<SearchBoxProps> = (props: SearchBoxProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.SearchBox" {...props} />
    );
};
export type SemanticZoomProps = Omit<NativeSemanticZoomProps, 'type'>;

export const SemanticZoom: React.FC<SemanticZoomProps> = (props: SemanticZoomProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.SemanticZoom" {...props} />
    );
};
export type SettingsFlyoutProps = Omit<NativeSettingsFlyoutProps, 'type'>;

export const SettingsFlyout: React.FC<SettingsFlyoutProps> = (props: SettingsFlyoutProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.SettingsFlyout" {...props} />
    );
};
export type SplitButtonProps = Omit<NativeSplitButtonProps, 'type'>;

export const SplitButton: React.FC<SplitButtonProps> = (props: SplitButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.SplitButton" {...props} />
    );
};
export type SplitViewProps = Omit<NativeSplitViewProps, 'type'>;

export const SplitView: React.FC<SplitViewProps> = (props: SplitViewProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.SplitView" {...props} />
    );
};
export type StackPanelProps = Omit<NativeStackPanelProps, 'type'>;

export const StackPanel: React.FC<StackPanelProps> = (props: StackPanelProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.StackPanel" {...props} />
    );
};
export type SwapChainBackgroundPanelProps = Omit<NativeSwapChainBackgroundPanelProps, 'type'>;

export const SwapChainBackgroundPanel: React.FC<SwapChainBackgroundPanelProps> = (props: SwapChainBackgroundPanelProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.SwapChainBackgroundPanel" {...props} />
    );
};
export type SwapChainPanelProps = Omit<NativeSwapChainPanelProps, 'type'>;

export const SwapChainPanel: React.FC<SwapChainPanelProps> = (props: SwapChainPanelProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.SwapChainPanel" {...props} />
    );
};
export type SwipeControlProps = Omit<NativeSwipeControlProps, 'type'>;

export const SwipeControl: React.FC<SwipeControlProps> = (props: SwipeControlProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.SwipeControl" {...props} />
    );
};
export type SymbolIconProps = Omit<NativeSymbolIconProps, 'type'>;

export const SymbolIcon: React.FC<SymbolIconProps> = (props: SymbolIconProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.SymbolIcon" {...props} />
    );
};
export type TextBlockProps = Omit<NativeTextBlockProps, 'type'>;

export const TextBlock: React.FC<TextBlockProps> = (props: TextBlockProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.TextBlock" {...props} />
    );
};
export type TextBoxProps = Omit<NativeTextBoxProps, 'type'>;

export const TextBox: React.FC<TextBoxProps> = (props: TextBoxProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.TextBox" {...props} />
    );
};
export type TextCommandBarFlyoutProps = Omit<NativeTextCommandBarFlyoutProps, 'type'>;

export const TextCommandBarFlyout: React.FC<TextCommandBarFlyoutProps> = (props: TextCommandBarFlyoutProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.TextCommandBarFlyout" {...props} />
    );
};
export type TimePickerProps = Omit<NativeTimePickerProps, 'type'>;

export const TimePicker: React.FC<TimePickerProps> = (props: TimePickerProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.TimePicker" {...props} />
    );
};
export type TimePickerFlyoutProps = Omit<NativeTimePickerFlyoutProps, 'type'>;

export const TimePickerFlyout: React.FC<TimePickerFlyoutProps> = (props: TimePickerFlyoutProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.TimePickerFlyout" {...props} />
    );
};
export type ToggleMenuFlyoutItemProps = Omit<NativeToggleMenuFlyoutItemProps, 'type'>;

export const ToggleMenuFlyoutItem: React.FC<ToggleMenuFlyoutItemProps> = (props: ToggleMenuFlyoutItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem" {...props} />
    );
};
export type ToggleSplitButtonProps = Omit<NativeToggleSplitButtonProps, 'type'>;

export const ToggleSplitButton: React.FC<ToggleSplitButtonProps> = (props: ToggleSplitButtonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ToggleSplitButton" {...props} />
    );
};
export type ToggleSwitchProps = Omit<NativeToggleSwitchProps, 'type'>;

export const ToggleSwitch: React.FC<ToggleSwitchProps> = (props: ToggleSwitchProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ToggleSwitch" {...props} />
    );
};
export type ToolTipProps = Omit<NativeToolTipProps, 'type'>;

export const ToolTip: React.FC<ToolTipProps> = (props: ToolTipProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.ToolTip" {...props} />
    );
};
export type TreeViewProps = Omit<NativeTreeViewProps, 'type'>;

export const TreeView: React.FC<TreeViewProps> = (props: TreeViewProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.TreeView" {...props} />
    );
};
export type TreeViewItemProps = Omit<NativeTreeViewItemProps, 'type'>;

export const TreeViewItem: React.FC<TreeViewItemProps> = (props: TreeViewItemProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.TreeViewItem" {...props} />
    );
};
export type TreeViewListProps = Omit<NativeTreeViewListProps, 'type'>;

export const TreeViewList: React.FC<TreeViewListProps> = (props: TreeViewListProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.TreeViewList" {...props} />
    );
};
export type TwoPaneViewProps = Omit<NativeTwoPaneViewProps, 'type'>;

export const TwoPaneView: React.FC<TwoPaneViewProps> = (props: TwoPaneViewProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.TwoPaneView" {...props} />
    );
};
export type VariableSizedWrapGridProps = Omit<NativeVariableSizedWrapGridProps, 'type'>;

export const VariableSizedWrapGrid: React.FC<VariableSizedWrapGridProps> = (props: VariableSizedWrapGridProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.VariableSizedWrapGrid" {...props} />
    );
};
export type ViewboxProps = Omit<NativeViewboxProps, 'type'>;

export const Viewbox: React.FC<ViewboxProps> = (props: ViewboxProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.Viewbox" {...props} />
    );
};
export type VirtualizingStackPanelProps = Omit<NativeVirtualizingStackPanelProps, 'type'>;

export const VirtualizingStackPanel: React.FC<VirtualizingStackPanelProps> = (props: VirtualizingStackPanelProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.VirtualizingStackPanel" {...props} />
    );
};
export type WebViewProps = Omit<NativeWebViewProps, 'type'>;

export const WebView: React.FC<WebViewProps> = (props: WebViewProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.WebView" {...props} />
    );
};
export type WrapGridProps = Omit<NativeWrapGridProps, 'type'>;

export const WrapGrid: React.FC<WrapGridProps> = (props: WrapGridProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Controls.WrapGrid" {...props} />
    );
};
export type SpanProps = Omit<NativeSpanProps, 'type'>;

export const Span: React.FC<SpanProps> = (props: SpanProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Documents.Span" {...props} />
    );
};
export type BoldProps = Omit<NativeBoldProps, 'type'>;

export const Bold: React.FC<BoldProps> = (props: BoldProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Documents.Bold" {...props} />
    );
};
export type ContentLinkProps = Omit<NativeContentLinkProps, 'type'>;

export const ContentLink: React.FC<ContentLinkProps> = (props: ContentLinkProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Documents.ContentLink" {...props} />
    );
};
export type GlyphsProps = Omit<NativeGlyphsProps, 'type'>;

export const Glyphs: React.FC<GlyphsProps> = (props: GlyphsProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Documents.Glyphs" {...props} />
    );
};
export type HyperlinkProps = Omit<NativeHyperlinkProps, 'type'>;

export const Hyperlink: React.FC<HyperlinkProps> = (props: HyperlinkProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Documents.Hyperlink" {...props} />
    );
};
export type InlineUIContainerProps = Omit<NativeInlineUIContainerProps, 'type'>;

export const InlineUIContainer: React.FC<InlineUIContainerProps> = (props: InlineUIContainerProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Documents.InlineUIContainer" {...props} />
    );
};
export type ItalicProps = Omit<NativeItalicProps, 'type'>;

export const Italic: React.FC<ItalicProps> = (props: ItalicProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Documents.Italic" {...props} />
    );
};
export type LineBreakProps = Omit<NativeLineBreakProps, 'type'>;

export const LineBreak: React.FC<LineBreakProps> = (props: LineBreakProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Documents.LineBreak" {...props} />
    );
};
export type ParagraphProps = Omit<NativeParagraphProps, 'type'>;

export const Paragraph: React.FC<ParagraphProps> = (props: ParagraphProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Documents.Paragraph" {...props} />
    );
};
export type RunProps = Omit<NativeRunProps, 'type'>;

export const Run: React.FC<RunProps> = (props: RunProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Documents.Run" {...props} />
    );
};
export type UnderlineProps = Omit<NativeUnderlineProps, 'type'>;

export const Underline: React.FC<UnderlineProps> = (props: UnderlineProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Documents.Underline" {...props} />
    );
};
export type EllipseProps = Omit<NativeEllipseProps, 'type'>;

export const Ellipse: React.FC<EllipseProps> = (props: EllipseProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Shapes.Ellipse" {...props} />
    );
};
export type LineProps = Omit<NativeLineProps, 'type'>;

export const Line: React.FC<LineProps> = (props: LineProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Shapes.Line" {...props} />
    );
};
export type PathProps = Omit<NativePathProps, 'type'>;

export const Path: React.FC<PathProps> = (props: PathProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Shapes.Path" {...props} />
    );
};
export type PolygonProps = Omit<NativePolygonProps, 'type'>;

export const Polygon: React.FC<PolygonProps> = (props: PolygonProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Shapes.Polygon" {...props} />
    );
};
export type PolylineProps = Omit<NativePolylineProps, 'type'>;

export const Polyline: React.FC<PolylineProps> = (props: PolylineProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Shapes.Polyline" {...props} />
    );
};
export type RectangleProps = Omit<NativeRectangleProps, 'type'>;

export const Rectangle: React.FC<RectangleProps> = (props: RectangleProps) => {
    return (
        <NativeXamlControl type="Windows.UI.Xaml.Shapes.Rectangle" {...props} />
    );
};
