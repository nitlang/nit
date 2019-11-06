#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER Nit_Compiler

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./traces.h"

#if !defined(_TRACES_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _TRACES_H

#include <lttng/tracepoint.h>
#include <gc.h>

TRACEPOINT_EVENT(
	Nit_Compiler,
	Object_Instance,
	TP_ARGS(
		char*, object_class_arg,
		int, object_id_arg
	),
	TP_FIELDS(
		ctf_string(object_class, object_class_arg)
		ctf_integer(int, object_id, object_id_arg)
	)
)

TRACEPOINT_EVENT(
	Nit_Compiler,
	Object_Destroy,
	TP_ARGS(
		char*, object_class_arg,
		int, object_id_arg
	),
	TP_FIELDS(
		ctf_string(object_class, object_class_arg)
		ctf_integer(int, object_id, object_id_arg)
	)
)

#endif

#include <lttng/tracepoint-event.h>
