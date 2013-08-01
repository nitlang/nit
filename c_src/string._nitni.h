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
#include <standard___string._ffi.h>

/* out/indirect function for string::Float::to_precision_native */
val_t Float_to_precision_native___out( val_t recv, val_t nb );

/* out/indirect function for string::NativeString::atof */
val_t NativeString_atof___out( val_t recv );

/* out/indirect function for string::Sys::native_argc */
val_t Sys_native_argc___out( val_t recv );

/* out/indirect function for string::Sys::native_argv */
val_t Sys_native_argv___out( val_t recv, val_t i );
/* friendly for string::String::from_cstring */
String string_new_String_from_cstring( char * str );
#ifndef new_String_from_cstring
#define new_String_from_cstring string_new_String_from_cstring
#endif
#endif
