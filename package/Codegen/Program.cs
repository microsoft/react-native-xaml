﻿using MiddleweightReflection;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text.RegularExpressions;
using System.Text.Json;

namespace Codegen
{

    class Program
    {
        const string Windows_winmd = @"%ProgramFiles(x86)%\Windows Kits\10\UnionMetadata\10.0.19041.0\Windows.winmd";

        JsonDocument Config;
        public string ConfigFileName
        {
            get; set;
        } = Path.Join(Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location), @"Windows.UI.Xaml.json");

        private static MrProperty GetProperty(MrLoadContext context, string type, string prop)
        {
            return context.GetType(type).GetProperties().First(x => x.GetName() == prop);
        }

        private void DumpTypes(Version version)
        {
            var start = DateTime.Now;
            Config = JsonDocument.Parse(File.ReadAllText(ConfigFileName), new JsonDocumentOptions() { AllowTrailingCommas = true, CommentHandling = JsonCommentHandling.Skip });

            var context = new MrLoadContext(true);
            context.FakeTypeRequired += (sender, e) =>
            {
                var ctx = sender as MrLoadContext;
                if (e.AssemblyName == "Windows.Foundation.FoundationContract" || e.AssemblyName == "Windows.Foundation.UniversalApiContract")
                {
                    e.ReplacementType = ctx.GetTypeFromAssembly(e.TypeName, "Windows");
                }
            };

            var windows_winmd = context.LoadAssemblyFromPath(Environment.ExpandEnvironmentVariables(Windows_winmd));
            var winmds = winmdPaths.Select(winmdPath => context.LoadAssemblyFromPath(Environment.ExpandEnvironmentVariables(winmdPath))).ToList();
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

            foreach (var entry in Config.RootElement.GetProperty("commands").EnumerateObject())
            {
                var commands = new List<Command>();
                foreach (var c in entry.Value.EnumerateArray())
                {
                    var command = new Command { Name = c.GetProperty("name").GetString() };
                    if (c.TryGetProperty("args", out var value))
                    {
                        command.TSArgTypes = ConvertJSONToTSType(value);
                    }
                    commands.Add(command);
                }
                Util.commands[GetTypeNameFromJsonProperty(entry)] = commands;
            }

            var fakeProps = new List<MrProperty>();

            foreach (var entry in Config.RootElement.GetProperty("propNameMapping").EnumerateObject())
            {
                Util.propNameMap[GetTypeNameFromJsonProperty(entry)] = entry.Value.GetString();
            }

            foreach (var entry in Config.RootElement.GetProperty("fakeProps").EnumerateArray())
            {
                var value = GetTypeNameFromJson(entry);
                var typeName = value.Substring(0, value.LastIndexOf('.'));
                var propName = value.Substring(value.LastIndexOf('.') + 1);
                fakeProps.Add(GetProperty(context, typeName, propName));
            };

            var syntheticProps = new List<SyntheticProperty>();

            foreach (var entry in Config.RootElement.GetProperty("syntheticProps").EnumerateArray())
            {
                var declaringTypes = entry.GetProperty("declaringType");
                string name = entry.GetProperty("name").GetString();

                MrType propertyType = entry.TryGetProperty("propertyType", out var propTypeJson) ? context.GetType(GetTypeNameFromJson(propTypeJson)) : null;

                if (name.IndexOf('.') != -1)
                {
                    var propTypeName = name.Substring(0, name.LastIndexOf('.'));
                    var propName = name.Substring(name.LastIndexOf('.') + 1);
                    var propType = context.GetType(propTypeName);
                    var prop = propType.GetProperties().First(p => p.GetName() == propName);
                    if (prop.GetPropertyType() != propertyType)
                    {
                        throw new ArgumentException($"The property type for {name} was expected to be {prop.GetPropertyType()}, but was specified as {propertyType}");
                    }
                }
                string fakePropertyType = entry.TryGetProperty("fakePropertyType", out var fakePropType) ? fakePropType.GetString() : null;
                string comment = entry.TryGetProperty("comment", out var commentElement) ? commentElement.GetString() : "";
                if (declaringTypes.ValueKind == JsonValueKind.Array)
                {
                    foreach (var declaringType in declaringTypes.EnumerateArray())
                    {
                        var sp = new SyntheticProperty
                        {
                            Name = name,
                            DeclaringType = context.GetType(GetTypeNameFromJson(declaringType)),
                            PropertyType = propertyType,
                            FakePropertyType = fakePropertyType,
                            Comment = comment,
                        };
                        syntheticProps.Add(sp);
                    }
                }
                else
                {

                    var sp = new SyntheticProperty
                    {
                        Name = name,
                        DeclaringType = context.GetType(GetTypeNameFromJson(declaringTypes)),
                        PropertyType = propertyType,
                        FakePropertyType = fakePropertyType,
                        Comment = comment,
                    };
                    syntheticProps.Add(sp);
                }
            }

            Console.WriteLine("Generating projections for the following WinMD files:");
            Console.WriteLine($"- {Environment.ExpandEnvironmentVariables(Windows_winmd)}");
            foreach (var path in winmdPaths)
            {
                Console.WriteLine($"- {Path.GetFullPath(Environment.ExpandEnvironmentVariables(path))}");
            }
            Console.WriteLine();

            var properties = new List<SyntheticProperty>();

            PrintVerbose("Enumerating attached properties");
            DiscoverAttachedProperties(context, types);

            PrintVerbose($"Parsing configuration from {ConfigFileName}");

            foreach (var entry in Config.RootElement.GetProperty("attachedProps").EnumerateObject())
            {
                var propName = GetTypeNameFromJsonProperty(entry);
                var attachedDPs = Util.AttachedProperties.Where(p => Util.MinusPropertySuffix(Util.GetPropFullName(p)).StartsWith(propName));

                foreach (var attachedDP in attachedDPs)
                {
                    var type = attachedDP.DeclaringType;
                    var simpleName = attachedDP.GetName().Substring(0, attachedDP.GetName().LastIndexOf("Property"));
                    type.GetMethodsAndConstructors(out var methods, out var ctors);
                    var propType = methods.First(m => m.GetName() == $"Get{simpleName}").ReturnType;

                    if (entry.Value.ValueKind == JsonValueKind.Array)
                    {
                        foreach (var onTypeEntry in entry.Value.EnumerateArray())
                        {
                            var sp = new SyntheticProperty
                            {
                                Name = simpleName,
                                DeclaringType = context.GetType(GetTypeNameFromJson(onTypeEntry)),
                                PropertyType = propType,
                                Property = attachedDP,
                                Comment = $"Attached property: ${propName}",
                            };
                            properties.Add(sp);
                        }
                    }
                    else
                    {
                        var onType = GetTypeNameFromJson(entry.Value);

                        var sp = new SyntheticProperty
                        {
                            Name = simpleName,
                            DeclaringType = context.GetType(onType),
                            PropertyType = propType,
                            Property = attachedDP,
                            Comment = $"Attached property: {propName}",
                        };
                        properties.Add(sp);
                    }
                }
            }

            foreach (var entry in Config.RootElement.GetProperty("typeMapping").EnumerateArray())
            {
                Util.TypeMapping[GetTypeNameFromJson(entry)] = new TypeMapping()
                {
                    VM = Enum.Parse<ViewManagerPropertyType>(entry.GetProperty("VM").GetString()),
                    TS = entry.GetProperty("TS").GetString(),
                };
            }

            var baseClassesToProject = new List<string>();

            foreach (var entry in Config.RootElement.GetProperty("baseClasses").EnumerateArray())
            {
                var name = GetTypeNameFromJson(entry);
                baseClassesToProject.Add(name);
            };

            var syntheticEvents = new List<SyntheticProperty>();

            foreach (var entry in Config.RootElement.GetProperty("syntheticEvents").EnumerateObject())
            {
                var val = GetTypeNameFromJsonProperty(entry);
                var typeName = val.Substring(0, val.LastIndexOf('.'));
                var eventName = val.Substring(val.LastIndexOf('.') + 1);

                if (context.TryFindMrType(GetTypeNameFromJson(entry.Value), out var ptype))
                {
                    syntheticEvents.Add(new SyntheticProperty()
                    {
                        Name = eventName,
                        DeclaringType = context.GetType(typeName),
                        PropertyType = ptype,
                    });
                }
                else
                {
                    syntheticEvents.Add(new SyntheticProperty()
                    {
                        Name = eventName,
                        DeclaringType = context.GetType(typeName),
                        FakePropertyType = entry.Value.ToString()
                    });
                }
            }


            var xamlTypes = types.Where(type => baseClassesToProject.Any(b =>
                Util.DerivesFrom(type, b)) || type.GetFullName() == XamlNames.TopLevelProjectedType).ToList();

            var generatedDirPath = Path.GetFullPath(cppOutPath ?? Path.Join(PackageRoot, @"windows\ReactNativeXaml\Codegen"));
            var packageSrcPath = Path.GetFullPath(tsOutPath ?? Path.Join(PackageRoot, @"src"));


            PrintVerbose("Filtering types");
            var creatableTypes = xamlTypes.Where(x => Util.HasCtor(x)).ToList();

            PrintVerbose("Sorting types");
            creatableTypes.Sort((a, b) => a.GetFullName().CompareTo(b.GetFullName()));

            foreach (var entry in Config.RootElement.GetProperty("eventArgsMethods").EnumerateObject())
            {
                Util.eventArgsMethods.Add(GetTypeNameFromJsonProperty(entry), entry.Value.EnumerateArray().Select(x => x.GetString()));
            }

            var events = new List<MrEvent>();

            var eventArgProps = new List<SyntheticProperty>();
            PrintVerbose("Enumerating properties and events");
            foreach (var type in xamlTypes)
            {
                var props = type.GetProperties();
                var propsToAdd = props.Where(p => Util.ShouldEmitPropertyMetadata(p));
                foreach (var p in propsToAdd)
                {
                    properties.Add(new SyntheticProperty()
                    {
                        Name = Util.GetPropFullName(p),
                        DeclaringType = p.DeclaringType,
                        Property = p,
                    });
                }

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
                            Util.FoundEventArgsType(parameters[1].GetParameterType());
                        }
                        else if (parameters.Length == 1 && parameters[0].GetParameterType().GetName().EndsWith("Args"))
                        {
                            Util.FoundEventArgsType(parameters[0].GetParameterType());
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
                        Util.FoundEventArgsType(paramType[0]);
                    }
                }
                events.AddRange(eventsToAdd);
            }



            foreach (var type in Util.eventArgsTypes)
            {
                var props = type.GetProperties();
                var propsToAdd = props
                    .Where(p => Util.IsInstanceProperty(p))
                    .Select(p => new SyntheticProperty()
                    {
                        Name = p.GetName(),
                        DeclaringType = p.DeclaringType,
                        Property = p,
                    });
                eventArgProps.AddRange(propsToAdd);
                foreach (var p in propsToAdd.Where(p => p.Property.GetPropertyType().IsEnum).Select(p => p.Property.GetPropertyType()))
                {
                    Util.VisitEnum(p);
                }
            }

            properties.Sort(CompareProps);
            eventArgProps.Sort(CompareProps);

            PrintVerbose("Generating projection");


            foreach (var entry in Config.RootElement.GetProperty("fakeEnums").EnumerateArray())
            {
                var typeName = GetTypeNameFromJson(entry.GetProperty("name"));
                FakeEnum fe;
                if (typeName.IndexOf('.') != -1)
                {
                    var type = context.GetType(typeName);
                    if (type.IsEnum)
                    {
                        var values = type.GetFields().Skip(1);
                        fe = new FakeEnum()
                        {
                            Name = typeName.Substring(typeName.LastIndexOf('.') + 1),
                            Values = values.ToDictionary<MrField, string, int>(f => f.GetName(), f => (int)f.GetConstantValue(out var _)),
                        };
                    }
                    else
                    {
                        throw new ArgumentException($"Type {typeName} is not an enum");
                    }
                }
                else
                {
                    fe = new FakeEnum()
                    {
                        Name = typeName,
                        Values = ToDictionary(entry.GetProperty("values").EnumerateObject()),
                    };
                }
                Util.fakeEnums.Add(fe);
            }

            var propsGen = new TSProps(winmdPaths, xamlTypes, properties, fakeProps, syntheticProps, syntheticEvents).TransformText();
            var typesGen = new TSTypes(winmdPaths, xamlTypes).TransformText();
            var typeCreatorGen = new TypeCreator(winmdPaths, creatableTypes).TransformText();
            var propertiesGen = new TypeProperties(winmdPaths, properties, fakeProps, syntheticProps).TransformText();
            var enumsGen = new TypeEnums(winmdPaths).TransformText();

            var tsEnumsGen = new TSEnums(winmdPaths).TransformText();
            var eventsGen = new TypeEvents(winmdPaths, events, syntheticEvents).TransformText();
            var eventPropsGen = new EventArgsTypeProperties(winmdPaths, eventArgProps).TransformText();
            var versionGen = new VersionHeader(winmdPaths) { Version = version }.TransformText();

            PrintVerbose("Updating files");
            if (!Directory.Exists(generatedDirPath))
            {
                Directory.CreateDirectory(generatedDirPath);
            }

            var changes = false;
            changes |= UpdateFile(Path.Join(generatedDirPath, "TypeCreator.g.cpp"), typeCreatorGen);
            changes |= UpdateFile(Path.Join(generatedDirPath, "TypeProperties.g.h"), propertiesGen);
            changes |= UpdateFile(Path.Join(generatedDirPath, "TypeEvents.g.h"), eventsGen);
            changes |= UpdateFile(Path.Join(generatedDirPath, "EventArgsTypeProperties.g.h"), eventPropsGen);
            changes |= UpdateFile(Path.Join(generatedDirPath, "TypeEnums.g.h"), enumsGen);

            changes |= UpdateFile(Path.Join(generatedDirPath, "Version.g.h"), versionGen);

            changes |= UpdateFile(Path.Join(packageSrcPath, "Enums.ts"), tsEnumsGen.Replace("\r\n", "\n"));
            changes |= UpdateFile(Path.Join(packageSrcPath, "Props.ts"), propsGen.Replace("\r\n", "\n"));
            changes |= UpdateFile(Path.Join(packageSrcPath, "Types.tsx"), typesGen.Replace("\r\n", "\n"));

            if (!changes)
            {
                PrintVerbose("\nNo changes were required.");
            }
            PrintVerbose($"Done in {(DateTime.Now - start).TotalSeconds}s.");
        }

        private string ConvertJSONToTSType(JsonElement value)
        {
            switch (value.ValueKind)
            {
                case JsonValueKind.String:
                    return "string";
                case JsonValueKind.Number:
                    return "number";
                case JsonValueKind.Object:
                    {
                        var tsType = "{ ";
                        foreach (var entry in value.EnumerateObject())
                        {
                            tsType += $"{entry.Name}: {entry.Value.GetString()}, ";
                        }
                        tsType += " }";
                        return tsType;
                    }
                default:
                    throw new ArgumentException("Unexpected JSON type");
            }
        }

        private void DiscoverAttachedProperties(MrLoadContext context, IEnumerable<MrType> types)
        {
            var attached = new List<MrProperty>();
            var dpType = context.GetType($"{XamlNames.XamlNamespace}.DependencyProperty");
            foreach (var type in types)
            {
                attached.AddRange(GetAttachedDPCandidates(dpType, type));
            }
            Util.AttachedProperties = attached;
        }

        private static IEnumerable<MrProperty> GetAttachedDPCandidates(MrType dpType, MrType type)
        {
            type.GetMethodsAndConstructors(out var methods, out var ctors);
            return type.GetProperties().Where(prop =>
            {
                if (prop.GetName().EndsWith("Property") && prop.GetPropertyType() == dpType)
                {
                    var propName = prop.GetName().Substring(0, prop.GetName().LastIndexOf("Property"));
                    return methods.Any(x => x.GetName() == $"Set{propName}" && x.GetParsedMethodAttributes().IsStatic);
                }

                return false;
            });
        }

        private static string GetTypeNameFromJsonProperty(JsonProperty entry)
        {
            return entry.Name.Replace("$xaml", XamlNames.XamlNamespace);
        }

        private static string GetTypeNameFromJson(JsonElement entry)
        {
            if (entry.ValueKind == JsonValueKind.Object)
            {
                return entry.GetProperty("name").GetString().Replace("$xaml", XamlNames.XamlNamespace);
            }
            else
            {
                return entry.GetString().Replace("$xaml", XamlNames.XamlNamespace);
            }
        }

        private Dictionary<string, int> ToDictionary(JsonElement.ObjectEnumerator objectEnumerator)
        {
            var d = new Dictionary<string, int>();
            foreach (var entry in objectEnumerator)
            {
                d[entry.Name] = entry.Value.GetInt32();
            }
            return d;
        }

        private void PrintVerbose(object o)
        {
            if (Verbose)
            {
                Console.WriteLine(o);
            }
        }

        /// <summary>
        /// To determine how to set a property, we have a map of property names and a lambda that checks whether the entry is applicable to a certain object or not. 
        /// This check basically does a cast to check if the object you pass in is of the type that the property is defined in.
        /// Some properties names are defined on multiple types, e.g. fontSize, which is defined in Control as well as TextElement.
        /// We need to make sure the most specific cast happens first so that we are not tricked into applying the Control property when there is a more specific one.
        /// </summary>
        /// <param name="p1"></param>
        /// <param name="p2"></param>
        /// <returns></returns>

        private static int CompareProps(SyntheticProperty p1, SyntheticProperty p2)
        {
            var realName1 = p1.SimpleNameForJs;
            var realName2 = p2.SimpleNameForJs;
            var c = realName1.CompareTo(realName2);
            if (c != 0) return c;
            var inheritanceDepthComp = Util.GetTypeInheritanceDepth(p1.DeclaringType).CompareTo(Util.GetTypeInheritanceDepth(p2.DeclaringType));
            if (inheritanceDepthComp != 0) return inheritanceDepthComp;
            return p1.DeclaringType.GetName().CompareTo(p2.DeclaringType.GetName());
        }

        private static int CompareProps(MrProperty p1, MrProperty p2)
        {
#if DEBUG
            var c = p1.GetName().CompareTo(p2.GetName());
            if (c != 0) return c;
            var inheritanceDepthComp = Util.GetTypeInheritanceDepth(p1.DeclaringType).CompareTo(Util.GetTypeInheritanceDepth(p2.DeclaringType));
            if (inheritanceDepthComp != 0) return inheritanceDepthComp;
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

        private static bool UpdateFile(string path, string newContent)
        {
            var existing = File.Exists(path) ? File.ReadAllText(path) : "";
            if (existing != newContent)
            {
                Console.WriteLine($" Writing {path}");
                File.WriteAllText(path, newContent);
                return true;
            }
            return false;
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
            { "-verbose", new OptionDef() { Description = "Output verbose info", NumberOfParams = 1, Action = (p, _) => { p.Verbose = true; }} },
            { "-config", new OptionDef() { Description = "Config json file path. By default uses \"Windows.UI.Xaml.json\" in the same directory as this program", NumberOfParams = 2, Action = (p, v) => { p.ConfigFileName = v; }} },
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
            Console.WriteLine("https://github.com/microsoft/react-native-xaml");
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
            p.DumpTypes(Version.Parse(version));
        }
    }
}

