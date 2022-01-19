using MiddleweightReflection;
using System;

namespace Codegen
{
    public class SyntheticProperty : IEquatable<SyntheticProperty>
    {
        public string Name { get; set; }
        public MrType DeclaringType { get; set; }
        public MrProperty Property { get; set; }
        public MrType PropertyType { get; set; }
        public string FakePropertyType { get; set; }
        public string Comment { get; set; }

        public string SimpleName { get => Name.Substring(Name.LastIndexOf('.') + 1); }
        public string SimpleNameForJs
        {
            get
            {
                if (Property != null)
                {
                    string fullPropertyName = Property.DeclaringType.GetFullName() + "." + Property.GetName();

                    if (Util.propNameMap.TryGetValue(fullPropertyName, out string realName))
                    {
                        return realName.Substring(realName.LastIndexOf('.') + 1);
                    }
                    else if (Util.IsDependencyProperty(Property))
                    {
                        return Property.DeclaringType.GetName() + SimpleName;
                    }
                }
                return SimpleName;
            }
        }

        public bool Equals(SyntheticProperty other)
        {
            return SimpleName == other.SimpleName;
        }
    }
}

