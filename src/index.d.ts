import { ViewProps, NativeSyntheticEvent } from 'react-native';

export interface XamlControlProps extends ViewProps {
    readonly type: string;
    readonly text: string;
    readonly onClick?: (
        event: NativeSyntheticEvent<undefined>
      ) => void;
}