# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2013-2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Advanced services for `Numeric` types
module numeric

import math
import text

redef class Text
	# Get the numeric version of `self`
	#
	# require: `is_numeric`
	#
	# ~~~~
	# assert "0".to_n == 0
	# assert "0.0".to_n == 0.0
	# assert ".12345".to_n == 0.12345
	# assert "12345".to_n == 12345
	# assert "".to_n == 0
	# ~~~~
	fun to_n: Numeric
	do
		if is_empty then return 0
		if chars.has('.') then return to_f
		return to_i
	end
end

redef interface Numeric
	# Universal `+` with any `Numeric`
	#
	# ~~~~
	# assert 1.add(1) == 2
	# assert 1.add(0.1) == 1.1
	# assert 1.1.add(1.1) == 2.2
	# assert 1.1.add(1) == 2.1
	# ~~~~
	fun add(other: Numeric): Numeric is abstract

	# Universal `-` with any `Numeric`
	#
	# ~~~~
	# assert 2.sub(1) == 1
	# assert 1.sub(0.1) == 0.9
	# assert 1.1.sub(0.1) == 1.0
	# assert 2.1.sub(1) == 1.1
	# ~~~~
	fun sub(other: Numeric): Numeric is abstract

	# Universal `/` with any `Numeric`
	#
	# ~~~~
	# assert 8.div(2) == 4
	# assert 4.div(0.5) == 8.0
	# assert 1.1.div(0.1) == 11.0
	# assert 2.2.div(2) == 1.1
	# ~~~~
	fun div(other: Numeric): Numeric is abstract

	# Universal `*` with any `Numeric`
	#
	# ~~~~
	# assert 2.mul(4) == 8
	# assert 11.mul(0.1) == 1.1
	# assert 11.1.mul(0.1) == 1.11
	# assert 1.1.mul(4) == 4.4
	# ~~~~
	fun mul(other: Numeric): Numeric is abstract
end

redef universal Int
	redef fun add(other)
	do
		if other isa Float then
			return to_f + other
		else
			return self + other.as(Int)
		end
	end

	redef fun sub(other)
	do
		if other isa Float then
			return to_f - other
		else
			return self - other.as(Int)
		end
	end

	redef fun mul(other)
	do
		if other isa Float then
			return to_f * other
		else
			return self * other.as(Int)
		end
	end

	redef fun div(other)
	do
		if other isa Float then
			return to_f / other
		else if other isa Int then
			if other == 0 then return self.to_f / 0.0
			return self / other
		else abort
	end
end

redef universal Float
	redef fun add(other) do return self + other.to_f
	redef fun sub(other) do return self - other.to_f
	redef fun div(other) do return self / other.to_f
	redef fun mul(other) do return self * other.to_f
end
