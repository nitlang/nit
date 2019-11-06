#define TRACEPOINT_CREATE_PROBES
#define TRACEPOINT_DEFINE

#include "nit.common.h"

void object_destroy_callback(void *obj, void *cd){
	tracepoint(Nit_Compiler, Object_Destroy, (char*)((val*)(obj))->type->name, (uintptr_t)obj);
}
