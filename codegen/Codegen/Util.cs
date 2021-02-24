using MiddleweightReflection;
using System.Collections.Generic;
using System.Linq;

namespace Codegen
{
    public static class Util
    {
        public static string ToJsName(string name)
        {
            return name[0].ToString().ToLower() + name.Substring(1);
        }
        public static string GetCppWinRTType(MrType t)
        {
            var primitiveTypes = new Dictionary<string, string>()
            {
                { "System.String", "winrt::hstring" },
                { "System.Boolean", "bool" },
                { "System.Int32", "int32_t" },
                { "System.Int64", "int64_t" },
                { "System.Double", "double" },
                { "System.Single", "float" },
                { "System.Object", "winrt::Windows::Foundation::IInspectable" },
            };
            if (primitiveTypes.ContainsKey(t.GetFullName()))
            {
                return primitiveTypes[t.GetFullName()];
            }
            return $"winrt::{t.GetFullName().Replace(".", "::")}";
        }
        public static HashSet<MrType> enumsToGenerateConvertersFor = new HashSet<MrType>();
        public static ViewManagerPropertyType GetVMPropertyType(MrType propType)
        {
            if (propType.IsEnum)
            {
                enumsToGenerateConvertersFor.Add(propType);
                return ViewManagerPropertyType.String;
            }
            else if (propType.IsArray)
            {
                return ViewManagerPropertyType.Array;
            }

            switch (propType.GetFullName())
            {
                case "System.String": return ViewManagerPropertyType.String;
                case "System.Boolean": return ViewManagerPropertyType.Boolean;
                case "System.Int32":
                case "System.Int64":
                case "System.Double":
                case "System.Single":
                    return ViewManagerPropertyType.Number;
                case "Windows.UI.Xaml.Media.Brush":
                case "Windows.UI.Xaml.Media.SolidColorBrush":
                    return ViewManagerPropertyType.Color;
                case "System.Object":
                    return ViewManagerPropertyType.Map;
            }

            return ViewManagerPropertyType.Unknown;
        }

        public static string GetTypeScriptType(MrType propType)
        {
            if (propType.IsEnum)
            {
                var enumNames = propType.GetFields().Where(f => !f.IsSpecialName);
                return string.Join(" | ", enumNames.Select(x => $"'{ToJsName(x.GetName())}'"));
            }
            else if (propType.IsArray)
            {
                return "any[]";
            }

            switch (propType.GetFullName())
            {
                case "System.String": return "string";
                case "System.Boolean": return "boolean";
                case "System.Int32":
                case "System.Int64":
                case "System.Double":
                case "System.Single":
                    return "number";
                case "Windows.UI.Xaml.Media.Brush":
                case "Windows.UI.Xaml.Media.SolidColorBrush":
                    return "ColorValue";
                case "System.Object":
                    return "object";
            }

            return "any";
        }


        public static string GetBaseClassProps(MrType type)
        {
            if (type.GetName() == "FrameworkElement")
            {
                return "ViewProps";
            }
            else
            {
                return $"Native{type.GetBaseType().GetName()}Props";
            }
        }

        public static bool HasCtor(MrType t)
        {
            t.GetMethodsAndConstructors(out var methods, out var ctors);
            var publicCtors = ctors.Where(x => x.MethodDefinition.Attributes.HasFlag(System.Reflection.MethodAttributes.Public));
            return publicCtors.Count() != 0;

        }

        public static bool IsReservedName(string name)
        {
            switch (name)
            {
                case "Style":
                case "Type":
                    return true;
                default:
                    return false;
            }
        }

        public static bool ShouldEmitPropertyMetadata(MrProperty p)
        {
            if (IsReservedName(p.GetName())) return false;
            if (p.Setter == null) return false;
            bool isStatic = p.Getter.MethodDefinition.Attributes.HasFlag(System.Reflection.MethodAttributes.Static);
            if (!isStatic)
            {
                var staticDPName = p.GetName() + "Property";
                var staticDP = p.DeclaringType.GetProperties().Where(staticProp => !staticProp.Getter.MethodSignature.Header.IsInstance && (staticProp.GetName() == staticDPName));
                System.Diagnostics.Debug.Assert(staticDP.Count() <= 1);
                return staticDP.Count() == 1 && Util.GetVMPropertyType(p.GetPropertyType()) != ViewManagerPropertyType.Unknown;
            }
            return false;
        }


        public static bool DerivesFrom(MrType type, string baseName)
        {
            if (type.GetFullName() == baseName) return true;
            else if (type.GetBaseType() == null) return false;
            else return DerivesFrom(type.GetBaseType(), baseName);
        }

        public static string GetDerivedJsTypes(MrType t, IEnumerable<MrType> types)
        {
            var derived = types.Where(type => DerivesFrom(type, t.GetFullName())).Select(t => $"'{ToJsName(t.GetName())}'");
            return string.Join("|", derived);
        }

    }
}

