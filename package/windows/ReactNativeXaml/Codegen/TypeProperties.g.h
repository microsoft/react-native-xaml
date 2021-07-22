#pragma once
#include "pch.h"
#include "XamlMetadata.h"
#include "Crc32Str.h"

/*************************************************************
THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT MODIFY MANUALLY
**************************************************************/

#include <winrt/Windows.UI.Xaml.h>
#include <winrt/Windows.UI.Xaml.Controls.h>
#include <winrt/Windows.UI.Xaml.Documents.h>

template<typename T> 
winrt::Windows::Foundation::IInspectable AsType(const winrt::Windows::Foundation::IInspectable& o) {
  return o.try_as<T>();
}

template<typename T> 
winrt::Windows::Foundation::IInspectable AsUnwrappedType(const winrt::Windows::Foundation::IInspectable& o) {
  return Unwrap<T>(o);
}

/*static*/ const PropInfo xamlPropertyMap[] = {
        { MAKE_KEY("gridColumn"), AsType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::Controls::Grid::ColumnProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("gridColumnSpan"), AsType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::Controls::Grid::ColumnSpanProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("gridRow"), AsType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::Controls::Grid::RowProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("gridRowSpan"), AsType<winrt::Windows::UI::Xaml::UIElement>,  []() { return winrt::Windows::UI::Xaml::Controls::Grid::RowSpanProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyAnnotationAlternates"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::AnnotationAlternatesProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyAnnotationAlternates"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::AnnotationAlternatesProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyCapitals"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::CapitalsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyCapitals"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::CapitalsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyCapitalSpacing"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::CapitalSpacingProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyCapitalSpacing"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::CapitalSpacingProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyCaseSensitiveForms"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::CaseSensitiveFormsProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyCaseSensitiveForms"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::CaseSensitiveFormsProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyContextualAlternates"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::ContextualAlternatesProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyContextualAlternates"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::ContextualAlternatesProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyContextualLigatures"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::ContextualLigaturesProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyContextualLigatures"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::ContextualLigaturesProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyContextualSwashes"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::ContextualSwashesProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyContextualSwashes"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::ContextualSwashesProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyDiscretionaryLigatures"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::DiscretionaryLigaturesProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyDiscretionaryLigatures"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::DiscretionaryLigaturesProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyEastAsianExpertForms"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::EastAsianExpertFormsProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyEastAsianExpertForms"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::EastAsianExpertFormsProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyEastAsianLanguage"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::EastAsianLanguageProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyEastAsianLanguage"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::EastAsianLanguageProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyEastAsianWidths"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::EastAsianWidthsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyEastAsianWidths"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::EastAsianWidthsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyFraction"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::FractionProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyFraction"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::FractionProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyHistoricalForms"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::HistoricalFormsProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyHistoricalForms"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::HistoricalFormsProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyHistoricalLigatures"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::HistoricalLigaturesProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyHistoricalLigatures"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::HistoricalLigaturesProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyKerning"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::KerningProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyKerning"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::KerningProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyMathematicalGreek"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::MathematicalGreekProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyMathematicalGreek"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::MathematicalGreekProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyNumeralAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::NumeralAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyNumeralAlignment"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::NumeralAlignmentProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyNumeralStyle"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::NumeralStyleProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyNumeralStyle"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::NumeralStyleProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographySlashedZero"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::SlashedZeroProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographySlashedZero"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::SlashedZeroProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStandardLigatures"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StandardLigaturesProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStandardLigatures"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StandardLigaturesProperty(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStandardSwashes"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StandardSwashesProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyStandardSwashes"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StandardSwashesProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyStylisticAlternates"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticAlternatesProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyStylisticAlternates"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticAlternatesProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyStylisticSet1"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet1Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet1"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet1Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet10"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet10Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet10"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet10Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet11"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet11Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet11"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet11Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet12"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet12Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet12"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet12Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet13"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet13Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet13"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet13Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet14"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet14Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet14"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet14Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet15"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet15Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet15"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet15Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet16"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet16Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet16"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet16Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet17"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet17Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet17"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet17Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet18"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet18Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet18"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet18Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet19"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet19Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet19"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet19Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet2"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet2Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet2"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet2Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet20"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet20Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet20"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet20Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet3"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet3Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet3"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet3Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet4"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet4Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet4"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet4Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet5"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet5Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet5"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet5Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet6"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet6Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet6"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet6Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet7"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet7Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet7"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet7Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet8"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet8Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet8"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet8Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet9"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet9Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyStylisticSet9"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::StylisticSet9Property(); }, SetPropValue<bool>, ViewManagerPropertyType::Boolean },
        { MAKE_KEY("typographyVariants"), AsType<winrt::Windows::UI::Xaml::Controls::RichTextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::VariantsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
        { MAKE_KEY("typographyVariants"), AsType<winrt::Windows::UI::Xaml::Controls::TextBlock>,  []() { return winrt::Windows::UI::Xaml::Documents::Typography::VariantsProperty(); }, SetPropValue<int32_t>, ViewManagerPropertyType::Number },
  };

void SetIsOpen_FlyoutBase(const xaml::DependencyObject& o, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext& reactContext);
void SetText_Run(const xaml::DependencyObject& o, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext& reactContext);

void SetGridLayout_Grid(const xaml::DependencyObject& o, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext& reactContext);
void SetPriority_UIElement(const xaml::DependencyObject& o, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext& reactContext);
void SetResources_UIElement(const xaml::DependencyObject& o, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext& reactContext);
void SetShowState_ContentDialog(const xaml::DependencyObject& o, const xaml::DependencyProperty&, const winrt::Microsoft::ReactNative::JSValue& v, const winrt::Microsoft::ReactNative::IReactContext& reactContext);

/*static*/ const PropInfo fakeProps[] = {
    { MAKE_KEY("isOpen"), AsUnwrappedType<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase>, nullptr, SetIsOpen_FlyoutBase, ViewManagerPropertyType::Boolean },
    { MAKE_KEY("text"), AsUnwrappedType<winrt::Windows::UI::Xaml::Documents::Run>, nullptr, SetText_Run, ViewManagerPropertyType::String },
    { MAKE_KEY("gridLayout"), AsType<winrt::Windows::UI::Xaml::Controls::Grid>, nullptr, SetGridLayout_Grid, ViewManagerPropertyType::Map },
    { MAKE_KEY("priority"), AsType<winrt::Windows::UI::Xaml::UIElement>, nullptr, SetPriority_UIElement, ViewManagerPropertyType::Number },
    { MAKE_KEY("resources"), AsType<winrt::Windows::UI::Xaml::UIElement>, nullptr, SetResources_UIElement, ViewManagerPropertyType::Map },
    { MAKE_KEY("showState"), AsType<winrt::Windows::UI::Xaml::Controls::ContentDialog>, nullptr, SetShowState_ContentDialog, ViewManagerPropertyType::Number },

};

#ifdef USE_CRC32
void XamlMetadata::PopulateNativeProps(winrt::Windows::Foundation::Collections::IMap<winrt::hstring, ViewManagerPropertyType>& nativeProps) const {
    nativeProps.Insert(winrt::to_hstring("gridColumn"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("gridColumnSpan"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("gridRow"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("gridRowSpan"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("typographyAnnotationAlternates"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("typographyCapitals"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("typographyCapitalSpacing"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyCaseSensitiveForms"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyContextualAlternates"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyContextualLigatures"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyContextualSwashes"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("typographyDiscretionaryLigatures"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyEastAsianExpertForms"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyEastAsianLanguage"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("typographyEastAsianWidths"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("typographyFraction"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("typographyHistoricalForms"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyHistoricalLigatures"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyKerning"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyMathematicalGreek"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyNumeralAlignment"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("typographyNumeralStyle"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("typographySlashedZero"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStandardLigatures"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStandardSwashes"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticAlternates"), ViewManagerPropertyType::Number);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet1"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet10"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet11"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet12"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet13"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet14"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet15"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet16"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet17"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet18"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet19"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet2"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet20"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet3"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet4"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet5"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet6"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet7"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet8"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyStylisticSet9"), ViewManagerPropertyType::Boolean);
    nativeProps.Insert(winrt::to_hstring("typographyVariants"), ViewManagerPropertyType::Number);
}
#else
void XamlMetadata::PopulateNativeProps(winrt::Windows::Foundation::Collections::IMap<winrt::hstring, ViewManagerPropertyType>& nativeProps) const {
  for (auto const& entry : xamlPropertyMap) {
    nativeProps.Insert(winrt::to_hstring(entry.propName), entry.jsType);
  }
  for (auto const& entry : fakeProps) {
    nativeProps.Insert(winrt::to_hstring(entry.propName), entry.jsType);
  }
}
#endif



