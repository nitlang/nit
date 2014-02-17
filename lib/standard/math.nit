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
module math

import kernel
import collection

in "C header" `{
#include <math.h>
`}

redef class Int
	fun rand: Int is extern "kernel_Int_Int_rand_0"
	fun bin_and(i: Int): Int is extern "kernel_Int_Int_binand_0"
	fun bin_or(i: Int): Int is extern "kernel_Int_Int_binor_0"
	fun bin_xor(i: Int): Int is extern "kernel_Int_Int_binxor_0"
	fun sqrt : Int is extern `{ return sqrtl(recv); `}
	fun sin : Int is extern `{ return sinl(recv); `}
	fun cos : Int is extern `{ return cosl(recv); `}
end

redef class Float
	fun sqrt: Float is extern "kernel_Float_Float_sqrt_0"
	fun cos: Float is extern "kernel_Float_Float_cos_0"
	fun sin: Float is extern "kernel_Float_Float_sin_0"
	fun tan: Float is extern "kernel_Float_Float_tan_0"
	fun acos: Float is extern "kernel_Float_Float_acos_0"
	fun asin: Float is extern "kernel_Float_Float_asin_0"
	fun atan: Float is extern "kernel_Float_Float_atan_0"
	fun abs: Float `{ return abs(recv); `}

	fun pow(e: Float): Float is extern "kernel_Float_Float_pow_1"
	fun log: Float is extern "kernel_Float_Float_log_0"
	fun exp: Float is extern "kernel_Float_Float_exp_0"
	
	fun rand: Float is extern "kernel_Float_Float_rand_0"
	fun hypot_with( b : Float ) : Float is extern "hypotf"
end

redef class Collection[ E ]
	# Return a random element form the collection
	# There must be at least one element in the collection
	fun rand: E
	do
		if is_empty then abort
		var rand_index = length.rand

		for e in self do
			if rand_index == 0 then return e
			rand_index -= 1
		end
		abort
	end
end

fun atan2(x: Float, y: Float): Float is extern "kernel_Any_Any_atan2_2"
fun pi: Float is extern "kernel_Any_Any_pi_0"
fun srand_from(x: Int) is extern "kernel_Any_Any_srand_from_1"
fun srand is extern "kernel_Any_Any_srand_0"
