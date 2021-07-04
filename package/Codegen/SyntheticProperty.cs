using MiddleweightReflection;

namespace Codegen
{
    public class SyntheticProperty
    {
        public string Name { get; set; }
        public MrType DeclaringType { get; set; }
        public MrType PropertyType { get; set; }
        public string FakePropertyType { get; set; }
        public string Comment { get; set; }
    }
}

