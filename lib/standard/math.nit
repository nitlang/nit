# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Mathematical operations
package math

import kernel

redef class Int
	meth rand: Int is extern "kernel_Int_Int_rand_0"
end

redef class Float
	meth sqrt: Float is extern "kernel_Float_Float_sqrt_0"
	meth cos: Float is extern "kernel_Float_Float_cos_0"
	meth sin: Float is extern "kernel_Float_Float_sin_0"
	meth tan: Float is extern "kernel_Float_Float_tan_0"
	meth acos: Float is extern "kernel_Float_Float_acos_0"
	meth asin: Float is extern "kernel_Float_Float_asin_0"
	meth atan: Float is extern "kernel_Float_Float_atan_0"

	meth pow(e: Float): Float is extern "kernel_Float_Float_pow_1"
	meth log: Float is extern "kernel_Float_Float_log_0"
	meth exp: Float is extern "kernel_Float_Float_exp_0"
	
	meth rand: Float is extern "kernel_Float_Float_rand_0"
end

meth atan2(x: Float, y: Float): Float is extern "kernel_Any_Any_atan2_2"
meth pi: Float is extern "kernel_Any_Any_pi_0"
meth srand_from(x: Int) is extern "kernel_Any_Any_srand_from_1"
meth srand is extern "kernel_Any_Any_srand_0"
