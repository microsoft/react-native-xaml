// Copyright (c) Microsoft Corporation. 
// Licensed under the MIT License.

#pragma once
#include <ReactPackageProvider.g.h>

namespace winrt::WinRTTurboModule::implementation
{
    struct ReactPackageProvider : ReactPackageProviderT<ReactPackageProvider>
    {
    public:
        // IReactPackageProvider
        void CreatePackage(winrt::Microsoft::ReactNative::IReactPackageBuilder const &packageBuilder) noexcept;
    };
}

namespace winrt::WinRTTurboModule::factory_implementation
{
    struct ReactPackageProvider : ReactPackageProviderT<ReactPackageProvider, implementation::ReactPackageProvider>
    {
    };
}