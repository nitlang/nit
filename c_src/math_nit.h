#ifndef __MATH_NIT_H
#define __MATH_NIT_H
/* This file is part of NIT ( http://www.nitlanguage.org ).
 *
 * Copyright 2004-2008 Jean Privat <jean@pryen.org>
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
#include <math.h>
#include <time.h>

#define kernel_Int_Int_rand_0(self) ((int)(((double)(self))*rand()/(RAND_MAX+1.0)))
#define kernel_Int_Int_binand_0(self, p0) (self & p0)
#define kernel_Int_Int_binor_0(self, p0) (self | p0)
#define kernel_Int_Int_binxor_0(self, p0) (self ^ p0)
#define kernel_Int_Int_binnot_0(self) (~self)
#define kernel_Float_Float_sqrt_0(self) sqrt(self)
#define kernel_Float_Float_cos_0(self) cos(self)
#define kernel_Float_Float_sin_0(self) sin(self)
#define kernel_Float_Float_tan_0(self) tan(self)
#define kernel_Float_Float_acos_0(self) acos(self)
#define kernel_Float_Float_asin_0(self) asin(self)
#define kernel_Float_Float_atan_0(self) atan(self)
#define kernel_Float_Float_pow_1(self, p0) pow(self, p0)
#define kernel_Float_Float_log_0(self) log(self)
#define kernel_Float_Float_exp_0(self) exp(self)
#define kernel_Float_Float_rand_0(self) (((self)*rand())/(RAND_MAX+1.0))
#define kernel_Any_Any_atan2_2(self, p0, p1) (atan2((p0),(p1)))
#define kernel_Any_Any_pi_0(self) (3.14159265) 
#define kernel_Any_Any_srand_from_1(self, p0) (srand((p0)))
#define kernel_Any_Any_srand_0(self) (srand(time(NULL)))

#endif
