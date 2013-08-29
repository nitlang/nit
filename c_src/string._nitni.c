#include "string._nitni.h"
#include "string_nit.h"
/* out/indirect function for string::Int::native_int_to_s */
val_t Int_native_int_to_s___out( val_t recv, val_t len )
{
char * orig_return;
val_t trans_return;
orig_return = native_int_to_s( UNTAG_Int(recv), UNTAG_Int(len) );
trans_return = BOX_NativeString(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for string::Float::to_precision_native */
val_t Float_to_precision_native___out( val_t recv, val_t nb )
{
float trans_recv;
String orig_return;
val_t trans_return;
trans_recv = UNBOX_Float(recv);
orig_return = malloc( sizeof( struct s_String ) );
orig_return->ref.val = NIT_NULL;
orig_return->ref.count = 0;
orig_return = Float_to_precision_native___impl( trans_recv, UNTAG_Int(nb) );
trans_return = orig_return->ref.val;
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for string::NativeString::atof */
val_t NativeString_atof___out( val_t recv )
{
char * trans_recv;
float orig_return;
val_t trans_return;
trans_recv = UNBOX_NativeString(recv);
orig_return = atof( trans_recv );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* friendly for string::NativeString::(string::Object::to_s) */
String string_NativeString_to_s( char * recv )
{
val_t trans_recv;
val_t orig_return;
String trans_return;
trans_recv = BOX_NativeString(recv);
trans_return = malloc( sizeof( struct s_String ) );
trans_return->ref.val = NIT_NULL;
trans_return->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)trans_return );
orig_return = CALL_standard___string___Object___to_s( trans_recv )( trans_recv );
trans_return->ref.val = orig_return;
return trans_return;
}
