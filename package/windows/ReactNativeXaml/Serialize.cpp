#include "pch.h"
#include "Serialize.h"

std::vector<uint32_t> VectorToIndices(const winrt::IVector<winrt::IInspectable>& vector, const xaml::Controls::ItemCollection& coll)
{
  std::vector<uint32_t> vec;
  for (const auto& item : vector) {
    uint32_t index;
    if (coll.IndexOf(item, index)) {
      vec.push_back(index);
    }
  }
  return vec;
}


namespace winrt::Microsoft::ReactNative {

  bool TryWriteScalar(const winrt::Microsoft::ReactNative::IJSValueWriter& writer, const winrt::IInspectable& item) {
    if (auto str = item.try_as<IReference<winrt::hstring>>()) {
      writer.WriteString(str.GetString());
      return true;
    }
    else if (auto i32 = item.try_as<IReference<int32_t>>()) {
      writer.WriteInt64(i32.GetInt32());
      return true;
    }
    else if (auto fw = item.try_as<IReference<Windows::UI::Text::FontWeight>>()) {
      writer.WriteInt64(fw.GetInt32());
      return true;
    }

    return false;
  }

  void WriteValue(const winrt::Microsoft::ReactNative::IJSValueWriter& writer, const Point& p) noexcept {
    writer.WriteObjectBegin();
    WriteProperty(writer, "x", p.X);
    WriteProperty(writer, "y", p.Y);
    writer.WriteObjectEnd();
  }

  void WriteIInspectable(winrt::Microsoft::ReactNative::IJSValueWriter const& writer, const winrt::IInspectable& item) {
    if (TryWriteScalar(writer, item)) {
      return;
    }
    else if (auto cc = item.try_as<xaml::Controls::ContentControl>()) {
      WriteIInspectable(writer, cc.Content());
    }
    else if (auto mfi = item.try_as<xaml::Controls::MenuFlyoutItem>()) {
      writer.WriteObjectBegin();
      WriteProperty(writer, L"text", mfi.Text());
      writer.WriteObjectEnd();
    }
    else if (auto trea = item.try_as<xaml::Input::TappedRoutedEventArgs>()) {
      writer.WriteObjectBegin();
      if (auto ui = item.try_as<xaml::UIElement>()) {
        WriteProperty(writer, L"position", trea.GetPosition(ui));
      }
      WriteProperty(writer, L"pointerDeviceType", (int)trea.PointerDeviceType());
      writer.WriteObjectEnd();
    }
    else {
      if (item) {
        auto cn = winrt::get_class_name(item);
        OutputDebugStringW(L"Don't yet know how to marshal this type: ");
        OutputDebugStringW(cn.c_str());
        OutputDebugStringW(L"\n");
        //      assert(false);
      }
      writer.WriteNull();
    }
  }
  void WriteValue(winrt::Microsoft::ReactNative::IJSValueWriter const& writer, const winrt::IInspectable& item) {
    if (item == nullptr) {
      return writer.WriteNull();
    }

    if (TryWriteScalar(writer, item)) return;

    auto cn = winrt::get_class_name(item);
    writer.WriteObjectBegin();
    WriteProperty(writer, L"type", cn);
    if (auto fe = item.try_as<xaml::FrameworkElement>()) {
      if (auto tagII = fe.Tag()) {
        auto tag = winrt::unbox_value<int64_t>(tagII);
        WriteProperty(writer, L"tag", tag);
      }
      auto name = fe.Name();
      if (!name.empty()) {
        WriteProperty(writer, L"name", name);
      }
    }
    writer.WritePropertyName(L"value");
    WriteIInspectable(writer, item);
    writer.WriteObjectEnd();
  }
}

template<>
void Serialize(winrt::Microsoft::ReactNative::IJSValueWriter const& writer, const winrt::IInspectable& sender, const xaml::RoutedEventArgs& args) {
  writer.WriteObjectBegin();
  if (auto originalSource = args.OriginalSource()) {
    WriteProperty(writer, L"originalSource", originalSource);
  }
  writer.WriteObjectEnd();
}

template<>
void Serialize(winrt::Microsoft::ReactNative::IJSValueWriter const& writer, const winrt::IInspectable& sender, const xaml::Controls::SelectionChangedEventArgs& args) {
  auto sel = sender.as<xaml::Controls::Primitives::Selector>();
  const auto& items = sel.Items();
  auto added = VectorToIndices(args.AddedItems(), items);
  auto removed = VectorToIndices(args.RemovedItems(), items);

  writer.WriteObjectBegin();
  WriteProperty(writer, L"addedIndices", added);
  WriteProperty(writer, L"removedIndices", removed);
  WriteProperty(writer, L"addedItems", args.AddedItems());
  WriteProperty(writer, L"removedItems", args.RemovedItems());
  WriteProperty(writer, L"selectedIndex", sel.SelectedIndex());
  WriteProperty(writer, L"selectedItem", sel.SelectedItem());
  WriteProperty(writer, L"selectedValue", sel.SelectedValue());
  writer.WriteObjectEnd();
}
