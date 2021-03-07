import type { ViewProps, NativeSyntheticEvent, ColorValue } from 'react-native';
export type Thickness = number | { left: number, top: number, right: number, bottom: number };


export interface NativeBlankUserControlProps extends NativeUserControlProps {
  type: 'blankUserControl';
  myProperty?: number;
  onHappened?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeDependencyObjectProps extends ViewProps {
  type: 'blankUserControl'|'contentControl'|'appBar'|'button'|'appBarButton'|'appBarElementContainer'|'appBarSeparator'|'toggleButton'|'appBarToggleButton'|'itemsControl'|'autoSuggestBox'|'bitmapIcon'|'border'|'calendarDatePicker'|'calendarView'|'calendarViewDayItem'|'canvas'|'captureElement'|'checkBox'|'colorPicker'|'comboBox'|'comboBoxItem'|'commandBar'|'commandBarFlyout'|'commandBarOverflowPresenter'|'contentDialog'|'contentPresenter'|'datePicker'|'datePickerFlyout'|'dropDownButton'|'flipView'|'flipViewItem'|'flyout'|'flyoutPresenter'|'fontIcon'|'frame'|'grid'|'gridView'|'gridViewHeaderItem'|'gridViewItem'|'groupItem'|'handwritingView'|'hub'|'hubSection'|'hyperlinkButton'|'iconSourceElement'|'image'|'inkCanvas'|'inkToolbar'|'radioButton'|'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarCustomToggleButton'|'inkToolbarCustomToolButton'|'inkToolbarEraserButton'|'inkToolbarFlyoutItem'|'inkToolbarHighlighterButton'|'inkToolbarPenConfigurationControl'|'inkToolbarPencilButton'|'inkToolbarRulerButton'|'inkToolbarStencilButton'|'itemsPresenter'|'itemsStackPanel'|'itemsWrapGrid'|'listBox'|'listBoxItem'|'listPickerFlyout'|'listView'|'listViewHeaderItem'|'listViewItem'|'mapControl'|'mediaElement'|'mediaPlayerElement'|'mediaPlayerPresenter'|'mediaTransportControls'|'menuBar'|'menuBarItem'|'menuFlyout'|'menuBarItemFlyout'|'menuFlyoutItem'|'menuFlyoutPresenter'|'menuFlyoutSeparator'|'menuFlyoutSubItem'|'navigationView'|'navigationViewItem'|'navigationViewItemHeader'|'navigationViewItemSeparator'|'navigationViewList'|'userControl'|'page'|'parallaxView'|'passwordBox'|'pathIcon'|'personPicture'|'pickerFlyout'|'pivot'|'pivotItem'|'calendarPanel'|'carouselPanel'|'slider'|'colorPickerSlider'|'colorSpectrum'|'commandBarFlyoutCommandBar'|'gridViewItemPresenter'|'listViewItemPresenter'|'navigationViewItemPresenter'|'pivotHeaderItem'|'pivotHeaderPanel'|'pivotPanel'|'popup'|'repeatButton'|'scrollBar'|'thumb'|'tickBar'|'progressBar'|'progressRing'|'ratingControl'|'refreshContainer'|'refreshVisualizer'|'relativePanel'|'richEditBox'|'richTextBlock'|'richTextBlockOverflow'|'scrollContentPresenter'|'scrollViewer'|'searchBox'|'semanticZoom'|'settingsFlyout'|'splitButton'|'splitView'|'stackPanel'|'swapChainBackgroundPanel'|'swapChainPanel'|'swipeControl'|'symbolIcon'|'textBlock'|'textBox'|'textCommandBarFlyout'|'timePicker'|'timePickerFlyout'|'toggleMenuFlyoutItem'|'toggleSplitButton'|'toggleSwitch'|'toolTip'|'treeView'|'treeViewItem'|'treeViewList'|'twoPaneView'|'variableSizedWrapGrid'|'viewbox'|'virtualizingStackPanel'|'webView'|'wrapGrid'|'glyphs'|'ellipse'|'line'|'path'|'polygon'|'polyline'|'rectangle';
}


export interface NativeUIElementProps extends NativeDependencyObjectProps {
  type: 'blankUserControl'|'contentControl'|'appBar'|'button'|'appBarButton'|'appBarElementContainer'|'appBarSeparator'|'toggleButton'|'appBarToggleButton'|'itemsControl'|'autoSuggestBox'|'bitmapIcon'|'border'|'calendarDatePicker'|'calendarView'|'calendarViewDayItem'|'canvas'|'captureElement'|'checkBox'|'colorPicker'|'comboBox'|'comboBoxItem'|'commandBar'|'commandBarOverflowPresenter'|'contentDialog'|'contentPresenter'|'datePicker'|'dropDownButton'|'flipView'|'flipViewItem'|'flyoutPresenter'|'fontIcon'|'frame'|'grid'|'gridView'|'gridViewHeaderItem'|'gridViewItem'|'groupItem'|'handwritingView'|'hub'|'hubSection'|'hyperlinkButton'|'iconSourceElement'|'image'|'inkCanvas'|'inkToolbar'|'radioButton'|'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarCustomToggleButton'|'inkToolbarCustomToolButton'|'inkToolbarEraserButton'|'inkToolbarFlyoutItem'|'inkToolbarHighlighterButton'|'inkToolbarPenConfigurationControl'|'inkToolbarPencilButton'|'inkToolbarRulerButton'|'inkToolbarStencilButton'|'itemsPresenter'|'itemsStackPanel'|'itemsWrapGrid'|'listBox'|'listBoxItem'|'listView'|'listViewHeaderItem'|'listViewItem'|'mapControl'|'mediaElement'|'mediaPlayerElement'|'mediaPlayerPresenter'|'mediaTransportControls'|'menuBar'|'menuBarItem'|'menuFlyoutItem'|'menuFlyoutPresenter'|'menuFlyoutSeparator'|'menuFlyoutSubItem'|'navigationView'|'navigationViewItem'|'navigationViewItemHeader'|'navigationViewItemSeparator'|'navigationViewList'|'userControl'|'page'|'parallaxView'|'passwordBox'|'pathIcon'|'personPicture'|'pivot'|'pivotItem'|'calendarPanel'|'carouselPanel'|'slider'|'colorPickerSlider'|'colorSpectrum'|'commandBarFlyoutCommandBar'|'gridViewItemPresenter'|'listViewItemPresenter'|'navigationViewItemPresenter'|'pivotHeaderItem'|'pivotHeaderPanel'|'pivotPanel'|'popup'|'repeatButton'|'scrollBar'|'thumb'|'tickBar'|'progressBar'|'progressRing'|'ratingControl'|'refreshContainer'|'refreshVisualizer'|'relativePanel'|'richEditBox'|'richTextBlock'|'richTextBlockOverflow'|'scrollContentPresenter'|'scrollViewer'|'searchBox'|'semanticZoom'|'settingsFlyout'|'splitButton'|'splitView'|'stackPanel'|'swapChainBackgroundPanel'|'swapChainPanel'|'swipeControl'|'symbolIcon'|'textBlock'|'textBox'|'timePicker'|'toggleMenuFlyoutItem'|'toggleSplitButton'|'toggleSwitch'|'toolTip'|'treeView'|'treeViewItem'|'treeViewList'|'twoPaneView'|'variableSizedWrapGrid'|'viewbox'|'virtualizingStackPanel'|'webView'|'wrapGrid'|'glyphs'|'ellipse'|'line'|'path'|'polygon'|'polyline'|'rectangle';
  opacity?: number;
  manipulationMode?: 'none' | 'translateX' | 'translateY' | 'translateRailsX' | 'translateRailsY' | 'rotate' | 'scale' | 'translateInertia' | 'rotateInertia' | 'scaleInertia' | 'all' | 'system';
  isTapEnabled?: boolean;
  isRightTapEnabled?: boolean;
  isHoldingEnabled?: boolean;
  isHitTestVisible?: boolean;
  isDoubleTapEnabled?: boolean;
  allowDrop?: boolean;
  useLayoutRounding?: boolean;
  visibility?: 'visible' | 'collapsed';
  compositeMode?: 'inherit' | 'sourceOver' | 'minBlend';
  canDrag?: boolean;
  isAccessKeyScope?: boolean;
  exitDisplayModeOnAccessKeyInvoked?: boolean;
  accessKey?: string;
  keyTipHorizontalOffset?: number;
  highContrastAdjustment?: 'none' | 'application' | 'auto';
  xyFocusRightNavigationStrategy?: 'auto' | 'projection' | 'navigationDirectionDistance' | 'rectilinearDistance';
  xyFocusKeyboardNavigation?: 'auto' | 'enabled' | 'disabled';
  xyFocusDownNavigationStrategy?: 'auto' | 'projection' | 'navigationDirectionDistance' | 'rectilinearDistance';
  tabFocusNavigation?: 'local' | 'cycle' | 'once';
  keyTipVerticalOffset?: number;
  xyFocusUpNavigationStrategy?: 'auto' | 'projection' | 'navigationDirectionDistance' | 'rectilinearDistance';
  keyTipPlacementMode?: 'auto' | 'bottom' | 'top' | 'left' | 'right' | 'center' | 'hidden';
  xyFocusLeftNavigationStrategy?: 'auto' | 'projection' | 'navigationDirectionDistance' | 'rectilinearDistance';
  keyboardAcceleratorPlacementMode?: 'auto' | 'hidden';
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
  type: 'blankUserControl'|'contentControl'|'appBar'|'button'|'appBarButton'|'appBarElementContainer'|'appBarSeparator'|'toggleButton'|'appBarToggleButton'|'itemsControl'|'autoSuggestBox'|'bitmapIcon'|'border'|'calendarDatePicker'|'calendarView'|'calendarViewDayItem'|'canvas'|'captureElement'|'checkBox'|'colorPicker'|'comboBox'|'comboBoxItem'|'commandBar'|'commandBarOverflowPresenter'|'contentDialog'|'contentPresenter'|'datePicker'|'dropDownButton'|'flipView'|'flipViewItem'|'flyoutPresenter'|'fontIcon'|'frame'|'grid'|'gridView'|'gridViewHeaderItem'|'gridViewItem'|'groupItem'|'handwritingView'|'hub'|'hubSection'|'hyperlinkButton'|'iconSourceElement'|'image'|'inkCanvas'|'inkToolbar'|'radioButton'|'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarCustomToggleButton'|'inkToolbarCustomToolButton'|'inkToolbarEraserButton'|'inkToolbarFlyoutItem'|'inkToolbarHighlighterButton'|'inkToolbarPenConfigurationControl'|'inkToolbarPencilButton'|'inkToolbarRulerButton'|'inkToolbarStencilButton'|'itemsPresenter'|'itemsStackPanel'|'itemsWrapGrid'|'listBox'|'listBoxItem'|'listView'|'listViewHeaderItem'|'listViewItem'|'mapControl'|'mediaElement'|'mediaPlayerElement'|'mediaPlayerPresenter'|'mediaTransportControls'|'menuBar'|'menuBarItem'|'menuFlyoutItem'|'menuFlyoutPresenter'|'menuFlyoutSeparator'|'menuFlyoutSubItem'|'navigationView'|'navigationViewItem'|'navigationViewItemHeader'|'navigationViewItemSeparator'|'navigationViewList'|'userControl'|'page'|'parallaxView'|'passwordBox'|'pathIcon'|'personPicture'|'pivot'|'pivotItem'|'calendarPanel'|'carouselPanel'|'slider'|'colorPickerSlider'|'colorSpectrum'|'commandBarFlyoutCommandBar'|'gridViewItemPresenter'|'listViewItemPresenter'|'navigationViewItemPresenter'|'pivotHeaderItem'|'pivotHeaderPanel'|'pivotPanel'|'popup'|'repeatButton'|'scrollBar'|'thumb'|'tickBar'|'progressBar'|'progressRing'|'ratingControl'|'refreshContainer'|'refreshVisualizer'|'relativePanel'|'richEditBox'|'richTextBlock'|'richTextBlockOverflow'|'scrollContentPresenter'|'scrollViewer'|'searchBox'|'semanticZoom'|'settingsFlyout'|'splitButton'|'splitView'|'stackPanel'|'swapChainBackgroundPanel'|'swapChainPanel'|'swipeControl'|'symbolIcon'|'textBlock'|'textBox'|'timePicker'|'toggleMenuFlyoutItem'|'toggleSplitButton'|'toggleSwitch'|'toolTip'|'treeView'|'treeViewItem'|'treeViewList'|'twoPaneView'|'variableSizedWrapGrid'|'viewbox'|'virtualizingStackPanel'|'webView'|'wrapGrid'|'glyphs'|'ellipse'|'line'|'path'|'polygon'|'polyline'|'rectangle';
  width?: number;
  verticalAlignment?: 'top' | 'center' | 'bottom' | 'stretch';
  tag?: object;
  name?: string;
  minWidth?: number;
  minHeight?: number;
  maxWidth?: number;
  maxHeight?: number;
  margin?: Thickness;
  language?: string;
  horizontalAlignment?: 'left' | 'center' | 'right' | 'stretch';
  height?: number;
  flowDirection?: 'leftToRight' | 'rightToLeft';
  dataContext?: object;
  requestedTheme?: 'default' | 'light' | 'dark';
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
  type: 'blankUserControl'|'contentControl'|'appBar'|'button'|'appBarButton'|'appBarElementContainer'|'appBarSeparator'|'toggleButton'|'appBarToggleButton'|'itemsControl'|'autoSuggestBox'|'calendarDatePicker'|'calendarView'|'calendarViewDayItem'|'checkBox'|'colorPicker'|'comboBox'|'comboBoxItem'|'commandBar'|'commandBarOverflowPresenter'|'contentDialog'|'datePicker'|'dropDownButton'|'flipView'|'flipViewItem'|'flyoutPresenter'|'frame'|'gridView'|'gridViewHeaderItem'|'gridViewItem'|'groupItem'|'handwritingView'|'hub'|'hubSection'|'hyperlinkButton'|'inkToolbar'|'radioButton'|'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarCustomToggleButton'|'inkToolbarCustomToolButton'|'inkToolbarEraserButton'|'inkToolbarFlyoutItem'|'inkToolbarHighlighterButton'|'inkToolbarPenConfigurationControl'|'inkToolbarPencilButton'|'inkToolbarRulerButton'|'inkToolbarStencilButton'|'listBox'|'listBoxItem'|'listView'|'listViewHeaderItem'|'listViewItem'|'mapControl'|'mediaPlayerElement'|'mediaTransportControls'|'menuBar'|'menuBarItem'|'menuFlyoutItem'|'menuFlyoutPresenter'|'menuFlyoutSeparator'|'menuFlyoutSubItem'|'navigationView'|'navigationViewItem'|'navigationViewItemHeader'|'navigationViewItemSeparator'|'navigationViewList'|'userControl'|'page'|'passwordBox'|'personPicture'|'pivot'|'pivotItem'|'slider'|'colorPickerSlider'|'colorSpectrum'|'commandBarFlyoutCommandBar'|'navigationViewItemPresenter'|'pivotHeaderItem'|'repeatButton'|'scrollBar'|'thumb'|'progressBar'|'progressRing'|'ratingControl'|'refreshContainer'|'refreshVisualizer'|'richEditBox'|'scrollViewer'|'searchBox'|'semanticZoom'|'settingsFlyout'|'splitButton'|'splitView'|'swipeControl'|'textBox'|'timePicker'|'toggleMenuFlyoutItem'|'toggleSplitButton'|'toggleSwitch'|'toolTip'|'treeView'|'treeViewItem'|'treeViewList'|'twoPaneView';
  padding?: Thickness;
  isTabStop?: boolean;
  isEnabled?: boolean;
  horizontalContentAlignment?: 'left' | 'center' | 'right' | 'stretch';
  foreground?: ColorValue;
  fontStyle?: 'normal' | 'oblique' | 'italic';
  fontStretch?: 'undefined' | 'ultraCondensed' | 'extraCondensed' | 'condensed' | 'semiCondensed' | 'normal' | 'semiExpanded' | 'expanded' | 'extraExpanded' | 'ultraExpanded';
  fontSize?: number;
  tabIndex?: number;
  characterSpacing?: number;
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  tabNavigation?: 'local' | 'cycle' | 'once';
  background?: ColorValue;
  verticalContentAlignment?: 'top' | 'center' | 'bottom' | 'stretch';
  isTextScaleFactorEnabled?: boolean;
  useSystemFocusVisuals?: boolean;
  requiresPointer?: 'never' | 'whenEngaged' | 'whenFocused';
  isFocusEngagementEnabled?: boolean;
  isFocusEngaged?: boolean;
  elementSoundMode?: 'default' | 'focusOnly' | 'off';
  backgroundSizing?: 'innerBorderEdge' | 'outerBorderEdge';
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
  closedDisplayMode?: 'compact' | 'minimal' | 'hidden';
  lightDismissOverlayMode?: 'auto' | 'on' | 'off';
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosing?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpening?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeButtonBaseProps extends NativeContentControlProps {
  type: 'button'|'appBarButton'|'toggleButton'|'appBarToggleButton'|'checkBox'|'dropDownButton'|'hyperlinkButton'|'radioButton'|'inkToolbarBallpointPenButton'|'inkToolbarCustomPenButton'|'inkToolbarCustomToggleButton'|'inkToolbarCustomToolButton'|'inkToolbarEraserButton'|'inkToolbarFlyoutItem'|'inkToolbarHighlighterButton'|'inkToolbarPencilButton'|'inkToolbarRulerButton'|'inkToolbarStencilButton'|'repeatButton';
  commandParameter?: object;
  clickMode?: 'release' | 'press' | 'hover';
  onClick?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeButtonProps extends NativeButtonBaseProps {
  type: 'button'|'appBarButton'|'dropDownButton';
}


export interface NativeAppBarButtonProps extends NativeButtonProps {
  type: 'appBarButton';
  label?: string;
  labelPosition?: 'default' | 'collapsed';
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
  labelPosition?: 'default' | 'collapsed';
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
  lightDismissOverlayMode?: 'auto' | 'on' | 'off';
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
  backgroundSizing?: 'innerBorderEdge' | 'outerBorderEdge';
}


export interface NativeCalendarDatePickerProps extends NativeControlProps {
  type: 'calendarDatePicker';
  placeholderText?: string;
  isTodayHighlighted?: boolean;
  isOutOfScopeEnabled?: boolean;
  isGroupLabelVisible?: boolean;
  isCalendarOpen?: boolean;
  header?: object;
  firstDayOfWeek?: 'sunday' | 'monday' | 'tuesday' | 'wednesday' | 'thursday' | 'friday' | 'saturday';
  displayMode?: 'month' | 'year' | 'decade';
  dayOfWeekFormat?: string;
  dateFormat?: string;
  calendarIdentifier?: string;
  lightDismissOverlayMode?: 'auto' | 'on' | 'off';
  description?: object;
  onCalendarViewDayItemChanging?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onDateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeCalendarViewProps extends NativeControlProps {
  type: 'calendarView';
  horizontalFirstOfMonthLabelAlignment?: 'left' | 'center' | 'right' | 'stretch';
  horizontalDayItemAlignment?: 'left' | 'center' | 'right' | 'stretch';
  focusBorderBrush?: ColorValue;
  firstOfYearDecadeLabelFontStyle?: 'normal' | 'oblique' | 'italic';
  firstOfMonthLabelFontStyle?: 'normal' | 'oblique' | 'italic';
  firstOfMonthLabelFontSize?: number;
  firstDayOfWeek?: 'sunday' | 'monday' | 'tuesday' | 'wednesday' | 'thursday' | 'friday' | 'saturday';
  blackoutForeground?: ColorValue;
  dayOfWeekFormat?: string;
  dayItemFontStyle?: 'normal' | 'oblique' | 'italic';
  dayItemFontSize?: number;
  selectedPressedBorderBrush?: ColorValue;
  calendarItemForeground?: ColorValue;
  calendarItemBorderThickness?: Thickness;
  calendarItemBorderBrush?: ColorValue;
  calendarItemBackground?: ColorValue;
  calendarIdentifier?: string;
  displayMode?: 'month' | 'year' | 'decade';
  hoverBorderBrush?: ColorValue;
  pressedBorderBrush?: ColorValue;
  verticalDayItemAlignment?: 'top' | 'center' | 'bottom' | 'stretch';
  todayForeground?: ColorValue;
  selectionMode?: 'none' | 'single' | 'multiple';
  selectedHoverBorderBrush?: ColorValue;
  selectedForeground?: ColorValue;
  selectedBorderBrush?: ColorValue;
  pressedForeground?: ColorValue;
  verticalFirstOfMonthLabelAlignment?: 'top' | 'center' | 'bottom' | 'stretch';
  outOfScopeForeground?: ColorValue;
  outOfScopeBackground?: ColorValue;
  numberOfWeeksInView?: number;
  monthYearItemFontStyle?: 'normal' | 'oblique' | 'italic';
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
  stretch?: 'none' | 'fill' | 'uniform' | 'uniformToFill';
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
  colorSpectrumShape?: 'box' | 'ring';
  colorSpectrumComponents?: 'hueValue' | 'valueHue' | 'hueSaturation' | 'saturationHue' | 'saturationValue' | 'valueSaturation';
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
  lightDismissOverlayMode?: 'auto' | 'on' | 'off';
  isTextSearchEnabled?: boolean;
  selectionChangedTrigger?: 'committed' | 'always';
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
  overflowButtonVisibility?: 'auto' | 'visible' | 'collapsed';
  isDynamicOverflowEnabled?: boolean;
  defaultLabelPosition?: 'bottom' | 'right' | 'collapsed';
  onDynamicOverflowItemsChanging?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeFlyoutBaseProps extends NativeDependencyObjectProps {
  type: 'commandBarFlyout'|'datePickerFlyout'|'flyout'|'listPickerFlyout'|'menuFlyout'|'menuBarItemFlyout'|'pickerFlyout'|'textCommandBarFlyout'|'timePickerFlyout';
  placement?: 'top' | 'bottom' | 'left' | 'right' | 'full' | 'topEdgeAlignedLeft' | 'topEdgeAlignedRight' | 'bottomEdgeAlignedLeft' | 'bottomEdgeAlignedRight' | 'leftEdgeAlignedTop' | 'leftEdgeAlignedBottom' | 'rightEdgeAlignedTop' | 'rightEdgeAlignedBottom' | 'auto';
  lightDismissOverlayMode?: 'auto' | 'on' | 'off';
  elementSoundMode?: 'default' | 'focusOnly' | 'off';
  allowFocusWhenDisabled?: boolean;
  allowFocusOnInteraction?: boolean;
  showMode?: 'auto' | 'standard' | 'transient' | 'transientWithDismissOnPointerMoveAway';
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
  defaultButton?: 'none' | 'primary' | 'secondary' | 'close';
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
  fontStyle?: 'normal' | 'oblique' | 'italic';
  fontStretch?: 'undefined' | 'ultraCondensed' | 'extraCondensed' | 'condensed' | 'semiCondensed' | 'normal' | 'semiExpanded' | 'expanded' | 'extraExpanded' | 'ultraExpanded';
  fontSize?: number;
  content?: object;
  characterSpacing?: number;
  textLineBounds?: 'full' | 'trimToCapHeight' | 'trimToBaseline' | 'tight';
  opticalMarginAlignment?: 'none' | 'trimSideBearings';
  isTextScaleFactorEnabled?: boolean;
  verticalContentAlignment?: 'top' | 'center' | 'bottom' | 'stretch';
  textWrapping?: 'noWrap' | 'wrap' | 'wrapWholeWords';
  padding?: Thickness;
  maxLines?: number;
  lineStackingStrategy?: 'maxHeight' | 'blockLineHeight' | 'baselineToBaseline';
  lineHeight?: number;
  horizontalContentAlignment?: 'left' | 'center' | 'right' | 'stretch';
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  background?: ColorValue;
  backgroundSizing?: 'innerBorderEdge' | 'outerBorderEdge';
}


export interface NativeDatePickerProps extends NativeControlProps {
  type: 'datePicker';
  yearVisible?: boolean;
  yearFormat?: string;
  orientation?: 'vertical' | 'horizontal';
  monthVisible?: boolean;
  monthFormat?: string;
  header?: object;
  dayVisible?: boolean;
  dayFormat?: string;
  calendarIdentifier?: string;
  lightDismissOverlayMode?: 'auto' | 'on' | 'off';
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
  fontStyle?: 'normal' | 'oblique' | 'italic';
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
  backgroundSizing?: 'innerBorderEdge' | 'outerBorderEdge';
}


export interface NativeListViewBaseProps extends NativeSelectorProps {
  type: 'gridView'|'listView'|'navigationViewList'|'treeViewList';
  selectionMode?: 'none' | 'single' | 'multiple' | 'extended';
  isSwipeEnabled?: boolean;
  isItemClickEnabled?: boolean;
  incrementalLoadingTrigger?: 'none' | 'edge';
  incrementalLoadingThreshold?: number;
  header?: object;
  dataFetchSize?: number;
  canReorderItems?: boolean;
  canDragItems?: boolean;
  showsScrollingPlaceholders?: boolean;
  footer?: object;
  reorderMode?: 'disabled' | 'enabled';
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
  placementAlignment?: 'auto' | 'topLeft' | 'topRight' | 'bottomLeft' | 'bottomRight';
  areCandidatesEnabled?: boolean;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeHubProps extends NativeControlProps {
  type: 'hub';
  orientation?: 'vertical' | 'horizontal';
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
  stretch?: 'none' | 'fill' | 'uniform' | 'uniformToFill';
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
  initialControls?: 'all' | 'none' | 'pensOnly' | 'allExceptPens';
  orientation?: 'vertical' | 'horizontal';
  isStencilButtonChecked?: boolean;
  buttonFlyoutPlacement?: 'auto' | 'top' | 'bottom' | 'left' | 'right';
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
  kind?: 'simple' | 'radio' | 'check' | 'radioCheck';
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
  selectedStencil?: 'ruler' | 'protractor';
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
  orientation?: 'vertical' | 'horizontal';
  groupPadding?: Thickness;
  groupHeaderPlacement?: 'top' | 'left';
  cacheLength?: number;
  areStickyGroupHeadersEnabled?: boolean;
}


export interface NativeItemsWrapGridProps extends NativePanelProps {
  type: 'itemsWrapGrid';
  orientation?: 'vertical' | 'horizontal';
  maximumRowsOrColumns?: number;
  itemWidth?: number;
  itemHeight?: number;
  groupPadding?: Thickness;
  groupHeaderPlacement?: 'top' | 'left';
  cacheLength?: number;
  areStickyGroupHeadersEnabled?: boolean;
}


export interface NativeListBoxProps extends NativeSelectorProps {
  type: 'listBox';
  selectionMode?: 'single' | 'multiple' | 'extended';
  singleSelectionFollowsFocus?: boolean;
}


export interface NativeListBoxItemProps extends NativeSelectorItemProps {
  type: 'listBoxItem';
}


export interface NativeListPickerFlyoutProps extends NativePickerFlyoutBaseProps {
  type: 'listPickerFlyout';
  selectionMode?: 'single' | 'multiple';
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
  watermarkMode?: 'automatic' | 'on';
  trafficFlowVisible?: boolean;
  pedestrianFeaturesVisible?: boolean;
  mapServiceToken?: string;
  heading?: number;
  desiredPitch?: number;
  colorScheme?: 'light' | 'dark';
  landmarksVisible?: boolean;
  rotateInteractionMode?: 'auto' | 'disabled' | 'gestureOnly' | 'pointerAndKeyboard' | 'controlOnly' | 'gestureAndControl' | 'pointerKeyboardAndControl' | 'pointerOnly';
  zoomInteractionMode?: 'auto' | 'disabled' | 'gestureOnly' | 'pointerAndKeyboard' | 'controlOnly' | 'gestureAndControl' | 'pointerKeyboardAndControl' | 'pointerOnly';
  transitFeaturesVisible?: boolean;
  tiltInteractionMode?: 'auto' | 'disabled' | 'gestureOnly' | 'pointerAndKeyboard' | 'controlOnly' | 'gestureAndControl' | 'pointerKeyboardAndControl' | 'pointerOnly';
  businessLandmarksVisible?: boolean;
  panInteractionMode?: 'auto' | 'disabled';
  transitFeaturesEnabled?: boolean;
  businessLandmarksEnabled?: boolean;
  viewPadding?: Thickness;
  mapProjection?: 'webMercator' | 'globe';
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
  stereo3DVideoRenderMode?: 'mono' | 'stereo';
  stereo3DVideoPackingMode?: 'none' | 'sideBySide' | 'topBottom';
  realTimePlayback?: boolean;
  playbackRate?: number;
  autoPlay?: boolean;
  isMuted?: boolean;
  audioDeviceType?: 'console' | 'multimedia' | 'communications';
  audioCategory?: 'other' | 'foregroundOnlyMedia' | 'backgroundCapableMedia' | 'communications' | 'alerts' | 'soundEffects' | 'gameEffects' | 'gameMedia' | 'gameChat' | 'speech' | 'movie' | 'media';
  defaultPlaybackRate?: number;
  isLooping?: boolean;
  balance?: number;
  stretch?: 'none' | 'fill' | 'uniform' | 'uniformToFill';
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
  stretch?: 'none' | 'fill' | 'uniform' | 'uniformToFill';
  isFullWindow?: boolean;
  autoPlay?: boolean;
  areTransportControlsEnabled?: boolean;
}


export interface NativeMediaPlayerPresenterProps extends NativeFrameworkElementProps {
  type: 'mediaPlayerPresenter';
  stretch?: 'none' | 'fill' | 'uniform' | 'uniformToFill';
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
  fastPlayFallbackBehaviour?: 'skip' | 'hide' | 'disable';
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
  isBackButtonVisible?: 'collapsed' | 'visible' | 'auto';
  shoulderNavigationEnabled?: 'whenSelectionFollowsFocus' | 'always' | 'never';
  selectionFollowsFocus?: 'disabled' | 'enabled';
  paneDisplayMode?: 'auto' | 'left' | 'top' | 'leftCompact' | 'leftMinimal';
  overflowLabelMode?: 'moreLabel' | 'noLabel';
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
  type: 'blankUserControl'|'page';
}


export interface NativePageProps extends NativeUserControlProps {
  type: 'page';
}


export interface NativeParallaxViewProps extends NativeFrameworkElementProps {
  type: 'parallaxView';
  verticalSourceStartOffset?: number;
  verticalSourceOffsetKind?: 'absolute' | 'relative';
  verticalSourceEndOffset?: number;
  verticalShift?: number;
  maxVerticalShiftRatio?: number;
  maxHorizontalShiftRatio?: number;
  isVerticalShiftClamped?: boolean;
  isHorizontalShiftClamped?: boolean;
  horizontalSourceStartOffset?: number;
  horizontalSourceOffsetKind?: 'absolute' | 'relative';
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
  textReadingOrder?: 'default' | 'useFlowDirection' | 'detectFromContent';
  passwordRevealMode?: 'peek' | 'hidden' | 'visible';
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
  headerFocusVisualPlacement?: 'itemHeaders' | 'selectedItemHeader';
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
  tickPlacement?: 'none' | 'topLeft' | 'bottomRight' | 'outside' | 'inline';
  tickFrequency?: number;
  stepFrequency?: number;
  snapsTo?: 'stepValues' | 'ticks';
  orientation?: 'vertical' | 'horizontal';
  isThumbToolTipEnabled?: boolean;
  isDirectionReversed?: boolean;
  intermediateValue?: number;
  header?: object;
}


export interface NativeColorPickerSliderProps extends NativeSliderProps {
  type: 'colorPickerSlider';
  colorChannel?: 'hue' | 'saturation' | 'value' | 'alpha';
}


export interface NativeColorSpectrumProps extends NativeControlProps {
  type: 'colorSpectrum';
  shape?: 'box' | 'ring';
  minValue?: number;
  minSaturation?: number;
  minHue?: number;
  maxValue?: number;
  maxSaturation?: number;
  maxHue?: number;
  components?: 'hueValue' | 'valueHue' | 'hueSaturation' | 'saturationHue' | 'saturationValue' | 'valueSaturation';
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
  gridViewItemPresenterVerticalContentAlignment?: 'top' | 'center' | 'bottom' | 'stretch';
  gridViewItemPresenterPadding?: Thickness;
  gridViewItemPresenterHorizontalContentAlignment?: 'left' | 'center' | 'right' | 'stretch';
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
  listViewItemPresenterVerticalContentAlignment?: 'top' | 'center' | 'bottom' | 'stretch';
  listViewItemPresenterPadding?: Thickness;
  listViewItemPresenterHorizontalContentAlignment?: 'left' | 'center' | 'right' | 'stretch';
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
  checkMode?: 'inline' | 'overlay';
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
  lightDismissOverlayMode?: 'auto' | 'on' | 'off';
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
  orientation?: 'vertical' | 'horizontal';
  indicatorMode?: 'none' | 'touchIndicator' | 'mouseIndicator';
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
  pullDirection?: 'leftToRight' | 'topToBottom' | 'rightToLeft' | 'bottomToTop';
  onRefreshRequested?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeRefreshVisualizerProps extends NativeControlProps {
  type: 'refreshVisualizer';
  orientation?: 'auto' | 'normal' | 'rotate90DegreesCounterclockwise' | 'rotate270DegreesCounterclockwise';
  onRefreshRequested?: (event: NativeSyntheticEvent<undefined>) => void;
  onRefreshStateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeRelativePanelProps extends NativePanelProps {
  type: 'relativePanel';
  padding?: Thickness;
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  backgroundSizing?: 'innerBorderEdge' | 'outerBorderEdge';
}


export interface NativeRichEditBoxProps extends NativeControlProps {
  type: 'richEditBox';
  textWrapping?: 'noWrap' | 'wrap' | 'wrapWholeWords';
  textAlignment?: 'center' | 'left' | 'start' | 'right' | 'end' | 'justify' | 'detectFromContent';
  isTextPredictionEnabled?: boolean;
  isSpellCheckEnabled?: boolean;
  isReadOnly?: boolean;
  acceptsReturn?: boolean;
  selectionHighlightColor?: ColorValue;
  preventKeyboardDisplayOnProgrammaticFocus?: boolean;
  placeholderText?: string;
  isColorFontEnabled?: boolean;
  header?: object;
  textReadingOrder?: 'default' | 'useFlowDirection' | 'detectFromContent';
  desiredCandidateWindowAlignment?: 'default' | 'bottomEdge';
  clipboardCopyFormat?: 'allFormats' | 'plainText';
  selectionHighlightColorWhenNotFocused?: ColorValue;
  maxLength?: number;
  horizontalTextAlignment?: 'center' | 'left' | 'start' | 'right' | 'end' | 'justify' | 'detectFromContent';
  disabledFormattingAccelerators?: 'none' | 'bold' | 'italic' | 'underline' | 'all';
  characterCasing?: 'normal' | 'lower' | 'upper';
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
  textWrapping?: 'noWrap' | 'wrap' | 'wrapWholeWords';
  textTrimming?: 'none' | 'characterEllipsis' | 'wordEllipsis' | 'clip';
  textIndent?: number;
  textAlignment?: 'center' | 'left' | 'start' | 'right' | 'end' | 'justify' | 'detectFromContent';
  padding?: Thickness;
  foreground?: ColorValue;
  fontStyle?: 'normal' | 'oblique' | 'italic';
  fontStretch?: 'undefined' | 'ultraCondensed' | 'extraCondensed' | 'condensed' | 'semiCondensed' | 'normal' | 'semiExpanded' | 'expanded' | 'extraExpanded' | 'ultraExpanded';
  fontSize?: number;
  lineStackingStrategy?: 'maxHeight' | 'blockLineHeight' | 'baselineToBaseline';
  characterSpacing?: number;
  lineHeight?: number;
  isTextSelectionEnabled?: boolean;
  textReadingOrder?: 'default' | 'useFlowDirection' | 'detectFromContent';
  textLineBounds?: 'full' | 'trimToCapHeight' | 'trimToBaseline' | 'tight';
  selectionHighlightColor?: ColorValue;
  opticalMarginAlignment?: 'none' | 'trimSideBearings';
  maxLines?: number;
  isColorFontEnabled?: boolean;
  isTextScaleFactorEnabled?: boolean;
  textDecorations?: 'none' | 'underline' | 'strikethrough';
  horizontalTextAlignment?: 'center' | 'left' | 'start' | 'right' | 'end' | 'justify' | 'detectFromContent';
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
  horizontalSnapPointsType?: 'none' | 'optional' | 'mandatory' | 'optionalSingle' | 'mandatorySingle';
  horizontalSnapPointsAlignment?: 'near' | 'center' | 'far';
  horizontalScrollMode?: 'disabled' | 'enabled' | 'auto';
  horizontalScrollBarVisibility?: 'disabled' | 'auto' | 'hidden' | 'visible';
  minZoomFactor?: number;
  maxZoomFactor?: number;
  isZoomInertiaEnabled?: boolean;
  isZoomChainingEnabled?: boolean;
  isVerticalScrollChainingEnabled?: boolean;
  bringIntoViewOnFocusChange?: boolean;
  zoomSnapPointsType?: 'none' | 'optional' | 'mandatory' | 'optionalSingle' | 'mandatorySingle';
  zoomMode?: 'disabled' | 'enabled';
  verticalSnapPointsType?: 'none' | 'optional' | 'mandatory' | 'optionalSingle' | 'mandatorySingle';
  verticalSnapPointsAlignment?: 'near' | 'center' | 'far';
  verticalScrollMode?: 'disabled' | 'enabled' | 'auto';
  verticalScrollBarVisibility?: 'disabled' | 'auto' | 'hidden' | 'visible';
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
  panePlacement?: 'left' | 'right';
  paneBackground?: ColorValue;
  openPaneLength?: number;
  isPaneOpen?: boolean;
  displayMode?: 'overlay' | 'inline' | 'compactOverlay' | 'compactInline';
  compactPaneLength?: number;
  lightDismissOverlayMode?: 'auto' | 'on' | 'off';
  onPaneClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneClosing?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneOpening?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeStackPanelProps extends NativePanelProps {
  type: 'stackPanel';
  orientation?: 'vertical' | 'horizontal';
  areScrollSnapPointsRegular?: boolean;
  padding?: Thickness;
  borderThickness?: Thickness;
  borderBrush?: ColorValue;
  spacing?: number;
  backgroundSizing?: 'innerBorderEdge' | 'outerBorderEdge';
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
  symbol?: 'previous' | 'next' | 'play' | 'pause' | 'edit' | 'save' | 'clear' | 'delete' | 'remove' | 'add' | 'cancel' | 'accept' | 'more' | 'redo' | 'undo' | 'home' | 'up' | 'forward' | 'back' | 'favorite' | 'camera' | 'setting' | 'video' | 'sync' | 'download' | 'mail' | 'find' | 'help' | 'upload' | 'emoji' | 'twoPage' | 'leaveChat' | 'mailForward' | 'clock' | 'send' | 'crop' | 'rotateCamera' | 'people' | 'openPane' | 'closePane' | 'world' | 'flag' | 'previewLink' | 'globe' | 'trim' | 'attachCamera' | 'zoomIn' | 'bookmarks' | 'document' | 'protectedDocument' | 'page' | 'bullets' | 'comment' | 'mailFilled' | 'contactInfo' | 'hangUp' | 'viewAll' | 'mapPin' | 'phone' | 'videoChat' | 'switch' | 'contact' | 'rename' | 'pin' | 'musicInfo' | 'go' | 'keyboard' | 'dockLeft' | 'dockRight' | 'dockBottom' | 'remote' | 'refresh' | 'rotate' | 'shuffle' | 'list' | 'shop' | 'selectAll' | 'orientation' | 'import' | 'importAll' | 'browsePhotos' | 'webCam' | 'pictures' | 'saveLocal' | 'caption' | 'stop' | 'showResults' | 'volume' | 'repair' | 'message' | 'page2' | 'calendarDay' | 'calendarWeek' | 'calendar' | 'character' | 'mailReplyAll' | 'read' | 'link' | 'account' | 'showBcc' | 'hideBcc' | 'cut' | 'attach' | 'paste' | 'filter' | 'copy' | 'emoji2' | 'important' | 'mailReply' | 'slideShow' | 'sort' | 'manage' | 'allApps' | 'disconnectDrive' | 'mapDrive' | 'newWindow' | 'openWith' | 'contactPresence' | 'priority' | 'goToToday' | 'font' | 'fontColor' | 'contact2' | 'folder' | 'audio' | 'placeholder' | 'view' | 'setLockScreen' | 'setTile' | 'closedCaption' | 'stopSlideShow' | 'permissions' | 'highlight' | 'disableUpdates' | 'unFavorite' | 'unPin' | 'openLocal' | 'mute' | 'italic' | 'underline' | 'bold' | 'moveToFolder' | 'likeDislike' | 'dislike' | 'like' | 'alignRight' | 'alignCenter' | 'alignLeft' | 'zoom' | 'zoomOut' | 'openFile' | 'otherUser' | 'admin' | 'street' | 'map' | 'clearSelection' | 'fontDecrease' | 'fontIncrease' | 'fontSize' | 'cellPhone' | 'reShare' | 'tag' | 'repeatOne' | 'repeatAll' | 'outlineStar' | 'solidStar' | 'calculator' | 'directions' | 'target' | 'library' | 'phoneBook' | 'memo' | 'microphone' | 'postUpdate' | 'backToWindow' | 'fullScreen' | 'newFolder' | 'calendarReply' | 'unSyncFolder' | 'reportHacked' | 'syncFolder' | 'blockContact' | 'switchApps' | 'addFriend' | 'touchPointer' | 'goToStart' | 'zeroBars' | 'oneBar' | 'twoBars' | 'threeBars' | 'fourBars' | 'scan' | 'preview' | 'globalNavigationButton' | 'share' | 'print' | 'xboxOneConsole';
}


export interface NativeTextBlockProps extends NativeFrameworkElementProps {
  type: 'textBlock';
  textWrapping?: 'noWrap' | 'wrap' | 'wrapWholeWords';
  textTrimming?: 'none' | 'characterEllipsis' | 'wordEllipsis' | 'clip';
  textAlignment?: 'center' | 'left' | 'start' | 'right' | 'end' | 'justify' | 'detectFromContent';
  text?: string;
  padding?: Thickness;
  foreground?: ColorValue;
  fontStyle?: 'normal' | 'oblique' | 'italic';
  fontStretch?: 'undefined' | 'ultraCondensed' | 'extraCondensed' | 'condensed' | 'semiCondensed' | 'normal' | 'semiExpanded' | 'expanded' | 'extraExpanded' | 'ultraExpanded';
  fontSize?: number;
  lineStackingStrategy?: 'maxHeight' | 'blockLineHeight' | 'baselineToBaseline';
  lineHeight?: number;
  characterSpacing?: number;
  isTextSelectionEnabled?: boolean;
  textReadingOrder?: 'default' | 'useFlowDirection' | 'detectFromContent';
  textLineBounds?: 'full' | 'trimToCapHeight' | 'trimToBaseline' | 'tight';
  selectionHighlightColor?: ColorValue;
  opticalMarginAlignment?: 'none' | 'trimSideBearings';
  maxLines?: number;
  isColorFontEnabled?: boolean;
  isTextScaleFactorEnabled?: boolean;
  textDecorations?: 'none' | 'underline' | 'strikethrough';
  horizontalTextAlignment?: 'center' | 'left' | 'start' | 'right' | 'end' | 'justify' | 'detectFromContent';
  onContextMenuOpening?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onIsTextTrimmedChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeTextBoxProps extends NativeControlProps {
  type: 'textBox';
  textWrapping?: 'noWrap' | 'wrap' | 'wrapWholeWords';
  textAlignment?: 'center' | 'left' | 'start' | 'right' | 'end' | 'justify' | 'detectFromContent';
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
  desiredCandidateWindowAlignment?: 'default' | 'bottomEdge';
  textReadingOrder?: 'default' | 'useFlowDirection' | 'detectFromContent';
  selectionHighlightColorWhenNotFocused?: ColorValue;
  placeholderForeground?: ColorValue;
  horizontalTextAlignment?: 'center' | 'left' | 'start' | 'right' | 'end' | 'justify' | 'detectFromContent';
  characterCasing?: 'normal' | 'lower' | 'upper';
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
  lightDismissOverlayMode?: 'auto' | 'on' | 'off';
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
  placement?: 'bottom' | 'left' | 'mouse' | 'right' | 'top';
  isOpen?: boolean;
  horizontalOffset?: number;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeTreeViewProps extends NativeControlProps {
  type: 'treeView';
  selectionMode?: 'none' | 'single' | 'multiple';
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
  wideModeConfiguration?: 'singlePane' | 'leftRight' | 'rightLeft';
  tallModeConfiguration?: 'singlePane' | 'topBottom' | 'bottomTop';
  panePriority?: 'pane1' | 'pane2';
  minWideModeWidth?: number;
  minTallModeHeight?: number;
  onModeChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeVariableSizedWrapGridProps extends NativePanelProps {
  type: 'variableSizedWrapGrid';
  verticalChildrenAlignment?: 'top' | 'center' | 'bottom' | 'stretch';
  orientation?: 'vertical' | 'horizontal';
  maximumRowsOrColumns?: number;
  itemWidth?: number;
  itemHeight?: number;
  horizontalChildrenAlignment?: 'left' | 'center' | 'right' | 'stretch';
}


export interface NativeViewboxProps extends NativeFrameworkElementProps {
  type: 'viewbox';
  stretchDirection?: 'upOnly' | 'downOnly' | 'both';
  stretch?: 'none' | 'fill' | 'uniform' | 'uniformToFill';
}


export interface NativeVirtualizingStackPanelProps extends NativeOrientedVirtualizingPanelProps {
  type: 'virtualizingStackPanel';
  orientation?: 'vertical' | 'horizontal';
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
  verticalChildrenAlignment?: 'top' | 'center' | 'bottom' | 'stretch';
  orientation?: 'vertical' | 'horizontal';
  maximumRowsOrColumns?: number;
  itemWidth?: number;
  itemHeight?: number;
  horizontalChildrenAlignment?: 'left' | 'center' | 'right' | 'stretch';
}


export interface NativeGlyphsProps extends NativeFrameworkElementProps {
  type: 'glyphs';
  unicodeString?: string;
  styleSimulations?: 'none' | 'boldSimulation' | 'italicSimulation' | 'boldItalicSimulation';
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
  strokeStartLineCap?: 'flat' | 'square' | 'round' | 'triangle';
  strokeMiterLimit?: number;
  strokeLineJoin?: 'miter' | 'bevel' | 'round';
  strokeEndLineCap?: 'flat' | 'square' | 'round' | 'triangle';
  strokeDashOffset?: number;
  strokeDashCap?: 'flat' | 'square' | 'round' | 'triangle';
  stroke?: ColorValue;
  stretch?: 'none' | 'fill' | 'uniform' | 'uniformToFill';
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
  fillRule?: 'evenOdd' | 'nonzero';
}


export interface NativePolylineProps extends NativeShapeProps {
  type: 'polyline';
  fillRule?: 'evenOdd' | 'nonzero';
}


export interface NativeRectangleProps extends NativeShapeProps {
  type: 'rectangle';
  radiusY?: number;
  radiusX?: number;
}


export type XamlControlProps = NativeBlankUserControlProps 
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
	 |  NativeGlyphsProps 
	 |  NativeShapeProps 
	 |  NativeEllipseProps 
	 |  NativeLineProps 
	 |  NativePathProps 
	 |  NativePolygonProps 
	 |  NativePolylineProps 
	 |  NativeRectangleProps 
	;
