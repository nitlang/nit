#include <nit_common.h>
#include "string._sep.h"
#ifndef STRING_NITNI_H
#define STRING_NITNI_H

#ifndef SYS_TYPE
#define SYS_TYPE
typedef struct s_Sys{
	val_t v;
} Sys;
#endif

#include "string_nit.h"

/* out/indirect function for string::Sys::native_argc */
val_t Sys_native_argc___out( val_t recv );

/* out/indirect function for string::Sys::native_argv */
val_t Sys_native_argv___out( val_t recv, val_t i );
#endif
