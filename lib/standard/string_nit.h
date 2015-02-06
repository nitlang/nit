#ifndef __STRING_NIT_H
#define __STRING_NIT_H
#include <stdio.h>
#include <stdlib.h>
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

long native_int_length_str(long recv);
void native_int_to_s(long recv, char* str, long buflen);

#endif
