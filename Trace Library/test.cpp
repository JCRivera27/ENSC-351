#include "tracelib.h"

int main()
{
    trace::trace_start("trace.json");
    trace::trace_event_start("Trace Event","Taco");
    trace::trace_event_start("Trace Event 2","Taco",{"x","y"},{"67","97"});
    trace::trace_event_end();
    trace::trace_event_end({"x","y"},{"67","\"Finished\""});
    std::string s="57";
    trace::trace_object_new("S",&s);
    trace::trace_object_gone("S",&s);
    trace::trace_end();
    return 0;
}
