/*
	Extern implementation of Nit module environ
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__environ._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
char* core__environ___CString_get_environ___impl( char* self )
{
#line 59 "../lib/core/environ.nit"

 return getenv(self); }
