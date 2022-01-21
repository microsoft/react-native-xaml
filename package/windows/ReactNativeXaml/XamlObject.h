#pragma once
#include "pch.h"
#include "JSI/JsiApiContext.h"
#include "XamlMetadata.h"
#include <winrt/Windows.Foundation.Collections.h>
#include <vector>

struct XamlMetadata;

struct XamlObject : std::enable_shared_from_this<XamlObject>, facebook::jsi::HostObject {
  facebook::jsi::Value get(facebook::jsi::Runtime& rt, const facebook::jsi::PropNameID& nameId) noexcept override;
  void set(facebook::jsi::Runtime& rt, const facebook::jsi::PropNameID& name, const facebook::jsi::Value& value) noexcept override;
  std::vector<facebook::jsi::PropNameID> getPropertyNames(facebook::jsi::Runtime& rt) noexcept override;

  XamlObject() = default;
  XamlObject(winrt::Windows::Foundation::IInspectable obj, std::shared_ptr<const XamlMetadata> metadata) : m_obj(obj), m_metadata(metadata) {}
  XamlObject(const XamlObject&) = default;
  template<typename T = winrt::Windows::Foundation::IInspectable>
  T try_as() const { return m_obj.try_as<T>(); }

  facebook::jsi::Value IInspectableToValue(facebook::jsi::Runtime& rt, const winrt::Windows::Foundation::IInspectable& inspectable) const;

  template <typename TLambda, std::enable_if_t<!std::is_void<std::invoke_result_t<TLambda>>::value, int> = 0>
  auto RunOnUIThread(const TLambda& code) const;

  template <typename TLambda, std::enable_if_t<std::is_void<std::invoke_result_t<TLambda>>::value, int> = 0>
  void RunOnUIThread(const TLambda& code) const;

  std::shared_ptr<const XamlMetadata> m_metadata;
private:
  winrt::Windows::Foundation::IInspectable m_obj;
};