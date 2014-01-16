#include "gc.sep.0.h"
/* method gc#Sys#force_garbage_collection for (self: Sys) */
void gc__Sys__force_garbage_collection(val* self) {
nit_gcollect();
RET_LABEL:;
}
/* method gc#Sys#force_garbage_collection for (self: Object) */
void VIRTUAL_gc__Sys__force_garbage_collection(val* self) {
{ /* Inline gc#Sys#force_garbage_collection (self) */
nit_gcollect();
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
