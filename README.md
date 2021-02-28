[![CI](https://github.com/asklar/react-native-xaml/actions/workflows/main.yml/badge.svg)](https://github.com/asklar/react-native-xaml/actions/workflows/main.yml)
# react-native-xaml
A React Native Windows view manager that allows directly using the [Windows XAML](https://docs.microsoft.com/windows/uwp/xaml-platform/xaml-overview) framework.

## Main advantages
-	Allows developers writing [react-native-windows](https://microsoft.github.io/react-native-windows/) apps (React Native apps targeting Windows 10) to quickly get started, if they are familiar with XAML.
-	Developers are not limited by the set of controls present today in RNW and community modules that support Windows. 
-	Best of all, this solution is available *today*!
-	The set of types/properties/events are the XAML ones, however JS libraries can wrap those to expose the Windows control in a platform-agnostic way (e.g. as a way to implement a cross-plat control for Windows).

react-native-xaml works by leveraging metadata for XAML properties, types and events. This metadata is automatically generated ([code-gen](https://github.com/asklar/react-native-xaml/tree/main/codegen/Codegen)) from the Windows SDK.
This means we can have a full projection of all of XAML – or any WinRT components written by app devs, that export a [UserControl](https://docs.microsoft.com/uwp/api/Windows.UI.Xaml.Controls.UserControl) – without manual intervention.

## Technical details:
The CodeGen app in react-native-xaml is a C# net core console app that uses the [Middleweight Reflection](https://github.com/MikeHillberg/middleweight-reflection) library to parse a Windows metadata file from the Windows 10 SDK (windows.winmd).
The app then uses [T4 runtime templates](https://docs.microsoft.com/visualstudio/modeling/run-time-text-generation-with-t4-text-templates) to produce some [C++/WinRT](https://github.com/microsoft/cppwinrt) code that gets compiled into the react-native-xaml View Manager. The generated code implements the metadata tables for what XAML types exist, their names, how to create them, what properties and events each type supports, etc.
With this approach developers can write JSX code as shown in the below GIF. `NativeXamlControl` is the base control exposed to TS, and `HyperlinkButton` and `TextBlock` are aliases where they set the type property.

## Implemented features:
- All creatable XAML types can be created.
- All properties of type int, double, float, string, color/brush can be set. Some special casing for properties of type Object (e.g. Content).
- All events are wired up (see GIF below, clicking on a hyperlink button calls into the JS to execute the onClick handler!).
- Children are supported for Panel, ContentControl, Border and ItemsControl (and their subclasses).
- TypeScript typings for all wrapped XAML types.

## Not yet implemented:
- Reduce DLL size further. Currently the Release x64 version is about 800 kB, but can likely be trimmed down further.
- Code-gen the TypeScript information so that apps can use friendly type names and get IntelliSense for properties, instead of using NativeXamlControl directly.
- Evaluate code-gen’ing separate view managers with independent properties/events/etc. instead of a single one.
- Currently doesn't emit property setter for a property named Style (since it would conflict with style from ViewProps); this only impacts the Map control.
- Emit WinUI 3 elements instead.

## Demo

![react-native-xaml demo](https://raw.githubusercontent.com/asklar/react-native-xaml/main/example/rnx.gif)
