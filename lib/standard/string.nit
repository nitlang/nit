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

# Basic manipulations of strings of characters
package string

intrude import collection # FIXME should be collection::array
import hash

###############################################################################
# String                                                                      #
###############################################################################

# Common subclass for String and Buffer
abstract class AbstractString
	super AbstractArrayRead[Char]

	readable private var _items: NativeString

	redef fun [](index) do return _items[index]

	# Create a substring.
	#
	# "abcd".substring(1, 2) 	# --> "bc"
	# "abcd".substring(-1, 2)	# --> "a"
	# "abcd".substring(1, 0)     # --> ""
	# "abcd".substring(2, 5)     # --> "cd"
	fun substring(from: Int, count: Int): String
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

	# Create a substring from `self' beginning at the 'from' position
	#
	# "abcd".substring(1) 	# --> "bcd"
	# "abcd".substring(-1)	# --> "abcd"
	# "abcd".substring(2)     # --> "cd"
	fun substring_from(from: Int): String
	do
		assert from < length
		return substring(from, length - from)
	end

	# Does self have a substring 'str' starting from position 'pos
	#
	# "abcd".has_substring("bc",1) 	# --> true
	# "abcd".has_substring("bc",2) 	# --> false
	fun has_substring(str: String, pos: Int): Bool
	do
		var itsindex = str.length - 1
		var myindex = pos + itsindex
		var myitems = _items
		var itsitems = str._items
		if myindex > length or itsindex > myindex  then return false
		var its_index_from = str._indexFrom
		itsindex += its_index_from
		while itsindex >= its_index_from do
			if myitems[myindex] != itsitems[itsindex] then return false
			myindex -= 1
			itsindex -= 1
		end
		return true
	end

	# Is this string prefixed by 'prefix'
	#
	# "abc".is_prefix("abcd") 	# --> true
	# "bc".is_prefix("abcd") 	# --> false
	fun has_prefix(prefix: String): Bool do return has_substring(prefix,0)

	# Is this string suffixed by 'suffix'
	#
	# "abcd".has_suffix("abc") 	# --> false
	# "abcd".has_suffix("bcd") 	# --> true
	fun has_suffix(suffix: String): Bool do return has_substring(suffix, length - suffix.length)

	# If `self' contains only digits, return the corresponding integer
	fun to_i: Int
	do
		# Shortcut
		return to_s.to_cstring.atoi
	end

	# If `self' contains a float, return the corresponding float
	fun to_f: Float
	do
		# Shortcut
		return to_s.to_cstring.atof
	end

	# If `self' contains only digits and alpha <= 'f', return the corresponding integer.
	fun to_hex: Int do return a_to(16)

	# If `self' contains only digits and letters, return the corresponding integer in a given base
	fun a_to(base: Int) : Int
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

	# Returns true if the string contains only Numeric values (and one "," or one "." character)
	fun is_numeric: Bool
	do
		var has_point_or_comma = false
		for i in self
		do
			if not i.is_numeric
			then
				if (i == '.' or i == ',') and not has_point_or_comma
				then
					has_point_or_comma = true
				else
					return false
				end
			end
		end
		return true
	end

	# A upper case version of `self'
	fun to_upper: String
	do
		var s = new Buffer.with_capacity(length)
		for i in self do s.add(i.to_upper)
		return s.to_s
	end

	# A lower case version of `self'
	fun to_lower : String
	do
		var s = new Buffer.with_capacity(length)
		for i in self do s.add(i.to_lower)
		return s.to_s
	end


	redef fun output
	do
		var i = 0
		while i < length do
			_items[i].output
			i += 1
		end
	end
end

# Immutable strings of characters.
class String
	super Comparable
	super AbstractString
	super StringCapable

	redef type OTHER: String

	readable var _indexFrom: Int
	readable var _indexTo: Int

	################################################
	#       AbstractString specific methods        #
	################################################

	# Access a character at index in String
	#
	redef fun [](index) do
		assert index >= 0
		assert (index + _indexFrom) < (_indexFrom + _length)
		return items[index + _indexFrom]
	end

	# Create a substring.
	#
	# "abcd".substring(1, 2) 	# --> "bc"
	# "abcd".substring(-1, 2)	# --> "a"
	# "abcd".substring(1, 0)     # --> ""
	# "abcd".substring(2, 5)     # --> "cd"
	redef fun substring(from: Int, count: Int): String
	do
		assert count >= 0

		if from < 0 then
			count += from
			if count < 0 then count = 0
			from = 0
		end

		var realFrom = _indexFrom + from

		if (realFrom + count) > _indexTo then return new String.from_substring(realFrom, _indexTo, _items)

		if count == 0 then return ""

		return new String.from_substring(realFrom, realFrom + count - 1, _items)
	end

	# Create a substring from `self' beginning at the 'from' position
	#
	# "abcd".substring(1) 	# --> "bcd"
	# "abcd".substring(-1)	# --> "abcd"
	# "abcd".substring(2)     # --> "cd"
	redef fun substring_from(from: Int): String
	do
		if from > _length then return ""
		if from < 0 then from = 0
		return substring(from, _length)
	end

	# Does self have a substring 'str' starting from position 'pos
	#
	# "abcd".has_substring("bc",1) 	# --> true
	# "abcd".has_substring("bc",2) 	# --> false
	redef fun has_substring(str: String, pos: Int): Bool
	do
		var itsindex = str._length - 1

		var myindex = pos + itsindex
		var myitems = _items

		var itsitems = str._items

		if myindex > _length or itsindex > myindex then return false

		var itsindexfrom = str.indexFrom
		itsindex += itsindexfrom
		myindex += indexFrom

		while itsindex >= itsindexfrom do
			if myitems[myindex] != itsitems[itsindex] then return false
			myindex -= 1
			itsindex -= 1
		end

		return true
	end

	# A upper case version of `self'
	redef fun to_upper: String
	do
		var outstr = calloc_string(self._length + 1)
		var index = 0

		var myitems = self._items
		var index_from = self._indexFrom
		var max = self._indexTo

		while index_from <= max do
			outstr[index] = myitems[index_from].to_upper
			index += 1
			index_from += 1
		end

		outstr[self.length] = '\0'

		return new String.with_native(outstr, self._length)
	end

	# A lower case version of `self'
	redef fun to_lower : String
	do
		var outstr = calloc_string(self._length + 1)
		var index = 0

		var myitems = self._items
		var index_from = self._indexFrom
		var max = self._indexTo

		while index_from <= max do
			outstr[index] = myitems[index_from].to_lower
			index += 1
			index_from += 1
		end

		outstr[self.length] = '\0'

		return new String.with_native(outstr, self._length)
	end

	redef fun output
	do
		var i = self._indexFrom
		while i < length do
			_items[i].output
			i += 1
		end
	end

	##################################################
	#              String Specific Methods           #
	##################################################

	# Creates a String object as a substring of another String
	private init from_substring(from: Int, to: Int, internalString: NativeString)
	do
		_items = internalString
		_indexFrom = from
		_indexTo = to
		_length = to - from + 1
	end

	# Create a new string from a given char *.
	init with_native(nat: NativeString, size: Int)
	do
		assert size >= 0
		_items = nat
		_length = size
		_indexFrom = 0
		_indexTo = size - 1
	end

	# Create a new string from a null terminated char *.
	init from_cstring(str: NativeString)
	do
		with_native(str,str.cstring_length)
	end

	# Return a null terminated char *
	fun to_cstring: NativeString
	do
		#return items
		if _indexFrom > 0 or _indexTo != items.cstring_length-1 then
			var newItems = calloc_string(length+1)
			self.items.copy_to(newItems, _length, _indexFrom, 0)
			newItems[length] = '\0'
			return newItems
		end
		return _items
	end

	redef fun ==(o)
	do
		if not o isa String or o is null then return false

		if self.object_id == o.object_id then return true

		var l = _length

		if o._length != l then return false

		var i = _indexFrom
		var j = o._indexFrom
		var max = l + _indexFrom
		var itsitems = o._items
		var myitems = self._items

		while i < max do
			if myitems[i] != itsitems[j] then return false
			i += 1
			j += 1
		end

		return true
	end

	redef fun <(s)
	do
		if self.object_id == s.object_id then return false

		var c1 : Int
		var c2 : Int
		var currIdSelf = self._indexFrom
		var currIdOther = s._indexFrom
		var my_items = self._items
		var its_items = s._items

		var self_upper_bound = self._length + currIdSelf
		var other_upper_bound = s._length + currIdOther

		while currIdSelf < self_upper_bound and currIdOther < other_upper_bound do
			c1 = my_items[currIdSelf].ascii
			c2 = its_items[currIdOther].ascii

			if c1 < c2 then
				return true
			else if c2 < c1 then
				return false
			end

			currIdSelf += 1
			currIdOther += 1
		end

		if self._length < s._length then
			return true
		else
			return false
		end
	end

	# The concatenation of `self' with `r'
	fun +(s: String): String
	do
		var newString = calloc_string(_length + s._length + 1)

		self._items.copy_to(newString, _length, _indexFrom, 0)
		s._items.copy_to(newString, s._length, s._indexFrom, _length)

		newString[self._length + s._length] = '\0'

		return new String.with_native(newString, _length + s._length)
	end

	# i repetitions of self
	fun *(i: Int): String
	do
		assert i >= 0
		var r = calloc_string((_length * i) + 1)

		r[_length * i] = '\0'

		var lastStr = new String.with_native(r, (_length * i))

		while i > 0 do
			self._items.copy_to(r, _length, _indexFrom, _length*(i-1))
			i -= 1
		end

		return lastStr
	end

	redef fun to_s do return self

	redef fun hash
	do
		# djb2 hash algorythm
		var h = 5381
		var i = _length - 1

		var myitems = self.items
		var index_from = self._indexFrom

		i += index_from

		while i >= index_from do
			h = (h * 32) + h + self._items[i].ascii
			i -= 1
		end

		return h
	end
end

# Mutable strings of characters.
class Buffer
	super AbstractString
	super Comparable
	super StringCapable
	super AbstractArray[Char]

	redef type OTHER: String

	redef fun []=(index, item)
	do
		if index == length then
			add(item)
			return
		end
		assert index >= 0 and index < length
		_items[index] = item
	end

	redef fun add(c)
	do
		if _capacity <= length then enlarge(length + 5)
		_items[length] = c
		_length += 1
	end

	redef fun enlarge(cap)
	do
		var c = _capacity
		if cap <= c then return
		while c <= cap do c = c * 2 + 2
		var a = calloc_string(c+1)
		_items.copy_to(a, length, 0, 0)
		_items = a
		_capacity = c
	end

	redef fun append(s)
	do
		if s isa String then
			var sl = s.length
			if _capacity < _length + sl then enlarge(_length + sl)
			s.items.copy_to(_items, sl, s._indexFrom, _length)
			_length += sl
		else
			super
		end
	end

	redef fun to_s: String
	do
		var l = length
		var a = calloc_string(l+1)
		_items.copy_to(a, l, 0, 0)

		# Ensure the afterlast byte is '\0' to nul-terminated char *
		a[length] = '\0'

		return new String.with_native(a, length)
	end

	redef fun <(s)
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
		s.items.copy_to(_items, _length, s._indexFrom, 0)
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

	redef fun ==(o)
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

	readable private var _capacity: Int 
end

###############################################################################
# Refinement                                                                  #
###############################################################################

redef class Object
	# User readable representation of `self'.
	fun to_s: String do return inspect

	# The class name of the object in NativeString format.
	private fun native_class_name: NativeString is intern

	# The class name of the object.
	# FIXME: real type information is not available at runtime.
	# Therefore, for instance, an instance of List[Bool] has just
	# "List" for class_name
	fun class_name: String do return new String.from_cstring(native_class_name)

	# Developer readable representation of `self'.
	# Usually, it uses the form "<CLASSNAME:#OBJECTID bla bla bla>"
	fun inspect: String
	do
		return "<{inspect_head}>"
	end

	# Return "CLASSNAME:#OBJECTID".
	# This function is mainly used with the redefinition of the inspect method
	protected fun inspect_head: String
	do
		return "{class_name}:#{object_id.to_hex}"
	end

	protected fun args: Sequence[String]
	do
		return sys.args
	end
end

redef class Bool
	redef fun to_s
	do 
		if self then 
			return once "true" 
		else 
			return once "false" 
		end
	end   
end

redef class Int
	fun fill_buffer(s: Buffer, base: Int, signed: Bool)
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
	redef fun to_s do return to_base(10,true)
	
	# return displayable int in hexadecimal (unsigned (not now))
	fun to_hex: String do return to_base(16,false)

	# return displayable int in base base and signed
	fun to_base(base: Int, signed: Bool): String
	do
		var l = digit_count(base)
		var s = new Buffer.from(" " * l)
		fill_buffer(s, base, signed)
		return s.to_s
	end
end

redef class Float
	# Pretty print self, print needed decimals up to a max of 6.
	redef fun to_s do
		var str = to_precision( 6 )
		var len = str.length
		for i in [0..len-1] do
			var j = len-1-i
			var c = str[j]
			if c == '0' then
				continue
			else if c == '.' then
				return str.substring( 0, j+2 )
			else
				return str.substring( 0, j+1 )
			end
		end
		return str
	end

	# `self' representation with `nb' digits after the '.'.
	fun to_precision(nb: Int): String import String::from_cstring `{
		int size;
		char *str;

		size = snprintf(NULL, 0, "%.*f", (int)nb, recv);
		str = malloc(size + 1);
		sprintf(str, "%.*f", (int)nb, recv );

		return new_String_from_cstring( str );
	`}
end

redef class Char
	redef fun to_s
	do
		var s = new Buffer.with_capacity(1)
		s[0] = self
		return s.to_s
	end

	# Returns true if the char is a numerical digit
	fun is_numeric: Bool
	do
		if self >= '0' and self <= '9'
		then
			return true
		end
		return false
	end

	# Returns true if the char is an alpha digit
	fun is_alpha: Bool
	do
		if (self >= 'a' and self <= 'z') or (self >= 'A' and self <= 'Z') then return true
		return false
	end

	# Returns true if the char is an alpha or a numeric digit
	fun is_alphanumeric: Bool
	do
		if self.is_numeric or self.is_alpha then return true
		return false
	end
end

redef class Collection[E]
	# Concatenate elements.
	redef fun to_s
	do
		var s = new Buffer
		for e in self do if e != null then s.append(e.to_s)
		return s.to_s
	end

	# Concatenate and separate each elements with `sep'. 
	fun join(sep: String): String
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
	redef fun to_s
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
	# Concatenate couple of 'key value'.
	# key and value are separated by 'couple_sep'.
	# each couple is separated each couple with `sep'.
	fun join(sep: String, couple_sep: String): String
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
# Native classes                                                              #
###############################################################################

# Native strings are simple C char *
class NativeString
	fun [](index: Int): Char is intern
	fun []=(index: Int, item: Char) is intern
	fun copy_to(dest: NativeString, length: Int, from: Int, to: Int) is intern
	
	# Position of the first nul character.
	fun cstring_length: Int
	do
		var l = 0
		while self[l] != '\0' do l += 1
		return l
	end
	fun atoi: Int is intern
	fun atof: Float is extern "atof"
end

# StringCapable objects can create native strings
interface StringCapable
	protected fun calloc_string(size: Int): NativeString is intern
end

redef class Sys
	var _args_cache: nullable Sequence[String]

	redef fun args: Sequence[String]
	do
		if _args_cache == null then init_args
		return _args_cache.as(not null)
	end

	# The name of the program as given by the OS
	fun program_name: String
	do
		return new String.from_cstring(native_argv(0))
	end

	# Initialize `args' with the contents of `native_argc' and `native_argv'.
	private fun init_args
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

	private fun native_argc: Int is extern "kernel_Sys_Sys_native_argc_0" # First argument of the main C function.
	
	private fun native_argv(i: Int): NativeString is extern "kernel_Sys_Sys_native_argv_1" # Second argument of the main C function.
end

