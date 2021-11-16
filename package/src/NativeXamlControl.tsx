// @refresh reset

import { requireNativeComponent } from "react-native";
import type { XamlControlProps } from './Props';

export const NativeXamlControl = requireNativeComponent<XamlControlProps>("XamlControl");
