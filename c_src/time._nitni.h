#include <nit_common.h>
#include "standard___time._sep.h"
#ifndef TIME_NITNI_H
#define TIME_NITNI_H

#ifndef OBJECT_TYPE
#define OBJECT_TYPE
struct s_Object{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_Object *Object;
#define Object_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define Object_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#ifndef SYS_TYPE
#define SYS_TYPE
struct s_Sys{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_Sys *Sys;
#define Sys_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define Sys_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#include "time_nit.h"

/* out/indirect function for time::Object::get_time */
val_t Object_get_time___out( val_t recv );

/* out/indirect function for time::Sys::nanosleep */
void Sys_nanosleep___out( val_t recv, val_t sec, val_t nanosec );
#endif
