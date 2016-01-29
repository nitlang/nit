/*
	Extern implementation of Nit module fixed_ints
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__fixed_ints._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#line 38 "../lib/core/fixed_ints.nit"


#include <inttypes.h>
long fixed_ints___Int8_to_s_len___impl( int8_t self )
{
#line 224 "../lib/core/fixed_ints.nit"


		return snprintf(NULL, 0, "%"PRIi8, self);
	}
void fixed_ints___Int8_native_to_s___impl( int8_t self, char* nstr, long strlen )
{
#line 229 "../lib/core/fixed_ints.nit"


		snprintf(nstr, strlen, "%"PRIi8, self);
	}
long fixed_ints___Int16_to_s_len___impl( int16_t self )
{
#line 370 "../lib/core/fixed_ints.nit"


		return snprintf(NULL, 0, "%"PRIi16, self);
	}
void fixed_ints___Int16_native_to_s___impl( int16_t self, char* nstr, long strlen )
{
#line 375 "../lib/core/fixed_ints.nit"


		snprintf(nstr, strlen, "%"PRIi16, self);
	}
long fixed_ints___UInt16_to_s_len___impl( uint16_t self )
{
#line 516 "../lib/core/fixed_ints.nit"


		return snprintf(NULL, 0, "%"PRIu16, self);
	}
void fixed_ints___UInt16_native_to_s___impl( uint16_t self, char* nstr, long strlen )
{
#line 521 "../lib/core/fixed_ints.nit"


		snprintf(nstr, strlen, "%"PRIu16, self);
	}
long fixed_ints___Int32_to_s_len___impl( int32_t self )
{
#line 663 "../lib/core/fixed_ints.nit"


		return snprintf(NULL, 0, "%"PRIi32, self);
	}
void fixed_ints___Int32_native_to_s___impl( int32_t self, char* nstr, long strlen )
{
#line 668 "../lib/core/fixed_ints.nit"


		snprintf(nstr, strlen, "%"PRIi32, self);
	}
long fixed_ints___UInt32_to_s_len___impl( uint32_t self )
{
#line 809 "../lib/core/fixed_ints.nit"


		return snprintf(NULL, 0, "%"PRIu32, self);
	}
void fixed_ints___UInt32_native_to_s___impl( uint32_t self, char* nstr, long strlen )
{
#line 814 "../lib/core/fixed_ints.nit"


		snprintf(nstr, strlen, "%"PRIu32, self);
	}
