﻿// ------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version: 17.0.0.0
//  
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
// ------------------------------------------------------------------------------
namespace Codegen
{
    using System.Linq;
    using System.Text;
    using System.Collections.Generic;
    using System;
    
    /// <summary>
    /// Class to produce the template output
    /// </summary>
    
    #line 1 "C:\Users\asklar\source\repos\react-native-xaml\package\Codegen\TypeCreator.tt"
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.VisualStudio.TextTemplating", "17.0.0.0")]
    public partial class TypeCreator : TypeCreatorBase
    {
#line hidden
        /// <summary>
        /// Create the template output
        /// </summary>
        public virtual string TransformText()
        {
            this.Write("#include \"pch.h\"\r\n#include \"XamlMetadata.h\"\r\n#include \"Crc32Str.h\"\r\n#include <win" +
                    "string.h>\r\n\r\n");
            
            #line 11 "C:\Users\asklar\source\repos\react-native-xaml\package\Codegen\TypeCreator.tt"
 foreach (var ns in Types.Select(x => x.GetNamespace()).Distinct()) { 
            
            #line default
            #line hidden
            this.Write("#include \"winrt/");
            
            #line 12 "C:\Users\asklar\source\repos\react-native-xaml\package\Codegen\TypeCreator.tt"
            this.Write(this.ToStringHelper.ToStringWithCulture(ns));
            
            #line default
            #line hidden
            this.Write(".h\"\r\n");
            
            #line 13 "C:\Users\asklar\source\repos\react-native-xaml\package\Codegen\TypeCreator.tt"
 } 
            
            #line default
            #line hidden
            this.Write("\r\n/*************************************************************\r\nTHIS FILE WAS A" +
                    "UTOMATICALLY GENERATED, DO NOT MODIFY MANUALLY\r\n********************************" +
                    "******************************/\r\n\r\ntemplate<typename T, typename K, size_t N>\r\nc" +
                    "onst T* binary_search_map(const std::pair<K, T> (& map)[N], size_t low, size_t h" +
                    "igh, const K& key) {\r\n    while (low != high) {\r\n        size_t midpoint = (low " +
                    "+ high) / 2;\r\n        if (map[midpoint].first == key) return &(map[midpoint].sec" +
                    "ond);\r\n        else if (((high - low) % 2 == 1) && map[midpoint + 1].first == ke" +
                    "y) return &(map[midpoint + 1].second);\r\n        else if (key < map[midpoint].fir" +
                    "st) high = midpoint;\r\n        else /*if (key > map[midpoint].first)*/ low = midp" +
                    "oint + 1;\r\n    }\r\n    if (map[low].first == key) return &(map[low].second);\r\n   " +
                    " return nullptr;\r\n}\r\n\r\nwinrt::Windows::Foundation::IInspectable XamlMetadata::Cr" +
                    "eate(const std::string_view& typeName) const {\r\n  wchar_t buf[128]{};\r\n  for (au" +
                    "to i = 0u; i < typeName.size() && i < ARRAYSIZE(buf) - 1; i++) {\r\n    buf[i] = s" +
                    "tatic_cast<wchar_t>(typeName[i]);\r\n  }\r\n\r\n  HSTRING clsid = nullptr;\r\n  if (SUCC" +
                    "EEDED(WindowsCreateString(buf, static_cast<UINT32>(wcslen(buf)), &clsid))) {\r\n  " +
                    "  winrt::com_ptr<::IInspectable> insp{ nullptr };\r\n    if (SUCCEEDED(RoActivateI" +
                    "nstance(clsid, insp.put()))) {\r\n      winrt::IUnknown unk{ nullptr };\r\n      win" +
                    "rt::copy_from_abi(unk, insp.get());\r\n      WindowsDeleteString(clsid);\r\n      re" +
                    "turn unk.as<winrt::IInspectable>();\r\n    } else {\r\n      // type probably has a " +
                    "custom activation factory, use C++/WinRT to create it\r\n      WindowsDeleteString" +
                    "(clsid);\r\n      clsid = nullptr;\r\n      const auto key = COMPILE_TIME_CRC32_STR(" +
                    "typeName.data());\r\n      static constexpr const std::pair<uint32_t, winrt::Windo" +
                    "ws::Foundation::IInspectable(*)()> map[] = {\r\n");
            
            #line 52 "C:\Users\asklar\source\repos\react-native-xaml\package\Codegen\TypeCreator.tt"
 foreach (var t in Types.Where(t => Util.GetComposableFactoryType(t) != null).OrderBy(t => Util.GetCRC32(t.GetFullName()))) { 
            
            #line default
            #line hidden
            this.Write("        { COMPILE_TIME_CRC32_STR(\"");
            
            #line 53 "C:\Users\asklar\source\repos\react-native-xaml\package\Codegen\TypeCreator.tt"
            this.Write(this.ToStringHelper.ToStringWithCulture(t.GetFullName()));
            
            #line default
            #line hidden
            this.Write("\"), []() -> winrt::Windows::Foundation::IInspectable { return ");
            
            #line 53 "C:\Users\asklar\source\repos\react-native-xaml\package\Codegen\TypeCreator.tt"
            this.Write(this.ToStringHelper.ToStringWithCulture(Util.GetCppWinRTType(t)));
            
            #line default
            #line hidden
            this.Write("(); } }, // 0x");
            
            #line 53 "C:\Users\asklar\source\repos\react-native-xaml\package\Codegen\TypeCreator.tt"
            this.Write(this.ToStringHelper.ToStringWithCulture(Util.GetCRC32(t.GetFullName()).ToString("X8")));
            
            #line default
            #line hidden
            this.Write("\r\n");
            
            #line 54 "C:\Users\asklar\source\repos\react-native-xaml\package\Codegen\TypeCreator.tt"
 } 
            
            #line default
            #line hidden
            this.Write("      };\r\n\r\n      if (const auto it = binary_search_map(map, 0, std::size(map), k" +
                    "ey)) {\r\n        return (* it)();\r\n      }\r\n    }\r\n  }\r\n  assert(false && \"xaml t" +
                    "ype not found\");\r\n  return nullptr;\r\n}\r\n\r\n\r\n");
            return this.GenerationEnvironment.ToString();
        }
    }
    
    #line default
    #line hidden
    #region Base class
    /// <summary>
    /// Base class for this transformation
    /// </summary>
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.VisualStudio.TextTemplating", "17.0.0.0")]
    public class TypeCreatorBase
    {
        #region Fields
        private global::System.Text.StringBuilder generationEnvironmentField;
        private global::System.CodeDom.Compiler.CompilerErrorCollection errorsField;
        private global::System.Collections.Generic.List<int> indentLengthsField;
        private string currentIndentField = "";
        private bool endsWithNewline;
        private global::System.Collections.Generic.IDictionary<string, object> sessionField;
        #endregion
        #region Properties
        /// <summary>
        /// The string builder that generation-time code is using to assemble generated output
        /// </summary>
        protected System.Text.StringBuilder GenerationEnvironment
        {
            get
            {
                if ((this.generationEnvironmentField == null))
                {
                    this.generationEnvironmentField = new global::System.Text.StringBuilder();
                }
                return this.generationEnvironmentField;
            }
            set
            {
                this.generationEnvironmentField = value;
            }
        }
        /// <summary>
        /// The error collection for the generation process
        /// </summary>
        public System.CodeDom.Compiler.CompilerErrorCollection Errors
        {
            get
            {
                if ((this.errorsField == null))
                {
                    this.errorsField = new global::System.CodeDom.Compiler.CompilerErrorCollection();
                }
                return this.errorsField;
            }
        }
        /// <summary>
        /// A list of the lengths of each indent that was added with PushIndent
        /// </summary>
        private System.Collections.Generic.List<int> indentLengths
        {
            get
            {
                if ((this.indentLengthsField == null))
                {
                    this.indentLengthsField = new global::System.Collections.Generic.List<int>();
                }
                return this.indentLengthsField;
            }
        }
        /// <summary>
        /// Gets the current indent we use when adding lines to the output
        /// </summary>
        public string CurrentIndent
        {
            get
            {
                return this.currentIndentField;
            }
        }
        /// <summary>
        /// Current transformation session
        /// </summary>
        public virtual global::System.Collections.Generic.IDictionary<string, object> Session
        {
            get
            {
                return this.sessionField;
            }
            set
            {
                this.sessionField = value;
            }
        }
        #endregion
        #region Transform-time helpers
        /// <summary>
        /// Write text directly into the generated output
        /// </summary>
        public void Write(string textToAppend)
        {
            if (string.IsNullOrEmpty(textToAppend))
            {
                return;
            }
            // If we're starting off, or if the previous text ended with a newline,
            // we have to append the current indent first.
            if (((this.GenerationEnvironment.Length == 0) 
                        || this.endsWithNewline))
            {
                this.GenerationEnvironment.Append(this.currentIndentField);
                this.endsWithNewline = false;
            }
            // Check if the current text ends with a newline
            if (textToAppend.EndsWith(global::System.Environment.NewLine, global::System.StringComparison.CurrentCulture))
            {
                this.endsWithNewline = true;
            }
            // This is an optimization. If the current indent is "", then we don't have to do any
            // of the more complex stuff further down.
            if ((this.currentIndentField.Length == 0))
            {
                this.GenerationEnvironment.Append(textToAppend);
                return;
            }
            // Everywhere there is a newline in the text, add an indent after it
            textToAppend = textToAppend.Replace(global::System.Environment.NewLine, (global::System.Environment.NewLine + this.currentIndentField));
            // If the text ends with a newline, then we should strip off the indent added at the very end
            // because the appropriate indent will be added when the next time Write() is called
            if (this.endsWithNewline)
            {
                this.GenerationEnvironment.Append(textToAppend, 0, (textToAppend.Length - this.currentIndentField.Length));
            }
            else
            {
                this.GenerationEnvironment.Append(textToAppend);
            }
        }
        /// <summary>
        /// Write text directly into the generated output
        /// </summary>
        public void WriteLine(string textToAppend)
        {
            this.Write(textToAppend);
            this.GenerationEnvironment.AppendLine();
            this.endsWithNewline = true;
        }
        /// <summary>
        /// Write formatted text directly into the generated output
        /// </summary>
        public void Write(string format, params object[] args)
        {
            this.Write(string.Format(global::System.Globalization.CultureInfo.CurrentCulture, format, args));
        }
        /// <summary>
        /// Write formatted text directly into the generated output
        /// </summary>
        public void WriteLine(string format, params object[] args)
        {
            this.WriteLine(string.Format(global::System.Globalization.CultureInfo.CurrentCulture, format, args));
        }
        /// <summary>
        /// Raise an error
        /// </summary>
        public void Error(string message)
        {
            System.CodeDom.Compiler.CompilerError error = new global::System.CodeDom.Compiler.CompilerError();
            error.ErrorText = message;
            this.Errors.Add(error);
        }
        /// <summary>
        /// Raise a warning
        /// </summary>
        public void Warning(string message)
        {
            System.CodeDom.Compiler.CompilerError error = new global::System.CodeDom.Compiler.CompilerError();
            error.ErrorText = message;
            error.IsWarning = true;
            this.Errors.Add(error);
        }
        /// <summary>
        /// Increase the indent
        /// </summary>
        public void PushIndent(string indent)
        {
            if ((indent == null))
            {
                throw new global::System.ArgumentNullException("indent");
            }
            this.currentIndentField = (this.currentIndentField + indent);
            this.indentLengths.Add(indent.Length);
        }
        /// <summary>
        /// Remove the last indent that was added with PushIndent
        /// </summary>
        public string PopIndent()
        {
            string returnValue = "";
            if ((this.indentLengths.Count > 0))
            {
                int indentLength = this.indentLengths[(this.indentLengths.Count - 1)];
                this.indentLengths.RemoveAt((this.indentLengths.Count - 1));
                if ((indentLength > 0))
                {
                    returnValue = this.currentIndentField.Substring((this.currentIndentField.Length - indentLength));
                    this.currentIndentField = this.currentIndentField.Remove((this.currentIndentField.Length - indentLength));
                }
            }
            return returnValue;
        }
        /// <summary>
        /// Remove any indentation
        /// </summary>
        public void ClearIndent()
        {
            this.indentLengths.Clear();
            this.currentIndentField = "";
        }
        #endregion
        #region ToString Helpers
        /// <summary>
        /// Utility class to produce culture-oriented representation of an object as a string.
        /// </summary>
        public class ToStringInstanceHelper
        {
            private System.IFormatProvider formatProviderField  = global::System.Globalization.CultureInfo.InvariantCulture;
            /// <summary>
            /// Gets or sets format provider to be used by ToStringWithCulture method.
            /// </summary>
            public System.IFormatProvider FormatProvider
            {
                get
                {
                    return this.formatProviderField ;
                }
                set
                {
                    if ((value != null))
                    {
                        this.formatProviderField  = value;
                    }
                }
            }
            /// <summary>
            /// This is called from the compile/run appdomain to convert objects within an expression block to a string
            /// </summary>
            public string ToStringWithCulture(object objectToConvert)
            {
                if ((objectToConvert == null))
                {
                    throw new global::System.ArgumentNullException("objectToConvert");
                }
                System.Type t = objectToConvert.GetType();
                System.Reflection.MethodInfo method = t.GetMethod("ToString", new System.Type[] {
                            typeof(System.IFormatProvider)});
                if ((method == null))
                {
                    return objectToConvert.ToString();
                }
                else
                {
                    return ((string)(method.Invoke(objectToConvert, new object[] {
                                this.formatProviderField })));
                }
            }
        }
        private ToStringInstanceHelper toStringHelperField = new ToStringInstanceHelper();
        /// <summary>
        /// Helper to produce culture-oriented representation of an object as a string
        /// </summary>
        public ToStringInstanceHelper ToStringHelper
        {
            get
            {
                return this.toStringHelperField;
            }
        }
        #endregion
    }
    #endregion
}
