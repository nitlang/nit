# This file is part of NIT ( https://nitlanguage.org ).
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

# Most basic classes and methods.
#
# This module is the root of the module hierarchy.
# It provides a very minimal set of classes and services used as a
# foundation to define other classes and methods.
module kernel

import end # Mark this module is a top level one. (must be only one)

in "C" `{
	#include <stdlib.h>
	#include <errno.h>
`}

###############################################################################
# System Classes                                                              #
###############################################################################

# The root of the class hierarchy.
#
# Each other class implicitly specializes Object,
# therefore the services of Object are inherited by every other class and are usable
# on each value, including primitive types like integers (`Int`), strings (`String`) and arrays (`Array`).
#
# Note that `nullable Object`, not `Object`, is the root of the type hierarchy
# since the special value `null` is not considered as an instance of Object.
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

	# An internal hash code for the object based on its identity.
	#
	# Unless specific code, you should not use this method but
	# use `hash` instead.
	#
	# As its name hints it, the internal hash code, is used internally
	# to provide a hash value.
	# It is also used by the `inspect` method to loosely identify objects
	# and helps debugging.
	#
	# ~~~
	# var a = "Hello"
	# var b = a
	# assert a.object_id == b.object_id
	# ~~~
	#
	# The specific details of the internal hash code it let to the specific
	# engine. The rules are the following:
	#
	# * The `object_id` MUST be invariant for the whole life of the object.
	# * Two living instances of the same classes SHOULD NOT share the same `object_id`.
	# * Two instances of different classes MIGHT share the same `object_id`.
	# * The `object_id` of a garbage-collected instance MIGHT be reused by new instances.
	# * The `object_id` of an object MIGHT be non constant across different executions.
	#
	# For instance, the `nitc` compiler uses the address of the object in memory
	# as its `object_id`.
	#
	# TODO rename in something like `internal_hash_code`
	fun object_id: Int is intern

	# Return true if `self` and `other` have the same dynamic type.
	#
	# ~~~
	# assert 1.is_same_type(2)
	# assert "Hello".is_same_type("World")
	# assert not "Hello".is_same_type(2)
	# ~~~
	#
	# The method returns false if the dynamic type of `other` is a subtype of the dynamic type of `self`
	# (or the other way around).
	#
	# Unless specific code, you should not use this method because it is inconsistent
	# with the fact that a subclass can be used in lieu of a superclass.
	fun is_same_type(other: Object): Bool is intern

	# Return true if `self` and `other` are the same instance (i.e. same identity).
	#
	# ~~~
	# var a = new Buffer
	# var b = a
	# var c = new Buffer
	# assert a.is_same_instance(b)
	# assert not a.is_same_instance(c)
	# assert a == c # because both buffers are empty
	# ~~~
	#
	# Obviously, the identity of an object is preserved even if the object is mutated.
	#
	# ~~~
	# var x = [1]
	# var y = x
	# x.add 2
	# assert x.is_same_instance(y)
	# ~~~
	#
	# Unless specific code, you should use `==` instead of `is_same_instance` because
	# most of the time is it the semantic (and user-defined) comparison that make sense.
	#
	# Moreover, relying on `is_same_instance` on objects you do not control
	# might have unexpected effects when libraries reuse objects or intern them.
	fun is_same_instance(other: nullable Object): Bool is intern

	# Have `self` and `other` the same value?
	#
	# ~~~
	# assert 1 + 1 == 2
	# assert not 1 == "1"
	# assert 1.to_s == "1"
	# ~~~
	#
	# The exact meaning of *same value* is left to the subclasses.
	# Implicitly, the default implementation, is `is_same_instance`.
	#
	# The laws of `==` are the following:
	#
	# * reflexivity `a.is_same_instance(b) implies a == b`
	# * symmetry: `(a == b) == (b == a)`
	# * transitivity: `(a == b) and (b == c) implies (a == c)`
	#
	# `==` might not be constant on some objects overtime because of their evolution.
	#
	# ~~~
	# var a = [1]
	# var b = [1]
	# var c = [1,2]
	# assert a == b and not a == c
	# a.add 2
	# assert not a == b and a == c
	# ~~~
	#
	# Lastly, `==` is highly linked with `hash` and a specific redefinition of `==` should
	# usually be associated with a specific redefinition of `hash`.
	#
	# ENSURE `result implies self.hash == other.hash`
	fun ==(other: nullable Object): Bool do return self.is_same_instance(other)

	# Have `self` and `other` different values?
	#
	# `!=` is equivalent with `not ==`.
	fun !=(other: nullable Object): Bool do return not (self == other)

	# Display self on stdout (debug only).
	#
	# This method MUST not be used by programs, it is here for debugging
	# only and can be removed without any notice.
	#
	# TODO: rename to avoid blocking a good identifier like `output`.
	fun output
	do
		'<'.output
		object_id.output
		'>'.output
	end

	# Display class name on stdout (debug only).
	#
	# This method MUST not be used by programs, it is here for debugging
	# only and can be removed without any notice.
	#
	# TODO: rename to avoid blocking a good identifier like `output`.
	fun output_class_name is intern

	# The hash code of the object.
	#
	# The hash code is used in many data-structures and algorithms to identify objects that might be equal.
	# Therefore, the precise semantic of `hash` is highly linked with the semantic of `==`
	# and the only law of `hash` is that `a == b implies a.hash == b.hash`.
	#
	# ~~~
	# assert (1+1).hash == 2.hash
	# assert 1.to_s.hash == "1".hash
	# ~~~
	#
	# `hash` (like `==`) might not be constant on some objects over time because of their evolution.
	#
	# ~~~
	# var a = [1]
	# var b = [1]
	# var c = [1,2]
	# assert a.hash == b.hash
	# a.add 2
	# assert a.hash == c.hash
	# # There is a very high probability that `b.hash != c.hash`
	# ~~~
	#
	# A specific redefinition of `==` should usually be associated with a specific redefinition of `hash`.
	# Note that, unfortunately, a correct definition of `hash` that is lawful with `==` is sometime tricky
	# and a cause of bugs.
	#
	# Without redefinition, `hash` is based on the `object_id` of the instance.
	fun hash: Int do return object_id
end

# The main class of the program.
#
# `Sys` is a singleton class, its only instance is accessible from everywhere with `sys`.
#
# Because of this, methods that should be accessible from everywhere, like `print` or `exit`,
# are defined in `Sys`.
# Moreover, unless there is an ambiguity with `self`, the receiver of a call to these methods is implicitly `sys`.
# Basically it means that the two following instructions are equivalent.
#
# ~~~nit
# print "Hello World"
# sys.print "Hello World"
# ~~~
#
# ## Methods Implicitly Defined in Sys
#
# `Sys` is the class where are defined top-level methods,
# i.e. those defined outside of any class like in a procedural language.
# Basically it means that
#
# ~~~nitish
# redef class Sys
#    fun foo do print "hello"
# end
# ~~~
#
# is equivalent with
#
# ~~~nitish
# fun foo print "hello"
# ~~~
#
# As a corollary, in a top-level method, `self` (the current receiver) is always `sys`.
class Sys
	# The main method of a program.
	#
	# In a module, the instructions defined outside any classes or methods
	# (usually called the *main* of the module) is
	# an implicit definition of this `main` method.
	# Basically it means that the following program
	#
	# ~~~nit
	# print "Hello World"
	# ~~~
	#
	# is equivalent with
	#
	# ~~~nit
	# redef class Sys
	#    redef fun main do
	#       print "Hello World"
	#    end
	# end
	# ~~~
	fun main do end

	# The entry point for the execution of the whole program.
	#
	# When a program starts, the following implicit sequence of instructions is executed
	#
	# ~~~nitish
	# sys = new Sys
	# sys.run
	# ~~~
	#
	# Whereas the job of the `run` method is just to execute `main`.
	#
	# The only reason of the existence of `run` is to allow modules to refine it
	# and inject specific work before or after the main part.
	fun run do main

	# Number of the last error
	fun errno: Int `{ return errno; `}
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
	#     assert -1u8 == 0xFFu8
	#     assert -0u8 == 0x00u8
	redef fun - is intern
	redef fun -(i) is intern
	redef fun *(i) is intern
	redef fun /(i) is intern

	# Modulo of `self` with `i`.
	#
	# Finds the remainder of division of `self` by `i`.
	#
	#     assert 5u8 % 2u8		== 1u8
	#     assert 10u8 % 2u8		== 0u8
	fun %(i: Byte): Byte is intern

	redef fun zero do return 0.to_b
	redef fun value_of(val) do return val.to_b

	# `i` bits shift fo the left
	#
	#     assert 5u8 << 1    == 10u8
	fun <<(i: Int): Byte is intern `{ return self << i; `}

	# `i` bits shift fo the right
	#
	#     assert 5u8 >> 1    == 2u8
	fun >>(i: Int): Byte is intern `{ return self >> i; `}

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

	# Is `self` an ASCII whitespace ?
	fun is_whitespace: Bool do return self == 0x7Fu8 or self <= 0x20u8
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

	# `i` bits shift fo the left
	#
	#     assert 5 << 1    == 10
	fun <<(i: Int): Int is intern `{ return self << i; `}

	# `i` bits shift fo the right
	#
	#     assert 5 >> 1    == 2
	fun >>(i: Int): Int is intern `{ return self >> i; `}

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

	# The character which code point (unicode-wise) is `self`
	#
	#     assert 65.code_point == 'A'
	#     assert 10.code_point == '\n'
	#     assert 0x220B.code_point == '∋'
	fun code_point: Char is intern `{ return (uint32_t)self; `}

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
	#
	#     assert 5.to_c    == '5'
	#
	# If 10 <= `self` <= 36, return the corresponding letter [a..z].
	#
	#     assert 15.to_c   == 'f'
	fun to_c: Char
	do
		assert self >= 0 and self <= 36 # TODO plan for this
		if self < 10 then
			return (self + '0'.code_point).code_point
		else
			return (self - 10 + 'a'.code_point).code_point
		end
	end

	# The absolute value of self
	#
	#     assert (-10).abs   == 10
	#     assert 10.abs    == 10
	#     assert 0.abs     == 0
	fun abs: Int do return if self >= 0 then self else -self

	# Is `self` an ASCII whitespace ?
	fun is_whitespace: Bool do return self == 0x7F or self <= 0x20
end

# Native characters.
# Characters are denoted with simple quote.
# eg. `'a'` or `'\n'`.
universal Char
	super Discrete
	redef type OTHER: Char

	redef fun object_id is intern
	redef fun output `{
		if(self < 128){
			printf("%c", self);
		}else if(self < 2048){
			printf("%c%c", 0xC0 | ((0x7C0 & self) >> 6), 0x80 | (0x3F & self));
		}else if(self < 65536){
			printf("%c%c%c", 0xE0 | ((0xF000 & self) >> 12), 0x80 | ((0xFC0 & self) >> 6) ,0x80 | (0x3F & self));
		}else if(self < 2097152){
			printf("%c%c%c%c", 0xF0 | ((0x1C0000 & self) >> 18), 0x80 | ((0x3F000 & self) >> 12), 0x80 | ((0xFC0 & self) >> 6), 0x80 | (0x3F & self));
		}else{
			// Bad char
			printf("%c", self);
		}
	`}
	redef fun hash do return code_point
	redef fun ==(o) is intern
	redef fun !=(o) is intern

	redef fun <=(i) is intern
	redef fun <(i) is intern
	redef fun >=(i) is intern
	redef fun >(i) is intern

	redef fun successor(i) is intern
	redef fun predecessor(i) is intern

	# The `i`-th char after self (in code point)
	#
	# ~~~
	# assert 'A' + 5 == 'F'
	# ~~~
	#
	# Alias of `successor`.
	fun +(i: Int): Char do return successor(i)

	# The `i`-th char before self (in code point)
	#
	# ~~~
	# assert 'F' - 5 == 'A'
	# ~~~
	#
	# Alias of `predecessor`.
	fun -(i: Int): Char do return predecessor(i)

	redef fun distance(c)
	do
		var d = self.code_point - c.code_point
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
			return self.code_point - '0'.code_point
		else
			return self.to_lower.code_point - 'a'.code_point + 10
		end
	end

	# The unicode code point value of `self`
	#
	#     assert 'A'.code_point == 65
	#     assert '\n'.code_point == 10
	#     assert '∋'.code_point == 0x220B
	fun code_point: Int is intern `{ return (long)self; `}

	# Is `self` an ASCII character ?
	#
	#     assert 'x'.is_ascii
	#     assert not 'ま'.is_ascii
	fun is_ascii: Bool do return code_point <= 127

	# Return the lower case version of self.
	# If self is not a letter, then return self
	#
	#     assert 'A'.to_lower  == 'a'
	#     assert 'a'.to_lower  == 'a'
	#     assert '$'.to_lower  == '$'
	fun to_lower: Char
	do
		if is_upper then
			return (code_point + ('a'.distance('A'))).code_point
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
			return (code_point - ('a'.distance('A'))).code_point
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
	#     assert ' '.is_whitespace  == true # space
	#     assert ' '.is_whitespace  == true # non-breaking space
	#     assert '\t'.is_whitespace == true
	fun is_whitespace: Bool
	do
		var i = code_point
		return i <= 0x20 or i == 0x7F or i == 0xA0
	end
end

# Pointer classes are used to manipulate extern C structures.
extern class Pointer
	# C `NULL` pointer
	new nul `{ return NULL; `}

	# Is the address behind this Object at NULL?
	fun address_is_null: Bool `{ return self == NULL; `}

	# Free the memory pointed by this pointer
	fun free `{ free(self); `}

	# Use the address value
	redef fun hash `{ return (long)(intptr_t)self; `}

	# Is equal to any instance pointing to the same address
	redef fun ==(o) do return o isa Pointer and native_equals(o)
	private fun native_equals(o: Pointer): Bool `{ return self == o; `}
end

# Task with a `main` method to be implemented by subclasses
#
# This class is provided for compatibility between different parallelization systems.
# It can be used to run a fragment of code on a different thread and
# to register a reaction to UI events.
interface Task

	# Main method of this task
	fun main do end
end

# Is this program currently running in a Windows OS?
fun is_windows: Bool `{
#ifdef _WIN32
	return 1;
#else
	return 0;
#endif
`}
