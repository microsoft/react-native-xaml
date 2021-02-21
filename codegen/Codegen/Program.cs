using MiddleweightReflection;
using System;
using System.Linq;
using System.Collections.Generic;
using System.Collections.Immutable;
using System.IO;
using System.Reflection;
using System.Diagnostics.CodeAnalysis;

namespace Codegen
{
    public enum ViewManagerPropertyType
    {
        Unknown = -1,
        Boolean = 0,
        Number = 1,
        String = 2,
        Array = 3,
        Map = 4,
        Color = 5,
    };

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
            }

            return ViewManagerPropertyType.Unknown;
        }

    }
    public partial class TypeCreator
    {
        public TypeCreator(IEnumerable<MrType> types)
        {
            Types = types;
        }

        public IEnumerable<MrType> Types { get; set; }
    }

    public partial class TypeProperties
    {
        public TypeProperties(IEnumerable<MrProperty> properties)
        {
            Properties = properties;
        }
        IEnumerable<MrProperty> Properties { get; set; }
    }

    public partial class TypeEvents
    {
        public TypeEvents(IEnumerable<MrEvent> events)
        {
            Events = events;
        }
        IEnumerable<MrEvent> Events { get; set; }
    }


    public class NameEqualityComparer : IEqualityComparer<MrTypeAndMemberBase> {
        public bool Equals(MrTypeAndMemberBase that, MrTypeAndMemberBase other)
        {
            return that.GetName() == other.GetName();
        }

        public int GetHashCode([DisallowNull] MrTypeAndMemberBase obj)
        {
            return obj.GetName().GetHashCode();
        }
    }


class Program
    {
        private bool hasCtor(MrType t)
        {
            t.GetMethodsAndConstructors(out var methods, out var ctors);
            var publicCtors = ctors.Where(x => x.MethodDefinition.Attributes.HasFlag(System.Reflection.MethodAttributes.Public));
            return publicCtors.Count() != 0;

        }
        private void DumpTypes()
        {
            var context = new MrLoadContext(true);
            context.FakeTypeRequired += (sender, e) =>
            {
                var ctx = sender as MrLoadContext;
                if (e.AssemblyName == "Windows.Foundation.FoundationContract")
                {
                    e.ReplacementType = ctx.GetTypeFromAssembly(e.TypeName, "Windows");
                }
            };
            var windows_winmd = context.LoadAssemblyFromPath(@"C:\Program Files (x86)\Windows Kits\10\UnionMetadata\10.0.19041.0\Windows.winmd");//, "Windows.winmd");
                                                                                                                                                 //            var assembly = context.LoadAssemblyFromPath(path); // @"C:\rnw\vnext\target\x86\Debug\Microsoft.ReactNative\Microsoft.ReactNative.winmd");
            context.FinishLoading();
            var types = windows_winmd.GetAllTypes().Skip(1);
            var fe = types.Where(type => IsFrameworkElementDerived(type));
            var assemblyLocation = Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location);
            var generatedDirPath = Path.GetFullPath(Path.Join(assemblyLocation, @"..\..\..\..", @"..\package\windows\ReactNativeXaml\Codegen"));

            var creatableTypes = fe.Where(x => hasCtor(x)).ToList();
            creatableTypes.Sort((a, b) => a.GetName().CompareTo(b.GetName()));
            var typeCreatorGen = new TypeCreator(creatableTypes).TransformText();

            if (!Directory.Exists(generatedDirPath))
            {
                Directory.CreateDirectory(generatedDirPath);
            }
            File.WriteAllText(Path.Join(generatedDirPath, "TypeCreator.cpp"), typeCreatorGen);

            var properties = new List<MrProperty>();
            var events = new List<MrEvent>();
            foreach (var type in fe)
            {
                var propsToAdd = type.GetProperties().Where(p => ShouldEmitPropertyMetadata(p));
                properties.AddRange(propsToAdd);

                var eventsToAdd = type.GetEvents().Where(e => e.GetMemberModifiers().IsPublic);
                events.AddRange(eventsToAdd);
            }

            properties.Sort((a, b) => a.GetName().CompareTo(b.GetName()));
            var propertiesGen = new TypeProperties(properties).TransformText();
            File.WriteAllText(Path.Join(generatedDirPath, "TypeProperties.g.h"), propertiesGen);

            var enumConvertersGen = new EnumConverters().TransformText();
            File.WriteAllText(Path.Join(generatedDirPath, "EnumConverters.cpp"), enumConvertersGen);

            var eventsGen = new TypeEvents(events).TransformText();
            File.WriteAllText(Path.Join(generatedDirPath, "TypeEvents.g.h"), eventsGen);
        }

        private bool ShouldEmitPropertyMetadata(MrProperty p)
        {
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

        private bool IsFrameworkElementDerived(MrType type)
        {
            var feName = "Windows.UI.Xaml.FrameworkElement";
            if (type.GetFullName() == feName) return true;
            else if (type.GetBaseType() == null) return false;
            else return IsFrameworkElementDerived(type.GetBaseType());
        }

        static void Main(string[] args)
        {
            new Program().DumpTypes();
        }
    }
}

