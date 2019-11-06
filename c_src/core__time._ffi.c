/*
	Extern implementation of Nit module time
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__time._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#define CString_to_s core__time___CString_to_s
#define String_to_cstring core__time___String_to_cstring
long core__time___Sys_get_time___impl( Sys self )
{
#line 24 "../lib/core/time.nit"

 return time(NULL); }
