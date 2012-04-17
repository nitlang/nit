#include "stream._nitni.h"
#include "stream_nit.h"
/* out/indirect function for stream::FDStream::native_close */
val_t FDStream_native_close___out( val_t recv, val_t i )
{
FDStream recv___nitni;
bigint i___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = malloc( sizeof( struct s_FDStream ) );
recv___nitni->ref.val = NIT_NULL;
recv___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)recv___nitni );
recv___nitni->ref.val = recv;
i___nitni = UNTAG_Int(i);
return___nitni = stream_FDStream_FDStream_native_close_1( recv___nitni, i___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for stream::FDStream::native_read_char */
val_t FDStream_native_read_char___out( val_t recv, val_t i )
{
FDStream recv___nitni;
bigint i___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = malloc( sizeof( struct s_FDStream ) );
recv___nitni->ref.val = NIT_NULL;
recv___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)recv___nitni );
recv___nitni->ref.val = recv;
i___nitni = UNTAG_Int(i);
return___nitni = stream_FDStream_FDStream_native_read_char_1( recv___nitni, i___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for stream::FDStream::native_read */
val_t FDStream_native_read___out( val_t recv, val_t i, val_t buf, val_t len )
{
FDStream recv___nitni;
bigint i___nitni;
char * buf___nitni;
bigint len___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = malloc( sizeof( struct s_FDStream ) );
recv___nitni->ref.val = NIT_NULL;
recv___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)recv___nitni );
recv___nitni->ref.val = recv;
i___nitni = UNTAG_Int(i);
buf___nitni = UNBOX_NativeString(buf);
len___nitni = UNTAG_Int(len);
return___nitni = stream_FDStream_FDStream_native_read_3( recv___nitni, i___nitni, buf___nitni, len___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for stream::FDStream::native_write */
val_t FDStream_native_write___out( val_t recv, val_t i, val_t buf, val_t len )
{
FDStream recv___nitni;
bigint i___nitni;
char * buf___nitni;
bigint len___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = malloc( sizeof( struct s_FDStream ) );
recv___nitni->ref.val = NIT_NULL;
recv___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)recv___nitni );
recv___nitni->ref.val = recv;
i___nitni = UNTAG_Int(i);
buf___nitni = UNBOX_NativeString(buf);
len___nitni = UNTAG_Int(len);
return___nitni = stream_FDStream_FDStream_native_write_3( recv___nitni, i___nitni, buf___nitni, len___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for stream::Object::intern_poll */
val_t Object_intern_poll___out( val_t recv, val_t in_fds, val_t out_fds )
{
Object recv___nitni;
Array in_fds___nitni;
Array out_fds___nitni;
nullable_Int return___nitni;
val_t return___nit;
recv___nitni = malloc( sizeof( struct s_Object ) );
recv___nitni->ref.val = NIT_NULL;
recv___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)recv___nitni );
recv___nitni->ref.val = recv;
in_fds___nitni = malloc( sizeof( struct s_Array ) );
in_fds___nitni->ref.val = NIT_NULL;
in_fds___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)in_fds___nitni );
in_fds___nitni->ref.val = in_fds;
out_fds___nitni = malloc( sizeof( struct s_Array ) );
out_fds___nitni->ref.val = NIT_NULL;
out_fds___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)out_fds___nitni );
out_fds___nitni->ref.val = out_fds;
return___nitni = malloc( sizeof( struct s_nullable_Int ) );
return___nitni->ref.val = NIT_NULL;
return___nitni->ref.count = 0;
return___nitni = Object_intern_poll___impl( recv___nitni, in_fds___nitni, out_fds___nitni );
return___nit = return___nitni->ref.val;
nitni_local_ref_clean(  );
return return___nit;
}
nullable_Int stream_null_Int()
{
nullable_Int n;
n = malloc( sizeof( struct s_nullable_Int ) );
n->ref.val = NIT_NULL;
n->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)n );
return n;
}
nullable_Object stream_null_Object()
{
nullable_Object n;
n = malloc( sizeof( struct s_nullable_Object ) );
n->ref.val = NIT_NULL;
n->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)n );
return n;
}
/* friendly for array::AbstractArrayRead::(abstract_collection::Collection::length) */
bigint stream_Array_length( Array recv )
{
val_t recv___nit;
bigint result___nitni;
val_t result___nit;
recv___nit = recv->ref.val;
result___nit = CALL_standard___collection___abstract_collection___Collection___length( recv___nit )( recv___nit );
result___nitni = UNTAG_Int(result___nit);
return result___nitni;
}
/* friendly for array::Array::(abstract_collection::SequenceRead::[]) */
nullable_Object stream_Array__index( Array recv, bigint index )
{
val_t recv___nit;
val_t index___nit;
nullable_Object result___nitni;
val_t result___nit;
recv___nit = recv->ref.val;
index___nit = TAG_Int(index);
result___nitni = malloc( sizeof( struct s_nullable_Object ) );
result___nitni->ref.val = NIT_NULL;
result___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)result___nitni );
result___nit = CALL_standard___collection___abstract_collection___SequenceRead_____bra( recv___nit )( recv___nit, index___nit );
result___nitni->ref.val = result___nit;
return result___nitni;
}
int stream_nullable_Object_is_a_Int( nullable_Object value )
{
val_t temp;
temp = value->ref.val;
if ( ISNULL(temp) ) return 0;
if ( ! ( ISOBJ( temp ) ? OBJISA( temp, standard___kernel___Int ): VALISA( temp, standard___kernel___Int ) ) ) return 0;
return 1;
}
bigint stream_nullable_Object_as_Int( nullable_Object value )
{
val_t temp;
bigint out;
temp = value->ref.val;
if ( ISNULL(temp) ){	fprintf( stderr, "Casting from nullable Object to Int failed because value is null." );
	abort();
}if ( ! ( ISOBJ( temp ) ? OBJISA( temp, standard___kernel___Int ): VALISA( temp, standard___kernel___Int ) ) ){
	fprintf( stderr, "Casting to Int failed because value is not a Int." );
	abort();
}
out = UNTAG_Int(temp);
return out;
}
nullable_Int stream_Int_as_nullable( bigint value )
{
val_t temp;
nullable_Int out;
out = malloc( sizeof( struct s_nullable_Int ) );
out->ref.val = NIT_NULL;
out->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)out );
temp = TAG_Int(value);
out->ref.val = temp;
return out;
}
