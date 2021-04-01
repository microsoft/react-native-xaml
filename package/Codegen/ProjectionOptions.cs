using System;
using System.Collections.Generic;

namespace Codegen
{
    public class ProjectionOptions
    {
        public const string XamlNamespace = "Windows.UI.Xaml";
        public static string TopLevelProjectedType { get => $"{XamlNamespace}.DependencyObject"; }
        public const string MuxNamespace = "Microsoft.UI.Xaml";


        public static List<string> winmdPaths { get; } = new List<string>();
        public static string cppOutPath { get; set; }
        public static string tsOutPath { get; set; }

        public static bool Verbose { get; set; }

        static readonly Dictionary<string, OptionDef> optionDefs = new Dictionary<string, OptionDef>() {
            { "-help", new OptionDef (){ Description = "Shows this message", NumberOfParams = 1, Action = (_2) => { PrintHelp(); } } },
            { "-winmd", new OptionDef (){ Description = "Specifies a custom WinMD file. To specify multiple files, pass this option multiple times", NumberOfParams = 2, Action = (v) => { ProjectionOptions.winmdPaths.Add(v); } } },
            { "-cppout", new OptionDef (){ Description = "Custom path for C++ metadata files",   NumberOfParams = 2, Action = (v) => { ProjectionOptions.cppOutPath = v; } } },
            { "-tsout", new OptionDef (){ Description = "Custom path for TS file", NumberOfParams = 2, Action = (v) => { ProjectionOptions.tsOutPath = v; } } },
            { "-verbose", new OptionDef() { Description = "Output verbose info", NumberOfParams = 1, Action = (_) => { ProjectionOptions.Verbose = true; }} }
        };

        static void PrintHelp()
        {
            foreach (var k in optionDefs.Keys)
            {
                Console.WriteLine($"{k}   \t{optionDefs[k].Description}");
            }
            Environment.Exit(0);
        }

        static internal void ParseArgs(string[] args)
        {
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
                    def.Action(v);
                }
                else
                {
                    throw new ArgumentException($"Unknown option {args[i]}");
                }
            }
        }
    }
}

