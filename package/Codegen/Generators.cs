using MiddleweightReflection;
using System.Collections.Generic;

namespace Codegen
{
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
        public TypeProperties(IEnumerable<MrProperty> properties, IEnumerable<MrProperty> fakeProps)
        {
            Properties = properties;
            FakeProps = fakeProps;
        }
        IEnumerable<MrProperty> Properties { get; set; }
        IEnumerable<MrProperty> FakeProps { get; set; }
    }

    public partial class TypeEvents
    {
        public TypeEvents(IEnumerable<MrEvent> events)
        {
            Events = events;
        }
        IEnumerable<MrEvent> Events { get; set; }
    }

    public partial class Children
    {
        public Children(IEnumerable<MrType> types)
        {
            Types = types;
        }
        IEnumerable<MrType> Types { get; set; }
    }
    public partial class TSProps
    {
        public TSProps(IEnumerable<MrType> types, IEnumerable<MrProperty> fakeProps) { Types = types; FakeProps = fakeProps; }
        IEnumerable<MrProperty> FakeProps { get; set; }
        IEnumerable<MrType> Types { get; set; }
    }

    public partial class TSTypes
    {
        public TSTypes(IEnumerable<MrType> types) { Types = types; }
        IEnumerable<MrType> Types { get; set; }
    }

}