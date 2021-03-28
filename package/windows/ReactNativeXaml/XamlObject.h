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
private:
  winrt::Windows::Foundation::IInspectable m_obj;
  std::vector<facebook::jsi::PropNameID> m_propNames;
  std::shared_ptr<const XamlMetadata> m_metadata;
  template <typename TLambda> auto RunOnUIThread(const TLambda& code) -> decltype(code());
};