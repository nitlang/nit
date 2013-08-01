#include "string._nitni.h"
#include "string_nit.h"
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
/* out/indirect function for string::Sys::native_argc */
val_t Sys_native_argc___out( val_t recv )
{
bigint orig_return;
val_t trans_return;
orig_return = kernel_Sys_Sys_native_argc_0( NULL );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for string::Sys::native_argv */
val_t Sys_native_argv___out( val_t recv, val_t i )
{
char * orig_return;
val_t trans_return;
orig_return = kernel_Sys_Sys_native_argv_1( NULL, UNTAG_Int(i) );
trans_return = BOX_NativeString(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* friendly for string::String::from_cstring */
String string_new_String_from_cstring( char * str )
{
val_t trans___str;
val_t orig_return;
String trans_return;
trans___str = BOX_NativeString(str);
trans_return = malloc( sizeof( struct s_String ) );
trans_return->ref.val = NIT_NULL;
trans_return->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)trans_return );
orig_return = NEW_String_standard___string___String___from_cstring( trans___str );
trans_return->ref.val = orig_return;
return trans_return;
}
