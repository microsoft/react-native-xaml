
/*************************************************************
THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT MODIFY MANUALLY
**************************************************************/

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
    NativeKeyboardAcceleratorProps,
    NativeEllipseProps,
    NativeLineProps,
    NativePathProps,
    NativePolygonProps,
    NativePolylineProps,
    NativeRectangleProps,
} from './Props';

import type { NativeWinUI } from './Props';

import React from 'react';
import { NativeXamlControl } from './NativeXamlControl';
import { findNodeHandle, UIManager } from 'react-native';

import type { Point } from './Props';

const xamlCommands = UIManager.getViewManagerConfig('XamlControl').Commands;

export namespace WinUI {
export type AnimatedIconProps = Omit<NativeWinUI.NativeAnimatedIconProps, 'type'>;

export class AnimatedIcon extends React.Component<AnimatedIconProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.AnimatedIcon' />;
  }
};
}
export namespace WinUI {
export type AnimatedVisualPlayerProps = Omit<NativeWinUI.NativeAnimatedVisualPlayerProps, 'type'>;

export class AnimatedVisualPlayer extends React.Component<AnimatedVisualPlayerProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.AnimatedVisualPlayer' />;
  }
};
}
export namespace WinUI {
export type BreadcrumbBarProps = Omit<NativeWinUI.NativeBreadcrumbBarProps, 'type'>;

export class BreadcrumbBar extends React.Component<BreadcrumbBarProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.BreadcrumbBar' />;
  }
};
}
export namespace WinUI {
export type BreadcrumbBarItemProps = Omit<NativeWinUI.NativeBreadcrumbBarItemProps, 'type'>;

export class BreadcrumbBarItem extends React.Component<BreadcrumbBarItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.BreadcrumbBarItem' />;
  }
};
}
export namespace WinUI {
export type ColorPickerProps = Omit<NativeWinUI.NativeColorPickerProps, 'type'>;

export class ColorPicker extends React.Component<ColorPickerProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.ColorPicker' />;
  }
};
}
export namespace WinUI {
export type CommandBarFlyoutProps = Omit<NativeWinUI.NativeCommandBarFlyoutProps, 'type'>;

export class CommandBarFlyout extends React.Component<CommandBarFlyoutProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.CommandBarFlyout' />;
  }
};
}
export namespace WinUI {
export type DropDownButtonProps = Omit<NativeWinUI.NativeDropDownButtonProps, 'type'>;

export class DropDownButton extends React.Component<DropDownButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.DropDownButton' />;
  }
};
}
export namespace WinUI {
export type ExpanderProps = Omit<NativeWinUI.NativeExpanderProps, 'type'>;

export class Expander extends React.Component<ExpanderProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.Expander' />;
  }
};
}
export namespace WinUI {
export type ImageIconProps = Omit<NativeWinUI.NativeImageIconProps, 'type'>;

export class ImageIcon extends React.Component<ImageIconProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.ImageIcon' />;
  }
};
}
export namespace WinUI {
export type InfoBarProps = Omit<NativeWinUI.NativeInfoBarProps, 'type'>;

export class InfoBar extends React.Component<InfoBarProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.InfoBar' />;
  }
};
}
export namespace WinUI {
export type ItemsRepeaterProps = Omit<NativeWinUI.NativeItemsRepeaterProps, 'type'>;

export class ItemsRepeater extends React.Component<ItemsRepeaterProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.ItemsRepeater' />;
  }
};
}
export namespace WinUI {
export type ItemsRepeaterScrollHostProps = Omit<NativeWinUI.NativeItemsRepeaterScrollHostProps, 'type'>;

export class ItemsRepeaterScrollHost extends React.Component<ItemsRepeaterScrollHostProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.ItemsRepeaterScrollHost' />;
  }
};
}
export namespace WinUI {
export type MenuBarProps = Omit<NativeWinUI.NativeMenuBarProps, 'type'>;

export class MenuBar extends React.Component<MenuBarProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.MenuBar' />;
  }
};
}
export namespace WinUI {
export type MenuBarItemProps = Omit<NativeWinUI.NativeMenuBarItemProps, 'type'>;

export class MenuBarItem extends React.Component<MenuBarItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.MenuBarItem' />;
  }
};
}
export namespace WinUI {
export type MenuBarItemFlyoutProps = Omit<NativeWinUI.NativeMenuBarItemFlyoutProps, 'type'>;

export class MenuBarItemFlyout extends React.Component<MenuBarItemFlyoutProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.MenuBarItemFlyout' />;
  }
};
}
export namespace WinUI {
export type NavigationViewProps = Omit<NativeWinUI.NativeNavigationViewProps, 'type'>;

export class NavigationView extends React.Component<NavigationViewProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.NavigationView' />;
  }
};
}
export namespace WinUI {
export type NavigationViewItemProps = Omit<NativeWinUI.NativeNavigationViewItemProps, 'type'>;

export class NavigationViewItem extends React.Component<NavigationViewItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.NavigationViewItem' />;
  }
};
}
export namespace WinUI {
export type NavigationViewItemHeaderProps = Omit<NativeWinUI.NativeNavigationViewItemHeaderProps, 'type'>;

export class NavigationViewItemHeader extends React.Component<NavigationViewItemHeaderProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.NavigationViewItemHeader' />;
  }
};
}
export namespace WinUI {
export type NavigationViewItemSeparatorProps = Omit<NativeWinUI.NativeNavigationViewItemSeparatorProps, 'type'>;

export class NavigationViewItemSeparator extends React.Component<NavigationViewItemSeparatorProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.NavigationViewItemSeparator' />;
  }
};
}
export namespace WinUI {
export type NumberBoxProps = Omit<NativeWinUI.NativeNumberBoxProps, 'type'>;

export class NumberBox extends React.Component<NumberBoxProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.NumberBox' />;
  }
};
}
export namespace WinUI {
export type ParallaxViewProps = Omit<NativeWinUI.NativeParallaxViewProps, 'type'>;

export class ParallaxView extends React.Component<ParallaxViewProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.ParallaxView' />;
  }
};
}
export namespace WinUI {
export type PersonPictureProps = Omit<NativeWinUI.NativePersonPictureProps, 'type'>;

export class PersonPicture extends React.Component<PersonPictureProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.PersonPicture' />;
  }
};
}
export namespace WinUI {
export type PipsPagerProps = Omit<NativeWinUI.NativePipsPagerProps, 'type'>;

export class PipsPager extends React.Component<PipsPagerProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.PipsPager' />;
  }
};
}
export namespace WinUI {
export type ColorPickerSliderProps = Omit<NativeWinUI.NativeColorPickerSliderProps, 'type'>;

export class ColorPickerSlider extends React.Component<ColorPickerSliderProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.Primitives.ColorPickerSlider' />;
  }
};
}
export namespace WinUI {
export type ColorSpectrumProps = Omit<NativeWinUI.NativeColorSpectrumProps, 'type'>;

export class ColorSpectrum extends React.Component<ColorSpectrumProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.Primitives.ColorSpectrum' />;
  }
};
}
export namespace WinUI {
export type CommandBarFlyoutCommandBarProps = Omit<NativeWinUI.NativeCommandBarFlyoutCommandBarProps, 'type'>;

export class CommandBarFlyoutCommandBar extends React.Component<CommandBarFlyoutCommandBarProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar' />;
  }
};
}
export namespace WinUI {
export type InfoBarPanelProps = Omit<NativeWinUI.NativeInfoBarPanelProps, 'type'>;

export class InfoBarPanel extends React.Component<InfoBarPanelProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.Primitives.InfoBarPanel' />;
  }
};
}
export namespace WinUI {
export type MonochromaticOverlayPresenterProps = Omit<NativeWinUI.NativeMonochromaticOverlayPresenterProps, 'type'>;

export class MonochromaticOverlayPresenter extends React.Component<MonochromaticOverlayPresenterProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.Primitives.MonochromaticOverlayPresenter' />;
  }
};
}
export namespace WinUI {
export type NavigationViewItemPresenterProps = Omit<NativeWinUI.NativeNavigationViewItemPresenterProps, 'type'>;

export class NavigationViewItemPresenter extends React.Component<NavigationViewItemPresenterProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter' />;
  }
};
}
export namespace WinUI {
export type TabViewListViewProps = Omit<NativeWinUI.NativeTabViewListViewProps, 'type'>;

export class TabViewListView extends React.Component<TabViewListViewProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.Primitives.TabViewListView' />;
  }
};
}
export namespace WinUI {
export type ProgressBarProps = Omit<NativeWinUI.NativeProgressBarProps, 'type'>;

export class ProgressBar extends React.Component<ProgressBarProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.ProgressBar' />;
  }
};
}
export namespace WinUI {
export type ProgressRingProps = Omit<NativeWinUI.NativeProgressRingProps, 'type'>;

export class ProgressRing extends React.Component<ProgressRingProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.ProgressRing' />;
  }
};
}
export namespace WinUI {
export type RadioButtonsProps = Omit<NativeWinUI.NativeRadioButtonsProps, 'type'>;

export class RadioButtons extends React.Component<RadioButtonsProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.RadioButtons' />;
  }
};
}
export namespace WinUI {
export type RadioMenuFlyoutItemProps = Omit<NativeWinUI.NativeRadioMenuFlyoutItemProps, 'type'>;

export class RadioMenuFlyoutItem extends React.Component<RadioMenuFlyoutItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.RadioMenuFlyoutItem' />;
  }
};
}
export namespace WinUI {
export type RatingControlProps = Omit<NativeWinUI.NativeRatingControlProps, 'type'>;

export class RatingControl extends React.Component<RatingControlProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.RatingControl' />;
  }
};
}
export namespace WinUI {
export type RefreshContainerProps = Omit<NativeWinUI.NativeRefreshContainerProps, 'type'>;

export class RefreshContainer extends React.Component<RefreshContainerProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.RefreshContainer' />;
  }
};
}
export namespace WinUI {
export type RefreshVisualizerProps = Omit<NativeWinUI.NativeRefreshVisualizerProps, 'type'>;

export class RefreshVisualizer extends React.Component<RefreshVisualizerProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.RefreshVisualizer' />;
  }
};
}
export namespace WinUI {
export type RevealListViewItemPresenterProps = Omit<NativeWinUI.NativeRevealListViewItemPresenterProps, 'type'>;

export class RevealListViewItemPresenter extends React.Component<RevealListViewItemPresenterProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.RevealListViewItemPresenter' />;
  }
};
}
export namespace WinUI {
export type SplitButtonProps = Omit<NativeWinUI.NativeSplitButtonProps, 'type'>;

export class SplitButton extends React.Component<SplitButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.SplitButton' />;
  }
};
}
export namespace WinUI {
export type SwipeControlProps = Omit<NativeWinUI.NativeSwipeControlProps, 'type'>;

export class SwipeControl extends React.Component<SwipeControlProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.SwipeControl' />;
  }
};
}
export namespace WinUI {
export type TabViewProps = Omit<NativeWinUI.NativeTabViewProps, 'type'>;

export class TabView extends React.Component<TabViewProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.TabView' />;
  }
};
}
export namespace WinUI {
export type TabViewItemProps = Omit<NativeWinUI.NativeTabViewItemProps, 'type'>;

export class TabViewItem extends React.Component<TabViewItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.TabViewItem' />;
  }
};
}
export namespace WinUI {
export type TeachingTipProps = Omit<NativeWinUI.NativeTeachingTipProps, 'type'>;

export class TeachingTip extends React.Component<TeachingTipProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.TeachingTip' />;
  }
};
}
export namespace WinUI {
export type TextCommandBarFlyoutProps = Omit<NativeWinUI.NativeTextCommandBarFlyoutProps, 'type'>;

export class TextCommandBarFlyout extends React.Component<TextCommandBarFlyoutProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.TextCommandBarFlyout' />;
  }
};
}
export namespace WinUI {
export type ToggleSplitButtonProps = Omit<NativeWinUI.NativeToggleSplitButtonProps, 'type'>;

export class ToggleSplitButton extends React.Component<ToggleSplitButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.ToggleSplitButton' />;
  }
};
}
export namespace WinUI {
export type TreeViewProps = Omit<NativeWinUI.NativeTreeViewProps, 'type'>;

export class TreeView extends React.Component<TreeViewProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.TreeView' />;
  }
};
}
export namespace WinUI {
export type TreeViewItemProps = Omit<NativeWinUI.NativeTreeViewItemProps, 'type'>;

export class TreeViewItem extends React.Component<TreeViewItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.TreeViewItem' />;
  }
};
}
export namespace WinUI {
export type TreeViewListProps = Omit<NativeWinUI.NativeTreeViewListProps, 'type'>;

export class TreeViewList extends React.Component<TreeViewListProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.TreeViewList' />;
  }
};
}
export namespace WinUI {
export type TwoPaneViewProps = Omit<NativeWinUI.NativeTwoPaneViewProps, 'type'>;

export class TwoPaneView extends React.Component<TwoPaneViewProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Microsoft.UI.Xaml.Controls.TwoPaneView' />;
  }
};
}
export type ContentControlProps = Omit<NativeContentControlProps, 'type'>;

export class ContentControl extends React.Component<ContentControlProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ContentControl' />;
  }
};
export type AppBarProps = Omit<NativeAppBarProps, 'type'>;

export class AppBar extends React.Component<AppBarProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.AppBar' />;
  }
};
export type ButtonProps = Omit<NativeButtonProps, 'type'>;

export class Button extends React.Component<ButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Button' />;
  }
};
export type AppBarButtonProps = Omit<NativeAppBarButtonProps, 'type'>;

export class AppBarButton extends React.Component<AppBarButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.AppBarButton' />;
  }
};
export type AppBarElementContainerProps = Omit<NativeAppBarElementContainerProps, 'type'>;

export class AppBarElementContainer extends React.Component<AppBarElementContainerProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.AppBarElementContainer' />;
  }
};
export type AppBarSeparatorProps = Omit<NativeAppBarSeparatorProps, 'type'>;

export class AppBarSeparator extends React.Component<AppBarSeparatorProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.AppBarSeparator' />;
  }
};
export type ToggleButtonProps = Omit<NativeToggleButtonProps, 'type'>;

export class ToggleButton extends React.Component<ToggleButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Primitives.ToggleButton' />;
  }
};
export type AppBarToggleButtonProps = Omit<NativeAppBarToggleButtonProps, 'type'>;

export class AppBarToggleButton extends React.Component<AppBarToggleButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.AppBarToggleButton' />;
  }
};
export type ItemsControlProps = Omit<NativeItemsControlProps, 'type'>;

export class ItemsControl extends React.Component<ItemsControlProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ItemsControl' />;
  }
};
export type AutoSuggestBoxProps = Omit<NativeAutoSuggestBoxProps, 'type'>;

export class AutoSuggestBox extends React.Component<AutoSuggestBoxProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.AutoSuggestBox' />;
  }
};
export type BitmapIconProps = Omit<NativeBitmapIconProps, 'type'>;

export class BitmapIcon extends React.Component<BitmapIconProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.BitmapIcon' />;
  }
};
export type BorderProps = Omit<NativeBorderProps, 'type'>;

export class Border extends React.Component<BorderProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Border' />;
  }
};
export type CalendarDatePickerProps = Omit<NativeCalendarDatePickerProps, 'type'>;

export class CalendarDatePicker extends React.Component<CalendarDatePickerProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.CalendarDatePicker' />;
  }
};
export type CalendarViewProps = Omit<NativeCalendarViewProps, 'type'>;

export class CalendarView extends React.Component<CalendarViewProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.CalendarView' />;
  }
};
export type CalendarViewDayItemProps = Omit<NativeCalendarViewDayItemProps, 'type'>;

export class CalendarViewDayItem extends React.Component<CalendarViewDayItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.CalendarViewDayItem' />;
  }
};
export type CanvasProps = Omit<NativeCanvasProps, 'type'>;

export class Canvas extends React.Component<CanvasProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Canvas' />;
  }
};
export type CaptureElementProps = Omit<NativeCaptureElementProps, 'type'>;

export class CaptureElement extends React.Component<CaptureElementProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.CaptureElement' />;
  }
};
export type CheckBoxProps = Omit<NativeCheckBoxProps, 'type'>;

export class CheckBox extends React.Component<CheckBoxProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.CheckBox' />;
  }
};
export type ColorPickerProps = Omit<NativeColorPickerProps, 'type'>;

export class ColorPicker extends React.Component<ColorPickerProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ColorPicker' />;
  }
};
export type ComboBoxProps = Omit<NativeComboBoxProps, 'type'>;

export class ComboBox extends React.Component<ComboBoxProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ComboBox' />;
  }
};
export type ComboBoxItemProps = Omit<NativeComboBoxItemProps, 'type'>;

export class ComboBoxItem extends React.Component<ComboBoxItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ComboBoxItem' />;
  }
};
export type CommandBarProps = Omit<NativeCommandBarProps, 'type'>;

export class CommandBar extends React.Component<CommandBarProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.CommandBar' />;
  }
};
export type CommandBarFlyoutProps = Omit<NativeCommandBarFlyoutProps, 'type'>;

export class CommandBarFlyout extends React.Component<CommandBarFlyoutProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.CommandBarFlyout' />;
  }
};
export type CommandBarOverflowPresenterProps = Omit<NativeCommandBarOverflowPresenterProps, 'type'>;

export class CommandBarOverflowPresenter extends React.Component<CommandBarOverflowPresenterProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.CommandBarOverflowPresenter' />;
  }
};
export type ContentDialogProps = Omit<NativeContentDialogProps, 'type'>;

export class ContentDialog extends React.Component<ContentDialogProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ContentDialog' />;
  }
};
export type ContentPresenterProps = Omit<NativeContentPresenterProps, 'type'>;

export class ContentPresenter extends React.Component<ContentPresenterProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ContentPresenter' />;
  }
};
export type DatePickerProps = Omit<NativeDatePickerProps, 'type'>;

export class DatePicker extends React.Component<DatePickerProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.DatePicker' />;
  }
};
export type DatePickerFlyoutProps = Omit<NativeDatePickerFlyoutProps, 'type'>;

export class DatePickerFlyout extends React.Component<DatePickerFlyoutProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.DatePickerFlyout' />;
  }
};
export type DropDownButtonProps = Omit<NativeDropDownButtonProps, 'type'>;

export class DropDownButton extends React.Component<DropDownButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.DropDownButton' />;
  }
};
export type FlipViewProps = Omit<NativeFlipViewProps, 'type'>;

export class FlipView extends React.Component<FlipViewProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.FlipView' />;
  }
};
export type FlipViewItemProps = Omit<NativeFlipViewItemProps, 'type'>;

export class FlipViewItem extends React.Component<FlipViewItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.FlipViewItem' />;
  }
};
export type FlyoutProps = Omit<NativeFlyoutProps, 'type'>;

export class Flyout extends React.Component<FlyoutProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Flyout' />;
  }
};
export type FlyoutPresenterProps = Omit<NativeFlyoutPresenterProps, 'type'>;

export class FlyoutPresenter extends React.Component<FlyoutPresenterProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.FlyoutPresenter' />;
  }
};
export type FontIconProps = Omit<NativeFontIconProps, 'type'>;

export class FontIcon extends React.Component<FontIconProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.FontIcon' />;
  }
};
export type FrameProps = Omit<NativeFrameProps, 'type'>;

export class Frame extends React.Component<FrameProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Frame' />;
  }
};
export type GridProps = Omit<NativeGridProps, 'type'>;

export class Grid extends React.Component<GridProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Grid' />;
  }
};
export type GridViewProps = Omit<NativeGridViewProps, 'type'>;

export class GridView extends React.Component<GridViewProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.GridView' />;
  }
};
export type GridViewHeaderItemProps = Omit<NativeGridViewHeaderItemProps, 'type'>;

export class GridViewHeaderItem extends React.Component<GridViewHeaderItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.GridViewHeaderItem' />;
  }
};
export type GridViewItemProps = Omit<NativeGridViewItemProps, 'type'>;

export class GridViewItem extends React.Component<GridViewItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.GridViewItem' />;
  }
};
export type GroupItemProps = Omit<NativeGroupItemProps, 'type'>;

export class GroupItem extends React.Component<GroupItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.GroupItem' />;
  }
};
export type HandwritingViewProps = Omit<NativeHandwritingViewProps, 'type'>;

export class HandwritingView extends React.Component<HandwritingViewProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.HandwritingView' />;
  }
};
export type HubProps = Omit<NativeHubProps, 'type'>;

export class Hub extends React.Component<HubProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Hub' />;
  }
};
export type HubSectionProps = Omit<NativeHubSectionProps, 'type'>;

export class HubSection extends React.Component<HubSectionProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.HubSection' />;
  }
};
export type HyperlinkButtonProps = Omit<NativeHyperlinkButtonProps, 'type'>;

export class HyperlinkButton extends React.Component<HyperlinkButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.HyperlinkButton' />;
  }
};
export type IconSourceElementProps = Omit<NativeIconSourceElementProps, 'type'>;

export class IconSourceElement extends React.Component<IconSourceElementProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.IconSourceElement' />;
  }
};
export type ImageProps = Omit<NativeImageProps, 'type'>;

export class Image extends React.Component<ImageProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Image' />;
  }
};
export type InkCanvasProps = Omit<NativeInkCanvasProps, 'type'>;

export class InkCanvas extends React.Component<InkCanvasProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.InkCanvas' />;
  }
};
export type InkToolbarProps = Omit<NativeInkToolbarProps, 'type'>;

export class InkToolbar extends React.Component<InkToolbarProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.InkToolbar' />;
  }
};
export type RadioButtonProps = Omit<NativeRadioButtonProps, 'type'>;

export class RadioButton extends React.Component<RadioButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.RadioButton' />;
  }
};
export type InkToolbarBallpointPenButtonProps = Omit<NativeInkToolbarBallpointPenButtonProps, 'type'>;

export class InkToolbarBallpointPenButton extends React.Component<InkToolbarBallpointPenButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton' />;
  }
};
export type InkToolbarCustomPenButtonProps = Omit<NativeInkToolbarCustomPenButtonProps, 'type'>;

export class InkToolbarCustomPenButton extends React.Component<InkToolbarCustomPenButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.InkToolbarCustomPenButton' />;
  }
};
export type InkToolbarCustomToggleButtonProps = Omit<NativeInkToolbarCustomToggleButtonProps, 'type'>;

export class InkToolbarCustomToggleButton extends React.Component<InkToolbarCustomToggleButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton' />;
  }
};
export type InkToolbarCustomToolButtonProps = Omit<NativeInkToolbarCustomToolButtonProps, 'type'>;

export class InkToolbarCustomToolButton extends React.Component<InkToolbarCustomToolButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.InkToolbarCustomToolButton' />;
  }
};
export type InkToolbarEraserButtonProps = Omit<NativeInkToolbarEraserButtonProps, 'type'>;

export class InkToolbarEraserButton extends React.Component<InkToolbarEraserButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.InkToolbarEraserButton' />;
  }
};
export type InkToolbarFlyoutItemProps = Omit<NativeInkToolbarFlyoutItemProps, 'type'>;

export class InkToolbarFlyoutItem extends React.Component<InkToolbarFlyoutItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.InkToolbarFlyoutItem' />;
  }
};
export type InkToolbarHighlighterButtonProps = Omit<NativeInkToolbarHighlighterButtonProps, 'type'>;

export class InkToolbarHighlighterButton extends React.Component<InkToolbarHighlighterButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.InkToolbarHighlighterButton' />;
  }
};
export type InkToolbarPenConfigurationControlProps = Omit<NativeInkToolbarPenConfigurationControlProps, 'type'>;

export class InkToolbarPenConfigurationControl extends React.Component<InkToolbarPenConfigurationControlProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.InkToolbarPenConfigurationControl' />;
  }
};
export type InkToolbarPencilButtonProps = Omit<NativeInkToolbarPencilButtonProps, 'type'>;

export class InkToolbarPencilButton extends React.Component<InkToolbarPencilButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.InkToolbarPencilButton' />;
  }
};
export type InkToolbarRulerButtonProps = Omit<NativeInkToolbarRulerButtonProps, 'type'>;

export class InkToolbarRulerButton extends React.Component<InkToolbarRulerButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.InkToolbarRulerButton' />;
  }
};
export type InkToolbarStencilButtonProps = Omit<NativeInkToolbarStencilButtonProps, 'type'>;

export class InkToolbarStencilButton extends React.Component<InkToolbarStencilButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.InkToolbarStencilButton' />;
  }
};
export type ItemsPresenterProps = Omit<NativeItemsPresenterProps, 'type'>;

export class ItemsPresenter extends React.Component<ItemsPresenterProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ItemsPresenter' />;
  }
};
export type ItemsStackPanelProps = Omit<NativeItemsStackPanelProps, 'type'>;

export class ItemsStackPanel extends React.Component<ItemsStackPanelProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ItemsStackPanel' />;
  }
};
export type ItemsWrapGridProps = Omit<NativeItemsWrapGridProps, 'type'>;

export class ItemsWrapGrid extends React.Component<ItemsWrapGridProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ItemsWrapGrid' />;
  }
};
export type ListBoxProps = Omit<NativeListBoxProps, 'type'>;

export class ListBox extends React.Component<ListBoxProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ListBox' />;
  }
};
export type ListBoxItemProps = Omit<NativeListBoxItemProps, 'type'>;

export class ListBoxItem extends React.Component<ListBoxItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ListBoxItem' />;
  }
};
export type ListPickerFlyoutProps = Omit<NativeListPickerFlyoutProps, 'type'>;

export class ListPickerFlyout extends React.Component<ListPickerFlyoutProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ListPickerFlyout' />;
  }
};
export type ListViewProps = Omit<NativeListViewProps, 'type'>;

export class ListView extends React.Component<ListViewProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ListView' />;
  }
};
export type ListViewHeaderItemProps = Omit<NativeListViewHeaderItemProps, 'type'>;

export class ListViewHeaderItem extends React.Component<ListViewHeaderItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ListViewHeaderItem' />;
  }
};
export type ListViewItemProps = Omit<NativeListViewItemProps, 'type'>;

export class ListViewItem extends React.Component<ListViewItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ListViewItem' />;
  }
};
export type MapControlProps = Omit<NativeMapControlProps, 'type'>;

export class MapControl extends React.Component<MapControlProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Maps.MapControl' />;
  }
};
export type MediaElementProps = Omit<NativeMediaElementProps, 'type'>;

export class MediaElement extends React.Component<MediaElementProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.MediaElement' />;
  }
};
export type MediaPlayerElementProps = Omit<NativeMediaPlayerElementProps, 'type'>;

export class MediaPlayerElement extends React.Component<MediaPlayerElementProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.MediaPlayerElement' />;
  }
};
export type MediaPlayerPresenterProps = Omit<NativeMediaPlayerPresenterProps, 'type'>;

export class MediaPlayerPresenter extends React.Component<MediaPlayerPresenterProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.MediaPlayerPresenter' />;
  }
};
export type MediaTransportControlsProps = Omit<NativeMediaTransportControlsProps, 'type'>;

export class MediaTransportControls extends React.Component<MediaTransportControlsProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.MediaTransportControls' />;
  }
};
export type MenuBarProps = Omit<NativeMenuBarProps, 'type'>;

export class MenuBar extends React.Component<MenuBarProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.MenuBar' />;
  }
};
export type MenuBarItemProps = Omit<NativeMenuBarItemProps, 'type'>;

export class MenuBarItem extends React.Component<MenuBarItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.MenuBarItem' />;
  }
};
export type MenuFlyoutProps = Omit<NativeMenuFlyoutProps, 'type'>;

export class MenuFlyout extends React.Component<MenuFlyoutProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.MenuFlyout' />;
  }
  static ShowAt(ref: React.MutableRefObject<MenuFlyout>, args: { point: Point,  }) {
    const tag = findNodeHandle(ref.current);
    UIManager.dispatchViewManagerCommand(tag, xamlCommands.ShowAt, [args]);
  }
};
export type MenuBarItemFlyoutProps = Omit<NativeMenuBarItemFlyoutProps, 'type'>;

export class MenuBarItemFlyout extends React.Component<MenuBarItemFlyoutProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.MenuBarItemFlyout' />;
  }
};
export type MenuFlyoutItemProps = Omit<NativeMenuFlyoutItemProps, 'type'>;

export class MenuFlyoutItem extends React.Component<MenuFlyoutItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.MenuFlyoutItem' />;
  }
};
export type MenuFlyoutPresenterProps = Omit<NativeMenuFlyoutPresenterProps, 'type'>;

export class MenuFlyoutPresenter extends React.Component<MenuFlyoutPresenterProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.MenuFlyoutPresenter' />;
  }
};
export type MenuFlyoutSeparatorProps = Omit<NativeMenuFlyoutSeparatorProps, 'type'>;

export class MenuFlyoutSeparator extends React.Component<MenuFlyoutSeparatorProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.MenuFlyoutSeparator' />;
  }
};
export type MenuFlyoutSubItemProps = Omit<NativeMenuFlyoutSubItemProps, 'type'>;

export class MenuFlyoutSubItem extends React.Component<MenuFlyoutSubItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.MenuFlyoutSubItem' />;
  }
};
export type NavigationViewProps = Omit<NativeNavigationViewProps, 'type'>;

export class NavigationView extends React.Component<NavigationViewProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.NavigationView' />;
  }
};
export type NavigationViewItemProps = Omit<NativeNavigationViewItemProps, 'type'>;

export class NavigationViewItem extends React.Component<NavigationViewItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.NavigationViewItem' />;
  }
};
export type NavigationViewItemHeaderProps = Omit<NativeNavigationViewItemHeaderProps, 'type'>;

export class NavigationViewItemHeader extends React.Component<NavigationViewItemHeaderProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.NavigationViewItemHeader' />;
  }
};
export type NavigationViewItemSeparatorProps = Omit<NativeNavigationViewItemSeparatorProps, 'type'>;

export class NavigationViewItemSeparator extends React.Component<NavigationViewItemSeparatorProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.NavigationViewItemSeparator' />;
  }
};
export type NavigationViewListProps = Omit<NativeNavigationViewListProps, 'type'>;

export class NavigationViewList extends React.Component<NavigationViewListProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.NavigationViewList' />;
  }
};
export type UserControlProps = Omit<NativeUserControlProps, 'type'>;

export class UserControl extends React.Component<UserControlProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.UserControl' />;
  }
};
export type PageProps = Omit<NativePageProps, 'type'>;

export class Page extends React.Component<PageProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Page' />;
  }
};
export type ParallaxViewProps = Omit<NativeParallaxViewProps, 'type'>;

export class ParallaxView extends React.Component<ParallaxViewProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ParallaxView' />;
  }
};
export type PasswordBoxProps = Omit<NativePasswordBoxProps, 'type'>;

export class PasswordBox extends React.Component<PasswordBoxProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.PasswordBox' />;
  }
};
export type PathIconProps = Omit<NativePathIconProps, 'type'>;

export class PathIcon extends React.Component<PathIconProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.PathIcon' />;
  }
};
export type PersonPictureProps = Omit<NativePersonPictureProps, 'type'>;

export class PersonPicture extends React.Component<PersonPictureProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.PersonPicture' />;
  }
};
export type PickerFlyoutProps = Omit<NativePickerFlyoutProps, 'type'>;

export class PickerFlyout extends React.Component<PickerFlyoutProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.PickerFlyout' />;
  }
};
export type PivotProps = Omit<NativePivotProps, 'type'>;

export class Pivot extends React.Component<PivotProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Pivot' />;
  }
};
export type PivotItemProps = Omit<NativePivotItemProps, 'type'>;

export class PivotItem extends React.Component<PivotItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.PivotItem' />;
  }
};
export type CalendarPanelProps = Omit<NativeCalendarPanelProps, 'type'>;

export class CalendarPanel extends React.Component<CalendarPanelProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Primitives.CalendarPanel' />;
  }
};
export type CarouselPanelProps = Omit<NativeCarouselPanelProps, 'type'>;

export class CarouselPanel extends React.Component<CarouselPanelProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Primitives.CarouselPanel' />;
  }
};
export type SliderProps = Omit<NativeSliderProps, 'type'>;

export class Slider extends React.Component<SliderProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Slider' />;
  }
};
export type ColorPickerSliderProps = Omit<NativeColorPickerSliderProps, 'type'>;

export class ColorPickerSlider extends React.Component<ColorPickerSliderProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider' />;
  }
};
export type ColorSpectrumProps = Omit<NativeColorSpectrumProps, 'type'>;

export class ColorSpectrum extends React.Component<ColorSpectrumProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Primitives.ColorSpectrum' />;
  }
};
export type CommandBarFlyoutCommandBarProps = Omit<NativeCommandBarFlyoutCommandBarProps, 'type'>;

export class CommandBarFlyoutCommandBar extends React.Component<CommandBarFlyoutCommandBarProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar' />;
  }
};
export type GridViewItemPresenterProps = Omit<NativeGridViewItemPresenterProps, 'type'>;

export class GridViewItemPresenter extends React.Component<GridViewItemPresenterProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter' />;
  }
};
export type ListViewItemPresenterProps = Omit<NativeListViewItemPresenterProps, 'type'>;

export class ListViewItemPresenter extends React.Component<ListViewItemPresenterProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter' />;
  }
};
export type NavigationViewItemPresenterProps = Omit<NativeNavigationViewItemPresenterProps, 'type'>;

export class NavigationViewItemPresenter extends React.Component<NavigationViewItemPresenterProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter' />;
  }
};
export type PivotHeaderItemProps = Omit<NativePivotHeaderItemProps, 'type'>;

export class PivotHeaderItem extends React.Component<PivotHeaderItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem' />;
  }
};
export type PivotHeaderPanelProps = Omit<NativePivotHeaderPanelProps, 'type'>;

export class PivotHeaderPanel extends React.Component<PivotHeaderPanelProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel' />;
  }
};
export type PivotPanelProps = Omit<NativePivotPanelProps, 'type'>;

export class PivotPanel extends React.Component<PivotPanelProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Primitives.PivotPanel' />;
  }
};
export type PopupProps = Omit<NativePopupProps, 'type'>;

export class Popup extends React.Component<PopupProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Primitives.Popup' />;
  }
};
export type RepeatButtonProps = Omit<NativeRepeatButtonProps, 'type'>;

export class RepeatButton extends React.Component<RepeatButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Primitives.RepeatButton' />;
  }
};
export type ScrollBarProps = Omit<NativeScrollBarProps, 'type'>;

export class ScrollBar extends React.Component<ScrollBarProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Primitives.ScrollBar' />;
  }
};
export type ThumbProps = Omit<NativeThumbProps, 'type'>;

export class Thumb extends React.Component<ThumbProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Primitives.Thumb' />;
  }
};
export type TickBarProps = Omit<NativeTickBarProps, 'type'>;

export class TickBar extends React.Component<TickBarProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Primitives.TickBar' />;
  }
};
export type ProgressBarProps = Omit<NativeProgressBarProps, 'type'>;

export class ProgressBar extends React.Component<ProgressBarProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ProgressBar' />;
  }
};
export type ProgressRingProps = Omit<NativeProgressRingProps, 'type'>;

export class ProgressRing extends React.Component<ProgressRingProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ProgressRing' />;
  }
};
export type RatingControlProps = Omit<NativeRatingControlProps, 'type'>;

export class RatingControl extends React.Component<RatingControlProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.RatingControl' />;
  }
};
export type RefreshContainerProps = Omit<NativeRefreshContainerProps, 'type'>;

export class RefreshContainer extends React.Component<RefreshContainerProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.RefreshContainer' />;
  }
};
export type RefreshVisualizerProps = Omit<NativeRefreshVisualizerProps, 'type'>;

export class RefreshVisualizer extends React.Component<RefreshVisualizerProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.RefreshVisualizer' />;
  }
};
export type RelativePanelProps = Omit<NativeRelativePanelProps, 'type'>;

export class RelativePanel extends React.Component<RelativePanelProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.RelativePanel' />;
  }
};
export type RichEditBoxProps = Omit<NativeRichEditBoxProps, 'type'>;

export class RichEditBox extends React.Component<RichEditBoxProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.RichEditBox' />;
  }
};
export type RichTextBlockProps = Omit<NativeRichTextBlockProps, 'type'>;

export class RichTextBlock extends React.Component<RichTextBlockProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.RichTextBlock' />;
  }
};
export type RichTextBlockOverflowProps = Omit<NativeRichTextBlockOverflowProps, 'type'>;

export class RichTextBlockOverflow extends React.Component<RichTextBlockOverflowProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.RichTextBlockOverflow' />;
  }
};
export type ScrollContentPresenterProps = Omit<NativeScrollContentPresenterProps, 'type'>;

export class ScrollContentPresenter extends React.Component<ScrollContentPresenterProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ScrollContentPresenter' />;
  }
};
export type ScrollViewerProps = Omit<NativeScrollViewerProps, 'type'>;

export class ScrollViewer extends React.Component<ScrollViewerProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ScrollViewer' />;
  }
};
export type SearchBoxProps = Omit<NativeSearchBoxProps, 'type'>;

export class SearchBox extends React.Component<SearchBoxProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.SearchBox' />;
  }
};
export type SemanticZoomProps = Omit<NativeSemanticZoomProps, 'type'>;

export class SemanticZoom extends React.Component<SemanticZoomProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.SemanticZoom' />;
  }
};
export type SettingsFlyoutProps = Omit<NativeSettingsFlyoutProps, 'type'>;

export class SettingsFlyout extends React.Component<SettingsFlyoutProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.SettingsFlyout' />;
  }
};
export type SplitButtonProps = Omit<NativeSplitButtonProps, 'type'>;

export class SplitButton extends React.Component<SplitButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.SplitButton' />;
  }
};
export type SplitViewProps = Omit<NativeSplitViewProps, 'type'>;

export class SplitView extends React.Component<SplitViewProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.SplitView' />;
  }
};
export type StackPanelProps = Omit<NativeStackPanelProps, 'type'>;

export class StackPanel extends React.Component<StackPanelProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.StackPanel' />;
  }
};
export type SwapChainBackgroundPanelProps = Omit<NativeSwapChainBackgroundPanelProps, 'type'>;

export class SwapChainBackgroundPanel extends React.Component<SwapChainBackgroundPanelProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.SwapChainBackgroundPanel' />;
  }
};
export type SwapChainPanelProps = Omit<NativeSwapChainPanelProps, 'type'>;

export class SwapChainPanel extends React.Component<SwapChainPanelProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.SwapChainPanel' />;
  }
};
export type SwipeControlProps = Omit<NativeSwipeControlProps, 'type'>;

export class SwipeControl extends React.Component<SwipeControlProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.SwipeControl' />;
  }
};
export type SymbolIconProps = Omit<NativeSymbolIconProps, 'type'>;

export class SymbolIcon extends React.Component<SymbolIconProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.SymbolIcon' />;
  }
};
export type TextBlockProps = Omit<NativeTextBlockProps, 'type'>;

export class TextBlock extends React.Component<TextBlockProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.TextBlock' />;
  }
};
export type TextBoxProps = Omit<NativeTextBoxProps, 'type'>;

export class TextBox extends React.Component<TextBoxProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.TextBox' />;
  }
};
export type TextCommandBarFlyoutProps = Omit<NativeTextCommandBarFlyoutProps, 'type'>;

export class TextCommandBarFlyout extends React.Component<TextCommandBarFlyoutProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.TextCommandBarFlyout' />;
  }
};
export type TimePickerProps = Omit<NativeTimePickerProps, 'type'>;

export class TimePicker extends React.Component<TimePickerProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.TimePicker' />;
  }
};
export type TimePickerFlyoutProps = Omit<NativeTimePickerFlyoutProps, 'type'>;

export class TimePickerFlyout extends React.Component<TimePickerFlyoutProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.TimePickerFlyout' />;
  }
};
export type ToggleMenuFlyoutItemProps = Omit<NativeToggleMenuFlyoutItemProps, 'type'>;

export class ToggleMenuFlyoutItem extends React.Component<ToggleMenuFlyoutItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem' />;
  }
};
export type ToggleSplitButtonProps = Omit<NativeToggleSplitButtonProps, 'type'>;

export class ToggleSplitButton extends React.Component<ToggleSplitButtonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ToggleSplitButton' />;
  }
};
export type ToggleSwitchProps = Omit<NativeToggleSwitchProps, 'type'>;

export class ToggleSwitch extends React.Component<ToggleSwitchProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ToggleSwitch' />;
  }
};
export type ToolTipProps = Omit<NativeToolTipProps, 'type'>;

export class ToolTip extends React.Component<ToolTipProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.ToolTip' />;
  }
};
export type TreeViewProps = Omit<NativeTreeViewProps, 'type'>;

export class TreeView extends React.Component<TreeViewProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.TreeView' />;
  }
};
export type TreeViewItemProps = Omit<NativeTreeViewItemProps, 'type'>;

export class TreeViewItem extends React.Component<TreeViewItemProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.TreeViewItem' />;
  }
};
export type TreeViewListProps = Omit<NativeTreeViewListProps, 'type'>;

export class TreeViewList extends React.Component<TreeViewListProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.TreeViewList' />;
  }
};
export type TwoPaneViewProps = Omit<NativeTwoPaneViewProps, 'type'>;

export class TwoPaneView extends React.Component<TwoPaneViewProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.TwoPaneView' />;
  }
};
export type VariableSizedWrapGridProps = Omit<NativeVariableSizedWrapGridProps, 'type'>;

export class VariableSizedWrapGrid extends React.Component<VariableSizedWrapGridProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.VariableSizedWrapGrid' />;
  }
};
export type ViewboxProps = Omit<NativeViewboxProps, 'type'>;

export class Viewbox extends React.Component<ViewboxProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.Viewbox' />;
  }
};
export type VirtualizingStackPanelProps = Omit<NativeVirtualizingStackPanelProps, 'type'>;

export class VirtualizingStackPanel extends React.Component<VirtualizingStackPanelProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.VirtualizingStackPanel' />;
  }
};
export type WebViewProps = Omit<NativeWebViewProps, 'type'>;

export class WebView extends React.Component<WebViewProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.WebView' />;
  }
};
export type WrapGridProps = Omit<NativeWrapGridProps, 'type'>;

export class WrapGrid extends React.Component<WrapGridProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Controls.WrapGrid' />;
  }
};
export type SpanProps = Omit<NativeSpanProps, 'type'>;

export class Span extends React.Component<SpanProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Documents.Span' />;
  }
};
export type BoldProps = Omit<NativeBoldProps, 'type'>;

export class Bold extends React.Component<BoldProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Documents.Bold' />;
  }
};
export type ContentLinkProps = Omit<NativeContentLinkProps, 'type'>;

export class ContentLink extends React.Component<ContentLinkProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Documents.ContentLink' />;
  }
};
export type GlyphsProps = Omit<NativeGlyphsProps, 'type'>;

export class Glyphs extends React.Component<GlyphsProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Documents.Glyphs' />;
  }
};
export type HyperlinkProps = Omit<NativeHyperlinkProps, 'type'>;

export class Hyperlink extends React.Component<HyperlinkProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Documents.Hyperlink' />;
  }
};
export type InlineUIContainerProps = Omit<NativeInlineUIContainerProps, 'type'>;

export class InlineUIContainer extends React.Component<InlineUIContainerProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Documents.InlineUIContainer' />;
  }
};
export type ItalicProps = Omit<NativeItalicProps, 'type'>;

export class Italic extends React.Component<ItalicProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Documents.Italic' />;
  }
};
export type LineBreakProps = Omit<NativeLineBreakProps, 'type'>;

export class LineBreak extends React.Component<LineBreakProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Documents.LineBreak' />;
  }
};
export type ParagraphProps = Omit<NativeParagraphProps, 'type'>;

export class Paragraph extends React.Component<ParagraphProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Documents.Paragraph' />;
  }
};
export type RunProps = Omit<NativeRunProps, 'type'>;

export class Run extends React.Component<RunProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Documents.Run' />;
  }
};
export type UnderlineProps = Omit<NativeUnderlineProps, 'type'>;

export class Underline extends React.Component<UnderlineProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Documents.Underline' />;
  }
};
export type KeyboardAcceleratorProps = Omit<NativeKeyboardAcceleratorProps, 'type'>;

export class KeyboardAccelerator extends React.Component<KeyboardAcceleratorProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Input.KeyboardAccelerator' />;
  }
};
export type EllipseProps = Omit<NativeEllipseProps, 'type'>;

export class Ellipse extends React.Component<EllipseProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Shapes.Ellipse' />;
  }
};
export type LineProps = Omit<NativeLineProps, 'type'>;

export class Line extends React.Component<LineProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Shapes.Line' />;
  }
};
export type PathProps = Omit<NativePathProps, 'type'>;

export class Path extends React.Component<PathProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Shapes.Path' />;
  }
};
export type PolygonProps = Omit<NativePolygonProps, 'type'>;

export class Polygon extends React.Component<PolygonProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Shapes.Polygon' />;
  }
};
export type PolylineProps = Omit<NativePolylineProps, 'type'>;

export class Polyline extends React.Component<PolylineProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Shapes.Polyline' />;
  }
};
export type RectangleProps = Omit<NativeRectangleProps, 'type'>;

export class Rectangle extends React.Component<RectangleProps> {
  render() {
    return <NativeXamlControl {...this.props} type='Windows.UI.Xaml.Shapes.Rectangle' />;
  }
};
