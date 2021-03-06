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
- Wrapping arbitrary app defined UserControls

## Not yet implemented:
- Reduce DLL size further. Currently the Release x64 version is about 800 kB, but can likely be trimmed down further.
- Code-gen the TypeScript information so that apps can use friendly type names and get IntelliSense for properties, instead of using NativeXamlControl directly.
- Evaluate code-gen’ing separate view managers with independent properties/events/etc. instead of a single one.
- Currently doesn't emit property setter for a XAML properties whose names conflict with ViewProps props (e.g. Stlye); this seems to only impact the Map control.
- Emit WinUI 3 elements instead.

## Demo

![react-native-xaml demo](https://raw.githubusercontent.com/asklar/react-native-xaml/main/example/rnx.gif)

## Design
For background on React Native for Windows View Managers, see the [documentation](https://microsoft.github.io/react-native-windows/docs/view-managers).

### Metadata generation
The story starts with react-native-xaml's code-generation phase. This is implemented in the CodeGen project. This is a .NET Core console app which can parse a [Windows Metadata](https://docs.microsoft.com/uwp/winrt-cref/winmd-files) assembly.
Once the assembly is parsed into memory, CodeGen will find all of the types that it needs to make available to JavaScript, and generate both the required TypeScript information (props, types) as well as metadata about these types.
This metadata will then be consumed by the ReactNativeXaml project which is the implementation of the react-native-xaml View Manager. The metadata consists of the following:
- Maps JS type names to constructors of XAML objects. These are used by the RN props to specify how to create a given XAML type from JS.
- Maps JS property names to a list of XAML types that have those properties, as well as what JS type the property is, and information about how to set those properties.
- Maps JS event names to attachment handlers. When a new XAML object is created from react-native-xaml, the library will figure out which events to create event handlers from based on this metadata. 
- Maps enum value names to functions that can parse the strings and give back the enum value themselves. This might go away with https://github.com/asklar/react-native-xaml/issues/19.

CodeGen will generate metadata for XAML properties if all these conditions are true:
- They are instance properties (non-static), public, and have a setter
- They are a simple type (int, bool, double, string, Color/Brush/SolidColorBrush, Thickness, or an enum), or of type IInspectable (Object).
- They are backed by a DependencyProperty on the type
- Their name does not conflict with an existing ViewProps JS property (e.g. Style, Width, Height, Padding): https://github.com/asklar/react-native-xaml/issues/6
- Support for attached properties is not yet implemented: https://github.com/asklar/react-native-xaml/issues/31

Properties like Content that are of type IInspectable are mapped to JS object. You can specify a boxed string by passing an object with a string field: `{string: "my string value"}`.

Events are created as long as their names don't conflict with existing registrations (e.g. onKeyUp/onKeyDown is already taken by the RNW framework so those events are not registered by react-native-xaml): https://github.com/asklar/react-native-xaml/issues/32

By default, CodeGen will only look for the Windows 10 SDK (10.0.19041.0, version 2004). You can install it from Visual Studio's installer or [here](https://developer.microsoft.com/windows/downloads/windows-10-sdk/).
It is also possible to pass any number of custom WinMD files representing Windows Runtime components. Any UserControls that are defined in those projects will be added to the metadata tables as well as the 19041 SDK XAML types.
To use custom WinMDs to generate a custom projection, pass the `-winmd path\to\the.winmd` flag to CodeGen. You can pass this option multiple times for different winmd files.

### FrameworkElement
The React Native for Windows API for View Managers is based on FrameworkElement. 
This makes it tricky to host anything that does not derive from FrameworkElement (e.g. other UIElements such as Text, or any descendant of FlyoutBase). To work around this limitation, when RN asks react-native-xaml to create one of these non FrameworkElement types, we wrap it inside a "wrapping" ContentControl. Then, when RN calls us back to attach the newly created element to its parent, we will unwrap the ContentControl (get its content), and attach the object we previously wrapped.

There are cases where we might want to expose a property to JavaScript in a way that doesn't match its XAML behavior. Consider Sometimes, 

### TypeScript type information
In addition to producing the C++ metadata so that the ReactNativeXaml can know how to create the XAML types at runtime and set properties and event handlers, it is also necessary for CodeGen to produce TypeScript type information so that apps can have a natural dev experience.
CodeGen will produce these props and types in the package\src directory. After running codegen you will need to run `yarn build` to compile them and use in your app.

## Using a custom UserControl
Here we'll look at how to leverage the best of both worlds: a native XAML control, with code behind, being instantiated naturally from React Native for Windows.

### Setup
You'll need a Windows Runtime Component that has a UserControl for this. You can easily create one in Visual Studio if you don't have one already:
- Ensure you have the C++/WinRT VSIX - this will install the necessary project templates.
- Create a Windows Runtime Component (C++/WinRT)
- Right click on the project and click *Add* then select UserControl. This will create a blank user control, let's call it `BlankUserControl`.
You will need to fill in the `BlankUserControl.idl` as well as the corresponding implementation (`.h` and `.cpp` files).
For more info on authoring UserControls with C++/WinRT, see [XAML custom (templated) controls with C++/WinRT](https://docs.microsoft.com/windows/uwp/cpp-and-winrt-apis/xaml-cust-ctrl) and related C++/WinRT docs.

### Getting the projection
The first step is to produce an updated projection. The projection that ships in the react-native-xaml package only contains Windows.UI.Xaml (XAML framework) types.
In order to generate a new projection that contains those types and also your UserControl, you must run `dotnet run codegen -winmd myRuntimeComponent.winmd`
This will produce updated files in two locations:
- the C++ metadata in the ReactNativeXaml project, under `\package\windows\ReactNativeXaml\Codegen`,
- the TS type information, under `\package\src`

### Compiling the TypeScript
Run `yarn build` from the `package` folder

### Referencing your Runtime Component from the View Manager
Right click on ReactNativeXaml in Visual Studio, and add a reference to your RuntimeComponent project. This is necessary so that the C++ code is able to use the generated metadata via C++/WinRT.
Once you build the RuntimeComponent project, you can instead just reference the built RuntimeComponent WinMD file.

### Use it in your app!
Build your solution, which should include:
- Your app project (there is an example project in the repo)
- the ReactNativeXaml project
- the RuntimeComponent project(s) which contain your UserControl; or a winmd reference to RuntimeComponent.

Now you can use the new UserControl in your JSX:
```jsx
	<BlankUserControl  onHappened={(arg) => alert(JSON.stringify(arg.nativeEvent)) } />
```

When running your app, you will get both the hot reload experience from using the Metro bundler, as well as hot reload from Visual Studio!
This means you can change your XAML markup file for your UserControl in real time, and changes will be immediately applied. This is limited to XAML usage within the XAML markup. 

If you need to add/change code behind, or the set of properties and events in your UserControl, you will need to rebuild the RuntimeComponent library, re-run CodeGen, and rebuild your TS.

### Try the example
In order to try the example app with the sample RuntimeComponent BlankUserControl, you need to:
1. Add the RuntimeComponent1 library (example\windows\RuntimeComponent1) into the ReactNativeXaml project in Visual Studio
2. rerun codegen
3. rebuild the TS
4. Ensure your app references the runtime component project or winmd.
5. Build your app
6. Uncomment the lines in example\App.tsx that use BlankUserControl

Example of steps 2 and 3:
```
cd MyApp
dotnet run -p .\node_modules\react-native-xaml\Codegen -- -winmd "E:\react-native-xaml\example\windows\RuntimeComponent1\Debug\Merged\RuntimeComponent1.winmd"
cd node_modules\react-native-xaml
yarn build
```
