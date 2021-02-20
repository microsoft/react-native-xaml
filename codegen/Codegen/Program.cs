using MiddleweightReflection;
using System;
using System.Linq;
using System.Collections.Generic;
using System.Collections.Immutable;
using System.IO;
using System.Reflection;

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
            foreach (var type in fe)
            {
                var propsToAdd = type.GetProperties().Where(p => ShouldEmitPropertyMetadata(p));
                properties.AddRange(propsToAdd);
            }

            properties.Sort((a, b) => a.GetName().CompareTo(b.GetName()));
            var propertiesGen = new TypeProperties(properties).TransformText();
            File.WriteAllText(Path.Join(generatedDirPath, "TypeProperties.cpp"), propertiesGen);

            var enumConvertersGen = new EnumConverters().TransformText();
            File.WriteAllText(Path.Join(generatedDirPath, "EnumConverters.cpp"), enumConvertersGen);



        }


        //foreach (var entry in output)
        //{
        //    Console.WriteLine($"{{ \"{entry.Key.JSName}\", {entry.Value} }}");
        //}

        //Console.WriteLine($"{output.Count} properties");



        private bool ShouldEmitPropertyMetadata(MrProperty p)
        {
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


        //Dictionary<string, ViewManagerPropertyType> jsTypeMap = new Dictionary<string, FromJSType>()
        //{
        //    { "System.String", FromJSType.String },
        //    { "System.Array", FromJSType.Array },
        //    { "System.Object", FromJSType.Object },
        //    { "System.Boolean", FromJSType.Boolean },
        //    { "System.Int32", FromJSType.Int64 },
        //    { "System.Int64", FromJSType.Int64 },
        //    { "System.Double", FromJSType.Double },
        //    { "System.Single", FromJSType.Double },
        //    { "Windows.UI.Xaml.Thickness", FromJSType.Thickness },
        //    { "Windows.UI.Xaml.HorizontalAlignment", FromJSType.String },
        //    { "Windows.UI.Xaml.VerticalAlignment", FromJSType.String },
        //    { "Windows.UI.Xaml.Media.Brush", FromJSType.SolidColorBrush },
        //    { "Windows.UI.Xaml.Media.SolidColorBrush", FromJSType.SolidColorBrush },
        //    { "Windows.UI.Text.FontWeight", FromJSType.String },
        //    { "Windows.UI.Text.FontStyle", FromJSType.String },
        //    { "Windows.UI.Text.FontStretch", FromJSType.String },
        //    { "Windows.UI.Xaml.Media.FontFamily", FromJSType.String },
        //    { "Windows.UI.Xaml.Input.KeyboardNavigationMode", FromJSType.String },
        //    { "Windows.UI.Xaml.Controls.ControlTemplate", FromJSType.Null }, // NYI
        //    { "Windows.UI.Xaml.FocusState", FromJSType.String },
        //    { "Windows.UI.Xaml.DependencyObject", FromJSType.Null }, // NYI
        //    { "Windows.UI.Xaml.Controls.RequiresPointer", FromJSType.String },
        //    { "Windows.UI.Xaml.ElementSoundMode", FromJSType.String },
        //    { "System.Uri", FromJSType.String },
        //    { "Windows.UI.Xaml.CornerRadius", FromJSType.Array },
        //    { "Windows.UI.Xaml.Controls.BackgroundSizing", FromJSType.String },
        //    { "Windows.UI.Xaml.Media.Animation.TransitionCollection", FromJSType.Null }, // NYI
        //    { "Windows.UI.Xaml.Controls.DataTemplateSelector", FromJSType.Null }, // NYI
        //    { "Windows.UI.Xaml.DataTemplate", FromJSType.Null }, // NYI
        //    { "Windows.UI.Xaml.UIElement", FromJSType.Null }, // NYI
        //    { "Windows.UI.Xaml.Controls.AppBarClosedDisplayMode", FromJSType.String },
        //    { "Windows.UI.Xaml.Controls.Primitives.AppBarTemplateSettings", FromJSType.Null }, // NYI
        //    { "Windows.UI.Xaml.Controls.LightDismissOverlayMode", FromJSType.String },
        //    { "System.Windows.Input.ICommand", FromJSType.Null }, // NYI
        //    { "Windows.UI.Xaml.Controls.ClickMode", FromJSType.String },
        //    { "Windows.UI.Xaml.Controls.Primitives.FlyoutBase", FromJSType.Null }, // NYI
        //    { "Windows.UI.Xaml.Controls.IconElement", FromJSType.Null }, // NYI
        //    { "Windows.UI.Xaml.Controls.CommandBarLabelPosition", FromJSType.String },
        //    { "Windows.UI.Xaml.Controls.Primitives.AppBarButtonTemplateSettings", FromJSType.Null }, // NYI
        //    { "System.Nullable`1", FromJSType.String }, // Nullable<bool> for IsChecked
        //    { "Windows.UI.Xaml.Controls.Primitives.AppBarToggleButtonTemplateSettings", FromJSType.Null }, // NYI
        //    { "Windows.UI.Xaml.Controls.ItemsPanelTemplate", FromJSType.Null }, // NYI
        //    { "Windows.UI.Xaml.Controls.StyleSelector", FromJSType.Null }, // NYI
        //    { "Windows.UI.Xaml.Style", FromJSType.Null },
        //    { "Windows.UI.Xaml.Controls.GroupStyleSelector", FromJSType.Null },
        //    { "Windows.Foundation.Collections.IObservableVector`1", FromJSType.Null },
        //};


        private bool IsFrameworkElementDerived(MrType type)
        {
            if (type.GetBaseType() == null) return false;
            var bt = type.GetBaseType().GetFullName();
            if (bt == "Windows.UI.Xaml.FrameworkElement") return true;
            else return IsFrameworkElementDerived(type.GetBaseType());
        }

        //private static string MapManagedTypeToWinRtType(MrType t)
        //{
        //    var map = new Dictionary<string, string> {
        //        { typeof(Object).FullName, "Windows.Foundation.IInspectable" },
        //        { "System.Collections.Generic.IList`1",  "Windows.Foundation.Collections.IVector`1" },
        //        { "System.Collections.Generic.IReadOnlyList`1", "Windows.Foundation.Collections.IVectorView`1" },
        //        { "System.Collections.Generic.IDictionary`2", "Windows.Foundation.Collections.IMap`2" },
        //        { "System.Collections.Generic.IReadOnlyDictionary`2", "Windows.Foundation.Collections.IMapView`2" },
        //    };

        //    if (map.ContainsKey(t.GetFullName()))
        //    {
        //        return map[t.GetFullName()];
        //    }
        //    if (t.GetNamespace() == "System")
        //    {
        //        return t.GetName();
        //    }
        //    else
        //    {
        //        return t.GetFullName();
        //    }
        //}

        static void Main(string[] args)
        {
            new Program().DumpTypes();
        }
    }
}
