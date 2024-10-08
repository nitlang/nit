# This file is part of NIT (https://nitlanguage.org).
#
# Copyright 2014 Julien Pagès <julien.pages@lirmm.fr>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#	 http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Services to handle BitSet
module bitset

import collection
private import math

in "C header" `{
	#include <assert.h>
`}

# Add support of binary operations related to binary level of Integer
# For compatibility reasons, xor, and, or methods are still in the `math` module.
redef class Int

	# Sets the i-bit of self to the given `value`
	#
	#	 assert 11.setbit(0, 0) == 10
	#	 assert 10.setbit(0, 1) == 11
	fun setbit(index: Int, value: Int): Int `{
		assert(index >= 0 && index < 32);

		if(value == 1)
			return self | (1 << index);
		else
			return self & ~(1 << index);
	`}

	# Returns the i-bit value of `self`
	#
	#	 assert 10.getbit(0) == 0
	#	 assert 10.getbit(3) == 1
	fun getbit(index: Int): Int `{
		assert(index >= 0 && index < 32);

		int op = 1 << index;

		if((self & op) == 0)
			return 0;
		else
			return 1;
	`}

	# Give a binary representation of self Integer
	fun bits: Array[Int]
	do
		var bits = new Array[Int].with_capacity(32)

		for i in [0..32[
		do
			bits[i] = getbit(i)
		end

		return bits
	end

	# Returns the number of bits of specified value (0 or 1) in `self`
	#
	#	 assert 10.number_bits(1) == 2
	#	 assert 10.number_bits(0) == 30
	fun number_bits(value: Int): Int `{
		assert(value == 0 || value == 1);

		long int bound = 1L << 31;
		int count = 0;
		long int i;

		if(value == 1)
		{
			for(i=bound; i>0; i/=2)
			{
				if(self & i)
					count++;
			}
		}
		else
		{
			for(i=bound; i>0; i/=2)
			{
				if(!(self & i))
					count++;
			}
		}
		return count;
	`}

	# Returns the position of the highest bit set to 1 in `self`
	#
	# The rightmost bit is at position 0.
	#
	#	 assert 10.highest_bit == 3
	#	 assert 1.highest_bit == 0
	fun highest_bit: Int `{
		long int msb = 1L << 31;
		int pos = 31;

		while(msb > 0 && !(self & msb))
		{
			msb /= 2;
			pos--;
		}

		return pos;
	`}
end
