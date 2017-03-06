/*
	Extern implementation of Nit module kernel
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__kernel._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#line 22 "../lib/core/kernel.nit"


	#include <stdlib.h>
	#include <errno.h>
long core__kernel___Sys_errno___impl( Sys self )
{
#line 298 "../lib/core/kernel.nit"

 return errno; }
int core__kernel___Sys_is_windows___impl( Sys self )
{
#line 1084 "../lib/core/kernel.nit"


#ifdef _WIN32
	return 1;
#else
	return 0;
#endif
}
int core__kernel___Pointer_address_is_null___impl( void* self )
{
#line 1059 "../lib/core/kernel.nit"

 return self == NULL; }
void core__kernel___Pointer_free___impl( void* self )
{
#line 1062 "../lib/core/kernel.nit"

 free(self); }
long core__kernel___Pointer_hash___impl( void* self )
{
#line 1065 "../lib/core/kernel.nit"

 return (long)self; }
int core__kernel___Pointer_native_equals___impl( void* self, void* o )
{
#line 1069 "../lib/core/kernel.nit"

 return self == o; }
