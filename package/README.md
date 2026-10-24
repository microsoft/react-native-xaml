# react-native-xaml

> [!IMPORTANT]
> **Deprecated - no longer maintained**
>
> As of 2026-10-24, react-native-xaml is no longer maintained.
> No further maintenance, bug fixes, or security updates are planned.
> Source code, history, and existing releases remain available for reference.
>
> This project does not provide a direct replacement. This deprecation applies
> only to react-native-xaml, not to React Native for Windows.
>
> For security vulnerability reporting, follow the
> [security reporting instructions](https://github.com/microsoft/react-native-xaml/blob/main/SECURITY.md).

The installation and usage instructions below are retained for historical reference.

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
