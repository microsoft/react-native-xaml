# Using react-native-xaml

## Requirements

react-native-xaml works best on the latest supported react-native-windows version.

To include react-native-xaml in your app, just add it to your package.json:
`yarn add react-native-xaml --save`

Then autolinking will take care of the rest!

The stock react-native-xaml package includes projections for all XAML types (i.e. "system XAML") as well as WinUI 2.6.

## :exclamation: **Important**
You must update your app to use WinUI 2.6 or later. See the instructions at https://microsoft.github.io/react-native-windows/docs/customizing-sdk-versions.

If you want to use an existing `UserControl` (e.g. from a library you've already written), you will want to generate a custom projection for your project.
For more information on generating a custom projection, please see the [Technical Guide](TechnicalGuide.md).

# Sample usage - UWP XAML

Below are  usage examples of some controls and features of react-native-xaml.
If you have questions about a scenario you don't see below, please [file an issue](https://github.com/asklar/react-native-xaml/issues/new)!

## Basic example (children, events, properties)

```jsx
<StackPanel orientation="horizontal">
  <HyperlinkButton content="Click me!" onClick={(args) => {
      alert(`clicked! Native event args: ${JSON.stringify(args.nativeEvent)}`);
  }} />
  
  <Border verticalAlignment="center" background="paleturquoise" >
    <TextBlock text="this is a textblock" foreground='red' textAlignment="center" />
  </Border>
  
  <TextBlock text="this is another textblock" foreground='green' textAlignment="center" />
  <Button content="this is a button" onClick={() => { alert("you clicked the button!"); }} />
</StackPanel>
```

## Text

```jsx
<TextBlock foreground="black" xamlPadding={20} xamlMargin={20}>
  <Run text="hello world!"/>
  <LineBreak />
  <Italic>
    <Run text="hi there"/>
  </Italic>
  <Hyperlink navigateUri="http://bing.com">
    <Run text="Go to bing"/>
  </Hyperlink>
</TextBlock>
```

## Menu

```jsx
[isOpen, setIsOpen] = useState(false);

<TextBox text="this is a textbox with a menuFlyout" foreground="red">
  <MenuFlyout isOpen={isOpen} onClosed={() => {
    setIsOpen(false);
    }} >
    <MenuFlyoutItem text="option 1" onClick={(x) => { alert(JSON.stringify(x.nativeEvent)); setOption("option 1"); }} />
    <MenuFlyoutItem text="option 2" onClick={() => { alert("clicked 2"); setOption("option 2"); }}/>
  </MenuFlyout>
</TextBox>

<Button content={`Last selected option = ${option} ${count}`}
  onClick={(a) => { 
  setIsOpen(true); }} />
```

## MenuBar
```jsx
<MenuBar>
  <MenuBarItem title="File">
    <MenuFlyoutItem text="Help"/>
    <MenuFlyoutItem text="Settings"/>
  </MenuBarItem>
  <MenuBarItem title="View"/>
</MenuBar>
```

## Image

- For Image, note that you should specify its size so that RN reserves space for it, otherwise the image won't show.
- Supports Bitmap images and SVG files URIs, as well as inline Base64-encoded data:

```jsx
<Image source="https://microsoft.github.io/react-native-windows/img/homepage/cross-platform.png" 
  width={200} height={100} />
```

```jsx
<Image
  source="data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0iVVRGLTgiPz4gPHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyOCAyOCIgZmlsbD0ibm9uZSI+PHBhdGggZD0iTTEzLjEyNSAwSDBWMTMuMTI1SDEzLjEyNVYwWiIgZmlsbD0iI0YyNTAyMiI+PC9wYXRoPjxwYXRoIGQ9Ik0yOCAwSDE0Ljg3NVYxMy4xMjVIMjhWMFoiIGZpbGw9IiM3RkJBMDAiPjwvcGF0aD48cGF0aCBkPSJNMTMuMTI1IDE0Ljg3NUgwVjI4SDEzLjEyNVYxNC44NzVaIiBmaWxsPSIjMDBBNEVGIj48L3BhdGg+PHBhdGggZD0iTTI4IDE0Ljg3NUgxNC44NzVWMjhIMjhWMTQuODc1WiIgZmlsbD0iI0ZGQjkwMCI+PC9wYXRoPjwvc3ZnPiA="
  width={80}
  height={80} />
``` 

## ComboBox

```jsx
<ComboBox text="this is a combobox" description="best bois" 
    onSelectionChanged={(args) => 
    { alert(`sel changed! Native event args: ${JSON.stringify(args.nativeEvent)}`); }
  } >
  <ComboBoxItem content="garfield" foreground="black" />
  <ComboBoxItem content="snoopy" foreground="black" />
</ComboBox>
```

## AutoSuggestBox

```jsx
<AutoSuggestBox placeholderText="placeholder text">
    <SymbolIcon symbol={Symbol.Find}/>
</AutoSuggestBox>
```

## Grid

```jsx
<Grid gridLayout={{columns: [60, 60, '*'], rows: [100, 100, 100]}}>
    <TextBlock text="hello" gridRow={2} gridColumn={2} />
    <TextBlock text="world" gridRow={1} gridColumn={1} />
    <TextBlock gridRow={2} gridColumn={1} text='hi there' />
</Grid>
```

Note that only react-native-xaml components will respect the `gridRow`/`gridColumn` properties inside a `Grid`, core controls will not do that.

## NavigationView

```jsx
  const [text, setText] = React.useState('initial text');

<WinUI.NavigationView width={700} height={700}>
  <WinUI.NavigationViewItem content='Item 1' onTapped={() => setText('text #1')} priority={NavigationViewPriority.MenuItem}>
    <FontIcon glyph="&#xE790;" />
  </WinUI.NavigationViewItem>
  <WinUI.NavigationViewItem content='Item 2' onTapped={() => setText('text #2')} priority={NavigationViewPriority.FooterMenuItem}/>
  <TextBlock text={text} priority={NavigationViewPriority.Content}/>
</WinUI.NavigationView>
```

## CommandBar with AppBarButtons and KeyboardAccelerators

```jsx
<CommandBar isOpen={true} style={{ height: 56 }}>
  <AppBarButton
    priority={CommandBarPriority.PrimaryCommand}
    label="Search"
    onClick={() => { alert('search'); }}>
    <SymbolIcon symbol={Symbol.Find} />
    <KeyboardAccelerator
        virtualKey={VirtualKey.S}
        modifiers={VirtualKeyModifiers.Menu} />
  </AppBarButton>
  <AppBarButton
    priority={CommandBarPriority.PrimaryCommand}
    label="Calendar">
    <SymbolIcon symbol={Symbol.Calendar} />
  </AppBarButton>
  <AppBarButton label="Audio" priority={CommandBarPriority.SecondaryCommand}>
    <SymbolIcon symbol={Symbol.Audio} />
  </AppBarButton>
  <AppBarButton
    label="Calculator"
    priority={CommandBarPriority.SecondaryCommand}>
    <SymbolIcon symbol={Symbol.Calculator} />
  </AppBarButton>
</CommandBar>
```

## ContentDialog

```jsx
const [showState, setShowState] = useState(ContentDialogState.Hidden);

<Button
  onTapped={a => {setShowState(ContentDialogState.Popup);}}
  content="click to open a ContentDialog" />

<ContentDialog
  showState={showState}
  defaultButton={ContentDialogButton.Close}
  title="the title"
  content="this is the content"
  closeButtonText="close"
  primaryButtonText="primary"
  secondaryButtonText="secondary"
  onPrimaryButtonClick={e => {
    alert('primary');
  }}
  onSecondaryButtonClick={e => {
    alert('secondary');
  }}
  onContentDialogClosed={e => {
    setShowState(ContentDialogState.Hidden);
    alert(e.nativeEvent);
  }} />
```

## SplitView

```jsx
  const [isOpen, setIsOpen] = useState(false);
// ...
<SplitView
  isPaneOpen={isOpen}
  onPaneClosed={() => {
    setIsOpen(false);
  }}
  width={800}
  height={300}
  paneBackground="red"
  panePlacement={SplitViewPanePlacement.Left}>
  <TextBlock
    text="this is in the pane"
    priority={SplitViewPriority.Pane}
    foreground="white"
  />
  <Grid
    background="green"
    priority={SplitViewPriority.Content}
    gridLayout={{rows: [200], columns: [200]}}>
    <TextBlock text="this is in the content" foreground="white" />
  </Grid>
</SplitView>


  <Button
    foreground="#992222"
    onTapped={a => {
      setIsOpen(!isOpen);
    }}
    content="button"
  />
```

## Path & vector graphics

```jsx
<Path
  data="M14,2H12V1H11V2H5V1H4V2H2V14H14ZM4,3V4H5V3h6V4h1V3h1V5H3V3Zm9,10H3V6H13ZM7,10V7H4v3ZM5,8H6V9H5Z"
  width={16}
  height={16}
  fill="red"
  horizontalAlignment={HorizontalAlignment.Center}
  verticalAlignment={VerticalAlignment.Center}
/>
```

## Lightweight styling

```jsx
<Button content="Hello with style!" resources={{ 
    ButtonForeground: "#00fff1",
    ButtonForegroundPressed: "#2090ff",
    }} />
```

## Event args

react-native-xaml supports raising events and sending event args to the registered JavaScript event handlers. The native XAML event args object is projected to JavaScript through the `nativeEvent` method:

```jsx
  <HyperlinkButton content="Click me!" 
    onClick={(args) => {
      alert(JSON.stringify(args.nativeEvent));
    }} />
```

The content of the native event args object depends on whether the app is using Direct debugging or Web debugging.

- In web debugging mode, only certain properties on the sender and args are exposed. There is some special casing for a small number of events so that the "important properties" for the event can be projected to JavaScript. These properties must be of simple types (`number`, `string`, `boolean`, arrays of simple types, or objects with members of simple types).

- In direct debugging mode, react-native-xaml uses _codegen_ to infer how to marshal WinRT objects onto JavaScript by using JSI. This is a much richer and generic functionality. With this approach, you have access to the full set of properties on the event args and sender.

<details>
<summary>Sample JSON from an event args for a button being tapped</summary>

```json
{
  "sender": {
    "flowDirection": 0,
    "className": "Windows.UI.Xaml.Controls.Button",
    "allowFocusOnInteraction": true,
    "isFocusEngagementEnabled": false,
    "focusVisualMargin": {
      "left": -3,
      "top": -3,
      "right": -3,
      "bottom": -3
    },
    "allowFocusWhenDisabled": false,
    "background": "Black",
    "isTextScaleFactorEnabled": true,
    "focusVisualSecondaryBrush": "White",
    "backgroundSizing": 1,
    "borderBrush": "White",
    "horizontalAlignment": 0,
    "borderThickness": {
      "left": 1,
      "top": 1,
      "right": 1,
      "bottom": 1
    },
    "characterSpacing": 0,
    "clickMode": 0,
    "defaultStyleKey": {
      "kind": 1,
      "name": "Windows.UI.Xaml.Controls.Button"
    },
    "commandParameter": null,
    "content": "button",
    "focusVisualPrimaryThickness": {
      "left": 2,
      "top": 2,
      "right": 2,
      "bottom": 2
    },
    "dataContext": null,
    "height": 32,
    "defaultStyleResourceUri": null,
    "elementSoundMode": 0,
    "tabIndex": 2147483647,
    "focusVisualPrimaryBrush": "Black",
    "focusVisualSecondaryThickness": {
      "left": 1,
      "top": 1,
      "right": 1,
      "bottom": 1
    },
    "fontSize": 14,
    "margin": {
      "left": 0,
      "top": 0,
      "right": 0,
      "bottom": 0
    },
    "fontStretch": 5,
    "isTabStop": true,
    "fontStyle": 0,
    "foreground": "Dark red",
    "horizontalContentAlignment": 1,
    "tabNavigation": 0,
    "isEnabled": true,
    "isFocusEngaged": false,
    "language": "en-US",
    "maxHeight": null,
    "maxWidth": null,
    "tag": 13,
    "minHeight": 0,
    "minWidth": 0,
    "name": "<reacttag>: 13",
    "padding": {
      "left": 8,
      "top": 5,
      "right": 8,
      "bottom": 6
    },
    "requestedTheme": 0,
    "requiresPointer": 0,
    "verticalAlignment": 1,
    "useSystemFocusVisuals": true,
    "verticalContentAlignment": 1,
    "width": 1200
  },
  "args": {
    "className": "Windows.UI.Xaml.Input.TappedRoutedEventArgs",
    "handled": false,
    "pointerDeviceType": 2,
    "originalSource": {
      "flowDirection": 0,
      "className": "Windows.UI.Xaml.Controls.TextBlock",
      "allowFocusOnInteraction": true,
      "focusVisualMargin": {
        "left": 0,
        "top": 0,
        "right": 0,
        "bottom": 0
      },
      "allowFocusWhenDisabled": false,
      "characterSpacing": 0,
      "maxLines": 0,
      "isTextSelectionEnabled": false,
      "focusVisualPrimaryThickness": {
        "left": 2,
        "top": 2,
        "right": 2,
        "bottom": 2
      },
      "dataContext": "button",
      "focusVisualPrimaryBrush": "Black",
      "isTextScaleFactorEnabled": true,
      "focusVisualSecondaryBrush": "White",
      "focusVisualSecondaryThickness": {
        "left": 1,
        "top": 1,
        "right": 1,
        "bottom": 1
      },
      "fontSize": 14,
      "margin": {
        "left": 0,
        "top": 0,
        "right": 0,
        "bottom": 0
      },
      "fontStretch": 5,
      "lineHeight": 0,
      "fontStyle": 0,
      "foreground": "Black",
      "height": null,
      "horizontalAlignment": 0,
      "horizontalTextAlignment": 1,
      "isColorFontEnabled": true,
      "language": "en-US",
      "lineStackingStrategy": 0,
      "maxHeight": null,
      "maxWidth": null,
      "tag": null,
      "minHeight": 0,
      "minWidth": 0,
      "name": "",
      "opticalMarginAlignment": 0,
      "padding": {
        "left": 0,
        "top": 0,
        "right": 0,
        "bottom": 0
      },
      "requestedTheme": 0,
      "selectionHighlightColor": "Blue",
      "text": "button",
      "textAlignment": 1,
      "textReadingOrder": 1,
      "textLineBounds": 0,
      "textDecorations": 0,
      "textTrimming": 0,
      "textWrapping": 1,
      "verticalAlignment": 0,
      "width": null
    }
  }
}
```
</details>

In order to enable Direct debugging for your app, make sure that your App.cpp/App.cs has disabled web debugging:

<summary>C++</summary>

```cpp
  InstanceSettings().UseWebDebugger(false);
```

<summary>C#</summary>

```cs
  InstanceSettings.UseWebDebugger = false;
```

# Calling methods on XAML Event Args
By default, only XAML properties of event arg objects are exposed back. Some event args support calling methods on them.
See `eventArgMethods` in Windows.UI.Xaml.json.

Example:
```jsx
/// assume there is a MenuFlyout _menuRef defined.
<TextBlock
  text="Hello"
  onContextRequested={e => {
    const tag = findNodeHandle(_tbRef.current);
    const { point, returnValue } = e.nativeEvent.args.TryGetPosition(tag);
    MenuFlyout.ShowAt(_menuRef, {point: point});
  }}
/>
```

# Calling methods on XAML objects ("commands")
Some types support custom commands to expose some functionality of the underlying platform. 
For example, this allows calling the programatically showing a flyout menu:

```jsx
  const _tbRef = React.useRef<TextBlock>(null);
  const _menuRef = useRef<MenuFlyout>(null);

  const [x, setX] = React.useState(100);
  // ...
  return
<TextBox
  text={x}
  onBeforeTextChanging={e => {
    setX(e.nativeEvent.args.newText);
}}
/>
<TextBlock
  text="Hello"
  onTapped={e => {
    MenuFlyout.ShowAt(_menuRef, {point: {x: x, y: 42}});
  }}
  ref={t => {
    _tbRef.current = t;
  }}>
    <MenuFlyout
      ref={m => {
        _menuRef.current = m;
      }}>
      <MenuFlyoutItem text="menu option" />
    </MenuFlyout>
</TextBlock>
```

# Sample usage - WinUI controls

WinUI controls are available in the `WinUI` namespace.

## InfoBar

```jsx
const [visible, setVisible] = useState(Visibility.Visible);
// ...
<WinUI.InfoBar
  message="the message"
  title="the title"
  isOpen={true}
  visibility={visible}
  onClosed={() => {
    setVisible(Visibility.Collapsed);
  }}
  severity={WinUIEnums.InfoBarSeverity.Success}
/>
```
