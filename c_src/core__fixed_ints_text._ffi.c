/*
	Extern implementation of Nit module fixed_ints_text
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__fixed_ints_text._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#line 20 "../lib/core/text/fixed_ints_text.nit"


	#include <inttypes.h>
long core__fixed_ints_text___Int8_to_s_len___impl( int8_t self )
{
#line 26 "../lib/core/text/fixed_ints_text.nit"


		return snprintf(NULL, 0, "%"PRIi8, self);
	}
void core__fixed_ints_text___Int8_native_to_s___impl( int8_t self, char* nstr, long strlen )
{
#line 31 "../lib/core/text/fixed_ints_text.nit"


		snprintf(nstr, strlen, "%"PRIi8, self);
	}
long core__fixed_ints_text___Int16_to_s_len___impl( int16_t self )
{
#line 49 "../lib/core/text/fixed_ints_text.nit"


		return snprintf(NULL, 0, "%"PRIi16, self);
	}
void core__fixed_ints_text___Int16_native_to_s___impl( int16_t self, char* nstr, long strlen )
{
#line 54 "../lib/core/text/fixed_ints_text.nit"


		snprintf(nstr, strlen, "%"PRIi16, self);
	}
long core__fixed_ints_text___UInt16_to_s_len___impl( uint16_t self )
{
#line 73 "../lib/core/text/fixed_ints_text.nit"


		return snprintf(NULL, 0, "%"PRIu16, self);
	}
void core__fixed_ints_text___UInt16_native_to_s___impl( uint16_t self, char* nstr, long strlen )
{
#line 78 "../lib/core/text/fixed_ints_text.nit"


		snprintf(nstr, strlen, "%"PRIu16, self);
	}
long core__fixed_ints_text___Int32_to_s_len___impl( int32_t self )
{
#line 97 "../lib/core/text/fixed_ints_text.nit"


		return snprintf(NULL, 0, "%"PRIi32, self);
	}
void core__fixed_ints_text___Int32_native_to_s___impl( int32_t self, char* nstr, long strlen )
{
#line 102 "../lib/core/text/fixed_ints_text.nit"


		snprintf(nstr, strlen, "%"PRIi32, self);
	}
long core__fixed_ints_text___UInt32_to_s_len___impl( uint32_t self )
{
#line 121 "../lib/core/text/fixed_ints_text.nit"


		return snprintf(NULL, 0, "%"PRIu32, self);
	}
void core__fixed_ints_text___UInt32_native_to_s___impl( uint32_t self, char* nstr, long strlen )
{
#line 126 "../lib/core/text/fixed_ints_text.nit"


		snprintf(nstr, strlen, "%"PRIu32, self);
	}
