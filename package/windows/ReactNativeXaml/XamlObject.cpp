#include "pch.h"
#include "XamlObject.h"

#if __has_include(<../include/shared/cdebug.h>)
#include "..include/Shared/cdebug.h"
#else
#include <cdebug.h>
#endif

#include <UI.Text.h>
#include "Codegen/EventArgsTypeProperties.g.h"

namespace jsi = facebook::jsi;

const EventArgsProperty* GetProp(const std::string& name, const winrt::Windows::Foundation::IInspectable& obj) {
  auto it = std::find_if(eventArgsProperties, eventArgsProperties + ARRAYSIZE(eventArgsProperties), [name](const EventArgsProperty& e) { return e.name == name; });
  while ((it != eventArgsProperties + ARRAYSIZE(eventArgsProperties)) && (it->name == name)) {
    if (it->isType(obj)) {
      return it;
    }
    it++;
  }
  return nullptr;
}

template <typename TLambda, std::enable_if_t<!std::is_void<std::invoke_result_t<TLambda>>::value, int>>
auto XamlObject::RunOnUIThread(const TLambda& code) const {
  std::condition_variable cv;
  std::mutex mutex;
  std::optional<decltype(code())> result{};
  std::unique_lock<std::mutex> lock(mutex);

  m_metadata->UIDispatcher().Post([&]() {
    try {
      result = code();
    }
    catch (const winrt::hresult& h) {
      OutputDebugStringA(std::to_string(h.value).c_str());
      OutputDebugStringA("\n");
    }
    catch (...) { }
    std::unique_lock<std::mutex> lock(mutex);
#ifdef DEBUG
    OutputDebugStringA("Notify from ");
    OutputDebugStringA(std::to_string(GetCurrentThreadId()).c_str());
    OutputDebugStringA("\n");
#endif
    cv.notify_all();
    });
#ifdef DEBUG
  OutputDebugStringA("Wait from ");
  OutputDebugStringA(std::to_string(GetCurrentThreadId()).c_str());
  OutputDebugStringA("\n");
#endif
  cv.wait(lock);
  assert(result.has_value());
  return result.value();
}

template <typename TLambda, std::enable_if_t<std::is_void<std::invoke_result_t<TLambda>>::value, int>>
void XamlObject::RunOnUIThread(const TLambda& code) const {
  std::condition_variable cv;
  std::mutex mutex;
  std::unique_lock<std::mutex> lock(mutex);
  m_metadata->UIDispatcher().Post([&]() {
    try {
      code();
    }
    catch (const winrt::hresult&) { }
    catch (...) { }
    std::unique_lock<std::mutex> lock(mutex);
#ifdef DEBUG
    OutputDebugStringA("Notify from ");
    OutputDebugStringA(std::to_string(GetCurrentThreadId()).c_str());
    OutputDebugStringA("\n");
#endif
    cv.notify_all();
    });

#ifdef DEBUG
  OutputDebugStringA("Wait from ");
  OutputDebugStringA(std::to_string(GetCurrentThreadId()).c_str());
  OutputDebugStringA("\n");
#endif
  cv.wait(lock);
}

jsi::Value XamlObject::get(jsi::Runtime& rt, const jsi::PropNameID& nameId) noexcept {
  try {
    auto name = nameId.utf8(rt);
    if (name == "className") {
      auto cn = winrt::to_string(winrt::get_class_name(m_obj));
      return jsi::String::createFromUtf8(rt, cn);
    }
    else {
      auto res = RunOnUIThread([&]() {
        if (auto prop = m_metadata->GetProp(name, m_obj)) {
          if (prop->xamlPropertyGetter) {
            auto dp = prop->xamlPropertyGetter();
            if (auto dobj = m_obj.try_as<DependencyObject>()) {
              auto val = dobj.GetValue(dp);
              return val;
            }
          }
        }
        else if (auto evtProp = GetProp(name, m_obj)) {
          return evtProp->getter(m_obj);
        }
        return winrt::Windows::Foundation::IInspectable{ nullptr };
        });
      return IInspectableToValue(rt, res);
    }
  }
  catch (const winrt::hresult& hr) {
    OutputDebugStringA(std::to_string(hr.value).c_str());
    OutputDebugStringA("\n");
  }
  return jsi::HostObject::get(rt, nameId);
}

facebook::jsi::Value XamlObject::IInspectableToValue(jsi::Runtime& rt, const winrt::Windows::Foundation::IInspectable& o) const {
  if (o == nullptr) return jsi::Value::null();
  auto cn = winrt::get_class_name(o);
  
  if (auto refStr = o.try_as<winrt::Windows::Foundation::IReference<winrt::hstring>>()) {
    auto str = winrt::unbox_value<winrt::hstring>(o);
    return jsi::String::createFromUtf8(rt, winrt::to_string(str));
  }
  else if (auto refInt = o.try_as<winrt::Windows::Foundation::IReference<int32_t>>()) {
    return jsi::Value(refInt.GetInt32());
  }
  else if (auto refUInt = o.try_as<winrt::Windows::Foundation::IReference<uint32_t>>()) {
    return jsi::Value(static_cast<int32_t>(refUInt.GetUInt32()));
  }
  else if (auto refInt8 = o.try_as<winrt::Windows::Foundation::IReference<unsigned char>>()) {
    return jsi::Value(static_cast<double>(refInt8.GetUInt8()));
  }
  else if (auto refInt64 = o.try_as<winrt::Windows::Foundation::IReference<int64_t>>()) {
    auto v = refInt64.GetInt64();
    assert((v < std::numeric_limits<int32_t>::max()) && (v > std::numeric_limits<int32_t>::min()));
    return jsi::Value(refInt64.GetInt32());
  }
  else if (auto refDouble = o.try_as<winrt::Windows::Foundation::IReference<double>>()) {
    return jsi::Value(refDouble.GetDouble());
  }
  else if (auto refBool = o.try_as<winrt::Windows::Foundation::IReference<bool>>()) {
    return jsi::Value(refBool.GetBoolean());
  }
  else if (auto refThickness = o.try_as<winrt::Windows::Foundation::IReference<xaml::Thickness>>()) {
    auto thickness = winrt::unbox_value<Thickness>(o);
    auto t = jsi::Object(rt);
    t.setProperty(rt, "left", thickness.Left);
    t.setProperty(rt, "top", thickness.Top);
    t.setProperty(rt, "right", thickness.Right);
    t.setProperty(rt, "bottom", thickness.Bottom);
    return t;
  }
  else if (auto refRect = o.try_as<winrt::Windows::Foundation::IReference<Rect>>()) {
    auto rect = refRect.GetRect();
    auto t = jsi::Object(rt);
    t.setProperty(rt, "x", rect.X);
    t.setProperty(rt, "y", rect.Y);
    t.setProperty(rt, "width", rect.Width);
    t.setProperty(rt, "height", rect.Height);
    return t;
  }
  else if (auto refPt = o.try_as<winrt::Windows::Foundation::IReference<Point>>()) {
    auto pt = refPt.GetPoint();
    auto t = jsi::Object(rt);
    t.setProperty(rt, "x", pt.X);
    t.setProperty(rt, "y", pt.Y);
    return t;
  }
  else if (auto refTs = o.try_as<winrt::Windows::Foundation::IReference<TimeSpan>>()) {
    auto ts = refTs.GetTimeSpan();
    auto v = ts.count();
    return jsi::Value(static_cast<double>(v));
  }
  else if (auto scb = o.try_as<xaml::Media::SolidColorBrush>()) {
    auto name = RunOnUIThread([&]() {
      auto color = scb.Color();
      return winrt::Windows::UI::ColorHelper::ToDisplayName(color);
      });
    return jsi::String::createFromUtf8(rt, winrt::to_string(name));
  }
  else if (auto ff = o.try_as<xaml::Media::FontFamily>()) {
    auto fontFamily = RunOnUIThread([&]() {
      return ff.Source();
      });
    return jsi::String::createFromUtf8(rt, winrt::to_string(fontFamily));
  }
  else if (auto refTN = o.try_as<IReference<xaml::Interop::TypeName>>()) {
    auto t = jsi::Object(rt);
    auto tn = refTN.Value();

    t.setProperty(rt, "kind", static_cast<int32_t>(tn.Kind));
    t.setProperty(rt, "name", jsi::String::createFromUtf8(rt, winrt::to_string(tn.Name)));
    return t;
  }
  else if (auto refFW = o.try_as<IReference<text::FontWeight>>()) {
    return jsi::Value(static_cast<int32_t>(refFW.Value().Weight));
  }
  else if (auto crFF = o.try_as<IReference<xaml::CornerRadius>>()) {
    auto t = jsi::Object(rt);
    auto cr = crFF.Value();
    t.setProperty(rt, "topLeft", cr.TopLeft);
    t.setProperty(rt, "topRight", cr.TopRight);
    t.setProperty(rt, "bottomLeft", cr.BottomLeft);
    t.setProperty(rt, "bottomRight", cr.BottomRight);
    return t;
  }
  else if (auto color_ = o.try_as<IReference<ui::Color>>()) {
    auto t = jsi::Object(rt);
    auto color = color_.Value();
    t.setProperty(rt, "a", (double)color.A);
    t.setProperty(rt, "r", (double)color.R);
    t.setProperty(rt, "g", (double)color.G);
    t.setProperty(rt, "b", (double)color.B);
    return t;
  }

  return jsi::Object::createFromHostObject(rt, std::make_shared<XamlObject>(o, m_metadata));
}

void XamlObject::set(jsi::Runtime& rt, const jsi::PropNameID& name, const jsi::Value& value) noexcept {

}


std::vector<jsi::PropNameID> XamlObject::getPropertyNames(jsi::Runtime& rt) noexcept {
  if (m_obj == nullptr) return {};
  if (auto str = m_obj.try_as<winrt::Windows::Foundation::IReference<winrt::hstring>>()) {
    return facebook::jsi::PropNameID::names({ facebook::jsi::PropNameID::forUtf8(rt, "string") });
  }
  auto names = RunOnUIThread([this]() {
    std::vector<std::string> names = {
      "className",
    };
    m_metadata->PopulateNativeProps(names, m_obj);
    for (const auto& e : eventArgsProperties) {
      if (e.isType(m_obj)) {
        names.push_back(e.name);
      }
    }

    return names;
    });

  std::vector<facebook::jsi::PropNameID> pnames;
  for (const auto& e : names) {
    pnames.push_back(facebook::jsi::PropNameID::forUtf8(rt, e));
  }
  return pnames;
}

