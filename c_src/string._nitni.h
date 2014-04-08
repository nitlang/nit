/*
	Extern implementation of Nit module string
*/
#ifndef STRING_NITG_NITNI_H
#define STRING_NITG_NITNI_H

#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#include "string._ffi.h"
#define String_incr_ref(from) while(0){}
#define String_decr_ref(from) while(0){}
extern struct nitni_instance * string___NativeString_to_s( char* recv );
#endif
