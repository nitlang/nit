# This file is part of NIT ( https://nitlanguage.org ).
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

# Services to parse models from a text description
module model_parser_base

import parser_base

# Vector of 3 values, either `x, y, z`, `u, v, z` or `r, g, b`
class Vec3

	# X value
	var x = 0.0 is writable

	# Y value
	var y = 0.0 is writable

	# Z value
	var z = 0.0 is writable

	# U value (redirection as `x`)
	fun u: Float do return x

	# Set U value (redirection for `x=`)
	fun u=(value: Float) do x = value

	# V value (redirection as `y`)
	fun v: Float do return y

	# Set V value (redirection for `y=`)
	fun v=(value: Float) do y = value

	# R value
	fun r: Float do return x

	# Set R value (redirection for `x=`)
	fun r=(value: Float) do x = value

	# G value
	fun g: Float do return y

	# Set G value (redirection for `y=`)
	fun g=(value: Float) do y = value

	# B value
	fun b: Float do return z

	# Set B value (redirection for `z=`)
	fun b=(value: Float) do z = value

	# Return all values into a new `Array[Float]`
	fun to_a: Array[Float] do return [x, y, z]

	redef fun to_s do return "<{class_name} {x} {y} {z}>"
end

# Vector of 4 values, either `x, y, z, w`, `u, v, z, w` or `r, g, b, a`
class Vec4
	super Vec3

	# W value
	var w = 1.0 is writable

	# A value (redirection to `z`)
	fun a: Float do return z

	# Set A value (redirection for `z=`)
	fun a=(value: Float) do z = value

	# Return all values into a new `Array[Float]`
	redef fun to_a do return [x, y, z, w]

	redef fun to_s do return "<{class_name} {x} {y} {z} {w}>"
end

redef class StringProcessor
	# Read a single token after skipping preceding whitespaces
	#
	# Returns an empty string when at `eof`
	protected fun read_token: String
	do
		while not eof and src[pos].is_whitespace and src[pos] != '\n' do
			pos += 1
		end

		var start = pos
		ignore_until_whitespace_or_comment
		var ending = pos
		var str = src.substring(start, ending-start)
		return str
	end

	# Read 3 or 4 numbers and return them as a `Vec4`
	#
	# If there is no fourth value, `Vec4::w` is set to 1.0.
	protected fun read_vec4: Vec4
	do
		var vec = new Vec4
		vec.x = read_number
		vec.y = read_number
		vec.z = read_number

		var wstr = read_token
		if wstr.length > 0 then
			vec.w = if wstr.is_numeric then wstr.to_f else 0.0
		else
			vec.w = 1.0
		end

		return vec
	end

	# Read 2 or 3 numbers and return them as a `Vec3`
	#
	# If there is no third value, `Vec3::z` is set to 0.0.
	protected fun read_vec3: Vec3
	do
		var vec = new Vec3
		vec.x = read_number
		vec.y = read_number # Make optional

		var wstr = read_token
		if wstr.length > 0 then
			vec.z = if wstr.is_numeric then wstr.to_f else 0.0
		else
			vec.z = 0.0
		end

		return vec
	end

	# Advance `pos` until a whitespace or `#` is encountered
	protected fun ignore_until_whitespace_or_comment: Int
	do
		while src.length > pos and not src[pos].is_whitespace and src[pos] != '#' do
			pos += 1
		end
		return pos
	end

	# Read a token and parse it as a `Float`
	protected fun read_number: Float
	do
		var str = read_token
		return if str.is_numeric then str.to_f else 0.0
	end

	# Advance `pos` until the next end of line or a `#`
	protected fun read_until_eol_or_comment: String
	do
		ignore_whitespaces
		var start = pos
		while not eof and src[pos] != '#' and src[pos] != '\n' do
			pos += 1
		end
		var ending = pos
		var str = src.substring(start, ending-start)
		return str.trim
	end

	# Advance `pos` to skip the next end of line
	protected fun skip_eol
	do
		while not eof do
			var c = src.chars[pos]
			pos += 1
			if c == '\n' then break
		end
	end
end
