#include "string._nitni.h"
#include "string_nit.h"
/* out/indirect function for string::Sys::native_argc */
val_t Sys_native_argc___out( val_t recv )
{
Sys recv___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni.v = recv;
return___nitni = kernel_Sys_Sys_native_argc_0( recv___nitni );
return___nit = TAG_Int(return___nitni);
return return___nit;
}
/* out/indirect function for string::Sys::native_argv */
val_t Sys_native_argv___out( val_t recv, val_t i )
{
Sys recv___nitni;
bigint i___nitni;
char * return___nitni;
val_t return___nit;
recv___nitni.v = recv;
i___nitni = UNTAG_Int(i);
return___nitni = kernel_Sys_Sys_native_argv_1( recv___nitni, i___nitni );
return___nit = BOX_NativeString(return___nitni);
return return___nit;
}
