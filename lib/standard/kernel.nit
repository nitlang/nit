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

# This module is the root of the standard module hierarchy.
package kernel

import end # Mark this module is a top level one. (must be only one)

###############################################################################
# System Classes                                                              #
###############################################################################

# The root of the class hierarchy.
# Each class implicitely specialize Object.
interface Object
	# The unique object identifier in the class
	meth object_id: Int is intern

	# Return true is `self' and `other' have the same dynamic type
	meth is_same_type(other: Object): Bool is intern

	# Have `self' and `other' the same value?
	##
	# Implicitely, the default implementation, is ==
	meth ==(other: nullable Object): Bool do return self is other

	# Have `self' and `other' different values?
	##
	# != is equivament with "not =".
	meth !=(other: nullable Object): Bool do return not (self == other)

	# Display self on stdout (debug only).
	meth output
	do
		'<'.output
		object_id.output
		'>'.output
	end

	protected meth exit(exit_value: Int) is intern # Quit the program.
	protected meth sys: Sys is intern # The global sys object
end

# The main class of the program.
class Sys
	# Instructions outside classes implicetely redefine this method.
	meth main do end
end

###############################################################################
# Abstract Classes                                                            #
###############################################################################

# The ancestor of class where objects are in a total order.
# In order to work, the method '<' has to be redefined.
interface Comparable
	type OTHER: Comparable

	# Is `self' lesser than `other'
	meth <(other: OTHER): Bool is abstract 

	# not `other' < `self'
	meth <=(other: OTHER): Bool do return not other < self

	# not `self' < `other' 
	meth >=(other: OTHER): Bool do return not self < other

	# `other' < `self'
	meth >(other: OTHER): Bool do return other < self

	# -1 if <, +1 if > and 0 otherwise
	meth <=>(other: OTHER): Int
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
	meth is_between(c: OTHER, d: OTHER): Bool
	do
		return c <= self and self <= d
	end

	# The maximum between `self' and `other' (prefers `self' if equals).
	meth max(other: OTHER): OTHER
	do
		if self < other then
			return other
		else
			return self
		end
	end

	# The minimum between `self' and `c' (prefer `self' if equals)
	meth min(c: OTHER): OTHER
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
special Comparable

	redef type OTHER: Discrete

	# The next element.
	meth succ: OTHER do return self + 1

	# The previous element.
	meth prec: OTHER do return self - 1

	# The `i' th successor element.
	meth +(i: Int): OTHER is abstract

	# The `i' th previous element.
	meth -(i: Int): OTHER is abstract

	# The distance between self and d.
	# 10.distance(15)	# --> 5
	# 'Z'.distance('A')	# --> 25
	meth distance(d: OTHER): Int
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

# Native booleans.
# `true' and `false' are the only instances.
# Boolean are manipulated trought three special operators:
#	 `and', `or', `not'.
# Booleans are mainly used by conditional statement and loops.
universal Bool
	redef meth object_id is intern
	redef meth ==(b) is intern
	redef meth !=(b) is intern
	redef meth output is intern
end

# Native floating point numbers.
# Corresponds to C float.
universal Float
	redef meth object_id is intern
	redef meth output is intern

	meth <=(i: Float): Bool is intern
	meth <(i: Float): Bool is intern
	meth >=(i: Float): Bool is intern
	meth >(i: Float): Bool is intern
	meth +(i: Float): Float is intern
	meth -: Float is intern
	meth -(i: Float): Float is intern
	meth *(i: Float): Float is intern
	meth /(i: Float): Float is intern
	
	# The integer part of `self'.
	meth to_i: Int is intern
end

# Native integer numbers.
# Correspond to C int.
universal Int
special Discrete
	redef type OTHER: Int

	redef meth object_id is intern
	redef meth ==(i) is intern
	redef meth !=(i) is intern
	redef meth output is intern

	redef meth <=(i) is intern
	redef meth <(i) is intern
	redef meth >=(i) is intern
	redef meth >(i) is intern
	redef meth +(i) is intern
	meth -: Int is intern
	redef meth -(i) is intern
	meth *(i: Int): Int is intern
	meth /(i: Int): Int is intern
	meth %(i: Int): Int is intern   
	meth lshift(i: Int): Int is intern
	meth rshift(i: Int): Int is intern   

	# The float equivalent of `self'
	meth to_f: Float is intern

	redef meth succ is intern
	redef meth prec is intern
	redef meth distance(i)
	do
		var d = self - i
		if d >= 0 then
			return d
		else
			return -d
		end
	end
	
	redef meth <=>(other)
	do
		if self < other then
			return -1
		else if other < self then
			return 1
		else
			return 0
		end
	end

	redef meth is_between(c, d)
	do
		if self < c or d < self then 
			return false
		else 
			return true
		end
	end

	redef meth max(other)
	do
		if self < other then
			return other
		else
			return self
		end
	end

	redef meth min(c)
	do
		if c < self then
			return c
		else
			return self
		end
	end

	# The character whose ASCII value is `self'.
	meth ascii: Char is intern

	# Number of digits of an integer in base `b' plus one if negative)
	meth digit_count(b: Int): Int
	do
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

	# Return the corresponding digit character
	# If 0 <= `self' <= 9, return the corresponding character.
	# If 10 <= `self' <= 36, return the corresponding letter [a..z].
	meth to_c: Char
	do
		assert self >= 0 and self <= 36 # TODO plan for this
		if self < 10 then
			return (self + '0'.ascii).ascii
		else
			return (self + ('a'.ascii - 10)).ascii
		end
	end
end

# Native characters.
# Characters are denoted with simple quote.
# eg. 'a' or '\n'.
universal Char
special Discrete
	redef type OTHER: Char

	redef meth object_id is intern
	redef meth ==(o) is intern
	redef meth !=(o) is intern
	redef meth output is intern

	redef meth <=(i) is intern
	redef meth <(i) is intern
	redef meth >=(i) is intern
	redef meth >(i) is intern

	redef meth succ is intern
	redef meth prec is intern

	redef meth distance(c)
	do
		var d = self.ascii - c.ascii
		if d >= 0 then
			return d
		else
			return -d
		end
	end

	# If `self' is a digit then return this digit.
	meth to_i: Int
	do

		if self == '-' then
			return -1
		else if self >= '0' and self <= '9' then
			return self.ascii - '0'.ascii
		else
			return self.to_lower.ascii - ('a'.ascii + 10)
		end
	end

	# the ascii value of self
	meth ascii: Int is intern

	redef meth +(i) is intern
	redef meth -(i) is intern

	# Char to lower case
	meth to_lower : Char
	do
		if self >= 'A' and self <= 'Z' then
			return (ascii + ('a'.distance('A'))).ascii
		else
			return self
		end
	end

	# Char to upper case
	meth to_upper : Char
	do
		if self >= 'a' and self <= 'z' then
			return (ascii - ('a'.distance('A'))).ascii
		else
			return self
		end
	end
end

# Pointer classes are used to manipulate extern C structures.
universal Pointer
end
