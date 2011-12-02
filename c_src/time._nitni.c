#include "time._nitni.h"
#include "time_nit.h"
/* out/indirect function for time::Object::get_time */
val_t Object_get_time___out( val_t recv )
{
Object recv___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni.v = recv;
return___nitni = kernel_Any_Any_get_time_0( recv___nitni );
return___nit = TAG_Int(return___nitni);
return return___nit;
}
