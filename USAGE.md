# react-native-xaml samples

## Basic example (children, events, properties)
```jsx
<StackPanel orientation="horizontal">
  <HyperlinkButton content={{ string: "Click me!" }} onClick={(args) => {
      alert(`clicked! Native event args: ${JSON.stringify(args.nativeEvent)}`);
  }} />
  
  <Border verticalAlignment="center" background="paleturquoise" >
    <TextBlock text="this is a textblock" foreground='red' textAlignment="center" />
  </Border>
  
  <TextBlock text="this is another textblock" foreground='green' textAlignment="center" />
  <Button content={{ string: "this is a button" }} onClick={() => { alert("you clicked the button!"); }} />
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

<Button content={{ string: `Last selected option = ${option} ${count}` }}
  onClick={(a) => { 
  setIsOpen(true); }} />
```

## ComboBox
```jsx
<ComboBox text="this is a combobox" description={{ string: "best bois" }} 
    onSelectionChanged={(args) => 
    { alert(`sel changed! Native event args: ${JSON.stringify(args.nativeEvent)}`); }
  } >
  <ComboBoxItem content={{ string: "garfield" }} foreground="black" />
  <ComboBoxItem content={{ string: "snoopy" }} foreground="black" />
</ComboBox>
```

## NavigationView
```jsx
<NavigationView style={{ height: 200, width: 120 }}>
  <NavigationViewItem content={{ string: "item 1" }} />
  <NavigationViewItem content={{ string: "item 2" }} />
</NavigationView>
```

## Lightweight styling
```jsx
<Button content="Hello with style!" resources={{ 
    ButtonForeground: "#00fff1",
    ButtonForegroundPressed: "#2090ff",
    }} />
```

