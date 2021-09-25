// @refresh reset

import React from "react";
import { requireNativeComponent } from "react-native";
import type { XamlControlProps } from './Props';

export const NativeXamlControl = requireNativeComponent<XamlControlProps>("XamlControl");

export class NativeXamlControlCC extends React.Component<XamlControlProps> {
}