/*
	Extern implementation of Nit module native
*/
#ifndef CORE__NATIVE_NITG_NITNI_H
#define CORE__NATIVE_NITG_NITNI_H

#include "core__native._ffi.h"
#include <stdint.h>
extern void nitni_global_ref_incr(void*);
extern void nitni_global_ref_decr(void*);
#endif
