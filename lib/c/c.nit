# This file is part of NIT (https://nitlanguage.org).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Structures and services for compatibility with the C language
module c

import core
intrude import core::collection::array

# A thin wrapper around a `NativeCArray` adding length information
abstract class CArray[E]
	super AbstractArrayRead[E]

	# The corresponding C type
	type NATIVE: NativeCArray

	# Pointer to the real C array
	var native_array: NATIVE is noinit

	init(length: Int) is old_style_init do self._length = length

	redef fun [](index)
	do
		assert not destroyed
		assert index >= 0 and index < length
		return native_array[index]
	end

	# Set `val` at `index`.
	fun []=(index: Int, val: E)
	do
		assert not destroyed
		assert index >= 0 and index < length
		native_array[index] = val
	end

	# Was this instance destroyed?
	#
	# See `CArray::destroy`.
	var destroyed = false

	# Free used memory used by `native_array`.
	#
	# Also set `destroyed` to true.
	fun destroy
	do
		if destroyed then return

		native_array.free
		destroyed = true
	end
end

# A native C array, as in a pointer to the first element of the array
extern class NativeCArray `{ void * `}

	# Type of contained elements.
	type E: nullable Object

	# Get element at `index`.
	fun [](index: Int): E is abstract

	# Set `val` at `index`.
	fun []=(index: Int, val: E) is abstract

	# Return pointer to the address to the second element of this array
	#
	# This is the standard `+` operator on pointers in C
	fun +(offset: Int): SELF is abstract
end

# Wrapper around an array of `int` in C (`int*`) with length and destroy state
class CIntArray
	super CArray[Int]
	redef type NATIVE: NativeCIntArray

	# Initialize a new CIntArray of `size` elements.
	init(size: Int) is old_style_init do
		native_array = new NativeCIntArray(size)
		super size
	end

	# Create from a `SequenceRead[Int]`
	new from(array: SequenceRead[Int])
	do
		var carray = new CIntArray(array.length)
		for i in array.length.times do
			carray[i] = array[i]
		end
		return carray
	end
end

# An array of `int` in C (`int*`)
extern class NativeCIntArray `{ int* `}
	super NativeCArray
	redef type E: Int

	# Initialize a new NativeCIntArray of `size` elements.
	new(size: Int) `{ return calloc(size, sizeof(int)); `}

	redef fun [](index) `{ return self[index]; `}
	redef fun []=(index, val) `{ self[index] = val; `}

	redef fun +(offset) `{ return self + offset; `}
end

# Wrapper of a C array of type `uint16_t*` with length and destroy state
class CUInt16Array
	super CArray[Int]
	redef type NATIVE: NativeCUInt16Array

	# Initialize a new CIntArray of `size` elements.
	init(size: Int) is old_style_init do
		native_array = new NativeCUInt16Array(size)
		super size
	end

	# Create from a `SequenceRead[Int]`
	new from(array: SequenceRead[Int])
	do
		var carray = new CUInt16Array(array.length)
		for i in array.length.times do
			carray[i] = array[i]
		end
		return carray
	end
end

# An array of `uint16_t` in C
extern class NativeCUInt16Array `{ uint16_t* `}
	super NativeCArray
	redef type E: Int

	# Initialize a new NativeCUInt16Array of `size` elements.
	new(size: Int) `{ return calloc(size, sizeof(uint16_t)); `}

	redef fun [](index) `{ return self[index]; `}
	redef fun []=(index, val) `{ self[index] = val; `}

	redef fun +(offset) `{ return self + offset; `}
end

# Wrapper around an array of `unsigned char` in C (`unsigned char*`) with length and destroy state
class CByteArray
	super CArray[Byte]
	redef type NATIVE: NativeCByteArray

	# Allocate a new array of `size`
	init(size: Int) is old_style_init do
		native_array = new NativeCByteArray(size)
		super size
	end

	# Create from a `SequenceRead[Byte]`
	new from(array: SequenceRead[Byte])
	do
		var carray = new CByteArray(array.length)
		for i in array.length.times do
			carray[i] = array[i]
		end
		return carray
	end

	# Safely move `n` bytes from `dst_offset` to `src_offset`, inside this array
	#
	# Require: all arguments greater than 0 and ranges within `length`
	fun move(dst_offset, src_offset, n: Int)
	do
		assert dst_offset >= 0 and src_offset >= 0 and n >= 0
		assert dst_offset + n <= length
		assert src_offset + n <= length

		native_array.move(dst_offset, src_offset, n)
	end
end

# An array of `unsigned char` in C (`unsigned char*`)
extern class NativeCByteArray `{ unsigned char* `}
	super NativeCArray
	redef type E: Byte

	# Allocate a new array of `size`
	new(size: Int) `{ return calloc(size, sizeof(unsigned char)); `}

	redef fun [](index) `{ return self[index]; `}
	redef fun []=(index, val) `{ self[index] = val; `}

	redef fun +(offset) `{ return self + offset; `}

	# Move `n` bytes from `dst_offset` to `src_offset`
	fun move(dst_offset, src_offset, n: Int) `{
		memmove(self+dst_offset, self+src_offset, n);
	`}
end

# Wrapper around an array of `CString` in C (`char**`) with length and destroy state.
class CCStringArray
	super CArray[CString]

	redef type NATIVE: NativeCStringArray

	# Initialize a new NativeCStringArray of `size` elements.
	init(size: Int) is old_style_init do
		native_array = new NativeCStringArray(size)
		super size
	end

	# Create from an `SequenceRead[CString]`
	new from(array: SequenceRead[CString])
	do
		var carray = new CCStringArray(array.length)
		for i in array.length.times do
			carray[i] = array[i]
		end
		return carray
	end
end

# An array of `CString` in C (`char**`)
extern class NativeCStringArray `{ char** `}
	super NativeCArray

	redef type E: CString

	# Initialize a new NativeCStringArray of `size` elements.
	new(size: Int) `{ return calloc(size, sizeof(char*)); `}

	redef fun [](index) `{ return self[index]; `}
	redef fun []=(index, val) `{ self[index] = val; `}
	redef fun +(offset) `{ return self + offset; `}
end

redef class CString
	super NativeCArray
	redef type E: Char

	redef fun +(offset) `{ return self + offset; `}
end
