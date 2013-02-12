#ifndef __TIME_NIT_H
#define __TIME_NIT_H
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

#include <time.h>
#define kernel_Any_Any_get_time_0(self) time(NULL)
#define std_nanosleep(self, sec, nanosec) std_nanosleep_(sec, nanosec);
void std_nanosleep_(long sec, long nanosec);
#endif
