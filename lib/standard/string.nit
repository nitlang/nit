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

intrude import collection # FIXME should be collection::array
import hash

#FIXME Remove StringCollection, StringArray and StringIterator

# This abstract class implements its others methods with an iterator.
# Subclasses may redefine them with an efficient implementation.
class StringCollection[E]
	super Collection[E]
	# Get a new iterator on the collection.
	redef fun iterator: StringIterator[E] do return new StringIterator[E](self)

	# Iterate over each element of the collection
	redef fun iterate
		!each(e: E)
	do
		var i = iterator
		while i.is_ok do
			each(i.item)
			i.next
		end
	end

	# Add each item of `coll`.
	fun add_all(coll: StringCollection[E]) do for i in coll do add(i)

	# Get the item at `key'.
	fun [](key: Int): E is abstract

	# Add each item of `coll` after the last.
	fun append(coll: StringCollection[E]) do for i in coll do push(i)

	# Get the first item.
	# Is equivalent with `self'[0].
	fun first: E
	do
		assert not_empty: not is_empty
		return self[0]
	end
	
	# Get the last item.
	# Is equivalent with `self'[`length'-1].
	fun last: E
	do
		assert not_empty: not is_empty
		return self[length-1]
	end

	# Set the`item' at `key'.
	fun []=(key: Int, item: E) is abstract

	# Set the first item.
	# Is equivalent with `self'[0] = `item'.
	fun first=(item: E)
	do self[0] = item end

	# Set the last item.
	# Is equivalent with `self'[length-1] = `item'.
	fun last=(item: E) 
	do 
		var l = length
		if l > 0 then
			self[l-1] = item
		else
			self[0] = item
		end
	end

	# Add each (key,value) of `map' into `self'.
	# If a same key exists in `map' and `self', then the value in self is discarded.
	fun recover_with(map: StringCollection[E])
	do
		var i = map.iterator
		while i.is_ok do
			self[i.key] = i.item
			i.next
		end
	end

	# The current length
	redef readable var _length: Int = 0

	redef fun is_empty do return _length == 0

	redef fun has(item)
	do
		var i = 0
		var l = length
		while i < l do
			if self[i] == item then return true
			i += 1
		end
		return false
	end

	redef fun has_only(item)
	do
		var i = 0
		var l = length
		while i < l do
			if self[i] != item then return false
			i += 1
		end
		return true
	end

	redef fun count(item)
	do
		var res = 0
		var i = 0
		var l = length
		while i < l do
			if self[i] == item then res += 1
			i += 1
		end
		return res
	end

	fun reversed: StringArray[E]
	do
		var cmp = _length
		var result = new StringArray[E].with_capacity(cmp)
		while cmp > 0 do
			cmp -= 1
			result.add(self[cmp])
		end
		return result
	end

	protected fun copy_to(start: Int, len: Int, dest: StringCollection[E], new_start: Int)
	do
		# TODO native one
		var i = len
		while i > 0 do
			i -= 1
			dest[new_start+i] = self[start+i]
		end
	end

	redef fun output
	do
		var i = 0
		var l = length
		while i < l do
			var e = self[i]
			if e != null then e.output
			i += 1
		end
	end

	# Two arrays are equals if they have the same items in the same order.
	redef fun ==(o)
	do
		if not o isa StringCollection[E] or o is null then return false
		var l = length
		if o.length != l then return false
		var i = 0
		while i < l do
			if self[i] != o[i] then return false
			i += 1
		end
		return true
	end

	fun has_key(index: Int): Bool do return index >= 0 and index < length

	fun index_of(item: E): Int do return index_of_from(item, 0)
	
	fun last_index_of(item: E): Int do return last_index_of_from(item, length-1)

	fun index_of_from(item: E, pos: Int): Int
	do
		var i = pos
		var len = length
		while i < len do
			if self[i] == item then
				return i
			end
			i += 1
		end
		return -1
	end

	fun last_index_of_from(item: E, pos: Int): Int
	do
		var i = pos
		while i >= 0 do
			if self[i] == item then
				return i
			else
				i -= 1
			end
		end
		return -1
	end

	fun enlarge(cap: Int) is abstract

	fun push(item: E) do add(item)

	fun pop: E
	do
		assert not_empty: not is_empty
		var r = last
		_length -= 1
		return r
	end

	fun shift: E
	do
		assert not_empty: not is_empty
		var r = first
		var i = 1
		var l = length
		while i < l do
			self[i-1] = self[i]
			i += 1
		end
		_length = l - 1
		return r
	end

	fun unshift(item: E)
	do
		var i = length - 1
		while i > 0 do
			self[i+1] = self[i]
			i -= 1
		end
		self[0] = item
	end

	fun insert(item: E, pos: Int)
	do
		enlarge(length + 1)
		copy_to(pos, length-pos, self, pos + 1)
		self[pos] = item
	end

	redef fun add(item: E) do self[length] = item

	redef fun clear do _length = 0

	redef fun remove_first(item: E) do remove_at(index_of(item))

	redef fun remove(item: E)
	do
		var i = index_of(item)
		while i >= 0 do
			remove_at(i)
			i = index_of_from(item, i)
		end
	end

	fun remove_at(i: Int)
	do
		var l = length
		if i >= 0 and i < l then
			var j = i + 1
			while j < l do
				self[j-1] = self[j]
				j += 1
			end
			_length = l - 1
		end
	end
	
end

# Resizeable one dimention array of objects.
#
# Arrays have a literal representation.
#     a = [12, 32, 8]
# is equivalent with:
#     a = new Array[Int]
#     a.push(12)
#     a.push(32)
#     a.push(8)
class StringArray[E]
	super StringCollection[E]
	redef fun iterate
		!each(e: E)
	do
		var i = 0
		var l = _length
		var items = _items
		while i < length do
			each(items[i])
			i += 1
		end
	end

	# Get a new array of `size' elements.
	protected fun calloc_array(size: Int): NativeArray[E] is intern

	redef fun [](index)
	do
		assert index: index >= 0 and index < _length
		return _items[index]
	end

	redef fun []=(index, item)
	do
		assert index: index >= 0 and index < _length + 1
		if _capacity <= index then
			enlarge(index + 1)
		end
		if _length <= index then
			_length = index + 1
		end
		_items[index] = item
	end

	redef fun add(item)
	do
		var l = _length
		if _capacity <= l then
			enlarge(l + 1)
		end
		_length = l + 1
		_items[l] = item
	end

	redef fun enlarge(cap)
	do
		var c = _capacity
		if cap <= c then return
		while c <= cap do c = c * 2 + 2
		var a = calloc_array(c)
		if _capacity > 0 then _items.copy_to(a, _length)
		_items = a
		_capacity = c
	end

	# Create an empty array.
	init
	do
		_capacity = 0
		_length = 0
	end

	# Create an empty array with a given capacity.
	init with_capacity(cap: Int)
	do
		assert positive: cap >= 0
		_items = calloc_array(cap)
		_capacity = cap
		_length = 0
	end

	# Create an array of `count' elements
	init filled_with(value: E, count: Int)
	do
		assert positive: count >= 0
		_items = calloc_array(count)
		_capacity = count
		_length = count
		var i = 0
		while i < count do
			self[i] = value
			i += 1
		end
	end

	# Create a array filled with a given native array.
	init with_native(nat: NativeArray[E], size: Int)
	do
		assert positive: size >= 0
		_items = nat
		_capacity = size
		_length = size
	end

	# The internal storage.
	var _items: nullable NativeArray[E] = null

	# Do not use this method
	# FIXME: Remove it once modules can intrude non local modules
	fun intern_items: NativeArray[E] do return _items.as(not null)

	# The size of `_items'.
	var _capacity: Int = 0

	# Sort the array using the !cmp function.
	fun sort
		!cmp(e1,e2: E): Int
	do
		sub_sort(0, length-1) !cmp(x,y) = cmp(x, y)
	end

	# Sort `array' between `from' and `to' indices
	private fun sub_sort(from: Int, to: Int)
		!cmp(e1,e2: E): Int
	do
		if from >= to then
			return
		else if from + 7 < to then
			var pivot = self[from]
			var i = from
			var j = to
			while j > i do
				while i <= to and cmp(self[i], pivot) <= 0 do i += 1
				while j > i and cmp(self[j], pivot) >= 0 do j -= 1
				if j > i then
					var t = self[i]
					self[i] = self[j]
					self[j] = t
				end
			end
			self[from] = self[i-1]
			self[i-1] = pivot
			sub_sort(from, i-2) !cmp(x,y) = cmp(x, y)
			sub_sort(i, to) !cmp(x,y) = cmp(x, y)
		else
			var i = from
			while i < to do
				var min = i
				var min_v = self[i]
				var j = i
				while j <= to do
					if cmp(min_v, self[j]) > 0 then
						min = j
						min_v = self[j]
					end
					j += 1
				end
				if min != i then
					self[min] = self[i]
					self[i] = min_v
				end
				i += 1
			end
		end
	end
end

# Instances of the Iterator class generates a series of elements, one at a time.
# They are mainly used with collections.
class StringIterator[E]
	super CollectionIterator[E]
	
	readable var _index: Int = 0

	# A synonym of index.
	fun key: Int do return index

	fun item: E do return _array[_index]

	redef fun current do return item

	# redef fun item=(e) do _array[_index] = e

	fun is_ok: Bool do return _index < _array.length

	redef fun has_next do return is_ok

	redef fun next do _index += 1

	init(a: StringCollection[E])
	do
		_array = a
		_index = 0
	end
	
	var _array: StringCollection[E]
end

###############################################################################
# String                                                                      #
###############################################################################

abstract class AbstractString
	super StringCollection[Char]
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

	# Create a substring with the string beginning at the 'from' position
	#
	# "abcd".substring(1) 	# --> "bcd"
	# "abcd".substring(-1)	# --> "abcd"
	# "abcd".substring(2)     # --> "cd"
	fun substring_from(from: Int): String
	do
		assert from < length
		return substring(from, length - from)
	end

	# is this string a substring of the 'of' string from pos 'pos'
	#
	# "bc".is_substring("abcd",1) 	# --> true
	# "bc".is_substring("abcd",2) 	# --> false
	fun has_substring(str: String, pos: Int): Bool
	do
		var itsindex = str.length - 1
		var myindex = pos + itsindex
		var myitems = _items
		var itsitems = str._items
		if myindex > length or itsindex > myindex  then return false
		while itsindex >= 0 do
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

	# String to upper case
	fun to_upper: String
	do
		var s = new Buffer.with_capacity(length)
		for i in self do s.add(i.to_upper)
		return s.to_s
	end

	# String to lower case
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


class String
	super Comparable
	super AbstractString
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
	fun to_cstring: NativeString
	do
		return _items
	end

	redef fun ==(o)
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

	redef fun <(s)
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
	fun +(s: String): String
	do
		var r = new Buffer.with_capacity(length + s.length)
		r.append(self)
		r.append(s)
		return r.to_s
	end

	# i repetitions of self
	fun *(i: Int): String
	do
		assert i >= 0
		var r = new Buffer.with_capacity(length * i)
		while i > 0 do
			r.append(self)
			i -= 1
		end
		return r.to_s
	end

	redef fun to_s do return self

	redef fun hash
	do
		# djb2 hash algorythm
		var h = 5381
		var i = _length - 1
		var it = _items
		while i >= 0 do
			h = (h * 32) + h + it[i].ascii
			i -= 1
		end
		return h

	end
end

# Strings are arrays of characters.
class Buffer
	super AbstractString
	super Comparable
	super StringCapable
	super StringCollection[Char]

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
			if _capacity < length + sl then enlarge(length + sl)
			s.items.copy_to(_items, sl, 0, length)
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
	#   fun class_name: String is extern intern # The name of the class

	# User redeable representation of `self'.
	fun to_s: String do return inspect

	# Developper readable representation of `self'.
	# Usualy, it uses the form "<CLASSNAME:#OBJECTID bla bla bla>"
	fun inspect: String
	do
		var r = inspect_head
		# r.add('>')
		return r
	end

	# Return "<CLASSNAME:#OBJECTID".
	# This fuction is mainly used with the redefinition of the inspect(0) method
	protected fun inspect_head: String
	do
		return "<{object_id.to_hex}"
	end

	protected fun args: StringCollection[String]
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
	redef fun to_s do return to_precision(6)

	# `self' representation with `nb' digits after the '.'.
	fun to_precision(nb: Int): String
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
	redef fun to_s
	do
		var s = new Buffer.with_capacity(1)
		s[0] = self
		return s.to_s
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
		var e = i.current
		if e != null then s.append(e.to_s)
		
		# Concat other items
		i.next
		while i.has_next do
			s.append(sep)
			e = i.current
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
	# Concatenate couple of 'key value' separate by 'couple_sep' and separate each couple with `sep'. 
	fun join(sep: String, couple_sep: String): String
	do
		if is_empty then return ""
		
		var s = new Buffer # Result

		# Concat first item
		var i = iterator
		var k = i.current_key
		var e = i.current
		if e != null then s.append("{k}{couple_sep}{e}")
		
		# Concat other items
		i.next
		while i.has_next do
			s.append(sep)
			k = i.current_key
			e = i.current
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
end

# StringCapable objects can create native strings
class StringCapable
	protected fun calloc_string(size: Int): NativeString is intern
end

redef class Sys
	var _args_cache: nullable StringCollection[String]

	redef fun args: StringCollection[String]
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
		var args = new StringArray[String].with_capacity(0)
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

