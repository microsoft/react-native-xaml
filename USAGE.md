# Using react-native-xaml

## Requirements

react-native-xaml requires react-native-windows 0.64.2.

To include react-native-xaml in your app, just add it to your package.json:
`yarn add react-native-xaml --save`

Then autolinking will take care of the rest!

The stock react-native-xaml package includes projections for all XAML types (i.e. "system XAML").

If either of these are true, you will want to generate a custom projection for your project:

- you want to use types from the [WinUI 2.x library](https://docs.microsoft.com/windows/apps/winui/).
- you want to use an existing `UserControl` (e.g. from a library you've already written).

For more information on generating a custom projection, please see the [Technical Guide](TechnicalGuide.md).

# Sample usage

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
<TextBlock foreground="black" padding={20} margin={20}>
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
<NavigationView style={{ height: 200, width: 120 }}>
  <NavigationViewItem content="item 1">
    <FontIcon glyph="&#xE790;" />
  </NavigationViewItem>
  <NavigationViewItem content="item 2" />
</NavigationView>
```

## CommandBar with AppBarButtons and KeyboardAccelerators

```jsx
<CommandBar isOpen={true} style={{ height: 56 }}>
  <AppBarButton
    priority={AppBarButtonPriority.Primary}
    label="Search"
    onClick={() => { alert('search'); }}>
    <SymbolIcon symbol={Symbol.Find} />
    <KeyboardAccelerator
        virtualKey={VirtualKey.S}
        modifiers={VirtualKeyModifiers.Menu} />
  </AppBarButton>
  <AppBarButton
    priority={AppBarButtonPriority.Primary}
    label="Calendar">
    <SymbolIcon symbol={Symbol.Calendar} />
  </AppBarButton>
  <AppBarButton label="Audio" priority={AppBarButtonPriority.Secondary}>
    <SymbolIcon symbol={Symbol.Audio} />
  </AppBarButton>
  <AppBarButton
    label="Calculator"
    priority={AppBarButtonPriority.Secondary}>
    <SymbolIcon symbol={Symbol.Calculator} />
  </AppBarButton>
</CommandBar>
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
