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
	# Returns a random `Int` in `[0 .. self[`.
	fun rand: Int is extern "kernel_Int_Int_rand_0"

	# Returns the result of a binary AND operation on `self` and `i`
	#
	#     assert 0x10.bin_and(0x01) == 0
	fun bin_and(i: Int): Int is extern "kernel_Int_Int_binand_0"

	# Returns the result of a binary OR operation on `self` and `i`
	#
	#     assert 0x10.bin_or(0x01) == 0x11
	fun bin_or(i: Int): Int is extern "kernel_Int_Int_binor_0"

	# Returns the result of a binary XOR operation on `self` and `i`
	#
	#     assert 0x101.bin_xor(0x110) == 0x11
	fun bin_xor(i: Int): Int is extern "kernel_Int_Int_binxor_0"

	# Returns the 1's complement of `self`
	#
	#     assert 0x2F.bin_not == -48
	fun bin_not: Int is extern "kernel_Int_Int_binnot_0"

	# Returns the square root of `self`
	#
	#     assert 16.sqrt == 4
	fun sqrt: Int `{ return sqrt(recv); `}

	# Returns the greatest common divisor of `self` and `o`
	#
	#     assert 54.gcd(24)   == 6
	#     assert -54.gcd(-24) == 6
	#     assert 54.gcd(-24)  == -6
	#     assert -54.gcd(24)  == -6
	#     assert 12.gcd(6)    == 6
	fun gcd(o: Int): Int
	do
		if self < 0 then return -(-self).gcd(o)
		if o < 0 then return -(self.gcd(-o))
		if self == 0 or o == self then return o
		if o == 0 then return self
		if self.bin_and(1) == 0 then
			if o.bin_and(1) == 1 then
				return self.rshift(1).gcd(o)
			else
				return self.rshift(1).gcd(o.rshift(1)).lshift(1)
			end
		end
		if o.bin_and(1) == 0 then return self.gcd(o.rshift(1))
		if self > o then return (self - o).rshift(1).gcd(o)
		return (o - self).rshift(1).gcd(self)
	end

	# Is `self` even ?
	#
	#     assert 12.is_even
	fun is_even: Bool do return self % 2 == 0

	# Is `self` odd ?
	#
	#     assert not 13.is_even
	fun is_odd: Bool do return not is_even

	# Returns the `self` raised to the power of `e`.
	#
	#     assert 2 ** 3 == 8
	fun **(e: Int): Int
	do
		return self.to_f.pow(e.to_f).to_i
	end

	# The factorial of `self` (aka `self!`)
	#
	# Returns `1 * 2 * 3 * ... * self-1 * self`
	#
	#     assert 0.factorial == 1  # by convention for an empty product
	#     assert 1.factorial == 1
	#     assert 4.factorial == 24
	#     assert 9.factorial == 362880
	fun factorial: Int
	do
		assert self >= 0
		var res = 1
		var n = self
		while n > 0 do
			res = res * n
			n -= 1
		end
		return res
	end
end

redef class Float

	# Returns the non-negative square root of `self`.
	#
	#     assert 9.0.sqrt == 3.0
	#     #assert 3.0.sqrt == 1.732
	#     assert 1.0.sqrt == 1.0
	#     assert 0.0.sqrt == 0.0
	fun sqrt: Float is extern "kernel_Float_Float_sqrt_0"

	# Computes the cosine of `self` (expressed in radians).
	#
	#     #assert pi.cos == -1.0
	fun cos: Float is extern "kernel_Float_Float_cos_0"

	# Computes the sine of `self` (expressed in radians).
	#
	#     #assert pi.sin == 0.0
	fun sin: Float is extern "kernel_Float_Float_sin_0"

	# Computes the cosine of x (expressed in radians).
	#
	#     #assert 0.0.tan == 0.0
	fun tan: Float is extern "kernel_Float_Float_tan_0"

	# Computes the arc cosine of `self`.
	#
	#     #assert 0.0.acos == pi / 2.0
	fun acos: Float is extern "kernel_Float_Float_acos_0"

	# Computes the arc sine of `self`.
	#
	#     #assert 1.0.asin == pi / 2.0
	fun asin: Float is extern "kernel_Float_Float_asin_0"

	# Computes the arc tangent of `self`.
	#
	#     #assert 0.0.tan == 0.0
	fun atan: Float is extern "kernel_Float_Float_atan_0"

	# Returns the absolute value of `self`.
	#
	#     assert 12.0.abs == 12.0
	#     assert (-34.56).abs == 34.56
	#     assert -34.56.abs == -34.56
	fun abs: Float `{ return fabs(recv); `}

	# Returns `self` raised at `e` power.
	#
	#     #assert 2.0.pow(0.0) == 1.0
	#     #assert 2.0.pow(3.0) == 8.0
	#     #assert 0.0.pow(9.0) == 0.0
	fun pow(e: Float): Float is extern "kernel_Float_Float_pow_1"

	# Natural logarithm of `self`.
	#
	#     assert 0.0.log.is_inf == -1
	#     #assert 1.0.log == 0.0
	fun log: Float is extern "kernel_Float_Float_log_0"

	# Logarithm of `self` to base `base`.
	#
	#     assert 100.0.log_base(10.0) == 2.0
	#     assert 256.0.log_base(2.0) == 8.0
	fun log_base(base: Float): Float do return log/base.log

	# Returns *e* raised to `self`.
	fun exp: Float is extern "kernel_Float_Float_exp_0"

	#     assert 1.1.ceil == 2.0
	#     assert 1.9.ceil == 2.0
	#     assert 2.0.ceil == 2.0
	#     assert (-1.5).ceil == -1.0
	fun ceil: Float `{ return ceil(recv); `}

	#     assert 1.1.floor == 1.0
	#     assert 1.9.floor == 1.0
	#     assert 2.0.floor == 2.0
	#     assert (-1.5).floor == -2.0
	fun floor: Float `{ return floor(recv); `}

	# Rounds the value of a float to its nearest integer value
	#
	#     assert 1.67.round == 2.0
	#     assert 1.34.round == 1.0
	#     assert -1.34.round == -1.0
	#     assert -1.67.round == -2.0
	fun round: Float is extern "round"

	# Returns a random `Float` in `[0.0 .. self[`.
	fun rand: Float is extern "kernel_Float_Float_rand_0"

	# Returns the euclidean distance from `b`.
	fun hypot_with(b : Float): Float is extern "hypotf"

	# Returns true is self is not a number.
	fun is_nan: Bool is extern "isnan"

	# Is the float an infinite value
	# this function returns:
	#
	#  * 1 if self is positive infinity
	#  * -1 if self is negative infinity
	#  * 0 otherwise
	fun is_inf: Int do
		if is_inf_extern then
			if self < 0.0 then return -1
			return 1
		end
		return 0
	end

	private fun is_inf_extern: Bool is extern "isinf"

	# Linear interpolation between `a` and `b` using `self` as weight
	#
	# ~~~
	# assert  0.0.lerp(0.0, 128.0) == 0.0
	# assert  0.5.lerp(0.0, 128.0) == 64.0
	# assert  1.0.lerp(0.0, 128.0) == 128.0
	# assert -0.5.lerp(0.0, 128.0) == -64.0
	# ~~~
	fun lerp(a, b: Float): Float do return (1.0 - self) * a + self * b
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

redef class SequenceRead[E]
	# Optimized for large collections using `[]`
	redef fun rand
	do
		assert not is_empty
		return self[length.rand]
	end
end

redef class Sys
	init
	do
		srand
	end
end

# Computes the arc tangent given `x` and `y`.
#
#     assert atan2(-0.0, 1.0) == -0.0
#     assert atan2(0.0, 1.0) == 0.0
fun atan2(x: Float, y: Float): Float is extern "kernel_Any_Any_atan2_2"

# Approximate value of **pi**.
fun pi: Float is extern "kernel_Any_Any_pi_0"

# Initialize the pseudo-random generator with the given seed.
# The pseudo-random generator is used by the method `rand` and other to generate sequence of numbers.
# These sequences are repeatable by calling `srand_from` with a same seed value.
#
# ~~~~
# srand_from(0)
# var a = 10.rand
# var b = 100.rand
# srand_from(0)
# assert 10.rand == a
# assert 100.rand == b
# ~~~~
fun srand_from(x: Int) is extern "kernel_Any_Any_srand_from_1"

# Reinitialize the pseudo-random generator used by the method `rand` and other.
# This method is automatically invoked at the begin of the program, so usually, there is no need to manually invoke it.
# The only exception is in conjunction with `srand_from` to reset the pseudo-random generator.
fun srand is extern "kernel_Any_Any_srand_0"
