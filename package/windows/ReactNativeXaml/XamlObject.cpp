#include "pch.h"
#include "XamlObject.h"

namespace jsi = facebook::jsi;

template <typename TLambda>
auto XamlObject::RunOnUIThread(const TLambda& code) -> decltype(code()) {
  std::condition_variable cv;
  std::mutex mutex;
  std::optional<decltype(code())> result;
  m_metadata->UIDispatcher().Post([&]() {
    result = code();
    cv.notify_all();
    });

  std::unique_lock<std::mutex> lock(mutex);
  cv.wait(lock);
  return result.value();
}

jsi::Value XamlObject::get(jsi::Runtime& rt, const jsi::PropNameID& nameId) noexcept {
  try {
    auto name = nameId.utf8(rt);
    if (auto ref = m_obj.try_as<winrt::Windows::Foundation::IReference<winrt::hstring>>()) {
      if (name == "string") {
        auto str = winrt::unbox_value<winrt::hstring>(m_obj);
        return jsi::String::createFromUtf8(rt, winrt::to_string(str));
      }
    }
    if (name == "prop1") {
      return jsi::Value(42);
    }
    else if (name == "className") {
      auto cn = winrt::to_string(winrt::get_class_name(m_obj));
      return jsi::String::createFromUtf8(rt, cn);
    }
    else if (name == "content") {
      auto res = RunOnUIThread([&]() {
        if (auto cc = m_obj.as<ContentControl>()) {
          auto content = cc.Content();
          return content;
        }
        return winrt::Windows::Foundation::IInspectable{ nullptr };
        });
      return  jsi::Object::createFromHostObject(rt, std::make_shared<XamlObject>(res, m_metadata)); 
    }
  }
  catch (const winrt::hresult& hr) {

  }
  return jsi::HostObject::get(rt, nameId);
}

void XamlObject::set(jsi::Runtime& rt, const jsi::PropNameID& name, const jsi::Value& value) noexcept {

}


std::vector<jsi::PropNameID> XamlObject::getPropertyNames(jsi::Runtime& rt) noexcept {
  if (auto str = m_obj.try_as<winrt::Windows::Foundation::IReference<winrt::hstring>>()) {
    return facebook::jsi::PropNameID::names({ facebook::jsi::PropNameID::forUtf8(rt, "string") });
  }
  auto names = RunOnUIThread([this]() {
    std::vector<std::string> names = {
      "prop1",
      "className",
    };
    m_metadata->PopulateNativeProps(names, m_obj);
    return names;
    });

  std::vector<facebook::jsi::PropNameID> pnames;
  for (const auto& e : names) {
    pnames.push_back(facebook::jsi::PropNameID::forUtf8(rt, e));
  }
  return pnames;
}

