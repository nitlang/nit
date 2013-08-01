/*
	Extern implementation of Nit module string
*/
#include "standard___string._ffi.h"

String Float_to_precision_native___impl( float recv, bigint nb )
{
#line 826 "../lib/standard/string.nit"


		int size;
		char *str;

		size = snprintf(NULL, 0, "%.*f", (int)nb, recv);
		str = malloc(size + 1);
		sprintf(str, "%.*f", (int)nb, recv );

		return new_String_from_cstring( str );
	}
