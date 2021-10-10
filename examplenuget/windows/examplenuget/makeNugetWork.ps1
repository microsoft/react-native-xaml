$rnx = Split-Path $PWD
copy $rnx\node_modules\react-native-windows\PropertySheet* $rnx\examplenuget\windows\packages\Microsoft.ReactNative.0.64.0\package\ -Recurse

#   C:\Users\asklar\source\repos\react-native-xaml\examplenuget\windows\packages\Microsoft.ReactNative.0.64.0\package\PropertySheets\External\Microsoft.ReactNative.Uwp.CppLib.targets
#   <ItemGroup Condition="'$(UseExperimentalNuget)' == 'true'">
#     <Reference Include="$(ReactNativeWindowsDir)\..\lib\uap10.0\Microsoft.ReactNative.winmd" />
#   </ItemGroup>


# C:\Users\asklar\source\repos\react-native-xaml\examplenuget\windows\packages\Microsoft.ReactNative.Cxx.0.64.0\build\native\Microsoft.ReactNative.Cxx.targets
#  <ItemDefinitionGroup Condition="'$(UseExperimentalNuget)' == 'true'">
#<ClCompile>
#<AdditionalIncludeDirectories>%(AdditionalIncludeDirectories);$(MSBuildThisFileDirectory)\..\..\tools\Microsoft.ReactNative.Cxx</AdditionalIncludeDirectories>
#</ClCompile>
#<Midl>
#<AdditionalIncludeDirectories>%(AdditionalIncludeDirectories);$(MSBuildThisFileDirectory)\..\..\tools\Microsoft.ReactNative.Cxx</AdditionalIncludeDirectories>
#</Midl>

#</ItemDefinitionGroup>
