/*
	Extern implementation of Nit module stream
*/
#ifndef STREAM_NITG_NITNI_H
#define STREAM_NITG_NITNI_H

#ifndef NIT_TYPE_Object
#define NIT_TYPE_Object 1
typedef struct nitni_instance *Object;
#endif
#ifndef NIT_TYPE_nullable_Int
#define NIT_TYPE_nullable_Int 1
typedef struct nitni_instance *nullable_Int;
#endif
#ifndef NIT_TYPE_Array_of_Int
#define NIT_TYPE_Array_of_Int 1
typedef struct nitni_instance *Array_of_Int;
#endif
#ifndef NIT_TYPE_nullable_Object
#define NIT_TYPE_nullable_Object 1
typedef struct nitni_instance *nullable_Object;
#endif
#include "stream._ffi.h"
#define Object_incr_ref(from) while(0){}
#define Object_decr_ref(from) while(0){}
#define nullable_Int_incr_ref(from) while(0){}
#define nullable_Int_decr_ref(from) while(0){}
extern nullable_Int stream___null_Int();
#define null_Int stream___null_Int
#define Array_of_Int_incr_ref(from) while(0){}
#define Array_of_Int_decr_ref(from) while(0){}
#define nullable_Object_incr_ref(from) while(0){}
#define nullable_Object_decr_ref(from) while(0){}
extern nullable_Object stream___null_Object();
#define null_Object stream___null_Object
extern int stream___Array_of_Int_length( struct nitni_instance * recv );
extern int stream___Array_of_Int__index( struct nitni_instance * recv, int index );
extern int stream___Int_is_a_nullable_Int(int);
#define Int_is_a_nullable_Int stream___Int_is_a_nullable_Int
extern struct nitni_instance * stream___Int_as_nullable_Int(int);
#define Int_as_nullable_Int stream___Int_as_nullable_Int
#define Int_as_nullable Int_as_nullable_Int
#endif
