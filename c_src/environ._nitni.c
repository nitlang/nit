#include "environ._nitni.h"
#include "environ_nit.h"
/* out/indirect function for environ::NativeString::get_environ */
val_t NativeString_get_environ___out( val_t recv )
{
char * recv___nitni;
char * return___nitni;
val_t return___nit;
recv___nitni = UNBOX_NativeString(recv);
return___nitni = string_NativeString_NativeString_get_environ_0( recv___nitni );
return___nit = BOX_NativeString(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
