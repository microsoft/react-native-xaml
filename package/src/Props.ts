import type { ViewProps, NativeSyntheticEvent, ColorValue } from 'react-native';

interface NativeHyperlinkButtonProps extends ViewProps { 
  type: 'hyperlinkButton';
  text?: string;
  color?: ColorValue;
  onClick?: (event: NativeSyntheticEvent<undefined>) => void;
}
export type HyperlinkButtonProps = Omit<NativeHyperlinkButtonProps, 'type'>;

export interface NativeTextBlockProps extends ViewProps {
  type: 'textblock';
  text?: string;
  color?: ColorValue;
}

export type XamlControlProps = NativeHyperlinkButtonProps | NativeTextBlockProps;
