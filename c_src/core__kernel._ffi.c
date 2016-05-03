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
long kernel___Sys_errno___impl( Sys self )
{
#line 298 "../lib/core/kernel.nit"

 return errno; }
unsigned char kernel___Byte_rsh___impl( unsigned char self, long i )
{
#line 655 "../lib/core/kernel.nit"

 return self >> i; }
uint32_t kernel___Byte_ffi_ascii___impl( unsigned char self )
{
#line 662 "../lib/core/kernel.nit"

 return (uint32_t)self; }
long kernel___Int_lsh___impl( long self, long i )
{
#line 753 "../lib/core/kernel.nit"

 return self << i; }
long kernel___Int_rsh___impl( long self, long i )
{
#line 760 "../lib/core/kernel.nit"

 return self >> i; }
uint32_t kernel___Int_cp___impl( long self )
{
#line 821 "../lib/core/kernel.nit"

 return (uint32_t)self; }
long kernel___Char_cp___impl( uint32_t self )
{
#line 969 "../lib/core/kernel.nit"

 return (long)self; }
int kernel___Pointer_address_is_null___impl( void* self )
{
#line 1070 "../lib/core/kernel.nit"

 return self == NULL; }
void kernel___Pointer_free___impl( void* self )
{
#line 1073 "../lib/core/kernel.nit"

 free(self); }
