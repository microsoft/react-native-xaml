# Contributing
When contributing to this repository, please first discuss the change you wish to make via issue, email, or any other method with the owners of this repository before making a change.

This project has adopted the [Microsoft Open Source Code of Conduct](https://opensource.microsoft.com/codeofconduct/). For more information see the [Code of Conduct FAQ](https://opensource.microsoft.com/codeofconduct/faq/) or contact [opencode@microsoft.com](mailto:opencode@microsoft.com) with any additional questions or comments.

## Pull Request Process
1. Fork repository and create your feature branch out of main.
2. Open [Codegen project](./package/Codegen/Codegen.csproj) in Visual Studio.
3. Build project (this will restore NuGet packages). Once completed, you are ready to run the project, see output, and make your desired changes.
4. If you make changes in a .tt file, all you need to do is save the file and that will generate corresponding files that reflect your change.
5. For all other changes: run `yarn build` in src folder so that related files are generated
6. Run from Visual Studio to see output.
7. Once changes are ready, run `yarn change` at the root of the repository to create a patch (it will ask for a description of the change). The version scheme we use is [SemVer](https://semver.org/)
8. Update the package version by running `yarn bump`
9. Open a pull request and address review feedback.
10. After the PR is merged, manually trigger a publish from GitHub to publish to npm.

## Technical details:
You can find more details to setting up in the [Technical Guide](TechnicalGuide.md).