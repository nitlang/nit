#include <nit_common.h>
#include "standard___stream._sep.h"
#ifndef STREAM_NITNI_H
#define STREAM_NITNI_H

#ifndef FDSTREAM_TYPE
#define FDSTREAM_TYPE
struct s_FDStream{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_FDStream *FDStream;
#define FDStream_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define FDStream_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#ifndef OBJECT_TYPE
#define OBJECT_TYPE
struct s_Object{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_Object *Object;
#define Object_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define Object_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#ifndef ARRAY_TYPE
#define ARRAY_TYPE
struct s_Array{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_Array *Array;
#define Array_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define Array_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#ifndef NULLABLE_INT_TYPE
#define NULLABLE_INT_TYPE
struct s_nullable_Int{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_nullable_Int *nullable_Int;
#ifndef null_Int
#define null_Int stream_null_Int
#endif
nullable_Int stream_null_Int();
#define Int_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define Int_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#ifndef ARRAY_TYPE
#define ARRAY_TYPE
struct s_Array{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_Array *Array;
#define Array_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define Array_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#ifndef NULLABLE_OBJECT_TYPE
#define NULLABLE_OBJECT_TYPE
struct s_nullable_Object{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_nullable_Object *nullable_Object;
#ifndef null_Object
#define null_Object stream_null_Object
#endif
nullable_Object stream_null_Object();
#define Object_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define Object_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#include "stream_nit.h"

/* out/indirect function for stream::FDStream::native_close */
val_t FDStream_native_close___out( val_t recv, val_t i );

/* out/indirect function for stream::FDStream::native_read_char */
val_t FDStream_native_read_char___out( val_t recv, val_t i );

/* out/indirect function for stream::FDStream::native_read */
val_t FDStream_native_read___out( val_t recv, val_t i, val_t buf, val_t len );

/* out/indirect function for stream::FDStream::native_write */
val_t FDStream_native_write___out( val_t recv, val_t i, val_t buf, val_t len );

/* out/indirect function for stream::FDStream::native_write_char */
val_t FDStream_native_write_char___out( val_t recv, val_t i, val_t c );

/* out/indirect function for stream::Object::intern_poll */
val_t Object_intern_poll___out( val_t recv, val_t in_fds, val_t out_fds );
/* friendly for array::AbstractArrayRead::(abstract_collection::Collection::length) */
bigint stream_Array_length( Array recv );
#ifndef Array_length
#define Array_length stream_Array_length
#endif
/* friendly for array::Array::(abstract_collection::SequenceRead::[]) */
nullable_Object stream_Array__index( Array recv, bigint index );
#ifndef Array__index
#define Array__index stream_Array__index
#endif

/* Type check for nullable Object with Int */
int stream_nullable_Object_is_a_Int( nullable_Object value );
#ifndef nullable_Object_is_a_Int
#define nullable_Object_is_a_Int stream_nullable_Object_is_a_Int
#endif

/* Cast for nullable Object to Int */
bigint stream_nullable_Object_as_Int( nullable_Object value );
#ifndef nullable_Object_as_Int
#define nullable_Object_as_Int stream_nullable_Object_as_Int
#endif

/* Cast for Int to nullable Int */
nullable_Int stream_Int_as_nullable( bigint value );
#ifndef Int_as_nullable
#define Int_as_nullable stream_Int_as_nullable
#endif
#endif
