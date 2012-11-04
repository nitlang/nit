#ifndef __ENVIRON_NIT_H
#define __ENVIRON_NIT_H
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

#include <stdlib.h>

#define string_NativeString_NativeString_get_environ_0(self) getenv(self)
#define string_NativeString_NativeString_setenv_1(self,v) setenv(self,v, 1)

#endif
