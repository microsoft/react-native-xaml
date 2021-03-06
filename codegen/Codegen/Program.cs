using MiddleweightReflection;
using System.Linq;
using System.Collections.Generic;
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

    public partial class TSProps
    {
        public TSProps(IEnumerable<MrType> types) { Types = types; }
        IEnumerable<MrType> Types { get; set; }
    }

    public partial class TSTypes
    {
        public TSTypes(IEnumerable<MrType> types) { Types = types; }
        IEnumerable<MrType> Types { get; set; }
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
            Util.LoadContext = context;

            var baseClassesToProject = new string[]
            {
                "Windows.UI.Xaml.UIElement",
                "Windows.UI.Xaml.Controls.Primitives.FlyoutBase",
            };

            var xamlTypes = types.Where(type => baseClassesToProject.Any(b =>
                Util.DerivesFrom(type, b)));
            var assemblyLocation = Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location);
            var generatedDirPath = Path.GetFullPath(Path.Join(assemblyLocation, @"..\..\..\..", @"..\package\windows\ReactNativeXaml\Codegen"));
            var packageSrcPath = Path.GetFullPath(Path.Join(assemblyLocation, @"..\..\..\..", @"..\package\src"));

            var creatableTypes = xamlTypes.Where(x => Util.HasCtor(x)).ToList();
            creatableTypes.Sort((a, b) => a.GetName().CompareTo(b.GetName()));
            var typeCreatorGen = new TypeCreator(creatableTypes).TransformText();

            if (!Directory.Exists(generatedDirPath))
            {
                Directory.CreateDirectory(generatedDirPath);
            }
            File.WriteAllText(Path.Join(generatedDirPath, "TypeCreator.g.cpp"), typeCreatorGen);

            var properties = new List<MrProperty>();
            var events = new List<MrEvent>();
            foreach (var type in xamlTypes)
            {
                var propsToAdd = type.GetProperties().Where(p => Util.ShouldEmitPropertyMetadata(p));
                properties.AddRange(propsToAdd);

                var eventsToAdd = type.GetEvents().Where(e => Util.ShouldEmitEventMetadata(e));
                events.AddRange(eventsToAdd);
            }

            var propsGen = new TSProps(xamlTypes).TransformText();
            File.WriteAllText(Path.Join(packageSrcPath, "Props.ts"), propsGen);

            var typesGen = new TSTypes(xamlTypes).TransformText();
            File.WriteAllText(Path.Join(packageSrcPath, "Types.tsx"), typesGen);

            properties.Sort((a, b) => a.GetName().CompareTo(b.GetName()));
            var propertiesGen = new TypeProperties(properties).TransformText();
            File.WriteAllText(Path.Join(generatedDirPath, "TypeProperties.g.h"), propertiesGen);

            var enumConvertersGen = new EnumConverters().TransformText();
            File.WriteAllText(Path.Join(generatedDirPath, "EnumConverters.g.cpp"), enumConvertersGen);

            var eventsGen = new TypeEvents(events).TransformText();
            File.WriteAllText(Path.Join(generatedDirPath, "TypeEvents.g.h"), eventsGen);
        }

        static void Main(string[] args)
        {
            new Program().DumpTypes();
        }
    }
}

