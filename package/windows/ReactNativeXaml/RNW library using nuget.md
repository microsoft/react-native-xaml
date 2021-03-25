
# To create a view manager that uses NuGet

1. Modify project to remove references to npm package:

```diff
-   <ReactNativeWindowsDir Condition="'$(ReactNativeWindowsDir)' == ''">$([MSBuild]::GetDirectoryNameOfFileAbove($(SolutionDir), 'node_modules\react-native-windows\package.json'))\node_modules\react-native-windows\</ReactNativeWindowsDir>
+    <ReactNativeWindowsDir>$(SolutionDir)\packages\Microsoft.ReactNative.0.64.0\package</ReactNativeWindowsDir>

-   <Import Project="$(ReactNativeWindowsDir)\PropertySheets\external\Microsoft.ReactNative.Uwp.CppLib.props" Condition="Exists('$(ReactNativeWindowsDir)\PropertySheets\External\Microsoft.ReactNative.Uwp.CppLib.props')" />
-   <Import Project="$(SolutionDir)\packages\$(WinUIPackageProps)" Condition="'$(WinUIPackageProps)'!='' And Exists('$(SolutionDir)\packages\$(WinUIPackageProps)')" />


-   <Import Project="$(ReactNativeWindowsDir)\PropertySheets\External\Microsoft.ReactNative.Uwp.CppLib.targets" Condition="Exists('$(ReactNativeWindowsDir)\PropertySheets\External\Microsoft.ReactNative.Uwp.CppLib.targets')" />

-   <Error Condition="!Exists('$(ReactNativeWindowsDir)\PropertySheets\External\Microsoft.ReactNative.Uwp.CppLib.props')" Text="$([System.String]::Format('$(ErrorText)', '$(ReactNativeWindowsDir)\PropertySheets\External\Microsoft.ReactNative.Uwp.CppLib.props'))" />
-   <Error Condition="!Exists('$(ReactNativeWindowsDir)\PropertySheets\External\Microsoft.ReactNative.Uwp.CppLib.targets')" Text="$([System.String]::Format('$(ErrorText)', '$(ReactNativeWindowsDir)\PropertySheets\External\Microsoft.ReactNative.Uwp.CppLib.targets'))" />


```

2. Reference the NuGet packages:
    - `Microsoft.ReactNative`
    - `Microsoft.ReactNative.Cxx`

3. Add the package.json file from npm into `$(SolutionDir)\packages\Microsoft.ReactNative.0.64.0\package`

# Same steps for app

`npx react-native-windows-init  --overwrite --experimentalNuGetDependency true`
This however installs the npm RNW package too, seems unnecessary.
