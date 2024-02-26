# react-native-xaml

## Getting started

`$ npm install react-native-xaml --save`

Ensure you're using React Native Windows >= 0.69.0.

Ensure your app is using WinUI 2.7+. For details about customizing WinUI versions in your React Native for Windows app, see [Customizing SDK versions](https://microsoft.github.io/react-native-windows/docs/customizing-sdk-versions).

### Mostly automatic installation

`$ react-native link react-native-xaml`

## Usage

See the [Usage guide](https://github.com/microsoft/react-native-xaml/blob/main/USAGE.md) for details and lots of examples.

```javascript
import { HyperlinkButton, } from 'react-native-xaml';

<HyperlinkButton 
  text="Hello from XAML" 
  style={{ width:150, height:40 }} 
  onClick={() => {
    alert("clicked!");
  }} />
```
