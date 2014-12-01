# This file is part of NIT (http://www.nitlanguage.org).
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

# Utilities and performant structure for the FFI with C
module c
import standard
intrude import standard::collection::array

# A thin wrapper around a `NativeCArray` adding length information
abstract class CArray[E]
	super AbstractArrayRead[E]

	type NATIVE: NativeCArray
	var native_array: NATIVE is noinit

	private init(length: Int) do self._length = length

	redef fun [](index)
	do
		assert not destroyed
		assert index >= 0 and index < length
		return native_array[index]
	end

	fun []=(index: Int, val: E)
	do
		assert not destroyed
		assert index >= 0 and index < length
		native_array[index] = val
	end

	var destroyed = false
	fun destroy
	do
		if destroyed then return

		native_array.free
		destroyed = true
	end
end

# A native C array, as in a pointer to the first element of the array
extern class NativeCArray `{ void * `}
	type E: nullable Object

	fun [](index: E): E is abstract
	fun []=(index: E, val: E) is abstract

	# Return pointer to the address to the second element of this array
	#
	# This is the standard `+` operator on pointers in C
	fun +(offset: Int): SELF is abstract
end

# Wrapper around an array of `int` in C (`int*`) with length and destroy state
class CIntArray
	super CArray[Int]
	redef type NATIVE: NativeCIntArray

	init(size: Int)
	do
		native_array = new NativeCIntArray(size)
		super size
	end
end

# An array of `int` in C (`int*`)
extern class NativeCIntArray `{ int* `}
	super NativeCArray
	redef type E: Int

	new(size: Int) `{ return calloc(size, sizeof(int)); `}
	redef fun [](index) `{ return recv[index]; `}
	redef fun []=(index, val) `{ recv[index] = val; `}

	redef fun +(offset) `{ return recv + offset; `}
end

redef class NativeString
	super NativeCArray
	redef type E: Char

	redef fun +(offset) `{ return recv + offset; `}
end
