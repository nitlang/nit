/*
	Extern implementation of Nit module string
*/
#include <stdlib.h>
#include <stdio.h>
#include "string._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#define NativeString_to_s string___NativeString_to_s
#line 21 "../lib/standard/string.nit"

#include <stdio.h>
#include <string.h>

char* string___Int_strerror_ext___impl( long recv )
{
#line 1763 "../lib/standard/string.nit"


		return strerror(recv);
	}
