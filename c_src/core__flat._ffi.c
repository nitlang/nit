/*
	Extern implementation of Nit module flat
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__flat._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#line 16 "../lib/core/text/flat.nit"


#include <stdio.h>
#include <string.h>
void flat___NativeString_native_set_char___impl( char* self, long pos, uint32_t c, long ln )
{
#line 1256 "../lib/core/text/flat.nit"


		char* dst = self + pos;
		switch(ln){
			case 1:
				dst[0] = c;
				break;
			case 2:
				dst[0] = 0xC0 | ((c & 0x7C0) >> 6);
				dst[1] = 0x80 | (c & 0x3F);
				break;
			case 3:
				dst[0] = 0xE0 | ((c & 0xF000) >> 12);
				dst[1] = 0x80 | ((c & 0xFC0) >> 6);
				dst[2] = 0x80 | (c & 0x3F);
				break;
			case 4:
				dst[0] = 0xF0 | ((c & 0x1C0000) >> 18);
				dst[1] = 0x80 | ((c & 0x3F000) >> 12);
				dst[2] = 0x80 | ((c & 0xFC0) >> 6);
				dst[3] = 0x80 | (c & 0x3F);
				break;
		}
	}
