import type { ViewProps, NativeSyntheticEvent, ColorValue } from 'react-native';

interface NativeHyperlinkButtonProps extends ViewProps { 
  type: 'hyperlinkButton';
  content?: object;
  foreground?: ColorValue;
  onClick?: (event: NativeSyntheticEvent<undefined>) => void;
}
export type HyperlinkButtonProps = Omit<NativeHyperlinkButtonProps, 'type'>;

export interface NativeTextBlockProps extends ViewProps {
  type: 'textBlock';
  text?: string;
  foreground?: ColorValue;
}

export type XamlControlProps = NativeHyperlinkButtonProps | NativeTextBlockProps;
