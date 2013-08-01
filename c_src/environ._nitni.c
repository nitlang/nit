#include "environ._nitni.h"
#include "environ_nit.h"
/* out/indirect function for environ::NativeString::get_environ */
val_t NativeString_get_environ___out( val_t recv )
{
char * trans_recv;
char * orig_return;
val_t trans_return;
trans_recv = UNBOX_NativeString(recv);
orig_return = string_NativeString_NativeString_get_environ_0( trans_recv );
trans_return = BOX_NativeString(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for environ::NativeString::setenv */
void NativeString_setenv___out( val_t recv, val_t v )
{
char * trans_recv;
char * trans___v;
trans_recv = UNBOX_NativeString(recv);
trans___v = UNBOX_NativeString(v);
string_NativeString_NativeString_setenv_1( trans_recv, trans___v );
nitni_local_ref_clean(  );
}
