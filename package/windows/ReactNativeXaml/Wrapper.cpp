#include "pch.h"
#include "Wrapper.h"
#if __has_include("Wrapper.g.cpp")
#include "Wrapper.g.cpp"
#endif

namespace winrt::ReactNativeXaml::implementation
{
    IInspectable Wrapper::WrappedObject()
    {
      return m_value;
    }

    void Wrapper::WrappedObject(IInspectable value)
    {
      m_value = value;
    }
}
