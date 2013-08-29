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
#include "string_nit.h"
#include <standard___string._ffi.h>

/* out/indirect function for string::Int::native_int_to_s */
val_t Int_native_int_to_s___out( val_t recv, val_t len );

/* out/indirect function for string::Float::to_precision_native */
val_t Float_to_precision_native___out( val_t recv, val_t nb );

/* out/indirect function for string::NativeString::atof */
val_t NativeString_atof___out( val_t recv );
/* friendly for string::NativeString::(string::Object::to_s) */
String string_NativeString_to_s( char * recv );
#ifndef NativeString_to_s
#define NativeString_to_s string_NativeString_to_s
#endif
#endif
