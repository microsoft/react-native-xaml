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

    public partial class EventArgsTypeProperties
    {
        public EventArgsTypeProperties(IEnumerable<MrProperty> properties)
        {
            Properties = properties;
        }
        IEnumerable<MrProperty> Properties { get; set; }
    }

    public partial class TypeProperties
    {
        public TypeProperties(IEnumerable<MrProperty> properties, IEnumerable<MrProperty> fakeProps, IEnumerable<SyntheticProperty> syntheticProps)
        {
            Properties = properties;
            FakeProps = fakeProps;
            SyntheticProps = syntheticProps;
        }
        IEnumerable<MrProperty> Properties { get; set; }
        IEnumerable<MrProperty> FakeProps { get; set; }
        IEnumerable<SyntheticProperty> SyntheticProps { get; set; }
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
        public TSProps(IEnumerable<MrType> types, IEnumerable<MrProperty> fakeProps, IEnumerable<SyntheticProperty> syntheticProps) { 
            Types = types; 
            FakeProps = fakeProps;
            SyntheticProps = syntheticProps;
        }
        IEnumerable<MrProperty> FakeProps { get; set; }
        IEnumerable<SyntheticProperty> SyntheticProps { get; set; }
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

    public static class XamlNames
    {
        public const string XamlNamespace = "Windows.UI.Xaml";
        public const string TopLevelProjectedType = $"{XamlNamespace}.DependencyObject";
        public const string MuxNamespace = "Microsoft.UI.Xaml";
    }

    class Program
    {
        const string Windows_winmd = @"C:\Program Files (x86)\Windows Kits\10\UnionMetadata\10.0.19041.0\Windows.winmd";

        private static MrProperty GetProperty(MrLoadContext context, string type, string prop)
        {
            return context.GetType(type).GetProperties().First(x => x.GetName() == prop);
        }

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

            var fakeProps = new List<MrProperty>{
                GetProperty(context, $"{XamlNames.XamlNamespace}.Controls.Primitives.FlyoutBase", "IsOpen"),
                GetProperty(context, $"{XamlNames.XamlNamespace}.Documents.Run", "Text"),
            };

            var syntheticProps = new List<SyntheticProperty> {
                new SyntheticProperty{ Name = "GridRow", DeclaringType = context.GetType($"{XamlNames.XamlNamespace}.UIElement"), PropertyType = context.GetType("System.Int32"), Comment = "The row number of this component inside an enclosing Grid." },
                new SyntheticProperty{ Name = "GridColumn", DeclaringType = context.GetType($"{XamlNames.XamlNamespace}.UIElement"), PropertyType = context.GetType("System.Int32"), Comment = "The column number of this component inside an enclosing Grid." },
                new SyntheticProperty{ Name = "GridLayout", DeclaringType = context.GetType($"{XamlNames.XamlNamespace}.Controls.Grid"), FakePropertyType = "GridLayout", Comment = "An object with a columns and a rows members, each of which is an array of the corresponding dimensions." },
                new SyntheticProperty{ Name = "Priority", DeclaringType = context.GetType($"{XamlNames.XamlNamespace}.UIElement"), PropertyType = context.GetType("System.Int32"), Comment = "A hint of where this item should be placed within its parent." },
                new SyntheticProperty{ Name = "Resources", DeclaringType = context.GetType($"{XamlNames.XamlNamespace}.UIElement"), PropertyType = context.GetType("System.Object"), Comment = "An object of key/value pairs used for lightweight styling."},
            };

            var baseClassesToProject = new string[]
            {
                $"{XamlNames.XamlNamespace}.UIElement",
                $"{XamlNames.XamlNamespace}.Controls.Primitives.FlyoutBase",
                $"{XamlNames.XamlNamespace}.Documents.TextElement",
                $"{XamlNames.XamlNamespace}.Input.KeyboardAccelerator",
            };

            var xamlTypes = types.Where(type => baseClassesToProject.Any(b =>
                Util.DerivesFrom(type, b)) || type.GetFullName() == XamlNames.TopLevelProjectedType);

            var generatedDirPath = Path.GetFullPath(cppOutPath ?? Path.Join(PackageRoot, @"windows\ReactNativeXaml\Codegen"));
            var packageSrcPath = Path.GetFullPath(tsOutPath ?? Path.Join(PackageRoot, @"src"));

            Console.WriteLine("Generating projections for the following WinMD files:");
            Console.WriteLine($"- {Windows_winmd}");
            foreach (var path in winmdPaths)
            {
                Console.WriteLine($"- {Path.GetFullPath(path)}");
            }
            Console.WriteLine();

            PrintVerbose("Filtering types");
            var creatableTypes = xamlTypes.Where(x => Util.HasCtor(x)).ToList();
            // The same type name may exist in multiple namespaces. The TS names don't support that as they are only short names
            // So we need to make sure only one type has a given name, and if the options are WUX or MUX, we should pick MUX
            // If there are more options than that, we should error out.
            var allCreatableTypes = new Dictionary<string, List<MrType>>();
            foreach (var t in creatableTypes)
            {
                List<MrType> list = null;
                if (allCreatableTypes.ContainsKey(t.GetName()))
                {
                    list = allCreatableTypes[t.GetName()];
                } else
                {
                    list = new List<MrType>();
                    allCreatableTypes.Add(t.GetName(), list);
                }
                list.Add(t);
            }
            PrintVerbose("Ensuring all types have unique names");
            foreach (var key in allCreatableTypes.Keys)
            {
                if (allCreatableTypes[key].Count == 1) {
                    continue;
                } else if (allCreatableTypes[key].Count == 2) {
                    if (allCreatableTypes[key][0].GetNamespace() == XamlNames.XamlNamespace &&
                        allCreatableTypes[key][1].GetNamespace() == XamlNames.MuxNamespace)
                    {
                        creatableTypes.Remove(allCreatableTypes[key][0]);
                        continue;
                    }
                    else if (allCreatableTypes[key][1].GetNamespace() == XamlNames.XamlNamespace &&
                        allCreatableTypes[key][0].GetNamespace() == XamlNames.MuxNamespace)
                    {
                        creatableTypes.Remove(allCreatableTypes[key][1]);
                        continue;
                    }
                }
                // If we got here, then either we had more than 2 types with the same short name,
                // Or we could not disambiguate between the options. Bail out.
                throw new ArgumentException("More than one type with the same short name was supplied: " + string.Join(", ", allCreatableTypes[key].Select(t => t.GetFullName())));    
            }

            PrintVerbose("Sorting types");
            creatableTypes.Sort((a, b) => a.GetName().CompareTo(b.GetName()));



            var properties = new List<MrProperty>();
            var events = new List<MrEvent>();

            var eventArgTypes = new HashSet<MrType>(new NameEqualityComparer());
            var eventArgProps = new List<MrProperty>();
            PrintVerbose("Enumerating properties and events");
            foreach (var type in xamlTypes)
            {
                var props = type.GetProperties();
                var propsToAdd = props.Where(p => Util.ShouldEmitPropertyMetadata(p));
                properties.AddRange(propsToAdd);

                var eventsToAdd = type.GetEvents().Where(e => Util.ShouldEmitEventMetadata(e));
                foreach (var e in eventsToAdd)
                {
                    var handlerDelegate = e.GetEventType();
                    var invoke = handlerDelegate.GetInvokeMethod();
                    if (invoke != null)
                    {
                        var parameters = invoke.GetParameters();
                        if (parameters.Length == 2 && (parameters[1].GetParameterName().EndsWith("args") || parameters[1].GetParameterType().GetName().EndsWith("Args")))
                        {
                            eventArgTypes.Add(parameters[1].GetParameterType());
                        }
                        else if (parameters.Length == 1 && parameters[0].GetParameterType().GetName().EndsWith("Args"))
                        {
                            eventArgTypes.Add(parameters[0].GetParameterType());
                        }
                        else
                        {
                            throw new ArgumentException($"Couldn't infer event arg type for event {e.GetName()}");
                        }
                    }
                    else if (handlerDelegate.GetFullName() == "System.EventHandler`1")
                    {
                        var paramType = handlerDelegate.GetGenericTypeParameters();
                        if (paramType.Length != 1)
                        {
                            throw new ArgumentException($"Couldn't infer EventHandler generic type for event {e.GetName()}");
                        }
                        eventArgTypes.Add(paramType[0]);
                    }
                }
                events.AddRange(eventsToAdd);
            }

            foreach (var type in eventArgTypes)
            {
                var props = type.GetProperties();
                var propsToAdd = props.Where(p =>
                    p.Getter != null &&
                    !p.Getter.MethodDefinition.Attributes.HasFlag(System.Reflection.MethodAttributes.Static)).ToList();
                eventArgProps.AddRange(propsToAdd);
            }


            properties.Sort(CompareProps);
            eventArgProps.Sort(CompareProps);

            PrintVerbose("Generating projection");


            var propsGen = new TSProps(xamlTypes, fakeProps, syntheticProps).TransformText();
            var typesGen = new TSTypes(xamlTypes).TransformText();
            var typeCreatorGen = new TypeCreator(creatableTypes).TransformText();
            var propertiesGen = new TypeProperties(properties, fakeProps, syntheticProps).TransformText();

            Util.fakeEnums.Add(new Util.FakeEnum() { Name = "AppBarButtonPriority", Values = new Dictionary<string, int>() { { "Primary", 0 }, { "Secondary", 1 } } });
            Util.fakeEnums.Add(new Util.FakeEnum() { Name = "NavigationViewItemPriority", Values = new Dictionary<string, int>() { { "MenuItem", 0 }, { "FooterMenuItem", 1 } } });

            var tsEnumsGen = new TSEnums().TransformText();
            var eventsGen = new TypeEvents(events).TransformText();
            var eventPropsGen = new EventArgsTypeProperties(eventArgProps).TransformText();

            PrintVerbose("Updating files");
            if (!Directory.Exists(generatedDirPath))
            {
                Directory.CreateDirectory(generatedDirPath);
            }
            UpdateFile(Path.Join(generatedDirPath, "TypeCreator.g.cpp"), typeCreatorGen);
            UpdateFile(Path.Join(generatedDirPath, "TypeProperties.g.h"), propertiesGen);
            UpdateFile(Path.Join(generatedDirPath, "TypeEvents.g.h"), eventsGen);
            UpdateFile(Path.Join(generatedDirPath, "EventArgsTypeProperties.g.h"), eventPropsGen);

            UpdateFile(Path.Join(packageSrcPath, "Enums.ts"), tsEnumsGen);
            UpdateFile(Path.Join(packageSrcPath, "Props.ts"), propsGen);
            UpdateFile(Path.Join(packageSrcPath, "Types.tsx"), typesGen);
        }

        private void PrintVerbose(object o)
        {
            if (Verbose)
            {
                Console.WriteLine(o);
            }
        }

        private static int CompareProps(MrProperty p1, MrProperty p2)
        {
#if DEBUG
            var c = p1.GetName().CompareTo(p2.GetName());
            if (c != 0) return c;
            return p1.DeclaringType.GetName().CompareTo(p2.DeclaringType.GetName());
#else
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
#endif
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

        private bool Verbose { get; set; }

        static readonly Dictionary<string, OptionDef> optionDefs = new Dictionary<string, OptionDef>() {
            { "-help", new OptionDef (){ Description = "Shows this message", NumberOfParams = 1, Action = (_, _2) => { PrintHelp(); } } },
            { "-winmd", new OptionDef (){ Description = "Specifies a custom WinMD file. To specify multiple files, pass this option multiple times", NumberOfParams = 2, Action = (p, v) => { p.winmdPaths.Add(v); } } },
            { "-cppout", new OptionDef (){ Description = "Custom path for C++ metadata files",   NumberOfParams = 2, Action = (p, v) => { p.cppOutPath = v; } } },
            { "-tsout", new OptionDef (){ Description = "Custom path for TS file", NumberOfParams = 2, Action = (p, v) => { p.tsOutPath = v; } } },
            { "-verbose", new OptionDef() { Description = "Output verbose info", NumberOfParams = 1, Action = (p, _) => { p.Verbose = true; }} }    
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

