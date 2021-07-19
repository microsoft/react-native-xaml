using MiddleweightReflection;
using System;
using System.Collections.Generic;
using System.Collections.Immutable;
using System.Linq;

namespace Codegen
{
    public static class Util
    {
        internal static Dictionary<string, string> propNameMap = new Dictionary<string, string>();

        public static string GetPropFullName(MrProperty p)
        {
            return $"{p.DeclaringType.GetFullName()}.{p.GetName()}";
        }
        
        public static string ToJsName(MrProperty prop)
        {
            if (IsDependencyProperty(prop))
            {
                return ToJsName($"{prop.DeclaringType.GetName()}{Util.MinusPropertySuffix(prop.GetName())}");
            }
            var fullName = GetPropFullName(prop);
            if (propNameMap.ContainsKey(fullName)) { return propNameMap[fullName]; }
            return ToJsName(prop.GetName());
        }

        public static bool IsDependencyProperty(MrProperty prop)
        {
            return prop.GetName().EndsWith("Property") && prop.GetPropertyType().GetName() == "DependencyProperty";
        }

        public static string ToJsName(SyntheticProperty prop)
        {
            if (propNameMap.TryGetValue(prop.Name, out var name)) return name;
            if (prop.Property != null && IsDependencyProperty(prop.Property))
            {
                return ToJsName($"{prop.Property.DeclaringType.GetName()}{prop.SimpleName}");
            }
            return ToJsName(prop.SimpleNameForJs);
        }

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

        public static MrType GetComposableFactoryType(MrType type)
        {
            var factories = GetFactories(type);
            var ca = factories.FirstOrDefault(f => f.Kind == "ComposableAttribute");
            return ca?.Type;
        }
        class FactoryInfo
        {
            public string Kind { get; set; }
            public MrType Type { get; set; }
            public bool Activatable { get; set; }
            public bool Statics { get; set; }
            public bool Composable { get; set; }
            public bool Visible { get; set; }
        }
        private static List<FactoryInfo> GetFactories(MrType t)
        {
            var d = new List<FactoryInfo>();
            foreach (var ca in t.GetCustomAttributes())
            {
                ca.GetNameAndNamespace(out var name, out var ns);
                if (ns != "Windows.Foundation.Metadata") continue;
                ca.GetArguments(out var _fixed, out var named);

                var factoryInfo = new FactoryInfo();
                factoryInfo.Kind = name;
                // factoryInfo.Type = GetSystemType(signature);
                if (name == "ActivatableAttribute")
                {
                    factoryInfo.Activatable = true;
                }
                else if (name == "StaticAttribute")
                {
                    factoryInfo.Statics = true;
                    factoryInfo.Type = (MrType)_fixed[0].Value;
                }
                else if (name == "ComposableAttribute")
                {
                    factoryInfo.Composable = true;
                    factoryInfo.Type = (MrType)_fixed[0].Value;

                }
                else
                {
                    continue;
                }
                d.Add(factoryInfo);
            }
            return d;
        }

        public static string MinusPropertySuffix(string v)
        {
            return v.Substring(0, v.LastIndexOf("Property"));
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
                { "System.Uri", "winrt::Windows::Foundation::Uri" },
                { "System.Object", "winrt::Windows::Foundation::IInspectable" },
            };

            if (t.GetFullName() == $"{XamlNames.XamlNamespace}.Controls.Maps.MapStyle")
            {
                // MapStyle has a bug where it doesn't support coercion from int
            }
            else if (t.IsEnum) return "int32_t";

            if (primitiveTypes.ContainsKey(t.GetFullName()))
            {
                return primitiveTypes[t.GetFullName()];
            }
            return $"winrt::{t.GetFullName().Replace(".", "::")}";
        }


        public static HashSet<FakeEnum> fakeEnums = new HashSet<FakeEnum>();
        public static HashSet<MrType> enumsToGenerateConvertersFor = new HashSet<MrType>();

        public static MrLoadContext LoadContext { get; internal set; }

        public static ViewManagerPropertyType GetVMPropertyType(SyntheticProperty prop)
        {
            if (prop.PropertyType != null) return GetVMPropertyType(prop.PropertyType);
            if (prop.Property != null) return GetVMPropertyType(prop.Property);

            var fe = fakeEnums.Where(x => x.Name == prop.FakePropertyType);
            if (fe.Any())
            {
                return ViewManagerPropertyType.Number;
            }

            if (Util.TypeMapping.TryGetValue(prop.Name, out var typeMapping))
            {
                return typeMapping.VM;
            }

            throw new ArgumentException($"Invalid property type ${prop.FakePropertyType}");
        }

        public static ViewManagerPropertyType GetVMPropertyType(MrProperty prop)
        {
            if (IsPropertyContentProperty(prop)) return ViewManagerPropertyType.String;
            return GetVMPropertyType(prop.GetPropertyType());
        }


        public static Dictionary<string, TypeMapping> TypeMapping { get; set; } = new Dictionary<string, TypeMapping>();
        public static List<MrProperty> AttachedProperties { get; internal set; }

        private static ViewManagerPropertyType GetVMPropertyType(MrType propType)
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
                case "System.String":
                case "System.Uri":
                    //case "Windows.Foundation.Uri":
                    return ViewManagerPropertyType.String;
                case "System.Boolean":
                    return ViewManagerPropertyType.Boolean;
                case "System.Int32":
                case "System.Int64":
                case "System.Double":
                case "System.Single":
                    return ViewManagerPropertyType.Number;
                case "Windows.UI.Text.FontWeight":
                    return ViewManagerPropertyType.Number;
                case "System.Object":
                    return ViewManagerPropertyType.Map;
            }

            if (TypeMapping.TryGetValue(propType.GetFullName(), out var mapping)) {
                return mapping.VM;
            }

            return ViewManagerPropertyType.Unknown;
        }

        public static string GetTypeScriptType(SyntheticProperty prop)
        {
            if (prop.PropertyType != null) return GetTypeScriptType(prop.PropertyType);
            var typeName = prop.FakePropertyType;
            switch (typeName)
            {
                case "undefined":
                case "any":
                    return typeName;
            }

            var fakeEnum = fakeEnums.Where(x => x.Name == typeName);
            if (fakeEnum.Any())
            {
                return $"Enums.{fakeEnum.First().Name}";
            }

            if (Util.TypeMapping.TryGetValue(typeName, out var typeMapping))
            {
                return typeMapping.TS;
            }
            throw new ArgumentException($"Unknown type ${typeName}");
        }

        public static string GetTypeScriptType(MrProperty prop)
        {
            if (IsDependencyProperty(prop))
            {
                var getterName = $"Get{MinusPropertySuffix(prop.GetName())}";
                prop.DeclaringType.GetMethodsAndConstructors(out var methods, out var ctors);
                return GetTypeScriptType(methods.First(m => m.GetName() == getterName).ReturnType);
            }
            var tsTypeFromPropType = GetTypeScriptType(prop.GetPropertyType());

            if (tsTypeFromPropType == "object" && IsPropertyContentProperty(prop))
            {
                return "string";
            }
            return tsTypeFromPropType;
        }

        static bool IsPropertyContentProperty(MrProperty prop)
        {
            return prop.DeclaringType.GetCustomAttributes().Any(x =>
            {
                x.GetNameAndNamespace(out var name, out var ns);
                if (name == "ContentPropertyAttribute")
                {
                    x.GetArguments(out var fixedArgs, out var namedArgs);
                    var na = namedArgs.Where(n => n.Name == "Name").First();
                    return (string)na.Value == prop.GetName();
                }
                return false;
            });
        }

        private static string GetTypeScriptType(MrType propType)
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
                case "System.String":
                case "System.Uri":
                    return "string";
                case "System.Boolean":
                    return "boolean";
                case "System.Int32":
                case "System.Int64":
                case "System.Double":
                case "System.Single":
                    return "number";
                case "System.Object":
                    return "object";
                case "Windows.UI.Text.FontWeight":
                    return "number";
            }

            if (TypeMapping.TryGetValue(propType.GetFullName(), out var mapping))
            {
                return mapping.TS;
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


        public static bool IsReservedName(MrProperty prop)
        {
            if (prop.GetName() == "Type")
            {
                return true;
            }
            return false;
        }

        public static bool ShouldEmitPropertyMetadata(MrProperty p)
        {
            if (IsReservedName(p)) return false;
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

        public static string MaybeBox(string varName, MrProperty prop)
        {
            var unboxed = $"ea.{prop.GetName()}()";
            var type = prop.GetPropertyType();
            if (type.IsEnum)
            {
                return $"winrt::box_value(static_cast<uint32_t>({unboxed}))";
            }
            //if (type.IsClass && DerivesFrom(type, "System.Object"))
            //{
            //    return unboxed;
            else
            {
                return $"winrt::box_value({unboxed})";
            }
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
            var listDerived = derived[t.GetName()].Where(t => HasCtor(t)).Select(t => $"'{t.GetFullName()}'");
            return string.Join("|", listDerived);
        }
        private static Dictionary<MrType, int> typeInheritanceDepth = new Dictionary<MrType, int>();

        public static int GetTypeInheritanceDepth(MrType t)
        {
            if (typeInheritanceDepth.TryGetValue(t, out var val))
            {
                return val;
            }
            if (t.GetFullName() == "System.Object") { return 0; }
            typeInheritanceDepth[t] = 1 + GetTypeInheritanceDepth(t.GetBaseType());
            return typeInheritanceDepth[t];
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

                for (var baseType = type.GetBaseType(); baseType != null && baseType.GetName() != XamlNames.TopLevelProjectedType; baseType = baseType.GetBaseType())
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
            }
            else
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

