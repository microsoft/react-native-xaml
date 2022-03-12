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
  ColorPicker,
  Color,
  HorizontalAlignment,
  TextAlignment,
  FontStyle,
} from 'react-native-xaml';
import {
  Colors,
  DebugInstructions,
  Header,
  LearnMoreLinks,
  ReloadInstructions,
} from 'react-native/Libraries/NewAppScreen';

import './WinRTTurboModule';

const Notifications = Windows.UI.Notifications;
const ToastTemplateType = Notifications.ToastTemplateType;
const ToastNotificationManager = Notifications.ToastNotificationManager;
const ToastNotification = Notifications.ToastNotification;

export function showNotification(notification) {
  var type = ToastTemplateType.toastText01;

  var obj = {};
  if (typeof notification === 'string') {
    obj.text = notification;
  } else {
    obj = notification;
  }

  if (obj.template != undefined) {
    type = obj.template;
  }

  var xml = ToastNotificationManager.getTemplateContent(type);
  for (var tagName in obj) {
    var xmlElements = xml.getElementsByTagName(tagName);
    var value = obj[tagName];
    if (typeof value === 'string') {
      fillXmlElements(xml, xmlElements, [value]);
    } else if (Array.isArray(value)) {
      fillXmlElements(xml, xmlElements, value);
    } else if (typeof value === 'object') {
      fillXmlElements(xml, xmlElements, [value]);
    }
  }

  var toast = new ToastNotification(xml);
  ToastNotificationManager.createToastNotifier().show(toast);
}

function fillXmlElements(xml, xmlElements, arr) {
  var i = 0;
  for (var arrValue of arr) {
    var node = xmlElements[i++];
    if (typeof arrValue === 'string') {
      node.appendChild(xml.createTextNode(arrValue));
    } else if (typeof arrValue === 'object') {
      for (var attrName in arrValue) {
        var attr = node.attributes.getNamedItem(attrName);
        if (!attr) {
          attr = xml.createAttribute(attrName);
          node.attributes.setNamedItem(attr);
        }

        attr.nodeValue = arrValue[attrName];
      }
    }
  }
}

const App = () => {
  const isDarkMode = useColorScheme() === 'dark';

  const backgroundStyle = {
    backgroundColor: isDarkMode ? Colors.darker : Colors.lighter,
  };

  const [i, setI] = React.useState(1);

  return (
    <SafeAreaView style={backgroundStyle}>
      <StatusBar barStyle={isDarkMode ? 'light-content' : 'dark-content'} />
      <ScrollView
        contentInsetAdjustmentBehavior="automatic"
        style={backgroundStyle}>
        <TextBlock
          textAlignment={TextAlignment.Center}
          fontSize={48}
          fontStyle={FontStyle.Italic}
          text="Welcome to React Native WinRT + XAML 2"
        />
        <View
          style={{
            backgroundColor: isDarkMode ? Colors.black : Colors.white,
          }}>
          <WinUI.ColorPicker
            onColorChanged={e => {
              setI(i + 1);
              const color = e.nativeEvent.args.newColor as Color;
              const hexColor = `${color.r.toString(16)}${color.g.toString(
                16,
              )}${color.b.toString(16)}`;
              showNotification({
                template:
                  Windows.UI.Notifications.ToastTemplateType
                    .toastImageAndText01,
                // The template schema can be found at https://docs.microsoft.com/previous-versions/windows/apps/hh761494(v=win.10)
                text: `hello world ${JSON.stringify(
                  e.nativeEvent.args.newColor,
                )}`,
                image: {
                  src: `https://singlecolorimage.com/get/${hexColor}/150x150`,
                  alt: 'Color swatch',
                },
              });
            }}
          />
        </View>
      </ScrollView>
    </SafeAreaView>
  );
};

export default App;
