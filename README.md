[![CI](https://github.com/microsoft/react-native-xaml/actions/workflows/main.yml/badge.svg)](https://github.com/microsoft/react-native-xaml/actions/workflows/main.yml)
# react-native-xaml
A React Native Windows view manager that allows directly using the [Windows XAML](https://docs.microsoft.com/windows/uwp/xaml-platform/xaml-overview) framework.

## Cheat sheet
To see examples of the syntax and available controls, check out the [Usage guide](https://github.com/microsoft/react-native-xaml/tree/main/USAGE.md).

## Main advantages
-	Allows developers writing [react-native-windows](https://microsoft.github.io/react-native-windows/) apps (React Native apps targeting Windows 10) to quickly get started, if they are familiar with XAML.
-	Developers are not limited by the set of controls present today in RNW and community modules that support Windows. 
-	Best of all, this solution is available *today*!
-	The set of types/properties/events are the XAML ones, however JS libraries can wrap those to expose the Windows control in a platform-agnostic way (e.g. as a way to implement a cross-plat control for Windows).

react-native-xaml works by leveraging metadata for XAML properties, types and events. This metadata is automatically generated ([code-gen](https://github.com/microsoft/react-native-xaml/tree/main/package/Codegen)) from the Windows SDK.
This means we can have a full projection of all of XAML – or any WinRT components written by app devs, that export a [UserControl](https://docs.microsoft.com/uwp/api/Windows.UI.Xaml.Controls.UserControl) – without manual intervention.

## Technical details
See [Technical Guide](TechnicalGuide.md).

## Contributing
Pull Requests are welcome. See [Contribution Guide](CONTRIBUTING.md) for details.

## Demo

![react-native-xaml demo](https://raw.githubusercontent.com/microsoft/react-native-xaml/main/example/rnx.gif)

