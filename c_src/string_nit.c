/* This file is part of NIT ( http://www.nitlanguage.org ).
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

#include "string_nit.h"

// Returns the length of `recv` as a `char*` (excluding the null character)
long native_int_length_str(long recv){
	return snprintf(NULL, 0, "%ld", recv);
}

// Integer to NativeString method
void native_int_to_s(long recv, char* str, long buflen){
	snprintf(str, buflen, "%ld", recv);
}
