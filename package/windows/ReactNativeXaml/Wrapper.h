// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#pragma once

#include "Wrapper.g.h"

namespace winrt::ReactNativeXaml::implementation {
struct Wrapper : WrapperT<Wrapper> {
  Wrapper() = default;

  IInspectable WrappedObject();
  void WrappedObject(IInspectable value);

 private:
  IInspectable m_value{nullptr};
};
} // namespace winrt::ReactNativeXaml::implementation

namespace winrt::ReactNativeXaml::factory_implementation {
struct Wrapper : WrapperT<Wrapper, implementation::Wrapper> {};
} // namespace winrt::ReactNativeXaml::factory_implementation
