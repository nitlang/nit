#include "time._sep.h"
val_t time___Object___get_time(val_t  self) {
  struct trace_t trace = {NULL, "time::Object::get_time (bin/../lib/standard//time.nit:18,2--67)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(kernel_Any_Any_get_time_0( self));
}
