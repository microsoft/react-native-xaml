#pragma once

#include "Wrapper.g.h"

namespace winrt::ReactNativeXaml::implementation
{
    struct Wrapper : WrapperT<Wrapper>
    {
        Wrapper() = default;

        IInspectable WrappedObject();
        void WrappedObject(IInspectable value);

    private:
      IInspectable m_value{nullptr};
    };
}

namespace winrt::ReactNativeXaml::factory_implementation
{
    struct Wrapper : WrapperT<Wrapper, implementation::Wrapper>
    {
    };
}
