#include "time._nitni.h"
#include "time_nit.h"
/* out/indirect function for time::Object::get_time */
val_t Object_get_time___out( val_t recv )
{
bigint orig_return;
val_t trans_return;
orig_return = kernel_Any_Any_get_time_0( NULL );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Sys::nanosleep */
void Sys_nanosleep___out( val_t recv, val_t sec, val_t nanosec )
{
std_nanosleep( NULL, UNTAG_Int(sec), UNTAG_Int(nanosec) );
nitni_local_ref_clean(  );
}
