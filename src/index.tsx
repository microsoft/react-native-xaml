import { NativeModules } from 'react-native';
import { XamlControl } from './XamlControl';

const { Xaml } = NativeModules;

export default { Xaml, XamlControl, XamlControlProps };
