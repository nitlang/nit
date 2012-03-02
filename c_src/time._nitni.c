#include "time._nitni.h"
#include "time_nit.h"
/* out/indirect function for time::Object::get_time */
val_t Object_get_time___out( val_t recv )
{
Object recv___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = malloc( sizeof( struct s_Object ) );
recv___nitni->ref.val = NIT_NULL;
recv___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)recv___nitni );
recv___nitni->ref.val = recv;
return___nitni = kernel_Any_Any_get_time_0( recv___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
