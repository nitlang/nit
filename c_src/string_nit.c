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

// Integer to NativeString method
char* native_int_to_s(int recv, int len){
	char* str = malloc(len + 1);
	sprintf(str, "%d", recv);
	return str;
}
