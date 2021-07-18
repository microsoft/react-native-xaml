using MiddleweightReflection;
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
        public EventArgsTypeProperties(IEnumerable<MrProperty> properties)
        {
            Properties = properties;
        }
        IEnumerable<MrProperty> Properties { get; set; }
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
}

