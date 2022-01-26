using MiddleweightReflection;
using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;

namespace Codegen
{
    public struct FakeEnum
    {
        public string Name { get; set; }
        public Dictionary<string, int> Values { get; set; }
    }

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
        public EventArgsTypeProperties(IEnumerable<SyntheticProperty> properties)
        {
            Properties = properties;
        }
        IEnumerable<SyntheticProperty> Properties { get; set; }
    }

    public partial class TypeProperties
    {
        public TypeProperties(IEnumerable<SyntheticProperty> properties, IEnumerable<MrProperty> fakeProps, IEnumerable<SyntheticProperty> syntheticProps)
        {
            Properties = properties;
            FakeProps = fakeProps;
            SyntheticProps = syntheticProps;
        }
        IEnumerable<SyntheticProperty> Properties { get; set; }
        IEnumerable<MrProperty> FakeProps { get; set; }
        IEnumerable<SyntheticProperty> SyntheticProps { get; set; }
    }

    public partial class TypeEvents
    {
        public TypeEvents(IEnumerable<MrEvent> events, IEnumerable<SyntheticProperty> fakeEvents)
        {
            Events = events;
            SyntheticEvents = fakeEvents;
        }
        IEnumerable<MrEvent> Events { get; set; }
        IEnumerable<SyntheticProperty> SyntheticEvents { get; set; }
    }

    public partial class TSProps
    {
        public TSProps(IEnumerable<MrType> types, IEnumerable<SyntheticProperty> properties, IEnumerable<MrProperty> fakeProps, IEnumerable<SyntheticProperty> syntheticProps, IEnumerable<SyntheticProperty> syntheticEvents)
        {
            Types = types;
            FakeProps = fakeProps;
            SyntheticProps = syntheticProps;
            SyntheticEvents = syntheticEvents;
            Properties = properties;
        }
        IEnumerable<SyntheticProperty> Properties { get; set; }
        IEnumerable<MrProperty> FakeProps { get; set; }
        IEnumerable<SyntheticProperty> SyntheticProps { get; set; }
        IEnumerable<SyntheticProperty> SyntheticEvents { get; set; }
        IEnumerable<MrType> Types { get; set; }
    }

    public partial class TSTypes
    {
        public TSTypes(IEnumerable<MrType> types) { Types = types; }
        IEnumerable<MrType> Types { get; set; }
    }

    public class NameEqualityComparer : IEqualityComparer<MrTypeAndMemberBase>, IEqualityComparer<SyntheticProperty>
    {
        public bool Equals(MrTypeAndMemberBase that, MrTypeAndMemberBase other)
        {
            if (that.GetType() != other.GetType()) return false;
            if (that.GetType() == typeof(MrProperty))
            {
                var p1 = that as MrProperty;
                var p2 = other as MrProperty;
                string n1;
                string n2;
                if (!Util.propNameMap.TryGetValue($"{p1.DeclaringType.GetFullName()}.{p1.GetName()}", out n1)) {
                    n1 = p1.GetName();
                }
                if (!Util.propNameMap.TryGetValue($"{p2.DeclaringType.GetFullName()}.{p2.GetName()}", out n2)) {
                    n2 = p2.GetName();
                }

                return n1 == n2;
            } else if (that is MrType t1 && other is MrType t2)
            {
                return t1.GetFullName() == t2.GetFullName();
            }
            return that.GetName() == other.GetName();
        }

        public bool Equals(SyntheticProperty x, SyntheticProperty y)
        {
            return x.SimpleName == y.SimpleName;
        }

        public int GetHashCode([DisallowNull] MrTypeAndMemberBase obj)
        {
            return obj.GetName().GetHashCode();
        }

        public int GetHashCode([DisallowNull] SyntheticProperty obj)
        {
            return obj.SimpleName.GetHashCode();
        }
    }

    public class TypeMapping
    {
        public ViewManagerPropertyType VM { get; set; }
        public string TS { get; set; }
    }

    public class Command
    {
        public string Name { get; set; }
        public string TSArgTypes { get; set; }
    }

    public partial class VersionHeader
    {
        public Version Version { get; set; }
    }
}

