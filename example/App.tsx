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
  ContentDialogState,
  ContentDialog,
  ContentDialogButton,
  ContentDialogResult,
  Path,
  HorizontalAlignment,
  VerticalAlignment,
  CommandBar,
  CommandBarDefaultLabelPosition,
  AppBarButton,
  Symbol,
  Orientation,
  SymbolIcon,
  Canvas,
  Viewbox,
  Ellipse,
  Grid,
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
  const [isOpen, setIsOpen] = useState(ContentDialogState.Hidden);
  const [option, setOption] = useState('');
  return (
    <SafeAreaView style={backgroundStyle}>
      <StatusBar barStyle={isDarkMode ? 'light-content' : 'dark-content'} />
      <ScrollView
        contentInsetAdjustmentBehavior="automatic"
        style={backgroundStyle}>
        <View>
          <Text style={{fontSize: 36, textAlign: 'center', padding: 42}}>
            Welcome to React Native XAML
          </Text>
        </View>

        {/* <Viewbox width={48} height={48}> */}
        <Canvas height={512} width={512}>
          <Grid>
            <Ellipse
              height={512}
              width={512}
              fill="blue"
              canvasLeft={0}
              canvasTop={0}
              canvasZIndex={0}
            />
            <Path
              data="M131 277H38v18h79l14-18zm-93 52h55l13-18H38v18zm117-86H38v19h104l13-19zm156-6l-16 23c-2 3-7 9 7 9h71l21-29c14-19 2-57-47-57H158l-32 45h181c9 0 9 3 4 9zm100 6l-13 18h76v-18h-63zm-50 42H249c-14 0-10-6-7-9l17-23c4-6 7-10-2-10h-82l-63 86h161c48 0 76-29 88-44zm12 10h101v-18h-88l-13 18zm-25 34h126v-18H362l-14 18z"
              fill="#d40511"
              canvasLeft={100}
              canvasTop={150}
              canvasZIndex={1}
            />
          </Grid>
        </Canvas>
        {/* </Viewbox> */}
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
