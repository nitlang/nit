#ifndef __ENVIRON_H
#define __ENVIRON_H
/* This file is part of NIT ( http://www.nitlanguage.org ).
 *
 * Copyright 2008 Floréal Morandat <morandat@lirmm.fr> 
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

#define _POSIX_C_SOURCE 1
#include <stdlib.h>

#define string_NativeString_NativeString_get_environ_0(self) getenv(self)
#define string_NativeString_NativeString_put_environ_0(self) putenv(self)
#define string_NativeString_NativeString_unset_environ_0(self) unsetenv(self)
#define string_NativeString_NativeString_set_environ_2(self, p0, p1) setenv(self, p0, p1)

#endif
