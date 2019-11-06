/*
	Extern implementation of Nit module abstract_text
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__abstract_text._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#line 18 "../lib/core/text/abstract_text.nit"


	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
long core__abstract_text___Int_int_to_s_len___impl( long self )
{
#line 1838 "../lib/core/text/abstract_text.nit"


		return snprintf(NULL, 0, "%ld", self);
	}
void core__abstract_text___Int_native_int_to_s___impl( long self, char* nstr, long strlen )
{
#line 1843 "../lib/core/text/abstract_text.nit"


		snprintf(nstr, strlen, "%ld", self);
	}
long core__abstract_text___Byte_byte_to_s_len___impl( unsigned char self )
{
#line 1783 "../lib/core/text/abstract_text.nit"


		return snprintf(NULL, 0, "0x%02x", self);
	}
void core__abstract_text___Byte_native_byte_to_s___impl( unsigned char self, char* nstr, long strlen )
{
#line 1788 "../lib/core/text/abstract_text.nit"


		snprintf(nstr, strlen, "0x%02x", self);
	}
char* core__abstract_text___Int_strerror_ext___impl( long self )
{
#line 1808 "../lib/core/text/abstract_text.nit"

 return strerror((int)self); }
void core__abstract_text___Char_u8char_tos___impl( uint32_t self, char* r, long len )
{
#line 2033 "../lib/core/text/abstract_text.nit"


		r[len] = '\0';
		switch(len){
			case 1:
				r[0] = self;
				break;
			case 2:
				r[0] = 0xC0 | ((self & 0x7C0) >> 6);
				r[1] = 0x80 | (self & 0x3F);
				break;
			case 3:
				r[0] = 0xE0 | ((self & 0xF000) >> 12);
				r[1] = 0x80 | ((self & 0xFC0) >> 6);
				r[2] = 0x80 | (self & 0x3F);
				break;
			case 4:
				r[0] = 0xF0 | ((self & 0x1C0000) >> 18);
				r[1] = 0x80 | ((self & 0x3F000) >> 12);
				r[2] = 0x80 | ((self & 0xFC0) >> 6);
				r[3] = 0x80 | (self & 0x3F);
				break;
		}
	}
