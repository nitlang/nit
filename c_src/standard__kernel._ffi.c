/*
	Extern implementation of Nit module kernel
*/
#include <stdlib.h>
#include <stdio.h>
#include "standard__kernel._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#line 19 "../lib/standard/kernel.nit"


#include <errno.h>

long kernel___Sys_errno___impl( Sys recv )
{
#line 113 "../lib/standard/kernel.nit"


		return errno;
	}
