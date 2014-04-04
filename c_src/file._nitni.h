/*
	Extern implementation of Nit module file
*/
#ifndef FILE_NITG_NITNI_H
#define FILE_NITG_NITNI_H

#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#ifndef NIT_TYPE_Set_of_String
#define NIT_TYPE_Set_of_String 1
typedef struct nitni_instance *Set_of_String;
#endif
#ifndef NIT_TYPE_HashSet_of_String
#define NIT_TYPE_HashSet_of_String 1
typedef struct nitni_instance *HashSet_of_String;
#endif
#include "file._ffi.h"
#define String_incr_ref(from) while(0){}
#define String_decr_ref(from) while(0){}
#define Set_of_String_incr_ref(from) while(0){}
#define Set_of_String_decr_ref(from) while(0){}
#define HashSet_of_String_incr_ref(from) while(0){}
#define HashSet_of_String_decr_ref(from) while(0){}
extern struct nitni_instance * file___new_HashSet_of_String(  );
extern void file___HashSet_of_String_add( struct nitni_instance * recv, struct nitni_instance * item );
extern struct nitni_instance * file___NativeString_to_s( char* recv );
extern char* file___String_to_cstring( struct nitni_instance * recv );
extern int file___HashSet_of_String_is_a_Set_of_String(struct nitni_instance *);
#define HashSet_of_String_is_a_Set_of_String file___HashSet_of_String_is_a_Set_of_String
extern struct nitni_instance * file___HashSet_of_String_as_Set_of_String(struct nitni_instance *);
#define HashSet_of_String_as_Set_of_String file___HashSet_of_String_as_Set_of_String
#endif
