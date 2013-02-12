#include <nit_common.h>
#include "standard___string._sep.h"
#ifndef STRING_NITNI_H
#define STRING_NITNI_H

#ifndef SYS_TYPE
#define SYS_TYPE
struct s_Sys{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_Sys *Sys;
#define Sys_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define Sys_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#include "string_nit.h"

/* out/indirect function for string::NativeString::atof */
val_t NativeString_atof___out( val_t recv );

/* out/indirect function for string::Sys::native_argc */
val_t Sys_native_argc___out( val_t recv );

/* out/indirect function for string::Sys::native_argv */
val_t Sys_native_argv___out( val_t recv, val_t i );
#endif
