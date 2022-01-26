/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow strict-local
 */

import React, {useRef} from 'react';

import {
  findNodeHandle,
  SafeAreaView,
  ScrollView,
  StatusBar,
  StyleSheet,
  Text,
  useColorScheme,
  View,
} from 'react-native';

import {
  TextBox,
  MenuFlyout,
  MenuFlyoutItem,
  TextBlock,
  WinUI,
  MediaPlayerElement,
  Button,
  ContentDialogState,
  ContentDialog,
  ContentDialogButton,
  ContentDialogResult,
} from 'react-native-xaml';
import {
  Colors,
  DebugInstructions,
  Header,
  LearnMoreLinks,
  ReloadInstructions,
} from 'react-native/Libraries/NewAppScreen';

const Section = ({children, title}) => {
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

const App = () => {
  const isDarkMode = useColorScheme() === 'dark';

  const backgroundStyle = {
    backgroundColor: isDarkMode ? Colors.darker : Colors.lighter,
  };

  const menu = useRef<MenuFlyout>(null);
  const _tbRef = React.useRef<TextBlock>(null);
  const _mpRef = React.useRef<MediaPlayerElement>(null);
  const [x, setX] = React.useState("100");

  const [showState, setShowState] = React.useState(ContentDialogState.Hidden);


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
          <TextBox
            text={`x`}
            onBeforeTextChanging={e => {
              if (e.nativeEvent.args) {
                setX(e.nativeEvent.args.newText);
              }
            }}
          />

          <Button
            onTapped={a => {setShowState(ContentDialogState.Popup);}}
            content="click to open a ContentDialog" />

          <ContentDialog
            showState={showState}
            defaultButton={ContentDialogButton.Close}
            title="the title"
            content="this is the content"
            closeButtonText="close"
            primaryButtonText="primary"
            secondaryButtonText="secondary"
            onPrimaryButtonClick={e => {
              alert('primary');
            }}
            onSecondaryButtonClick={e => {
              alert('secondary');
            }}
            onClosed={e => {
              setShowState(ContentDialogState.Hidden)
              alert(JSON.stringify(e.nativeEvent.args));
            }}
             />


          <TextBlock
            text="Hello"
            onTapped={e => {
              MenuFlyout.ShowAt(menu, {point: {x: parseInt(x), y: 42}});
            }}
            ref={t => {
              _tbRef.current = t;
            }}
            onContextRequested={e => {
              const tag = findNodeHandle(_tbRef.current);

              const { point, returnValue } = e.nativeEvent.args.TryGetPosition(tag);
              MenuFlyout.ShowAt(menu, { point: point });
            }}
            >
            <MenuFlyout
              ref={m => {
                menu.current = m;
              }}
              >
              <MenuFlyoutItem text="menu option" />
            </MenuFlyout>
          </TextBlock>
          <WinUI.ColorPicker onColorChanged={e => {
            alert(JSON.stringify(e.nativeEvent.args.newColor));
          }} />
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
