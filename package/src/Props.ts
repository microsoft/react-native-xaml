import type { ViewProps, NativeSyntheticEvent, ColorValue } from 'react-native';
import type * as Enums from './Enums';

export type Thickness = number | { left: number, top: number, right: number, bottom: number };

export type GridLength = number | '*' | 'auto' | `${number}*`;

export type CornerRadius = number | { topLeft: number, topRight: number, bottomLeft: number, bottomRight: number};


export interface NativeDependencyObjectProps extends ViewProps {
  type: 'Windows.UI.Xaml.Controls.ContentControl'|'Windows.UI.Xaml.Controls.AppBar'|'Windows.UI.Xaml.Controls.Button'|'Windows.UI.Xaml.Controls.AppBarButton'|'Windows.UI.Xaml.Controls.AppBarElementContainer'|'Windows.UI.Xaml.Controls.AppBarSeparator'|'Windows.UI.Xaml.Controls.Primitives.ToggleButton'|'Windows.UI.Xaml.Controls.AppBarToggleButton'|'Windows.UI.Xaml.Controls.ItemsControl'|'Windows.UI.Xaml.Controls.AutoSuggestBox'|'Windows.UI.Xaml.Controls.BitmapIcon'|'Windows.UI.Xaml.Controls.Border'|'Windows.UI.Xaml.Controls.CalendarDatePicker'|'Windows.UI.Xaml.Controls.CalendarView'|'Windows.UI.Xaml.Controls.CalendarViewDayItem'|'Windows.UI.Xaml.Controls.Canvas'|'Windows.UI.Xaml.Controls.CaptureElement'|'Windows.UI.Xaml.Controls.CheckBox'|'Windows.UI.Xaml.Controls.ColorPicker'|'Windows.UI.Xaml.Controls.ComboBox'|'Windows.UI.Xaml.Controls.ComboBoxItem'|'Windows.UI.Xaml.Controls.CommandBar'|'Windows.UI.Xaml.Controls.CommandBarFlyout'|'Windows.UI.Xaml.Controls.CommandBarOverflowPresenter'|'Windows.UI.Xaml.Controls.ContentDialog'|'Windows.UI.Xaml.Controls.ContentPresenter'|'Windows.UI.Xaml.Controls.DatePicker'|'Windows.UI.Xaml.Controls.DatePickerFlyout'|'Windows.UI.Xaml.Controls.DropDownButton'|'Windows.UI.Xaml.Controls.FlipView'|'Windows.UI.Xaml.Controls.FlipViewItem'|'Windows.UI.Xaml.Controls.Flyout'|'Windows.UI.Xaml.Controls.FlyoutPresenter'|'Windows.UI.Xaml.Controls.FontIcon'|'Windows.UI.Xaml.Controls.Frame'|'Windows.UI.Xaml.Controls.Grid'|'Windows.UI.Xaml.Controls.GridView'|'Windows.UI.Xaml.Controls.GridViewHeaderItem'|'Windows.UI.Xaml.Controls.GridViewItem'|'Windows.UI.Xaml.Controls.GroupItem'|'Windows.UI.Xaml.Controls.HandwritingView'|'Windows.UI.Xaml.Controls.Hub'|'Windows.UI.Xaml.Controls.HubSection'|'Windows.UI.Xaml.Controls.HyperlinkButton'|'Windows.UI.Xaml.Controls.IconSourceElement'|'Windows.UI.Xaml.Controls.Image'|'Windows.UI.Xaml.Controls.InkCanvas'|'Windows.UI.Xaml.Controls.InkToolbar'|'Windows.UI.Xaml.Controls.RadioButton'|'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton'|'Windows.UI.Xaml.Controls.InkToolbarEraserButton'|'Windows.UI.Xaml.Controls.InkToolbarFlyoutItem'|'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton'|'Windows.UI.Xaml.Controls.InkToolbarPenConfigurationControl'|'Windows.UI.Xaml.Controls.InkToolbarPencilButton'|'Windows.UI.Xaml.Controls.InkToolbarRulerButton'|'Windows.UI.Xaml.Controls.InkToolbarStencilButton'|'Windows.UI.Xaml.Controls.ItemsPresenter'|'Windows.UI.Xaml.Controls.ItemsStackPanel'|'Windows.UI.Xaml.Controls.ItemsWrapGrid'|'Windows.UI.Xaml.Controls.ListBox'|'Windows.UI.Xaml.Controls.ListBoxItem'|'Windows.UI.Xaml.Controls.ListPickerFlyout'|'Windows.UI.Xaml.Controls.ListView'|'Windows.UI.Xaml.Controls.ListViewHeaderItem'|'Windows.UI.Xaml.Controls.ListViewItem'|'Windows.UI.Xaml.Controls.Maps.MapControl'|'Windows.UI.Xaml.Controls.MediaElement'|'Windows.UI.Xaml.Controls.MediaPlayerElement'|'Windows.UI.Xaml.Controls.MediaPlayerPresenter'|'Windows.UI.Xaml.Controls.MediaTransportControls'|'Windows.UI.Xaml.Controls.MenuBar'|'Windows.UI.Xaml.Controls.MenuBarItem'|'Windows.UI.Xaml.Controls.MenuFlyout'|'Windows.UI.Xaml.Controls.MenuBarItemFlyout'|'Windows.UI.Xaml.Controls.MenuFlyoutItem'|'Windows.UI.Xaml.Controls.MenuFlyoutPresenter'|'Windows.UI.Xaml.Controls.MenuFlyoutSeparator'|'Windows.UI.Xaml.Controls.MenuFlyoutSubItem'|'Windows.UI.Xaml.Controls.NavigationView'|'Windows.UI.Xaml.Controls.NavigationViewItem'|'Windows.UI.Xaml.Controls.NavigationViewItemHeader'|'Windows.UI.Xaml.Controls.NavigationViewItemSeparator'|'Windows.UI.Xaml.Controls.NavigationViewList'|'Windows.UI.Xaml.Controls.UserControl'|'Windows.UI.Xaml.Controls.Page'|'Windows.UI.Xaml.Controls.ParallaxView'|'Windows.UI.Xaml.Controls.PasswordBox'|'Windows.UI.Xaml.Controls.PathIcon'|'Windows.UI.Xaml.Controls.PersonPicture'|'Windows.UI.Xaml.Controls.PickerFlyout'|'Windows.UI.Xaml.Controls.Pivot'|'Windows.UI.Xaml.Controls.PivotItem'|'Windows.UI.Xaml.Controls.Primitives.CalendarPanel'|'Windows.UI.Xaml.Controls.Primitives.CarouselPanel'|'Windows.UI.Xaml.Controls.Slider'|'Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider'|'Windows.UI.Xaml.Controls.Primitives.ColorSpectrum'|'Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar'|'Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter'|'Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter'|'Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter'|'Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem'|'Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel'|'Windows.UI.Xaml.Controls.Primitives.PivotPanel'|'Windows.UI.Xaml.Controls.Primitives.Popup'|'Windows.UI.Xaml.Controls.Primitives.RepeatButton'|'Windows.UI.Xaml.Controls.Primitives.ScrollBar'|'Windows.UI.Xaml.Controls.Primitives.Thumb'|'Windows.UI.Xaml.Controls.Primitives.TickBar'|'Windows.UI.Xaml.Controls.ProgressBar'|'Windows.UI.Xaml.Controls.ProgressRing'|'Windows.UI.Xaml.Controls.RatingControl'|'Windows.UI.Xaml.Controls.RefreshContainer'|'Windows.UI.Xaml.Controls.RefreshVisualizer'|'Windows.UI.Xaml.Controls.RelativePanel'|'Windows.UI.Xaml.Controls.RichEditBox'|'Windows.UI.Xaml.Controls.RichTextBlock'|'Windows.UI.Xaml.Controls.RichTextBlockOverflow'|'Windows.UI.Xaml.Controls.ScrollContentPresenter'|'Windows.UI.Xaml.Controls.ScrollViewer'|'Windows.UI.Xaml.Controls.SearchBox'|'Windows.UI.Xaml.Controls.SemanticZoom'|'Windows.UI.Xaml.Controls.SettingsFlyout'|'Windows.UI.Xaml.Controls.SplitButton'|'Windows.UI.Xaml.Controls.SplitView'|'Windows.UI.Xaml.Controls.StackPanel'|'Windows.UI.Xaml.Controls.SwapChainBackgroundPanel'|'Windows.UI.Xaml.Controls.SwapChainPanel'|'Windows.UI.Xaml.Controls.SwipeControl'|'Windows.UI.Xaml.Controls.SymbolIcon'|'Windows.UI.Xaml.Controls.TextBlock'|'Windows.UI.Xaml.Controls.TextBox'|'Windows.UI.Xaml.Controls.TextCommandBarFlyout'|'Windows.UI.Xaml.Controls.TimePicker'|'Windows.UI.Xaml.Controls.TimePickerFlyout'|'Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem'|'Windows.UI.Xaml.Controls.ToggleSplitButton'|'Windows.UI.Xaml.Controls.ToggleSwitch'|'Windows.UI.Xaml.Controls.ToolTip'|'Windows.UI.Xaml.Controls.TreeView'|'Windows.UI.Xaml.Controls.TreeViewItem'|'Windows.UI.Xaml.Controls.TreeViewList'|'Windows.UI.Xaml.Controls.TwoPaneView'|'Windows.UI.Xaml.Controls.VariableSizedWrapGrid'|'Windows.UI.Xaml.Controls.Viewbox'|'Windows.UI.Xaml.Controls.VirtualizingStackPanel'|'Windows.UI.Xaml.Controls.WebView'|'Windows.UI.Xaml.Controls.WrapGrid'|'Windows.UI.Xaml.Documents.Span'|'Windows.UI.Xaml.Documents.Bold'|'Windows.UI.Xaml.Documents.ContentLink'|'Windows.UI.Xaml.Documents.Glyphs'|'Windows.UI.Xaml.Documents.Hyperlink'|'Windows.UI.Xaml.Documents.InlineUIContainer'|'Windows.UI.Xaml.Documents.Italic'|'Windows.UI.Xaml.Documents.LineBreak'|'Windows.UI.Xaml.Documents.Paragraph'|'Windows.UI.Xaml.Documents.Run'|'Windows.UI.Xaml.Documents.Underline'|'Windows.UI.Xaml.Input.KeyboardAccelerator'|'Windows.UI.Xaml.Shapes.Ellipse'|'Windows.UI.Xaml.Shapes.Line'|'Windows.UI.Xaml.Shapes.Path'|'Windows.UI.Xaml.Shapes.Polygon'|'Windows.UI.Xaml.Shapes.Polyline'|'Windows.UI.Xaml.Shapes.Rectangle';
}


export interface NativeUIElementProps extends NativeDependencyObjectProps {
  type: 'Windows.UI.Xaml.Controls.ContentControl'|'Windows.UI.Xaml.Controls.AppBar'|'Windows.UI.Xaml.Controls.Button'|'Windows.UI.Xaml.Controls.AppBarButton'|'Windows.UI.Xaml.Controls.AppBarElementContainer'|'Windows.UI.Xaml.Controls.AppBarSeparator'|'Windows.UI.Xaml.Controls.Primitives.ToggleButton'|'Windows.UI.Xaml.Controls.AppBarToggleButton'|'Windows.UI.Xaml.Controls.ItemsControl'|'Windows.UI.Xaml.Controls.AutoSuggestBox'|'Windows.UI.Xaml.Controls.BitmapIcon'|'Windows.UI.Xaml.Controls.Border'|'Windows.UI.Xaml.Controls.CalendarDatePicker'|'Windows.UI.Xaml.Controls.CalendarView'|'Windows.UI.Xaml.Controls.CalendarViewDayItem'|'Windows.UI.Xaml.Controls.Canvas'|'Windows.UI.Xaml.Controls.CaptureElement'|'Windows.UI.Xaml.Controls.CheckBox'|'Windows.UI.Xaml.Controls.ColorPicker'|'Windows.UI.Xaml.Controls.ComboBox'|'Windows.UI.Xaml.Controls.ComboBoxItem'|'Windows.UI.Xaml.Controls.CommandBar'|'Windows.UI.Xaml.Controls.CommandBarOverflowPresenter'|'Windows.UI.Xaml.Controls.ContentDialog'|'Windows.UI.Xaml.Controls.ContentPresenter'|'Windows.UI.Xaml.Controls.DatePicker'|'Windows.UI.Xaml.Controls.DropDownButton'|'Windows.UI.Xaml.Controls.FlipView'|'Windows.UI.Xaml.Controls.FlipViewItem'|'Windows.UI.Xaml.Controls.FlyoutPresenter'|'Windows.UI.Xaml.Controls.FontIcon'|'Windows.UI.Xaml.Controls.Frame'|'Windows.UI.Xaml.Controls.Grid'|'Windows.UI.Xaml.Controls.GridView'|'Windows.UI.Xaml.Controls.GridViewHeaderItem'|'Windows.UI.Xaml.Controls.GridViewItem'|'Windows.UI.Xaml.Controls.GroupItem'|'Windows.UI.Xaml.Controls.HandwritingView'|'Windows.UI.Xaml.Controls.Hub'|'Windows.UI.Xaml.Controls.HubSection'|'Windows.UI.Xaml.Controls.HyperlinkButton'|'Windows.UI.Xaml.Controls.IconSourceElement'|'Windows.UI.Xaml.Controls.Image'|'Windows.UI.Xaml.Controls.InkCanvas'|'Windows.UI.Xaml.Controls.InkToolbar'|'Windows.UI.Xaml.Controls.RadioButton'|'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton'|'Windows.UI.Xaml.Controls.InkToolbarEraserButton'|'Windows.UI.Xaml.Controls.InkToolbarFlyoutItem'|'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton'|'Windows.UI.Xaml.Controls.InkToolbarPenConfigurationControl'|'Windows.UI.Xaml.Controls.InkToolbarPencilButton'|'Windows.UI.Xaml.Controls.InkToolbarRulerButton'|'Windows.UI.Xaml.Controls.InkToolbarStencilButton'|'Windows.UI.Xaml.Controls.ItemsPresenter'|'Windows.UI.Xaml.Controls.ItemsStackPanel'|'Windows.UI.Xaml.Controls.ItemsWrapGrid'|'Windows.UI.Xaml.Controls.ListBox'|'Windows.UI.Xaml.Controls.ListBoxItem'|'Windows.UI.Xaml.Controls.ListView'|'Windows.UI.Xaml.Controls.ListViewHeaderItem'|'Windows.UI.Xaml.Controls.ListViewItem'|'Windows.UI.Xaml.Controls.Maps.MapControl'|'Windows.UI.Xaml.Controls.MediaElement'|'Windows.UI.Xaml.Controls.MediaPlayerElement'|'Windows.UI.Xaml.Controls.MediaPlayerPresenter'|'Windows.UI.Xaml.Controls.MediaTransportControls'|'Windows.UI.Xaml.Controls.MenuBar'|'Windows.UI.Xaml.Controls.MenuBarItem'|'Windows.UI.Xaml.Controls.MenuFlyoutItem'|'Windows.UI.Xaml.Controls.MenuFlyoutPresenter'|'Windows.UI.Xaml.Controls.MenuFlyoutSeparator'|'Windows.UI.Xaml.Controls.MenuFlyoutSubItem'|'Windows.UI.Xaml.Controls.NavigationView'|'Windows.UI.Xaml.Controls.NavigationViewItem'|'Windows.UI.Xaml.Controls.NavigationViewItemHeader'|'Windows.UI.Xaml.Controls.NavigationViewItemSeparator'|'Windows.UI.Xaml.Controls.NavigationViewList'|'Windows.UI.Xaml.Controls.UserControl'|'Windows.UI.Xaml.Controls.Page'|'Windows.UI.Xaml.Controls.ParallaxView'|'Windows.UI.Xaml.Controls.PasswordBox'|'Windows.UI.Xaml.Controls.PathIcon'|'Windows.UI.Xaml.Controls.PersonPicture'|'Windows.UI.Xaml.Controls.Pivot'|'Windows.UI.Xaml.Controls.PivotItem'|'Windows.UI.Xaml.Controls.Primitives.CalendarPanel'|'Windows.UI.Xaml.Controls.Primitives.CarouselPanel'|'Windows.UI.Xaml.Controls.Slider'|'Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider'|'Windows.UI.Xaml.Controls.Primitives.ColorSpectrum'|'Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar'|'Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter'|'Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter'|'Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter'|'Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem'|'Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel'|'Windows.UI.Xaml.Controls.Primitives.PivotPanel'|'Windows.UI.Xaml.Controls.Primitives.Popup'|'Windows.UI.Xaml.Controls.Primitives.RepeatButton'|'Windows.UI.Xaml.Controls.Primitives.ScrollBar'|'Windows.UI.Xaml.Controls.Primitives.Thumb'|'Windows.UI.Xaml.Controls.Primitives.TickBar'|'Windows.UI.Xaml.Controls.ProgressBar'|'Windows.UI.Xaml.Controls.ProgressRing'|'Windows.UI.Xaml.Controls.RatingControl'|'Windows.UI.Xaml.Controls.RefreshContainer'|'Windows.UI.Xaml.Controls.RefreshVisualizer'|'Windows.UI.Xaml.Controls.RelativePanel'|'Windows.UI.Xaml.Controls.RichEditBox'|'Windows.UI.Xaml.Controls.RichTextBlock'|'Windows.UI.Xaml.Controls.RichTextBlockOverflow'|'Windows.UI.Xaml.Controls.ScrollContentPresenter'|'Windows.UI.Xaml.Controls.ScrollViewer'|'Windows.UI.Xaml.Controls.SearchBox'|'Windows.UI.Xaml.Controls.SemanticZoom'|'Windows.UI.Xaml.Controls.SettingsFlyout'|'Windows.UI.Xaml.Controls.SplitButton'|'Windows.UI.Xaml.Controls.SplitView'|'Windows.UI.Xaml.Controls.StackPanel'|'Windows.UI.Xaml.Controls.SwapChainBackgroundPanel'|'Windows.UI.Xaml.Controls.SwapChainPanel'|'Windows.UI.Xaml.Controls.SwipeControl'|'Windows.UI.Xaml.Controls.SymbolIcon'|'Windows.UI.Xaml.Controls.TextBlock'|'Windows.UI.Xaml.Controls.TextBox'|'Windows.UI.Xaml.Controls.TimePicker'|'Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem'|'Windows.UI.Xaml.Controls.ToggleSplitButton'|'Windows.UI.Xaml.Controls.ToggleSwitch'|'Windows.UI.Xaml.Controls.ToolTip'|'Windows.UI.Xaml.Controls.TreeView'|'Windows.UI.Xaml.Controls.TreeViewItem'|'Windows.UI.Xaml.Controls.TreeViewList'|'Windows.UI.Xaml.Controls.TwoPaneView'|'Windows.UI.Xaml.Controls.VariableSizedWrapGrid'|'Windows.UI.Xaml.Controls.Viewbox'|'Windows.UI.Xaml.Controls.VirtualizingStackPanel'|'Windows.UI.Xaml.Controls.WebView'|'Windows.UI.Xaml.Controls.WrapGrid'|'Windows.UI.Xaml.Documents.Glyphs'|'Windows.UI.Xaml.Shapes.Ellipse'|'Windows.UI.Xaml.Shapes.Line'|'Windows.UI.Xaml.Shapes.Path'|'Windows.UI.Xaml.Shapes.Polygon'|'Windows.UI.Xaml.Shapes.Polyline'|'Windows.UI.Xaml.Shapes.Rectangle';
  /**
  * A hint of where this item should be placed within its parent.
  */
  priority?: number; // synthetic property
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
  type: 'Windows.UI.Xaml.Controls.ContentControl'|'Windows.UI.Xaml.Controls.AppBar'|'Windows.UI.Xaml.Controls.Button'|'Windows.UI.Xaml.Controls.AppBarButton'|'Windows.UI.Xaml.Controls.AppBarElementContainer'|'Windows.UI.Xaml.Controls.AppBarSeparator'|'Windows.UI.Xaml.Controls.Primitives.ToggleButton'|'Windows.UI.Xaml.Controls.AppBarToggleButton'|'Windows.UI.Xaml.Controls.ItemsControl'|'Windows.UI.Xaml.Controls.AutoSuggestBox'|'Windows.UI.Xaml.Controls.BitmapIcon'|'Windows.UI.Xaml.Controls.Border'|'Windows.UI.Xaml.Controls.CalendarDatePicker'|'Windows.UI.Xaml.Controls.CalendarView'|'Windows.UI.Xaml.Controls.CalendarViewDayItem'|'Windows.UI.Xaml.Controls.Canvas'|'Windows.UI.Xaml.Controls.CaptureElement'|'Windows.UI.Xaml.Controls.CheckBox'|'Windows.UI.Xaml.Controls.ColorPicker'|'Windows.UI.Xaml.Controls.ComboBox'|'Windows.UI.Xaml.Controls.ComboBoxItem'|'Windows.UI.Xaml.Controls.CommandBar'|'Windows.UI.Xaml.Controls.CommandBarOverflowPresenter'|'Windows.UI.Xaml.Controls.ContentDialog'|'Windows.UI.Xaml.Controls.ContentPresenter'|'Windows.UI.Xaml.Controls.DatePicker'|'Windows.UI.Xaml.Controls.DropDownButton'|'Windows.UI.Xaml.Controls.FlipView'|'Windows.UI.Xaml.Controls.FlipViewItem'|'Windows.UI.Xaml.Controls.FlyoutPresenter'|'Windows.UI.Xaml.Controls.FontIcon'|'Windows.UI.Xaml.Controls.Frame'|'Windows.UI.Xaml.Controls.Grid'|'Windows.UI.Xaml.Controls.GridView'|'Windows.UI.Xaml.Controls.GridViewHeaderItem'|'Windows.UI.Xaml.Controls.GridViewItem'|'Windows.UI.Xaml.Controls.GroupItem'|'Windows.UI.Xaml.Controls.HandwritingView'|'Windows.UI.Xaml.Controls.Hub'|'Windows.UI.Xaml.Controls.HubSection'|'Windows.UI.Xaml.Controls.HyperlinkButton'|'Windows.UI.Xaml.Controls.IconSourceElement'|'Windows.UI.Xaml.Controls.Image'|'Windows.UI.Xaml.Controls.InkCanvas'|'Windows.UI.Xaml.Controls.InkToolbar'|'Windows.UI.Xaml.Controls.RadioButton'|'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton'|'Windows.UI.Xaml.Controls.InkToolbarEraserButton'|'Windows.UI.Xaml.Controls.InkToolbarFlyoutItem'|'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton'|'Windows.UI.Xaml.Controls.InkToolbarPenConfigurationControl'|'Windows.UI.Xaml.Controls.InkToolbarPencilButton'|'Windows.UI.Xaml.Controls.InkToolbarRulerButton'|'Windows.UI.Xaml.Controls.InkToolbarStencilButton'|'Windows.UI.Xaml.Controls.ItemsPresenter'|'Windows.UI.Xaml.Controls.ItemsStackPanel'|'Windows.UI.Xaml.Controls.ItemsWrapGrid'|'Windows.UI.Xaml.Controls.ListBox'|'Windows.UI.Xaml.Controls.ListBoxItem'|'Windows.UI.Xaml.Controls.ListView'|'Windows.UI.Xaml.Controls.ListViewHeaderItem'|'Windows.UI.Xaml.Controls.ListViewItem'|'Windows.UI.Xaml.Controls.Maps.MapControl'|'Windows.UI.Xaml.Controls.MediaElement'|'Windows.UI.Xaml.Controls.MediaPlayerElement'|'Windows.UI.Xaml.Controls.MediaPlayerPresenter'|'Windows.UI.Xaml.Controls.MediaTransportControls'|'Windows.UI.Xaml.Controls.MenuBar'|'Windows.UI.Xaml.Controls.MenuBarItem'|'Windows.UI.Xaml.Controls.MenuFlyoutItem'|'Windows.UI.Xaml.Controls.MenuFlyoutPresenter'|'Windows.UI.Xaml.Controls.MenuFlyoutSeparator'|'Windows.UI.Xaml.Controls.MenuFlyoutSubItem'|'Windows.UI.Xaml.Controls.NavigationView'|'Windows.UI.Xaml.Controls.NavigationViewItem'|'Windows.UI.Xaml.Controls.NavigationViewItemHeader'|'Windows.UI.Xaml.Controls.NavigationViewItemSeparator'|'Windows.UI.Xaml.Controls.NavigationViewList'|'Windows.UI.Xaml.Controls.UserControl'|'Windows.UI.Xaml.Controls.Page'|'Windows.UI.Xaml.Controls.ParallaxView'|'Windows.UI.Xaml.Controls.PasswordBox'|'Windows.UI.Xaml.Controls.PathIcon'|'Windows.UI.Xaml.Controls.PersonPicture'|'Windows.UI.Xaml.Controls.Pivot'|'Windows.UI.Xaml.Controls.PivotItem'|'Windows.UI.Xaml.Controls.Primitives.CalendarPanel'|'Windows.UI.Xaml.Controls.Primitives.CarouselPanel'|'Windows.UI.Xaml.Controls.Slider'|'Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider'|'Windows.UI.Xaml.Controls.Primitives.ColorSpectrum'|'Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar'|'Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter'|'Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter'|'Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter'|'Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem'|'Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel'|'Windows.UI.Xaml.Controls.Primitives.PivotPanel'|'Windows.UI.Xaml.Controls.Primitives.Popup'|'Windows.UI.Xaml.Controls.Primitives.RepeatButton'|'Windows.UI.Xaml.Controls.Primitives.ScrollBar'|'Windows.UI.Xaml.Controls.Primitives.Thumb'|'Windows.UI.Xaml.Controls.Primitives.TickBar'|'Windows.UI.Xaml.Controls.ProgressBar'|'Windows.UI.Xaml.Controls.ProgressRing'|'Windows.UI.Xaml.Controls.RatingControl'|'Windows.UI.Xaml.Controls.RefreshContainer'|'Windows.UI.Xaml.Controls.RefreshVisualizer'|'Windows.UI.Xaml.Controls.RelativePanel'|'Windows.UI.Xaml.Controls.RichEditBox'|'Windows.UI.Xaml.Controls.RichTextBlock'|'Windows.UI.Xaml.Controls.RichTextBlockOverflow'|'Windows.UI.Xaml.Controls.ScrollContentPresenter'|'Windows.UI.Xaml.Controls.ScrollViewer'|'Windows.UI.Xaml.Controls.SearchBox'|'Windows.UI.Xaml.Controls.SemanticZoom'|'Windows.UI.Xaml.Controls.SettingsFlyout'|'Windows.UI.Xaml.Controls.SplitButton'|'Windows.UI.Xaml.Controls.SplitView'|'Windows.UI.Xaml.Controls.StackPanel'|'Windows.UI.Xaml.Controls.SwapChainBackgroundPanel'|'Windows.UI.Xaml.Controls.SwapChainPanel'|'Windows.UI.Xaml.Controls.SwipeControl'|'Windows.UI.Xaml.Controls.SymbolIcon'|'Windows.UI.Xaml.Controls.TextBlock'|'Windows.UI.Xaml.Controls.TextBox'|'Windows.UI.Xaml.Controls.TimePicker'|'Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem'|'Windows.UI.Xaml.Controls.ToggleSplitButton'|'Windows.UI.Xaml.Controls.ToggleSwitch'|'Windows.UI.Xaml.Controls.ToolTip'|'Windows.UI.Xaml.Controls.TreeView'|'Windows.UI.Xaml.Controls.TreeViewItem'|'Windows.UI.Xaml.Controls.TreeViewList'|'Windows.UI.Xaml.Controls.TwoPaneView'|'Windows.UI.Xaml.Controls.VariableSizedWrapGrid'|'Windows.UI.Xaml.Controls.Viewbox'|'Windows.UI.Xaml.Controls.VirtualizingStackPanel'|'Windows.UI.Xaml.Controls.WebView'|'Windows.UI.Xaml.Controls.WrapGrid'|'Windows.UI.Xaml.Documents.Glyphs'|'Windows.UI.Xaml.Shapes.Ellipse'|'Windows.UI.Xaml.Shapes.Line'|'Windows.UI.Xaml.Shapes.Path'|'Windows.UI.Xaml.Shapes.Polygon'|'Windows.UI.Xaml.Shapes.Polyline'|'Windows.UI.Xaml.Shapes.Rectangle';
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
  type: 'Windows.UI.Xaml.Controls.ContentControl'|'Windows.UI.Xaml.Controls.AppBar'|'Windows.UI.Xaml.Controls.Button'|'Windows.UI.Xaml.Controls.AppBarButton'|'Windows.UI.Xaml.Controls.AppBarElementContainer'|'Windows.UI.Xaml.Controls.AppBarSeparator'|'Windows.UI.Xaml.Controls.Primitives.ToggleButton'|'Windows.UI.Xaml.Controls.AppBarToggleButton'|'Windows.UI.Xaml.Controls.ItemsControl'|'Windows.UI.Xaml.Controls.AutoSuggestBox'|'Windows.UI.Xaml.Controls.CalendarDatePicker'|'Windows.UI.Xaml.Controls.CalendarView'|'Windows.UI.Xaml.Controls.CalendarViewDayItem'|'Windows.UI.Xaml.Controls.CheckBox'|'Windows.UI.Xaml.Controls.ColorPicker'|'Windows.UI.Xaml.Controls.ComboBox'|'Windows.UI.Xaml.Controls.ComboBoxItem'|'Windows.UI.Xaml.Controls.CommandBar'|'Windows.UI.Xaml.Controls.CommandBarOverflowPresenter'|'Windows.UI.Xaml.Controls.ContentDialog'|'Windows.UI.Xaml.Controls.DatePicker'|'Windows.UI.Xaml.Controls.DropDownButton'|'Windows.UI.Xaml.Controls.FlipView'|'Windows.UI.Xaml.Controls.FlipViewItem'|'Windows.UI.Xaml.Controls.FlyoutPresenter'|'Windows.UI.Xaml.Controls.Frame'|'Windows.UI.Xaml.Controls.GridView'|'Windows.UI.Xaml.Controls.GridViewHeaderItem'|'Windows.UI.Xaml.Controls.GridViewItem'|'Windows.UI.Xaml.Controls.GroupItem'|'Windows.UI.Xaml.Controls.HandwritingView'|'Windows.UI.Xaml.Controls.Hub'|'Windows.UI.Xaml.Controls.HubSection'|'Windows.UI.Xaml.Controls.HyperlinkButton'|'Windows.UI.Xaml.Controls.InkToolbar'|'Windows.UI.Xaml.Controls.RadioButton'|'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton'|'Windows.UI.Xaml.Controls.InkToolbarEraserButton'|'Windows.UI.Xaml.Controls.InkToolbarFlyoutItem'|'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton'|'Windows.UI.Xaml.Controls.InkToolbarPenConfigurationControl'|'Windows.UI.Xaml.Controls.InkToolbarPencilButton'|'Windows.UI.Xaml.Controls.InkToolbarRulerButton'|'Windows.UI.Xaml.Controls.InkToolbarStencilButton'|'Windows.UI.Xaml.Controls.ListBox'|'Windows.UI.Xaml.Controls.ListBoxItem'|'Windows.UI.Xaml.Controls.ListView'|'Windows.UI.Xaml.Controls.ListViewHeaderItem'|'Windows.UI.Xaml.Controls.ListViewItem'|'Windows.UI.Xaml.Controls.Maps.MapControl'|'Windows.UI.Xaml.Controls.MediaPlayerElement'|'Windows.UI.Xaml.Controls.MediaTransportControls'|'Windows.UI.Xaml.Controls.MenuBar'|'Windows.UI.Xaml.Controls.MenuBarItem'|'Windows.UI.Xaml.Controls.MenuFlyoutItem'|'Windows.UI.Xaml.Controls.MenuFlyoutPresenter'|'Windows.UI.Xaml.Controls.MenuFlyoutSeparator'|'Windows.UI.Xaml.Controls.MenuFlyoutSubItem'|'Windows.UI.Xaml.Controls.NavigationView'|'Windows.UI.Xaml.Controls.NavigationViewItem'|'Windows.UI.Xaml.Controls.NavigationViewItemHeader'|'Windows.UI.Xaml.Controls.NavigationViewItemSeparator'|'Windows.UI.Xaml.Controls.NavigationViewList'|'Windows.UI.Xaml.Controls.UserControl'|'Windows.UI.Xaml.Controls.Page'|'Windows.UI.Xaml.Controls.PasswordBox'|'Windows.UI.Xaml.Controls.PersonPicture'|'Windows.UI.Xaml.Controls.Pivot'|'Windows.UI.Xaml.Controls.PivotItem'|'Windows.UI.Xaml.Controls.Slider'|'Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider'|'Windows.UI.Xaml.Controls.Primitives.ColorSpectrum'|'Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar'|'Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter'|'Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem'|'Windows.UI.Xaml.Controls.Primitives.RepeatButton'|'Windows.UI.Xaml.Controls.Primitives.ScrollBar'|'Windows.UI.Xaml.Controls.Primitives.Thumb'|'Windows.UI.Xaml.Controls.ProgressBar'|'Windows.UI.Xaml.Controls.ProgressRing'|'Windows.UI.Xaml.Controls.RatingControl'|'Windows.UI.Xaml.Controls.RefreshContainer'|'Windows.UI.Xaml.Controls.RefreshVisualizer'|'Windows.UI.Xaml.Controls.RichEditBox'|'Windows.UI.Xaml.Controls.ScrollViewer'|'Windows.UI.Xaml.Controls.SearchBox'|'Windows.UI.Xaml.Controls.SemanticZoom'|'Windows.UI.Xaml.Controls.SettingsFlyout'|'Windows.UI.Xaml.Controls.SplitButton'|'Windows.UI.Xaml.Controls.SplitView'|'Windows.UI.Xaml.Controls.SwipeControl'|'Windows.UI.Xaml.Controls.TextBox'|'Windows.UI.Xaml.Controls.TimePicker'|'Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem'|'Windows.UI.Xaml.Controls.ToggleSplitButton'|'Windows.UI.Xaml.Controls.ToggleSwitch'|'Windows.UI.Xaml.Controls.ToolTip'|'Windows.UI.Xaml.Controls.TreeView'|'Windows.UI.Xaml.Controls.TreeViewItem'|'Windows.UI.Xaml.Controls.TreeViewList'|'Windows.UI.Xaml.Controls.TwoPaneView';
  onIsEnabledChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onFocusDisengaged?: (event: NativeSyntheticEvent<undefined>) => void;
  onFocusEngaged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeContentControlProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.ContentControl'|'Windows.UI.Xaml.Controls.AppBar'|'Windows.UI.Xaml.Controls.Button'|'Windows.UI.Xaml.Controls.AppBarButton'|'Windows.UI.Xaml.Controls.AppBarElementContainer'|'Windows.UI.Xaml.Controls.Primitives.ToggleButton'|'Windows.UI.Xaml.Controls.AppBarToggleButton'|'Windows.UI.Xaml.Controls.CheckBox'|'Windows.UI.Xaml.Controls.ComboBoxItem'|'Windows.UI.Xaml.Controls.CommandBar'|'Windows.UI.Xaml.Controls.ContentDialog'|'Windows.UI.Xaml.Controls.DropDownButton'|'Windows.UI.Xaml.Controls.FlipViewItem'|'Windows.UI.Xaml.Controls.FlyoutPresenter'|'Windows.UI.Xaml.Controls.Frame'|'Windows.UI.Xaml.Controls.GridViewHeaderItem'|'Windows.UI.Xaml.Controls.GridViewItem'|'Windows.UI.Xaml.Controls.GroupItem'|'Windows.UI.Xaml.Controls.HyperlinkButton'|'Windows.UI.Xaml.Controls.RadioButton'|'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton'|'Windows.UI.Xaml.Controls.InkToolbarEraserButton'|'Windows.UI.Xaml.Controls.InkToolbarFlyoutItem'|'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton'|'Windows.UI.Xaml.Controls.InkToolbarPencilButton'|'Windows.UI.Xaml.Controls.InkToolbarRulerButton'|'Windows.UI.Xaml.Controls.InkToolbarStencilButton'|'Windows.UI.Xaml.Controls.ListBoxItem'|'Windows.UI.Xaml.Controls.ListViewHeaderItem'|'Windows.UI.Xaml.Controls.ListViewItem'|'Windows.UI.Xaml.Controls.NavigationView'|'Windows.UI.Xaml.Controls.NavigationViewItem'|'Windows.UI.Xaml.Controls.NavigationViewItemHeader'|'Windows.UI.Xaml.Controls.NavigationViewItemSeparator'|'Windows.UI.Xaml.Controls.PivotItem'|'Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar'|'Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter'|'Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem'|'Windows.UI.Xaml.Controls.Primitives.RepeatButton'|'Windows.UI.Xaml.Controls.RefreshContainer'|'Windows.UI.Xaml.Controls.ScrollViewer'|'Windows.UI.Xaml.Controls.SettingsFlyout'|'Windows.UI.Xaml.Controls.SplitButton'|'Windows.UI.Xaml.Controls.SwipeControl'|'Windows.UI.Xaml.Controls.ToggleSplitButton'|'Windows.UI.Xaml.Controls.ToolTip'|'Windows.UI.Xaml.Controls.TreeViewItem';
}


export interface NativeAppBarProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.AppBar'|'Windows.UI.Xaml.Controls.CommandBar'|'Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar';
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosing?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpening?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeButtonBaseProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.Button'|'Windows.UI.Xaml.Controls.AppBarButton'|'Windows.UI.Xaml.Controls.Primitives.ToggleButton'|'Windows.UI.Xaml.Controls.AppBarToggleButton'|'Windows.UI.Xaml.Controls.CheckBox'|'Windows.UI.Xaml.Controls.DropDownButton'|'Windows.UI.Xaml.Controls.HyperlinkButton'|'Windows.UI.Xaml.Controls.RadioButton'|'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton'|'Windows.UI.Xaml.Controls.InkToolbarEraserButton'|'Windows.UI.Xaml.Controls.InkToolbarFlyoutItem'|'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton'|'Windows.UI.Xaml.Controls.InkToolbarPencilButton'|'Windows.UI.Xaml.Controls.InkToolbarRulerButton'|'Windows.UI.Xaml.Controls.InkToolbarStencilButton'|'Windows.UI.Xaml.Controls.Primitives.RepeatButton';
  onClick?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeButtonProps extends NativeButtonBaseProps {
  type: 'Windows.UI.Xaml.Controls.Button'|'Windows.UI.Xaml.Controls.AppBarButton'|'Windows.UI.Xaml.Controls.DropDownButton';
}


export interface NativeAppBarButtonProps extends NativeButtonProps {
  type: 'Windows.UI.Xaml.Controls.AppBarButton';
}


export interface NativeAppBarElementContainerProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.AppBarElementContainer';
}


export interface NativeAppBarSeparatorProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.AppBarSeparator';
}


export interface NativeToggleButtonProps extends NativeButtonBaseProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.ToggleButton'|'Windows.UI.Xaml.Controls.AppBarToggleButton'|'Windows.UI.Xaml.Controls.CheckBox'|'Windows.UI.Xaml.Controls.RadioButton'|'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton'|'Windows.UI.Xaml.Controls.InkToolbarEraserButton'|'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton'|'Windows.UI.Xaml.Controls.InkToolbarPencilButton'|'Windows.UI.Xaml.Controls.InkToolbarRulerButton'|'Windows.UI.Xaml.Controls.InkToolbarStencilButton';
  onChecked?: (event: NativeSyntheticEvent<undefined>) => void;
  onIndeterminate?: (event: NativeSyntheticEvent<undefined>) => void;
  onUnchecked?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeAppBarToggleButtonProps extends NativeToggleButtonProps {
  type: 'Windows.UI.Xaml.Controls.AppBarToggleButton';
}


export interface NativeItemsControlProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.ItemsControl'|'Windows.UI.Xaml.Controls.AutoSuggestBox'|'Windows.UI.Xaml.Controls.ComboBox'|'Windows.UI.Xaml.Controls.CommandBarOverflowPresenter'|'Windows.UI.Xaml.Controls.FlipView'|'Windows.UI.Xaml.Controls.GridView'|'Windows.UI.Xaml.Controls.ListBox'|'Windows.UI.Xaml.Controls.ListView'|'Windows.UI.Xaml.Controls.MenuFlyoutPresenter'|'Windows.UI.Xaml.Controls.NavigationViewList'|'Windows.UI.Xaml.Controls.Pivot'|'Windows.UI.Xaml.Controls.TreeViewList';
}


export interface NativeAutoSuggestBoxProps extends NativeItemsControlProps {
  type: 'Windows.UI.Xaml.Controls.AutoSuggestBox';
  onSuggestionChosen?: (event: NativeSyntheticEvent<undefined>) => void;
  onTextChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onQuerySubmitted?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeIconElementProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.BitmapIcon'|'Windows.UI.Xaml.Controls.FontIcon'|'Windows.UI.Xaml.Controls.IconSourceElement'|'Windows.UI.Xaml.Controls.PathIcon'|'Windows.UI.Xaml.Controls.SymbolIcon';
}


export interface NativeBitmapIconProps extends NativeIconElementProps {
  type: 'Windows.UI.Xaml.Controls.BitmapIcon';
}


export interface NativeBorderProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.Border';
}


export interface NativeCalendarDatePickerProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.CalendarDatePicker';
  onCalendarViewDayItemChanging?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onDateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeCalendarViewProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.CalendarView';
  onCalendarViewDayItemChanging?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectedDatesChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeCalendarViewDayItemProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.CalendarViewDayItem';
}


export interface NativePanelProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.Canvas'|'Windows.UI.Xaml.Controls.Grid'|'Windows.UI.Xaml.Controls.ItemsStackPanel'|'Windows.UI.Xaml.Controls.ItemsWrapGrid'|'Windows.UI.Xaml.Controls.Primitives.CalendarPanel'|'Windows.UI.Xaml.Controls.Primitives.CarouselPanel'|'Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel'|'Windows.UI.Xaml.Controls.Primitives.PivotPanel'|'Windows.UI.Xaml.Controls.RelativePanel'|'Windows.UI.Xaml.Controls.StackPanel'|'Windows.UI.Xaml.Controls.SwapChainBackgroundPanel'|'Windows.UI.Xaml.Controls.SwapChainPanel'|'Windows.UI.Xaml.Controls.VariableSizedWrapGrid'|'Windows.UI.Xaml.Controls.VirtualizingStackPanel'|'Windows.UI.Xaml.Controls.WrapGrid';
}


export interface NativeCanvasProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.Canvas'|'Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel';
}


export interface NativeCaptureElementProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.CaptureElement';
}


export interface NativeCheckBoxProps extends NativeToggleButtonProps {
  type: 'Windows.UI.Xaml.Controls.CheckBox'|'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton'|'Windows.UI.Xaml.Controls.InkToolbarRulerButton';
}


export interface NativeColorPickerProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.ColorPicker';
  onColorChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeSelectorProps extends NativeItemsControlProps {
  type: 'Windows.UI.Xaml.Controls.ComboBox'|'Windows.UI.Xaml.Controls.FlipView'|'Windows.UI.Xaml.Controls.GridView'|'Windows.UI.Xaml.Controls.ListBox'|'Windows.UI.Xaml.Controls.ListView'|'Windows.UI.Xaml.Controls.NavigationViewList'|'Windows.UI.Xaml.Controls.TreeViewList';
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeComboBoxProps extends NativeSelectorProps {
  type: 'Windows.UI.Xaml.Controls.ComboBox';
  onDropDownClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onDropDownOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onTextSubmitted?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeSelectorItemProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.ComboBoxItem'|'Windows.UI.Xaml.Controls.FlipViewItem'|'Windows.UI.Xaml.Controls.GridViewItem'|'Windows.UI.Xaml.Controls.ListBoxItem'|'Windows.UI.Xaml.Controls.ListViewItem'|'Windows.UI.Xaml.Controls.NavigationViewItem'|'Windows.UI.Xaml.Controls.NavigationViewItemHeader'|'Windows.UI.Xaml.Controls.NavigationViewItemSeparator'|'Windows.UI.Xaml.Controls.TreeViewItem';
}


export interface NativeComboBoxItemProps extends NativeSelectorItemProps {
  type: 'Windows.UI.Xaml.Controls.ComboBoxItem';
}


export interface NativeCommandBarProps extends NativeAppBarProps {
  type: 'Windows.UI.Xaml.Controls.CommandBar'|'Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar';
  onDynamicOverflowItemsChanging?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeFlyoutBaseProps extends NativeDependencyObjectProps {
  type: 'Windows.UI.Xaml.Controls.CommandBarFlyout'|'Windows.UI.Xaml.Controls.DatePickerFlyout'|'Windows.UI.Xaml.Controls.Flyout'|'Windows.UI.Xaml.Controls.ListPickerFlyout'|'Windows.UI.Xaml.Controls.MenuFlyout'|'Windows.UI.Xaml.Controls.MenuBarItemFlyout'|'Windows.UI.Xaml.Controls.PickerFlyout'|'Windows.UI.Xaml.Controls.TextCommandBarFlyout'|'Windows.UI.Xaml.Controls.TimePickerFlyout';
  isOpen?: boolean; // synthetic property
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpening?: (event: NativeSyntheticEvent<undefined>) => void;
  onClosing?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeCommandBarFlyoutProps extends NativeFlyoutBaseProps {
  type: 'Windows.UI.Xaml.Controls.CommandBarFlyout'|'Windows.UI.Xaml.Controls.TextCommandBarFlyout';
}


export interface NativeCommandBarOverflowPresenterProps extends NativeItemsControlProps {
  type: 'Windows.UI.Xaml.Controls.CommandBarOverflowPresenter';
}


export interface NativeContentDialogProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.ContentDialog';
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
  type: 'Windows.UI.Xaml.Controls.ContentPresenter'|'Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter'|'Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter'|'Windows.UI.Xaml.Controls.ScrollContentPresenter';
}


export interface NativeDatePickerProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.DatePicker';
  onDateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectedDateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativePickerFlyoutBaseProps extends NativeFlyoutBaseProps {
  type: 'Windows.UI.Xaml.Controls.DatePickerFlyout'|'Windows.UI.Xaml.Controls.ListPickerFlyout'|'Windows.UI.Xaml.Controls.PickerFlyout'|'Windows.UI.Xaml.Controls.TimePickerFlyout';
}


export interface NativeDatePickerFlyoutProps extends NativePickerFlyoutBaseProps {
  type: 'Windows.UI.Xaml.Controls.DatePickerFlyout';
  onDatePicked?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeDatePickerFlyoutPresenterProps extends NativeControlProps {
}


export interface NativeDropDownButtonProps extends NativeButtonProps {
  type: 'Windows.UI.Xaml.Controls.DropDownButton';
}


export interface NativeFlipViewProps extends NativeSelectorProps {
  type: 'Windows.UI.Xaml.Controls.FlipView';
}


export interface NativeFlipViewItemProps extends NativeSelectorItemProps {
  type: 'Windows.UI.Xaml.Controls.FlipViewItem';
}


export interface NativeFlyoutProps extends NativeFlyoutBaseProps {
  type: 'Windows.UI.Xaml.Controls.Flyout';
}


export interface NativeFlyoutPresenterProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.FlyoutPresenter';
}


export interface NativeFontIconProps extends NativeIconElementProps {
  type: 'Windows.UI.Xaml.Controls.FontIcon';
}


export interface NativeFrameProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.Frame';
  onNavigated?: (event: NativeSyntheticEvent<undefined>) => void;
  onNavigating?: (event: NativeSyntheticEvent<undefined>) => void;
  onNavigationFailed?: (event: NativeSyntheticEvent<undefined>) => void;
  onNavigationStopped?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeGridProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.Grid'|'Windows.UI.Xaml.Controls.SwapChainBackgroundPanel'|'Windows.UI.Xaml.Controls.SwapChainPanel';
  /**
  * An object with a columns and a rows members, each of which is an array of the corresponding dimensions.
  */
  gridLayout?: { rows: GridLength[], columns: GridLength[] }; // synthetic property
}


export interface NativeListViewBaseProps extends NativeSelectorProps {
  type: 'Windows.UI.Xaml.Controls.GridView'|'Windows.UI.Xaml.Controls.ListView'|'Windows.UI.Xaml.Controls.NavigationViewList'|'Windows.UI.Xaml.Controls.TreeViewList';
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
  type: 'Windows.UI.Xaml.Controls.GridViewHeaderItem'|'Windows.UI.Xaml.Controls.ListViewHeaderItem';
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
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeHubProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.Hub';
  onSectionHeaderClick?: (event: NativeSyntheticEvent<undefined>) => void;
  onSectionsInViewChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeHubSectionProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.HubSection';
}


export interface NativeHyperlinkButtonProps extends NativeButtonBaseProps {
  type: 'Windows.UI.Xaml.Controls.HyperlinkButton';
}


export interface NativeIconSourceElementProps extends NativeIconElementProps {
  type: 'Windows.UI.Xaml.Controls.IconSourceElement';
}


export interface NativeImageProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.Image';
  onImageFailed?: (event: NativeSyntheticEvent<undefined>) => void;
  onImageOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeInkCanvasProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.InkCanvas';
}


export interface NativeInkToolbarProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbar';
  onActiveToolChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onEraseAllClicked?: (event: NativeSyntheticEvent<undefined>) => void;
  onInkDrawingAttributesChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onIsRulerButtonCheckedChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onIsStencilButtonCheckedChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeRadioButtonProps extends NativeToggleButtonProps {
  type: 'Windows.UI.Xaml.Controls.RadioButton'|'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton'|'Windows.UI.Xaml.Controls.InkToolbarEraserButton'|'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton'|'Windows.UI.Xaml.Controls.InkToolbarPencilButton';
}


export interface NativeInkToolbarToolButtonProps extends NativeRadioButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton'|'Windows.UI.Xaml.Controls.InkToolbarEraserButton'|'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton'|'Windows.UI.Xaml.Controls.InkToolbarPencilButton';
}


export interface NativeInkToolbarPenButtonProps extends NativeInkToolbarToolButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton'|'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton'|'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton'|'Windows.UI.Xaml.Controls.InkToolbarPencilButton';
}


export interface NativeInkToolbarBallpointPenButtonProps extends NativeInkToolbarPenButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarBallpointPenButton';
}


export interface NativeInkToolbarCustomPenButtonProps extends NativeInkToolbarPenButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarCustomPenButton';
}


export interface NativeInkToolbarToggleButtonProps extends NativeCheckBoxProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton'|'Windows.UI.Xaml.Controls.InkToolbarRulerButton';
}


export interface NativeInkToolbarCustomToggleButtonProps extends NativeInkToolbarToggleButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarCustomToggleButton';
}


export interface NativeInkToolbarCustomToolButtonProps extends NativeInkToolbarToolButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarCustomToolButton';
}


export interface NativeInkToolbarEraserButtonProps extends NativeInkToolbarToolButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarEraserButton';
}


export interface NativeInkToolbarFlyoutItemProps extends NativeButtonBaseProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarFlyoutItem';
  onChecked?: (event: NativeSyntheticEvent<undefined>) => void;
  onUnchecked?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeInkToolbarHighlighterButtonProps extends NativeInkToolbarPenButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarHighlighterButton';
}


export interface NativeInkToolbarMenuButtonProps extends NativeToggleButtonProps {
  type: 'Windows.UI.Xaml.Controls.InkToolbarStencilButton';
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
}


export interface NativeItemsPresenterProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.ItemsPresenter';
  onHorizontalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onVerticalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeItemsStackPanelProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.ItemsStackPanel';
}


export interface NativeItemsWrapGridProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.ItemsWrapGrid';
}


export interface NativeListBoxProps extends NativeSelectorProps {
  type: 'Windows.UI.Xaml.Controls.ListBox';
}


export interface NativeListBoxItemProps extends NativeSelectorItemProps {
  type: 'Windows.UI.Xaml.Controls.ListBoxItem';
}


export interface NativeListPickerFlyoutProps extends NativePickerFlyoutBaseProps {
  type: 'Windows.UI.Xaml.Controls.ListPickerFlyout';
  onItemsPicked?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeListPickerFlyoutPresenterProps extends NativeControlProps {
}


export interface NativeListViewProps extends NativeListViewBaseProps {
  type: 'Windows.UI.Xaml.Controls.ListView'|'Windows.UI.Xaml.Controls.NavigationViewList'|'Windows.UI.Xaml.Controls.TreeViewList';
}


export interface NativeListViewHeaderItemProps extends NativeListViewBaseHeaderItemProps {
  type: 'Windows.UI.Xaml.Controls.ListViewHeaderItem';
}


export interface NativeListViewItemProps extends NativeSelectorItemProps {
  type: 'Windows.UI.Xaml.Controls.ListViewItem'|'Windows.UI.Xaml.Controls.NavigationViewItem'|'Windows.UI.Xaml.Controls.NavigationViewItemHeader'|'Windows.UI.Xaml.Controls.NavigationViewItemSeparator'|'Windows.UI.Xaml.Controls.TreeViewItem';
}


export interface NativeMapControlProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.Maps.MapControl';
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
}


export interface NativeMediaPlayerPresenterProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.MediaPlayerPresenter';
}


export interface NativeMediaTransportControlsProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.MediaTransportControls';
  onThumbnailRequested?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeMenuBarProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.MenuBar';
}


export interface NativeMenuBarItemProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.MenuBarItem';
}


export interface NativeMenuFlyoutProps extends NativeFlyoutBaseProps {
  type: 'Windows.UI.Xaml.Controls.MenuFlyout'|'Windows.UI.Xaml.Controls.MenuBarItemFlyout';
}


export interface NativeMenuBarItemFlyoutProps extends NativeMenuFlyoutProps {
  type: 'Windows.UI.Xaml.Controls.MenuBarItemFlyout';
}


export interface NativeMenuFlyoutItemBaseProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.MenuFlyoutItem'|'Windows.UI.Xaml.Controls.MenuFlyoutSeparator'|'Windows.UI.Xaml.Controls.MenuFlyoutSubItem'|'Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem';
}


export interface NativeMenuFlyoutItemProps extends NativeMenuFlyoutItemBaseProps {
  type: 'Windows.UI.Xaml.Controls.MenuFlyoutItem'|'Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem';
  onClick?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeMenuFlyoutPresenterProps extends NativeItemsControlProps {
  type: 'Windows.UI.Xaml.Controls.MenuFlyoutPresenter';
}


export interface NativeMenuFlyoutSeparatorProps extends NativeMenuFlyoutItemBaseProps {
  type: 'Windows.UI.Xaml.Controls.MenuFlyoutSeparator';
}


export interface NativeMenuFlyoutSubItemProps extends NativeMenuFlyoutItemBaseProps {
  type: 'Windows.UI.Xaml.Controls.MenuFlyoutSubItem';
}


export interface NativeNavigationViewProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.NavigationView';
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
  type: 'Windows.UI.Xaml.Controls.NavigationViewItem'|'Windows.UI.Xaml.Controls.NavigationViewItemHeader'|'Windows.UI.Xaml.Controls.NavigationViewItemSeparator';
}


export interface NativeNavigationViewItemProps extends NativeNavigationViewItemBaseProps {
  type: 'Windows.UI.Xaml.Controls.NavigationViewItem';
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
  type: 'Windows.UI.Xaml.Controls.UserControl'|'Windows.UI.Xaml.Controls.Page';
}


export interface NativePageProps extends NativeUserControlProps {
  type: 'Windows.UI.Xaml.Controls.Page';
}


export interface NativeParallaxViewProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.ParallaxView';
}


export interface NativePasswordBoxProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.PasswordBox';
  onContextMenuOpening?: (event: NativeSyntheticEvent<undefined>) => void;
  onPasswordChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaste?: (event: NativeSyntheticEvent<undefined>) => void;
  onPasswordChanging?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativePathIconProps extends NativeIconElementProps {
  type: 'Windows.UI.Xaml.Controls.PathIcon';
}


export interface NativePersonPictureProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.PersonPicture';
}


export interface NativePickerFlyoutProps extends NativePickerFlyoutBaseProps {
  type: 'Windows.UI.Xaml.Controls.PickerFlyout';
  onConfirmed?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativePickerFlyoutPresenterProps extends NativeContentControlProps {
}


export interface NativePivotProps extends NativeItemsControlProps {
  type: 'Windows.UI.Xaml.Controls.Pivot';
  onPivotItemLoaded?: (event: NativeSyntheticEvent<undefined>) => void;
  onPivotItemLoading?: (event: NativeSyntheticEvent<undefined>) => void;
  onPivotItemUnloaded?: (event: NativeSyntheticEvent<undefined>) => void;
  onPivotItemUnloading?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativePivotItemProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.PivotItem';
}


export interface NativeCalendarPanelProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.CalendarPanel';
}


export interface NativeVirtualizingPanelProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.CarouselPanel'|'Windows.UI.Xaml.Controls.VirtualizingStackPanel'|'Windows.UI.Xaml.Controls.WrapGrid';
}


export interface NativeCarouselPanelProps extends NativeVirtualizingPanelProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.CarouselPanel';
  onHorizontalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onVerticalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeRangeBaseProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.Slider'|'Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider'|'Windows.UI.Xaml.Controls.Primitives.ScrollBar'|'Windows.UI.Xaml.Controls.ProgressBar';
  onValueChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeSliderProps extends NativeRangeBaseProps {
  type: 'Windows.UI.Xaml.Controls.Slider'|'Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider';
}


export interface NativeColorPickerSliderProps extends NativeSliderProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider';
}


export interface NativeColorSpectrumProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.ColorSpectrum';
  onColorChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeCommandBarFlyoutCommandBarProps extends NativeCommandBarProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar';
}


export interface NativeGridViewItemPresenterProps extends NativeContentPresenterProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter';
}


export interface NativeListViewItemPresenterProps extends NativeContentPresenterProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter';
}


export interface NativeLoopingSelectorProps extends NativeControlProps {
  onSelectionChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeLoopingSelectorItemProps extends NativeContentControlProps {
}


export interface NativeLoopingSelectorPanelProps extends NativeCanvasProps {
  onHorizontalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onVerticalSnapPointsChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeNavigationViewItemPresenterProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter';
}


export interface NativeOrientedVirtualizingPanelProps extends NativeVirtualizingPanelProps {
  type: 'Windows.UI.Xaml.Controls.VirtualizingStackPanel'|'Windows.UI.Xaml.Controls.WrapGrid';
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
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeRepeatButtonProps extends NativeButtonBaseProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.RepeatButton';
}


export interface NativeScrollBarProps extends NativeRangeBaseProps {
  type: 'Windows.UI.Xaml.Controls.Primitives.ScrollBar';
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
}


export interface NativeProgressBarProps extends NativeRangeBaseProps {
  type: 'Windows.UI.Xaml.Controls.ProgressBar';
}


export interface NativeProgressRingProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.ProgressRing';
}


export interface NativeRatingControlProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.RatingControl';
  onValueChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeRefreshContainerProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.RefreshContainer';
  onRefreshRequested?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeRefreshVisualizerProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.RefreshVisualizer';
  onRefreshRequested?: (event: NativeSyntheticEvent<undefined>) => void;
  onRefreshStateChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeRelativePanelProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.RelativePanel';
}


export interface NativeRichEditBoxProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.RichEditBox';
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
  onIsTextTrimmedChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeScrollContentPresenterProps extends NativeContentPresenterProps {
  type: 'Windows.UI.Xaml.Controls.ScrollContentPresenter';
}


export interface NativeScrollViewerProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.ScrollViewer';
  onViewChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onViewChanging?: (event: NativeSyntheticEvent<undefined>) => void;
  onDirectManipulationCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onDirectManipulationStarted?: (event: NativeSyntheticEvent<undefined>) => void;
  onAnchorRequested?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeSearchBoxProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.SearchBox';
  onPrepareForFocusOnKeyboardInput?: (event: NativeSyntheticEvent<undefined>) => void;
  onQueryChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onQuerySubmitted?: (event: NativeSyntheticEvent<undefined>) => void;
  onResultSuggestionChosen?: (event: NativeSyntheticEvent<undefined>) => void;
  onSuggestionsRequested?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeSemanticZoomProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.SemanticZoom';
  onViewChangeCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onViewChangeStarted?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeSettingsFlyoutProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.SettingsFlyout';
  onBackClick?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeSplitButtonProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.SplitButton'|'Windows.UI.Xaml.Controls.ToggleSplitButton';
  onClick?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeSplitViewProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.SplitView';
  onPaneClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneClosing?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneOpened?: (event: NativeSyntheticEvent<undefined>) => void;
  onPaneOpening?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeStackPanelProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.StackPanel';
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
}


export interface NativeTextBlockProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.TextBlock';
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
  onTimeChanged?: (event: NativeSyntheticEvent<undefined>) => void;
  onSelectedTimeChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeTimePickerFlyoutProps extends NativePickerFlyoutBaseProps {
  type: 'Windows.UI.Xaml.Controls.TimePickerFlyout';
  onTimePicked?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeTimePickerFlyoutPresenterProps extends NativeControlProps {
}


export interface NativeToggleMenuFlyoutItemProps extends NativeMenuFlyoutItemProps {
  type: 'Windows.UI.Xaml.Controls.ToggleMenuFlyoutItem';
}


export interface NativeToggleSplitButtonProps extends NativeSplitButtonProps {
  type: 'Windows.UI.Xaml.Controls.ToggleSplitButton';
  onIsCheckedChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeToggleSwitchProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.ToggleSwitch';
  onToggled?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeToolTipProps extends NativeContentControlProps {
  type: 'Windows.UI.Xaml.Controls.ToolTip';
  onClosed?: (event: NativeSyntheticEvent<undefined>) => void;
  onOpened?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeTreeViewProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.TreeView';
  onCollapsed?: (event: NativeSyntheticEvent<undefined>) => void;
  onExpanding?: (event: NativeSyntheticEvent<undefined>) => void;
  onItemInvoked?: (event: NativeSyntheticEvent<undefined>) => void;
  onDragItemsCompleted?: (event: NativeSyntheticEvent<undefined>) => void;
  onDragItemsStarting?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeTreeViewItemProps extends NativeListViewItemProps {
  type: 'Windows.UI.Xaml.Controls.TreeViewItem';
}


export interface NativeTreeViewListProps extends NativeListViewProps {
  type: 'Windows.UI.Xaml.Controls.TreeViewList';
}


export interface NativeTwoPaneViewProps extends NativeControlProps {
  type: 'Windows.UI.Xaml.Controls.TwoPaneView';
  onModeChanged?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeVariableSizedWrapGridProps extends NativePanelProps {
  type: 'Windows.UI.Xaml.Controls.VariableSizedWrapGrid';
}


export interface NativeViewboxProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.Viewbox';
}


export interface NativeVirtualizingStackPanelProps extends NativeOrientedVirtualizingPanelProps {
  type: 'Windows.UI.Xaml.Controls.VirtualizingStackPanel';
  onCleanUpVirtualizedItemEvent?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeWebViewProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Controls.WebView';
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
}


export interface NativeTextElementProps extends NativeDependencyObjectProps {
  type: 'Windows.UI.Xaml.Documents.Span'|'Windows.UI.Xaml.Documents.Bold'|'Windows.UI.Xaml.Documents.ContentLink'|'Windows.UI.Xaml.Documents.Hyperlink'|'Windows.UI.Xaml.Documents.InlineUIContainer'|'Windows.UI.Xaml.Documents.Italic'|'Windows.UI.Xaml.Documents.LineBreak'|'Windows.UI.Xaml.Documents.Paragraph'|'Windows.UI.Xaml.Documents.Run'|'Windows.UI.Xaml.Documents.Underline';
  onAccessKeyDisplayDismissed?: (event: NativeSyntheticEvent<undefined>) => void;
  onAccessKeyDisplayRequested?: (event: NativeSyntheticEvent<undefined>) => void;
  onAccessKeyInvoked?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeBlockProps extends NativeTextElementProps {
  type: 'Windows.UI.Xaml.Documents.Paragraph';
}


export interface NativeInlineProps extends NativeTextElementProps {
  type: 'Windows.UI.Xaml.Documents.Span'|'Windows.UI.Xaml.Documents.Bold'|'Windows.UI.Xaml.Documents.ContentLink'|'Windows.UI.Xaml.Documents.Hyperlink'|'Windows.UI.Xaml.Documents.InlineUIContainer'|'Windows.UI.Xaml.Documents.Italic'|'Windows.UI.Xaml.Documents.LineBreak'|'Windows.UI.Xaml.Documents.Run'|'Windows.UI.Xaml.Documents.Underline';
}


export interface NativeSpanProps extends NativeInlineProps {
  type: 'Windows.UI.Xaml.Documents.Span'|'Windows.UI.Xaml.Documents.Bold'|'Windows.UI.Xaml.Documents.Hyperlink'|'Windows.UI.Xaml.Documents.Italic'|'Windows.UI.Xaml.Documents.Underline';
}


export interface NativeBoldProps extends NativeSpanProps {
  type: 'Windows.UI.Xaml.Documents.Bold';
}


export interface NativeContentLinkProps extends NativeInlineProps {
  type: 'Windows.UI.Xaml.Documents.ContentLink';
  onGotFocus?: (event: NativeSyntheticEvent<undefined>) => void;
  onInvoked?: (event: NativeSyntheticEvent<undefined>) => void;
  onLostFocus?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeGlyphsProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Documents.Glyphs';
}


export interface NativeHyperlinkProps extends NativeSpanProps {
  type: 'Windows.UI.Xaml.Documents.Hyperlink';
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
}


export interface NativeRunProps extends NativeInlineProps {
  type: 'Windows.UI.Xaml.Documents.Run';
  text?: string; // synthetic property
}


export interface NativeUnderlineProps extends NativeSpanProps {
  type: 'Windows.UI.Xaml.Documents.Underline';
}


export interface NativeKeyboardAcceleratorProps extends NativeDependencyObjectProps {
  type: 'Windows.UI.Xaml.Input.KeyboardAccelerator';
  onInvoked?: (event: NativeSyntheticEvent<undefined>) => void;
}


export interface NativeShapeProps extends NativeFrameworkElementProps {
  type: 'Windows.UI.Xaml.Shapes.Ellipse'|'Windows.UI.Xaml.Shapes.Line'|'Windows.UI.Xaml.Shapes.Path'|'Windows.UI.Xaml.Shapes.Polygon'|'Windows.UI.Xaml.Shapes.Polyline'|'Windows.UI.Xaml.Shapes.Rectangle';
}


export interface NativeEllipseProps extends NativeShapeProps {
  type: 'Windows.UI.Xaml.Shapes.Ellipse';
}


export interface NativeLineProps extends NativeShapeProps {
  type: 'Windows.UI.Xaml.Shapes.Line';
}


export interface NativePathProps extends NativeShapeProps {
  type: 'Windows.UI.Xaml.Shapes.Path';
}


export interface NativePolygonProps extends NativeShapeProps {
  type: 'Windows.UI.Xaml.Shapes.Polygon';
}


export interface NativePolylineProps extends NativeShapeProps {
  type: 'Windows.UI.Xaml.Shapes.Polyline';
}


export interface NativeRectangleProps extends NativeShapeProps {
  type: 'Windows.UI.Xaml.Shapes.Rectangle';
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


