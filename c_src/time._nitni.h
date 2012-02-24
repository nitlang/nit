#include <nit_common.h>
#include "standard___time._sep.h"
#ifndef TIME_NITNI_H
#define TIME_NITNI_H

#ifndef OBJECT_TYPE
#define OBJECT_TYPE
typedef struct s_Object{
	val_t v;
} Object;
#endif

#include "time_nit.h"

/* out/indirect function for time::Object::get_time */
val_t Object_get_time___out( val_t recv );
#endif
