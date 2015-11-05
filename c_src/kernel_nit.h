#ifndef __KERNEL_NIT_H
#define __KERNEL_NIT_H
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

#include <stdlib.h>
#include <errno.h>

#define address_is_null(x) ((x)==NULL)
#define sys_errno(x) (errno)

#endif
