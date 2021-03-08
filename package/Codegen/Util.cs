using MiddleweightReflection;
using System.Collections.Generic;
using System.Collections.Immutable;
using System.Diagnostics;
using System.Linq;

namespace Codegen
{
    public static class Util
    {
        public static string ToJsName(string name)
        {
            var specialPrefixes = new string[] { "UI", "XY" };
            foreach (var p in specialPrefixes)
            {
                if (name.StartsWith(p))
                {
                    return p.ToLower() + name.Substring(p.Length);
                }
            }

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
            if (t.IsEnum) return "int32_t";
            if (primitiveTypes.ContainsKey(t.GetFullName()))
            {
                return primitiveTypes[t.GetFullName()];
            }
            return $"winrt::{t.GetFullName().Replace(".", "::")}";
        }

        public static HashSet<MrType> enumsToGenerateConvertersFor = new HashSet<MrType>();

        public static MrLoadContext LoadContext { get; internal set; }

        public static ViewManagerPropertyType GetVMPropertyType(MrType propType)
        {
            if (propType.IsEnum)
            {
                enumsToGenerateConvertersFor.Add(propType);
                return ViewManagerPropertyType.Number;
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
                case "Windows.UI.Xaml.Thickness":
                    return ViewManagerPropertyType.Map;
                case "System.Object":
                    return ViewManagerPropertyType.Map;
            }

            return ViewManagerPropertyType.Unknown;
        }

        public static string GetTypeScriptType(MrType propType)
        {
            if (propType.IsEnum)
            {
                return $"Enums.{propType.GetName()}";
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
                case "Windows.UI.Xaml.Thickness":
                    return "Thickness";
                case "System.Object":
                    return "object";
            }

            return "any";
        }


        public static string GetBaseClassProps(MrType type)
        {
            switch (type.GetName())
            {
                case "DependencyObject":
                    return "ViewProps";
                default:
                    return $"Native{type.GetBaseType().GetName()}Props";
            }
        }

        public static bool ShouldEmitEventMetadata(MrEvent e)
        {
            // KeyboardEventHandler already registers these events as bubbling
            // we currently register all events as direct, so this causes a conflict (can't be registered as both bubbling and direct) for these two events; 
            // so hide them for now
            var bannedEvents = new string[] { "KeyDown", "KeyUp" };
            return e.GetMemberModifiers().IsPublic && !bannedEvents.Contains(e.GetName());
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
        public static string GetJsTypeProperty(MrType t, Dictionary<string, List<MrType>> derived)
        {
            var listDerived = derived[t.GetName()].Where(t => HasCtor(t)).Select(t => $"'{ToJsName(t.GetName())}'");
            return string.Join("|", listDerived);
        }

        public static Dictionary<string, List<MrType>> GetDerivedTypes(IEnumerable<MrType> types)
        {
            var derivedClasses = new Dictionary<string, List<MrType>>();
            foreach (var type in types)
            {
                if (!derivedClasses.ContainsKey(type.GetName()))
                {
                    derivedClasses[type.GetName()] = new List<MrType>() { type };
                }

                for (var baseType = type.GetBaseType(); baseType !=null && baseType.GetName() != "Windows.UI.Xaml.DependencyObject"; baseType = baseType.GetBaseType())
                {
                    if (!derivedClasses.ContainsKey(baseType.GetName()))
                    {
                        derivedClasses[baseType.GetName()] = new List<MrType>();
                    }
                    derivedClasses[baseType.GetName()].Add(type);
                }
            }
            return derivedClasses;
        }
        class EventArgParameter
        {
            public MrType Type { get; set; }
            public string Name { get; set; }
        }
        public static string GetCppWinRTEventSignature(MrEvent e)
        {
            var et = e.GetEventType();
            IEnumerable<EventArgParameter> evtArgs;
            if (et.GetHasGenericParameters())
            {
                evtArgs = et.GetGenericArguments().Select(a => new EventArgParameter() { Type = a, Name = ToJsName(a.GetName()) });
                if (et.GetName() == "EventHandler`1")
                {
                    LoadContext.TryFindMrType("System.Object", out var objType);
                    evtArgs = evtArgs.ToList().Prepend(new EventArgParameter() { Type = objType, Name = "sender" });
                }
            } else
            {
                evtArgs = et.GetInvokeMethod().GetParameters().Select(t => new EventArgParameter() { Type = t.GetParameterType(), Name = t.GetParameterName() });
            }
            var argList = evtArgs.ToList();
            argList[0].Name = "sender";
            if (argList.Count == 2)
            {
                argList[1].Name = "args";
            }

            var args = argList.Select(t => $"const {GetCppWinRTType(t.Type)}& {t.Name}");
            return string.Join(", ", args);
        }
    }
}

