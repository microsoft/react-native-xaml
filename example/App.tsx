/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow strict-local
 */

import React from 'react';
import type {Node} from 'react';
import {
  SafeAreaView,
  ScrollView,
  StatusBar,
  StyleSheet,
  Text,
  useColorScheme,
  View,
  requireNativeComponent,
  ViewProps,
  NativeSyntheticEvent,
  StyleProp,
  ViewStyle
} from 'react-native';

import {
  Colors,
  DebugInstructions,
  Header,
  LearnMoreLinks,
  ReloadInstructions,
} from 'react-native/Libraries/NewAppScreen';

let NativeXamlControl = requireNativeComponent<XamlControlProps>("XamlControl");
interface XamlControlProps extends ViewProps {
  readonly type: string;
  text?: string;
  onClick?: (
      event: NativeSyntheticEvent<undefined>
    ) => void;
  color?: string;
}

const XamlControl: React.FC<XamlControlProps> = ({
  type,
  text,
  onClick,
  style,
  color
}) => {
//    const accessibilityLabel = text;
  return (
      <NativeXamlControl type={type} text={text} style={style}
       onClick={onClick ? onClick : () => {
            console.log("Hi!!"); 
          }} color={color}
      />
  );
};

class HyperlinkButtonProps implements XamlControlProps   { 
  type: string;
  text?: string;
  color?: string;
  onClick?: (event: NativeSyntheticEvent<undefined>) => void;
  style?: StyleProp<ViewStyle>;
  constructor() { this.type = 'hyperlinkButton'; }
}

const HyperlinkButton: React.FC<HyperlinkButtonProps> = ({
  text,
  onClick,
  style,
  color
}) => {
//    const accessibilityLabel = text;
  return (
      <NativeXamlControl type="hyperlinkButton" text={text} style={style} color={color}
       onClick={onClick ? onClick : () => {}}
      />
  );
};

// import { XamlControl } from 'react-native-xaml';

const Section = ({children, title}): Node => {
  const isDarkMode = useColorScheme() === 'dark';
  return (
    <View style={styles.sectionContainer}>
      <Text
        style={[
          styles.sectionTitle,
          {
            color: isDarkMode ? Colors.white : Colors.black,
          },
        ]}>
        {title}
      </Text>
      <Text
        style={[
          styles.sectionDescription,
          {
            color: isDarkMode ? Colors.light : Colors.dark,
          },
        ]}>
        {children}
      </Text>
    </View>
  );
};

const App: () => Node = () => {
  const isDarkMode = useColorScheme() === 'dark';

  const backgroundStyle = {
    backgroundColor: isDarkMode ? Colors.darker : Colors.lighter,
  };

  return (
    <SafeAreaView style={backgroundStyle}>
      <StatusBar barStyle={isDarkMode ? 'light-content' : 'dark-content'} />
      <ScrollView
        contentInsetAdjustmentBehavior="automatic"
        style={backgroundStyle}>
        <Header />
        <View
          style={{
            backgroundColor: isDarkMode ? Colors.black : Colors.white,
          }}>
          <Section title="Step One">
            Edit <Text style={styles.highlight}>App.js</Text> to change this
            screen and then come back to see your edits.
          </Section>
          <HyperlinkButton text="Hello World" style={{width:150,height:40}} onClick={()=>{alert("clicked!");} } />
          <XamlControl type="textblock" style={{width:150,height:40}} text="textblock" color='red' />
          <Section title="See Your Changes">
            <ReloadInstructions />
          </Section>
          <Section title="Debug">
            <DebugInstructions />
          </Section>
          <Section title="Learn More">
            Read the docs to discover what to do next:
          </Section>
          <LearnMoreLinks />
        </View>
      </ScrollView>
    </SafeAreaView>
  );
};

const styles = StyleSheet.create({
  sectionContainer: {
    marginTop: 32,
    paddingHorizontal: 24,
  },
  sectionTitle: {
    fontSize: 24,
    fontWeight: '600',
  },
  sectionDescription: {
    marginTop: 8,
    fontSize: 18,
    fontWeight: '400',
  },
  highlight: {
    fontWeight: '700',
  },
});

export default App;
