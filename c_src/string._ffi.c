/*
	Extern implementation of Nit module string
*/
#include <stdlib.h>
#include <stdio.h>
#include "string._ffi.h"
#define NativeString_to_s string___NativeString_to_s
#line 20 "lib/standard/string.nit"

#include <stdio.h>

String string___Float_to_precision_native___impl( double recv, int nb )
{
#line 1103 "lib/standard/string.nit"


		int size;
		char *str;

		size = snprintf(NULL, 0, "%.*f", (int)nb, recv);
		str = malloc(size + 1);
		sprintf(str, "%.*f", (int)nb, recv );

		return NativeString_to_s( str );
	}
