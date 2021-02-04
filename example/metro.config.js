/**
 * Metro configuration for React Native
 * https://github.com/facebook/react-native
 *
 * @format
 */
const fs = require('fs');
const path = require('path');
const exclusionList = require('metro-config/src/defaults/exclusionList');

module.exports = {
  watchFolders: [
    // Include hoisted modules
    path.resolve(__dirname, '..', 'node_modules'),
    // Include main react-native-xaml package root
    path.resolve(__dirname, '..', 'package'),
  ],
  resolver: {
    blockList: exclusionList([
      // This stops "react-native run-windows" from causing the metro server to crash if its already running
      new RegExp(
        `${path.resolve(__dirname, 'windows').replace(/[/\\]/g, '/')}.*`,
      ),
      // This prevents "react-native run-windows" from hitting: EBUSY: resource busy or locked, open msbuild.ProjectImports.zip
      /.*\.ProjectImports\.zip/,
    ]),
    extraNodeModules: {
      'react-native-xaml': fs.realpathSync(
        path.dirname(require.resolve('react-native-xaml/package.json')),
      ),
    },
  },
  transformer: {
    getTransformOptions: async () => ({
      transform: {
        experimentalImportSupport: false,
        inlineRequires: true,
      },
    }),
  },
};
