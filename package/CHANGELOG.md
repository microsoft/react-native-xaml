# Change Log - react-native-xaml

This log was last generated on Mon, 26 Feb 2024 19:13:51 GMT and should not be manually modified.

<!-- Start content -->

## 0.0.78

Mon, 26 Feb 2024 19:13:51 GMT

### Patches

- Require RNW >= 0.69.0 (jthysell@microsoft.com)
- Remove dependency on @types/react-native (30809111+acoates-ms@users.noreply.github.com)

## 0.0.77

Tue, 06 Feb 2024 18:55:04 GMT

### Patches

- Upgrade to RNW 0.73 (jthysell@microsoft.com)
- Fix EventAttachInfo struct so it holds onto a ref-counted instance of XamlMetadata, as well as removes dangerous pass-by-reference instances when dealing with async code. (maxben@microsoft.com)

## 0.0.76

Tue, 22 Aug 2023 17:45:12 GMT

### Patches

- Fix unquoted properties in vcxproj conditions (jthysell@microsoft.com)

## 0.0.75

Mon, 21 Aug 2023 21:51:27 GMT

### Patches

- Clean up formatting and licenses (jthysell@microsoft.com)
- Upgrade RNX to target RN and RNW 0.72 (jthysell@microsoft.com)
- bump windowsTargetMin (tatianakapos@microsoft.com)

## 0.0.74

Tue, 14 Mar 2023 21:30:43 GMT

### Patches

- simplify overload resolution for SetPropValue (asklar@microsoft.com)

## 0.0.73

Wed, 08 Mar 2023 18:09:16 GMT

### Patches

- Avoid throwing away native module calls. (30809111+acoates-ms@users.noreply.github.com)

## 0.0.72

Thu, 02 Mar 2023 01:29:44 GMT

### Patches

- Upgrade to WinUI 2.7 (jthysell@microsoft.com)
- Upgrade minimum RNW dependency to 0.67.11 (jthysell@microsoft.com)

## 0.0.71

Mon, 07 Nov 2022 22:45:17 GMT

### Patches

- Add target to optionally run CodeGen before ReactNativeXaml build (jthysell@microsoft.com)
- Enable PackageReference support if available (jthysell@microsoft.com)

## 0.0.70

Sun, 25 Sep 2022 05:36:46 GMT

### Patches

- restore OnContentDialogClosed since we need the return value from the show operation (asklar@microsoft.com)

## 0.0.69

Tue, 13 Sep 2022 21:38:24 GMT

### Patches

- Redo typings and how we handle references so that we can call focus (and blur) (asklar@microsoft.com)

## 0.0.68

Fri, 02 Sep 2022 20:18:20 GMT

### Patches

- Fix build break when RNW_REACTTAG_API is defined (jthysell@microsoft.com)

## 0.0.67

Thu, 01 Sep 2022 19:01:22 GMT

### Patches

- Update to consume new ReactTag APIs (jthysell@microsoft.com)

## 0.0.66

Tue, 30 Aug 2022 19:18:51 GMT

### Patches

- Adjust TSTypes (34109996+chiaramooney@users.noreply.github.com)

## 0.0.65

Tue, 30 Aug 2022 00:15:16 GMT

### Patches

- codeql_fix (agnel@microsoft.com)

## 0.0.64

Tue, 21 Jun 2022 18:27:36 GMT

### Patches

- Add support for MenuFlyoutSubitem (asklar@microsoft.com)

## 0.0.63

Wed, 13 Apr 2022 21:16:52 GMT

### Patches

- Remove implicit dependency on ColorHelper (asklar@microsoft.com)

## 0.0.62

Sun, 20 Feb 2022 03:58:46 GMT

### Patches

- Export event args types from Types.tsx as well so they can be mentioned in apps (asklar@microsoft.com)

## 0.0.61

Mon, 14 Feb 2022 08:09:35 GMT

### Patches

- Fix some prop types not being codegen'd because they are treated as nullable, like Color (asklar@microsoft.com)

## 0.0.60

Thu, 10 Feb 2022 17:17:17 GMT

### Patches

- Fix Bug in MenuBar (34109996+chiaramooney@users.noreply.github.com)

## 0.0.59

Thu, 27 Jan 2022 14:11:26 GMT

### Patches

- Reorder TS enums to work around babel bug (asklar@microsoft.com)

## 0.0.58

Wed, 26 Jan 2022 23:21:29 GMT

### Patches

- format (asklar@microsoft.com)

## 0.0.57

Mon, 24 Jan 2022 21:16:18 GMT

### Patches

- Codegen event arg methods (asklar@microsoft.com)

## 0.0.56

Fri, 21 Jan 2022 17:41:16 GMT

### Patches

- Update version (asklar@microsoft.com)

## 0.0.54

Fri, 21 Jan 2022 02:47:33 GMT

### Patches

- Enable calling some methods on EventArgs objects (asklar@microsoft.com)

## 0.0.53

Sat, 13 Nov 2021 02:37:41 GMT

### Patches

- MenuFlyout ShowAt command (asklar@microsoft.com)

## 0.0.52

Thu, 11 Nov 2021 22:24:47 GMT

### Patches

- Support infobar ActionButton (asklar@microsoft.com)

## 0.0.51

Sun, 07 Nov 2021 21:01:35 GMT

### Patches

- ado pipeline builds nuget example (asklar@microsoft.com)

## 0.0.50

Fri, 05 Nov 2021 22:29:53 GMT

### Patches

- Include version information in the DLL (asklar@microsoft.com)

## 0.0.49

Fri, 05 Nov 2021 17:42:39 GMT

### Patches

- Introduce MenuFlyoutPriority (asklar@microsoft.com)

## 0.0.48

Fri, 05 Nov 2021 16:43:47 GMT

### Patches

- Fix isOpen (asklar@microsoft.com)
- MenuFlyoutItem Icon support (asklar@microsoft.com)

## 0.0.47

Fri, 05 Nov 2021 04:42:35 GMT

### Patches

- MenuFlyoutItem Icon support (asklar@microsoft.com)
- Support SVG and PNG inline data (asklar@microsoft.com)
- MenuFlyoutItem Icon support (asklar@microsoft.com)

## 0.0.46

Tue, 05 Oct 2021 19:13:22 GMT

### Patches

- Use beachball (asklar@microsoft.com)
