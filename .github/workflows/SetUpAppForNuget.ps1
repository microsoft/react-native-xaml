[CmdletBinding()]
param (
    [switch]
    $UseNuGet,
    [Version]
    $WinUIVersion = "2.6.0"
)

$AppName = Split-Path $PWD -Leaf
Write-Host  App name = $AppName
$ns = "http://schemas.microsoft.com/developer/msbuild/2003"

if (Test-Path .\windows\$AppName\packages.config) {
  [xml]$packagesConfig = Get-Content .\windows\$AppName\packages.config
  ($packagesConfig.packages.package | Where-Object id -EQ 'Microsoft.UI.Xaml').version = $WinUIVersion.ToString()
  $packagesConfig.Save("$PWD\windows\$AppName\packages.config")
}

[xml]$EF = Get-Content .\windows\ExperimentalFeatures.props
$node = $EF.Project.PropertyGroup.WinUI2xVersion
if ($null -eq $node) {
  $node=$EF.CreateElement('WinUI2xVersion', $ns)
  $v=$EF.CreateTextNode($WinUIVersion.ToString())
  $node.AppendChild($v)
  $EF.Project.PropertyGroup.AppendChild($node)
} else {
  $EF.Project.PropertyGroup.WinUI2xVersion = $WinUIVersion.ToString()
}

if ($UseNuGet) {
  $UseNuGetStr = 'true'
} else {
  $UseNuGetStr = 'false'
}

$node = $EF.Project.PropertyGroup.UseExperimentalNuget
if ($null -eq $node) {
  $node = $EF.CreateElement('UseExperimentalNuget', $ns)

  $v = $EF.CreateTextNode($UseNuGetStr)
  $node.AppendChild($v)
  $EF.Project.PropertyGroup.AppendChild($node)
} else {
  $EF.Project.PropertyGroup.UseExperimentalNuget = $UseNuGetStr
}

$packageJson = Get-Content .\package.json | ConvertFrom-Json
$ReactNativeWindowsVersion = $packageJson.dependencies.'react-native-windows'

$node = $EF.Project.PropertyGroup.ReactNativeWindowsVersion
if ($null -eq $node) {
  if ($UseNuGet) {
    $node = $EF.CreateElement('ReactNativeWindowsVersion', $ns)
    $v = $EF.CreateTextNode($ReactNativeWindowsVersion)
    $node.AppendChild($v)
    $EF.Project.PropertyGroup.AppendChild($node)
  } else {
    # not using NuGet and also don't have the prop already
  }
} else {
  if ($UseNuGet) {
    $EF.Project.PropertyGroup.ReactNativeWindowsVersion = $ReactNativeWindowsVersion
  } else {
    foreach ($n in $EF.Project.PropertyGroup.ChildNodes) {
      if ($n.Name -eq 'ReactNativeWindowsVersion') {
        $EF.Project.PropertyGroup.RemoveChild($n)
      }
    }
  }
}

$EF.Save("$PWD\windows\ExperimentalFeatures.props")
