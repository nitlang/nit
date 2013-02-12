#include "stream._nitni.h"
#include "stream_nit.h"
/* out/indirect function for stream::FDStream::native_close */
val_t FDStream_native_close___out( val_t recv, val_t i )
{
bigint trans___i;
bigint orig_return;
val_t trans_return;
trans___i = UNTAG_Int(i);
orig_return = stream_FDStream_FDStream_native_close_1( NULL, trans___i );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for stream::FDStream::native_read_char */
val_t FDStream_native_read_char___out( val_t recv, val_t i )
{
bigint trans___i;
bigint orig_return;
val_t trans_return;
trans___i = UNTAG_Int(i);
orig_return = stream_FDStream_FDStream_native_read_char_1( NULL, trans___i );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for stream::FDStream::native_read */
val_t FDStream_native_read___out( val_t recv, val_t i, val_t buf, val_t len )
{
bigint trans___i;
bigint trans___len;
bigint orig_return;
val_t trans_return;
trans___i = UNTAG_Int(i);
trans___len = UNTAG_Int(len);
orig_return = stream_FDStream_FDStream_native_read_3( NULL, trans___i, UNBOX_NativeString(buf), trans___len );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for stream::FDStream::native_write */
val_t FDStream_native_write___out( val_t recv, val_t i, val_t buf, val_t len )
{
bigint trans___i;
bigint trans___len;
bigint orig_return;
val_t trans_return;
trans___i = UNTAG_Int(i);
trans___len = UNTAG_Int(len);
orig_return = stream_FDStream_FDStream_native_write_3( NULL, trans___i, UNBOX_NativeString(buf), trans___len );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for stream::FDStream::native_write_char */
val_t FDStream_native_write_char___out( val_t recv, val_t i, val_t c )
{
bigint trans___i;
char trans___c;
bigint orig_return;
val_t trans_return;
trans___i = UNTAG_Int(i);
trans___c = UNTAG_Char(c);
orig_return = stream_FDStream_FDStream_native_write_char_2( NULL, trans___i, trans___c );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for stream::Object::intern_poll */
val_t Object_intern_poll___out( val_t recv, val_t in_fds, val_t out_fds )
{
Object trans_recv;
Array trans___in_fds;
Array trans___out_fds;
nullable_Int orig_return;
val_t trans_return;
trans_recv = malloc( sizeof( struct s_Object ) );
trans_recv->ref.val = NIT_NULL;
trans_recv->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)trans_recv );
trans_recv->ref.val = recv;
trans___in_fds = malloc( sizeof( struct s_Array ) );
trans___in_fds->ref.val = NIT_NULL;
trans___in_fds->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)trans___in_fds );
trans___in_fds->ref.val = in_fds;
trans___out_fds = malloc( sizeof( struct s_Array ) );
trans___out_fds->ref.val = NIT_NULL;
trans___out_fds->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)trans___out_fds );
trans___out_fds->ref.val = out_fds;
orig_return = malloc( sizeof( struct s_nullable_Int ) );
orig_return->ref.val = NIT_NULL;
orig_return->ref.count = 0;
orig_return = Object_intern_poll___impl( trans_recv, trans___in_fds, trans___out_fds );
trans_return = orig_return->ref.val;
nitni_local_ref_clean(  );
return trans_return;
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
val_t trans_recv;
val_t orig_return;
bigint trans_return;
trans_recv = recv->ref.val;
orig_return = CALL_standard___collection___abstract_collection___Collection___length( trans_recv )( trans_recv );
trans_return = UNTAG_Int(orig_return);
return trans_return;
}
/* friendly for array::Array::(abstract_collection::SequenceRead::[]) */
nullable_Object stream_Array__index( Array recv, bigint index )
{
val_t trans_recv;
val_t trans___index;
val_t orig_return;
nullable_Object trans_return;
trans_recv = recv->ref.val;
trans___index = TAG_Int(index);
trans_return = malloc( sizeof( struct s_nullable_Object ) );
trans_return->ref.val = NIT_NULL;
trans_return->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)trans_return );
orig_return = CALL_standard___collection___abstract_collection___SequenceRead_____bra( trans_recv )( trans_recv, trans___index );
trans_return->ref.val = orig_return;
return trans_return;
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
