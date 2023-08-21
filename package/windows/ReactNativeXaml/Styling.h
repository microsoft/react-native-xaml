// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#pragma once

#include <JSValue.h>

namespace ColorUtils {
xaml::Media::Brush BrushFrom(const winrt::Microsoft::ReactNative::JSValue &v);
}