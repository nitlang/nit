/*
	Extern implementation of Nit module native
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__native._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#line 17 "../lib/core/text/native.nit"


#ifdef __linux__
	#include <endian.h>
#endif
#ifdef __APPLE__
	#include <libkern/OSByteOrder.h>
	#define be32toh(x) OSSwapBigToHostInt32(x)
#endif
#ifdef _WIN32
	#define be32toh(val) _byteswap_ulong(val)
#endif

#ifdef __pnacl__
	#define be16toh(val) (((val) >> 8) | ((val) << 8))
	#define be32toh(val) ((be16toh((val) << 16) | (be16toh((val) >> 16))))
#endif
#ifndef be32toh
	#define be32toh(val) betoh32(val)
#endif
double core__native___CString_atof___impl( char* self )
{
#line 131 "../lib/core/text/native.nit"

 return atof(self); }
uint32_t core__native___UInt32_code_point___impl( uint32_t self )
{
#line 90 "../lib/core/text/native.nit"

 return self; }
