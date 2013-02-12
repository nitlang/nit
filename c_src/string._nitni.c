#include "string._nitni.h"
#include "string_nit.h"
/* out/indirect function for string::NativeString::atof */
val_t NativeString_atof___out( val_t recv )
{
float orig_return;
val_t trans_return;
orig_return = atof( UNBOX_NativeString(recv) );
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
bigint trans___i;
char * orig_return;
val_t trans_return;
trans___i = UNTAG_Int(i);
orig_return = kernel_Sys_Sys_native_argv_1( NULL, trans___i );
trans_return = BOX_NativeString(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
