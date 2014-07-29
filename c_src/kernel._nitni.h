/*
	Extern implementation of Nit module kernel
*/
#ifndef KERNEL_NITG_NITNI_H
#define KERNEL_NITG_NITNI_H

#ifndef NIT_TYPE_Sys
#define NIT_TYPE_Sys 1
typedef struct nitni_instance *Sys;
#endif
#ifndef NIT_TYPE_Sys
#define NIT_TYPE_Sys 1
typedef struct nitni_instance *Sys;
#endif
#ifndef NIT_TYPE_Sys
#define NIT_TYPE_Sys 1
typedef struct nitni_instance *Sys;
#endif
#ifndef NIT_TYPE_Sys
#define NIT_TYPE_Sys 1
typedef struct nitni_instance *Sys;
#endif
#include "kernel._ffi.h"
extern void nitni_global_ref_incr(void*);
extern void nitni_global_ref_decr(void*);
#ifndef Sys_incr_ref
	#define Sys_incr_ref(from) nitni_global_ref_incr((Sys)(from))
#endif
#ifndef Sys_decr_ref
	#define Sys_decr_ref(from) nitni_global_ref_decr((Sys)(from))
#endif
#endif
