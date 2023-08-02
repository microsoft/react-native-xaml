// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#include "pch.h"
#include "ReactPackageProvider.h"
#if __has_include("ReactPackageProvider.g.cpp")
#include "ReactPackageProvider.g.cpp"
#endif

#include "ReactNativeModule.h"
#include "XamlViewManager.h"

using namespace winrt::Microsoft::ReactNative;

namespace winrt::ReactNativeXaml::implementation {

void ReactPackageProvider::CreatePackage(IReactPackageBuilder const &packageBuilder) noexcept {
  AddAttributedModules(packageBuilder);
  packageBuilder.AddViewManager(L"XamlControl", []() {
    auto vm = winrt::make<XamlViewManager>();
    return vm;
  });
}

} // namespace winrt::ReactNativeXaml::implementation
