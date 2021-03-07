import type { ViewProps, NativeSyntheticEvent, ColorValue } from 'react-native';
export type Thickness = number | { left: number, top: number, right: number, bottom: number };


export interface NativeDependencyObjectProps extends ViewProps {
  type: 'contentControl'|'appBar'|'button'|'appBarButton'|'appBarElementContainer'|'appBarSeparator'|'toggleButton'|'appBarToggleButton'|'itemsControl'|'autoSuggestBox'|'bitmapIcon'|'border'|'calendarDatePicker'|'calendarView'|'calendarViewDayItem'|'canvas'|'captureElement'|'checkBox'|'colorPicker'|'comboBox'|'comboBoxItem'|'commandBar'|'commandBarFlyout'|'commandBarOverflowPresenter'|'contentDialog'|'contentPresenter'|'datePicker'|'datePickerFlyout'|'dropDownButton'|'flipView'|'flipViewItem'|'flyout'|'flyoutPresenter'|'fontIcon'|'frame'|'grid'|'gridView'|'gridViewHeaderItem'|'gridViewItem'|'groupItem'|'handwritingView'|'hub'|'hubSection'|'hyperlinkButton'|'iconSourceElement'|'image'|'inkCanvas'|'inkToolbar'|'radioButton'|'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarCustomToggleButton'|'inkToolbarCustomToolButton'|'inkToolbarEraserButton'|'inkToolbarFlyoutItem'|'inkToolbarHighlighterButton'|'inkToolbarPenConfigurationControl'|'inkToolbarPencilButton'|'inkToolbarRulerButton'|'inkToolbarStencilButton'|'itemsPresenter'|'itemsStackPanel'|'itemsWrapGrid'|'listBox'|'listBoxItem'|'listPickerFlyout'|'listView'|'listViewHeaderItem'|'listViewItem'|'mapControl'|'mediaElement'|'mediaPlayerElement'|'mediaPlayerPresenter'|'mediaTransportControls'|'menuBar'|'menuBarItem'|'menuFlyout'|'menuBarItemFlyout'|'menuFlyoutItem'|'menuFlyoutPresenter'|'menuFlyoutSeparator'|'menuFlyoutSubItem'|'navigationView'|'navigationViewItem'|'navigationViewItemHeader'|'navigationViewItemSeparator'|'navigationViewList'|'userControl'|'page'|'parallaxView'|'passwordBox'|'pathIcon'|'personPicture'|'pickerFlyout'|'pivot'|'pivotItem'|'calendarPanel'|'carouselPanel'|'slider'|'colorPickerSlider'|'colorSpectrum'|'commandBarFlyoutCommandBar'|'gridViewItemPresenter'|'listViewItemPresenter'|'navigationViewItemPresenter'|'pivotHeaderItem'|'pivotHeaderPanel'|'pivotPanel'|'popup'|'repeatButton'|'scrollBar'|'thumb'|'tickBar'|'progressBar'|'progressRing'|'ratingControl'|'refreshContainer'|'refreshVisualizer'|'relativePanel'|'richEditBox'|'richTextBlock'|'richTextBlockOverflow'|'scrollContentPresenter'|'scrollViewer'|'searchBox'|'semanticZoom'|'settingsFlyout'|'splitButton'|'splitView'|'stackPanel'|'swapChainBackgroundPanel'|'swapChainPanel'|'swipeControl'|'symbolIcon'|'textBlock'|'textBox'|'textCommandBarFlyout'|'timePicker'|'timePickerFlyout'|'toggleMenuFlyoutItem'|'toggleSplitButton'|'toggleSwitch'|'toolTip'|'treeView'|'treeViewItem'|'treeViewList'|'twoPaneView'|'variableSizedWrapGrid'|'viewbox'|'virtualizingStackPanel'|'webView'|'wrapGrid'|'glyphs'|'ellipse'|'line'|'path'|'polygon'|'polyline'|'rectangle';
}


export interface NativeUIElementProps extends NativeDependencyObjectProps {
  type: 'contentControl'|'appBar'|'button'|'appBarButton'|'appBarElementContainer'|'appBarSeparator'|'toggleButton'|'appBarToggleButton'|'itemsControl'|'autoSuggestBox'|'bitmapIcon'|'border'|'calendarDatePicker'|'calendarView'|'calendarViewDayItem'|'canvas'|'captureElement'|'checkBox'|'colorPicker'|'comboBox'|'comboBoxItem'|'commandBar'|'commandBarOverflowPresenter'|'contentDialog'|'contentPresenter'|'datePicker'|'dropDownButton'|'flipView'|'flipViewItem'|'flyoutPresenter'|'fontIcon'|'frame'|'grid'|'gridView'|'gridViewHeaderItem'|'gridViewItem'|'groupItem'|'handwritingView'|'hub'|'hubSection'|'hyperlinkButton'|'iconSourceElement'|'image'|'inkCanvas'|'inkToolbar'|'radioButton'|'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarCustomToggleButton'|'inkToolbarCustomToolButton'|'inkToolbarEraserButton'|'inkToolbarFlyoutItem'|'inkToolbarHighlighterButton'|'inkToolbarPenConfigurationControl'|'inkToolbarPencilButton'|'inkToolbarRulerButton'|'inkToolbarStencilButton'|'itemsPresenter'|'itemsStackPanel'|'itemsWrapGrid'|'listBox'|'listBoxItem'|'listView'|'listViewHeaderItem'|'listViewItem'|'mapControl'|'mediaElement'|'mediaPlayerElement'|'mediaPlayerPresenter'|'mediaTransportControls'|'menuBar'|'menuBarItem'|'menuFlyoutItem'|'menuFlyoutPresenter'|'menuFlyoutSeparator'|'menuFlyoutSubItem'|'navigationView'|'navigationViewItem'|'navigationViewItemHeader'|'navigationViewItemSeparator'|'navigationViewList'|'userControl'|'page'|'parallaxView'|'passwordBox'|'pathIcon'|'personPicture'|'pivot'|'pivotItem'|'calendarPanel'|'carouselPanel'|'slider'|'colorPickerSlider'|'colorSpectrum'|'commandBarFlyoutCommandBar'|'gridViewItemPresenter'|'listViewItemPresenter'|'navigationViewItemPresenter'|'pivotHeaderItem'|'pivotHeaderPanel'|'pivotPanel'|'popup'|'repeatButton'|'scrollBar'|'thumb'|'tickBar'|'progressBar'|'progressRing'|'ratingControl'|'refreshContainer'|'refreshVisualizer'|'relativePanel'|'richEditBox'|'richTextBlock'|'richTextBlockOverflow'|'scrollContentPresenter'|'scrollViewer'|'searchBox'|'semanticZoom'|'settingsFlyout'|'splitButton'|'splitView'|'stackPanel'|'swapChainBackgroundPanel'|'swapChainPanel'|'swipeControl'|'symbolIcon'|'textBlock'|'textBox'|'timePicker'|'toggleMenuFlyoutItem'|'toggleSplitButton'|'toggleSwitch'|'toolTip'|'treeView'|'treeViewItem'|'treeViewList'|'twoPaneView'|'variableSizedWrapGrid'|'viewbox'|'virtualizingStackPanel'|'webView'|'wrapGrid'|'glyphs'|'ellipse'|'line'|'path'|'polygon'|'polyline'|'rectangle';
  opacity?: number;
  manipulationMode?: ManipulationModes;
  isTapEnabled?: boolean;
  isRightTapEnabled?: boolean;
  isHoldingEnabled?: boolean;
  isHitTestVisible?: boolean;
  isDoubleTapEnabled?: boolean;
  allowDrop?: boolean;
  useLayoutRounding?: boolean;
  visibility?: Visibility;
  compositeMode?: ElementCompositeMode;
  canDrag?: boolean;
  isAccessKeyScope?: boolean;
  exitDisplayModeOnAccessKeyInvoked?: boolean;
  accessKey?: string;
  keyTipHorizontalOffset?: number;
  highContrastAdjustment?: ElementHighContrastAdjustment;
  xyFocusRightNavigationStrategy?: XYFocusNavigationStrategy;
  xyFocusKeyboardNavigation?: XYFocusKeyboardNavigationMode;
  xyFocusDownNavigationStrategy?: XYFocusNavigationStrategy;
  tabFocusNavigation?: KeyboardNavigationMode;
  keyTipVerticalOffset?: number;
  xyFocusUpNavigationStrategy?: XYFocusNavigationStrategy;
  keyTipPlacementMode?: KeyTipPlacementMode;
  xyFocusLeftNavigationStrategy?: XYFocusNavigationStrategy;
  keyboardAcceleratorPlacementMode?: KeyboardAcceleratorPlacementMode;
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
  verticalAlignment?: VerticalAlignment;
  tag?: object;
  name?: string;
  minWidth?: number;
  minHeight?: number;
  maxWidth?: number;
  maxHeight?: number;
  margin?: Thickness;
  language?: string;
  horizontalAlignment?: HorizontalAlignment;
  height?: number;
  flowDirection?: FlowDirection;
  dataContext?: object;
  requestedTheme?: ElementTheme;
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
  horizontalContentAlignment?: HorizontalAlignment;
  foreground?: ColorValue;
  fontStyle?: FontStyle;
  fontStretch?: FontStretch;
  fontSize?: number;
  tabIndex?: number;
  characterSpacing?: number;
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  tabNavigation?: KeyboardNavigationMode;
  background?: ColorValue;
  verticalContentAlignment?: VerticalAlignment;
  isTextScaleFactorEnabled?: boolean;
  useSystemFocusVisuals?: boolean;
  requiresPointer?: RequiresPointer;
  isFocusEngagementEnabled?: boolean;
  isFocusEngaged?: boolean;
  elementSoundMode?: ElementSoundMode;
  backgroundSizing?: BackgroundSizing;
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
  closedDisplayMode?: AppBarClosedDisplayMode;
  lightDismissOverlayMode?: LightDismissOverlayMode;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosing?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpening?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeButtonBaseProps extends NativeContentControlProps {
  type: 'button'|'appBarButton'|'toggleButton'|'appBarToggleButton'|'checkBox'|'dropDownButton'|'hyperlinkButton'|'radioButton'|'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarCustomToggleButton'|'inkToolbarCustomToolButton'|'inkToolbarEraserButton'|'inkToolbarFlyoutItem'|'inkToolbarHighlighterButton'|'inkToolbarPencilButton'|'inkToolbarRulerButton'|'inkToolbarStencilButton'|'repeatButton';
  commandParameter?: object;
  clickMode?: ClickMode;
  onClick?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeButtonProps extends NativeButtonBaseProps {
  type: 'button'|'appBarButton'|'dropDownButton';
}


export interface NativeAppBarButtonProps extends NativeButtonProps {
  type: 'appBarButton';
  label?: string;
  labelPosition?: CommandBarLabelPosition;
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
  labelPosition?: CommandBarLabelPosition;
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
  lightDismissOverlayMode?: LightDismissOverlayMode;
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
  backgroundSizing?: BackgroundSizing;
}


export interface NativeCalendarDatePickerProps extends NativeControlProps {
  type: 'calendarDatePicker';
  placeholderText?: string;
  isTodayHighlighted?: boolean;
  isOutOfScopeEnabled?: boolean;
  isGroupLabelVisible?: boolean;
  isCalendarOpen?: boolean;
  header?: object;
  firstDayOfWeek?: DayOfWeek;
  displayMode?: CalendarViewDisplayMode;
  dayOfWeekFormat?: string;
  dateFormat?: string;
  calendarIdentifier?: string;
  lightDismissOverlayMode?: LightDismissOverlayMode;
  description?: object;
  onCalendarViewDayItemChanging?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onDateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeCalendarViewProps extends NativeControlProps {
  type: 'calendarView';
  horizontalFirstOfMonthLabelAlignment?: HorizontalAlignment;
  horizontalDayItemAlignment?: HorizontalAlignment;
  focusBorderBrush?: ColorValue;
  firstOfYearDecadeLabelFontStyle?: FontStyle;
  firstOfMonthLabelFontStyle?: FontStyle;
  firstOfMonthLabelFontSize?: number;
  firstDayOfWeek?: DayOfWeek;
  blackoutForeground?: ColorValue;
  dayOfWeekFormat?: string;
  dayItemFontStyle?: FontStyle;
  dayItemFontSize?: number;
  selectedPressedBorderBrush?: ColorValue;
  calendarItemForeground?: ColorValue;
  calendarItemBorderThickness?: Thickness;
  calendarItemBorderBrush?: ColorValue;
  calendarItemBackground?: ColorValue;
  calendarIdentifier?: string;
  displayMode?: CalendarViewDisplayMode;
  hoverBorderBrush?: ColorValue;
  pressedBorderBrush?: ColorValue;
  verticalDayItemAlignment?: VerticalAlignment;
  todayForeground?: ColorValue;
  selectionMode?: CalendarViewSelectionMode;
  selectedHoverBorderBrush?: ColorValue;
  selectedForeground?: ColorValue;
  selectedBorderBrush?: ColorValue;
  pressedForeground?: ColorValue;
  verticalFirstOfMonthLabelAlignment?: VerticalAlignment;
  outOfScopeForeground?: ColorValue;
  outOfScopeBackground?: ColorValue;
  numberOfWeeksInView?: number;
  monthYearItemFontStyle?: FontStyle;
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
  stretch?: Stretch;
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
  colorSpectrumShape?: ColorSpectrumShape;
  colorSpectrumComponents?: ColorSpectrumComponents;
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
  lightDismissOverlayMode?: LightDismissOverlayMode;
  isTextSearchEnabled?: boolean;
  selectionChangedTrigger?: ComboBoxSelectionChangedTrigger;
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
  overflowButtonVisibility?: CommandBarOverflowButtonVisibility;
  isDynamicOverflowEnabled?: boolean;
  defaultLabelPosition?: CommandBarDefaultLabelPosition;
  onDynamicOverflowItemsChanging?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeFlyoutBaseProps extends NativeDependencyObjectProps {
  type: 'commandBarFlyout'|'datePickerFlyout'|'flyout'|'listPickerFlyout'|'menuFlyout'|'menuBarItemFlyout'|'pickerFlyout'|'textCommandBarFlyout'|'timePickerFlyout';
  placement?: FlyoutPlacementMode;
  lightDismissOverlayMode?: LightDismissOverlayMode;
  elementSoundMode?: ElementSoundMode;
  allowFocusWhenDisabled?: boolean;
  allowFocusOnInteraction?: boolean;
  showMode?: FlyoutShowMode;
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
  defaultButton?: ContentDialogButton;
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
  fontStyle?: FontStyle;
  fontStretch?: FontStretch;
  fontSize?: number;
  content?: object;
  characterSpacing?: number;
  textLineBounds?: TextLineBounds;
  opticalMarginAlignment?: OpticalMarginAlignment;
  isTextScaleFactorEnabled?: boolean;
  verticalContentAlignment?: VerticalAlignment;
  textWrapping?: TextWrapping;
  padding?: Thickness;
  maxLines?: number;
  lineStackingStrategy?: LineStackingStrategy;
  lineHeight?: number;
  horizontalContentAlignment?: HorizontalAlignment;
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  background?: ColorValue;
  backgroundSizing?: BackgroundSizing;
}


export interface NativeDatePickerProps extends NativeControlProps {
  type: 'datePicker';
  yearVisible?: boolean;
  yearFormat?: string;
  orientation?: Orientation;
  monthVisible?: boolean;
  monthFormat?: string;
  header?: object;
  dayVisible?: boolean;
  dayFormat?: string;
  calendarIdentifier?: string;
  lightDismissOverlayMode?: LightDismissOverlayMode;
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
  fontStyle?: FontStyle;
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
  backgroundSizing?: BackgroundSizing;
}


export interface NativeListViewBaseProps extends NativeSelectorProps {
  type: 'gridView'|'listView'|'navigationViewList'|'treeViewList';
  selectionMode?: ListViewSelectionMode;
  isSwipeEnabled?: boolean;
  isItemClickEnabled?: boolean;
  incrementalLoadingTrigger?: IncrementalLoadingTrigger;
  incrementalLoadingThreshold?: number;
  header?: object;
  dataFetchSize?: number;
  canReorderItems?: boolean;
  canDragItems?: boolean;
  showsScrollingPlaceholders?: boolean;
  footer?: object;
  reorderMode?: ListViewReorderMode;
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
  placementAlignment?: HandwritingPanelPlacementAlignment;
  areCandidatesEnabled?: boolean;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeHubProps extends NativeControlProps {
  type: 'hub';
  orientation?: Orientation;
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
  stretch?: Stretch;
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
  initialControls?: InkToolbarInitialControls;
  orientation?: Orientation;
  isStencilButtonChecked?: boolean;
  buttonFlyoutPlacement?: InkToolbarButtonFlyoutPlacement;
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
  kind?: InkToolbarFlyoutItemKind;
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
  selectedStencil?: InkToolbarStencilKind;
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
  orientation?: Orientation;
  groupPadding?: Thickness;
  groupHeaderPlacement?: GroupHeaderPlacement;
  cacheLength?: number;
  areStickyGroupHeadersEnabled?: boolean;
}


export interface NativeItemsWrapGridProps extends NativePanelProps {
  type: 'itemsWrapGrid';
  orientation?: Orientation;
  maximumRowsOrColumns?: number;
  itemWidth?: number;
  itemHeight?: number;
  groupPadding?: Thickness;
  groupHeaderPlacement?: GroupHeaderPlacement;
  cacheLength?: number;
  areStickyGroupHeadersEnabled?: boolean;
}


export interface NativeListBoxProps extends NativeSelectorProps {
  type: 'listBox';
  selectionMode?: SelectionMode;
  singleSelectionFollowsFocus?: boolean;
}


export interface NativeListBoxItemProps extends NativeSelectorItemProps {
  type: 'listBoxItem';
}


export interface NativeListPickerFlyoutProps extends NativePickerFlyoutBaseProps {
  type: 'listPickerFlyout';
  selectionMode?: ListPickerFlyoutSelectionMode;
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
  watermarkMode?: MapWatermarkMode;
  trafficFlowVisible?: boolean;
  pedestrianFeaturesVisible?: boolean;
  mapServiceToken?: string;
  heading?: number;
  desiredPitch?: number;
  colorScheme?: MapColorScheme;
  landmarksVisible?: boolean;
  rotateInteractionMode?: MapInteractionMode;
  zoomInteractionMode?: MapInteractionMode;
  transitFeaturesVisible?: boolean;
  tiltInteractionMode?: MapInteractionMode;
  businessLandmarksVisible?: boolean;
  panInteractionMode?: MapPanInteractionMode;
  transitFeaturesEnabled?: boolean;
  businessLandmarksEnabled?: boolean;
  viewPadding?: Thickness;
  mapProjection?: MapProjection;
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
  stereo3DVideoRenderMode?: Stereo3DVideoRenderMode;
  stereo3DVideoPackingMode?: Stereo3DVideoPackingMode;
  realTimePlayback?: boolean;
  playbackRate?: number;
  autoPlay?: boolean;
  isMuted?: boolean;
  audioDeviceType?: AudioDeviceType;
  audioCategory?: AudioCategory;
  defaultPlaybackRate?: number;
  isLooping?: boolean;
  balance?: number;
  stretch?: Stretch;
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
  stretch?: Stretch;
  isFullWindow?: boolean;
  autoPlay?: boolean;
  areTransportControlsEnabled?: boolean;
}


export interface NativeMediaPlayerPresenterProps extends NativeFrameworkElementProps {
  type: 'mediaPlayerPresenter';
  stretch?: Stretch;
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
  fastPlayFallbackBehaviour?: FastPlayFallbackBehaviour;
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
  isBackButtonVisible?: NavigationViewBackButtonVisible;
  shoulderNavigationEnabled?: NavigationViewShoulderNavigationEnabled;
  selectionFollowsFocus?: NavigationViewSelectionFollowsFocus;
  paneDisplayMode?: NavigationViewPaneDisplayMode;
  overflowLabelMode?: NavigationViewOverflowLabelMode;
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
  verticalSourceOffsetKind?: ParallaxSourceOffsetKind;
  verticalSourceEndOffset?: number;
  verticalShift?: number;
  maxVerticalShiftRatio?: number;
  maxHorizontalShiftRatio?: number;
  isVerticalShiftClamped?: boolean;
  isHorizontalShiftClamped?: boolean;
  horizontalSourceStartOffset?: number;
  horizontalSourceOffsetKind?: ParallaxSourceOffsetKind;
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
  textReadingOrder?: TextReadingOrder;
  passwordRevealMode?: PasswordRevealMode;
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
  headerFocusVisualPlacement?: PivotHeaderFocusVisualPlacement;
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
  tickPlacement?: TickPlacement;
  tickFrequency?: number;
  stepFrequency?: number;
  snapsTo?: SliderSnapsTo;
  orientation?: Orientation;
  isThumbToolTipEnabled?: boolean;
  isDirectionReversed?: boolean;
  intermediateValue?: number;
  header?: object;
}


export interface NativeColorPickerSliderProps extends NativeSliderProps {
  type: 'colorPickerSlider';
  colorChannel?: ColorPickerHsvChannel;
}


export interface NativeColorSpectrumProps extends NativeControlProps {
  type: 'colorSpectrum';
  shape?: ColorSpectrumShape;
  minValue?: number;
  minSaturation?: number;
  minHue?: number;
  maxValue?: number;
  maxSaturation?: number;
  maxHue?: number;
  components?: ColorSpectrumComponents;
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
  gridViewItemPresenterVerticalContentAlignment?: VerticalAlignment;
  gridViewItemPresenterPadding?: Thickness;
  gridViewItemPresenterHorizontalContentAlignment?: HorizontalAlignment;
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
  listViewItemPresenterVerticalContentAlignment?: VerticalAlignment;
  listViewItemPresenterPadding?: Thickness;
  listViewItemPresenterHorizontalContentAlignment?: HorizontalAlignment;
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
  checkMode?: ListViewItemPresenterCheckMode;
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
  lightDismissOverlayMode?: LightDismissOverlayMode;
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
  orientation?: Orientation;
  indicatorMode?: ScrollingIndicatorMode;
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
  pullDirection?: RefreshPullDirection;
  onRefreshRequested?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeRefreshVisualizerProps extends NativeControlProps {
  type: 'refreshVisualizer';
  orientation?: RefreshVisualizerOrientation;
  onRefreshRequested?: (event: NativeSyntheticEvent<undefined>) => void;
  onRefreshStateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeRelativePanelProps extends NativePanelProps {
  type: 'relativePanel';
  padding?: Thickness;
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  backgroundSizing?: BackgroundSizing;
}


export interface NativeRichEditBoxProps extends NativeControlProps {
  type: 'richEditBox';
  textWrapping?: TextWrapping;
  textAlignment?: TextAlignment;
  isTextPredictionEnabled?: boolean;
  isSpellCheckEnabled?: boolean;
  isReadOnly?: boolean;
  acceptsReturn?: boolean;
  selectionHighlightColor?: ColorValue;
  preventKeyboardDisplayOnProgrammaticFocus?: boolean;
  placeholderText?: string;
  isColorFontEnabled?: boolean;
  header?: object;
  textReadingOrder?: TextReadingOrder;
  desiredCandidateWindowAlignment?: CandidateWindowAlignment;
  clipboardCopyFormat?: RichEditClipboardFormat;
  selectionHighlightColorWhenNotFocused?: ColorValue;
  maxLength?: number;
  horizontalTextAlignment?: TextAlignment;
  disabledFormattingAccelerators?: DisabledFormattingAccelerators;
  characterCasing?: CharacterCasing;
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
  textWrapping?: TextWrapping;
  textTrimming?: TextTrimming;
  textIndent?: number;
  textAlignment?: TextAlignment;
  padding?: Thickness;
  foreground?: ColorValue;
  fontStyle?: FontStyle;
  fontStretch?: FontStretch;
  fontSize?: number;
  lineStackingStrategy?: LineStackingStrategy;
  characterSpacing?: number;
  lineHeight?: number;
  isTextSelectionEnabled?: boolean;
  textReadingOrder?: TextReadingOrder;
  textLineBounds?: TextLineBounds;
  selectionHighlightColor?: ColorValue;
  opticalMarginAlignment?: OpticalMarginAlignment;
  maxLines?: number;
  isColorFontEnabled?: boolean;
  isTextScaleFactorEnabled?: boolean;
  textDecorations?: TextDecorations;
  horizontalTextAlignment?: TextAlignment;
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
  horizontalSnapPointsType?: SnapPointsType;
  horizontalSnapPointsAlignment?: SnapPointsAlignment;
  horizontalScrollMode?: ScrollMode;
  horizontalScrollBarVisibility?: ScrollBarVisibility;
  minZoomFactor?: number;
  maxZoomFactor?: number;
  isZoomInertiaEnabled?: boolean;
  isZoomChainingEnabled?: boolean;
  isVerticalScrollChainingEnabled?: boolean;
  bringIntoViewOnFocusChange?: boolean;
  zoomSnapPointsType?: SnapPointsType;
  zoomMode?: ZoomMode;
  verticalSnapPointsType?: SnapPointsType;
  verticalSnapPointsAlignment?: SnapPointsAlignment;
  verticalScrollMode?: ScrollMode;
  verticalScrollBarVisibility?: ScrollBarVisibility;
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
  panePlacement?: SplitViewPanePlacement;
  paneBackground?: ColorValue;
  openPaneLength?: number;
  isPaneOpen?: boolean;
  displayMode?: SplitViewDisplayMode;
  compactPaneLength?: number;
  lightDismissOverlayMode?: LightDismissOverlayMode;
  onPaneClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneClosing?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneOpening?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeStackPanelProps extends NativePanelProps {
  type: 'stackPanel';
  orientation?: Orientation;
  areScrollSnapPointsRegular?: boolean;
  padding?: Thickness;
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  spacing?: number;
  backgroundSizing?: BackgroundSizing;
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
  symbol?: Symbol;
}


export interface NativeTextBlockProps extends NativeFrameworkElementProps {
  type: 'textBlock';
  textWrapping?: TextWrapping;
  textTrimming?: TextTrimming;
  textAlignment?: TextAlignment;
  text?: string;
  padding?: Thickness;
  foreground?: ColorValue;
  fontStyle?: FontStyle;
  fontStretch?: FontStretch;
  fontSize?: number;
  lineStackingStrategy?: LineStackingStrategy;
  lineHeight?: number;
  characterSpacing?: number;
  isTextSelectionEnabled?: boolean;
  textReadingOrder?: TextReadingOrder;
  textLineBounds?: TextLineBounds;
  selectionHighlightColor?: ColorValue;
  opticalMarginAlignment?: OpticalMarginAlignment;
  maxLines?: number;
  isColorFontEnabled?: boolean;
  isTextScaleFactorEnabled?: boolean;
  textDecorations?: TextDecorations;
  horizontalTextAlignment?: TextAlignment;
  onContextMenuOpening?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onIsTextTrimmedChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeTextBoxProps extends NativeControlProps {
  type: 'textBox';
  textWrapping?: TextWrapping;
  textAlignment?: TextAlignment;
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
  desiredCandidateWindowAlignment?: CandidateWindowAlignment;
  textReadingOrder?: TextReadingOrder;
  selectionHighlightColorWhenNotFocused?: ColorValue;
  placeholderForeground?: ColorValue;
  horizontalTextAlignment?: TextAlignment;
  characterCasing?: CharacterCasing;
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
  lightDismissOverlayMode?: LightDismissOverlayMode;
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
  placement?: PlacementMode;
  isOpen?: boolean;
  horizontalOffset?: number;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeTreeViewProps extends NativeControlProps {
  type: 'treeView';
  selectionMode?: TreeViewSelectionMode;
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
  wideModeConfiguration?: TwoPaneViewWideModeConfiguration;
  tallModeConfiguration?: TwoPaneViewTallModeConfiguration;
  panePriority?: TwoPaneViewPriority;
  minWideModeWidth?: number;
  minTallModeHeight?: number;
  onModeChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeVariableSizedWrapGridProps extends NativePanelProps {
  type: 'variableSizedWrapGrid';
  verticalChildrenAlignment?: VerticalAlignment;
  orientation?: Orientation;
  maximumRowsOrColumns?: number;
  itemWidth?: number;
  itemHeight?: number;
  horizontalChildrenAlignment?: HorizontalAlignment;
}


export interface NativeViewboxProps extends NativeFrameworkElementProps {
  type: 'viewbox';
  stretchDirection?: StretchDirection;
  stretch?: Stretch;
}


export interface NativeVirtualizingStackPanelProps extends NativeOrientedVirtualizingPanelProps {
  type: 'virtualizingStackPanel';
  orientation?: Orientation;
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
  verticalChildrenAlignment?: VerticalAlignment;
  orientation?: Orientation;
  maximumRowsOrColumns?: number;
  itemWidth?: number;
  itemHeight?: number;
  horizontalChildrenAlignment?: HorizontalAlignment;
}


export interface NativeGlyphsProps extends NativeFrameworkElementProps {
  type: 'glyphs';
  unicodeString?: string;
  styleSimulations?: StyleSimulations;
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
  strokeStartLineCap?: PenLineCap;
  strokeMiterLimit?: number;
  strokeLineJoin?: PenLineJoin;
  strokeEndLineCap?: PenLineCap;
  strokeDashOffset?: number;
  strokeDashCap?: PenLineCap;
  stroke?: ColorValue;
  stretch?: Stretch;
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
  fillRule?: FillRule;
}


export interface NativePolylineProps extends NativeShapeProps {
  type: 'polyline';
  fillRule?: FillRule;
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



const enum ManipulationModes {
	None = 0,
	TranslateX = 1,
	TranslateY = 2,
	TranslateRailsX = 4,
	TranslateRailsY = 8,
	Rotate = 16,
	Scale = 32,
	TranslateInertia = 64,
	RotateInertia = 128,
	ScaleInertia = 256,
	All = 65535,
	System = 65536,
}

const enum Visibility {
	Visible = 0,
	Collapsed = 1,
}

const enum ElementCompositeMode {
	Inherit = 0,
	SourceOver = 1,
	MinBlend = 2,
}

const enum ElementHighContrastAdjustment {
	None = 0,
	Application = -2147483648,
	Auto = -1,
}

const enum XYFocusNavigationStrategy {
	Auto = 0,
	Projection = 1,
	NavigationDirectionDistance = 2,
	RectilinearDistance = 3,
}

const enum XYFocusKeyboardNavigationMode {
	Auto = 0,
	Enabled = 1,
	Disabled = 2,
}

const enum KeyboardNavigationMode {
	Local = 0,
	Cycle = 1,
	Once = 2,
}

const enum KeyTipPlacementMode {
	Auto = 0,
	Bottom = 1,
	Top = 2,
	Left = 3,
	Right = 4,
	Center = 5,
	Hidden = 6,
}

const enum KeyboardAcceleratorPlacementMode {
	Auto = 0,
	Hidden = 1,
}

const enum VerticalAlignment {
	Top = 0,
	Center = 1,
	Bottom = 2,
	Stretch = 3,
}

const enum HorizontalAlignment {
	Left = 0,
	Center = 1,
	Right = 2,
	Stretch = 3,
}

const enum FlowDirection {
	LeftToRight = 0,
	RightToLeft = 1,
}

const enum ElementTheme {
	Default = 0,
	Light = 1,
	Dark = 2,
}

const enum FontStyle {
	Normal = 0,
	Oblique = 1,
	Italic = 2,
}

const enum FontStretch {
	Undefined = 0,
	UltraCondensed = 1,
	ExtraCondensed = 2,
	Condensed = 3,
	SemiCondensed = 4,
	Normal = 5,
	SemiExpanded = 6,
	Expanded = 7,
	ExtraExpanded = 8,
	UltraExpanded = 9,
}

const enum RequiresPointer {
	Never = 0,
	WhenEngaged = 1,
	WhenFocused = 2,
}

const enum ElementSoundMode {
	Default = 0,
	FocusOnly = 1,
	Off = 2,
}

const enum BackgroundSizing {
	InnerBorderEdge = 0,
	OuterBorderEdge = 1,
}

const enum AppBarClosedDisplayMode {
	Compact = 0,
	Minimal = 1,
	Hidden = 2,
}

const enum LightDismissOverlayMode {
	Auto = 0,
	On = 1,
	Off = 2,
}

const enum ClickMode {
	Release = 0,
	Press = 1,
	Hover = 2,
}

const enum CommandBarLabelPosition {
	Default = 0,
	Collapsed = 1,
}

const enum DayOfWeek {
	Sunday = 0,
	Monday = 1,
	Tuesday = 2,
	Wednesday = 3,
	Thursday = 4,
	Friday = 5,
	Saturday = 6,
}

const enum CalendarViewDisplayMode {
	Month = 0,
	Year = 1,
	Decade = 2,
}

const enum CalendarViewSelectionMode {
	None = 0,
	Single = 1,
	Multiple = 2,
}

const enum Stretch {
	None = 0,
	Fill = 1,
	Uniform = 2,
	UniformToFill = 3,
}

const enum ColorSpectrumShape {
	Box = 0,
	Ring = 1,
}

const enum ColorSpectrumComponents {
	HueValue = 0,
	ValueHue = 1,
	HueSaturation = 2,
	SaturationHue = 3,
	SaturationValue = 4,
	ValueSaturation = 5,
}

const enum ComboBoxSelectionChangedTrigger {
	Committed = 0,
	Always = 1,
}

const enum CommandBarOverflowButtonVisibility {
	Auto = 0,
	Visible = 1,
	Collapsed = 2,
}

const enum CommandBarDefaultLabelPosition {
	Bottom = 0,
	Right = 1,
	Collapsed = 2,
}

const enum FlyoutPlacementMode {
	Top = 0,
	Bottom = 1,
	Left = 2,
	Right = 3,
	Full = 4,
	TopEdgeAlignedLeft = 5,
	TopEdgeAlignedRight = 6,
	BottomEdgeAlignedLeft = 7,
	BottomEdgeAlignedRight = 8,
	LeftEdgeAlignedTop = 9,
	LeftEdgeAlignedBottom = 10,
	RightEdgeAlignedTop = 11,
	RightEdgeAlignedBottom = 12,
	Auto = 13,
}

const enum FlyoutShowMode {
	Auto = 0,
	Standard = 1,
	Transient = 2,
	TransientWithDismissOnPointerMoveAway = 3,
}

const enum ContentDialogButton {
	None = 0,
	Primary = 1,
	Secondary = 2,
	Close = 3,
}

const enum TextLineBounds {
	Full = 0,
	TrimToCapHeight = 1,
	TrimToBaseline = 2,
	Tight = 3,
}

const enum OpticalMarginAlignment {
	None = 0,
	TrimSideBearings = 1,
}

const enum TextWrapping {
	NoWrap = 1,
	Wrap = 2,
	WrapWholeWords = 3,
}

const enum LineStackingStrategy {
	MaxHeight = 0,
	BlockLineHeight = 1,
	BaselineToBaseline = 2,
}

const enum Orientation {
	Vertical = 0,
	Horizontal = 1,
}

const enum ListViewSelectionMode {
	None = 0,
	Single = 1,
	Multiple = 2,
	Extended = 3,
}

const enum IncrementalLoadingTrigger {
	None = 0,
	Edge = 1,
}

const enum ListViewReorderMode {
	Disabled = 0,
	Enabled = 1,
}

const enum HandwritingPanelPlacementAlignment {
	Auto = 0,
	TopLeft = 1,
	TopRight = 2,
	BottomLeft = 3,
	BottomRight = 4,
}

const enum InkToolbarInitialControls {
	All = 0,
	None = 1,
	PensOnly = 2,
	AllExceptPens = 3,
}

const enum InkToolbarButtonFlyoutPlacement {
	Auto = 0,
	Top = 1,
	Bottom = 2,
	Left = 3,
	Right = 4,
}

const enum InkToolbarFlyoutItemKind {
	Simple = 0,
	Radio = 1,
	Check = 2,
	RadioCheck = 3,
}

const enum InkToolbarStencilKind {
	Ruler = 0,
	Protractor = 1,
}

const enum GroupHeaderPlacement {
	Top = 0,
	Left = 1,
}

const enum SelectionMode {
	Single = 0,
	Multiple = 1,
	Extended = 2,
}

const enum ListPickerFlyoutSelectionMode {
	Single = 0,
	Multiple = 1,
}

const enum MapWatermarkMode {
	Automatic = 0,
	On = 1,
}

const enum MapColorScheme {
	Light = 0,
	Dark = 1,
}

const enum MapInteractionMode {
	Auto = 0,
	Disabled = 1,
	GestureOnly = 2,
	PointerAndKeyboard = 2,
	ControlOnly = 3,
	GestureAndControl = 4,
	PointerKeyboardAndControl = 4,
	PointerOnly = 5,
}

const enum MapPanInteractionMode {
	Auto = 0,
	Disabled = 1,
}

const enum MapProjection {
	WebMercator = 0,
	Globe = 1,
}

const enum Stereo3DVideoRenderMode {
	Mono = 0,
	Stereo = 1,
}

const enum Stereo3DVideoPackingMode {
	None = 0,
	SideBySide = 1,
	TopBottom = 2,
}

const enum AudioDeviceType {
	Console = 0,
	Multimedia = 1,
	Communications = 2,
}

const enum AudioCategory {
	Other = 0,
	ForegroundOnlyMedia = 1,
	BackgroundCapableMedia = 2,
	Communications = 3,
	Alerts = 4,
	SoundEffects = 5,
	GameEffects = 6,
	GameMedia = 7,
	GameChat = 8,
	Speech = 9,
	Movie = 10,
	Media = 11,
}

const enum FastPlayFallbackBehaviour {
	Skip = 0,
	Hide = 1,
	Disable = 2,
}

const enum NavigationViewBackButtonVisible {
	Collapsed = 0,
	Visible = 1,
	Auto = 2,
}

const enum NavigationViewShoulderNavigationEnabled {
	WhenSelectionFollowsFocus = 0,
	Always = 1,
	Never = 2,
}

const enum NavigationViewSelectionFollowsFocus {
	Disabled = 0,
	Enabled = 1,
}

const enum NavigationViewPaneDisplayMode {
	Auto = 0,
	Left = 1,
	Top = 2,
	LeftCompact = 3,
	LeftMinimal = 4,
}

const enum NavigationViewOverflowLabelMode {
	MoreLabel = 0,
	NoLabel = 1,
}

const enum ParallaxSourceOffsetKind {
	Absolute = 0,
	Relative = 1,
}

const enum TextReadingOrder {
	Default = 0,
	UseFlowDirection = 0,
	DetectFromContent = 1,
}

const enum PasswordRevealMode {
	Peek = 0,
	Hidden = 1,
	Visible = 2,
}

const enum PivotHeaderFocusVisualPlacement {
	ItemHeaders = 0,
	SelectedItemHeader = 1,
}

const enum TickPlacement {
	None = 0,
	TopLeft = 1,
	BottomRight = 2,
	Outside = 3,
	Inline = 4,
}

const enum SliderSnapsTo {
	StepValues = 0,
	Ticks = 1,
}

const enum ColorPickerHsvChannel {
	Hue = 0,
	Saturation = 1,
	Value = 2,
	Alpha = 3,
}

const enum ListViewItemPresenterCheckMode {
	Inline = 0,
	Overlay = 1,
}

const enum ScrollingIndicatorMode {
	None = 0,
	TouchIndicator = 1,
	MouseIndicator = 2,
}

const enum RefreshPullDirection {
	LeftToRight = 0,
	TopToBottom = 1,
	RightToLeft = 2,
	BottomToTop = 3,
}

const enum RefreshVisualizerOrientation {
	Auto = 0,
	Normal = 1,
	Rotate90DegreesCounterclockwise = 2,
	Rotate270DegreesCounterclockwise = 3,
}

const enum TextAlignment {
	Center = 0,
	Left = 1,
	Start = 1,
	Right = 2,
	End = 2,
	Justify = 3,
	DetectFromContent = 4,
}

const enum CandidateWindowAlignment {
	Default = 0,
	BottomEdge = 1,
}

const enum RichEditClipboardFormat {
	AllFormats = 0,
	PlainText = 1,
}

const enum DisabledFormattingAccelerators {
	None = 0,
	Bold = 1,
	Italic = 2,
	Underline = 4,
	All = -1,
}

const enum CharacterCasing {
	Normal = 0,
	Lower = 1,
	Upper = 2,
}

const enum TextTrimming {
	None = 0,
	CharacterEllipsis = 1,
	WordEllipsis = 2,
	Clip = 3,
}

const enum TextDecorations {
	None = 0,
	Underline = 1,
	Strikethrough = 2,
}

const enum SnapPointsType {
	None = 0,
	Optional = 1,
	Mandatory = 2,
	OptionalSingle = 3,
	MandatorySingle = 4,
}

const enum SnapPointsAlignment {
	Near = 0,
	Center = 1,
	Far = 2,
}

const enum ScrollMode {
	Disabled = 0,
	Enabled = 1,
	Auto = 2,
}

const enum ScrollBarVisibility {
	Disabled = 0,
	Auto = 1,
	Hidden = 2,
	Visible = 3,
}

const enum ZoomMode {
	Disabled = 0,
	Enabled = 1,
}

const enum SplitViewPanePlacement {
	Left = 0,
	Right = 1,
}

const enum SplitViewDisplayMode {
	Overlay = 0,
	Inline = 1,
	CompactOverlay = 2,
	CompactInline = 3,
}

const enum Symbol {
	Previous = 57600,
	Next = 57601,
	Play = 57602,
	Pause = 57603,
	Edit = 57604,
	Save = 57605,
	Clear = 57606,
	Delete = 57607,
	Remove = 57608,
	Add = 57609,
	Cancel = 57610,
	Accept = 57611,
	More = 57612,
	Redo = 57613,
	Undo = 57614,
	Home = 57615,
	Up = 57616,
	Forward = 57617,
	Back = 57618,
	Favorite = 57619,
	Camera = 57620,
	Setting = 57621,
	Video = 57622,
	Sync = 57623,
	Download = 57624,
	Mail = 57625,
	Find = 57626,
	Help = 57627,
	Upload = 57628,
	Emoji = 57629,
	TwoPage = 57630,
	LeaveChat = 57631,
	MailForward = 57632,
	Clock = 57633,
	Send = 57634,
	Crop = 57635,
	RotateCamera = 57636,
	People = 57637,
	OpenPane = 57638,
	ClosePane = 57639,
	World = 57640,
	Flag = 57641,
	PreviewLink = 57642,
	Globe = 57643,
	Trim = 57644,
	AttachCamera = 57645,
	ZoomIn = 57646,
	Bookmarks = 57647,
	Document = 57648,
	ProtectedDocument = 57649,
	Page = 57650,
	Bullets = 57651,
	Comment = 57652,
	MailFilled = 57653,
	ContactInfo = 57654,
	HangUp = 57655,
	ViewAll = 57656,
	MapPin = 57657,
	Phone = 57658,
	VideoChat = 57659,
	Switch = 57660,
	Contact = 57661,
	Rename = 57662,
	Pin = 57665,
	MusicInfo = 57666,
	Go = 57667,
	Keyboard = 57668,
	DockLeft = 57669,
	DockRight = 57670,
	DockBottom = 57671,
	Remote = 57672,
	Refresh = 57673,
	Rotate = 57674,
	Shuffle = 57675,
	List = 57676,
	Shop = 57677,
	SelectAll = 57678,
	Orientation = 57679,
	Import = 57680,
	ImportAll = 57681,
	BrowsePhotos = 57685,
	WebCam = 57686,
	Pictures = 57688,
	SaveLocal = 57689,
	Caption = 57690,
	Stop = 57691,
	ShowResults = 57692,
	Volume = 57693,
	Repair = 57694,
	Message = 57695,
	Page2 = 57696,
	CalendarDay = 57697,
	CalendarWeek = 57698,
	Calendar = 57699,
	Character = 57700,
	MailReplyAll = 57701,
	Read = 57702,
	Link = 57703,
	Account = 57704,
	ShowBcc = 57705,
	HideBcc = 57706,
	Cut = 57707,
	Attach = 57708,
	Paste = 57709,
	Filter = 57710,
	Copy = 57711,
	Emoji2 = 57712,
	Important = 57713,
	MailReply = 57714,
	SlideShow = 57715,
	Sort = 57716,
	Manage = 57720,
	AllApps = 57721,
	DisconnectDrive = 57722,
	MapDrive = 57723,
	NewWindow = 57724,
	OpenWith = 57725,
	ContactPresence = 57729,
	Priority = 57730,
	GoToToday = 57732,
	Font = 57733,
	FontColor = 57734,
	Contact2 = 57735,
	Folder = 57736,
	Audio = 57737,
	Placeholder = 57738,
	View = 57739,
	SetLockScreen = 57740,
	SetTile = 57741,
	ClosedCaption = 57744,
	StopSlideShow = 57745,
	Permissions = 57746,
	Highlight = 57747,
	DisableUpdates = 57748,
	UnFavorite = 57749,
	UnPin = 57750,
	OpenLocal = 57751,
	Mute = 57752,
	Italic = 57753,
	Underline = 57754,
	Bold = 57755,
	MoveToFolder = 57756,
	LikeDislike = 57757,
	Dislike = 57758,
	Like = 57759,
	AlignRight = 57760,
	AlignCenter = 57761,
	AlignLeft = 57762,
	Zoom = 57763,
	ZoomOut = 57764,
	OpenFile = 57765,
	OtherUser = 57766,
	Admin = 57767,
	Street = 57795,
	Map = 57796,
	ClearSelection = 57797,
	FontDecrease = 57798,
	FontIncrease = 57799,
	FontSize = 57800,
	CellPhone = 57801,
	ReShare = 57802,
	Tag = 57803,
	RepeatOne = 57804,
	RepeatAll = 57805,
	OutlineStar = 57806,
	SolidStar = 57807,
	Calculator = 57808,
	Directions = 57809,
	Target = 57810,
	Library = 57811,
	PhoneBook = 57812,
	Memo = 57813,
	Microphone = 57814,
	PostUpdate = 57815,
	BackToWindow = 57816,
	FullScreen = 57817,
	NewFolder = 57818,
	CalendarReply = 57819,
	UnSyncFolder = 57821,
	ReportHacked = 57822,
	SyncFolder = 57823,
	BlockContact = 57824,
	SwitchApps = 57825,
	AddFriend = 57826,
	TouchPointer = 57827,
	GoToStart = 57828,
	ZeroBars = 57829,
	OneBar = 57830,
	TwoBars = 57831,
	ThreeBars = 57832,
	FourBars = 57833,
	Scan = 58004,
	Preview = 58005,
	GlobalNavigationButton = 59136,
	Share = 59181,
	Print = 59209,
	XboxOneConsole = 59792,
}

const enum PlacementMode {
	Bottom = 2,
	Left = 9,
	Mouse = 7,
	Right = 4,
	Top = 10,
}

const enum TreeViewSelectionMode {
	None = 0,
	Single = 1,
	Multiple = 2,
}

const enum TwoPaneViewWideModeConfiguration {
	SinglePane = 0,
	LeftRight = 1,
	RightLeft = 2,
}

const enum TwoPaneViewTallModeConfiguration {
	SinglePane = 0,
	TopBottom = 1,
	BottomTop = 2,
}

const enum TwoPaneViewPriority {
	Pane1 = 0,
	Pane2 = 1,
}

const enum StretchDirection {
	UpOnly = 0,
	DownOnly = 1,
	Both = 2,
}

const enum StyleSimulations {
	None = 0,
	BoldSimulation = 1,
	ItalicSimulation = 2,
	BoldItalicSimulation = 3,
}

const enum PenLineCap {
	Flat = 0,
	Square = 1,
	Round = 2,
	Triangle = 3,
}

const enum PenLineJoin {
	Miter = 0,
	Bevel = 1,
	Round = 2,
}

const enum FillRule {
	EvenOdd = 0,
	Nonzero = 1,
}
