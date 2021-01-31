import React from "react";
import { NativeSyntheticEvent, requireNativeComponent } from "react-native";
import { XamlControlProps } from './index';
//import { styles } from "./styles.ts";

let NativeXamlControl = requireNativeComponent<XamlControlProps>("XamlControl");


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