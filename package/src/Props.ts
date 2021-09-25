
/*************************************************************
THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT MODIFY MANUALLY
**************************************************************/

import type { ViewProps, NativeSyntheticEvent, ColorValue } from 'react-native';
import type * as Enums from './Enums';

export type Thickness = number | { left?: number, top?: number, right?: number, bottom?: number };

export type GridLength = number | '*' | 'auto' | `${number}*`;

export type CornerRadius = number | { topLeft?: number, topRight?: number, bottomLeft?: number, bottomRight?: number};

export namespace NativeWinUI {
export interface NativeAnimatedIconProps extends NativeIconElementProps {
  type: 'Microsoft.UI.Xaml.Controls.AnimatedIcon';
  mirroredWhenRightToLeft?: boolean;
}
}
export namespace NativeWinUI {
export interface NativeAnimatedVisualPlayerProps extends NativeFrameworkElementProps {
  type: 'Microsoft.UI.Xaml.Controls.AnimatedVisualPlayer';
  stretch?: Enums.Stretch;
  playbackRate?: number;
  autoPlay?: boolean;
}
}
export namespace NativeWinUI {
export interface NativeBreadcrumbBarProps extends NativeControlProps {
  type: 'Microsoft.UI.Xaml.Controls.BreadcrumbBar';
  itemsSource?: object;
  itemTemplate?: object;
  onItemClicked?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeBreadcrumbBarItemProps extends NativeContentControlProps {
  type: 'Microsoft.UI.Xaml.Controls.BreadcrumbBarItem';
}
}
export namespace NativeWinUI {
export interface NativeColorPickerProps extends NativeControlProps {
  type: 'Microsoft.UI.Xaml.Controls.ColorPicker';
  minValue?: number;
  minSaturation?: number;
  minHue?: number;
  maxValue?: number;
  maxSaturation?: number;
  maxHue?: number;
  isMoreButtonVisible?: boolean;
  isHexInputVisible?: boolean;
  isColorSpectrumVisible?: boolean;
  isColorSliderVisible?: boolean;
  isColorPreviewVisible?: boolean;
  isColorChannelTextInputVisible?: boolean;
  isAlphaTextInputVisible?: boolean;
  isAlphaSliderVisible?: boolean;
  isAlphaEnabled?: boolean;
  colorSpectrumShape?: Enums.WinUIEnums.ColorSpectrumShape;
  colorSpectrumComponents?: Enums.WinUIEnums.ColorSpectrumComponents;
  onColorChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeCommandBarFlyoutProps extends NativeFlyoutBaseProps {
  type: 'Microsoft.UI.Xaml.Controls.CommandBarFlyout' | 'Microsoft.UI.Xaml.Controls.TextCommandBarFlyout';
}
}
export namespace NativeWinUI {
export interface NativeDropDownButtonProps extends NativeButtonProps {
  type: 'Microsoft.UI.Xaml.Controls.DropDownButton';
}
}
export namespace NativeWinUI {
export interface NativeExpanderProps extends NativeContentControlProps {
  type: 'Microsoft.UI.Xaml.Controls.Expander';
  isExpanded?: boolean;
  header?: object;
  expandDirection?: Enums.WinUIEnums.ExpandDirection;
  onCollapsed?: (event: NativeSyntheticEvent<undefined>) => void;
  onExpanding?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeImageIconProps extends NativeIconElementProps {
  type: 'Microsoft.UI.Xaml.Controls.ImageIcon';
  source?: string;
}
}
export namespace NativeWinUI {
export interface NativeInfoBarProps extends NativeControlProps {
  type: 'Microsoft.UI.Xaml.Controls.InfoBar';
  title?: string;
  severity?: Enums.WinUIEnums.InfoBarSeverity;
  message?: string;
  isOpen?: boolean;
  isIconVisible?: boolean;
  isClosable?: boolean;
  content?: string;
  closeButtonStyle?: string;
  closeButtonCommandParameter?: object;
  onCloseButtonClick?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosing?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeItemsRepeaterProps extends NativeFrameworkElementProps {
  type: 'Microsoft.UI.Xaml.Controls.ItemsRepeater';
  verticalCacheLength?: number;
  itemsSource?: object;
  itemTemplate?: string;
  horizontalCacheLength?: number;
  background?: ColorValue;
  onElementClearing?: (event: NativeSyntheticEvent<undefined>) => void;
  onElementIndexChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onElementPrepared?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeItemsRepeaterScrollHostProps extends NativeFrameworkElementProps {
  type: 'Microsoft.UI.Xaml.Controls.ItemsRepeaterScrollHost';
}
}
export namespace NativeWinUI {
export interface NativeMenuBarProps extends NativeControlProps {
  type: 'Microsoft.UI.Xaml.Controls.MenuBar';
}
}
export namespace NativeWinUI {
export interface NativeMenuBarItemProps extends NativeControlProps {
  type: 'Microsoft.UI.Xaml.Controls.MenuBarItem';
  title?: string;
}
}
export namespace NativeWinUI {
export interface NativeMenuBarItemFlyoutProps extends NativeMenuFlyoutProps {
  type: 'Microsoft.UI.Xaml.Controls.MenuBarItemFlyout';
}
}
export namespace NativeWinUI {
export interface NativeNavigationViewProps extends NativeContentControlProps {
  type: 'Microsoft.UI.Xaml.Controls.NavigationView';
  selectedItem?: object;
  paneToggleButtonStyle?: string;
  openPaneLength?: number;
  menuItemsSource?: object;
  menuItemContainerStyle?: string;
  isTitleBarAutoPaddingEnabled?: boolean;
  isSettingsVisible?: boolean;
  isPaneToggleButtonVisible?: boolean;
  isPaneOpen?: boolean;
  header?: object;
  footerMenuItemsSource?: object;
  expandedModeThresholdWidth?: number;
  compactPaneLength?: number;
  compactModeThresholdWidth?: number;
  alwaysShowHeader?: boolean;
  shoulderNavigationEnabled?: Enums.WinUIEnums.NavigationViewShoulderNavigationEnabled;
  selectionFollowsFocus?: Enums.WinUIEnums.NavigationViewSelectionFollowsFocus;
  paneTitle?: string;
  paneDisplayMode?: Enums.WinUIEnums.NavigationViewPaneDisplayMode;
  overflowLabelMode?: Enums.WinUIEnums.NavigationViewOverflowLabelMode;
  isPaneVisible?: boolean;
  isBackEnabled?: boolean;
  isBackButtonVisible?: Enums.WinUIEnums.NavigationViewBackButtonVisible;
  onDisplayModeChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onItemInvoked?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onBackRequested?: (event: NativeSyntheticEvent<undefined>) => void;
  onCollapsed?: (event: NativeSyntheticEvent<undefined>) => void;
  onExpanding?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneClosing?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneOpening?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeNavigationViewItemBaseProps extends NativeContentControlProps {
  type: 'Microsoft.UI.Xaml.Controls.NavigationViewItemBase' | 'Microsoft.UI.Xaml.Controls.NavigationViewItem' | 'Microsoft.UI.Xaml.Controls.NavigationViewItemHeader' | 'Microsoft.UI.Xaml.Controls.NavigationViewItemSeparator';
  isSelected?: boolean;
}
}
export namespace NativeWinUI {
export interface NativeNavigationViewItemProps extends NativeWinUI.NativeNavigationViewItemBaseProps {
  type: 'Microsoft.UI.Xaml.Controls.NavigationViewItem';
  selectsOnInvoked?: boolean;
  menuItemsSource?: object;
  isExpanded?: boolean;
  isChildSelected?: boolean;
  hasUnrealizedChildren?: boolean;
}
}
export namespace NativeWinUI {
export interface NativeNavigationViewItemHeaderProps extends NativeWinUI.NativeNavigationViewItemBaseProps {
  type: 'Microsoft.UI.Xaml.Controls.NavigationViewItemHeader';
}
}
export namespace NativeWinUI {
export interface NativeNavigationViewItemSeparatorProps extends NativeWinUI.NativeNavigationViewItemBaseProps {
  type: 'Microsoft.UI.Xaml.Controls.NavigationViewItemSeparator';
}
}
export namespace NativeWinUI {
export interface NativeNumberBoxProps extends NativeControlProps {
  type: 'Microsoft.UI.Xaml.Controls.NumberBox';
  value?: number;
  validationMode?: Enums.WinUIEnums.NumberBoxValidationMode;
  textReadingOrder?: Enums.TextReadingOrder;
  text?: string;
  spinButtonPlacementMode?: Enums.WinUIEnums.NumberBoxSpinButtonPlacementMode;
  smallChange?: number;
  selectionHighlightColor?: ColorValue;
  preventKeyboardDisplayOnProgrammaticFocus?: boolean;
  placeholderText?: string;
  minimum?: number;
  maximum?: number;
  largeChange?: number;
  isWrapEnabled?: boolean;
  header?: object;
  description?: object;
  acceptsExpression?: boolean;
  onValueChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeParallaxViewProps extends NativeFrameworkElementProps {
  type: 'Microsoft.UI.Xaml.Controls.ParallaxView';
  verticalSourceStartOffset?: number;
  verticalSourceOffsetKind?: Enums.WinUIEnums.ParallaxSourceOffsetKind;
  verticalSourceEndOffset?: number;
  verticalShift?: number;
  maxVerticalShiftRatio?: number;
  maxHorizontalShiftRatio?: number;
  isVerticalShiftClamped?: boolean;
  isHorizontalShiftClamped?: boolean;
  horizontalSourceStartOffset?: number;
  horizontalSourceOffsetKind?: Enums.WinUIEnums.ParallaxSourceOffsetKind;
  horizontalSourceEndOffset?: number;
  horizontalShift?: number;
}
}
export namespace NativeWinUI {
export interface NativePersonPictureProps extends NativeControlProps {
  type: 'Microsoft.UI.Xaml.Controls.PersonPicture';
  profilePicture?: string;
  preferSmallImage?: boolean;
  isGroup?: boolean;
  initials?: string;
  displayName?: string;
  badgeText?: string;
  badgeNumber?: number;
  badgeImageSource?: string;
  badgeGlyph?: string;
}
}
export namespace NativeWinUI {
export interface NativePipsPagerProps extends NativeControlProps {
  type: 'Microsoft.UI.Xaml.Controls.PipsPager';
  selectedPipStyle?: string;
  selectedPageIndex?: number;
  previousButtonVisibility?: Enums.WinUIEnums.PipsPagerButtonVisibility;
  previousButtonStyle?: string;
  orientation?: Enums.Orientation;
  numberOfPages?: number;
  normalPipStyle?: string;
  nextButtonVisibility?: Enums.WinUIEnums.PipsPagerButtonVisibility;
  nextButtonStyle?: string;
  maxVisiblePips?: number;
  onSelectedIndexChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeColorPickerSliderProps extends NativeSliderProps {
  type: 'Microsoft.UI.Xaml.Controls.Primitives.ColorPickerSlider';
  colorChannel?: Enums.WinUIEnums.ColorPickerHsvChannel;
}
}
export namespace NativeWinUI {
export interface NativeColorSpectrumProps extends NativeControlProps {
  type: 'Microsoft.UI.Xaml.Controls.Primitives.ColorSpectrum';
  shape?: Enums.WinUIEnums.ColorSpectrumShape;
  minValue?: number;
  minSaturation?: number;
  minHue?: number;
  maxValue?: number;
  maxSaturation?: number;
  maxHue?: number;
  components?: Enums.WinUIEnums.ColorSpectrumComponents;
  onColorChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeCommandBarFlyoutCommandBarProps extends NativeCommandBarProps {
  type: 'Microsoft.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar';
}
}
export namespace NativeWinUI {
export interface NativeInfoBarPanelProps extends NativePanelProps {
  type: 'Microsoft.UI.Xaml.Controls.Primitives.InfoBarPanel';
  verticalOrientationPadding?: Thickness;
  horizontalOrientationPadding?: Thickness;
}
}
export namespace NativeWinUI {
export interface NativeMonochromaticOverlayPresenterProps extends NativeGridProps {
  type: 'Microsoft.UI.Xaml.Controls.Primitives.MonochromaticOverlayPresenter';
}
}
export namespace NativeWinUI {
export interface NativeNavigationViewItemPresenterProps extends NativeContentControlProps {
  type: 'Microsoft.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter';
}
}
export namespace NativeWinUI {
export interface NativeTabViewListViewProps extends NativeListViewProps {
  type: 'Microsoft.UI.Xaml.Controls.Primitives.TabViewListView';
}
}
export namespace NativeWinUI {
export interface NativeProgressBarProps extends NativeRangeBaseProps {
  type: 'Microsoft.UI.Xaml.Controls.ProgressBar';
  showPaused?: boolean;
  showError?: boolean;
  isIndeterminate?: boolean;
}
}
export namespace NativeWinUI {
export interface NativeProgressRingProps extends NativeControlProps {
  type: 'Microsoft.UI.Xaml.Controls.ProgressRing';
  value?: number;
  minimum?: number;
  maximum?: number;
  isIndeterminate?: boolean;
  isActive?: boolean;
}
}
export namespace NativeWinUI {
export interface NativeRadioButtonsProps extends NativeControlProps {
  type: 'Microsoft.UI.Xaml.Controls.RadioButtons';
  selectedItem?: object;
  selectedIndex?: number;
  maxColumns?: number;
  itemsSource?: object;
  itemTemplate?: object;
  header?: object;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeRadioMenuFlyoutItemProps extends NativeMenuFlyoutItemProps {
  type: 'Microsoft.UI.Xaml.Controls.RadioMenuFlyoutItem';
  isChecked?: boolean;
  groupName?: string;
}
}
export namespace NativeWinUI {
export interface NativeRatingControlProps extends NativeControlProps {
  type: 'Microsoft.UI.Xaml.Controls.RatingControl';
  value?: number;
  placeholderValue?: number;
  maxRating?: number;
  isReadOnly?: boolean;
  isClearEnabled?: boolean;
  initialSetValue?: number;
  caption?: string;
  onValueChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeRefreshContainerProps extends NativeContentControlProps {
  type: 'Microsoft.UI.Xaml.Controls.RefreshContainer';
  pullDirection?: Enums.WinUIEnums.RefreshPullDirection;
  onRefreshRequested?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeRefreshVisualizerProps extends NativeControlProps {
  type: 'Microsoft.UI.Xaml.Controls.RefreshVisualizer';
  orientation?: Enums.WinUIEnums.RefreshVisualizerOrientation;
  onRefreshRequested?: (event: NativeSyntheticEvent<undefined>) => void;
  onRefreshStateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeRevealListViewItemPresenterProps extends NativeListViewItemPresenterProps {
  type: 'Microsoft.UI.Xaml.Controls.RevealListViewItemPresenter';
}
}
export namespace NativeWinUI {
export interface NativeSplitButtonProps extends NativeContentControlProps {
  type: 'Microsoft.UI.Xaml.Controls.SplitButton' | 'Microsoft.UI.Xaml.Controls.ToggleSplitButton';
  commandParameter?: object;
  onClick?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeSwipeControlProps extends NativeContentControlProps {
  type: 'Microsoft.UI.Xaml.Controls.SwipeControl';
}
}
export namespace NativeWinUI {
export interface NativeTabViewProps extends NativeControlProps {
  type: 'Microsoft.UI.Xaml.Controls.TabView';
  tabWidthMode?: Enums.WinUIEnums.TabViewWidthMode;
  tabStripHeader?: object;
  tabStripFooter?: object;
  tabItemsSource?: object;
  selectedItem?: object;
  selectedIndex?: number;
  isAddTabButtonVisible?: boolean;
  closeButtonOverlayMode?: Enums.WinUIEnums.TabViewCloseButtonOverlayMode;
  canReorderTabs?: boolean;
  canDragTabs?: boolean;
  allowDropTabs?: boolean;
  addTabButtonCommandParameter?: object;
  onAddTabButtonClick?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onTabCloseRequested?: (event: NativeSyntheticEvent<undefined>) => void;
  onTabDragCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onTabDragStarting?: (event: NativeSyntheticEvent<undefined>) => void;
  onTabDroppedOutside?: (event: NativeSyntheticEvent<undefined>) => void;
  onTabItemsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onTabStripDragOver?: (event: NativeSyntheticEvent<undefined>) => void;
  onTabStripDrop?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeTabViewItemProps extends NativeListViewItemProps {
  type: 'Microsoft.UI.Xaml.Controls.TabViewItem';
  isClosable?: boolean;
  header?: object;
  onCloseRequested?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeTeachingTipProps extends NativeContentControlProps {
  type: 'Microsoft.UI.Xaml.Controls.TeachingTip';
  title?: string;
  tailVisibility?: Enums.WinUIEnums.TeachingTipTailVisibility;
  subtitle?: string;
  shouldConstrainToRootBounds?: boolean;
  preferredPlacement?: Enums.WinUIEnums.TeachingTipPlacementMode;
  placementMargin?: Thickness;
  isOpen?: boolean;
  isLightDismissEnabled?: boolean;
  heroContentPlacement?: Enums.WinUIEnums.TeachingTipHeroContentPlacementMode;
  closeButtonStyle?: string;
  closeButtonContent?: object;
  closeButtonCommandParameter?: object;
  actionButtonStyle?: string;
  actionButtonContent?: object;
  actionButtonCommandParameter?: object;
  onActionButtonClick?: (event: NativeSyntheticEvent<undefined>) => void;
  onCloseButtonClick?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosing?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeTextCommandBarFlyoutProps extends NativeWinUI.NativeCommandBarFlyoutProps {
  type: 'Microsoft.UI.Xaml.Controls.TextCommandBarFlyout';
}
}
export namespace NativeWinUI {
export interface NativeToggleSplitButtonProps extends NativeWinUI.NativeSplitButtonProps {
  type: 'Microsoft.UI.Xaml.Controls.ToggleSplitButton';
  isChecked?: boolean;
  onIsCheckedChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeTreeViewProps extends NativeControlProps {
  type: 'Microsoft.UI.Xaml.Controls.TreeView';
  selectionMode?: Enums.WinUIEnums.TreeViewSelectionMode;
  selectedItem?: object;
  itemsSource?: object;
  itemContainerStyle?: string;
  canReorderItems?: boolean;
  canDragItems?: boolean;
  onCollapsed?: (event: NativeSyntheticEvent<undefined>) => void;
  onExpanding?: (event: NativeSyntheticEvent<undefined>) => void;
  onItemInvoked?: (event: NativeSyntheticEvent<undefined>) => void;
  onDragItemsCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onDragItemsStarting?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export namespace NativeWinUI {
export interface NativeTreeViewItemProps extends NativeListViewItemProps {
  type: 'Microsoft.UI.Xaml.Controls.TreeViewItem';
  isExpanded?: boolean;
  glyphSize?: number;
  glyphOpacity?: number;
  glyphBrush?: ColorValue;
  expandedGlyph?: string;
  collapsedGlyph?: string;
  itemsSource?: object;
  hasUnrealizedChildren?: boolean;
}
}
export namespace NativeWinUI {
export interface NativeTreeViewListProps extends NativeListViewProps {
  type: 'Microsoft.UI.Xaml.Controls.TreeViewList';
}
}
export namespace NativeWinUI {
export interface NativeTwoPaneViewProps extends NativeControlProps {
  type: 'Microsoft.UI.Xaml.Controls.TwoPaneView';
  wideModeConfiguration?: Enums.WinUIEnums.TwoPaneViewWideModeConfiguration;
  tallModeConfiguration?: Enums.WinUIEnums.TwoPaneViewTallModeConfiguration;
  panePriority?: Enums.WinUIEnums.TwoPaneViewPriority;
  minWideModeWidth?: number;
  minTallModeHeight?: number;
  onModeChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
}
export interface NativeDependencyObjectProps extends ViewProps {
  type: 'Windows.UI.Xaml.DependencyObject' |
        'Microsoft.UI.Xaml.Controls.AnimatedIcon' |
        'Microsoft.UI.Xaml.Controls.AnimatedVisualPlayer' |
        'Microsoft.UI.Xaml.Controls.BreadcrumbBar' |
        'Microsoft.UI.Xaml.Controls.BreadcrumbBarItem' |
        'Microsoft.UI.Xaml.Controls.ColorPicker' |
        'Microsoft.UI.Xaml.Controls.CommandBarFlyout' |
        'Microsoft.UI.Xaml.Controls.DropDownButton' |
        'Microsoft.UI.Xaml.Controls.Expander' |
        'Microsoft.UI.Xaml.Controls.ImageIcon' |
        'Microsoft.UI.Xaml.Controls.InfoBar' |
        'Microsoft.UI.Xaml.Controls.ItemsRepeater' |
        'Microsoft.UI.Xaml.Controls.ItemsRepeaterScrollHost' |
        'Microsoft.UI.Xaml.Controls.MenuBar' |
        'Microsoft.UI.Xaml.Controls.MenuBarItem' |
        'Microsoft.UI.Xaml.Controls.MenuBarItemFlyout' |
        'Microsoft.UI.Xaml.Controls.NavigationView' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItemBase' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItem' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItemHeader' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItemSeparator' |
        'Microsoft.UI.Xaml.Controls.NumberBox' |
        'Microsoft.UI.Xaml.Controls.ParallaxView' |
        'Microsoft.UI.Xaml.Controls.PersonPicture' |
        'Microsoft.UI.Xaml.Controls.PipsPager' |
        'Microsoft.UI.Xaml.Controls.Primitives.ColorPickerSlider' |
        'Microsoft.UI.Xaml.Controls.Primitives.ColorSpectrum' |
        'Microsoft.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar' |
        'Microsoft.UI.Xaml.Controls.Primitives.InfoBarPanel' |
        'Microsoft.UI.Xaml.Controls.Primitives.MonochromaticOverlayPresenter' |
        'Microsoft.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter' |
        'Microsoft.UI.Xaml.Controls.Primitives.TabViewListView' |
        'Microsoft.UI.Xaml.Controls.ProgressBar' |
        'Microsoft.UI.Xaml.Controls.ProgressRing' |
        'Microsoft.UI.Xaml.Controls.RadioButtons' |
        'Microsoft.UI.Xaml.Controls.RadioMenuFlyoutItem' |
        'Microsoft.UI.Xaml.Controls.RatingControl' |
        'Microsoft.UI.Xaml.Controls.RefreshContainer' |
        'Microsoft.UI.Xaml.Controls.RefreshVisualizer' |
        'Microsoft.UI.Xaml.Controls.RevealListViewItemPresenter' |
        'Microsoft.UI.Xaml.Controls.SplitButton' |
        'Microsoft.UI.Xaml.Controls.SwipeControl' |
        'Microsoft.UI.Xaml.Controls.TabView' |
        'Microsoft.UI.Xaml.Controls.TabViewItem' |
        'Microsoft.UI.Xaml.Controls.TeachingTip' |
        'Microsoft.UI.Xaml.Controls.TextCommandBarFlyout' |
        'Microsoft.UI.Xaml.Controls.ToggleSplitButton' |
        'Microsoft.UI.Xaml.Controls.TreeView' |
        'Microsoft.UI.Xaml.Controls.TreeViewItem' |
        'Microsoft.UI.Xaml.Controls.TreeViewList' |
        'Microsoft.UI.Xaml.Controls.TwoPaneView' |
        'Windows.UI.Xaml.UIElement' |
        'Windows.UI.Xaml.FrameworkElement' |
        'Windows.UI.Xaml.Controls.Control' |
        'Windows.UI.Xaml.Controls.ContentControl' |
        'Windows.UI.Xaml.Controls.AppBar' |
        'Windows.UI.Xaml.Controls.Primitives.ButtonBase' |
        'Windows.UI.Xaml.Controls.Button' |
        'Windows.UI.Xaml.Controls.AppBarButton' |
        'Windows.UI.Xaml.Controls.AppBarElementContainer' |
        'Windows.UI.Xaml.Controls.AppBarSeparator' |
        'Windows.UI.Xaml.Controls.Primitives.ToggleButton' |
        'Windows.UI.Xaml.Controls.AppBarToggleButton' |
        'Windows.UI.Xaml.Controls.ItemsControl' |
        'Windows.UI.Xaml.Controls.AutoSuggestBox' |
        'Windows.UI.Xaml.Controls.IconElement' |
        'Windows.UI.Xaml.Controls.BitmapIcon' |
        'Windows.UI.Xaml.Controls.Border' |
        'Windows.UI.Xaml.Controls.CalendarDatePicker' |
        'Windows.UI.Xaml.Controls.CalendarView' |
        'Windows.UI.Xaml.Controls.CalendarViewDayItem' |
        'Windows.UI.Xaml.Controls.Panel' |
        'Windows.UI.Xaml.Controls.Canvas' |
        'Windows.UI.Xaml.Controls.CaptureElement' |
        'Windows.UI.Xaml.Controls.CheckBox' |
        'Windows.UI.Xaml.Controls.ColorPicker' |
        'Windows.UI.Xaml.Controls.Primitives.Selector' |
        'Windows.UI.Xaml.Controls.ComboBox' |
        'Windows.UI.Xaml.Controls.Primitives.SelectorItem' |
        'Windows.UI.Xaml.Controls.ComboBoxItem' |
        'Windows.UI.Xaml.Controls.CommandBar' |
        'Windows.UI.Xaml.Controls.Primitives.FlyoutBase' |
        'Windows.UI.Xaml.Controls.CommandBarFlyout' |
        'Windows.UI.Xaml.Controls.CommandBarOverflowPresenter' |
        'Windows.UI.Xaml.Controls.ContentDialog' |
        'Windows.UI.Xaml.Controls.ContentPresenter' |
        'Windows.UI.Xaml.Controls.DatePicker' |
        'Windows.UI.Xaml.Controls.Primitives.PickerFlyoutBase' |
        'Windows.UI.Xaml.Controls.DatePickerFlyout' |
        'Windows.UI.Xaml.Controls.DatePickerFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.DropDownButton' |
        'Windows.UI.Xaml.Controls.FlipView' |
        'Windows.UI.Xaml.Controls.FlipViewItem' |
        'Windows.UI.Xaml.Controls.Flyout' |
        'Windows.UI.Xaml.Controls.FlyoutPresenter' |
        'Windows.UI.Xaml.Controls.FontIcon' |
        'Windows.UI.Xaml.Controls.Frame' |
        'Windows.UI.Xaml.Controls.Grid' |
        'Windows.UI.Xaml.Controls.ListViewBase' |
        'Windows.UI.Xaml.Controls.GridView' |
        'Windows.UI.Xaml.Controls.ListViewBaseHeaderItem' |
        'Windows.UI.Xaml.Controls.GridViewHeaderItem' |
        'Windows.UI.Xaml.Controls.GridViewItem' |
        'Windows.UI.Xaml.Controls.GroupItem' |
        'Windows.UI.Xaml.Controls.HandwritingView' |
        'Windows.UI.Xaml.Controls.Hub' |
        'Windows.UI.Xaml.Controls.HubSection' |
        'Windows.UI.Xaml.Controls.HyperlinkButton' |
        'Windows.UI.Xaml.Controls.IconSourceElement' |
        'Windows.UI.Xaml.Controls.Image' |
        'Windows.UI.Xaml.Controls.InkCanvas' |
        'Windows.UI.Xaml.Controls.InkToolbar' |
        'Windows.UI.Xaml.Controls.RadioButton' |
        'Windows.UI.Xaml.Controls.InkToolbarToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarToggleButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarEraserButton' |
        'Windows.UI.Xaml.Controls.InkToolbarFlyoutItem' |
        'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton' |
        'Windows.UI.Xaml.Controls.InkToolbarMenuButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPenConfigurationControl' |
        'Windows.UI.Xaml.Controls.InkToolbarPencilButton' |
        'Windows.UI.Xaml.Controls.InkToolbarRulerButton' |
        'Windows.UI.Xaml.Controls.InkToolbarStencilButton' |
        'Windows.UI.Xaml.Controls.ItemsPresenter' |
        'Windows.UI.Xaml.Controls.ItemsStackPanel' |
        'Windows.UI.Xaml.Controls.ItemsWrapGrid' |
        'Windows.UI.Xaml.Controls.ListBox' |
        'Windows.UI.Xaml.Controls.ListBoxItem' |
        'Windows.UI.Xaml.Controls.ListPickerFlyout' |
        'Windows.UI.Xaml.Controls.ListPickerFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.ListView' |
        'Windows.UI.Xaml.Controls.ListViewHeaderItem' |
        'Windows.UI.Xaml.Controls.ListViewItem' |
        'Windows.UI.Xaml.Controls.Maps.MapControl' |
        'Windows.UI.Xaml.Controls.MediaElement' |
        'Windows.UI.Xaml.Controls.MediaPlayerElement' |
        'Windows.UI.Xaml.Controls.MediaPlayerPresenter' |
        'Windows.UI.Xaml.Controls.MediaTransportControls' |
        'Windows.UI.Xaml.Controls.MenuBar' |
        'Windows.UI.Xaml.Controls.MenuBarItem' |
        'Windows.UI.Xaml.Controls.MenuFlyout' |
        'Windows.UI.Xaml.Controls.MenuBarItemFlyout' |
        'Windows.UI.Xaml.Controls.MenuFlyoutItemBase' |
        'Windows.UI.Xaml.Controls.MenuFlyoutItem' |
        'Windows.UI.Xaml.Controls.MenuFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.MenuFlyoutSeparator' |
        'Windows.UI.Xaml.Controls.MenuFlyoutSubItem' |
        'Windows.UI.Xaml.Controls.NavigationView' |
        'Windows.UI.Xaml.Controls.NavigationViewItemBase' |
        'Windows.UI.Xaml.Controls.NavigationViewItem' |
        'Windows.UI.Xaml.Controls.NavigationViewItemHeader' |
        'Windows.UI.Xaml.Controls.NavigationViewItemSeparator' |
        'Windows.UI.Xaml.Controls.NavigationViewList' |
        'Windows.UI.Xaml.Controls.UserControl' |
        'Windows.UI.Xaml.Controls.Page' |
        'Windows.UI.Xaml.Controls.ParallaxView' |
        'Windows.UI.Xaml.Controls.PasswordBox' |
        'Windows.UI.Xaml.Controls.PathIcon' |
        'Windows.UI.Xaml.Controls.PersonPicture' |
        'Windows.UI.Xaml.Controls.PickerFlyout' |
        'Windows.UI.Xaml.Controls.PickerFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.Pivot' |
        'Windows.UI.Xaml.Controls.PivotItem' |
        'Windows.UI.Xaml.Controls.Primitives.CalendarPanel' |
        'Windows.UI.Xaml.Controls.VirtualizingPanel' |
        'Windows.UI.Xaml.Controls.Primitives.CarouselPanel' |
        'Windows.UI.Xaml.Controls.Primitives.RangeBase' |
        'Windows.UI.Xaml.Controls.Slider' |
        'Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider' |
        'Windows.UI.Xaml.Controls.Primitives.ColorSpectrum' |
        'Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar' |
        'Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter' |
        'Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter' |
        'Windows.UI.Xaml.Controls.Primitives.LoopingSelector' |
        'Windows.UI.Xaml.Controls.Primitives.LoopingSelectorItem' |
        'Windows.UI.Xaml.Controls.Primitives.LoopingSelectorPanel' |
        'Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter' |
        'Windows.UI.Xaml.Controls.Primitives.OrientedVirtualizingPanel' |
        'Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem' |
        'Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel' |
        'Windows.UI.Xaml.Controls.Primitives.PivotPanel' |
        'Windows.UI.Xaml.Controls.Primitives.Popup' |
        'Windows.UI.Xaml.Controls.Primitives.RepeatButton' |
        'Windows.UI.Xaml.Controls.Primitives.ScrollBar' |
        'Windows.UI.Xaml.Controls.Primitives.Thumb' |
        'Windows.UI.Xaml.Controls.Primitives.TickBar' |
        'Windows.UI.Xaml.Controls.ProgressBar' |
        'Windows.UI.Xaml.Controls.ProgressRing' |
        'Windows.UI.Xaml.Controls.RatingControl' |
        'Windows.UI.Xaml.Controls.RefreshContainer' |
        'Windows.UI.Xaml.Controls.RefreshVisualizer' |
        'Windows.UI.Xaml.Controls.RelativePanel' |
        'Windows.UI.Xaml.Controls.RichEditBox' |
        'Windows.UI.Xaml.Controls.RichTextBlock' |
        'Windows.UI.Xaml.Controls.RichTextBlockOverflow' |
        'Windows.UI.Xaml.Controls.ScrollContentPresenter' |
        'Windows.UI.Xaml.Controls.ScrollViewer' |
        'Windows.UI.Xaml.Controls.SearchBox' |
        'Windows.UI.Xaml.Controls.SemanticZoom' |
        'Windows.UI.Xaml.Controls.SettingsFlyout' |
        'Windows.UI.Xaml.Controls.SplitButton' |
        'Windows.UI.Xaml.Controls.SplitView' |
        'Windows.UI.Xaml.Controls.StackPanel' |
        'Windows.UI.Xaml.Controls.SwapChainBackgroundPanel' |
        'Windows.UI.Xaml.Controls.SwapChainPanel' |
        'Windows.UI.Xaml.Controls.SwipeControl' |
        'Windows.UI.Xaml.Controls.SymbolIcon' |
        'Windows.UI.Xaml.Controls.TextBlock' |
        'Windows.UI.Xaml.Controls.TextBox' |
        'Windows.UI.Xaml.Controls.TextCommandBarFlyout' |
        'Windows.UI.Xaml.Controls.TimePicker' |
        'Windows.UI.Xaml.Controls.TimePickerFlyout' |
        'Windows.UI.Xaml.Controls.TimePickerFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem' |
        'Windows.UI.Xaml.Controls.ToggleSplitButton' |
        'Windows.UI.Xaml.Controls.ToggleSwitch' |
        'Windows.UI.Xaml.Controls.ToolTip' |
        'Windows.UI.Xaml.Controls.TreeView' |
        'Windows.UI.Xaml.Controls.TreeViewItem' |
        'Windows.UI.Xaml.Controls.TreeViewList' |
        'Windows.UI.Xaml.Controls.TwoPaneView' |
        'Windows.UI.Xaml.Controls.VariableSizedWrapGrid' |
        'Windows.UI.Xaml.Controls.Viewbox' |
        'Windows.UI.Xaml.Controls.VirtualizingStackPanel' |
        'Windows.UI.Xaml.Controls.WebView' |
        'Windows.UI.Xaml.Controls.WrapGrid' |
        'Windows.UI.Xaml.Documents.TextElement' |
        'Windows.UI.Xaml.Documents.Block' |
        'Windows.UI.Xaml.Documents.Inline' |
        'Windows.UI.Xaml.Documents.Span' |
        'Windows.UI.Xaml.Documents.Bold' |
        'Windows.UI.Xaml.Documents.ContentLink' |
        'Windows.UI.Xaml.Documents.Glyphs' |
        'Windows.UI.Xaml.Documents.Hyperlink' |
        'Windows.UI.Xaml.Documents.InlineUIContainer' |
        'Windows.UI.Xaml.Documents.Italic' |
        'Windows.UI.Xaml.Documents.LineBreak' |
        'Windows.UI.Xaml.Documents.Paragraph' |
        'Windows.UI.Xaml.Documents.Run' |
        'Windows.UI.Xaml.Documents.Underline' |
        'Windows.UI.Xaml.Input.KeyboardAccelerator' |
        'Windows.UI.Xaml.Shapes.Shape' |
        'Windows.UI.Xaml.Shapes.Ellipse' |
        'Windows.UI.Xaml.Shapes.Line' |
        'Windows.UI.Xaml.Shapes.Path' |
        'Windows.UI.Xaml.Shapes.Polygon' |
        'Windows.UI.Xaml.Shapes.Polyline' |
        'Windows.UI.Xaml.Shapes.Rectangle';
  /**
  * A hint of where this item should be placed within its parent.
  */
  priority?: number; // synthetic property
}
export interface NativeUIElementProps extends NativeDependencyObjectProps {
  type: 'Windows.UI.Xaml.UIElement' |
        'Microsoft.UI.Xaml.Controls.AnimatedIcon' |
        'Microsoft.UI.Xaml.Controls.AnimatedVisualPlayer' |
        'Microsoft.UI.Xaml.Controls.BreadcrumbBar' |
        'Microsoft.UI.Xaml.Controls.BreadcrumbBarItem' |
        'Microsoft.UI.Xaml.Controls.ColorPicker' |
        'Microsoft.UI.Xaml.Controls.DropDownButton' |
        'Microsoft.UI.Xaml.Controls.Expander' |
        'Microsoft.UI.Xaml.Controls.ImageIcon' |
        'Microsoft.UI.Xaml.Controls.InfoBar' |
        'Microsoft.UI.Xaml.Controls.ItemsRepeater' |
        'Microsoft.UI.Xaml.Controls.ItemsRepeaterScrollHost' |
        'Microsoft.UI.Xaml.Controls.MenuBar' |
        'Microsoft.UI.Xaml.Controls.MenuBarItem' |
        'Microsoft.UI.Xaml.Controls.NavigationView' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItemBase' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItem' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItemHeader' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItemSeparator' |
        'Microsoft.UI.Xaml.Controls.NumberBox' |
        'Microsoft.UI.Xaml.Controls.ParallaxView' |
        'Microsoft.UI.Xaml.Controls.PersonPicture' |
        'Microsoft.UI.Xaml.Controls.PipsPager' |
        'Microsoft.UI.Xaml.Controls.Primitives.ColorPickerSlider' |
        'Microsoft.UI.Xaml.Controls.Primitives.ColorSpectrum' |
        'Microsoft.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar' |
        'Microsoft.UI.Xaml.Controls.Primitives.InfoBarPanel' |
        'Microsoft.UI.Xaml.Controls.Primitives.MonochromaticOverlayPresenter' |
        'Microsoft.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter' |
        'Microsoft.UI.Xaml.Controls.Primitives.TabViewListView' |
        'Microsoft.UI.Xaml.Controls.ProgressBar' |
        'Microsoft.UI.Xaml.Controls.ProgressRing' |
        'Microsoft.UI.Xaml.Controls.RadioButtons' |
        'Microsoft.UI.Xaml.Controls.RadioMenuFlyoutItem' |
        'Microsoft.UI.Xaml.Controls.RatingControl' |
        'Microsoft.UI.Xaml.Controls.RefreshContainer' |
        'Microsoft.UI.Xaml.Controls.RefreshVisualizer' |
        'Microsoft.UI.Xaml.Controls.RevealListViewItemPresenter' |
        'Microsoft.UI.Xaml.Controls.SplitButton' |
        'Microsoft.UI.Xaml.Controls.SwipeControl' |
        'Microsoft.UI.Xaml.Controls.TabView' |
        'Microsoft.UI.Xaml.Controls.TabViewItem' |
        'Microsoft.UI.Xaml.Controls.TeachingTip' |
        'Microsoft.UI.Xaml.Controls.ToggleSplitButton' |
        'Microsoft.UI.Xaml.Controls.TreeView' |
        'Microsoft.UI.Xaml.Controls.TreeViewItem' |
        'Microsoft.UI.Xaml.Controls.TreeViewList' |
        'Microsoft.UI.Xaml.Controls.TwoPaneView' |
        'Windows.UI.Xaml.FrameworkElement' |
        'Windows.UI.Xaml.Controls.Control' |
        'Windows.UI.Xaml.Controls.ContentControl' |
        'Windows.UI.Xaml.Controls.AppBar' |
        'Windows.UI.Xaml.Controls.Primitives.ButtonBase' |
        'Windows.UI.Xaml.Controls.Button' |
        'Windows.UI.Xaml.Controls.AppBarButton' |
        'Windows.UI.Xaml.Controls.AppBarElementContainer' |
        'Windows.UI.Xaml.Controls.AppBarSeparator' |
        'Windows.UI.Xaml.Controls.Primitives.ToggleButton' |
        'Windows.UI.Xaml.Controls.AppBarToggleButton' |
        'Windows.UI.Xaml.Controls.ItemsControl' |
        'Windows.UI.Xaml.Controls.AutoSuggestBox' |
        'Windows.UI.Xaml.Controls.IconElement' |
        'Windows.UI.Xaml.Controls.BitmapIcon' |
        'Windows.UI.Xaml.Controls.Border' |
        'Windows.UI.Xaml.Controls.CalendarDatePicker' |
        'Windows.UI.Xaml.Controls.CalendarView' |
        'Windows.UI.Xaml.Controls.CalendarViewDayItem' |
        'Windows.UI.Xaml.Controls.Panel' |
        'Windows.UI.Xaml.Controls.Canvas' |
        'Windows.UI.Xaml.Controls.CaptureElement' |
        'Windows.UI.Xaml.Controls.CheckBox' |
        'Windows.UI.Xaml.Controls.ColorPicker' |
        'Windows.UI.Xaml.Controls.Primitives.Selector' |
        'Windows.UI.Xaml.Controls.ComboBox' |
        'Windows.UI.Xaml.Controls.Primitives.SelectorItem' |
        'Windows.UI.Xaml.Controls.ComboBoxItem' |
        'Windows.UI.Xaml.Controls.CommandBar' |
        'Windows.UI.Xaml.Controls.CommandBarOverflowPresenter' |
        'Windows.UI.Xaml.Controls.ContentDialog' |
        'Windows.UI.Xaml.Controls.ContentPresenter' |
        'Windows.UI.Xaml.Controls.DatePicker' |
        'Windows.UI.Xaml.Controls.DatePickerFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.DropDownButton' |
        'Windows.UI.Xaml.Controls.FlipView' |
        'Windows.UI.Xaml.Controls.FlipViewItem' |
        'Windows.UI.Xaml.Controls.FlyoutPresenter' |
        'Windows.UI.Xaml.Controls.FontIcon' |
        'Windows.UI.Xaml.Controls.Frame' |
        'Windows.UI.Xaml.Controls.Grid' |
        'Windows.UI.Xaml.Controls.ListViewBase' |
        'Windows.UI.Xaml.Controls.GridView' |
        'Windows.UI.Xaml.Controls.ListViewBaseHeaderItem' |
        'Windows.UI.Xaml.Controls.GridViewHeaderItem' |
        'Windows.UI.Xaml.Controls.GridViewItem' |
        'Windows.UI.Xaml.Controls.GroupItem' |
        'Windows.UI.Xaml.Controls.HandwritingView' |
        'Windows.UI.Xaml.Controls.Hub' |
        'Windows.UI.Xaml.Controls.HubSection' |
        'Windows.UI.Xaml.Controls.HyperlinkButton' |
        'Windows.UI.Xaml.Controls.IconSourceElement' |
        'Windows.UI.Xaml.Controls.Image' |
        'Windows.UI.Xaml.Controls.InkCanvas' |
        'Windows.UI.Xaml.Controls.InkToolbar' |
        'Windows.UI.Xaml.Controls.RadioButton' |
        'Windows.UI.Xaml.Controls.InkToolbarToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarToggleButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarEraserButton' |
        'Windows.UI.Xaml.Controls.InkToolbarFlyoutItem' |
        'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton' |
        'Windows.UI.Xaml.Controls.InkToolbarMenuButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPenConfigurationControl' |
        'Windows.UI.Xaml.Controls.InkToolbarPencilButton' |
        'Windows.UI.Xaml.Controls.InkToolbarRulerButton' |
        'Windows.UI.Xaml.Controls.InkToolbarStencilButton' |
        'Windows.UI.Xaml.Controls.ItemsPresenter' |
        'Windows.UI.Xaml.Controls.ItemsStackPanel' |
        'Windows.UI.Xaml.Controls.ItemsWrapGrid' |
        'Windows.UI.Xaml.Controls.ListBox' |
        'Windows.UI.Xaml.Controls.ListBoxItem' |
        'Windows.UI.Xaml.Controls.ListPickerFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.ListView' |
        'Windows.UI.Xaml.Controls.ListViewHeaderItem' |
        'Windows.UI.Xaml.Controls.ListViewItem' |
        'Windows.UI.Xaml.Controls.Maps.MapControl' |
        'Windows.UI.Xaml.Controls.MediaElement' |
        'Windows.UI.Xaml.Controls.MediaPlayerElement' |
        'Windows.UI.Xaml.Controls.MediaPlayerPresenter' |
        'Windows.UI.Xaml.Controls.MediaTransportControls' |
        'Windows.UI.Xaml.Controls.MenuBar' |
        'Windows.UI.Xaml.Controls.MenuBarItem' |
        'Windows.UI.Xaml.Controls.MenuFlyoutItemBase' |
        'Windows.UI.Xaml.Controls.MenuFlyoutItem' |
        'Windows.UI.Xaml.Controls.MenuFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.MenuFlyoutSeparator' |
        'Windows.UI.Xaml.Controls.MenuFlyoutSubItem' |
        'Windows.UI.Xaml.Controls.NavigationView' |
        'Windows.UI.Xaml.Controls.NavigationViewItemBase' |
        'Windows.UI.Xaml.Controls.NavigationViewItem' |
        'Windows.UI.Xaml.Controls.NavigationViewItemHeader' |
        'Windows.UI.Xaml.Controls.NavigationViewItemSeparator' |
        'Windows.UI.Xaml.Controls.NavigationViewList' |
        'Windows.UI.Xaml.Controls.UserControl' |
        'Windows.UI.Xaml.Controls.Page' |
        'Windows.UI.Xaml.Controls.ParallaxView' |
        'Windows.UI.Xaml.Controls.PasswordBox' |
        'Windows.UI.Xaml.Controls.PathIcon' |
        'Windows.UI.Xaml.Controls.PersonPicture' |
        'Windows.UI.Xaml.Controls.PickerFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.Pivot' |
        'Windows.UI.Xaml.Controls.PivotItem' |
        'Windows.UI.Xaml.Controls.Primitives.CalendarPanel' |
        'Windows.UI.Xaml.Controls.VirtualizingPanel' |
        'Windows.UI.Xaml.Controls.Primitives.CarouselPanel' |
        'Windows.UI.Xaml.Controls.Primitives.RangeBase' |
        'Windows.UI.Xaml.Controls.Slider' |
        'Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider' |
        'Windows.UI.Xaml.Controls.Primitives.ColorSpectrum' |
        'Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar' |
        'Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter' |
        'Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter' |
        'Windows.UI.Xaml.Controls.Primitives.LoopingSelector' |
        'Windows.UI.Xaml.Controls.Primitives.LoopingSelectorItem' |
        'Windows.UI.Xaml.Controls.Primitives.LoopingSelectorPanel' |
        'Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter' |
        'Windows.UI.Xaml.Controls.Primitives.OrientedVirtualizingPanel' |
        'Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem' |
        'Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel' |
        'Windows.UI.Xaml.Controls.Primitives.PivotPanel' |
        'Windows.UI.Xaml.Controls.Primitives.Popup' |
        'Windows.UI.Xaml.Controls.Primitives.RepeatButton' |
        'Windows.UI.Xaml.Controls.Primitives.ScrollBar' |
        'Windows.UI.Xaml.Controls.Primitives.Thumb' |
        'Windows.UI.Xaml.Controls.Primitives.TickBar' |
        'Windows.UI.Xaml.Controls.ProgressBar' |
        'Windows.UI.Xaml.Controls.ProgressRing' |
        'Windows.UI.Xaml.Controls.RatingControl' |
        'Windows.UI.Xaml.Controls.RefreshContainer' |
        'Windows.UI.Xaml.Controls.RefreshVisualizer' |
        'Windows.UI.Xaml.Controls.RelativePanel' |
        'Windows.UI.Xaml.Controls.RichEditBox' |
        'Windows.UI.Xaml.Controls.RichTextBlock' |
        'Windows.UI.Xaml.Controls.RichTextBlockOverflow' |
        'Windows.UI.Xaml.Controls.ScrollContentPresenter' |
        'Windows.UI.Xaml.Controls.ScrollViewer' |
        'Windows.UI.Xaml.Controls.SearchBox' |
        'Windows.UI.Xaml.Controls.SemanticZoom' |
        'Windows.UI.Xaml.Controls.SettingsFlyout' |
        'Windows.UI.Xaml.Controls.SplitButton' |
        'Windows.UI.Xaml.Controls.SplitView' |
        'Windows.UI.Xaml.Controls.StackPanel' |
        'Windows.UI.Xaml.Controls.SwapChainBackgroundPanel' |
        'Windows.UI.Xaml.Controls.SwapChainPanel' |
        'Windows.UI.Xaml.Controls.SwipeControl' |
        'Windows.UI.Xaml.Controls.SymbolIcon' |
        'Windows.UI.Xaml.Controls.TextBlock' |
        'Windows.UI.Xaml.Controls.TextBox' |
        'Windows.UI.Xaml.Controls.TimePicker' |
        'Windows.UI.Xaml.Controls.TimePickerFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem' |
        'Windows.UI.Xaml.Controls.ToggleSplitButton' |
        'Windows.UI.Xaml.Controls.ToggleSwitch' |
        'Windows.UI.Xaml.Controls.ToolTip' |
        'Windows.UI.Xaml.Controls.TreeView' |
        'Windows.UI.Xaml.Controls.TreeViewItem' |
        'Windows.UI.Xaml.Controls.TreeViewList' |
        'Windows.UI.Xaml.Controls.TwoPaneView' |
        'Windows.UI.Xaml.Controls.VariableSizedWrapGrid' |
        'Windows.UI.Xaml.Controls.Viewbox' |
        'Windows.UI.Xaml.Controls.VirtualizingStackPanel' |
        'Windows.UI.Xaml.Controls.WebView' |
        'Windows.UI.Xaml.Controls.WrapGrid' |
        'Windows.UI.Xaml.Documents.Glyphs' |
        'Windows.UI.Xaml.Shapes.Shape' |
        'Windows.UI.Xaml.Shapes.Ellipse' |
        'Windows.UI.Xaml.Shapes.Line' |
        'Windows.UI.Xaml.Shapes.Path' |
        'Windows.UI.Xaml.Shapes.Polygon' |
        'Windows.UI.Xaml.Shapes.Polyline' |
        'Windows.UI.Xaml.Shapes.Rectangle';
  opacity?: number;
  manipulationMode?: Enums.ManipulationModes;
  isTapEnabled?: boolean;
  isRightTapEnabled?: boolean;
  isHoldingEnabled?: boolean;
  isHitTestVisible?: boolean;
  isDoubleTapEnabled?: boolean;
  allowDrop?: boolean;
  useLayoutRounding?: boolean;
  visibility?: Enums.Visibility;
  compositeMode?: Enums.ElementCompositeMode;
  canDrag?: boolean;
  isAccessKeyScope?: boolean;
  exitDisplayModeOnAccessKeyInvoked?: boolean;
  accessKey?: string;
  keyTipHorizontalOffset?: number;
  highContrastAdjustment?: Enums.ElementHighContrastAdjustment;
  xyFocusRightNavigationStrategy?: Enums.XYFocusNavigationStrategy;
  xyFocusKeyboardNavigation?: Enums.XYFocusKeyboardNavigationMode;
  xyFocusDownNavigationStrategy?: Enums.XYFocusNavigationStrategy;
  tabFocusNavigation?: Enums.KeyboardNavigationMode;
  keyTipVerticalOffset?: number;
  xyFocusUpNavigationStrategy?: Enums.XYFocusNavigationStrategy;
  keyTipPlacementMode?: Enums.KeyTipPlacementMode;
  xyFocusLeftNavigationStrategy?: Enums.XYFocusNavigationStrategy;
  keyboardAcceleratorPlacementMode?: Enums.KeyboardAcceleratorPlacementMode;
  canBeScrollAnchor?: boolean;
  /**
  * An object of key/value pairs used for lightweight styling.
  */
  resources?: object; // synthetic property
  gridColumn?: number; // attached property
  gridColumnSpan?: number; // attached property
  gridRow?: number; // attached property
  gridRowSpan?: number; // attached property
  onDoubleTapped?: (event: NativeSyntheticEvent<undefined>) => void;
  onDragEnter?: (event: NativeSyntheticEvent<undefined>) => void;
  onDragLeave?: (event: NativeSyntheticEvent<undefined>) => void;
  onDragOver?: (event: NativeSyntheticEvent<undefined>) => void;
  onDrop?: (event: NativeSyntheticEvent<undefined>) => void;
  onGotFocus?: (event: NativeSyntheticEvent<undefined>) => void;
  onHolding?: (event: NativeSyntheticEvent<undefined>) => void;
  onKeyDown?: (event: NativeSyntheticEvent<undefined>) => void;
  onKeyUp?: (event: NativeSyntheticEvent<undefined>) => void;
  onLostFocus?: (event: NativeSyntheticEvent<undefined>) => void;
  onManipulationCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onManipulationDelta?: (event: NativeSyntheticEvent<undefined>) => void;
  onManipulationInertiaStarting?: (event: NativeSyntheticEvent<undefined>) => void;
  onManipulationStarted?: (event: NativeSyntheticEvent<undefined>) => void;
  onManipulationStarting?: (event: NativeSyntheticEvent<undefined>) => void;
  onPointerCanceled?: (event: NativeSyntheticEvent<undefined>) => void;
  onPointerCaptureLost?: (event: NativeSyntheticEvent<undefined>) => void;
  onPointerEntered?: (event: NativeSyntheticEvent<undefined>) => void;
  onPointerExited?: (event: NativeSyntheticEvent<undefined>) => void;
  onPointerMoved?: (event: NativeSyntheticEvent<undefined>) => void;
  onPointerPressed?: (event: NativeSyntheticEvent<undefined>) => void;
  onPointerReleased?: (event: NativeSyntheticEvent<undefined>) => void;
  onPointerWheelChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onRightTapped?: (event: NativeSyntheticEvent<undefined>) => void;
  onTapped?: (event: NativeSyntheticEvent<undefined>) => void;
  onDragStarting?: (event: NativeSyntheticEvent<undefined>) => void;
  onDropCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onAccessKeyDisplayDismissed?: (event: NativeSyntheticEvent<undefined>) => void;
  onAccessKeyDisplayRequested?: (event: NativeSyntheticEvent<undefined>) => void;
  onAccessKeyInvoked?: (event: NativeSyntheticEvent<undefined>) => void;
  onContextCanceled?: (event: NativeSyntheticEvent<undefined>) => void;
  onContextRequested?: (event: NativeSyntheticEvent<undefined>) => void;
  onGettingFocus?: (event: NativeSyntheticEvent<undefined>) => void;
  onLosingFocus?: (event: NativeSyntheticEvent<undefined>) => void;
  onNoFocusCandidateFound?: (event: NativeSyntheticEvent<undefined>) => void;
  onCharacterReceived?: (event: NativeSyntheticEvent<undefined>) => void;
  onPreviewKeyDown?: (event: NativeSyntheticEvent<undefined>) => void;
  onPreviewKeyUp?: (event: NativeSyntheticEvent<undefined>) => void;
  onProcessKeyboardAccelerators?: (event: NativeSyntheticEvent<undefined>) => void;
  onBringIntoViewRequested?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeFrameworkElementProps extends NativeUIElementProps {
  type: 'Windows.UI.Xaml.FrameworkElement' |
        'Microsoft.UI.Xaml.Controls.AnimatedIcon' |
        'Microsoft.UI.Xaml.Controls.AnimatedVisualPlayer' |
        'Microsoft.UI.Xaml.Controls.BreadcrumbBar' |
        'Microsoft.UI.Xaml.Controls.BreadcrumbBarItem' |
        'Microsoft.UI.Xaml.Controls.ColorPicker' |
        'Microsoft.UI.Xaml.Controls.DropDownButton' |
        'Microsoft.UI.Xaml.Controls.Expander' |
        'Microsoft.UI.Xaml.Controls.ImageIcon' |
        'Microsoft.UI.Xaml.Controls.InfoBar' |
        'Microsoft.UI.Xaml.Controls.ItemsRepeater' |
        'Microsoft.UI.Xaml.Controls.ItemsRepeaterScrollHost' |
        'Microsoft.UI.Xaml.Controls.MenuBar' |
        'Microsoft.UI.Xaml.Controls.MenuBarItem' |
        'Microsoft.UI.Xaml.Controls.NavigationView' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItemBase' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItem' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItemHeader' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItemSeparator' |
        'Microsoft.UI.Xaml.Controls.NumberBox' |
        'Microsoft.UI.Xaml.Controls.ParallaxView' |
        'Microsoft.UI.Xaml.Controls.PersonPicture' |
        'Microsoft.UI.Xaml.Controls.PipsPager' |
        'Microsoft.UI.Xaml.Controls.Primitives.ColorPickerSlider' |
        'Microsoft.UI.Xaml.Controls.Primitives.ColorSpectrum' |
        'Microsoft.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar' |
        'Microsoft.UI.Xaml.Controls.Primitives.InfoBarPanel' |
        'Microsoft.UI.Xaml.Controls.Primitives.MonochromaticOverlayPresenter' |
        'Microsoft.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter' |
        'Microsoft.UI.Xaml.Controls.Primitives.TabViewListView' |
        'Microsoft.UI.Xaml.Controls.ProgressBar' |
        'Microsoft.UI.Xaml.Controls.ProgressRing' |
        'Microsoft.UI.Xaml.Controls.RadioButtons' |
        'Microsoft.UI.Xaml.Controls.RadioMenuFlyoutItem' |
        'Microsoft.UI.Xaml.Controls.RatingControl' |
        'Microsoft.UI.Xaml.Controls.RefreshContainer' |
        'Microsoft.UI.Xaml.Controls.RefreshVisualizer' |
        'Microsoft.UI.Xaml.Controls.RevealListViewItemPresenter' |
        'Microsoft.UI.Xaml.Controls.SplitButton' |
        'Microsoft.UI.Xaml.Controls.SwipeControl' |
        'Microsoft.UI.Xaml.Controls.TabView' |
        'Microsoft.UI.Xaml.Controls.TabViewItem' |
        'Microsoft.UI.Xaml.Controls.TeachingTip' |
        'Microsoft.UI.Xaml.Controls.ToggleSplitButton' |
        'Microsoft.UI.Xaml.Controls.TreeView' |
        'Microsoft.UI.Xaml.Controls.TreeViewItem' |
        'Microsoft.UI.Xaml.Controls.TreeViewList' |
        'Microsoft.UI.Xaml.Controls.TwoPaneView' |
        'Windows.UI.Xaml.Controls.Control' |
        'Windows.UI.Xaml.Controls.ContentControl' |
        'Windows.UI.Xaml.Controls.AppBar' |
        'Windows.UI.Xaml.Controls.Primitives.ButtonBase' |
        'Windows.UI.Xaml.Controls.Button' |
        'Windows.UI.Xaml.Controls.AppBarButton' |
        'Windows.UI.Xaml.Controls.AppBarElementContainer' |
        'Windows.UI.Xaml.Controls.AppBarSeparator' |
        'Windows.UI.Xaml.Controls.Primitives.ToggleButton' |
        'Windows.UI.Xaml.Controls.AppBarToggleButton' |
        'Windows.UI.Xaml.Controls.ItemsControl' |
        'Windows.UI.Xaml.Controls.AutoSuggestBox' |
        'Windows.UI.Xaml.Controls.IconElement' |
        'Windows.UI.Xaml.Controls.BitmapIcon' |
        'Windows.UI.Xaml.Controls.Border' |
        'Windows.UI.Xaml.Controls.CalendarDatePicker' |
        'Windows.UI.Xaml.Controls.CalendarView' |
        'Windows.UI.Xaml.Controls.CalendarViewDayItem' |
        'Windows.UI.Xaml.Controls.Panel' |
        'Windows.UI.Xaml.Controls.Canvas' |
        'Windows.UI.Xaml.Controls.CaptureElement' |
        'Windows.UI.Xaml.Controls.CheckBox' |
        'Windows.UI.Xaml.Controls.ColorPicker' |
        'Windows.UI.Xaml.Controls.Primitives.Selector' |
        'Windows.UI.Xaml.Controls.ComboBox' |
        'Windows.UI.Xaml.Controls.Primitives.SelectorItem' |
        'Windows.UI.Xaml.Controls.ComboBoxItem' |
        'Windows.UI.Xaml.Controls.CommandBar' |
        'Windows.UI.Xaml.Controls.CommandBarOverflowPresenter' |
        'Windows.UI.Xaml.Controls.ContentDialog' |
        'Windows.UI.Xaml.Controls.ContentPresenter' |
        'Windows.UI.Xaml.Controls.DatePicker' |
        'Windows.UI.Xaml.Controls.DatePickerFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.DropDownButton' |
        'Windows.UI.Xaml.Controls.FlipView' |
        'Windows.UI.Xaml.Controls.FlipViewItem' |
        'Windows.UI.Xaml.Controls.FlyoutPresenter' |
        'Windows.UI.Xaml.Controls.FontIcon' |
        'Windows.UI.Xaml.Controls.Frame' |
        'Windows.UI.Xaml.Controls.Grid' |
        'Windows.UI.Xaml.Controls.ListViewBase' |
        'Windows.UI.Xaml.Controls.GridView' |
        'Windows.UI.Xaml.Controls.ListViewBaseHeaderItem' |
        'Windows.UI.Xaml.Controls.GridViewHeaderItem' |
        'Windows.UI.Xaml.Controls.GridViewItem' |
        'Windows.UI.Xaml.Controls.GroupItem' |
        'Windows.UI.Xaml.Controls.HandwritingView' |
        'Windows.UI.Xaml.Controls.Hub' |
        'Windows.UI.Xaml.Controls.HubSection' |
        'Windows.UI.Xaml.Controls.HyperlinkButton' |
        'Windows.UI.Xaml.Controls.IconSourceElement' |
        'Windows.UI.Xaml.Controls.Image' |
        'Windows.UI.Xaml.Controls.InkCanvas' |
        'Windows.UI.Xaml.Controls.InkToolbar' |
        'Windows.UI.Xaml.Controls.RadioButton' |
        'Windows.UI.Xaml.Controls.InkToolbarToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarToggleButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarEraserButton' |
        'Windows.UI.Xaml.Controls.InkToolbarFlyoutItem' |
        'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton' |
        'Windows.UI.Xaml.Controls.InkToolbarMenuButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPenConfigurationControl' |
        'Windows.UI.Xaml.Controls.InkToolbarPencilButton' |
        'Windows.UI.Xaml.Controls.InkToolbarRulerButton' |
        'Windows.UI.Xaml.Controls.InkToolbarStencilButton' |
        'Windows.UI.Xaml.Controls.ItemsPresenter' |
        'Windows.UI.Xaml.Controls.ItemsStackPanel' |
        'Windows.UI.Xaml.Controls.ItemsWrapGrid' |
        'Windows.UI.Xaml.Controls.ListBox' |
        'Windows.UI.Xaml.Controls.ListBoxItem' |
        'Windows.UI.Xaml.Controls.ListPickerFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.ListView' |
        'Windows.UI.Xaml.Controls.ListViewHeaderItem' |
        'Windows.UI.Xaml.Controls.ListViewItem' |
        'Windows.UI.Xaml.Controls.Maps.MapControl' |
        'Windows.UI.Xaml.Controls.MediaElement' |
        'Windows.UI.Xaml.Controls.MediaPlayerElement' |
        'Windows.UI.Xaml.Controls.MediaPlayerPresenter' |
        'Windows.UI.Xaml.Controls.MediaTransportControls' |
        'Windows.UI.Xaml.Controls.MenuBar' |
        'Windows.UI.Xaml.Controls.MenuBarItem' |
        'Windows.UI.Xaml.Controls.MenuFlyoutItemBase' |
        'Windows.UI.Xaml.Controls.MenuFlyoutItem' |
        'Windows.UI.Xaml.Controls.MenuFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.MenuFlyoutSeparator' |
        'Windows.UI.Xaml.Controls.MenuFlyoutSubItem' |
        'Windows.UI.Xaml.Controls.NavigationView' |
        'Windows.UI.Xaml.Controls.NavigationViewItemBase' |
        'Windows.UI.Xaml.Controls.NavigationViewItem' |
        'Windows.UI.Xaml.Controls.NavigationViewItemHeader' |
        'Windows.UI.Xaml.Controls.NavigationViewItemSeparator' |
        'Windows.UI.Xaml.Controls.NavigationViewList' |
        'Windows.UI.Xaml.Controls.UserControl' |
        'Windows.UI.Xaml.Controls.Page' |
        'Windows.UI.Xaml.Controls.ParallaxView' |
        'Windows.UI.Xaml.Controls.PasswordBox' |
        'Windows.UI.Xaml.Controls.PathIcon' |
        'Windows.UI.Xaml.Controls.PersonPicture' |
        'Windows.UI.Xaml.Controls.PickerFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.Pivot' |
        'Windows.UI.Xaml.Controls.PivotItem' |
        'Windows.UI.Xaml.Controls.Primitives.CalendarPanel' |
        'Windows.UI.Xaml.Controls.VirtualizingPanel' |
        'Windows.UI.Xaml.Controls.Primitives.CarouselPanel' |
        'Windows.UI.Xaml.Controls.Primitives.RangeBase' |
        'Windows.UI.Xaml.Controls.Slider' |
        'Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider' |
        'Windows.UI.Xaml.Controls.Primitives.ColorSpectrum' |
        'Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar' |
        'Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter' |
        'Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter' |
        'Windows.UI.Xaml.Controls.Primitives.LoopingSelector' |
        'Windows.UI.Xaml.Controls.Primitives.LoopingSelectorItem' |
        'Windows.UI.Xaml.Controls.Primitives.LoopingSelectorPanel' |
        'Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter' |
        'Windows.UI.Xaml.Controls.Primitives.OrientedVirtualizingPanel' |
        'Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem' |
        'Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel' |
        'Windows.UI.Xaml.Controls.Primitives.PivotPanel' |
        'Windows.UI.Xaml.Controls.Primitives.Popup' |
        'Windows.UI.Xaml.Controls.Primitives.RepeatButton' |
        'Windows.UI.Xaml.Controls.Primitives.ScrollBar' |
        'Windows.UI.Xaml.Controls.Primitives.Thumb' |
        'Windows.UI.Xaml.Controls.Primitives.TickBar' |
        'Windows.UI.Xaml.Controls.ProgressBar' |
        'Windows.UI.Xaml.Controls.ProgressRing' |
        'Windows.UI.Xaml.Controls.RatingControl' |
        'Windows.UI.Xaml.Controls.RefreshContainer' |
        'Windows.UI.Xaml.Controls.RefreshVisualizer' |
        'Windows.UI.Xaml.Controls.RelativePanel' |
        'Windows.UI.Xaml.Controls.RichEditBox' |
        'Windows.UI.Xaml.Controls.RichTextBlock' |
        'Windows.UI.Xaml.Controls.RichTextBlockOverflow' |
        'Windows.UI.Xaml.Controls.ScrollContentPresenter' |
        'Windows.UI.Xaml.Controls.ScrollViewer' |
        'Windows.UI.Xaml.Controls.SearchBox' |
        'Windows.UI.Xaml.Controls.SemanticZoom' |
        'Windows.UI.Xaml.Controls.SettingsFlyout' |
        'Windows.UI.Xaml.Controls.SplitButton' |
        'Windows.UI.Xaml.Controls.SplitView' |
        'Windows.UI.Xaml.Controls.StackPanel' |
        'Windows.UI.Xaml.Controls.SwapChainBackgroundPanel' |
        'Windows.UI.Xaml.Controls.SwapChainPanel' |
        'Windows.UI.Xaml.Controls.SwipeControl' |
        'Windows.UI.Xaml.Controls.SymbolIcon' |
        'Windows.UI.Xaml.Controls.TextBlock' |
        'Windows.UI.Xaml.Controls.TextBox' |
        'Windows.UI.Xaml.Controls.TimePicker' |
        'Windows.UI.Xaml.Controls.TimePickerFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem' |
        'Windows.UI.Xaml.Controls.ToggleSplitButton' |
        'Windows.UI.Xaml.Controls.ToggleSwitch' |
        'Windows.UI.Xaml.Controls.ToolTip' |
        'Windows.UI.Xaml.Controls.TreeView' |
        'Windows.UI.Xaml.Controls.TreeViewItem' |
        'Windows.UI.Xaml.Controls.TreeViewList' |
        'Windows.UI.Xaml.Controls.TwoPaneView' |
        'Windows.UI.Xaml.Controls.VariableSizedWrapGrid' |
        'Windows.UI.Xaml.Controls.Viewbox' |
        'Windows.UI.Xaml.Controls.VirtualizingStackPanel' |
        'Windows.UI.Xaml.Controls.WebView' |
        'Windows.UI.Xaml.Controls.WrapGrid' |
        'Windows.UI.Xaml.Documents.Glyphs' |
        'Windows.UI.Xaml.Shapes.Shape' |
        'Windows.UI.Xaml.Shapes.Ellipse' |
        'Windows.UI.Xaml.Shapes.Line' |
        'Windows.UI.Xaml.Shapes.Path' |
        'Windows.UI.Xaml.Shapes.Polygon' |
        'Windows.UI.Xaml.Shapes.Polyline' |
        'Windows.UI.Xaml.Shapes.Rectangle';
  width?: number;
  verticalAlignment?: Enums.VerticalAlignment;
  tag?: object;
  styleKey?: string;
  name?: string;
  minWidth?: number;
  minHeight?: number;
  maxWidth?: number;
  maxHeight?: number;
  xamlMargin?: Thickness;
  language?: string;
  horizontalAlignment?: Enums.HorizontalAlignment;
  height?: number;
  flowDirection?: Enums.FlowDirection;
  dataContext?: object;
  requestedTheme?: Enums.ElementTheme;
  focusVisualSecondaryThickness?: Thickness;
  focusVisualSecondaryBrush?: ColorValue;
  focusVisualPrimaryThickness?: Thickness;
  focusVisualPrimaryBrush?: ColorValue;
  focusVisualMargin?: Thickness;
  allowFocusWhenDisabled?: boolean;
  allowFocusOnInteraction?: boolean;
  onLayoutUpdated?: (event: NativeSyntheticEvent<undefined>) => void;
  onLoaded?: (event: NativeSyntheticEvent<undefined>) => void;
  onSizeChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onUnloaded?: (event: NativeSyntheticEvent<undefined>) => void;
  onDataContextChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onLoading?: (event: NativeSyntheticEvent<undefined>) => void;
  onActualThemeChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onEffectiveViewportChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeControlProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.Control' |
        'Microsoft.UI.Xaml.Controls.BreadcrumbBar' |
        'Microsoft.UI.Xaml.Controls.BreadcrumbBarItem' |
        'Microsoft.UI.Xaml.Controls.ColorPicker' |
        'Microsoft.UI.Xaml.Controls.DropDownButton' |
        'Microsoft.UI.Xaml.Controls.Expander' |
        'Microsoft.UI.Xaml.Controls.InfoBar' |
        'Microsoft.UI.Xaml.Controls.MenuBar' |
        'Microsoft.UI.Xaml.Controls.MenuBarItem' |
        'Microsoft.UI.Xaml.Controls.NavigationView' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItemBase' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItem' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItemHeader' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItemSeparator' |
        'Microsoft.UI.Xaml.Controls.NumberBox' |
        'Microsoft.UI.Xaml.Controls.PersonPicture' |
        'Microsoft.UI.Xaml.Controls.PipsPager' |
        'Microsoft.UI.Xaml.Controls.Primitives.ColorPickerSlider' |
        'Microsoft.UI.Xaml.Controls.Primitives.ColorSpectrum' |
        'Microsoft.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar' |
        'Microsoft.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter' |
        'Microsoft.UI.Xaml.Controls.Primitives.TabViewListView' |
        'Microsoft.UI.Xaml.Controls.ProgressBar' |
        'Microsoft.UI.Xaml.Controls.ProgressRing' |
        'Microsoft.UI.Xaml.Controls.RadioButtons' |
        'Microsoft.UI.Xaml.Controls.RadioMenuFlyoutItem' |
        'Microsoft.UI.Xaml.Controls.RatingControl' |
        'Microsoft.UI.Xaml.Controls.RefreshContainer' |
        'Microsoft.UI.Xaml.Controls.RefreshVisualizer' |
        'Microsoft.UI.Xaml.Controls.SplitButton' |
        'Microsoft.UI.Xaml.Controls.SwipeControl' |
        'Microsoft.UI.Xaml.Controls.TabView' |
        'Microsoft.UI.Xaml.Controls.TabViewItem' |
        'Microsoft.UI.Xaml.Controls.TeachingTip' |
        'Microsoft.UI.Xaml.Controls.ToggleSplitButton' |
        'Microsoft.UI.Xaml.Controls.TreeView' |
        'Microsoft.UI.Xaml.Controls.TreeViewItem' |
        'Microsoft.UI.Xaml.Controls.TreeViewList' |
        'Microsoft.UI.Xaml.Controls.TwoPaneView' |
        'Windows.UI.Xaml.Controls.ContentControl' |
        'Windows.UI.Xaml.Controls.AppBar' |
        'Windows.UI.Xaml.Controls.Primitives.ButtonBase' |
        'Windows.UI.Xaml.Controls.Button' |
        'Windows.UI.Xaml.Controls.AppBarButton' |
        'Windows.UI.Xaml.Controls.AppBarElementContainer' |
        'Windows.UI.Xaml.Controls.AppBarSeparator' |
        'Windows.UI.Xaml.Controls.Primitives.ToggleButton' |
        'Windows.UI.Xaml.Controls.AppBarToggleButton' |
        'Windows.UI.Xaml.Controls.ItemsControl' |
        'Windows.UI.Xaml.Controls.AutoSuggestBox' |
        'Windows.UI.Xaml.Controls.CalendarDatePicker' |
        'Windows.UI.Xaml.Controls.CalendarView' |
        'Windows.UI.Xaml.Controls.CalendarViewDayItem' |
        'Windows.UI.Xaml.Controls.CheckBox' |
        'Windows.UI.Xaml.Controls.ColorPicker' |
        'Windows.UI.Xaml.Controls.Primitives.Selector' |
        'Windows.UI.Xaml.Controls.ComboBox' |
        'Windows.UI.Xaml.Controls.Primitives.SelectorItem' |
        'Windows.UI.Xaml.Controls.ComboBoxItem' |
        'Windows.UI.Xaml.Controls.CommandBar' |
        'Windows.UI.Xaml.Controls.CommandBarOverflowPresenter' |
        'Windows.UI.Xaml.Controls.ContentDialog' |
        'Windows.UI.Xaml.Controls.DatePicker' |
        'Windows.UI.Xaml.Controls.DatePickerFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.DropDownButton' |
        'Windows.UI.Xaml.Controls.FlipView' |
        'Windows.UI.Xaml.Controls.FlipViewItem' |
        'Windows.UI.Xaml.Controls.FlyoutPresenter' |
        'Windows.UI.Xaml.Controls.Frame' |
        'Windows.UI.Xaml.Controls.ListViewBase' |
        'Windows.UI.Xaml.Controls.GridView' |
        'Windows.UI.Xaml.Controls.ListViewBaseHeaderItem' |
        'Windows.UI.Xaml.Controls.GridViewHeaderItem' |
        'Windows.UI.Xaml.Controls.GridViewItem' |
        'Windows.UI.Xaml.Controls.GroupItem' |
        'Windows.UI.Xaml.Controls.HandwritingView' |
        'Windows.UI.Xaml.Controls.Hub' |
        'Windows.UI.Xaml.Controls.HubSection' |
        'Windows.UI.Xaml.Controls.HyperlinkButton' |
        'Windows.UI.Xaml.Controls.InkToolbar' |
        'Windows.UI.Xaml.Controls.RadioButton' |
        'Windows.UI.Xaml.Controls.InkToolbarToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarToggleButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarEraserButton' |
        'Windows.UI.Xaml.Controls.InkToolbarFlyoutItem' |
        'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton' |
        'Windows.UI.Xaml.Controls.InkToolbarMenuButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPenConfigurationControl' |
        'Windows.UI.Xaml.Controls.InkToolbarPencilButton' |
        'Windows.UI.Xaml.Controls.InkToolbarRulerButton' |
        'Windows.UI.Xaml.Controls.InkToolbarStencilButton' |
        'Windows.UI.Xaml.Controls.ListBox' |
        'Windows.UI.Xaml.Controls.ListBoxItem' |
        'Windows.UI.Xaml.Controls.ListPickerFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.ListView' |
        'Windows.UI.Xaml.Controls.ListViewHeaderItem' |
        'Windows.UI.Xaml.Controls.ListViewItem' |
        'Windows.UI.Xaml.Controls.Maps.MapControl' |
        'Windows.UI.Xaml.Controls.MediaPlayerElement' |
        'Windows.UI.Xaml.Controls.MediaTransportControls' |
        'Windows.UI.Xaml.Controls.MenuBar' |
        'Windows.UI.Xaml.Controls.MenuBarItem' |
        'Windows.UI.Xaml.Controls.MenuFlyoutItemBase' |
        'Windows.UI.Xaml.Controls.MenuFlyoutItem' |
        'Windows.UI.Xaml.Controls.MenuFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.MenuFlyoutSeparator' |
        'Windows.UI.Xaml.Controls.MenuFlyoutSubItem' |
        'Windows.UI.Xaml.Controls.NavigationView' |
        'Windows.UI.Xaml.Controls.NavigationViewItemBase' |
        'Windows.UI.Xaml.Controls.NavigationViewItem' |
        'Windows.UI.Xaml.Controls.NavigationViewItemHeader' |
        'Windows.UI.Xaml.Controls.NavigationViewItemSeparator' |
        'Windows.UI.Xaml.Controls.NavigationViewList' |
        'Windows.UI.Xaml.Controls.UserControl' |
        'Windows.UI.Xaml.Controls.Page' |
        'Windows.UI.Xaml.Controls.PasswordBox' |
        'Windows.UI.Xaml.Controls.PersonPicture' |
        'Windows.UI.Xaml.Controls.PickerFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.Pivot' |
        'Windows.UI.Xaml.Controls.PivotItem' |
        'Windows.UI.Xaml.Controls.Primitives.RangeBase' |
        'Windows.UI.Xaml.Controls.Slider' |
        'Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider' |
        'Windows.UI.Xaml.Controls.Primitives.ColorSpectrum' |
        'Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar' |
        'Windows.UI.Xaml.Controls.Primitives.LoopingSelector' |
        'Windows.UI.Xaml.Controls.Primitives.LoopingSelectorItem' |
        'Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter' |
        'Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem' |
        'Windows.UI.Xaml.Controls.Primitives.RepeatButton' |
        'Windows.UI.Xaml.Controls.Primitives.ScrollBar' |
        'Windows.UI.Xaml.Controls.Primitives.Thumb' |
        'Windows.UI.Xaml.Controls.ProgressBar' |
        'Windows.UI.Xaml.Controls.ProgressRing' |
        'Windows.UI.Xaml.Controls.RatingControl' |
        'Windows.UI.Xaml.Controls.RefreshContainer' |
        'Windows.UI.Xaml.Controls.RefreshVisualizer' |
        'Windows.UI.Xaml.Controls.RichEditBox' |
        'Windows.UI.Xaml.Controls.ScrollViewer' |
        'Windows.UI.Xaml.Controls.SearchBox' |
        'Windows.UI.Xaml.Controls.SemanticZoom' |
        'Windows.UI.Xaml.Controls.SettingsFlyout' |
        'Windows.UI.Xaml.Controls.SplitButton' |
        'Windows.UI.Xaml.Controls.SplitView' |
        'Windows.UI.Xaml.Controls.SwipeControl' |
        'Windows.UI.Xaml.Controls.TextBox' |
        'Windows.UI.Xaml.Controls.TimePicker' |
        'Windows.UI.Xaml.Controls.TimePickerFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem' |
        'Windows.UI.Xaml.Controls.ToggleSplitButton' |
        'Windows.UI.Xaml.Controls.ToggleSwitch' |
        'Windows.UI.Xaml.Controls.ToolTip' |
        'Windows.UI.Xaml.Controls.TreeView' |
        'Windows.UI.Xaml.Controls.TreeViewItem' |
        'Windows.UI.Xaml.Controls.TreeViewList' |
        'Windows.UI.Xaml.Controls.TwoPaneView';
  xamlPadding?: Thickness;
  isTabStop?: boolean;
  isEnabled?: boolean;
  horizontalContentAlignment?: Enums.HorizontalAlignment;
  foreground?: ColorValue;
  fontWeight?: number;
  fontStyle?: Enums.FontStyle;
  fontStretch?: Enums.FontStretch;
  fontSize?: number;
  fontFamily?: string;
  tabIndex?: number;
  characterSpacing?: number;
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  tabNavigation?: Enums.KeyboardNavigationMode;
  background?: ColorValue;
  verticalContentAlignment?: Enums.VerticalAlignment;
  isTextScaleFactorEnabled?: boolean;
  useSystemFocusVisuals?: boolean;
  requiresPointer?: Enums.RequiresPointer;
  isFocusEngagementEnabled?: boolean;
  isFocusEngaged?: boolean;
  elementSoundMode?: Enums.ElementSoundMode;
  defaultStyleResourceUri?: string;
  cornerRadius?: CornerRadius;
  backgroundSizing?: Enums.BackgroundSizing;
  defaultStyleKey?: object;
  onIsEnabledChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onFocusDisengaged?: (event: NativeSyntheticEvent<undefined>) => void;
  onFocusEngaged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeContentControlProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.ContentControl' |
        'Microsoft.UI.Xaml.Controls.BreadcrumbBarItem' |
        'Microsoft.UI.Xaml.Controls.DropDownButton' |
        'Microsoft.UI.Xaml.Controls.Expander' |
        'Microsoft.UI.Xaml.Controls.NavigationView' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItemBase' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItem' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItemHeader' |
        'Microsoft.UI.Xaml.Controls.NavigationViewItemSeparator' |
        'Microsoft.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar' |
        'Microsoft.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter' |
        'Microsoft.UI.Xaml.Controls.RefreshContainer' |
        'Microsoft.UI.Xaml.Controls.SplitButton' |
        'Microsoft.UI.Xaml.Controls.SwipeControl' |
        'Microsoft.UI.Xaml.Controls.TabViewItem' |
        'Microsoft.UI.Xaml.Controls.TeachingTip' |
        'Microsoft.UI.Xaml.Controls.ToggleSplitButton' |
        'Microsoft.UI.Xaml.Controls.TreeViewItem' |
        'Windows.UI.Xaml.Controls.AppBar' |
        'Windows.UI.Xaml.Controls.Primitives.ButtonBase' |
        'Windows.UI.Xaml.Controls.Button' |
        'Windows.UI.Xaml.Controls.AppBarButton' |
        'Windows.UI.Xaml.Controls.AppBarElementContainer' |
        'Windows.UI.Xaml.Controls.Primitives.ToggleButton' |
        'Windows.UI.Xaml.Controls.AppBarToggleButton' |
        'Windows.UI.Xaml.Controls.CheckBox' |
        'Windows.UI.Xaml.Controls.Primitives.SelectorItem' |
        'Windows.UI.Xaml.Controls.ComboBoxItem' |
        'Windows.UI.Xaml.Controls.CommandBar' |
        'Windows.UI.Xaml.Controls.ContentDialog' |
        'Windows.UI.Xaml.Controls.DropDownButton' |
        'Windows.UI.Xaml.Controls.FlipViewItem' |
        'Windows.UI.Xaml.Controls.FlyoutPresenter' |
        'Windows.UI.Xaml.Controls.Frame' |
        'Windows.UI.Xaml.Controls.ListViewBaseHeaderItem' |
        'Windows.UI.Xaml.Controls.GridViewHeaderItem' |
        'Windows.UI.Xaml.Controls.GridViewItem' |
        'Windows.UI.Xaml.Controls.GroupItem' |
        'Windows.UI.Xaml.Controls.HyperlinkButton' |
        'Windows.UI.Xaml.Controls.RadioButton' |
        'Windows.UI.Xaml.Controls.InkToolbarToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarToggleButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarEraserButton' |
        'Windows.UI.Xaml.Controls.InkToolbarFlyoutItem' |
        'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton' |
        'Windows.UI.Xaml.Controls.InkToolbarMenuButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPencilButton' |
        'Windows.UI.Xaml.Controls.InkToolbarRulerButton' |
        'Windows.UI.Xaml.Controls.InkToolbarStencilButton' |
        'Windows.UI.Xaml.Controls.ListBoxItem' |
        'Windows.UI.Xaml.Controls.ListViewHeaderItem' |
        'Windows.UI.Xaml.Controls.ListViewItem' |
        'Windows.UI.Xaml.Controls.NavigationView' |
        'Windows.UI.Xaml.Controls.NavigationViewItemBase' |
        'Windows.UI.Xaml.Controls.NavigationViewItem' |
        'Windows.UI.Xaml.Controls.NavigationViewItemHeader' |
        'Windows.UI.Xaml.Controls.NavigationViewItemSeparator' |
        'Windows.UI.Xaml.Controls.PickerFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.PivotItem' |
        'Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar' |
        'Windows.UI.Xaml.Controls.Primitives.LoopingSelectorItem' |
        'Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter' |
        'Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem' |
        'Windows.UI.Xaml.Controls.Primitives.RepeatButton' |
        'Windows.UI.Xaml.Controls.RefreshContainer' |
        'Windows.UI.Xaml.Controls.ScrollViewer' |
        'Windows.UI.Xaml.Controls.SettingsFlyout' |
        'Windows.UI.Xaml.Controls.SplitButton' |
        'Windows.UI.Xaml.Controls.SwipeControl' |
        'Windows.UI.Xaml.Controls.ToggleSplitButton' |
        'Windows.UI.Xaml.Controls.ToolTip' |
        'Windows.UI.Xaml.Controls.TreeViewItem';
  content?: string;
}
export interface NativeAppBarProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.AppBar' | 'Microsoft.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar' | 'Windows.UI.Xaml.Controls.CommandBar' | 'Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar';
  isSticky?: boolean;
  isOpen?: boolean;
  closedDisplayMode?: Enums.AppBarClosedDisplayMode;
  lightDismissOverlayMode?: Enums.LightDismissOverlayMode;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosing?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpening?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeButtonBaseProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.ButtonBase' |
        'Microsoft.UI.Xaml.Controls.DropDownButton' |
        'Windows.UI.Xaml.Controls.Button' |
        'Windows.UI.Xaml.Controls.AppBarButton' |
        'Windows.UI.Xaml.Controls.Primitives.ToggleButton' |
        'Windows.UI.Xaml.Controls.AppBarToggleButton' |
        'Windows.UI.Xaml.Controls.CheckBox' |
        'Windows.UI.Xaml.Controls.DropDownButton' |
        'Windows.UI.Xaml.Controls.HyperlinkButton' |
        'Windows.UI.Xaml.Controls.RadioButton' |
        'Windows.UI.Xaml.Controls.InkToolbarToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarToggleButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarEraserButton' |
        'Windows.UI.Xaml.Controls.InkToolbarFlyoutItem' |
        'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton' |
        'Windows.UI.Xaml.Controls.InkToolbarMenuButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPencilButton' |
        'Windows.UI.Xaml.Controls.InkToolbarRulerButton' |
        'Windows.UI.Xaml.Controls.InkToolbarStencilButton' |
        'Windows.UI.Xaml.Controls.Primitives.RepeatButton';
  commandParameter?: object;
  clickMode?: Enums.ClickMode;
  onClick?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeButtonProps extends NativeButtonBaseProps {
  type: 'Windows.UI.Xaml.Controls.Button' | 'Microsoft.UI.Xaml.Controls.DropDownButton' | 'Windows.UI.Xaml.Controls.AppBarButton' | 'Windows.UI.Xaml.Controls.DropDownButton';
}
export interface NativeAppBarButtonProps extends NativeButtonProps {
  type: 'Windows.UI.Xaml.Controls.AppBarButton';
  label?: string;
  labelPosition?: Enums.CommandBarLabelPosition;
  keyboardAcceleratorTextOverride?: string;
  isCompact?: boolean;
  dynamicOverflowOrder?: number;
}
export interface NativeAppBarElementContainerProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.AppBarElementContainer';
  isCompact?: boolean;
  dynamicOverflowOrder?: number;
}
export interface NativeAppBarSeparatorProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.AppBarSeparator';
  isCompact?: boolean;
  dynamicOverflowOrder?: number;
}
export interface NativeToggleButtonProps extends NativeButtonBaseProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.ToggleButton' |
        'Windows.UI.Xaml.Controls.AppBarToggleButton' |
        'Windows.UI.Xaml.Controls.CheckBox' |
        'Windows.UI.Xaml.Controls.RadioButton' |
        'Windows.UI.Xaml.Controls.InkToolbarToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarToggleButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarEraserButton' |
        'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton' |
        'Windows.UI.Xaml.Controls.InkToolbarMenuButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPencilButton' |
        'Windows.UI.Xaml.Controls.InkToolbarRulerButton' |
        'Windows.UI.Xaml.Controls.InkToolbarStencilButton';
  isThreeState?: boolean;
  onChecked?: (event: NativeSyntheticEvent<undefined>) => void;
  onIndeterminate?: (event: NativeSyntheticEvent<undefined>) => void;
  onUnchecked?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeAppBarToggleButtonProps extends NativeToggleButtonProps {
  type: 'Windows.UI.Xaml.Controls.AppBarToggleButton';
  label?: string;
  labelPosition?: Enums.CommandBarLabelPosition;
  keyboardAcceleratorTextOverride?: string;
  isCompact?: boolean;
  dynamicOverflowOrder?: number;
}
export interface NativeItemsControlProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.ItemsControl' |
        'Microsoft.UI.Xaml.Controls.Primitives.TabViewListView' |
        'Microsoft.UI.Xaml.Controls.TreeViewList' |
        'Windows.UI.Xaml.Controls.AutoSuggestBox' |
        'Windows.UI.Xaml.Controls.Primitives.Selector' |
        'Windows.UI.Xaml.Controls.ComboBox' |
        'Windows.UI.Xaml.Controls.CommandBarOverflowPresenter' |
        'Windows.UI.Xaml.Controls.FlipView' |
        'Windows.UI.Xaml.Controls.ListViewBase' |
        'Windows.UI.Xaml.Controls.GridView' |
        'Windows.UI.Xaml.Controls.ListBox' |
        'Windows.UI.Xaml.Controls.ListView' |
        'Windows.UI.Xaml.Controls.MenuFlyoutPresenter' |
        'Windows.UI.Xaml.Controls.NavigationViewList' |
        'Windows.UI.Xaml.Controls.Pivot' |
        'Windows.UI.Xaml.Controls.TreeViewList';
  itemsSource?: object;
  itemContainerStyle?: string;
  displayMemberPath?: string;
}
export interface NativeAutoSuggestBoxProps extends NativeItemsControlProps {
  type: 'Windows.UI.Xaml.Controls.AutoSuggestBox';
  updateTextOnSelect?: boolean;
  textMemberPath?: string;
  textBoxStyle?: string;
  text?: string;
  placeholderText?: string;
  maxSuggestionListHeight?: number;
  isSuggestionListOpen?: boolean;
  header?: object;
  autoMaximizeSuggestionArea?: boolean;
  lightDismissOverlayMode?: Enums.LightDismissOverlayMode;
  description?: object;
  onSuggestionChosen?: (event: NativeSyntheticEvent<undefined>) => void;
  onTextChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onQuerySubmitted?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeIconElementProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.IconElement' |
        'Microsoft.UI.Xaml.Controls.AnimatedIcon' |
        'Microsoft.UI.Xaml.Controls.ImageIcon' |
        'Windows.UI.Xaml.Controls.BitmapIcon' |
        'Windows.UI.Xaml.Controls.FontIcon' |
        'Windows.UI.Xaml.Controls.IconSourceElement' |
        'Windows.UI.Xaml.Controls.PathIcon' |
        'Windows.UI.Xaml.Controls.SymbolIcon';
  foreground?: ColorValue;
}
export interface NativeBitmapIconProps extends NativeIconElementProps {
  type: 'Windows.UI.Xaml.Controls.BitmapIcon';
  uriSource?: string;
  showAsMonochrome?: boolean;
}
export interface NativeBorderProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.Border';
  padding?: Thickness;
  cornerRadius?: CornerRadius;
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  background?: ColorValue;
  backgroundSizing?: Enums.BackgroundSizing;
}
export interface NativeCalendarDatePickerProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.CalendarDatePicker';
  placeholderText?: string;
  isTodayHighlighted?: boolean;
  isOutOfScopeEnabled?: boolean;
  isGroupLabelVisible?: boolean;
  isCalendarOpen?: boolean;
  header?: object;
  firstDayOfWeek?: Enums.DayOfWeek;
  displayMode?: Enums.CalendarViewDisplayMode;
  dayOfWeekFormat?: string;
  dateFormat?: string;
  calendarViewStyle?: string;
  calendarIdentifier?: string;
  lightDismissOverlayMode?: Enums.LightDismissOverlayMode;
  description?: object;
  onCalendarViewDayItemChanging?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onDateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeCalendarViewProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.CalendarView';
  horizontalFirstOfMonthLabelAlignment?: Enums.HorizontalAlignment;
  horizontalDayItemAlignment?: Enums.HorizontalAlignment;
  focusBorderBrush?: ColorValue;
  firstOfYearDecadeLabelFontWeight?: number;
  firstOfYearDecadeLabelFontStyle?: Enums.FontStyle;
  monthYearItemFontFamily?: string;
  firstOfYearDecadeLabelFontFamily?: string;
  firstOfMonthLabelFontWeight?: number;
  firstOfMonthLabelFontStyle?: Enums.FontStyle;
  firstOfMonthLabelFontSize?: number;
  firstOfMonthLabelFontFamily?: string;
  firstDayOfWeek?: Enums.DayOfWeek;
  blackoutForeground?: ColorValue;
  dayOfWeekFormat?: string;
  dayItemFontWeight?: number;
  dayItemFontStyle?: Enums.FontStyle;
  dayItemFontSize?: number;
  dayItemFontFamily?: string;
  selectedPressedBorderBrush?: ColorValue;
  calendarItemForeground?: ColorValue;
  calendarItemBorderThickness?: Thickness;
  calendarItemBorderBrush?: ColorValue;
  calendarItemBackground?: ColorValue;
  calendarIdentifier?: string;
  displayMode?: Enums.CalendarViewDisplayMode;
  hoverBorderBrush?: ColorValue;
  pressedBorderBrush?: ColorValue;
  verticalDayItemAlignment?: Enums.VerticalAlignment;
  todayForeground?: ColorValue;
  todayFontWeight?: number;
  selectionMode?: Enums.CalendarViewSelectionMode;
  calendarViewDayItemStyle?: string;
  selectedHoverBorderBrush?: ColorValue;
  selectedForeground?: ColorValue;
  selectedBorderBrush?: ColorValue;
  pressedForeground?: ColorValue;
  verticalFirstOfMonthLabelAlignment?: Enums.VerticalAlignment;
  outOfScopeForeground?: ColorValue;
  outOfScopeBackground?: ColorValue;
  numberOfWeeksInView?: number;
  monthYearItemFontWeight?: number;
  monthYearItemFontStyle?: Enums.FontStyle;
  monthYearItemFontSize?: number;
  firstOfYearDecadeLabelFontSize?: number;
  isTodayHighlighted?: boolean;
  isOutOfScopeEnabled?: boolean;
  isGroupLabelVisible?: boolean;
  onCalendarViewDayItemChanging?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectedDatesChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeCalendarViewDayItemProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.CalendarViewDayItem';
  isBlackout?: boolean;
}
export interface NativePanelProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.Panel' |
        'Microsoft.UI.Xaml.Controls.Primitives.InfoBarPanel' |
        'Microsoft.UI.Xaml.Controls.Primitives.MonochromaticOverlayPresenter' |
        'Windows.UI.Xaml.Controls.Canvas' |
        'Windows.UI.Xaml.Controls.Grid' |
        'Windows.UI.Xaml.Controls.ItemsStackPanel' |
        'Windows.UI.Xaml.Controls.ItemsWrapGrid' |
        'Windows.UI.Xaml.Controls.Primitives.CalendarPanel' |
        'Windows.UI.Xaml.Controls.VirtualizingPanel' |
        'Windows.UI.Xaml.Controls.Primitives.CarouselPanel' |
        'Windows.UI.Xaml.Controls.Primitives.LoopingSelectorPanel' |
        'Windows.UI.Xaml.Controls.Primitives.OrientedVirtualizingPanel' |
        'Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel' |
        'Windows.UI.Xaml.Controls.Primitives.PivotPanel' |
        'Windows.UI.Xaml.Controls.RelativePanel' |
        'Windows.UI.Xaml.Controls.StackPanel' |
        'Windows.UI.Xaml.Controls.SwapChainBackgroundPanel' |
        'Windows.UI.Xaml.Controls.SwapChainPanel' |
        'Windows.UI.Xaml.Controls.VariableSizedWrapGrid' |
        'Windows.UI.Xaml.Controls.VirtualizingStackPanel' |
        'Windows.UI.Xaml.Controls.WrapGrid';
  background?: ColorValue;
}
export interface NativeCanvasProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.Canvas' | 'Windows.UI.Xaml.Controls.Primitives.LoopingSelectorPanel' | 'Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel';
}
export interface NativeCaptureElementProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.CaptureElement';
  stretch?: Enums.Stretch;
}
export interface NativeCheckBoxProps extends NativeToggleButtonProps {
  type: 'Windows.UI.Xaml.Controls.CheckBox' | 'Windows.UI.Xaml.Controls.InkToolbarToggleButton' | 'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton' | 'Windows.UI.Xaml.Controls.InkToolbarRulerButton';
}
export interface NativeColorPickerProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.ColorPicker';
  minValue?: number;
  minSaturation?: number;
  minHue?: number;
  maxValue?: number;
  maxSaturation?: number;
  maxHue?: number;
  isMoreButtonVisible?: boolean;
  isHexInputVisible?: boolean;
  isColorSpectrumVisible?: boolean;
  isColorSliderVisible?: boolean;
  isColorPreviewVisible?: boolean;
  isColorChannelTextInputVisible?: boolean;
  isAlphaTextInputVisible?: boolean;
  isAlphaSliderVisible?: boolean;
  isAlphaEnabled?: boolean;
  colorSpectrumShape?: Enums.ColorSpectrumShape;
  colorSpectrumComponents?: Enums.ColorSpectrumComponents;
  onColorChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeSelectorProps extends NativeItemsControlProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.Selector' |
        'Microsoft.UI.Xaml.Controls.Primitives.TabViewListView' |
        'Microsoft.UI.Xaml.Controls.TreeViewList' |
        'Windows.UI.Xaml.Controls.ComboBox' |
        'Windows.UI.Xaml.Controls.FlipView' |
        'Windows.UI.Xaml.Controls.ListViewBase' |
        'Windows.UI.Xaml.Controls.GridView' |
        'Windows.UI.Xaml.Controls.ListBox' |
        'Windows.UI.Xaml.Controls.ListView' |
        'Windows.UI.Xaml.Controls.NavigationViewList' |
        'Windows.UI.Xaml.Controls.TreeViewList';
  selectedValuePath?: string;
  selectedValue?: object;
  selectedItem?: object;
  selectedIndex?: number;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeComboBoxProps extends NativeSelectorProps {
  type: 'Windows.UI.Xaml.Controls.ComboBox';
  maxDropDownHeight?: number;
  isEditable?: boolean;
  isDropDownOpen?: boolean;
  placeholderText?: string;
  header?: object;
  lightDismissOverlayMode?: Enums.LightDismissOverlayMode;
  isTextSearchEnabled?: boolean;
  selectionChangedTrigger?: Enums.ComboBoxSelectionChangedTrigger;
  placeholderForeground?: ColorValue;
  textBoxStyle?: string;
  text?: string;
  description?: object;
  onDropDownClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onDropDownOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onTextSubmitted?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeSelectorItemProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.SelectorItem' |
        'Microsoft.UI.Xaml.Controls.TabViewItem' |
        'Microsoft.UI.Xaml.Controls.TreeViewItem' |
        'Windows.UI.Xaml.Controls.ComboBoxItem' |
        'Windows.UI.Xaml.Controls.FlipViewItem' |
        'Windows.UI.Xaml.Controls.GridViewItem' |
        'Windows.UI.Xaml.Controls.ListBoxItem' |
        'Windows.UI.Xaml.Controls.ListViewItem' |
        'Windows.UI.Xaml.Controls.NavigationViewItemBase' |
        'Windows.UI.Xaml.Controls.NavigationViewItem' |
        'Windows.UI.Xaml.Controls.NavigationViewItemHeader' |
        'Windows.UI.Xaml.Controls.NavigationViewItemSeparator' |
        'Windows.UI.Xaml.Controls.TreeViewItem';
  isSelected?: boolean;
}
export interface NativeComboBoxItemProps extends NativeSelectorItemProps {
  type: 'Windows.UI.Xaml.Controls.ComboBoxItem';
}
export interface NativeCommandBarProps extends NativeAppBarProps {
  type: 'Windows.UI.Xaml.Controls.CommandBar' | 'Microsoft.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar' | 'Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar';
  commandBarOverflowPresenterStyle?: string;
  overflowButtonVisibility?: Enums.CommandBarOverflowButtonVisibility;
  isDynamicOverflowEnabled?: boolean;
  defaultLabelPosition?: Enums.CommandBarDefaultLabelPosition;
  onDynamicOverflowItemsChanging?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeFlyoutBaseProps extends NativeDependencyObjectProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.FlyoutBase' |
        'Microsoft.UI.Xaml.Controls.CommandBarFlyout' |
        'Microsoft.UI.Xaml.Controls.MenuBarItemFlyout' |
        'Microsoft.UI.Xaml.Controls.TextCommandBarFlyout' |
        'Windows.UI.Xaml.Controls.CommandBarFlyout' |
        'Windows.UI.Xaml.Controls.Primitives.PickerFlyoutBase' |
        'Windows.UI.Xaml.Controls.DatePickerFlyout' |
        'Windows.UI.Xaml.Controls.Flyout' |
        'Windows.UI.Xaml.Controls.ListPickerFlyout' |
        'Windows.UI.Xaml.Controls.MenuFlyout' |
        'Windows.UI.Xaml.Controls.MenuBarItemFlyout' |
        'Windows.UI.Xaml.Controls.PickerFlyout' |
        'Windows.UI.Xaml.Controls.TextCommandBarFlyout' |
        'Windows.UI.Xaml.Controls.TimePickerFlyout';
  placement?: Enums.FlyoutPlacementMode;
  lightDismissOverlayMode?: Enums.LightDismissOverlayMode;
  elementSoundMode?: Enums.ElementSoundMode;
  allowFocusWhenDisabled?: boolean;
  allowFocusOnInteraction?: boolean;
  showMode?: Enums.FlyoutShowMode;
  areOpenCloseAnimationsEnabled?: boolean;
  shouldConstrainToRootBounds?: boolean;
  isOpen?: boolean; // synthetic property
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpening?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosing?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeCommandBarFlyoutProps extends NativeFlyoutBaseProps {
  type: 'Windows.UI.Xaml.Controls.CommandBarFlyout' | 'Windows.UI.Xaml.Controls.TextCommandBarFlyout';
}
export interface NativeCommandBarOverflowPresenterProps extends NativeItemsControlProps {
  type: 'Windows.UI.Xaml.Controls.CommandBarOverflowPresenter';
}
export interface NativeContentDialogProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.ContentDialog';
  title?: object;
  secondaryButtonText?: string;
  secondaryButtonCommandParameter?: object;
  primaryButtonText?: string;
  primaryButtonCommandParameter?: object;
  isSecondaryButtonEnabled?: boolean;
  isPrimaryButtonEnabled?: boolean;
  fullSizeDesired?: boolean;
  secondaryButtonStyle?: string;
  primaryButtonStyle?: string;
  defaultButton?: Enums.ContentDialogButton;
  closeButtonText?: string;
  closeButtonStyle?: string;
  closeButtonCommandParameter?: object;
  /**
  * Whether the content dialog should be open, and how.
  */
  showState?: Enums.ContentDialogState; // synthetic property
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosing?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onPrimaryButtonClick?: (event: NativeSyntheticEvent<undefined>) => void;
  onSecondaryButtonClick?: (event: NativeSyntheticEvent<undefined>) => void;
  onCloseButtonClick?: (event: NativeSyntheticEvent<undefined>) => void;
  onContentDialogClosed?: (event: NativeSyntheticEvent<Enums.ContentDialogResult>) => void;
}
export interface NativeContentPresenterProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.ContentPresenter' |
        'Microsoft.UI.Xaml.Controls.RevealListViewItemPresenter' |
        'Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter' |
        'Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter' |
        'Windows.UI.Xaml.Controls.ScrollContentPresenter';
  foreground?: ColorValue;
  fontWeight?: number;
  fontStyle?: Enums.FontStyle;
  fontStretch?: Enums.FontStretch;
  fontSize?: number;
  fontFamily?: string;
  content?: string;
  characterSpacing?: number;
  textLineBounds?: Enums.TextLineBounds;
  opticalMarginAlignment?: Enums.OpticalMarginAlignment;
  isTextScaleFactorEnabled?: boolean;
  verticalContentAlignment?: Enums.VerticalAlignment;
  textWrapping?: Enums.TextWrapping;
  padding?: Thickness;
  maxLines?: number;
  lineStackingStrategy?: Enums.LineStackingStrategy;
  lineHeight?: number;
  horizontalContentAlignment?: Enums.HorizontalAlignment;
  cornerRadius?: CornerRadius;
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  background?: ColorValue;
  backgroundSizing?: Enums.BackgroundSizing;
}
export interface NativeDatePickerProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.DatePicker';
  yearVisible?: boolean;
  yearFormat?: string;
  orientation?: Enums.Orientation;
  monthVisible?: boolean;
  monthFormat?: string;
  header?: string;
  dayVisible?: boolean;
  dayFormat?: string;
  calendarIdentifier?: string;
  lightDismissOverlayMode?: Enums.LightDismissOverlayMode;
  onDateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectedDateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativePickerFlyoutBaseProps extends NativeFlyoutBaseProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.PickerFlyoutBase' |
        'Windows.UI.Xaml.Controls.DatePickerFlyout' |
        'Windows.UI.Xaml.Controls.ListPickerFlyout' |
        'Windows.UI.Xaml.Controls.PickerFlyout' |
        'Windows.UI.Xaml.Controls.TimePickerFlyout';
}
export interface NativeDatePickerFlyoutProps extends NativePickerFlyoutBaseProps {
  type: 'Windows.UI.Xaml.Controls.DatePickerFlyout';
  yearVisible?: boolean;
  monthVisible?: boolean;
  dayVisible?: boolean;
  calendarIdentifier?: string;
  yearFormat?: string;
  monthFormat?: string;
  dayFormat?: string;
  onDatePicked?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeDatePickerFlyoutPresenterProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.DatePickerFlyoutPresenter';
  isDefaultShadowEnabled?: boolean;
}
export interface NativeDropDownButtonProps extends NativeButtonProps {
  type: 'Windows.UI.Xaml.Controls.DropDownButton';
}
export interface NativeFlipViewProps extends NativeSelectorProps {
  type: 'Windows.UI.Xaml.Controls.FlipView';
  useTouchAnimationsForAllNavigation?: boolean;
}
export interface NativeFlipViewItemProps extends NativeSelectorItemProps {
  type: 'Windows.UI.Xaml.Controls.FlipViewItem';
}
export interface NativeFlyoutProps extends NativeFlyoutBaseProps {
  type: 'Windows.UI.Xaml.Controls.Flyout';
  flyoutPresenterStyle?: string;
}
export interface NativeFlyoutPresenterProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.FlyoutPresenter';
  isDefaultShadowEnabled?: boolean;
}
export interface NativeFontIconProps extends NativeIconElementProps {
  type: 'Windows.UI.Xaml.Controls.FontIcon';
  glyph?: string;
  fontWeight?: number;
  fontStyle?: Enums.FontStyle;
  fontSize?: number;
  fontFamily?: string;
  isTextScaleFactorEnabled?: boolean;
  mirroredWhenRightToLeft?: boolean;
}
export interface NativeFrameProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.Frame';
  cacheSize?: number;
  isNavigationStackEnabled?: boolean;
  onNavigated?: (event: NativeSyntheticEvent<undefined>) => void;
  onNavigating?: (event: NativeSyntheticEvent<undefined>) => void;
  onNavigationFailed?: (event: NativeSyntheticEvent<undefined>) => void;
  onNavigationStopped?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeGridProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.Grid' | 'Microsoft.UI.Xaml.Controls.Primitives.MonochromaticOverlayPresenter' | 'Windows.UI.Xaml.Controls.SwapChainBackgroundPanel' | 'Windows.UI.Xaml.Controls.SwapChainPanel';
  padding?: Thickness;
  cornerRadius?: CornerRadius;
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  rowSpacing?: number;
  columnSpacing?: number;
  backgroundSizing?: Enums.BackgroundSizing;
  /**
  * An object with a columns and a rows members, each of which is an array of the corresponding dimensions.
  */
  gridLayout?: { rows: GridLength[], columns: GridLength[] }; // synthetic property
}
export interface NativeListViewBaseProps extends NativeSelectorProps {
  type: 'Windows.UI.Xaml.Controls.ListViewBase' |
        'Microsoft.UI.Xaml.Controls.Primitives.TabViewListView' |
        'Microsoft.UI.Xaml.Controls.TreeViewList' |
        'Windows.UI.Xaml.Controls.GridView' |
        'Windows.UI.Xaml.Controls.ListView' |
        'Windows.UI.Xaml.Controls.NavigationViewList' |
        'Windows.UI.Xaml.Controls.TreeViewList';
  selectionMode?: Enums.ListViewSelectionMode;
  isSwipeEnabled?: boolean;
  isItemClickEnabled?: boolean;
  incrementalLoadingTrigger?: Enums.IncrementalLoadingTrigger;
  incrementalLoadingThreshold?: number;
  header?: object;
  dataFetchSize?: number;
  canReorderItems?: boolean;
  canDragItems?: boolean;
  showsScrollingPlaceholders?: boolean;
  footer?: object;
  reorderMode?: Enums.ListViewReorderMode;
  isMultiSelectCheckBoxEnabled?: boolean;
  singleSelectionFollowsFocus?: boolean;
  isZoomedInView?: boolean;
  isActiveView?: boolean;
  onDragItemsStarting?: (event: NativeSyntheticEvent<undefined>) => void;
  onItemClick?: (event: NativeSyntheticEvent<undefined>) => void;
  onContainerContentChanging?: (event: NativeSyntheticEvent<undefined>) => void;
  onChoosingGroupHeaderContainer?: (event: NativeSyntheticEvent<undefined>) => void;
  onChoosingItemContainer?: (event: NativeSyntheticEvent<undefined>) => void;
  onDragItemsCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeGridViewProps extends NativeListViewBaseProps {
  type: 'Windows.UI.Xaml.Controls.GridView';
}
export interface NativeListViewBaseHeaderItemProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.ListViewBaseHeaderItem' | 'Windows.UI.Xaml.Controls.GridViewHeaderItem' | 'Windows.UI.Xaml.Controls.ListViewHeaderItem';
}
export interface NativeGridViewHeaderItemProps extends NativeListViewBaseHeaderItemProps {
  type: 'Windows.UI.Xaml.Controls.GridViewHeaderItem';
}
export interface NativeGridViewItemProps extends NativeSelectorItemProps {
  type: 'Windows.UI.Xaml.Controls.GridViewItem';
}
export interface NativeGroupItemProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.GroupItem';
}
export interface NativeHandwritingViewProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.HandwritingView';
  placementAlignment?: Enums.HandwritingPanelPlacementAlignment;
  areCandidatesEnabled?: boolean;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeHubProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.Hub';
  orientation?: Enums.Orientation;
  header?: object;
  defaultSectionIndex?: number;
  isZoomedInView?: boolean;
  isActiveView?: boolean;
  onSectionHeaderClick?: (event: NativeSyntheticEvent<undefined>) => void;
  onSectionsInViewChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeHubSectionProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.HubSection';
  isHeaderInteractive?: boolean;
  header?: object;
}
export interface NativeHyperlinkButtonProps extends NativeButtonBaseProps {
  type: 'Windows.UI.Xaml.Controls.HyperlinkButton';
  navigateUri?: string;
}
export interface NativeIconSourceElementProps extends NativeIconElementProps {
  type: 'Windows.UI.Xaml.Controls.IconSourceElement';
}
export interface NativeImageProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.Image';
  stretch?: Enums.Stretch;
  source?: string;
  nineGrid?: Thickness;
  onImageFailed?: (event: NativeSyntheticEvent<undefined>) => void;
  onImageOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeInkCanvasProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.InkCanvas';
}
export interface NativeInkToolbarProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbar';
  isRulerButtonChecked?: boolean;
  initialControls?: Enums.InkToolbarInitialControls;
  orientation?: Enums.Orientation;
  isStencilButtonChecked?: boolean;
  buttonFlyoutPlacement?: Enums.InkToolbarButtonFlyoutPlacement;
  onActiveToolChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onEraseAllClicked?: (event: NativeSyntheticEvent<undefined>) => void;
  onInkDrawingAttributesChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onIsRulerButtonCheckedChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onIsStencilButtonCheckedChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeRadioButtonProps extends NativeToggleButtonProps {
  type: 'Windows.UI.Xaml.Controls.RadioButton' |
        'Windows.UI.Xaml.Controls.InkToolbarToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarEraserButton' |
        'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPencilButton';
  groupName?: string;
}
export interface NativeInkToolbarToolButtonProps extends NativeRadioButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton' |
        'Windows.UI.Xaml.Controls.InkToolbarEraserButton' |
        'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPencilButton';
  isExtensionGlyphShown?: boolean;
}
export interface NativeInkToolbarPenButtonProps extends NativeInkToolbarToolButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton' |
        'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton' |
        'Windows.UI.Xaml.Controls.InkToolbarPencilButton';
  selectedStrokeWidth?: number;
  selectedBrushIndex?: number;
  minStrokeWidth?: number;
  maxStrokeWidth?: number;
}
export interface NativeInkToolbarBallpointPenButtonProps extends NativeInkToolbarPenButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton';
}
export interface NativeInkToolbarCustomPenButtonProps extends NativeInkToolbarPenButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton';
}
export interface NativeInkToolbarToggleButtonProps extends NativeCheckBoxProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarToggleButton' | 'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton' | 'Windows.UI.Xaml.Controls.InkToolbarRulerButton';
}
export interface NativeInkToolbarCustomToggleButtonProps extends NativeInkToolbarToggleButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton';
}
export interface NativeInkToolbarCustomToolButtonProps extends NativeInkToolbarToolButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton';
}
export interface NativeInkToolbarEraserButtonProps extends NativeInkToolbarToolButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarEraserButton';
  isClearAllVisible?: boolean;
}
export interface NativeInkToolbarFlyoutItemProps extends NativeButtonBaseProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarFlyoutItem';
  kind?: Enums.InkToolbarFlyoutItemKind;
  isChecked?: boolean;
  onChecked?: (event: NativeSyntheticEvent<undefined>) => void;
  onUnchecked?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeInkToolbarHighlighterButtonProps extends NativeInkToolbarPenButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton';
}
export interface NativeInkToolbarMenuButtonProps extends NativeToggleButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarMenuButton' | 'Windows.UI.Xaml.Controls.InkToolbarStencilButton';
  isExtensionGlyphShown?: boolean;
}
export interface NativeInkToolbarPenConfigurationControlProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarPenConfigurationControl';
}
export interface NativeInkToolbarPencilButtonProps extends NativeInkToolbarPenButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarPencilButton';
}
export interface NativeInkToolbarRulerButtonProps extends NativeInkToolbarToggleButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarRulerButton';
}
export interface NativeInkToolbarStencilButtonProps extends NativeInkToolbarMenuButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarStencilButton';
  selectedStencil?: Enums.InkToolbarStencilKind;
  isRulerItemVisible?: boolean;
  isProtractorItemVisible?: boolean;
}
export interface NativeItemsPresenterProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.ItemsPresenter';
  padding?: Thickness;
  header?: object;
  footer?: object;
  onHorizontalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onVerticalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeItemsStackPanelProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.ItemsStackPanel';
  orientation?: Enums.Orientation;
  groupPadding?: Thickness;
  groupHeaderPlacement?: Enums.GroupHeaderPlacement;
  cacheLength?: number;
  areStickyGroupHeadersEnabled?: boolean;
}
export interface NativeItemsWrapGridProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.ItemsWrapGrid';
  orientation?: Enums.Orientation;
  maximumRowsOrColumns?: number;
  itemWidth?: number;
  itemHeight?: number;
  groupPadding?: Thickness;
  groupHeaderPlacement?: Enums.GroupHeaderPlacement;
  cacheLength?: number;
  areStickyGroupHeadersEnabled?: boolean;
}
export interface NativeListBoxProps extends NativeSelectorProps {
  type: 'Windows.UI.Xaml.Controls.ListBox';
  selectionMode?: Enums.SelectionMode;
  singleSelectionFollowsFocus?: boolean;
}
export interface NativeListBoxItemProps extends NativeSelectorItemProps {
  type: 'Windows.UI.Xaml.Controls.ListBoxItem';
}
export interface NativeListPickerFlyoutProps extends NativePickerFlyoutBaseProps {
  type: 'Windows.UI.Xaml.Controls.ListPickerFlyout';
  selectionMode?: Enums.ListPickerFlyoutSelectionMode;
  selectedValuePath?: string;
  selectedValue?: object;
  selectedItem?: object;
  selectedIndex?: number;
  itemsSource?: object;
  displayMemberPath?: string;
  onItemsPicked?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeListPickerFlyoutPresenterProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.ListPickerFlyoutPresenter';
}
export interface NativeListViewProps extends NativeListViewBaseProps {
  type: 'Windows.UI.Xaml.Controls.ListView' |
        'Microsoft.UI.Xaml.Controls.Primitives.TabViewListView' |
        'Microsoft.UI.Xaml.Controls.TreeViewList' |
        'Windows.UI.Xaml.Controls.NavigationViewList' |
        'Windows.UI.Xaml.Controls.TreeViewList';
}
export interface NativeListViewHeaderItemProps extends NativeListViewBaseHeaderItemProps {
  type: 'Windows.UI.Xaml.Controls.ListViewHeaderItem';
}
export interface NativeListViewItemProps extends NativeSelectorItemProps {
  type: 'Windows.UI.Xaml.Controls.ListViewItem' |
        'Microsoft.UI.Xaml.Controls.TabViewItem' |
        'Microsoft.UI.Xaml.Controls.TreeViewItem' |
        'Windows.UI.Xaml.Controls.NavigationViewItemBase' |
        'Windows.UI.Xaml.Controls.NavigationViewItem' |
        'Windows.UI.Xaml.Controls.NavigationViewItemHeader' |
        'Windows.UI.Xaml.Controls.NavigationViewItemSeparator' |
        'Windows.UI.Xaml.Controls.TreeViewItem';
}
export interface NativeMapControlProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.Maps.MapControl';
  zoomLevel?: number;
  watermarkMode?: Enums.MapWatermarkMode;
  trafficFlowVisible?: boolean;
  mapStyle?: Enums.MapStyle;
  pedestrianFeaturesVisible?: boolean;
  mapServiceToken?: string;
  heading?: number;
  desiredPitch?: number;
  colorScheme?: Enums.MapColorScheme;
  landmarksVisible?: boolean;
  rotateInteractionMode?: Enums.MapInteractionMode;
  zoomInteractionMode?: Enums.MapInteractionMode;
  transitFeaturesVisible?: boolean;
  tiltInteractionMode?: Enums.MapInteractionMode;
  businessLandmarksVisible?: boolean;
  panInteractionMode?: Enums.MapPanInteractionMode;
  transitFeaturesEnabled?: boolean;
  businessLandmarksEnabled?: boolean;
  viewPadding?: Thickness;
  mapProjection?: Enums.MapProjection;
  region?: string;
  onCenterChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onHeadingChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onLoadingStatusChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onMapDoubleTapped?: (event: NativeSyntheticEvent<undefined>) => void;
  onMapHolding?: (event: NativeSyntheticEvent<undefined>) => void;
  onMapTapped?: (event: NativeSyntheticEvent<undefined>) => void;
  onPitchChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onTransformOriginChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onZoomLevelChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onActualCameraChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onActualCameraChanging?: (event: NativeSyntheticEvent<undefined>) => void;
  onCustomExperienceChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onMapElementClick?: (event: NativeSyntheticEvent<undefined>) => void;
  onMapElementPointerEntered?: (event: NativeSyntheticEvent<undefined>) => void;
  onMapElementPointerExited?: (event: NativeSyntheticEvent<undefined>) => void;
  onTargetCameraChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onMapRightTapped?: (event: NativeSyntheticEvent<undefined>) => void;
  onMapContextRequested?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeMediaElementProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.MediaElement';
  volume?: number;
  stereo3DVideoRenderMode?: Enums.Stereo3DVideoRenderMode;
  stereo3DVideoPackingMode?: Enums.Stereo3DVideoPackingMode;
  source?: string;
  realTimePlayback?: boolean;
  posterSource?: string;
  playbackRate?: number;
  autoPlay?: boolean;
  isMuted?: boolean;
  audioDeviceType?: Enums.AudioDeviceType;
  audioCategory?: Enums.AudioCategory;
  defaultPlaybackRate?: number;
  isLooping?: boolean;
  balance?: number;
  stretch?: Enums.Stretch;
  playToPreferredSourceUri?: string;
  isFullWindow?: boolean;
  areTransportControlsEnabled?: boolean;
  onBufferingProgressChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onCurrentStateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onDownloadProgressChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onMarkerReached?: (event: NativeSyntheticEvent<undefined>) => void;
  onMediaEnded?: (event: NativeSyntheticEvent<undefined>) => void;
  onMediaFailed?: (event: NativeSyntheticEvent<undefined>) => void;
  onMediaOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onRateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onSeekCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onVolumeChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onPartialMediaFailureDetected?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeMediaPlayerElementProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.MediaPlayerElement';
  stretch?: Enums.Stretch;
  posterSource?: string;
  isFullWindow?: boolean;
  autoPlay?: boolean;
  areTransportControlsEnabled?: boolean;
}
export interface NativeMediaPlayerPresenterProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.MediaPlayerPresenter';
  stretch?: Enums.Stretch;
  isFullWindow?: boolean;
}
export interface NativeMediaTransportControlsProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.MediaTransportControls';
  isZoomEnabled?: boolean;
  isZoomButtonVisible?: boolean;
  isVolumeEnabled?: boolean;
  isVolumeButtonVisible?: boolean;
  isStopEnabled?: boolean;
  isStopButtonVisible?: boolean;
  isSeekEnabled?: boolean;
  isSeekBarVisible?: boolean;
  isPlaybackRateEnabled?: boolean;
  isPlaybackRateButtonVisible?: boolean;
  isFullWindowEnabled?: boolean;
  isFullWindowButtonVisible?: boolean;
  isFastRewindEnabled?: boolean;
  isFastRewindButtonVisible?: boolean;
  isFastForwardEnabled?: boolean;
  isFastForwardButtonVisible?: boolean;
  isCompact?: boolean;
  isSkipForwardEnabled?: boolean;
  isSkipForwardButtonVisible?: boolean;
  isSkipBackwardEnabled?: boolean;
  isSkipBackwardButtonVisible?: boolean;
  isPreviousTrackButtonVisible?: boolean;
  isNextTrackButtonVisible?: boolean;
  fastPlayFallbackBehaviour?: Enums.FastPlayFallbackBehaviour;
  showAndHideAutomatically?: boolean;
  isRepeatEnabled?: boolean;
  isRepeatButtonVisible?: boolean;
  isCompactOverlayEnabled?: boolean;
  isCompactOverlayButtonVisible?: boolean;
  onThumbnailRequested?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeMenuBarProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.MenuBar';
}
export interface NativeMenuBarItemProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.MenuBarItem';
  title?: string;
}
export interface NativeMenuFlyoutProps extends NativeFlyoutBaseProps {
  type: 'Windows.UI.Xaml.Controls.MenuFlyout' | 'Microsoft.UI.Xaml.Controls.MenuBarItemFlyout' | 'Windows.UI.Xaml.Controls.MenuBarItemFlyout';
  menuFlyoutPresenterStyle?: string;
}
export interface NativeMenuBarItemFlyoutProps extends NativeMenuFlyoutProps {
  type: 'Windows.UI.Xaml.Controls.MenuBarItemFlyout';
}
export interface NativeMenuFlyoutItemBaseProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.MenuFlyoutItemBase' |
        'Microsoft.UI.Xaml.Controls.RadioMenuFlyoutItem' |
        'Windows.UI.Xaml.Controls.MenuFlyoutItem' |
        'Windows.UI.Xaml.Controls.MenuFlyoutSeparator' |
        'Windows.UI.Xaml.Controls.MenuFlyoutSubItem' |
        'Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem';
}
export interface NativeMenuFlyoutItemProps extends NativeMenuFlyoutItemBaseProps {
  type: 'Windows.UI.Xaml.Controls.MenuFlyoutItem' | 'Microsoft.UI.Xaml.Controls.RadioMenuFlyoutItem' | 'Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem';
  text?: string;
  commandParameter?: object;
  keyboardAcceleratorTextOverride?: string;
  onClick?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeMenuFlyoutPresenterProps extends NativeItemsControlProps {
  type: 'Windows.UI.Xaml.Controls.MenuFlyoutPresenter';
  isDefaultShadowEnabled?: boolean;
}
export interface NativeMenuFlyoutSeparatorProps extends NativeMenuFlyoutItemBaseProps {
  type: 'Windows.UI.Xaml.Controls.MenuFlyoutSeparator';
}
export interface NativeMenuFlyoutSubItemProps extends NativeMenuFlyoutItemBaseProps {
  type: 'Windows.UI.Xaml.Controls.MenuFlyoutSubItem';
  text?: string;
}
export interface NativeNavigationViewProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.NavigationView';
  menuItemContainerStyle?: string;
  isSettingsVisible?: boolean;
  isPaneToggleButtonVisible?: boolean;
  isPaneOpen?: boolean;
  header?: object;
  expandedModeThresholdWidth?: number;
  menuItemsSource?: object;
  compactPaneLength?: number;
  compactModeThresholdWidth?: number;
  openPaneLength?: number;
  alwaysShowHeader?: boolean;
  selectedItem?: object;
  paneToggleButtonStyle?: string;
  paneTitle?: string;
  isBackEnabled?: boolean;
  isBackButtonVisible?: Enums.NavigationViewBackButtonVisible;
  shoulderNavigationEnabled?: Enums.NavigationViewShoulderNavigationEnabled;
  selectionFollowsFocus?: Enums.NavigationViewSelectionFollowsFocus;
  paneDisplayMode?: Enums.NavigationViewPaneDisplayMode;
  overflowLabelMode?: Enums.NavigationViewOverflowLabelMode;
  isPaneVisible?: boolean;
  onDisplayModeChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onItemInvoked?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onBackRequested?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneClosing?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneOpening?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeNavigationViewItemBaseProps extends NativeListViewItemProps {
  type: 'Windows.UI.Xaml.Controls.NavigationViewItemBase' | 'Windows.UI.Xaml.Controls.NavigationViewItem' | 'Windows.UI.Xaml.Controls.NavigationViewItemHeader' | 'Windows.UI.Xaml.Controls.NavigationViewItemSeparator';
}
export interface NativeNavigationViewItemProps extends NativeNavigationViewItemBaseProps {
  type: 'Windows.UI.Xaml.Controls.NavigationViewItem';
  selectsOnInvoked?: boolean;
}
export interface NativeNavigationViewItemHeaderProps extends NativeNavigationViewItemBaseProps {
  type: 'Windows.UI.Xaml.Controls.NavigationViewItemHeader';
}
export interface NativeNavigationViewItemSeparatorProps extends NativeNavigationViewItemBaseProps {
  type: 'Windows.UI.Xaml.Controls.NavigationViewItemSeparator';
}
export interface NativeNavigationViewListProps extends NativeListViewProps {
  type: 'Windows.UI.Xaml.Controls.NavigationViewList';
}
export interface NativeUserControlProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.UserControl' | 'Windows.UI.Xaml.Controls.Page';
}
export interface NativePageProps extends NativeUserControlProps {
  type: 'Windows.UI.Xaml.Controls.Page';
}
export interface NativeParallaxViewProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.ParallaxView';
  verticalSourceStartOffset?: number;
  verticalSourceOffsetKind?: Enums.ParallaxSourceOffsetKind;
  verticalSourceEndOffset?: number;
  verticalShift?: number;
  maxVerticalShiftRatio?: number;
  maxHorizontalShiftRatio?: number;
  isVerticalShiftClamped?: boolean;
  isHorizontalShiftClamped?: boolean;
  horizontalSourceStartOffset?: number;
  horizontalSourceOffsetKind?: Enums.ParallaxSourceOffsetKind;
  horizontalSourceEndOffset?: number;
  horizontalShift?: number;
}
export interface NativePasswordBoxProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.PasswordBox';
  passwordChar?: string;
  password?: string;
  maxLength?: number;
  isPasswordRevealButtonEnabled?: boolean;
  selectionHighlightColor?: ColorValue;
  preventKeyboardDisplayOnProgrammaticFocus?: boolean;
  placeholderText?: string;
  header?: object;
  textReadingOrder?: Enums.TextReadingOrder;
  passwordRevealMode?: Enums.PasswordRevealMode;
  description?: object;
  onContextMenuOpening?: (event: NativeSyntheticEvent<undefined>) => void;
  onPasswordChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaste?: (event: NativeSyntheticEvent<undefined>) => void;
  onPasswordChanging?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativePathIconProps extends NativeIconElementProps {
  type: 'Windows.UI.Xaml.Controls.PathIcon';
  data?: string;
}
export interface NativePersonPictureProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.PersonPicture';
  profilePicture?: string;
  preferSmallImage?: boolean;
  isGroup?: boolean;
  initials?: string;
  displayName?: string;
  badgeText?: string;
  badgeNumber?: number;
  badgeImageSource?: string;
  badgeGlyph?: string;
}
export interface NativePickerFlyoutProps extends NativePickerFlyoutBaseProps {
  type: 'Windows.UI.Xaml.Controls.PickerFlyout';
  confirmationButtonsVisible?: boolean;
  onConfirmed?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativePickerFlyoutPresenterProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.PickerFlyoutPresenter';
}
export interface NativePivotProps extends NativeItemsControlProps {
  type: 'Windows.UI.Xaml.Controls.Pivot';
  title?: object;
  selectedItem?: object;
  selectedIndex?: number;
  isLocked?: boolean;
  rightHeader?: object;
  leftHeader?: object;
  isHeaderItemsCarouselEnabled?: boolean;
  headerFocusVisualPlacement?: Enums.PivotHeaderFocusVisualPlacement;
  onPivotItemLoaded?: (event: NativeSyntheticEvent<undefined>) => void;
  onPivotItemLoading?: (event: NativeSyntheticEvent<undefined>) => void;
  onPivotItemUnloaded?: (event: NativeSyntheticEvent<undefined>) => void;
  onPivotItemUnloading?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativePivotItemProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.PivotItem';
  header?: object;
}
export interface NativeCalendarPanelProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.CalendarPanel';
}
export interface NativeVirtualizingPanelProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.VirtualizingPanel' |
        'Windows.UI.Xaml.Controls.Primitives.CarouselPanel' |
        'Windows.UI.Xaml.Controls.Primitives.OrientedVirtualizingPanel' |
        'Windows.UI.Xaml.Controls.VirtualizingStackPanel' |
        'Windows.UI.Xaml.Controls.WrapGrid';
}
export interface NativeCarouselPanelProps extends NativeVirtualizingPanelProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.CarouselPanel';
  onHorizontalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onVerticalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeRangeBaseProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.RangeBase' |
        'Microsoft.UI.Xaml.Controls.Primitives.ColorPickerSlider' |
        'Microsoft.UI.Xaml.Controls.ProgressBar' |
        'Windows.UI.Xaml.Controls.Slider' |
        'Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider' |
        'Windows.UI.Xaml.Controls.Primitives.ScrollBar' |
        'Windows.UI.Xaml.Controls.ProgressBar';
  value?: number;
  smallChange?: number;
  minimum?: number;
  maximum?: number;
  largeChange?: number;
  onValueChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeSliderProps extends NativeRangeBaseProps {
  type: 'Windows.UI.Xaml.Controls.Slider' | 'Microsoft.UI.Xaml.Controls.Primitives.ColorPickerSlider' | 'Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider';
  tickPlacement?: Enums.TickPlacement;
  tickFrequency?: number;
  stepFrequency?: number;
  snapsTo?: Enums.SliderSnapsTo;
  orientation?: Enums.Orientation;
  isThumbToolTipEnabled?: boolean;
  isDirectionReversed?: boolean;
  intermediateValue?: number;
  header?: object;
}
export interface NativeColorPickerSliderProps extends NativeSliderProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider';
  colorChannel?: Enums.ColorPickerHsvChannel;
}
export interface NativeColorSpectrumProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.ColorSpectrum';
  shape?: Enums.ColorSpectrumShape;
  minValue?: number;
  minSaturation?: number;
  minHue?: number;
  maxValue?: number;
  maxSaturation?: number;
  maxHue?: number;
  components?: Enums.ColorSpectrumComponents;
  onColorChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeCommandBarFlyoutCommandBarProps extends NativeCommandBarProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar';
}
export interface NativeGridViewItemPresenterProps extends NativeContentPresenterProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter';
  selectionCheckMarkVisualEnabled?: boolean;
  selectedPointerOverBorderBrush?: ColorValue;
  selectedPointerOverBackground?: ColorValue;
  selectedForeground?: ColorValue;
  selectedBorderThickness?: Thickness;
  selectedBackground?: ColorValue;
  reorderHintOffset?: number;
  pointerOverBackgroundMargin?: Thickness;
  pointerOverBackground?: ColorValue;
  placeholderBackground?: ColorValue;
  gridViewItemPresenterVerticalContentAlignment?: Enums.VerticalAlignment;
  gridViewItemPresenterPadding?: Thickness;
  gridViewItemPresenterHorizontalContentAlignment?: Enums.HorizontalAlignment;
  focusBorderBrush?: ColorValue;
  dragOpacity?: number;
  dragForeground?: ColorValue;
  dragBackground?: ColorValue;
  disabledOpacity?: number;
  contentMargin?: Thickness;
  checkSelectingBrush?: ColorValue;
  checkHintBrush?: ColorValue;
  checkBrush?: ColorValue;
}
export interface NativeListViewItemPresenterProps extends NativeContentPresenterProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter' | 'Microsoft.UI.Xaml.Controls.RevealListViewItemPresenter';
  selectionCheckMarkVisualEnabled?: boolean;
  selectedPointerOverBorderBrush?: ColorValue;
  selectedPointerOverBackground?: ColorValue;
  selectedForeground?: ColorValue;
  selectedBorderThickness?: Thickness;
  selectedBackground?: ColorValue;
  reorderHintOffset?: number;
  pointerOverBackgroundMargin?: Thickness;
  pointerOverBackground?: ColorValue;
  placeholderBackground?: ColorValue;
  listViewItemPresenterVerticalContentAlignment?: Enums.VerticalAlignment;
  listViewItemPresenterPadding?: Thickness;
  listViewItemPresenterHorizontalContentAlignment?: Enums.HorizontalAlignment;
  focusBorderBrush?: ColorValue;
  dragOpacity?: number;
  dragForeground?: ColorValue;
  dragBackground?: ColorValue;
  disabledOpacity?: number;
  contentMargin?: Thickness;
  checkSelectingBrush?: ColorValue;
  checkHintBrush?: ColorValue;
  checkBrush?: ColorValue;
  selectedPressedBackground?: ColorValue;
  pressedBackground?: ColorValue;
  pointerOverForeground?: ColorValue;
  focusSecondaryBorderBrush?: ColorValue;
  checkMode?: Enums.ListViewItemPresenterCheckMode;
  checkBoxBrush?: ColorValue;
  revealBorderThickness?: Thickness;
  revealBorderBrush?: ColorValue;
  revealBackgroundShowsAboveContent?: boolean;
  revealBackground?: ColorValue;
}
export interface NativeLoopingSelectorProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.LoopingSelector';
  shouldLoop?: boolean;
  selectedItem?: object;
  selectedIndex?: number;
  itemWidth?: number;
  itemHeight?: number;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeLoopingSelectorItemProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.LoopingSelectorItem';
}
export interface NativeLoopingSelectorPanelProps extends NativeCanvasProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.LoopingSelectorPanel';
  onHorizontalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onVerticalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeNavigationViewItemPresenterProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter';
}
export interface NativeOrientedVirtualizingPanelProps extends NativeVirtualizingPanelProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.OrientedVirtualizingPanel' | 'Windows.UI.Xaml.Controls.VirtualizingStackPanel' | 'Windows.UI.Xaml.Controls.WrapGrid';
  onHorizontalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onVerticalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativePivotHeaderItemProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem';
}
export interface NativePivotHeaderPanelProps extends NativeCanvasProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel';
}
export interface NativePivotPanelProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.PivotPanel';
  onHorizontalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onVerticalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativePopupProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.Popup';
  verticalOffset?: number;
  isOpen?: boolean;
  isLightDismissEnabled?: boolean;
  horizontalOffset?: number;
  lightDismissOverlayMode?: Enums.LightDismissOverlayMode;
  shouldConstrainToRootBounds?: boolean;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeRepeatButtonProps extends NativeButtonBaseProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.RepeatButton';
  interval?: number;
  delay?: number;
}
export interface NativeScrollBarProps extends NativeRangeBaseProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.ScrollBar';
  viewportSize?: number;
  orientation?: Enums.Orientation;
  indicatorMode?: Enums.ScrollingIndicatorMode;
  onScroll?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeThumbProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.Thumb';
  onDragCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onDragDelta?: (event: NativeSyntheticEvent<undefined>) => void;
  onDragStarted?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeTickBarProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.TickBar';
  fill?: ColorValue;
}
export interface NativeProgressBarProps extends NativeRangeBaseProps {
  type: 'Windows.UI.Xaml.Controls.ProgressBar';
  showPaused?: boolean;
  showError?: boolean;
  isIndeterminate?: boolean;
}
export interface NativeProgressRingProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.ProgressRing';
  isActive?: boolean;
}
export interface NativeRatingControlProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.RatingControl';
  value?: number;
  placeholderValue?: number;
  maxRating?: number;
  isReadOnly?: boolean;
  isClearEnabled?: boolean;
  initialSetValue?: number;
  caption?: string;
  onValueChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeRefreshContainerProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.RefreshContainer';
  pullDirection?: Enums.RefreshPullDirection;
  onRefreshRequested?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeRefreshVisualizerProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.RefreshVisualizer';
  orientation?: Enums.RefreshVisualizerOrientation;
  onRefreshRequested?: (event: NativeSyntheticEvent<undefined>) => void;
  onRefreshStateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeRelativePanelProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.RelativePanel';
  padding?: Thickness;
  cornerRadius?: CornerRadius;
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  backgroundSizing?: Enums.BackgroundSizing;
}
export interface NativeRichEditBoxProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.RichEditBox';
  textWrapping?: Enums.TextWrapping;
  textAlignment?: Enums.TextAlignment;
  isTextPredictionEnabled?: boolean;
  isSpellCheckEnabled?: boolean;
  isReadOnly?: boolean;
  acceptsReturn?: boolean;
  selectionHighlightColor?: ColorValue;
  preventKeyboardDisplayOnProgrammaticFocus?: boolean;
  placeholderText?: string;
  isColorFontEnabled?: boolean;
  header?: object;
  textReadingOrder?: Enums.TextReadingOrder;
  desiredCandidateWindowAlignment?: Enums.CandidateWindowAlignment;
  clipboardCopyFormat?: Enums.RichEditClipboardFormat;
  selectionHighlightColorWhenNotFocused?: ColorValue;
  maxLength?: number;
  horizontalTextAlignment?: Enums.TextAlignment;
  disabledFormattingAccelerators?: Enums.DisabledFormattingAccelerators;
  characterCasing?: Enums.CharacterCasing;
  isHandwritingViewEnabled?: boolean;
  contentLinkForegroundColor?: ColorValue;
  contentLinkBackgroundColor?: ColorValue;
  description?: object;
  onContextMenuOpening?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onTextChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaste?: (event: NativeSyntheticEvent<undefined>) => void;
  onCandidateWindowBoundsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onTextChanging?: (event: NativeSyntheticEvent<undefined>) => void;
  onTextCompositionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onTextCompositionEnded?: (event: NativeSyntheticEvent<undefined>) => void;
  onTextCompositionStarted?: (event: NativeSyntheticEvent<undefined>) => void;
  onCopyingToClipboard?: (event: NativeSyntheticEvent<undefined>) => void;
  onCuttingToClipboard?: (event: NativeSyntheticEvent<undefined>) => void;
  onContentLinkChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onContentLinkInvoked?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectionChanging?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeRichTextBlockProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.RichTextBlock';
  textWrapping?: Enums.TextWrapping;
  textTrimming?: Enums.TextTrimming;
  textIndent?: number;
  textAlignment?: Enums.TextAlignment;
  padding?: Thickness;
  foreground?: ColorValue;
  fontWeight?: number;
  fontStyle?: Enums.FontStyle;
  fontStretch?: Enums.FontStretch;
  fontSize?: number;
  fontFamily?: string;
  lineStackingStrategy?: Enums.LineStackingStrategy;
  characterSpacing?: number;
  lineHeight?: number;
  isTextSelectionEnabled?: boolean;
  textReadingOrder?: Enums.TextReadingOrder;
  textLineBounds?: Enums.TextLineBounds;
  selectionHighlightColor?: ColorValue;
  opticalMarginAlignment?: Enums.OpticalMarginAlignment;
  maxLines?: number;
  isColorFontEnabled?: boolean;
  isTextScaleFactorEnabled?: boolean;
  textDecorations?: Enums.TextDecorations;
  horizontalTextAlignment?: Enums.TextAlignment;
  typographyAnnotationAlternates?: number; // attached property
  typographyCapitalSpacing?: boolean; // attached property
  typographyCapitals?: Enums.FontCapitals; // attached property
  typographyCaseSensitiveForms?: boolean; // attached property
  typographyContextualAlternates?: boolean; // attached property
  typographyContextualLigatures?: boolean; // attached property
  typographyContextualSwashes?: number; // attached property
  typographyDiscretionaryLigatures?: boolean; // attached property
  typographyEastAsianExpertForms?: boolean; // attached property
  typographyEastAsianLanguage?: Enums.FontEastAsianLanguage; // attached property
  typographyEastAsianWidths?: Enums.FontEastAsianWidths; // attached property
  typographyFraction?: Enums.FontFraction; // attached property
  typographyHistoricalForms?: boolean; // attached property
  typographyHistoricalLigatures?: boolean; // attached property
  typographyKerning?: boolean; // attached property
  typographyMathematicalGreek?: boolean; // attached property
  typographyNumeralAlignment?: Enums.FontNumeralAlignment; // attached property
  typographyNumeralStyle?: Enums.FontNumeralStyle; // attached property
  typographySlashedZero?: boolean; // attached property
  typographyStandardLigatures?: boolean; // attached property
  typographyStandardSwashes?: number; // attached property
  typographyStylisticAlternates?: number; // attached property
  typographyStylisticSet10?: boolean; // attached property
  typographyStylisticSet11?: boolean; // attached property
  typographyStylisticSet12?: boolean; // attached property
  typographyStylisticSet13?: boolean; // attached property
  typographyStylisticSet14?: boolean; // attached property
  typographyStylisticSet15?: boolean; // attached property
  typographyStylisticSet16?: boolean; // attached property
  typographyStylisticSet17?: boolean; // attached property
  typographyStylisticSet18?: boolean; // attached property
  typographyStylisticSet19?: boolean; // attached property
  typographyStylisticSet1?: boolean; // attached property
  typographyStylisticSet20?: boolean; // attached property
  typographyStylisticSet2?: boolean; // attached property
  typographyStylisticSet3?: boolean; // attached property
  typographyStylisticSet4?: boolean; // attached property
  typographyStylisticSet5?: boolean; // attached property
  typographyStylisticSet6?: boolean; // attached property
  typographyStylisticSet7?: boolean; // attached property
  typographyStylisticSet8?: boolean; // attached property
  typographyStylisticSet9?: boolean; // attached property
  typographyVariants?: Enums.FontVariants; // attached property
  onContextMenuOpening?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onIsTextTrimmedChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeRichTextBlockOverflowProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.RichTextBlockOverflow';
  padding?: Thickness;
  maxLines?: number;
  onIsTextTrimmedChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeScrollContentPresenterProps extends NativeContentPresenterProps {
  type: 'Windows.UI.Xaml.Controls.ScrollContentPresenter';
  sizesContentToTemplatedParent?: boolean;
  canContentRenderOutsideBounds?: boolean;
}
export interface NativeScrollViewerProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.ScrollViewer';
  isVerticalRailEnabled?: boolean;
  isScrollInertiaEnabled?: boolean;
  isHorizontalScrollChainingEnabled?: boolean;
  isHorizontalRailEnabled?: boolean;
  isDeferredScrollingEnabled?: boolean;
  horizontalSnapPointsType?: Enums.SnapPointsType;
  horizontalSnapPointsAlignment?: Enums.SnapPointsAlignment;
  horizontalScrollMode?: Enums.ScrollMode;
  horizontalScrollBarVisibility?: Enums.ScrollBarVisibility;
  minZoomFactor?: number;
  maxZoomFactor?: number;
  isZoomInertiaEnabled?: boolean;
  isZoomChainingEnabled?: boolean;
  isVerticalScrollChainingEnabled?: boolean;
  bringIntoViewOnFocusChange?: boolean;
  zoomSnapPointsType?: Enums.SnapPointsType;
  zoomMode?: Enums.ZoomMode;
  verticalSnapPointsType?: Enums.SnapPointsType;
  verticalSnapPointsAlignment?: Enums.SnapPointsAlignment;
  verticalScrollMode?: Enums.ScrollMode;
  verticalScrollBarVisibility?: Enums.ScrollBarVisibility;
  verticalAnchorRatio?: number;
  reduceViewportForCoreInputViewOcclusions?: boolean;
  horizontalAnchorRatio?: number;
  canContentRenderOutsideBounds?: boolean;
  onViewChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onViewChanging?: (event: NativeSyntheticEvent<undefined>) => void;
  onDirectManipulationCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onDirectManipulationStarted?: (event: NativeSyntheticEvent<undefined>) => void;
  onAnchorRequested?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeSearchBoxProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.SearchBox';
  searchHistoryEnabled?: boolean;
  searchHistoryContext?: string;
  queryText?: string;
  placeholderText?: string;
  focusOnKeyboardInput?: boolean;
  chooseSuggestionOnEnter?: boolean;
  onPrepareForFocusOnKeyboardInput?: (event: NativeSyntheticEvent<undefined>) => void;
  onQueryChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onQuerySubmitted?: (event: NativeSyntheticEvent<undefined>) => void;
  onResultSuggestionChosen?: (event: NativeSyntheticEvent<undefined>) => void;
  onSuggestionsRequested?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeSemanticZoomProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.SemanticZoom';
  isZoomedInViewActive?: boolean;
  isZoomOutButtonEnabled?: boolean;
  canChangeViews?: boolean;
  onViewChangeCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onViewChangeStarted?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeSettingsFlyoutProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.SettingsFlyout';
  title?: string;
  iconSource?: string;
  headerForeground?: ColorValue;
  headerBackground?: ColorValue;
  onBackClick?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeSplitButtonProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.SplitButton' | 'Windows.UI.Xaml.Controls.ToggleSplitButton';
  commandParameter?: object;
  onClick?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeSplitViewProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.SplitView';
  panePlacement?: Enums.SplitViewPanePlacement;
  paneBackground?: ColorValue;
  openPaneLength?: number;
  isPaneOpen?: boolean;
  displayMode?: Enums.SplitViewDisplayMode;
  compactPaneLength?: number;
  lightDismissOverlayMode?: Enums.LightDismissOverlayMode;
  onPaneClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneClosing?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneOpening?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeStackPanelProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.StackPanel';
  orientation?: Enums.Orientation;
  areScrollSnapPointsRegular?: boolean;
  padding?: Thickness;
  cornerRadius?: CornerRadius;
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  spacing?: number;
  backgroundSizing?: Enums.BackgroundSizing;
  onHorizontalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onVerticalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeSwapChainBackgroundPanelProps extends NativeGridProps {
  type: 'Windows.UI.Xaml.Controls.SwapChainBackgroundPanel';
}
export interface NativeSwapChainPanelProps extends NativeGridProps {
  type: 'Windows.UI.Xaml.Controls.SwapChainPanel';
  onCompositionScaleChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeSwipeControlProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.SwipeControl';
}
export interface NativeSymbolIconProps extends NativeIconElementProps {
  type: 'Windows.UI.Xaml.Controls.SymbolIcon';
  symbol?: Enums.Symbol;
}
export interface NativeTextBlockProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.TextBlock';
  textWrapping?: Enums.TextWrapping;
  textTrimming?: Enums.TextTrimming;
  textAlignment?: Enums.TextAlignment;
  text?: string;
  padding?: Thickness;
  foreground?: ColorValue;
  fontWeight?: number;
  fontStyle?: Enums.FontStyle;
  fontStretch?: Enums.FontStretch;
  fontSize?: number;
  fontFamily?: string;
  lineStackingStrategy?: Enums.LineStackingStrategy;
  lineHeight?: number;
  characterSpacing?: number;
  isTextSelectionEnabled?: boolean;
  textReadingOrder?: Enums.TextReadingOrder;
  textLineBounds?: Enums.TextLineBounds;
  selectionHighlightColor?: ColorValue;
  opticalMarginAlignment?: Enums.OpticalMarginAlignment;
  maxLines?: number;
  isColorFontEnabled?: boolean;
  isTextScaleFactorEnabled?: boolean;
  textDecorations?: Enums.TextDecorations;
  horizontalTextAlignment?: Enums.TextAlignment;
  typographyAnnotationAlternates?: number; // attached property
  typographyCapitalSpacing?: boolean; // attached property
  typographyCapitals?: Enums.FontCapitals; // attached property
  typographyCaseSensitiveForms?: boolean; // attached property
  typographyContextualAlternates?: boolean; // attached property
  typographyContextualLigatures?: boolean; // attached property
  typographyContextualSwashes?: number; // attached property
  typographyDiscretionaryLigatures?: boolean; // attached property
  typographyEastAsianExpertForms?: boolean; // attached property
  typographyEastAsianLanguage?: Enums.FontEastAsianLanguage; // attached property
  typographyEastAsianWidths?: Enums.FontEastAsianWidths; // attached property
  typographyFraction?: Enums.FontFraction; // attached property
  typographyHistoricalForms?: boolean; // attached property
  typographyHistoricalLigatures?: boolean; // attached property
  typographyKerning?: boolean; // attached property
  typographyMathematicalGreek?: boolean; // attached property
  typographyNumeralAlignment?: Enums.FontNumeralAlignment; // attached property
  typographyNumeralStyle?: Enums.FontNumeralStyle; // attached property
  typographySlashedZero?: boolean; // attached property
  typographyStandardLigatures?: boolean; // attached property
  typographyStandardSwashes?: number; // attached property
  typographyStylisticAlternates?: number; // attached property
  typographyStylisticSet10?: boolean; // attached property
  typographyStylisticSet11?: boolean; // attached property
  typographyStylisticSet12?: boolean; // attached property
  typographyStylisticSet13?: boolean; // attached property
  typographyStylisticSet14?: boolean; // attached property
  typographyStylisticSet15?: boolean; // attached property
  typographyStylisticSet16?: boolean; // attached property
  typographyStylisticSet17?: boolean; // attached property
  typographyStylisticSet18?: boolean; // attached property
  typographyStylisticSet19?: boolean; // attached property
  typographyStylisticSet1?: boolean; // attached property
  typographyStylisticSet20?: boolean; // attached property
  typographyStylisticSet2?: boolean; // attached property
  typographyStylisticSet3?: boolean; // attached property
  typographyStylisticSet4?: boolean; // attached property
  typographyStylisticSet5?: boolean; // attached property
  typographyStylisticSet6?: boolean; // attached property
  typographyStylisticSet7?: boolean; // attached property
  typographyStylisticSet8?: boolean; // attached property
  typographyStylisticSet9?: boolean; // attached property
  typographyVariants?: Enums.FontVariants; // attached property
  onContextMenuOpening?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onIsTextTrimmedChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeTextBoxProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.TextBox';
  textWrapping?: Enums.TextWrapping;
  textAlignment?: Enums.TextAlignment;
  text?: string;
  maxLength?: number;
  isTextPredictionEnabled?: boolean;
  isSpellCheckEnabled?: boolean;
  isReadOnly?: boolean;
  acceptsReturn?: boolean;
  isColorFontEnabled?: boolean;
  placeholderText?: string;
  preventKeyboardDisplayOnProgrammaticFocus?: boolean;
  selectionHighlightColor?: ColorValue;
  header?: object;
  desiredCandidateWindowAlignment?: Enums.CandidateWindowAlignment;
  textReadingOrder?: Enums.TextReadingOrder;
  selectionHighlightColorWhenNotFocused?: ColorValue;
  placeholderForeground?: ColorValue;
  horizontalTextAlignment?: Enums.TextAlignment;
  characterCasing?: Enums.CharacterCasing;
  isHandwritingViewEnabled?: boolean;
  description?: object;
  onContextMenuOpening?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onTextChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaste?: (event: NativeSyntheticEvent<undefined>) => void;
  onCandidateWindowBoundsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onTextChanging?: (event: NativeSyntheticEvent<undefined>) => void;
  onTextCompositionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onTextCompositionEnded?: (event: NativeSyntheticEvent<undefined>) => void;
  onTextCompositionStarted?: (event: NativeSyntheticEvent<undefined>) => void;
  onBeforeTextChanging?: (event: NativeSyntheticEvent<undefined>) => void;
  onCopyingToClipboard?: (event: NativeSyntheticEvent<undefined>) => void;
  onCuttingToClipboard?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectionChanging?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeTextCommandBarFlyoutProps extends NativeCommandBarFlyoutProps {
  type: 'Windows.UI.Xaml.Controls.TextCommandBarFlyout';
}
export interface NativeTimePickerProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.TimePicker';
  minuteIncrement?: number;
  header?: string;
  clockIdentifier?: string;
  lightDismissOverlayMode?: Enums.LightDismissOverlayMode;
  onTimeChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectedTimeChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeTimePickerFlyoutProps extends NativePickerFlyoutBaseProps {
  type: 'Windows.UI.Xaml.Controls.TimePickerFlyout';
  minuteIncrement?: number;
  clockIdentifier?: string;
  onTimePicked?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeTimePickerFlyoutPresenterProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.TimePickerFlyoutPresenter';
  isDefaultShadowEnabled?: boolean;
}
export interface NativeToggleMenuFlyoutItemProps extends NativeMenuFlyoutItemProps {
  type: 'Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem';
  isChecked?: boolean;
}
export interface NativeToggleSplitButtonProps extends NativeSplitButtonProps {
  type: 'Windows.UI.Xaml.Controls.ToggleSplitButton';
  onIsCheckedChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeToggleSwitchProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.ToggleSwitch';
  onContent?: object;
  offContent?: object;
  isOn?: boolean;
  header?: string;
  onToggled?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeToolTipProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.ToolTip';
  verticalOffset?: number;
  placement?: Enums.PlacementMode;
  isOpen?: boolean;
  horizontalOffset?: number;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeTreeViewProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.TreeView';
  selectionMode?: Enums.TreeViewSelectionMode;
  itemsSource?: object;
  itemContainerStyle?: string;
  canReorderItems?: boolean;
  canDragItems?: boolean;
  onCollapsed?: (event: NativeSyntheticEvent<undefined>) => void;
  onExpanding?: (event: NativeSyntheticEvent<undefined>) => void;
  onItemInvoked?: (event: NativeSyntheticEvent<undefined>) => void;
  onDragItemsCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onDragItemsStarting?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeTreeViewItemProps extends NativeListViewItemProps {
  type: 'Windows.UI.Xaml.Controls.TreeViewItem';
  isExpanded?: boolean;
  glyphSize?: number;
  glyphOpacity?: number;
  glyphBrush?: ColorValue;
  expandedGlyph?: string;
  collapsedGlyph?: string;
  itemsSource?: object;
  hasUnrealizedChildren?: boolean;
}
export interface NativeTreeViewListProps extends NativeListViewProps {
  type: 'Windows.UI.Xaml.Controls.TreeViewList';
}
export interface NativeTwoPaneViewProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.TwoPaneView';
  wideModeConfiguration?: Enums.TwoPaneViewWideModeConfiguration;
  tallModeConfiguration?: Enums.TwoPaneViewTallModeConfiguration;
  panePriority?: Enums.TwoPaneViewPriority;
  minWideModeWidth?: number;
  minTallModeHeight?: number;
  onModeChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeVariableSizedWrapGridProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.VariableSizedWrapGrid';
  verticalChildrenAlignment?: Enums.VerticalAlignment;
  orientation?: Enums.Orientation;
  maximumRowsOrColumns?: number;
  itemWidth?: number;
  itemHeight?: number;
  horizontalChildrenAlignment?: Enums.HorizontalAlignment;
}
export interface NativeViewboxProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.Viewbox';
  stretchDirection?: Enums.StretchDirection;
  stretch?: Enums.Stretch;
}
export interface NativeVirtualizingStackPanelProps extends NativeOrientedVirtualizingPanelProps {
  type: 'Windows.UI.Xaml.Controls.VirtualizingStackPanel';
  orientation?: Enums.Orientation;
  areScrollSnapPointsRegular?: boolean;
  onCleanUpVirtualizedItemEvent?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeWebViewProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.WebView';
  source?: string;
  onLoadCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onNavigationFailed?: (event: NativeSyntheticEvent<undefined>) => void;
  onScriptNotify?: (event: NativeSyntheticEvent<undefined>) => void;
  onContentLoading?: (event: NativeSyntheticEvent<undefined>) => void;
  onDOMContentLoaded?: (event: NativeSyntheticEvent<undefined>) => void;
  onFrameContentLoading?: (event: NativeSyntheticEvent<undefined>) => void;
  onFrameDOMContentLoaded?: (event: NativeSyntheticEvent<undefined>) => void;
  onFrameNavigationCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onFrameNavigationStarting?: (event: NativeSyntheticEvent<undefined>) => void;
  onLongRunningScriptDetected?: (event: NativeSyntheticEvent<undefined>) => void;
  onNavigationCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onNavigationStarting?: (event: NativeSyntheticEvent<undefined>) => void;
  onUnsafeContentWarningDisplaying?: (event: NativeSyntheticEvent<undefined>) => void;
  onUnviewableContentIdentified?: (event: NativeSyntheticEvent<undefined>) => void;
  onContainsFullScreenElementChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onNewWindowRequested?: (event: NativeSyntheticEvent<undefined>) => void;
  onPermissionRequested?: (event: NativeSyntheticEvent<undefined>) => void;
  onUnsupportedUriSchemeIdentified?: (event: NativeSyntheticEvent<undefined>) => void;
  onSeparateProcessLost?: (event: NativeSyntheticEvent<undefined>) => void;
  onWebResourceRequested?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeWrapGridProps extends NativeOrientedVirtualizingPanelProps {
  type: 'Windows.UI.Xaml.Controls.WrapGrid';
  verticalChildrenAlignment?: Enums.VerticalAlignment;
  orientation?: Enums.Orientation;
  maximumRowsOrColumns?: number;
  itemWidth?: number;
  itemHeight?: number;
  horizontalChildrenAlignment?: Enums.HorizontalAlignment;
}
export interface NativeTextElementProps extends NativeDependencyObjectProps {
  type: 'Windows.UI.Xaml.Documents.TextElement' |
        'Windows.UI.Xaml.Documents.Block' |
        'Windows.UI.Xaml.Documents.Inline' |
        'Windows.UI.Xaml.Documents.Span' |
        'Windows.UI.Xaml.Documents.Bold' |
        'Windows.UI.Xaml.Documents.ContentLink' |
        'Windows.UI.Xaml.Documents.Hyperlink' |
        'Windows.UI.Xaml.Documents.InlineUIContainer' |
        'Windows.UI.Xaml.Documents.Italic' |
        'Windows.UI.Xaml.Documents.LineBreak' |
        'Windows.UI.Xaml.Documents.Paragraph' |
        'Windows.UI.Xaml.Documents.Run' |
        'Windows.UI.Xaml.Documents.Underline';
  language?: string;
  foreground?: ColorValue;
  fontWeight?: number;
  fontStyle?: Enums.FontStyle;
  fontStretch?: Enums.FontStretch;
  fontSize?: number;
  fontFamily?: string;
  characterSpacing?: number;
  isTextScaleFactorEnabled?: boolean;
  exitDisplayModeOnAccessKeyInvoked?: boolean;
  allowFocusOnInteraction?: boolean;
  accessKey?: string;
  textDecorations?: Enums.TextDecorations;
  keyTipVerticalOffset?: number;
  keyTipPlacementMode?: Enums.KeyTipPlacementMode;
  keyTipHorizontalOffset?: number;
  isAccessKeyScope?: boolean;
  onAccessKeyDisplayDismissed?: (event: NativeSyntheticEvent<undefined>) => void;
  onAccessKeyDisplayRequested?: (event: NativeSyntheticEvent<undefined>) => void;
  onAccessKeyInvoked?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeBlockProps extends NativeTextElementProps {
  type: 'Windows.UI.Xaml.Documents.Block' | 'Windows.UI.Xaml.Documents.Paragraph';
  textAlignment?: Enums.TextAlignment;
  margin?: Thickness;
  lineStackingStrategy?: Enums.LineStackingStrategy;
  lineHeight?: number;
  horizontalTextAlignment?: Enums.TextAlignment;
}
export interface NativeInlineProps extends NativeTextElementProps {
  type: 'Windows.UI.Xaml.Documents.Inline' |
        'Windows.UI.Xaml.Documents.Span' |
        'Windows.UI.Xaml.Documents.Bold' |
        'Windows.UI.Xaml.Documents.ContentLink' |
        'Windows.UI.Xaml.Documents.Hyperlink' |
        'Windows.UI.Xaml.Documents.InlineUIContainer' |
        'Windows.UI.Xaml.Documents.Italic' |
        'Windows.UI.Xaml.Documents.LineBreak' |
        'Windows.UI.Xaml.Documents.Run' |
        'Windows.UI.Xaml.Documents.Underline';
}
export interface NativeSpanProps extends NativeInlineProps {
  type: 'Windows.UI.Xaml.Documents.Span' |
        'Windows.UI.Xaml.Documents.Bold' |
        'Windows.UI.Xaml.Documents.Hyperlink' |
        'Windows.UI.Xaml.Documents.Italic' |
        'Windows.UI.Xaml.Documents.Underline';
}
export interface NativeBoldProps extends NativeSpanProps {
  type: 'Windows.UI.Xaml.Documents.Bold';
}
export interface NativeContentLinkProps extends NativeInlineProps {
  type: 'Windows.UI.Xaml.Documents.ContentLink';
  xyFocusUpNavigationStrategy?: Enums.XYFocusNavigationStrategy;
  xyFocusRightNavigationStrategy?: Enums.XYFocusNavigationStrategy;
  xyFocusLeftNavigationStrategy?: Enums.XYFocusNavigationStrategy;
  xyFocusDownNavigationStrategy?: Enums.XYFocusNavigationStrategy;
  tabIndex?: number;
  isTabStop?: boolean;
  elementSoundMode?: Enums.ElementSoundMode;
  cursor?: Enums.CoreCursorType;
  background?: ColorValue;
  onGotFocus?: (event: NativeSyntheticEvent<undefined>) => void;
  onInvoked?: (event: NativeSyntheticEvent<undefined>) => void;
  onLostFocus?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeGlyphsProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Documents.Glyphs';
  unicodeString?: string;
  styleSimulations?: Enums.StyleSimulations;
  originY?: number;
  originX?: number;
  indices?: string;
  fontUri?: string;
  fontRenderingEmSize?: number;
  fill?: ColorValue;
  isColorFontEnabled?: boolean;
  colorFontPaletteIndex?: number;
}
export interface NativeHyperlinkProps extends NativeSpanProps {
  type: 'Windows.UI.Xaml.Documents.Hyperlink';
  navigateUri?: string;
  underlineStyle?: Enums.UnderlineStyle;
  elementSoundMode?: Enums.ElementSoundMode;
  xyFocusUpNavigationStrategy?: Enums.XYFocusNavigationStrategy;
  xyFocusRightNavigationStrategy?: Enums.XYFocusNavigationStrategy;
  xyFocusLeftNavigationStrategy?: Enums.XYFocusNavigationStrategy;
  xyFocusDownNavigationStrategy?: Enums.XYFocusNavigationStrategy;
  tabIndex?: number;
  isTabStop?: boolean;
  onClick?: (event: NativeSyntheticEvent<undefined>) => void;
  onGotFocus?: (event: NativeSyntheticEvent<undefined>) => void;
  onLostFocus?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeInlineUIContainerProps extends NativeInlineProps {
  type: 'Windows.UI.Xaml.Documents.InlineUIContainer';
}
export interface NativeItalicProps extends NativeSpanProps {
  type: 'Windows.UI.Xaml.Documents.Italic';
}
export interface NativeLineBreakProps extends NativeInlineProps {
  type: 'Windows.UI.Xaml.Documents.LineBreak';
}
export interface NativeParagraphProps extends NativeBlockProps {
  type: 'Windows.UI.Xaml.Documents.Paragraph';
  textIndent?: number;
}
export interface NativeRunProps extends NativeInlineProps {
  type: 'Windows.UI.Xaml.Documents.Run';
  flowDirection?: Enums.FlowDirection;
  text?: string; // synthetic property
}
export interface NativeUnderlineProps extends NativeSpanProps {
  type: 'Windows.UI.Xaml.Documents.Underline';
}
export interface NativeKeyboardAcceleratorProps extends NativeDependencyObjectProps {
  type: 'Windows.UI.Xaml.Input.KeyboardAccelerator';
  modifiers?: Enums.VirtualKeyModifiers;
  virtualKey?: Enums.VirtualKey;
  isEnabled?: boolean;
  onInvoked?: (event: NativeSyntheticEvent<undefined>) => void;
}
export interface NativeShapeProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Shapes.Shape' |
        'Windows.UI.Xaml.Shapes.Ellipse' |
        'Windows.UI.Xaml.Shapes.Line' |
        'Windows.UI.Xaml.Shapes.Path' |
        'Windows.UI.Xaml.Shapes.Polygon' |
        'Windows.UI.Xaml.Shapes.Polyline' |
        'Windows.UI.Xaml.Shapes.Rectangle';
  strokeThickness?: number;
  strokeStartLineCap?: Enums.PenLineCap;
  strokeMiterLimit?: number;
  strokeLineJoin?: Enums.PenLineJoin;
  strokeEndLineCap?: Enums.PenLineCap;
  strokeDashOffset?: number;
  strokeDashCap?: Enums.PenLineCap;
  stroke?: ColorValue;
  stretch?: Enums.Stretch;
  fill?: ColorValue;
}
export interface NativeEllipseProps extends NativeShapeProps {
  type: 'Windows.UI.Xaml.Shapes.Ellipse';
}
export interface NativeLineProps extends NativeShapeProps {
  type: 'Windows.UI.Xaml.Shapes.Line';
  y2?: number;
  y1?: number;
  x2?: number;
  x1?: number;
}
export interface NativePathProps extends NativeShapeProps {
  type: 'Windows.UI.Xaml.Shapes.Path';
  data?: string;
}
export interface NativePolygonProps extends NativeShapeProps {
  type: 'Windows.UI.Xaml.Shapes.Polygon';
  fillRule?: Enums.FillRule;
}
export interface NativePolylineProps extends NativeShapeProps {
  type: 'Windows.UI.Xaml.Shapes.Polyline';
  fillRule?: Enums.FillRule;
}
export interface NativeRectangleProps extends NativeShapeProps {
  type: 'Windows.UI.Xaml.Shapes.Rectangle';
  radiusY?: number;
  radiusX?: number;
}

export type XamlControlProps = NativeWinUI.NativeAnimatedIconProps
	 |  NativeWinUI.NativeAnimatedVisualPlayerProps
	 |  NativeWinUI.NativeBreadcrumbBarProps
	 |  NativeWinUI.NativeBreadcrumbBarItemProps
	 |  NativeWinUI.NativeColorPickerProps
	 |  NativeWinUI.NativeCommandBarFlyoutProps
	 |  NativeWinUI.NativeDropDownButtonProps
	 |  NativeWinUI.NativeExpanderProps
	 |  NativeWinUI.NativeImageIconProps
	 |  NativeWinUI.NativeInfoBarProps
	 |  NativeWinUI.NativeItemsRepeaterProps
	 |  NativeWinUI.NativeItemsRepeaterScrollHostProps
	 |  NativeWinUI.NativeMenuBarProps
	 |  NativeWinUI.NativeMenuBarItemProps
	 |  NativeWinUI.NativeMenuBarItemFlyoutProps
	 |  NativeWinUI.NativeNavigationViewProps
	 |  NativeWinUI.NativeNavigationViewItemBaseProps
	 |  NativeWinUI.NativeNavigationViewItemProps
	 |  NativeWinUI.NativeNavigationViewItemHeaderProps
	 |  NativeWinUI.NativeNavigationViewItemSeparatorProps
	 |  NativeWinUI.NativeNumberBoxProps
	 |  NativeWinUI.NativeParallaxViewProps
	 |  NativeWinUI.NativePersonPictureProps
	 |  NativeWinUI.NativePipsPagerProps
	 |  NativeWinUI.NativeColorPickerSliderProps
	 |  NativeWinUI.NativeColorSpectrumProps
	 |  NativeWinUI.NativeCommandBarFlyoutCommandBarProps
	 |  NativeWinUI.NativeInfoBarPanelProps
	 |  NativeWinUI.NativeMonochromaticOverlayPresenterProps
	 |  NativeWinUI.NativeNavigationViewItemPresenterProps
	 |  NativeWinUI.NativeTabViewListViewProps
	 |  NativeWinUI.NativeProgressBarProps
	 |  NativeWinUI.NativeProgressRingProps
	 |  NativeWinUI.NativeRadioButtonsProps
	 |  NativeWinUI.NativeRadioMenuFlyoutItemProps
	 |  NativeWinUI.NativeRatingControlProps
	 |  NativeWinUI.NativeRefreshContainerProps
	 |  NativeWinUI.NativeRefreshVisualizerProps
	 |  NativeWinUI.NativeRevealListViewItemPresenterProps
	 |  NativeWinUI.NativeSplitButtonProps
	 |  NativeWinUI.NativeSwipeControlProps
	 |  NativeWinUI.NativeTabViewProps
	 |  NativeWinUI.NativeTabViewItemProps
	 |  NativeWinUI.NativeTeachingTipProps
	 |  NativeWinUI.NativeTextCommandBarFlyoutProps
	 |  NativeWinUI.NativeToggleSplitButtonProps
	 |  NativeWinUI.NativeTreeViewProps
	 |  NativeWinUI.NativeTreeViewItemProps
	 |  NativeWinUI.NativeTreeViewListProps
	 |  NativeWinUI.NativeTwoPaneViewProps
	 |  NativeDependencyObjectProps
	 |  NativeUIElementProps
	 |  NativeFrameworkElementProps
	 |  NativeControlProps
	 |  NativeContentControlProps
	 |  NativeAppBarProps
	 |  NativeButtonBaseProps
	 |  NativeButtonProps
	 |  NativeAppBarButtonProps
	 |  NativeAppBarElementContainerProps
	 |  NativeAppBarSeparatorProps
	 |  NativeToggleButtonProps
	 |  NativeAppBarToggleButtonProps
	 |  NativeItemsControlProps
	 |  NativeAutoSuggestBoxProps
	 |  NativeIconElementProps
	 |  NativeBitmapIconProps
	 |  NativeBorderProps
	 |  NativeCalendarDatePickerProps
	 |  NativeCalendarViewProps
	 |  NativeCalendarViewDayItemProps
	 |  NativePanelProps
	 |  NativeCanvasProps
	 |  NativeCaptureElementProps
	 |  NativeCheckBoxProps
	 |  NativeColorPickerProps
	 |  NativeSelectorProps
	 |  NativeComboBoxProps
	 |  NativeSelectorItemProps
	 |  NativeComboBoxItemProps
	 |  NativeCommandBarProps
	 |  NativeFlyoutBaseProps
	 |  NativeCommandBarFlyoutProps
	 |  NativeCommandBarOverflowPresenterProps
	 |  NativeContentDialogProps
	 |  NativeContentPresenterProps
	 |  NativeDatePickerProps
	 |  NativePickerFlyoutBaseProps
	 |  NativeDatePickerFlyoutProps
	 |  NativeDropDownButtonProps
	 |  NativeFlipViewProps
	 |  NativeFlipViewItemProps
	 |  NativeFlyoutProps
	 |  NativeFlyoutPresenterProps
	 |  NativeFontIconProps
	 |  NativeFrameProps
	 |  NativeGridProps
	 |  NativeListViewBaseProps
	 |  NativeGridViewProps
	 |  NativeListViewBaseHeaderItemProps
	 |  NativeGridViewHeaderItemProps
	 |  NativeGridViewItemProps
	 |  NativeGroupItemProps
	 |  NativeHandwritingViewProps
	 |  NativeHubProps
	 |  NativeHubSectionProps
	 |  NativeHyperlinkButtonProps
	 |  NativeIconSourceElementProps
	 |  NativeImageProps
	 |  NativeInkCanvasProps
	 |  NativeInkToolbarProps
	 |  NativeRadioButtonProps
	 |  NativeInkToolbarToolButtonProps
	 |  NativeInkToolbarPenButtonProps
	 |  NativeInkToolbarBallpointPenButtonProps
	 |  NativeInkToolbarCustomPenButtonProps
	 |  NativeInkToolbarToggleButtonProps
	 |  NativeInkToolbarCustomToggleButtonProps
	 |  NativeInkToolbarCustomToolButtonProps
	 |  NativeInkToolbarEraserButtonProps
	 |  NativeInkToolbarFlyoutItemProps
	 |  NativeInkToolbarHighlighterButtonProps
	 |  NativeInkToolbarMenuButtonProps
	 |  NativeInkToolbarPenConfigurationControlProps
	 |  NativeInkToolbarPencilButtonProps
	 |  NativeInkToolbarRulerButtonProps
	 |  NativeInkToolbarStencilButtonProps
	 |  NativeItemsPresenterProps
	 |  NativeItemsStackPanelProps
	 |  NativeItemsWrapGridProps
	 |  NativeListBoxProps
	 |  NativeListBoxItemProps
	 |  NativeListPickerFlyoutProps
	 |  NativeListViewProps
	 |  NativeListViewHeaderItemProps
	 |  NativeListViewItemProps
	 |  NativeMapControlProps
	 |  NativeMediaElementProps
	 |  NativeMediaPlayerElementProps
	 |  NativeMediaPlayerPresenterProps
	 |  NativeMediaTransportControlsProps
	 |  NativeMenuBarProps
	 |  NativeMenuBarItemProps
	 |  NativeMenuFlyoutProps
	 |  NativeMenuBarItemFlyoutProps
	 |  NativeMenuFlyoutItemBaseProps
	 |  NativeMenuFlyoutItemProps
	 |  NativeMenuFlyoutPresenterProps
	 |  NativeMenuFlyoutSeparatorProps
	 |  NativeMenuFlyoutSubItemProps
	 |  NativeNavigationViewProps
	 |  NativeNavigationViewItemBaseProps
	 |  NativeNavigationViewItemProps
	 |  NativeNavigationViewItemHeaderProps
	 |  NativeNavigationViewItemSeparatorProps
	 |  NativeNavigationViewListProps
	 |  NativeUserControlProps
	 |  NativePageProps
	 |  NativeParallaxViewProps
	 |  NativePasswordBoxProps
	 |  NativePathIconProps
	 |  NativePersonPictureProps
	 |  NativePickerFlyoutProps
	 |  NativePivotProps
	 |  NativePivotItemProps
	 |  NativeCalendarPanelProps
	 |  NativeVirtualizingPanelProps
	 |  NativeCarouselPanelProps
	 |  NativeRangeBaseProps
	 |  NativeSliderProps
	 |  NativeColorPickerSliderProps
	 |  NativeColorSpectrumProps
	 |  NativeCommandBarFlyoutCommandBarProps
	 |  NativeGridViewItemPresenterProps
	 |  NativeListViewItemPresenterProps
	 |  NativeNavigationViewItemPresenterProps
	 |  NativeOrientedVirtualizingPanelProps
	 |  NativePivotHeaderItemProps
	 |  NativePivotHeaderPanelProps
	 |  NativePivotPanelProps
	 |  NativePopupProps
	 |  NativeRepeatButtonProps
	 |  NativeScrollBarProps
	 |  NativeThumbProps
	 |  NativeTickBarProps
	 |  NativeProgressBarProps
	 |  NativeProgressRingProps
	 |  NativeRatingControlProps
	 |  NativeRefreshContainerProps
	 |  NativeRefreshVisualizerProps
	 |  NativeRelativePanelProps
	 |  NativeRichEditBoxProps
	 |  NativeRichTextBlockProps
	 |  NativeRichTextBlockOverflowProps
	 |  NativeScrollContentPresenterProps
	 |  NativeScrollViewerProps
	 |  NativeSearchBoxProps
	 |  NativeSemanticZoomProps
	 |  NativeSettingsFlyoutProps
	 |  NativeSplitButtonProps
	 |  NativeSplitViewProps
	 |  NativeStackPanelProps
	 |  NativeSwapChainBackgroundPanelProps
	 |  NativeSwapChainPanelProps
	 |  NativeSwipeControlProps
	 |  NativeSymbolIconProps
	 |  NativeTextBlockProps
	 |  NativeTextBoxProps
	 |  NativeTextCommandBarFlyoutProps
	 |  NativeTimePickerProps
	 |  NativeTimePickerFlyoutProps
	 |  NativeToggleMenuFlyoutItemProps
	 |  NativeToggleSplitButtonProps
	 |  NativeToggleSwitchProps
	 |  NativeToolTipProps
	 |  NativeTreeViewProps
	 |  NativeTreeViewItemProps
	 |  NativeTreeViewListProps
	 |  NativeTwoPaneViewProps
	 |  NativeVariableSizedWrapGridProps
	 |  NativeViewboxProps
	 |  NativeVirtualizingStackPanelProps
	 |  NativeWebViewProps
	 |  NativeWrapGridProps
	 |  NativeTextElementProps
	 |  NativeBlockProps
	 |  NativeInlineProps
	 |  NativeSpanProps
	 |  NativeBoldProps
	 |  NativeContentLinkProps
	 |  NativeGlyphsProps
	 |  NativeHyperlinkProps
	 |  NativeInlineUIContainerProps
	 |  NativeItalicProps
	 |  NativeLineBreakProps
	 |  NativeParagraphProps
	 |  NativeRunProps
	 |  NativeUnderlineProps
	 |  NativeKeyboardAcceleratorProps
	 |  NativeShapeProps
	 |  NativeEllipseProps
	 |  NativeLineProps
	 |  NativePathProps
	 |  NativePolygonProps
	 |  NativePolylineProps
	 |  NativeRectangleProps
	;


