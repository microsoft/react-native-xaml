import React from "react";
import { NativeSyntheticEvent, requireNativeComponent, ViewProps } from "react-native";
//import { styles } from "./styles.ts";

let NativeXamlControl = requireNativeComponent<XamlControlProps>("XamlControl");

export interface XamlControlProps extends ViewProps {
    readonly type: string;
    readonly text: string;
    readonly onClick?: (
        event: NativeSyntheticEvent<undefined>
      ) => void;
}

export const XamlControl: React.FC<XamlControlProps> = ({
    type,
    text,
    onClick
  }) => {
//    const accessibilityLabel = text;
    return (
        <NativeXamlControl type={type} style={{height:34,width:34,backgroundColor:"red"}} text={text} 
         onClick={onClick ? onClick : () => {
              console.log("Hi!!"); 
            }}
        />
    );
};