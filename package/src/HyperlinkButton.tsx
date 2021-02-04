import type {HyperlinkButtonProps} from './Props';
import React from 'react';
import { NativeXamlControl } from './NativeXamlControl';

export const HyperlinkButton: React.FC<HyperlinkButtonProps> = (props : HyperlinkButtonProps) => {
  //    const accessibilityLabel = text;
    return (
        <NativeXamlControl type="hyperlinkButton" {...props} />
    );
  };