import type { ViewProps, NativeSyntheticEvent, ColorValue } from 'react-native';
import type * as Enums from './Enums';

export type Thickness = number | { left: number, top: number, right: number, bottom: number };


export interface NativeDependencyObjectProps extends ViewProps {
  type: 'contentControl'|'appBar'|'button'|'appBarButton'|'appBarElementContainer'|'appBarSeparator'|'toggleButton'|'appBarToggleButton'|'itemsControl'|'autoSuggestBox'|'bitmapIcon'|'border'|'calendarDatePicker'|'calendarView'|'calendarViewDayItem'|'canvas'|'captureElement'|'checkBox'|'colorPicker'|'comboBox'|'comboBoxItem'|'commandBar'|'commandBarFlyout'|'commandBarOverflowPresenter'|'contentDialog'|'contentPresenter'|'datePicker'|'datePickerFlyout'|'dropDownButton'|'flipView'|'flipViewItem'|'flyout'|'flyoutPresenter'|'fontIcon'|'frame'|'grid'|'gridView'|'gridViewHeaderItem'|'gridViewItem'|'groupItem'|'handwritingView'|'hub'|'hubSection'|'hyperlinkButton'|'iconSourceElement'|'image'|'inkCanvas'|'inkToolbar'|'radioButton'|'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarCustomToggleButton'|'inkToolbarCustomToolButton'|'inkToolbarEraserButton'|'inkToolbarFlyoutItem'|'inkToolbarHighlighterButton'|'inkToolbarPenConfigurationControl'|'inkToolbarPencilButton'|'inkToolbarRulerButton'|'inkToolbarStencilButton'|'itemsPresenter'|'itemsStackPanel'|'itemsWrapGrid'|'listBox'|'listBoxItem'|'listPickerFlyout'|'listView'|'listViewHeaderItem'|'listViewItem'|'mapControl'|'mediaElement'|'mediaPlayerElement'|'mediaPlayerPresenter'|'mediaTransportControls'|'menuBar'|'menuBarItem'|'menuFlyout'|'menuBarItemFlyout'|'menuFlyoutItem'|'menuFlyoutPresenter'|'menuFlyoutSeparator'|'menuFlyoutSubItem'|'navigationView'|'navigationViewItem'|'navigationViewItemHeader'|'navigationViewItemSeparator'|'navigationViewList'|'userControl'|'page'|'parallaxView'|'passwordBox'|'pathIcon'|'personPicture'|'pickerFlyout'|'pivot'|'pivotItem'|'calendarPanel'|'carouselPanel'|'slider'|'colorPickerSlider'|'colorSpectrum'|'commandBarFlyoutCommandBar'|'gridViewItemPresenter'|'listViewItemPresenter'|'navigationViewItemPresenter'|'pivotHeaderItem'|'pivotHeaderPanel'|'pivotPanel'|'popup'|'repeatButton'|'scrollBar'|'thumb'|'tickBar'|'progressBar'|'progressRing'|'ratingControl'|'refreshContainer'|'refreshVisualizer'|'relativePanel'|'richEditBox'|'richTextBlock'|'richTextBlockOverflow'|'scrollContentPresenter'|'scrollViewer'|'searchBox'|'semanticZoom'|'settingsFlyout'|'splitButton'|'splitView'|'stackPanel'|'swapChainBackgroundPanel'|'swapChainPanel'|'swipeControl'|'symbolIcon'|'textBlock'|'textBox'|'textCommandBarFlyout'|'timePicker'|'timePickerFlyout'|'toggleMenuFlyoutItem'|'toggleSplitButton'|'toggleSwitch'|'toolTip'|'treeView'|'treeViewItem'|'treeViewList'|'twoPaneView'|'variableSizedWrapGrid'|'viewbox'|'virtualizingStackPanel'|'webView'|'wrapGrid'|'glyphs'|'ellipse'|'line'|'path'|'polygon'|'polyline'|'rectangle';
}


export interface NativeUIElementProps extends NativeDependencyObjectProps {
  type: 'contentControl'|'appBar'|'button'|'appBarButton'|'appBarElementContainer'|'appBarSeparator'|'toggleButton'|'appBarToggleButton'|'itemsControl'|'autoSuggestBox'|'bitmapIcon'|'border'|'calendarDatePicker'|'calendarView'|'calendarViewDayItem'|'canvas'|'captureElement'|'checkBox'|'colorPicker'|'comboBox'|'comboBoxItem'|'commandBar'|'commandBarOverflowPresenter'|'contentDialog'|'contentPresenter'|'datePicker'|'dropDownButton'|'flipView'|'flipViewItem'|'flyoutPresenter'|'fontIcon'|'frame'|'grid'|'gridView'|'gridViewHeaderItem'|'gridViewItem'|'groupItem'|'handwritingView'|'hub'|'hubSection'|'hyperlinkButton'|'iconSourceElement'|'image'|'inkCanvas'|'inkToolbar'|'radioButton'|'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarCustomToggleButton'|'inkToolbarCustomToolButton'|'inkToolbarEraserButton'|'inkToolbarFlyoutItem'|'inkToolbarHighlighterButton'|'inkToolbarPenConfigurationControl'|'inkToolbarPencilButton'|'inkToolbarRulerButton'|'inkToolbarStencilButton'|'itemsPresenter'|'itemsStackPanel'|'itemsWrapGrid'|'listBox'|'listBoxItem'|'listView'|'listViewHeaderItem'|'listViewItem'|'mapControl'|'mediaElement'|'mediaPlayerElement'|'mediaPlayerPresenter'|'mediaTransportControls'|'menuBar'|'menuBarItem'|'menuFlyoutItem'|'menuFlyoutPresenter'|'menuFlyoutSeparator'|'menuFlyoutSubItem'|'navigationView'|'navigationViewItem'|'navigationViewItemHeader'|'navigationViewItemSeparator'|'navigationViewList'|'userControl'|'page'|'parallaxView'|'passwordBox'|'pathIcon'|'personPicture'|'pivot'|'pivotItem'|'calendarPanel'|'carouselPanel'|'slider'|'colorPickerSlider'|'colorSpectrum'|'commandBarFlyoutCommandBar'|'gridViewItemPresenter'|'listViewItemPresenter'|'navigationViewItemPresenter'|'pivotHeaderItem'|'pivotHeaderPanel'|'pivotPanel'|'popup'|'repeatButton'|'scrollBar'|'thumb'|'tickBar'|'progressBar'|'progressRing'|'ratingControl'|'refreshContainer'|'refreshVisualizer'|'relativePanel'|'richEditBox'|'richTextBlock'|'richTextBlockOverflow'|'scrollContentPresenter'|'scrollViewer'|'searchBox'|'semanticZoom'|'settingsFlyout'|'splitButton'|'splitView'|'stackPanel'|'swapChainBackgroundPanel'|'swapChainPanel'|'swipeControl'|'symbolIcon'|'textBlock'|'textBox'|'timePicker'|'toggleMenuFlyoutItem'|'toggleSplitButton'|'toggleSwitch'|'toolTip'|'treeView'|'treeViewItem'|'treeViewList'|'twoPaneView'|'variableSizedWrapGrid'|'viewbox'|'virtualizingStackPanel'|'webView'|'wrapGrid'|'glyphs'|'ellipse'|'line'|'path'|'polygon'|'polyline'|'rectangle';
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
  type: 'contentControl'|'appBar'|'button'|'appBarButton'|'appBarElementContainer'|'appBarSeparator'|'toggleButton'|'appBarToggleButton'|'itemsControl'|'autoSuggestBox'|'bitmapIcon'|'border'|'calendarDatePicker'|'calendarView'|'calendarViewDayItem'|'canvas'|'captureElement'|'checkBox'|'colorPicker'|'comboBox'|'comboBoxItem'|'commandBar'|'commandBarOverflowPresenter'|'contentDialog'|'contentPresenter'|'datePicker'|'dropDownButton'|'flipView'|'flipViewItem'|'flyoutPresenter'|'fontIcon'|'frame'|'grid'|'gridView'|'gridViewHeaderItem'|'gridViewItem'|'groupItem'|'handwritingView'|'hub'|'hubSection'|'hyperlinkButton'|'iconSourceElement'|'image'|'inkCanvas'|'inkToolbar'|'radioButton'|'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarCustomToggleButton'|'inkToolbarCustomToolButton'|'inkToolbarEraserButton'|'inkToolbarFlyoutItem'|'inkToolbarHighlighterButton'|'inkToolbarPenConfigurationControl'|'inkToolbarPencilButton'|'inkToolbarRulerButton'|'inkToolbarStencilButton'|'itemsPresenter'|'itemsStackPanel'|'itemsWrapGrid'|'listBox'|'listBoxItem'|'listView'|'listViewHeaderItem'|'listViewItem'|'mapControl'|'mediaElement'|'mediaPlayerElement'|'mediaPlayerPresenter'|'mediaTransportControls'|'menuBar'|'menuBarItem'|'menuFlyoutItem'|'menuFlyoutPresenter'|'menuFlyoutSeparator'|'menuFlyoutSubItem'|'navigationView'|'navigationViewItem'|'navigationViewItemHeader'|'navigationViewItemSeparator'|'navigationViewList'|'userControl'|'page'|'parallaxView'|'passwordBox'|'pathIcon'|'personPicture'|'pivot'|'pivotItem'|'calendarPanel'|'carouselPanel'|'slider'|'colorPickerSlider'|'colorSpectrum'|'commandBarFlyoutCommandBar'|'gridViewItemPresenter'|'listViewItemPresenter'|'navigationViewItemPresenter'|'pivotHeaderItem'|'pivotHeaderPanel'|'pivotPanel'|'popup'|'repeatButton'|'scrollBar'|'thumb'|'tickBar'|'progressBar'|'progressRing'|'ratingControl'|'refreshContainer'|'refreshVisualizer'|'relativePanel'|'richEditBox'|'richTextBlock'|'richTextBlockOverflow'|'scrollContentPresenter'|'scrollViewer'|'searchBox'|'semanticZoom'|'settingsFlyout'|'splitButton'|'splitView'|'stackPanel'|'swapChainBackgroundPanel'|'swapChainPanel'|'swipeControl'|'symbolIcon'|'textBlock'|'textBox'|'timePicker'|'toggleMenuFlyoutItem'|'toggleSplitButton'|'toggleSwitch'|'toolTip'|'treeView'|'treeViewItem'|'treeViewList'|'twoPaneView'|'variableSizedWrapGrid'|'viewbox'|'virtualizingStackPanel'|'webView'|'wrapGrid'|'glyphs'|'ellipse'|'line'|'path'|'polygon'|'polyline'|'rectangle';
  width?: number;
  verticalAlignment?: Enums.VerticalAlignment;
  tag?: object;
  name?: string;
  minWidth?: number;
  minHeight?: number;
  maxWidth?: number;
  maxHeight?: number;
  margin?: Thickness;
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
  type: 'contentControl'|'appBar'|'button'|'appBarButton'|'appBarElementContainer'|'appBarSeparator'|'toggleButton'|'appBarToggleButton'|'itemsControl'|'autoSuggestBox'|'calendarDatePicker'|'calendarView'|'calendarViewDayItem'|'checkBox'|'colorPicker'|'comboBox'|'comboBoxItem'|'commandBar'|'commandBarOverflowPresenter'|'contentDialog'|'datePicker'|'dropDownButton'|'flipView'|'flipViewItem'|'flyoutPresenter'|'frame'|'gridView'|'gridViewHeaderItem'|'gridViewItem'|'groupItem'|'handwritingView'|'hub'|'hubSection'|'hyperlinkButton'|'inkToolbar'|'radioButton'|'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarCustomToggleButton'|'inkToolbarCustomToolButton'|'inkToolbarEraserButton'|'inkToolbarFlyoutItem'|'inkToolbarHighlighterButton'|'inkToolbarPenConfigurationControl'|'inkToolbarPencilButton'|'inkToolbarRulerButton'|'inkToolbarStencilButton'|'listBox'|'listBoxItem'|'listView'|'listViewHeaderItem'|'listViewItem'|'mapControl'|'mediaPlayerElement'|'mediaTransportControls'|'menuBar'|'menuBarItem'|'menuFlyoutItem'|'menuFlyoutPresenter'|'menuFlyoutSeparator'|'menuFlyoutSubItem'|'navigationView'|'navigationViewItem'|'navigationViewItemHeader'|'navigationViewItemSeparator'|'navigationViewList'|'userControl'|'page'|'passwordBox'|'personPicture'|'pivot'|'pivotItem'|'slider'|'colorPickerSlider'|'colorSpectrum'|'commandBarFlyoutCommandBar'|'navigationViewItemPresenter'|'pivotHeaderItem'|'repeatButton'|'scrollBar'|'thumb'|'progressBar'|'progressRing'|'ratingControl'|'refreshContainer'|'refreshVisualizer'|'richEditBox'|'scrollViewer'|'searchBox'|'semanticZoom'|'settingsFlyout'|'splitButton'|'splitView'|'swipeControl'|'textBox'|'timePicker'|'toggleMenuFlyoutItem'|'toggleSplitButton'|'toggleSwitch'|'toolTip'|'treeView'|'treeViewItem'|'treeViewList'|'twoPaneView';
  padding?: Thickness;
  isTabStop?: boolean;
  isEnabled?: boolean;
  horizontalContentAlignment?: Enums.HorizontalAlignment;
  foreground?: ColorValue;
  fontStyle?: Enums.FontStyle;
  fontStretch?: Enums.FontStretch;
  fontSize?: number;
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
  backgroundSizing?: Enums.BackgroundSizing;
  defaultStyleKey?: object;
  onIsEnabledChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onFocusDisengaged?: (event: NativeSyntheticEvent<undefined>) => void;
  onFocusEngaged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeContentControlProps extends NativeControlProps {
  type: 'contentControl'|'appBar'|'button'|'appBarButton'|'appBarElementContainer'|'toggleButton'|'appBarToggleButton'|'checkBox'|'comboBoxItem'|'commandBar'|'contentDialog'|'dropDownButton'|'flipViewItem'|'flyoutPresenter'|'frame'|'gridViewHeaderItem'|'gridViewItem'|'groupItem'|'hyperlinkButton'|'radioButton'|'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarCustomToggleButton'|'inkToolbarCustomToolButton'|'inkToolbarEraserButton'|'inkToolbarFlyoutItem'|'inkToolbarHighlighterButton'|'inkToolbarPencilButton'|'inkToolbarRulerButton'|'inkToolbarStencilButton'|'listBoxItem'|'listViewHeaderItem'|'listViewItem'|'navigationView'|'navigationViewItem'|'navigationViewItemHeader'|'navigationViewItemSeparator'|'pivotItem'|'commandBarFlyoutCommandBar'|'navigationViewItemPresenter'|'pivotHeaderItem'|'repeatButton'|'refreshContainer'|'scrollViewer'|'settingsFlyout'|'splitButton'|'swipeControl'|'toggleSplitButton'|'toolTip'|'treeViewItem';
  content?: object;
}


export interface NativeAppBarProps extends NativeContentControlProps {
  type: 'appBar'|'commandBar'|'commandBarFlyoutCommandBar';
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
  type: 'button'|'appBarButton'|'toggleButton'|'appBarToggleButton'|'checkBox'|'dropDownButton'|'hyperlinkButton'|'radioButton'|'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarCustomToggleButton'|'inkToolbarCustomToolButton'|'inkToolbarEraserButton'|'inkToolbarFlyoutItem'|'inkToolbarHighlighterButton'|'inkToolbarPencilButton'|'inkToolbarRulerButton'|'inkToolbarStencilButton'|'repeatButton';
  commandParameter?: object;
  clickMode?: Enums.ClickMode;
  onClick?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeButtonProps extends NativeButtonBaseProps {
  type: 'button'|'appBarButton'|'dropDownButton';
}


export interface NativeAppBarButtonProps extends NativeButtonProps {
  type: 'appBarButton';
  label?: string;
  labelPosition?: Enums.CommandBarLabelPosition;
  keyboardAcceleratorTextOverride?: string;
  isCompact?: boolean;
  dynamicOverflowOrder?: number;
}


export interface NativeAppBarElementContainerProps extends NativeContentControlProps {
  type: 'appBarElementContainer';
  isCompact?: boolean;
  dynamicOverflowOrder?: number;
}


export interface NativeAppBarSeparatorProps extends NativeControlProps {
  type: 'appBarSeparator';
  isCompact?: boolean;
  dynamicOverflowOrder?: number;
}


export interface NativeToggleButtonProps extends NativeButtonBaseProps {
  type: 'toggleButton'|'appBarToggleButton'|'checkBox'|'radioButton'|'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarCustomToggleButton'|'inkToolbarCustomToolButton'|'inkToolbarEraserButton'|'inkToolbarHighlighterButton'|'inkToolbarPencilButton'|'inkToolbarRulerButton'|'inkToolbarStencilButton';
  isThreeState?: boolean;
  onChecked?: (event: NativeSyntheticEvent<undefined>) => void;
  onIndeterminate?: (event: NativeSyntheticEvent<undefined>) => void;
  onUnchecked?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeAppBarToggleButtonProps extends NativeToggleButtonProps {
  type: 'appBarToggleButton';
  label?: string;
  labelPosition?: Enums.CommandBarLabelPosition;
  keyboardAcceleratorTextOverride?: string;
  isCompact?: boolean;
  dynamicOverflowOrder?: number;
}


export interface NativeItemsControlProps extends NativeControlProps {
  type: 'itemsControl'|'autoSuggestBox'|'comboBox'|'commandBarOverflowPresenter'|'flipView'|'gridView'|'listBox'|'listView'|'menuFlyoutPresenter'|'navigationViewList'|'pivot'|'treeViewList';
  itemsSource?: object;
  displayMemberPath?: string;
}


export interface NativeAutoSuggestBoxProps extends NativeItemsControlProps {
  type: 'autoSuggestBox';
  updateTextOnSelect?: boolean;
  textMemberPath?: string;
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
  type: 'bitmapIcon'|'fontIcon'|'iconSourceElement'|'pathIcon'|'symbolIcon';
  foreground?: ColorValue;
}


export interface NativeBitmapIconProps extends NativeIconElementProps {
  type: 'bitmapIcon';
  showAsMonochrome?: boolean;
}


export interface NativeBorderProps extends NativeFrameworkElementProps {
  type: 'border';
  padding?: Thickness;
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  background?: ColorValue;
  backgroundSizing?: Enums.BackgroundSizing;
}


export interface NativeCalendarDatePickerProps extends NativeControlProps {
  type: 'calendarDatePicker';
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
  calendarIdentifier?: string;
  lightDismissOverlayMode?: Enums.LightDismissOverlayMode;
  description?: object;
  onCalendarViewDayItemChanging?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onDateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeCalendarViewProps extends NativeControlProps {
  type: 'calendarView';
  horizontalFirstOfMonthLabelAlignment?: Enums.HorizontalAlignment;
  horizontalDayItemAlignment?: Enums.HorizontalAlignment;
  focusBorderBrush?: ColorValue;
  firstOfYearDecadeLabelFontStyle?: Enums.FontStyle;
  firstOfMonthLabelFontStyle?: Enums.FontStyle;
  firstOfMonthLabelFontSize?: number;
  firstDayOfWeek?: Enums.DayOfWeek;
  blackoutForeground?: ColorValue;
  dayOfWeekFormat?: string;
  dayItemFontStyle?: Enums.FontStyle;
  dayItemFontSize?: number;
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
  selectionMode?: Enums.CalendarViewSelectionMode;
  selectedHoverBorderBrush?: ColorValue;
  selectedForeground?: ColorValue;
  selectedBorderBrush?: ColorValue;
  pressedForeground?: ColorValue;
  verticalFirstOfMonthLabelAlignment?: Enums.VerticalAlignment;
  outOfScopeForeground?: ColorValue;
  outOfScopeBackground?: ColorValue;
  numberOfWeeksInView?: number;
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
  type: 'calendarViewDayItem';
  isBlackout?: boolean;
}


export interface NativePanelProps extends NativeFrameworkElementProps {
  type: 'canvas'|'grid'|'itemsStackPanel'|'itemsWrapGrid'|'calendarPanel'|'carouselPanel'|'pivotHeaderPanel'|'pivotPanel'|'relativePanel'|'stackPanel'|'swapChainBackgroundPanel'|'swapChainPanel'|'variableSizedWrapGrid'|'virtualizingStackPanel'|'wrapGrid';
  background?: ColorValue;
}


export interface NativeCanvasProps extends NativePanelProps {
  type: 'canvas'|'pivotHeaderPanel';
}


export interface NativeCaptureElementProps extends NativeFrameworkElementProps {
  type: 'captureElement';
  stretch?: Enums.Stretch;
}


export interface NativeCheckBoxProps extends NativeToggleButtonProps {
  type: 'checkBox'|'inkToolbarCustomToggleButton'|'inkToolbarRulerButton';
}


export interface NativeColorPickerProps extends NativeControlProps {
  type: 'colorPicker';
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
  type: 'comboBox'|'flipView'|'gridView'|'listBox'|'listView'|'navigationViewList'|'treeViewList';
  selectedValuePath?: string;
  selectedValue?: object;
  selectedItem?: object;
  selectedIndex?: number;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeComboBoxProps extends NativeSelectorProps {
  type: 'comboBox';
  maxDropDownHeight?: number;
  isEditable?: boolean;
  isDropDownOpen?: boolean;
  placeholderText?: string;
  header?: object;
  lightDismissOverlayMode?: Enums.LightDismissOverlayMode;
  isTextSearchEnabled?: boolean;
  selectionChangedTrigger?: Enums.ComboBoxSelectionChangedTrigger;
  placeholderForeground?: ColorValue;
  text?: string;
  description?: object;
  onDropDownClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onDropDownOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onTextSubmitted?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeSelectorItemProps extends NativeContentControlProps {
  type: 'comboBoxItem'|'flipViewItem'|'gridViewItem'|'listBoxItem'|'listViewItem'|'navigationViewItem'|'navigationViewItemHeader'|'navigationViewItemSeparator'|'treeViewItem';
  isSelected?: boolean;
}


export interface NativeComboBoxItemProps extends NativeSelectorItemProps {
  type: 'comboBoxItem';
}


export interface NativeCommandBarProps extends NativeAppBarProps {
  type: 'commandBar'|'commandBarFlyoutCommandBar';
  overflowButtonVisibility?: Enums.CommandBarOverflowButtonVisibility;
  isDynamicOverflowEnabled?: boolean;
  defaultLabelPosition?: Enums.CommandBarDefaultLabelPosition;
  onDynamicOverflowItemsChanging?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeFlyoutBaseProps extends NativeDependencyObjectProps {
  type: 'commandBarFlyout'|'datePickerFlyout'|'flyout'|'listPickerFlyout'|'menuFlyout'|'menuBarItemFlyout'|'pickerFlyout'|'textCommandBarFlyout'|'timePickerFlyout';
  placement?: Enums.FlyoutPlacementMode;
  lightDismissOverlayMode?: Enums.LightDismissOverlayMode;
  elementSoundMode?: Enums.ElementSoundMode;
  allowFocusWhenDisabled?: boolean;
  allowFocusOnInteraction?: boolean;
  showMode?: Enums.FlyoutShowMode;
  areOpenCloseAnimationsEnabled?: boolean;
  shouldConstrainToRootBounds?: boolean;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpening?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosing?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeCommandBarFlyoutProps extends NativeFlyoutBaseProps {
  type: 'commandBarFlyout'|'textCommandBarFlyout';
}


export interface NativeCommandBarOverflowPresenterProps extends NativeItemsControlProps {
  type: 'commandBarOverflowPresenter';
}


export interface NativeContentDialogProps extends NativeContentControlProps {
  type: 'contentDialog';
  title?: object;
  secondaryButtonText?: string;
  secondaryButtonCommandParameter?: object;
  primaryButtonText?: string;
  primaryButtonCommandParameter?: object;
  isSecondaryButtonEnabled?: boolean;
  isPrimaryButtonEnabled?: boolean;
  fullSizeDesired?: boolean;
  defaultButton?: Enums.ContentDialogButton;
  closeButtonText?: string;
  closeButtonCommandParameter?: object;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosing?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onPrimaryButtonClick?: (event: NativeSyntheticEvent<undefined>) => void;
  onSecondaryButtonClick?: (event: NativeSyntheticEvent<undefined>) => void;
  onCloseButtonClick?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeContentPresenterProps extends NativeFrameworkElementProps {
  type: 'contentPresenter'|'gridViewItemPresenter'|'listViewItemPresenter'|'scrollContentPresenter';
  foreground?: ColorValue;
  fontStyle?: Enums.FontStyle;
  fontStretch?: Enums.FontStretch;
  fontSize?: number;
  content?: object;
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
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  background?: ColorValue;
  backgroundSizing?: Enums.BackgroundSizing;
}


export interface NativeDatePickerProps extends NativeControlProps {
  type: 'datePicker';
  yearVisible?: boolean;
  yearFormat?: string;
  orientation?: Enums.Orientation;
  monthVisible?: boolean;
  monthFormat?: string;
  header?: object;
  dayVisible?: boolean;
  dayFormat?: string;
  calendarIdentifier?: string;
  lightDismissOverlayMode?: Enums.LightDismissOverlayMode;
  onDateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectedDateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativePickerFlyoutBaseProps extends NativeFlyoutBaseProps {
  type: 'datePickerFlyout'|'listPickerFlyout'|'pickerFlyout'|'timePickerFlyout';
}


export interface NativeDatePickerFlyoutProps extends NativePickerFlyoutBaseProps {
  type: 'datePickerFlyout';
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
  isDefaultShadowEnabled?: boolean;
}


export interface NativeDropDownButtonProps extends NativeButtonProps {
  type: 'dropDownButton';
}


export interface NativeFlipViewProps extends NativeSelectorProps {
  type: 'flipView';
  useTouchAnimationsForAllNavigation?: boolean;
}


export interface NativeFlipViewItemProps extends NativeSelectorItemProps {
  type: 'flipViewItem';
}


export interface NativeFlyoutProps extends NativeFlyoutBaseProps {
  type: 'flyout';
}


export interface NativeFlyoutPresenterProps extends NativeContentControlProps {
  type: 'flyoutPresenter';
  isDefaultShadowEnabled?: boolean;
}


export interface NativeFontIconProps extends NativeIconElementProps {
  type: 'fontIcon';
  glyph?: string;
  fontStyle?: Enums.FontStyle;
  fontSize?: number;
  isTextScaleFactorEnabled?: boolean;
  mirroredWhenRightToLeft?: boolean;
}


export interface NativeFrameProps extends NativeContentControlProps {
  type: 'frame';
  cacheSize?: number;
  isNavigationStackEnabled?: boolean;
  onNavigated?: (event: NativeSyntheticEvent<undefined>) => void;
  onNavigating?: (event: NativeSyntheticEvent<undefined>) => void;
  onNavigationFailed?: (event: NativeSyntheticEvent<undefined>) => void;
  onNavigationStopped?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeGridProps extends NativePanelProps {
  type: 'grid'|'swapChainBackgroundPanel'|'swapChainPanel';
  padding?: Thickness;
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  rowSpacing?: number;
  columnSpacing?: number;
  backgroundSizing?: Enums.BackgroundSizing;
}


export interface NativeListViewBaseProps extends NativeSelectorProps {
  type: 'gridView'|'listView'|'navigationViewList'|'treeViewList';
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
  type: 'gridView';
}


export interface NativeListViewBaseHeaderItemProps extends NativeContentControlProps {
  type: 'gridViewHeaderItem'|'listViewHeaderItem';
}


export interface NativeGridViewHeaderItemProps extends NativeListViewBaseHeaderItemProps {
  type: 'gridViewHeaderItem';
}


export interface NativeGridViewItemProps extends NativeSelectorItemProps {
  type: 'gridViewItem';
}


export interface NativeGroupItemProps extends NativeContentControlProps {
  type: 'groupItem';
}


export interface NativeHandwritingViewProps extends NativeControlProps {
  type: 'handwritingView';
  placementAlignment?: Enums.HandwritingPanelPlacementAlignment;
  areCandidatesEnabled?: boolean;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeHubProps extends NativeControlProps {
  type: 'hub';
  orientation?: Enums.Orientation;
  header?: object;
  defaultSectionIndex?: number;
  isZoomedInView?: boolean;
  isActiveView?: boolean;
  onSectionHeaderClick?: (event: NativeSyntheticEvent<undefined>) => void;
  onSectionsInViewChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeHubSectionProps extends NativeControlProps {
  type: 'hubSection';
  isHeaderInteractive?: boolean;
  header?: object;
}


export interface NativeHyperlinkButtonProps extends NativeButtonBaseProps {
  type: 'hyperlinkButton';
}


export interface NativeIconSourceElementProps extends NativeIconElementProps {
  type: 'iconSourceElement';
}


export interface NativeImageProps extends NativeFrameworkElementProps {
  type: 'image';
  stretch?: Enums.Stretch;
  nineGrid?: Thickness;
  onImageFailed?: (event: NativeSyntheticEvent<undefined>) => void;
  onImageOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeInkCanvasProps extends NativeFrameworkElementProps {
  type: 'inkCanvas';
}


export interface NativeInkToolbarProps extends NativeControlProps {
  type: 'inkToolbar';
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
  type: 'radioButton'|'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarCustomToolButton'|'inkToolbarEraserButton'|'inkToolbarHighlighterButton'|'inkToolbarPencilButton';
  groupName?: string;
}


export interface NativeInkToolbarToolButtonProps extends NativeRadioButtonProps {
  type: 'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarCustomToolButton'|'inkToolbarEraserButton'|'inkToolbarHighlighterButton'|'inkToolbarPencilButton';
  isExtensionGlyphShown?: boolean;
}


export interface NativeInkToolbarPenButtonProps extends NativeInkToolbarToolButtonProps {
  type: 'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarHighlighterButton'|'inkToolbarPencilButton';
  selectedStrokeWidth?: number;
  selectedBrushIndex?: number;
  minStrokeWidth?: number;
  maxStrokeWidth?: number;
}


export interface NativeInkToolbarBallpointPenButtonProps extends NativeInkToolbarPenButtonProps {
  type: 'inkToolbarBallpointPenButton';
}


export interface NativeInkToolbarCustomPenButtonProps extends NativeInkToolbarPenButtonProps {
  type: 'inkToolbarCustomPenButton';
}


export interface NativeInkToolbarToggleButtonProps extends NativeCheckBoxProps {
  type: 'inkToolbarCustomToggleButton'|'inkToolbarRulerButton';
}


export interface NativeInkToolbarCustomToggleButtonProps extends NativeInkToolbarToggleButtonProps {
  type: 'inkToolbarCustomToggleButton';
}


export interface NativeInkToolbarCustomToolButtonProps extends NativeInkToolbarToolButtonProps {
  type: 'inkToolbarCustomToolButton';
}


export interface NativeInkToolbarEraserButtonProps extends NativeInkToolbarToolButtonProps {
  type: 'inkToolbarEraserButton';
  isClearAllVisible?: boolean;
}


export interface NativeInkToolbarFlyoutItemProps extends NativeButtonBaseProps {
  type: 'inkToolbarFlyoutItem';
  kind?: Enums.InkToolbarFlyoutItemKind;
  isChecked?: boolean;
  onChecked?: (event: NativeSyntheticEvent<undefined>) => void;
  onUnchecked?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeInkToolbarHighlighterButtonProps extends NativeInkToolbarPenButtonProps {
  type: 'inkToolbarHighlighterButton';
}


export interface NativeInkToolbarMenuButtonProps extends NativeToggleButtonProps {
  type: 'inkToolbarStencilButton';
  isExtensionGlyphShown?: boolean;
}


export interface NativeInkToolbarPenConfigurationControlProps extends NativeControlProps {
  type: 'inkToolbarPenConfigurationControl';
}


export interface NativeInkToolbarPencilButtonProps extends NativeInkToolbarPenButtonProps {
  type: 'inkToolbarPencilButton';
}


export interface NativeInkToolbarRulerButtonProps extends NativeInkToolbarToggleButtonProps {
  type: 'inkToolbarRulerButton';
}


export interface NativeInkToolbarStencilButtonProps extends NativeInkToolbarMenuButtonProps {
  type: 'inkToolbarStencilButton';
  selectedStencil?: Enums.InkToolbarStencilKind;
  isRulerItemVisible?: boolean;
  isProtractorItemVisible?: boolean;
}


export interface NativeItemsPresenterProps extends NativeFrameworkElementProps {
  type: 'itemsPresenter';
  padding?: Thickness;
  header?: object;
  footer?: object;
  onHorizontalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onVerticalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeItemsStackPanelProps extends NativePanelProps {
  type: 'itemsStackPanel';
  orientation?: Enums.Orientation;
  groupPadding?: Thickness;
  groupHeaderPlacement?: Enums.GroupHeaderPlacement;
  cacheLength?: number;
  areStickyGroupHeadersEnabled?: boolean;
}


export interface NativeItemsWrapGridProps extends NativePanelProps {
  type: 'itemsWrapGrid';
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
  type: 'listBox';
  selectionMode?: Enums.SelectionMode;
  singleSelectionFollowsFocus?: boolean;
}


export interface NativeListBoxItemProps extends NativeSelectorItemProps {
  type: 'listBoxItem';
}


export interface NativeListPickerFlyoutProps extends NativePickerFlyoutBaseProps {
  type: 'listPickerFlyout';
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
}


export interface NativeListViewProps extends NativeListViewBaseProps {
  type: 'listView'|'navigationViewList'|'treeViewList';
}


export interface NativeListViewHeaderItemProps extends NativeListViewBaseHeaderItemProps {
  type: 'listViewHeaderItem';
}


export interface NativeListViewItemProps extends NativeSelectorItemProps {
  type: 'listViewItem'|'navigationViewItem'|'navigationViewItemHeader'|'navigationViewItemSeparator'|'treeViewItem';
}


export interface NativeMapControlProps extends NativeControlProps {
  type: 'mapControl';
  zoomLevel?: number;
  watermarkMode?: Enums.MapWatermarkMode;
  trafficFlowVisible?: boolean;
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
  type: 'mediaElement';
  volume?: number;
  stereo3DVideoRenderMode?: Enums.Stereo3DVideoRenderMode;
  stereo3DVideoPackingMode?: Enums.Stereo3DVideoPackingMode;
  realTimePlayback?: boolean;
  playbackRate?: number;
  autoPlay?: boolean;
  isMuted?: boolean;
  audioDeviceType?: Enums.AudioDeviceType;
  audioCategory?: Enums.AudioCategory;
  defaultPlaybackRate?: number;
  isLooping?: boolean;
  balance?: number;
  stretch?: Enums.Stretch;
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
  type: 'mediaPlayerElement';
  stretch?: Enums.Stretch;
  isFullWindow?: boolean;
  autoPlay?: boolean;
  areTransportControlsEnabled?: boolean;
}


export interface NativeMediaPlayerPresenterProps extends NativeFrameworkElementProps {
  type: 'mediaPlayerPresenter';
  stretch?: Enums.Stretch;
  isFullWindow?: boolean;
}


export interface NativeMediaTransportControlsProps extends NativeControlProps {
  type: 'mediaTransportControls';
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
  type: 'menuBar';
}


export interface NativeMenuBarItemProps extends NativeControlProps {
  type: 'menuBarItem';
  title?: string;
}


export interface NativeMenuFlyoutProps extends NativeFlyoutBaseProps {
  type: 'menuFlyout'|'menuBarItemFlyout';
}


export interface NativeMenuBarItemFlyoutProps extends NativeMenuFlyoutProps {
  type: 'menuBarItemFlyout';
}


export interface NativeMenuFlyoutItemBaseProps extends NativeControlProps {
  type: 'menuFlyoutItem'|'menuFlyoutSeparator'|'menuFlyoutSubItem'|'toggleMenuFlyoutItem';
}


export interface NativeMenuFlyoutItemProps extends NativeMenuFlyoutItemBaseProps {
  type: 'menuFlyoutItem'|'toggleMenuFlyoutItem';
  text?: string;
  commandParameter?: object;
  keyboardAcceleratorTextOverride?: string;
  onClick?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeMenuFlyoutPresenterProps extends NativeItemsControlProps {
  type: 'menuFlyoutPresenter';
  isDefaultShadowEnabled?: boolean;
}


export interface NativeMenuFlyoutSeparatorProps extends NativeMenuFlyoutItemBaseProps {
  type: 'menuFlyoutSeparator';
}


export interface NativeMenuFlyoutSubItemProps extends NativeMenuFlyoutItemBaseProps {
  type: 'menuFlyoutSubItem';
  text?: string;
}


export interface NativeNavigationViewProps extends NativeContentControlProps {
  type: 'navigationView';
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
  type: 'navigationViewItem'|'navigationViewItemHeader'|'navigationViewItemSeparator';
}


export interface NativeNavigationViewItemProps extends NativeNavigationViewItemBaseProps {
  type: 'navigationViewItem';
  selectsOnInvoked?: boolean;
}


export interface NativeNavigationViewItemHeaderProps extends NativeNavigationViewItemBaseProps {
  type: 'navigationViewItemHeader';
}


export interface NativeNavigationViewItemSeparatorProps extends NativeNavigationViewItemBaseProps {
  type: 'navigationViewItemSeparator';
}


export interface NativeNavigationViewListProps extends NativeListViewProps {
  type: 'navigationViewList';
}


export interface NativeUserControlProps extends NativeControlProps {
  type: 'userControl'|'page';
}


export interface NativePageProps extends NativeUserControlProps {
  type: 'page';
}


export interface NativeParallaxViewProps extends NativeFrameworkElementProps {
  type: 'parallaxView';
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
  type: 'passwordBox';
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
  type: 'pathIcon';
}


export interface NativePersonPictureProps extends NativeControlProps {
  type: 'personPicture';
  preferSmallImage?: boolean;
  isGroup?: boolean;
  initials?: string;
  displayName?: string;
  badgeText?: string;
  badgeNumber?: number;
  badgeGlyph?: string;
}


export interface NativePickerFlyoutProps extends NativePickerFlyoutBaseProps {
  type: 'pickerFlyout';
  confirmationButtonsVisible?: boolean;
  onConfirmed?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativePickerFlyoutPresenterProps extends NativeContentControlProps {
}


export interface NativePivotProps extends NativeItemsControlProps {
  type: 'pivot';
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
  type: 'pivotItem';
  header?: object;
}


export interface NativeCalendarPanelProps extends NativePanelProps {
  type: 'calendarPanel';
}


export interface NativeVirtualizingPanelProps extends NativePanelProps {
  type: 'carouselPanel'|'virtualizingStackPanel'|'wrapGrid';
}


export interface NativeCarouselPanelProps extends NativeVirtualizingPanelProps {
  type: 'carouselPanel';
  onHorizontalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onVerticalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeRangeBaseProps extends NativeControlProps {
  type: 'slider'|'colorPickerSlider'|'scrollBar'|'progressBar';
  value?: number;
  smallChange?: number;
  minimum?: number;
  maximum?: number;
  largeChange?: number;
  onValueChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeSliderProps extends NativeRangeBaseProps {
  type: 'slider'|'colorPickerSlider';
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
  type: 'colorPickerSlider';
  colorChannel?: Enums.ColorPickerHsvChannel;
}


export interface NativeColorSpectrumProps extends NativeControlProps {
  type: 'colorSpectrum';
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
  type: 'commandBarFlyoutCommandBar';
}


export interface NativeGridViewItemPresenterProps extends NativeContentPresenterProps {
  type: 'gridViewItemPresenter';
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
  type: 'listViewItemPresenter';
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
  shouldLoop?: boolean;
  selectedItem?: object;
  selectedIndex?: number;
  itemWidth?: number;
  itemHeight?: number;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeLoopingSelectorItemProps extends NativeContentControlProps {
}


export interface NativeLoopingSelectorPanelProps extends NativeCanvasProps {
  onHorizontalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onVerticalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeNavigationViewItemPresenterProps extends NativeContentControlProps {
  type: 'navigationViewItemPresenter';
}


export interface NativeOrientedVirtualizingPanelProps extends NativeVirtualizingPanelProps {
  type: 'virtualizingStackPanel'|'wrapGrid';
  onHorizontalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onVerticalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativePivotHeaderItemProps extends NativeContentControlProps {
  type: 'pivotHeaderItem';
}


export interface NativePivotHeaderPanelProps extends NativeCanvasProps {
  type: 'pivotHeaderPanel';
}


export interface NativePivotPanelProps extends NativePanelProps {
  type: 'pivotPanel';
  onHorizontalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onVerticalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativePopupProps extends NativeFrameworkElementProps {
  type: 'popup';
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
  type: 'repeatButton';
  interval?: number;
  delay?: number;
}


export interface NativeScrollBarProps extends NativeRangeBaseProps {
  type: 'scrollBar';
  viewportSize?: number;
  orientation?: Enums.Orientation;
  indicatorMode?: Enums.ScrollingIndicatorMode;
  onScroll?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeThumbProps extends NativeControlProps {
  type: 'thumb';
  onDragCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onDragDelta?: (event: NativeSyntheticEvent<undefined>) => void;
  onDragStarted?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeTickBarProps extends NativeFrameworkElementProps {
  type: 'tickBar';
  fill?: ColorValue;
}


export interface NativeProgressBarProps extends NativeRangeBaseProps {
  type: 'progressBar';
  showPaused?: boolean;
  showError?: boolean;
  isIndeterminate?: boolean;
}


export interface NativeProgressRingProps extends NativeControlProps {
  type: 'progressRing';
  isActive?: boolean;
}


export interface NativeRatingControlProps extends NativeControlProps {
  type: 'ratingControl';
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
  type: 'refreshContainer';
  pullDirection?: Enums.RefreshPullDirection;
  onRefreshRequested?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeRefreshVisualizerProps extends NativeControlProps {
  type: 'refreshVisualizer';
  orientation?: Enums.RefreshVisualizerOrientation;
  onRefreshRequested?: (event: NativeSyntheticEvent<undefined>) => void;
  onRefreshStateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeRelativePanelProps extends NativePanelProps {
  type: 'relativePanel';
  padding?: Thickness;
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  backgroundSizing?: Enums.BackgroundSizing;
}


export interface NativeRichEditBoxProps extends NativeControlProps {
  type: 'richEditBox';
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
  type: 'richTextBlock';
  textWrapping?: Enums.TextWrapping;
  textTrimming?: Enums.TextTrimming;
  textIndent?: number;
  textAlignment?: Enums.TextAlignment;
  padding?: Thickness;
  foreground?: ColorValue;
  fontStyle?: Enums.FontStyle;
  fontStretch?: Enums.FontStretch;
  fontSize?: number;
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
  onContextMenuOpening?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onIsTextTrimmedChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeRichTextBlockOverflowProps extends NativeFrameworkElementProps {
  type: 'richTextBlockOverflow';
  padding?: Thickness;
  maxLines?: number;
  onIsTextTrimmedChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeScrollContentPresenterProps extends NativeContentPresenterProps {
  type: 'scrollContentPresenter';
  sizesContentToTemplatedParent?: boolean;
  canContentRenderOutsideBounds?: boolean;
}


export interface NativeScrollViewerProps extends NativeContentControlProps {
  type: 'scrollViewer';
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
  type: 'searchBox';
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
  type: 'semanticZoom';
  isZoomedInViewActive?: boolean;
  isZoomOutButtonEnabled?: boolean;
  canChangeViews?: boolean;
  onViewChangeCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onViewChangeStarted?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeSettingsFlyoutProps extends NativeContentControlProps {
  type: 'settingsFlyout';
  title?: string;
  headerForeground?: ColorValue;
  headerBackground?: ColorValue;
  onBackClick?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeSplitButtonProps extends NativeContentControlProps {
  type: 'splitButton'|'toggleSplitButton';
  commandParameter?: object;
  onClick?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeSplitViewProps extends NativeControlProps {
  type: 'splitView';
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
  type: 'stackPanel';
  orientation?: Enums.Orientation;
  areScrollSnapPointsRegular?: boolean;
  padding?: Thickness;
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  spacing?: number;
  backgroundSizing?: Enums.BackgroundSizing;
  onHorizontalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onVerticalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeSwapChainBackgroundPanelProps extends NativeGridProps {
  type: 'swapChainBackgroundPanel';
}


export interface NativeSwapChainPanelProps extends NativeGridProps {
  type: 'swapChainPanel';
  onCompositionScaleChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeSwipeControlProps extends NativeContentControlProps {
  type: 'swipeControl';
}


export interface NativeSymbolIconProps extends NativeIconElementProps {
  type: 'symbolIcon';
  symbol?: Enums.Symbol;
}


export interface NativeTextBlockProps extends NativeFrameworkElementProps {
  type: 'textBlock';
  textWrapping?: Enums.TextWrapping;
  textTrimming?: Enums.TextTrimming;
  textAlignment?: Enums.TextAlignment;
  text?: string;
  padding?: Thickness;
  foreground?: ColorValue;
  fontStyle?: Enums.FontStyle;
  fontStretch?: Enums.FontStretch;
  fontSize?: number;
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
  onContextMenuOpening?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onIsTextTrimmedChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeTextBoxProps extends NativeControlProps {
  type: 'textBox';
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
  type: 'textCommandBarFlyout';
}


export interface NativeTimePickerProps extends NativeControlProps {
  type: 'timePicker';
  minuteIncrement?: number;
  header?: object;
  clockIdentifier?: string;
  lightDismissOverlayMode?: Enums.LightDismissOverlayMode;
  onTimeChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectedTimeChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeTimePickerFlyoutProps extends NativePickerFlyoutBaseProps {
  type: 'timePickerFlyout';
  minuteIncrement?: number;
  clockIdentifier?: string;
  onTimePicked?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeTimePickerFlyoutPresenterProps extends NativeControlProps {
  isDefaultShadowEnabled?: boolean;
}


export interface NativeToggleMenuFlyoutItemProps extends NativeMenuFlyoutItemProps {
  type: 'toggleMenuFlyoutItem';
  isChecked?: boolean;
}


export interface NativeToggleSplitButtonProps extends NativeSplitButtonProps {
  type: 'toggleSplitButton';
  onIsCheckedChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeToggleSwitchProps extends NativeControlProps {
  type: 'toggleSwitch';
  onContent?: object;
  offContent?: object;
  isOn?: boolean;
  header?: object;
  onToggled?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeToolTipProps extends NativeContentControlProps {
  type: 'toolTip';
  verticalOffset?: number;
  placement?: Enums.PlacementMode;
  isOpen?: boolean;
  horizontalOffset?: number;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeTreeViewProps extends NativeControlProps {
  type: 'treeView';
  selectionMode?: Enums.TreeViewSelectionMode;
  itemsSource?: object;
  canReorderItems?: boolean;
  canDragItems?: boolean;
  onCollapsed?: (event: NativeSyntheticEvent<undefined>) => void;
  onExpanding?: (event: NativeSyntheticEvent<undefined>) => void;
  onItemInvoked?: (event: NativeSyntheticEvent<undefined>) => void;
  onDragItemsCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onDragItemsStarting?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeTreeViewItemProps extends NativeListViewItemProps {
  type: 'treeViewItem';
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
  type: 'treeViewList';
}


export interface NativeTwoPaneViewProps extends NativeControlProps {
  type: 'twoPaneView';
  wideModeConfiguration?: Enums.TwoPaneViewWideModeConfiguration;
  tallModeConfiguration?: Enums.TwoPaneViewTallModeConfiguration;
  panePriority?: Enums.TwoPaneViewPriority;
  minWideModeWidth?: number;
  minTallModeHeight?: number;
  onModeChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeVariableSizedWrapGridProps extends NativePanelProps {
  type: 'variableSizedWrapGrid';
  verticalChildrenAlignment?: Enums.VerticalAlignment;
  orientation?: Enums.Orientation;
  maximumRowsOrColumns?: number;
  itemWidth?: number;
  itemHeight?: number;
  horizontalChildrenAlignment?: Enums.HorizontalAlignment;
}


export interface NativeViewboxProps extends NativeFrameworkElementProps {
  type: 'viewbox';
  stretchDirection?: Enums.StretchDirection;
  stretch?: Enums.Stretch;
}


export interface NativeVirtualizingStackPanelProps extends NativeOrientedVirtualizingPanelProps {
  type: 'virtualizingStackPanel';
  orientation?: Enums.Orientation;
  areScrollSnapPointsRegular?: boolean;
  onCleanUpVirtualizedItemEvent?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeWebViewProps extends NativeFrameworkElementProps {
  type: 'webView';
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
  type: 'wrapGrid';
  verticalChildrenAlignment?: Enums.VerticalAlignment;
  orientation?: Enums.Orientation;
  maximumRowsOrColumns?: number;
  itemWidth?: number;
  itemHeight?: number;
  horizontalChildrenAlignment?: Enums.HorizontalAlignment;
}


export interface NativeGlyphsProps extends NativeFrameworkElementProps {
  type: 'glyphs';
  unicodeString?: string;
  styleSimulations?: Enums.StyleSimulations;
  originY?: number;
  originX?: number;
  indices?: string;
  fontRenderingEmSize?: number;
  fill?: ColorValue;
  isColorFontEnabled?: boolean;
  colorFontPaletteIndex?: number;
}


export interface NativeShapeProps extends NativeFrameworkElementProps {
  type: 'ellipse'|'line'|'path'|'polygon'|'polyline'|'rectangle';
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
  type: 'ellipse';
}


export interface NativeLineProps extends NativeShapeProps {
  type: 'line';
  y2?: number;
  y1?: number;
  x2?: number;
  x1?: number;
}


export interface NativePathProps extends NativeShapeProps {
  type: 'path';
}


export interface NativePolygonProps extends NativeShapeProps {
  type: 'polygon';
  fillRule?: Enums.FillRule;
}


export interface NativePolylineProps extends NativeShapeProps {
  type: 'polyline';
  fillRule?: Enums.FillRule;
}


export interface NativeRectangleProps extends NativeShapeProps {
  type: 'rectangle';
  radiusY?: number;
  radiusX?: number;
}


export type XamlControlProps = NativeDependencyObjectProps 
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
	 |  NativeGlyphsProps 
	 |  NativeShapeProps 
	 |  NativeEllipseProps 
	 |  NativeLineProps 
	 |  NativePathProps 
	 |  NativePolygonProps 
	 |  NativePolylineProps 
	 |  NativeRectangleProps 
	;


