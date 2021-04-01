using System;

namespace Codegen
{
    class OptionDef
    {
        public string Description { get; set; }
        public int NumberOfParams { get; set; }
        public Action<string> Action { get; set; }
    }
}

