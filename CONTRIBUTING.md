# Contributing
When contributing to this repository, please first discuss the change you wish to make via issue, email, or any other method with the owners of this repository before making a change.

This project has adopted the [Microsoft Open Source Code of Conduct](https://opensource.microsoft.com/codeofconduct/). For more information see the [Code of Conduct FAQ](https://opensource.microsoft.com/codeofconduct/faq/) or contact [opencode@microsoft.com](mailto:opencode@microsoft.com) with any additional questions or comments.

## Pull Request Process

### Initial setup
1. Fork repository and create your feature branch out of main.
2. Run `yarn` in the repo root to install NPM dependencies.
3. Open the [example solution](./example/windows/example.sln) in Visual Studio.
4. In the Solution Explorer, right-click on `Solution 'example'` and select `Restore NuGet Packages`.

### Build and run Codegen
1. In the Solution Explorer, right-click on the `Codegen` project and select `Set as Startup Project`.
2. Build the Codegen project (`Build > Build Godegen`). Once completed, you are ready to run the project, see output, and make your desired changes.
3. Run the Codegen project (`Debug > Start Debugging`).

### Make and verify your Codegen changes

If you make changes to the Codegen project, be sure to build and re-run the Codegen.

1. If you make changes in a .tt file in Visual Studio, all you need to do is save the file and that will generate corresponding .cs file that reflects your change.
2. Run the Codegen steps above in Visual Studio to verify your changes to the
[output files](./package/windows/ReactNativeXaml/Codegen/).

### Make and verify your ReactNativeXaml changes

If you make changes to the ReactNativeXaml project, or to the Codegen output files (above), make sure that the ReactNativeXaml project still builds.

1. Make sure the example.sln is loaded in Visual Studio, see [Intial setup](#initial-setup)
2. Set the Solution Configuration to `Debug` or `Release`.
3. Set the Solution Platforms to `x86` or `x64` (not `AnyCPU`).
4. Run `Build > Build Solution`.

### Make and verify your TS changes

If you make changes to the [package TypeScript files](./package/src/), be sure to build them.

1. Run `yarn build` from the repo root.

### Prepare and submit a PR
1. Once changes are ready, run `yarn change` at the root of the repository to create a patch (it will ask for a description of the change). The version scheme we use is [SemVer](https://semver.org/)
2. Update the package version by running `yarn bump`
3. Open a pull request and address review feedback.
4. After the PR is merged, manually trigger a publish from GitHub to publish to npm.

## Technical details
You can find more details to setting up in the [Technical Guide](TechnicalGuide.md).