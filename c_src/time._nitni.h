/*
	Extern implementation of Nit module time
*/
#ifndef TIME_NITG_NITNI_H
#define TIME_NITG_NITNI_H

#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#include "time._ffi.h"
#define String_incr_ref(from) while(0){}
#define String_decr_ref(from) while(0){}
extern struct nitni_instance * time___NativeString_to_s_with_copy( char* recv );
extern char* time___String_to_cstring( struct nitni_instance * recv );
extern struct nitni_instance * time___NativeString_to_s( char* recv );
#endif
