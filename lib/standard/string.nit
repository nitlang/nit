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

# This module is about character strings.
package string

intrude import array

###############################################################################
# String                                                                      #
###############################################################################

abstract class AbstractString
special AbstractArrayRead[Char]
	readable private attr _items: NativeString

	redef meth [](index) do return _items[index]

	# Create a substring.
	#
	# "abcd".substring(1, 2) 	# --> "bc"
	# "abcd".substring(-1, 2)	# --> "a"
	# "abcd".substring(1, 0)     # --> ""
	# "abcd".substring(2, 5)     # --> "cd"
	meth substring(from: Int, count: Int): String
	do
		assert count >= 0
		count += from
		if from < 0 then from = 0
		if count > length then count = length
		if from < count then
			var r = new Buffer.with_capacity(count - from)
			while from < count do
				r.push(_items[from])
				from += 1
			end
			return r.to_s
		else
			return ""
		end
	end

	# Create a substring with the string beginning at the 'from' position
	#
	# "abcd".substring(1) 	# --> "bcd"
	# "abcd".substring(-1)	# --> "abcd"
	# "abcd".substring(2)     # --> "cd"
	meth substring_from(from: Int): String
	do
		assert from < length
		return substring(from, length - from)
	end

	# is this string a substring of the 'of' string from pos 'pos'
	#
	# "bc".is_substring("abcd",1) 	# --> true
	# "bc".is_substring("abcd",2) 	# --> false
	meth has_substring(str: String, pos: Int): Bool
	do
		var itsindex = str.length - 1
		var myindex = pos + itsindex
		var myitems = _items
		var itsitems = str._items
		if myindex > length or itsindex > myindex  then return false
		while itsindex > 0 do
			if myitems[myindex] != itsitems[itsindex] then return false
			myindex -= myindex
			itsindex -= itsindex
		end
		return true
	end

	# Is this string prefixed by 'prefix'
	#
	# "abc".is_prefix("abcd") 	# --> true
	# "bc".is_prefix("abcd") 	# --> false
	meth has_prefix(prefix: String): Bool do return has_substring(prefix,0)

	# Is this string suffixed by 'suffix'
	#
	# "abcd".has_suffix("abc") 	# --> false
	# "abcd".has_suffix("bcd") 	# --> true
	meth has_suffix(suffix: String): Bool do return has_substring(suffix, length - suffix.length)

	# If `self' contains only digits, return the corresponding integer
	meth to_i: Int
	do
		# Shortcut
		return to_s.to_cstring.atoi
	end

	# If `self' contains only digits and alpha <= 'f', return the corresponding integer.
	meth to_hex: Int do return a_to(16)

	# If `self' contains only digits and letters, return the corresponding integer in a given base
	meth a_to(base: Int) : Int
	do
		var i = 0
		var neg = false

		for c in self
		do
			var v = c.to_i
			if v > base then
				if neg then
					return -i
				else
					return i
				end
			else if v < 0 then
				neg = true
			else
				i = i * base + v
			end
		end
		if neg then
			return -i
		else
			return i
		end
	end

	# String to upper case
	meth to_upper: String
	do
		var s = new Buffer.with_capacity(length)
		for i in self do s.add(i.to_upper)
		return s.to_s
	end

	# String to lower case
	meth to_lower : String
	do
		var s = new Buffer.with_capacity(length)
		for i in self do s.add(i.to_lower)
		return s.to_s
	end


	redef meth output
	do
		var i = 0
		while i < length do
			_items[i].output
			i += 1
		end
	end
end


class String
special Comparable
special AbstractString
	redef type OTHER: String

	# Create a new string from a given char *.
	init with_native(nat: NativeString, size: Int)
	do
		assert size >= 0
		_items = nat
		_length = size
	end

	# Create a new string from a null terminated char *.
	init from_cstring(str: NativeString)
	do
		var size = str.cstring_length
		_items = str
		_length = size
	end

	# Return a null terminated char *
	meth to_cstring: NativeString
	do
		return _items
	end

	redef meth ==(o)
	do
		if not o isa String or o is null then return false
		var l = length
		if o.length != l then return false
		var i = 0
		var it = _items
		var oit = o._items
		while i < l do
			if it[i] != oit[i] then return false
			i += 1
		end
		return true
	end

	redef meth <(s)
	do
		var i = 0
		var l1 = length
		var l2 = s.length
		var n1 = _items
		var n2 = s._items
		while i < l1 and i < l2 do
			var c1 = n1[i].ascii
			var c2 = n2[i].ascii
			if c1 < c2 then
				return true
			else if c2 < c1 then
				return false
			end
			i += 1
		end
		if l1 < l2 then
			return true
		else
			return false
		end
	end

	# The concatenation of `self' with `r'
	meth +(s: String): String
	do
		var r = new Buffer.with_capacity(length + s.length)
		r.append(self)
		r.append(s)
		return r.to_s
	end

	# i repetitions of self
	meth *(i: Int): String
	do
		assert i >= 0
		var r = new Buffer.with_capacity(length * i)
		while i > 0 do
			r.append(self)
			i -= 1
		end
		return r.to_s
	end

	redef meth to_s do return self
end

# Strings are arrays of characters.
class Buffer
special AbstractString
special Comparable
special StringCapable
special AbstractArray[Char]

	redef type OTHER: String

	redef meth []=(index, item)
	do
		if index == length then
			add(item)
			return
		end
		assert index >= 0 and index < length
		_items[index] = item
	end

	redef meth add(c)
	do
		if _capacity <= length then enlarge(length + 5)
		_items[length] = c
		_length += 1
	end

	redef meth enlarge(cap)
	do
		var c = _capacity
		if cap <= c then return
		while c <= cap do c = c * 2 + 2
		var a = calloc_string(c+1)
		_items.copy_to(a, length, 0, 0)
		_items = a
		_capacity = c
	end

	redef meth append(s)
	do
		if s isa String then
			var sl = s.length
			if _capacity < length + sl then enlarge(length + sl)
			s.items.copy_to(_items, sl, 0, length)
			_length += sl
		else
			super
		end
	end

	redef meth to_s: String
	do
		var l = length
		var a = calloc_string(l+1)
		_items.copy_to(a, l, 0, 0)

		# Ensure the afterlast byte is '\0' to nul-terminated char *
		a[length] = '\0'

		return new String.with_native(a, length)
	end

	redef meth <(s)
	do
		var i = 0
		var l1 = length
		var l2 = s.length
		while i < l1 and i < l2 do
			var c1 = self[i].ascii
			var c2 = s[i].ascii
			if c1 < c2 then
				return true
			else if c2 < c1 then
				return false
			end
			i += 1
		end
		if l1 < l2 then
			return true
		else
			return false
		end
	end

	# Create a new empty string.
	init
	do
		with_capacity(5)
	end

	init from(s: String)
	do
		_capacity = s.length + 1
		_length = s.length
		_items = calloc_string(_capacity)
		s.items.copy_to(_items, _length, 0, 0)
	end

	# Create a new empty string with a given capacity.
	init with_capacity(cap: Int)
	do
		assert cap >= 0
		# _items = new NativeString.calloc(cap)
		_items = calloc_string(cap+1)
		_capacity = cap
		_length = 0
	end

	redef meth ==(o)
	do
		if not o isa Buffer or o is null then return false
		var l = length
		if o.length != l then return false
		var i = 0
		var it = _items
		var oit = o._items
		while i < l do
			if it[i] != oit[i] then return false
			i += 1
		end
		return true
	end

	readable private attr _capacity: Int 
end

###############################################################################
# Refinement                                                                  #
###############################################################################

redef class Object
	#   meth class_name: String is extern intern # The name of the class

	# User redeable representation of `self'.
	meth to_s: String do return inspect

	# Developper readable representation of `self'.
	# Usualy, it uses the form "<CLASSNAME:#OBJECTID bla bla bla>"
	meth inspect: String
	do
		var r = inspect_head
		# r.add('>')
		return r
	end

	# Return "<CLASSNAME:#OBJECTID".
	# This fuction is mainly used with the redefinition of the inspect(0) method
	protected meth inspect_head: String
	do
		return "<{object_id.to_hex}"
	end

	protected meth args: IndexedCollection[String]
	do
		return sys.args
	end
end

redef class Bool
	redef meth to_s
	do 
		if self then 
			return once "true" 
		else 
			return once "false" 
		end
	end   
end

redef class Int
	meth fill_buffer(s: Buffer, base: Int, signed: Bool)
	# Fill `s' with the digits in base 'base' of `self' (and with the '-' sign if 'signed' and negative).
	# assume < to_c max const of char
	do
		var n: Int
		# Sign
		if self < 0 then
			n = - self
			s[0] = '-'
		else if self == 0 then
			s[0] = '0'
			return
		else
			n = self
		end
		# Fill digits
		var pos = digit_count(base) - 1
		while pos >= 0 and n > 0 do 
			s[pos] = (n % base).to_c
			n = n / base # /
			pos -= 1
		end
	end

	# return displayable int in base 10 and signed
	redef meth to_s do return to_base(10,true)
	
	# return displayable int in hexadecimal (unsigned (not now))
	meth to_hex: String do return to_base(16,false)

	# return displayable int in base base and signed
	meth to_base(base: Int, signed: Bool): String
	do
		var l = digit_count(base)
		var s = new Buffer.from(" " * l)
		fill_buffer(s, base, signed)
		return s.to_s
	end
end

redef class Float
	redef meth to_s do return to_precision(6)

	# `self' representation with `nb' digits after the '.'.
	meth to_precision(nb: Int): String
	do
		if nb == 0 then return to_i.to_s

		var i = to_i
		var dec = 1.0
		while nb > 0 do
			dec = dec * 10.0
			nb -= 1
		end
		var d = ((self-i.to_f)*dec).to_i
		return "{i}.{d}"
	end
end

redef class Char
	redef meth to_s
	do
		var s = new Buffer.with_capacity(1)
		s[0] = self
		return s.to_s
	end
end

redef class Collection[E]
	# Concatenate elements.
	redef meth to_s
	do
		var s = new Buffer
		for e in self do if e != null then s.append(e.to_s)
		return s.to_s
	end

	# Concatenate and separate each elements with `sep'. 
	meth join(sep: String): String
	do
		if is_empty then return ""
		
		var s = new Buffer # Result

		# Concat first item
		var i = iterator
		var e = i.item
		if e != null then s.append(e.to_s)
		
		# Concat other items
		i.next
		while i.is_ok do
			s.append(sep)
			e = i.item
			if e != null then s.append(e.to_s)
			i.next
		end
		return s.to_s
	end
end

redef class Array[E]
	# Fast implementation
	redef meth to_s
	do
		var s = new Buffer
		var i = 0
		var l = length
		while i < l do
			var e = self[i]
			if e != null then s.append(e.to_s)
			i += 1
		end
		return s.to_s
	end
end

redef class Map[K,V]
	# Concatenate couple of 'key value' separate by 'couple_sep' and separate each couple with `sep'. 
	meth map_join(sep: String, couple_sep: String): String
	do
		if is_empty then return ""
		
		var s = new Buffer # Result

		# Concat first item
		var i = iterator
		var k = i.key
		var e = i.item
		if e != null then s.append("{k}{couple_sep}{e}")
		
		# Concat other items
		i.next
		while i.is_ok do
			s.append(sep)
			k = i.key
			e = i.item
			if e != null then s.append("{k}{couple_sep}{e}")
			i.next
		end
		return s.to_s
	end
end

###############################################################################
# Native classe                                                               #
###############################################################################

# Native strings are simple C char *
class NativeString
	meth [](index: Int): Char is intern
	meth []=(index: Int, item: Char) is intern
	meth copy_to(dest: NativeString, length: Int, from: Int, to: Int) is intern
	
	# Position of the first nul character.
	meth cstring_length: Int
	do
		var l = 0
		while self[l] != '\0' do l += 1
		return l
	end
	meth atoi: Int is intern
end

# StringCapable objects can create native strings
class StringCapable
	protected meth calloc_string(size: Int): NativeString is intern
end

redef class Sys
	attr _args_cache: nullable IndexedCollection[String]

	redef meth args: IndexedCollection[String]
	do
		if _args_cache == null then init_args
		return _args_cache.as(not null)
	end

	# The name of the program as given by the OS
	meth program_name: String
	do
		return new String.from_cstring(native_argv(0))
	end

	# Initialize `args' with the contents of `native_argc' and `native_argv'.
	private meth init_args
	do
		var argc = native_argc
		var args = new Array[String].with_capacity(0)
		var i = 1
		while i < argc do
			args[i-1] = new String.from_cstring(native_argv(i))
			i += 1
		end
		_args_cache = args
	end

	private meth native_argc: Int is extern "kernel_Sys_Sys_native_argc_0" # First argument of the main C function.
	
	private meth native_argv(i: Int): NativeString is extern "kernel_Sys_Sys_native_argv_1" # Second argument of the main C function.
end

