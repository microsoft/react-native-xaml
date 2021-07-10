/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow strict-local
 */

import React from 'react';
import type {Node} from 'react';
import {useState} from 'react';

import {
  SafeAreaView,
  ScrollView,
  StatusBar,
  StyleSheet,
  Text,
  useColorScheme,
  View,
} from 'react-native';

import {
  Colors,
  DebugInstructions,
  Header,
  LearnMoreLinks,
  ReloadInstructions,
} from 'react-native/Libraries/NewAppScreen';

import {
  HyperlinkButton,
  Border,
  TextBlock,
  StackPanel,
  Button,
  ComboBox,
  ComboBoxItem,
  NativeXamlControl,
  MenuFlyoutItem,
  TextBox,
  // BlankUserControl,
  ClickMode,
  MenuFlyout,
  RichTextBlock,
  Run,
  Italic,
  LineBreak,
  Hyperlink,
  NavigationView,
  NavigationViewItem,
  NavigationViewItemHeader,
  FontIcon,
  TextAlignment,
  FontWeights,
  FontStyle,
  Image,
  RectangleProps,
  Rectangle,
  HorizontalAlignment,
} from 'react-native-xaml';

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

  const [count, setCount] = useState(0);
  const [isOpen, setIsOpen] = useState(false);
  const [option, setOption] = useState('');
  return (
    <SafeAreaView style={backgroundStyle}>
      <StatusBar barStyle={isDarkMode ? 'light-content' : 'dark-content'} />
      <ScrollView
        contentInsetAdjustmentBehavior="automatic"
        style={backgroundStyle}>
        <View>
          <TextBlock
            fontSize={24}
            textAlignment={TextAlignment.Center}
            padding={42}
            fontWeight={FontWeights.Normal}>
            <Run text="Welcome to React Native " />
            <Run text="XAML" fontSize={36} fontStyle={FontStyle.Oblique} />
          </TextBlock>
        </View>
        <View
          style={{
            backgroundColor: isDarkMode ? Colors.black : Colors.white,
          }}>

          <Button
            width={80}
            background="#ff0000"
            // foreground="#29ff92"
            content="button"
            horizontalAlignment={HorizontalAlignment.Center}
            dropShadow={{blurRadius: 19, offset: [2, 2, 0], opacity: 1}}
          />
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
