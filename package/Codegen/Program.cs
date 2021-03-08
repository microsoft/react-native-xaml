using MiddleweightReflection;
using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text.RegularExpressions;

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

    public class NameEqualityComparer : IEqualityComparer<MrTypeAndMemberBase>
    {
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
        const string Windows_winmd = @"C:\Program Files (x86)\Windows Kits\10\UnionMetadata\10.0.19041.0\Windows.winmd";
        private void DumpTypes()
        {
            var context = new MrLoadContext(true);
            context.FakeTypeRequired += (sender, e) =>
            {
                var ctx = sender as MrLoadContext;
                if (e.AssemblyName == "Windows.Foundation.FoundationContract" || e.AssemblyName == "Windows.Foundation.UniversalApiContract")
                {
                    e.ReplacementType = ctx.GetTypeFromAssembly(e.TypeName, "Windows");
                }
            };
            var windows_winmd = context.LoadAssemblyFromPath(Windows_winmd);
            var winmds = winmdPaths.Select(winmdPath => context.LoadAssemblyFromPath(winmdPath)).ToList();
            // ToList realizes the list which is needs to happen before FinishLoading is called
            context.FinishLoading();

            var typesPerAssembly = winmds.Select(winmd => winmd.GetAllTypes().Skip(1));
            var types = typesPerAssembly.Count() != 0 ? typesPerAssembly.Aggregate((l1, l2) => l1.Union(l2)) : new MrType[] { };
            var windows_winmdTypes = windows_winmd.GetAllTypes().Skip(1);
            if (winmdPaths.Count != 0)
            {
                types = types.Union(windows_winmdTypes);
            }
            else
            {
                types = windows_winmdTypes;
            }
            Util.LoadContext = context;

            var baseClassesToProject = new string[]
            {
                "Windows.UI.Xaml.UIElement",
                "Windows.UI.Xaml.Controls.Primitives.FlyoutBase",
            };

            var xamlTypes = types.Where(type => baseClassesToProject.Any(b =>
                Util.DerivesFrom(type, b)) || type.GetName() == "DependencyObject");

            var generatedDirPath = Path.GetFullPath(cppOutPath ?? Path.Join(PackageRoot, @"windows\ReactNativeXaml\Codegen"));
            var packageSrcPath = Path.GetFullPath(tsOutPath ?? Path.Join(PackageRoot, @"src"));

            Console.WriteLine("Generating projections for the following WinMD files:");
            Console.WriteLine($"- {Windows_winmd}");
            foreach (var path in winmdPaths)
            {
                Console.WriteLine($"- {Path.GetFullPath(path)}");
            }
            Console.WriteLine();

            var creatableTypes = xamlTypes.Where(x => Util.HasCtor(x)).ToList();
            creatableTypes.Sort((a, b) => a.GetName().CompareTo(b.GetName()));
            var typeCreatorGen = new TypeCreator(creatableTypes).TransformText();

            if (!Directory.Exists(generatedDirPath))
            {
                Directory.CreateDirectory(generatedDirPath);
            }
            UpdateFile(Path.Join(generatedDirPath, "TypeCreator.g.cpp"), typeCreatorGen);

            var properties = new List<MrProperty>();
            var events = new List<MrEvent>();
            foreach (var type in xamlTypes)
            {
                var props = type.GetProperties();
                var propsToAdd = props.Where(p => Util.ShouldEmitPropertyMetadata(p));
                properties.AddRange(propsToAdd);

                var eventsToAdd = type.GetEvents().Where(e => Util.ShouldEmitEventMetadata(e));
                events.AddRange(eventsToAdd);
            }
            properties.Sort((p1, p2) =>
            {
                var h1 = GetPropertySortKey(p1);
                var h2 = GetPropertySortKey(p2);
                if (h1.CompareTo(h2) != 0)
                {
                    return h1.CompareTo(h2);
                }
                else
                {
                    return p1.DeclaringType.GetName().CompareTo(p2.DeclaringType.GetName());
                }
            });
            var propsGen = new TSProps(xamlTypes).TransformText();
            UpdateFile(Path.Join(packageSrcPath, "Props.ts"), propsGen);

            var typesGen = new TSTypes(xamlTypes).TransformText();
            UpdateFile(Path.Join(packageSrcPath, "Types.tsx"), typesGen);

            properties.Sort((a, b) => a.GetName().CompareTo(b.GetName()));
            var propertiesGen = new TypeProperties(properties).TransformText();
            UpdateFile(Path.Join(generatedDirPath, "TypeProperties.g.h"), propertiesGen);

            var tsEnumsGen = new TSEnums().TransformText();
            UpdateFile(Path.Join(packageSrcPath, "Enums.ts"), tsEnumsGen);

            var eventsGen = new TypeEvents(events).TransformText();
            UpdateFile(Path.Join(generatedDirPath, "TypeEvents.g.h"), eventsGen);
        }

        private static string PackageRoot
        {
            get
            {
                var assemblyLocation = Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location);
                return Path.Join(assemblyLocation, @"..\..\..\..");
            }
        }

        private static void UpdateFile(string path, string content)
        {
            var existing = File.Exists(path) ? File.ReadAllText(path) : "";
            if (existing != content)
            {
                Console.WriteLine($" Writing {path}");
                File.WriteAllText(path, content);
            }
        }

        private static uint HashName(string input)
        {
            var accum = 5381u;
            for (var i = input.Length - 1; i >= 0; i--)
            {
                var c = (uint)input[i];
                if (i == input.Length - 1)
                {
                    accum += c;
                }
                else
                {
                    accum = c + 33 * accum;
                }
            }
            return accum;
        }

        private static uint GetPropertySortKey(MrProperty p1)
        {
            return HashName(p1.GetName());
        }

        private List<string> winmdPaths { get; } = new List<string>();
        private string cppOutPath { get; set; }
        private string tsOutPath { get; set; }
        class OptionDef
        {
            public string Description { get; set; }
            public int NumberOfParams { get; set; }
            public Action<Program, string> Action { get; set; }
        }

        static void PrintHelp()
        {
            foreach (var k in optionDefs.Keys)
            {
                Console.WriteLine($"{k}   \t{optionDefs[k].Description}");
            }
            Environment.Exit(0);
        }

        static readonly Dictionary<string, OptionDef> optionDefs = new Dictionary<string, OptionDef>() {
                { "-help", new OptionDef (){ Description = "Shows this message", NumberOfParams = 1, Action = (_, _2) => { PrintHelp(); } } },
                { "-winmd", new OptionDef (){ Description = "Specifies a custom WinMD file. To specify multiple files, pass this option multiple times", NumberOfParams = 2, Action = (p, v) => { p.winmdPaths.Add(v); } } },
                { "-cppout", new OptionDef (){ Description = "Custom path for C++ metadata files",   NumberOfParams = 2, Action = (p, v) => { p.cppOutPath = v; } } },
                { "-tsout", new OptionDef (){ Description = "Custom path for TS file", NumberOfParams = 2, Action = (p, v) => { p.tsOutPath = v; } } },
            };

        static void Main(string[] args)
        {
            string version = "";
            try
            {
                var packageJson = File.ReadAllText(Path.Join(PackageRoot, "package.json"));
                Regex r = new Regex("\\s*\"version\":\\s*\"((\\d\\.)*(\\d+))\"");
                var m = r.Match(packageJson);
                if (m.Success && m.Groups.Count >= 2)
                {
                    version = m.Groups[1].Value;
                }
            }
            catch { }
            Console.WriteLine($"React-native-xaml Code generator {version}");
            Console.WriteLine("https://github.com/asklar/react-native-xaml");
            Console.WriteLine();
            var p = new Program();
            for (int i = 0; i < args.Length;)
            {
                if (optionDefs.ContainsKey(args[i]))
                {
                    var def = optionDefs[args[i]];
                    string v = null;
                    if (def.NumberOfParams == 2 && i < args.Length - 1)
                    {
                        v = args[i + 1];
                    }
                    i += def.NumberOfParams;
                    def.Action(p, v);
                }
                else
                {
                    throw new ArgumentException($"Unknown option {args[i]}");
                }
            }
            p.DumpTypes();
        }
    }
}

