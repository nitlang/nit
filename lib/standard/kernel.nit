# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
# Copyright 2006-2008 Floréal Morandat <morandat@lirmm.fr>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Most minimal classes and methods.
# This module is the root of the standard module hierarchy.
module kernel

import end # Mark this module is a top level one. (must be only one)

###############################################################################
# System Classes                                                              #
###############################################################################

# The root of the class hierarchy.
# Each class implicitly specialize Object.
#
# Currently, Object is also used to collect all top-level methods.
interface Object
	# Type of this instance, automatically specialized in every class
	#
	# A common use case of the virtual type `SELF` is to type an attribute and
	# store another instance of the same type as `self`. It can also be used as as
	# return type to a method producing a copy of `self` or returning an instance
	# expected to be the exact same type as self.
	#
	# This virtual type must be used with caution as it can hinder specialization.
	# In fact, it imposes strict restrictions on all sub-classes and their usage.
	# For example, using `SELF` as a return type of a method `foo`
	# forces all subclasses to ensure that `foo` returns the correct and updated
	# type.
	# A dangerous usage take the form of a method typed by `SELF` which creates
	# and returns a new instance.
	# If not correctly specialized, this method would break when invoked on a
	# sub-class.
	#
	# A general rule for safe usage of `SELF` is to ensure that inputs typed
	# `SELF` are stored in attributes typed `SELF` and returned by methods typed
	# `SELF`, pretty much the same things as you would do with parameter types.
	type SELF: Object

	# The unique object identifier in the class.
	# Unless specific code, you should not use this method.
	# The identifier is used internally to provide a hash value.
	fun object_id: Int is intern

	# Return true if `self` and `other` have the same dynamic type.
	# Unless specific code, you should not use this method.
	fun is_same_type(other: Object): Bool is intern

	# Return true if `self` and `other` are the same instance.
	# Unless specific code, you should use `==` instead.
	fun is_same_instance(other: nullable Object): Bool is intern

	# Have `self` and `other` the same value?
	#
	# The exact meaning of "same value" is left to the subclasses.
	# Implicitly, the default implementation, is `is_same_instance`
	fun ==(other: nullable Object): Bool do return self.is_same_instance(other)

	# Have `self` and `other` different values?
	#
	# != is equivalent with "not ==".
	fun !=(other: nullable Object): Bool do return not (self == other)

	# Display self on stdout (debug only).
	# This method MUST not be used by programs, it is here for debugging
	# only and can be removed without any notice
	fun output
	do
		'<'.output
		object_id.output
		'>'.output
	end

	# Display class name on stdout (debug only).
	# This method MUST not be used by programs, it is here for debugging
	# only and can be removed without any notice
	fun output_class_name is intern

	# The hash code of the object.
	# Assuming that a == b -> a.hash == b.hash
	#
	# Without redefinition, it is based on the `object_id` of the instance.
	fun hash: Int do return object_id / 8
end

# The main class of the program.
# `Sys` is a singleton class, its only instance is `sys` defined in `Object`.
# `sys` is used to invoke methods on the program on the system.
class Sys
	# Instructions outside classes implicitly redefine this method.
	fun main do end

	# The entry point for the execution of the whole program.
	# Its job is to call `main` but some modules may want to refine it
	# and inject specific work before or after the main part.
	fun run do main

	# Number of the last error
	fun errno: Int is extern "sys_errno"
end

# Quit the program with a specific return code
fun exit(exit_value: Int) is intern

# Return the global sys object, the only instance of the `Sys` class.
fun sys: Sys is intern


###############################################################################
# Abstract Classes                                                            #
###############################################################################

# The ancestor of class where objects are in a total order.
# In order to work, the method '<' has to be redefined.
interface Comparable
	# What `self` can be compared to?
	type OTHER: Comparable

	# Is `self` lesser than `other`?
	fun <(other: OTHER): Bool is abstract

	# not `other` < `self`
	# Note, the implementation must ensure that: `(x<=y) == (x<y or x==y)`
	fun <=(other: OTHER): Bool do return not other < self

	# not `self` < `other`
	# Note, the implementation must ensure that: `(x>=y) == (x>y or x==y)`
	fun >=(other: OTHER): Bool do return not self < other

	# `other` < `self`
	fun >(other: OTHER): Bool do return other < self

	# -1 if <, +1 if > and 0 otherwise
	# Note, the implementation must ensure that: (x<=>y == 0) == (x==y)
	fun <=>(other: OTHER): Int
	do
		if self < other then
			return -1
		else if other < self then
			return 1
		else
			return 0
		end
	end

	# c <= self <= d
	fun is_between(c: OTHER, d: OTHER): Bool
	do
		return c <= self and self <= d
	end

	# The maximum between `self` and `other` (prefers `self` if equals).
	fun max(other: OTHER): OTHER
	do
		if self < other then
			return other
		else
			return self
		end
	end

	# The minimum between `self` and `c` (prefer `self` if equals)
	fun min(c: OTHER): OTHER
	do
		if c < self then
			return c
		else
			return self
		end
	end
end

# Discrete total orders.
interface Discrete
	super Comparable

	redef type OTHER: Discrete

	# The next element.
	fun successor(i: Int): OTHER is abstract

	# The previous element.
	fun predecessor(i: Int): OTHER is abstract

	# The distance between self and d.
	#
	#     assert 10.distance(15)	     ==  5
	#     assert 'Z'.distance('A')	     ==  25
	fun distance(d: OTHER): Int
	do
		var cursor: OTHER
		var stop: OTHER
		if self < d then
			cursor = self
			stop = d
		else if self > d then
			cursor = d
			stop = self
		else
			return 0
		end

		var nb = 0
		while cursor < stop do
			cursor = cursor.successor(1)
			nb += 1
		end
		return nb
	end
end

# Something that can be cloned
#
# This interface introduces the `clone` method used to duplicate an instance
# Its specific semantic is left to the subclasses.
interface Cloneable
	# Duplicate `self`
	#
	# The specific semantic of this method is left to the subclasses;
	# Especially, if (and how) attributes are cloned (depth vs. shallow).
	#
	# As a rule of thumb, the principle of least astonishment should
	# be used to guide the semantic.
	#
	# Note that as the returned clone depends on the semantic,
	# the `==` method, if redefined, should ensure the equality
	# between an object and its clone.
	fun clone: SELF is abstract
end

# A numeric value supporting mathematical operations
interface Numeric
	super Comparable

	redef type OTHER: Numeric

	# Addition of `self` with `i`
	fun +(i: OTHER): OTHER is abstract

	# Substraction of `i` from `self`
	fun -(i: OTHER): OTHER is abstract

	# Inverse of `self`
	fun -: OTHER is abstract

	# Multiplication of `self` with `i`
	fun *(i: OTHER): OTHER is abstract

	# Division of `self` with `i`
	fun /(i: OTHER): OTHER is abstract

	# The integer part of `self`.
	#
	#     assert (0.0).to_i      == 0
	#     assert (0.9).to_i      == 0
	#     assert (-0.9).to_i     == 0
	#     assert (9.9).to_i      == 9
	#     assert (-9.9).to_i     == -9
	fun to_i: Int is abstract

	# The float equivalent of `self`
	#
	#     assert 5.to_f         == 5.0
	#     assert 5.to_f         != 5 # Float and Int are not equals
	fun to_f: Float is abstract

	# The byte equivalent of `self`
	#
	#     assert (-1).to_b == 0xFF.to_b
	#     assert (1.9).to_b == 1.to_b
	fun to_b: Byte is abstract

	# Is this the value of zero in its domain?
	fun is_zero: Bool do return self == zero

	# The value of zero in the domain of `self`
	fun zero: OTHER is abstract

	# The value of `val` in the domain of `self`
	#
	#     assert 1.0.value_of(2) == 2.0
	#     assert 1.0.value_of(2.0) == 2.0
	#     assert 1.value_of(2) == 2
	#     assert 1.value_of(2.0) == 2
	fun value_of(val: Numeric): OTHER is abstract
end

###############################################################################
# Native classes                                                              #
###############################################################################

# Native Booleans.
# `true` and `false` are the only instances.
#
# Boolean are manipulated trough three special operators:
# `and`, `or`, `not`.
#
# Booleans are mainly used by conditional statement and loops.
universal Bool
	redef fun object_id is intern
	redef fun ==(b) is intern
	redef fun !=(b) is intern
	redef fun output is intern
	redef fun hash do return to_i

	# 1 if true and 0 if false
	fun to_i: Int
	do
		if self then
			return 1
		else
			return 0
		end
	end
end

# Native floating point numbers.
# Corresponds to C float.
universal Float
	super Numeric

	redef type OTHER: Float

	redef fun object_id is intern
	redef fun ==(i) is intern
	redef fun !=(i) is intern
	redef fun output is intern

	redef fun <=(i) is intern
	redef fun <(i) is intern
	redef fun >=(i) is intern
	redef fun >(i) is intern

	redef fun +(i) is intern
	redef fun - is intern
	redef fun -(i) is intern
	redef fun *(i) is intern
	redef fun /(i) is intern

	redef fun to_i is intern
	redef fun to_f do return self
	redef fun to_b is intern

	redef fun zero do return 0.0
	redef fun value_of(val) do return val.to_f

	redef fun <=>(other)
	do
		if self < other then
			return -1
		else if other < self then
			return 1
		else
			return 0
		end
	end

	redef fun is_between(c, d)
	do
		if self < c or d < self then
			return false
		else
			return true
		end
	end

	# Compare float numbers with a given precision.
	#
	# Because of the loss of precision in floating numbers,
	# the `==` method is often not the best way to compare them.
	#
	# ~~~
	# assert 0.01.is_approx(0.02, 0.1)   == true
	# assert 0.01.is_approx(0.02, 0.001) == false
	# ~~~
	fun is_approx(other, precision: Float): Bool
	do
		assert precision >= 0.0
		return self <= other + precision and self >= other - precision
	end

	redef fun max(other)
	do
		if self < other then
			return other
		else
			return self
		end
	end

	redef fun min(c)
	do
		if c < self then
			return c
		else
			return self
		end
	end
end

# Native bytes.
# Same as a C `unsigned char`
universal Byte
	super Discrete
	super Numeric

	redef type OTHER: Byte

	redef fun successor(i) do return self + i.to_b
	redef fun predecessor(i) do return self - i.to_b

	redef fun object_id is intern
	redef fun hash do return self.to_i
	redef fun ==(i) is intern
	redef fun !=(i) is intern
	redef fun output is intern

	redef fun <=(i) is intern
	redef fun <(i) is intern
	redef fun >=(i) is intern
	redef fun >(i) is intern
	redef fun +(i) is intern

	# On an Byte, unary minus will return `(256 - self) % 256`
	#
	#     assert -(1.to_b) == 0xFF.to_b
	#     assert -(0.to_b) == 0x00.to_b
	redef fun - is intern
	redef fun -(i) is intern
	redef fun *(i) is intern
	redef fun /(i) is intern

	# Modulo of `self` with `i`.
	#
	# Finds the remainder of division of `self` by `i`.
	#
	#     assert 5.to_b % 2.to_b		== 1.to_b
	#     assert 10.to_b % 2.to_b		== 0.to_b
	fun %(i: Byte): Byte is intern

	redef fun zero do return 0.to_b
	redef fun value_of(val) do return val.to_b

	# `i` bits shift fo the left (aka <<)
	#
	#     assert 5.to_b.lshift(1)    == 10.to_b
	fun lshift(i: Int): Byte is intern

	# alias of `lshift`
	fun <<(i: Int): Byte do return lshift(i)

	# `i` bits shift fo the right (aka >>)
	#
	#     assert 5.to_b.rshift(1)    == 2.to_b
	fun rshift(i: Int): Byte is intern

	# alias of `rshift`
	fun >>(i: Int): Byte do return rshift(i)

	redef fun to_i is intern
	redef fun to_f is intern
	redef fun to_b do return self

	redef fun distance(i) do return (self - i).to_i

	redef fun <=>(other)
	do
		if self < other then
			return -1
		else if other < self then
			return 1
		else
			return 0
		end
	end

	redef fun is_between(c, d)
	do
		if self < c or d < self then
			return false
		else
			return true
		end
	end

	redef fun max(other)
	do
		if self < other then
			return other
		else
			return self
		end
	end

	redef fun min(c)
	do
		if c < self then
			return c
		else
			return self
		end
	end
end

# Native integer numbers.
# Correspond to C int.
universal Int
	super Discrete
	super Numeric

	redef type OTHER: Int

	redef fun successor(i) do return self + i
	redef fun predecessor(i) do return self - i

	redef fun object_id is intern
	redef fun hash do return self
	redef fun ==(i) is intern
	redef fun !=(i) is intern
	redef fun output is intern

	redef fun <=(i) is intern
	redef fun <(i) is intern
	redef fun >=(i) is intern
	redef fun >(i) is intern
	redef fun +(i) is intern

	redef fun - is intern
	redef fun -(i) is intern
	redef fun *(i) is intern
	redef fun /(i) is intern

	# Modulo of `self` with `i`.
	#
	# Finds the remainder of division of `self` by `i`.
	#
	#     assert 5 % 2			== 1
	#     assert 10 % 2			== 0
	fun %(i: Int): Int is intern

	redef fun zero do return 0
	redef fun value_of(val) do return val.to_i

	# `i` bits shift fo the left (aka <<)
	#
	#     assert 5.lshift(1)    == 10
	fun lshift(i: Int): Int is intern

	# alias of `lshift`
	fun <<(i: Int): Int do return lshift(i)

	# `i` bits shift fo the right (aka >>)
	#
	#     assert 5.rshift(1)    == 2
	fun rshift(i: Int): Int is intern

	# alias of `rshift`
	fun >>(i: Int): Int do return rshift(i)

	redef fun to_i do return self
	redef fun to_f is intern
	redef fun to_b is intern

	redef fun distance(i)
	do
		var d = self - i
		if d >= 0 then
			return d
		else
			return -d
		end
	end

	redef fun <=>(other)
	do
		if self < other then
			return -1
		else if other < self then
			return 1
		else
			return 0
		end
	end

	redef fun is_between(c, d)
	do
		if self < c or d < self then
			return false
		else
			return true
		end
	end

	redef fun max(other)
	do
		if self < other then
			return other
		else
			return self
		end
	end

	redef fun min(c)
	do
		if c < self then
			return c
		else
			return self
		end
	end

	# The character whose ASCII value is `self`.
	#
	#     assert 65.ascii   == 'A'
	#     assert 10.ascii   == '\n'
	fun ascii: Char is intern

	# Number of digits of an integer in base `b` (plus one if negative)
	#
	#     assert 123.digit_count(10) == 3
	#     assert 123.digit_count(2) == 7 # 1111011 in binary
	fun digit_count(b: Int): Int
	do
		if b == 10 then return digit_count_base_10
		var d: Int # number of digits
		var n: Int # current number
		# Sign
		if self < 0 then
			d = 1
			n = - self
		else if self == 0 then
			return 1
		else
			d = 0
			n = self
		end
		# count digits
		while n > 0 do
			d += 1
			n = n / b	# euclidian division /
		end
		return d
	end

	# Optimized version for base 10
	fun digit_count_base_10: Int
	do
		var val: Int
		var result: Int
		if self < 0 then
			result = 2
			val = -self
		else
			result = 1
			val = self
		end
		loop
			if val < 10 then return result
			if val < 100 then return result+1
			if val < 1000 then return result+2
			if val < 10000 then return result+3
			val = val / 10000
			result += 4
		end
	end

	# Return the corresponding digit character
	# If 0 <= `self` <= 9, return the corresponding character.
	#     assert 5.to_c    == '5'
	# If 10 <= `self` <= 36, return the corresponding letter [a..z].
	#     assert 15.to_c   == 'f'
	fun to_c: Char
	do
		assert self >= 0 and self <= 36 # TODO plan for this
		if self < 10 then
			return (self + '0'.ascii).ascii
		else
			return (self + ('a'.ascii - 10)).ascii
		end
	end

	# The absolute value of self
	#
	#     assert (-10).abs   == 10
	#     assert 10.abs    == 10
	#     assert 0.abs     == 0
	fun abs: Int
	do
	    if self >= 0
	    then
	        return self
	    else
	        return -1 * self
	    end
	end
end

# Native characters.
# Characters are denoted with simple quote.
# eg. `'a'` or `'\n'`.
universal Char
	super Discrete
	redef type OTHER: Char

	redef fun object_id is intern
	redef fun hash do return ascii
	redef fun ==(o) is intern
	redef fun !=(o) is intern
	redef fun output is intern

	redef fun <=(i) is intern
	redef fun <(i) is intern
	redef fun >=(i) is intern
	redef fun >(i) is intern

	redef fun successor(i) is intern
	redef fun predecessor(i) is intern

	redef fun distance(c)
	do
		var d = self.ascii - c.ascii
		if d >= 0 then
			return d
		else
			return -d
		end
	end

	# If `self` is a digit then return this digit else return -1.
	#
	#     assert '5'.to_i    == 5
	fun to_i: Int
	do

		if self == '-' then
			return -1
		else if is_digit then
			return self.ascii - '0'.ascii
		else
			return self.to_lower.ascii - 'a'.ascii + 10
		end
	end

	# the ascii value of self
	#
	#     assert 'a'.ascii    == 97
	#     assert '\n'.ascii   == 10
	fun ascii: Int is intern

	# Return the lower case version of self.
	# If self is not a letter, then return self
	#
	#     assert 'A'.to_lower  == 'a'
	#     assert 'a'.to_lower  == 'a'
	#     assert '$'.to_lower  == '$'
	fun to_lower: Char
	do
		if is_upper then
			return (ascii + ('a'.distance('A'))).ascii
		else
			return self
		end
	end

	# Return the upper case version of self.
	# If self is not a letter, then return self
	#
	#     assert 'a'.to_upper  == 'A'
	#     assert 'A'.to_upper  == 'A'
	#     assert '$'.to_upper  == '$'
	fun to_upper: Char
	do
		if is_lower then
			return (ascii - ('a'.distance('A'))).ascii
		else
			return self
		end
	end

	# Is self a digit? (from '0' to '9')
	#
	#     assert '0'.is_digit   == true
	#     assert '9'.is_digit   == true
	#     assert 'a'.is_digit   == false
	fun is_digit : Bool
	do
		return self >= '0' and self <= '9'
	end

	# Is self a lower case letter? (from 'a' to 'z')
	#
	#     assert 'a'.is_lower   == true
	#     assert 'z'.is_lower   == true
	#     assert 'A'.is_lower   == false
	#     assert '$'.is_lower   == false
	fun is_lower : Bool
	do
		return self >= 'a' and self <= 'z'
	end

	# Is self a upper case letter? (from 'A' to 'Z')
	#
	#     assert 'A'.is_upper   == true
	#     assert 'A'.is_upper   == true
	#     assert 'z'.is_upper   == false
	#     assert '$'.is_upper   == false
	fun is_upper : Bool
	do
		return self >= 'A' and self <= 'Z'
	end

	# Is self a letter? (from 'A' to 'Z' and 'a' to 'z')
	#
	#     assert 'A'.is_letter  == true
	#     assert 'A'.is_letter  == true
	#     assert 'z'.is_letter  == true
	#     assert '$'.is_letter  == false
	fun is_letter : Bool
	do
		return is_lower or is_upper
	end

	# Is self a whitespace character?
	#
	# These correspond to the "Other" and "Separator" groups of the Unicode.
	#
	# In the ASCII encoding, this is those <= to space (0x20) plus delete (0x7F).
	#
	#     assert 'A'.is_whitespace  == false
	#     assert ','.is_whitespace  == false
	#     assert ' '.is_whitespace  == true
	#     assert '\t'.is_whitespace == true
	fun is_whitespace: Bool
	do
		var i = ascii
		return i <= 0x20 or i == 0x7F
	end
end

# Pointer classes are used to manipulate extern C structures.
extern class Pointer
	# Is the address behind this Object at NULL?
	fun address_is_null: Bool is extern "address_is_null"

	# Free the memory pointed by this pointer
	fun free is extern "free"
end
