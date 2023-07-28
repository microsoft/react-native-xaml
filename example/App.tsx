/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow strict-local
 */

import React from 'react';
import type {PropsWithChildren} from 'react';
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
  WinUI,
  HorizontalAlignment,
  Visibility,
  WinUIEnums,
  SplitView,
  SplitViewPriority,
  SplitViewPanePlacement,
  Grid,
} from 'react-native-xaml';

type SectionProps = PropsWithChildren<{
  title: string;
}>;

function Section({children, title}: SectionProps): JSX.Element {
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
}

function App(): JSX.Element {
  const isDarkMode = useColorScheme() === 'dark';

  const backgroundStyle = {
    backgroundColor: isDarkMode ? Colors.darker : Colors.lighter,
  };

  const [count, setCount] = useState(0);
  const [isOpen, setIsOpen] = useState(false);
  const [option, setOption] = useState('');
  const [visible, setVisible] = useState(Visibility.Visible);
  return (
    <SafeAreaView style={backgroundStyle}>
      <StatusBar barStyle={isDarkMode ? 'light-content' : 'dark-content'} />
      <ScrollView
        contentInsetAdjustmentBehavior="automatic"
        style={backgroundStyle}>
        <WinUI.ProgressRing isActive={true} width={40} />
        <WinUI.InfoBar
          message="the message"
          title="the title"
          isOpen={true}
          visibility={visible}
          onClosed={() => {
            setVisible(Visibility.Collapsed);
          }}
          severity={WinUIEnums.InfoBarSeverity.Success}
          horizontalAlignment={HorizontalAlignment.Center}
        />
        <View>
          <Text style={{fontSize: 36, textAlign: 'center', padding: 42}}>
            Welcome to React Native XAML
          </Text>
        </View>
        <SplitView
          isPaneOpen={isOpen}
          onPaneClosed={() => {
            setIsOpen(false);
          }}
          width={800}
          height={300}
          paneBackground="red"
          panePlacement={SplitViewPanePlacement.Left}>
          <TextBlock
            text="this is in the pane"
            priority={SplitViewPriority.Pane}
            foreground="white"
          />
          <Grid
            background="green"
            priority={SplitViewPriority.Content}
            gridLayout={{rows: [200], columns: [200]}}>
            <TextBlock text="this is in the content" foreground="white" />
          </Grid>
        </SplitView>

        <View
          style={{
            backgroundColor: isDarkMode ? Colors.black : Colors.white,
          }}>
          <Button
            foreground="#992222"
            onTapped={a => {
              setIsOpen(!isOpen);
            }}
            content='button'
          />
          {/* <BlankUserControl  onHappened={(arg) => alert(JSON.stringify(arg.nativeEvent)) } /> */}
          {/* <Button content={`Last selected option = ${option} ${count}`}
                      onClick={(a) => { 
                        alert(JSON.stringify(a.nativeEvent)); 
                        setCount(count + 1); 
                        setIsOpen(true); }}
                      clickMode={ClickMode.Release}
                      resources={{ 
                        ButtonForeground: "#00fff1",
                        ButtonForegroundPressed: "#2090ff",
                     }}
                  /> */}
          <TextBlock foreground="black" padding={20} margin={20}>
            <Run text="hello world!" />
            <LineBreak />
            <Italic>
              <Run text="hi there" />
            </Italic>
            <Hyperlink navigateUri="http://bing.com">
              <Run text="Go to bing" />
            </Hyperlink>
          </TextBlock>
          <NavigationView
            style={{height: 200, width: 120, margin: 20, padding: 40}}>
            <NavigationViewItem content='item 1'>
              <FontIcon glyph="&#xE790;" />
            </NavigationViewItem>
            <NavigationViewItem content='item 2' />
          </NavigationView>
          {/*<StackPanel orientation="horizontal">*/}
          {/*    <HyperlinkButton content="Click me!" onClick={(args) => {*/}
          {/*        alert(`clicked! Native event args: ${JSON.stringify(args.nativeEvent)}`);*/}
          {/*    }} />*/}
          {/*    <Border verticalAlignment="center" background="paleturquoise" >*/}
          {/*        <TextBlock text="this is a textblock" foreground='red' textAlignment="center" />*/}
          {/*    </Border>*/}
          {/*    <TextBlock text="this is another textblock" foreground='green' textAlignment="center" />*/}
          {/*    <Button content="this is a button" onClick={() => { alert("you clicked the button!"); }} />*/}
          {/*</StackPanel>*/}
          <ComboBox
            text="this is a combobox"
            description={{string: 'best bois'}}
            onSelectionChanged={args => {
              alert(
                `sel changed! Native event args: ${JSON.stringify(
                  args.nativeEvent,
                )}`,
              );
            }}>
            <ComboBoxItem content='garfield' foreground="black" />
            <ComboBoxItem content='snoopy' foreground="black" />
          </ComboBox>
          {/* <TextBox text="this is a textbox with a menuFlyout" foreground="red">
                      <MenuFlyout isOpen={isOpen} onClosed={() => {
                          setIsOpen(false);
                      }} >
                          <MenuFlyoutItem text="option 1" onClick={(x) => { alert(JSON.stringify(x.nativeEvent)); setOption("option 1"); }} />
                          <MenuFlyoutItem text="option 2" onClick={() => { alert("clicked 2"); setOption("option 2"); }}/>
                    </MenuFlyout>
                  </TextBox> */}

          {/*<TextBox text="this is a textbox with a flyout" */}
          {/*  foreground="red" >*/}
          {/*  <NativeXamlControl type="flyout" >*/}
          {/*    <Button content="click me" />*/}
          {/*  </NativeXamlControl>*/}
          {/*</TextBox>*/}

          <Section title="Step One">
            Edit <Text style={styles.highlight}>App.js</Text> to change this
            screen and then come back to see your edits.
          </Section>
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
}

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
