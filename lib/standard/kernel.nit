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
package kernel

import end # Mark this module is a top level one. (must be only one)

###############################################################################
# System Classes                                                              #
###############################################################################

# The root of the class hierarchy.
# Each class implicitly specialize Object.
#
# Currently, Object is also used to collect all top-level methods.
interface Object
	# The unique object identifier in the class.
	# Unless specific code, you should not use this method.
	# The identifier is used internally to provide a hash value.
	fun object_id: Int is intern

	# Return true if `self' and `other' have the same dynamic type.
	# Unless specific code, you should not use this method.
	fun is_same_type(other: Object): Bool is intern

	# Have `self' and `other' the same value?
	##
	# The exact meaning of "same value" is let to the subclasses.
	# Implicitly, the default implementation, is `is'
	fun ==(other: nullable Object): Bool do return self is other

	# Have `self' and `other' different values?
	##
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

	# Quit the program with a specific return code
	protected fun exit(exit_value: Int) is intern

	# Return the global sys object, the only instance of the `Sys' class.
	protected fun sys: Sys is intern
end

# The main class of the program.
# `Sys' is a singleton class, its only instance is `sys' defined in `Object'.
# `sys' is used to invoke methods on the program on the system.
class Sys
	# Instructions outside classes implicitly redefine this method.
	fun main do end
end

###############################################################################
# Abstract Classes                                                            #
###############################################################################

# The ancestor of class where objects are in a total order.
# In order to work, the method '<' has to be redefined.
interface Comparable
	# What `self' can be compared to?
	type OTHER: Comparable

	# Is `self' lesser than `other'?
	fun <(other: OTHER): Bool is abstract 

	# not `other' < `self'
	# Note, the implementation must ensure that: (x<=y) == (x<y or x==y)
	fun <=(other: OTHER): Bool do return not other < self

	# not `self' < `other' 
	# Note, the implementation must ensure that: (x>=y) == (x>y or x==y)
	fun >=(other: OTHER): Bool do return not self < other

	# `other' < `self'
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

	# The maximum between `self' and `other' (prefers `self' if equals).
	fun max(other: OTHER): OTHER
	do
		if self < other then
			return other
		else
			return self
		end
	end

	# The minimum between `self' and `c' (prefer `self' if equals)
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
	fun succ: OTHER do return self + 1

	# The previous element.
	fun prec: OTHER do return self - 1

	# The `i'-th successor element.
	fun +(i: Int): OTHER is abstract

	# The `i'-th previous element.
	fun -(i: Int): OTHER is abstract

	# The distance between self and d.
	# 10.distance(15)	# --> 5
	# 'Z'.distance('A')	# --> 25
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
			cursor = cursor.succ
			nb += 1
		end
		return nb
	end
end

###############################################################################
# Native classes                                                              #
###############################################################################

# Native Booleans.
# `true' and `false' are the only instances.
# Boolean are manipulated trough three special operators:
#	 `and', `or', `not'.
# Booleans are mainly used by conditional statement and loops.
universal Bool
	redef fun object_id is intern
	redef fun ==(b) is intern
	redef fun !=(b) is intern
	redef fun output is intern
end

# Native floating point numbers.
# Corresponds to C float.
universal Float
	redef fun object_id is intern
	redef fun output is intern

	fun <=(i: Float): Bool is intern
	fun <(i: Float): Bool is intern
	fun >=(i: Float): Bool is intern
	fun >(i: Float): Bool is intern
	fun +(i: Float): Float is intern
	fun -: Float is intern
	fun -(i: Float): Float is intern
	fun *(i: Float): Float is intern
	fun /(i: Float): Float is intern
	
	# The integer part of `self'.
	fun to_i: Int is intern
end

# Native integer numbers.
# Correspond to C int.
universal Int
	super Discrete
	redef type OTHER: Int

	redef fun object_id is intern
	redef fun ==(i) is intern
	redef fun !=(i) is intern
	redef fun output is intern

	redef fun <=(i) is intern
	redef fun <(i) is intern
	redef fun >=(i) is intern
	redef fun >(i) is intern
	redef fun +(i) is intern
	fun -: Int is intern
	redef fun -(i) is intern
	fun *(i: Int): Int is intern
	fun /(i: Int): Int is intern
	fun %(i: Int): Int is intern   
	fun lshift(i: Int): Int is intern
	fun rshift(i: Int): Int is intern   

	# The float equivalent of `self'
	fun to_f: Float is intern

	redef fun succ is intern
	redef fun prec is intern
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

	# The character whose ASCII value is `self'.
	fun ascii: Char is intern

	# Number of digits of an integer in base `b' (plus one if negative)
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
			n = n / b  	# euclidian division /
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
	# If 0 <= `self' <= 9, return the corresponding character.
	# If 10 <= `self' <= 36, return the corresponding letter [a..z].
	fun to_c: Char
	do
		assert self >= 0 and self <= 36 # TODO plan for this
		if self < 10 then
			return (self + '0'.ascii).ascii
		else
			return (self + ('a'.ascii - 10)).ascii
		end
	end

	# Execute 'each' for each integer in [self..last]
	fun enumerate_to(last: Int)
		!each(i: Int)
	do
		var cur = self
		while cur <= last do
			each(cur)
			cur += 1
		end
	end

	# Execute 'each' for each integer in [self..after[
	fun enumerate_before(after: Int)
		!each(i: Int)
	do
		var cur = self
		while cur < after do
			each(cur)
			cur += 1
		end
	end

	# The absolute value of self
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
# eg. 'a' or '\n'.
universal Char
	super Discrete
	redef type OTHER: Char

	redef fun object_id is intern
	redef fun ==(o) is intern
	redef fun !=(o) is intern
	redef fun output is intern

	redef fun <=(i) is intern
	redef fun <(i) is intern
	redef fun >=(i) is intern
	redef fun >(i) is intern

	redef fun succ is intern
	redef fun prec is intern

	redef fun distance(c)
	do
		var d = self.ascii - c.ascii
		if d >= 0 then
			return d
		else
			return -d
		end
	end

	# If `self' is a digit then return this digit else return -1.
	fun to_i: Int
	do

		if self == '-' then
			return -1
		else if is_digit then
			return self.ascii - '0'.ascii
		else
			return self.to_lower.ascii - ('a'.ascii + 10)
		end
	end

	# the ascii value of self
	fun ascii: Int is intern

	redef fun +(i) is intern
	redef fun -(i) is intern

	# Return the lower case version of self.
	# If self is not a letter, then return self
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
	fun to_upper: Char
	do
		if is_lower then
			return (ascii - ('a'.distance('A'))).ascii
		else
			return self
		end
	end
	
	# Is self a digit? (from '0' to '9')
	fun is_digit : Bool
	do
		return self >= '0' and self <= '9'
	end
	
	# Is self a lower case letter? (from 'a' to 'z')
	fun is_lower : Bool
	do
		return self >= 'a' and self <= 'z'
	end
	
	# Is self a upper case letter? (from 'A' to 'Z')
	fun is_upper : Bool
	do
		return self >= 'A' and self <= 'Z'
	end
	
	# Is self a letter? (from 'A' to 'Z' and 'a' to 'z')
	fun is_letter : Bool
	do
		return is_lower or is_upper
	end
end

# Pointer classes are used to manipulate extern C structures.
extern Pointer
end
