#include "environ._nitni.h"
#include "environ_nit.h"
/* out/indirect function for environ::NativeString::get_environ */
val_t NativeString_get_environ___out( val_t recv )
{
char * orig_return;
val_t trans_return;
orig_return = string_NativeString_NativeString_get_environ_0( UNBOX_NativeString(recv) );
trans_return = BOX_NativeString(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for environ::NativeString::setenv */
void NativeString_setenv___out( val_t recv, val_t v )
{
string_NativeString_NativeString_setenv_1( UNBOX_NativeString(recv), UNBOX_NativeString(v) );
nitni_local_ref_clean(  );
}
