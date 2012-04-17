#include <nit_common.h>
#include "standard___string._sep.h"
#ifndef STRING_NITNI_H
#define STRING_NITNI_H

#ifndef STRING_TYPE
#define STRING_TYPE
struct s_String{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_String *String;
#define String_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define String_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
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

/* out/indirect function for string::String::to_f */
val_t String_to_f___out( val_t recv );

/* out/indirect function for string::Sys::native_argc */
val_t Sys_native_argc___out( val_t recv );

/* out/indirect function for string::Sys::native_argv */
val_t Sys_native_argv___out( val_t recv, val_t i );
#endif
/* friendly for string::String::to_cstring */
char * string_String_to_cstring( String recv );
#ifndef String_to_cstring
#define String_to_cstring string_String_to_cstring
#endif
