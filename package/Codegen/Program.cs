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

    partial class Program
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
            var winmds = ProjectionOptions.winmdPaths.Select(winmdPath => context.LoadAssemblyFromPath(winmdPath)).ToList();
            // ToList realizes the list which is needs to happen before FinishLoading is called
            context.FinishLoading();

            var typesPerAssembly = winmds.Select(winmd => winmd.GetAllTypes().Skip(1));
            var types = typesPerAssembly.Count() != 0 ? typesPerAssembly.Aggregate((l1, l2) => l1.Union(l2)) : new MrType[] { };
            var windows_winmdTypes = windows_winmd.GetAllTypes().Skip(1);
            if (ProjectionOptions.winmdPaths.Count != 0)
            {
                types = types.Union(windows_winmdTypes);
            }
            else
            {
                types = windows_winmdTypes;
            }
            Util.LoadContext = context;

            var fakeProps = new List<MrProperty>{
                GetProperty(context, $"{ProjectionOptions.XamlNamespace}.Controls.Primitives.FlyoutBase", "IsOpen"),
                GetProperty(context, $"{ProjectionOptions.XamlNamespace}.Documents.Run", "Text"),
            };
            string[] baseClassesToProject = Util.GetProjectedBaseClasses();

            var xamlTypes = types.Where(type => baseClassesToProject.Any(b =>
                Util.DerivesFrom(type, b)) || type.GetFullName() == ProjectionOptions.TopLevelProjectedType);

            var generatedDirPath = Path.GetFullPath(ProjectionOptions.cppOutPath ?? Path.Join(PackageRoot, @"windows\ReactNativeXaml\Codegen"));
            var packageSrcPath = Path.GetFullPath(ProjectionOptions.tsOutPath ?? Path.Join(PackageRoot, @"src"));

            Console.WriteLine("Generating projections for the following WinMD files:");
            Console.WriteLine($"- {Windows_winmd}");
            foreach (var path in ProjectionOptions.winmdPaths)
            {
                Console.WriteLine($"- {Path.GetFullPath(path)}");
            }
            Console.WriteLine();

            PrintVerbose("Filtering types");
            var creatableTypes = xamlTypes.Where(x => Util.HasCtor(x)).ToList();
            EnsureUniqueShortNames(creatableTypes);

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
            var sortedXamlTypesForChildren = xamlTypes.ToList();
            sortedXamlTypesForChildren.Sort(CompareDerivationDepth);
            PrintVerbose("Generating projection");

            var propsGen = new TSProps(xamlTypes, fakeProps).TransformText();
            var typesGen = new TSTypes(xamlTypes).TransformText();
            var typeCreatorGen = new TypeCreator(creatableTypes).TransformText();
            var propertiesGen = new TypeProperties(properties, fakeProps).TransformText();
            var tsEnumsGen = new TSEnums().TransformText();
            var eventsGen = new TypeEvents(events).TransformText();
            var eventPropsGen = new EventArgsTypeProperties(eventArgProps).TransformText();
            var childrenGen = new Children(sortedXamlTypesForChildren).TransformText();

            PrintVerbose("Updating files");
            if (!Directory.Exists(generatedDirPath))
            {
                Directory.CreateDirectory(generatedDirPath);
            }
            UpdateFile(Path.Join(generatedDirPath, "TypeCreator.g.cpp"), typeCreatorGen);
            UpdateFile(Path.Join(generatedDirPath, "TypeProperties.g.h"), propertiesGen);
            UpdateFile(Path.Join(generatedDirPath, "TypeEvents.g.h"), eventsGen);
            UpdateFile(Path.Join(generatedDirPath, "EventArgsTypeProperties.g.h"), eventPropsGen);
            UpdateFile(Path.Join(generatedDirPath, "Children.g.cpp"), childrenGen);

            UpdateFile(Path.Join(packageSrcPath, "Enums.ts"), tsEnumsGen);
            UpdateFile(Path.Join(packageSrcPath, "Props.ts"), propsGen);
            UpdateFile(Path.Join(packageSrcPath, "Types.tsx"), typesGen);
        }

        private static int CompareDerivationDepth(MrType b, MrType a)
        {
            var ad = GetDerivationDepth(a);
            var bd = GetDerivationDepth(b);
            if (ad == bd)
            {
                return a.GetName().CompareTo(b.GetName());
            }
            return ad.CompareTo(bd);
        }

        private void EnsureUniqueShortNames(List<MrType> creatableTypes)
        {
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
                }
                else
                {
                    list = new List<MrType>();
                    allCreatableTypes.Add(t.GetName(), list);
                }
                list.Add(t);
            }
            PrintVerbose("Ensuring all types have unique names");
            foreach (var key in allCreatableTypes.Keys)
            {
                if (allCreatableTypes[key].Count == 1)
                {
                    continue;
                }
                else if (allCreatableTypes[key].Count == 2)
                {
                    if (allCreatableTypes[key][0].GetNamespace() == ProjectionOptions.XamlNamespace &&
                        allCreatableTypes[key][1].GetNamespace() == ProjectionOptions.MuxNamespace)
                    {
                        creatableTypes.Remove(allCreatableTypes[key][0]);
                        continue;
                    }
                    else if (allCreatableTypes[key][1].GetNamespace() == ProjectionOptions.XamlNamespace &&
                        allCreatableTypes[key][0].GetNamespace() == ProjectionOptions.MuxNamespace)
                    {
                        creatableTypes.Remove(allCreatableTypes[key][1]);
                        continue;
                    }
                }
                // If we got here, then either we had more than 2 types with the same short name,
                // Or we could not disambiguate between the ProjectionOptions. Bail out.
                throw new ArgumentException("More than one type with the same short name was supplied: " + string.Join(", ", allCreatableTypes[key].Select(t => t.GetFullName())));
            }
        }

        private static int GetDerivationDepth(MrType b)
        {
            if (b.GetBaseType() == null) return 0;
            return 1 + GetDerivationDepth(b.GetBaseType());
        }

        private void PrintVerbose(object o)
        {
            if (ProjectionOptions.Verbose)
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
            ProjectionOptions.ParseArgs(args);
            p.DumpTypes();
        }
    }
}

