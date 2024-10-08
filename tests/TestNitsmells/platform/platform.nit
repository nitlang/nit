# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Declares base types allowed on the platform.
module platform

import end

# Root of everything.
interface Object
	# Used for comparisons.
	type OTHER: nullable Object

	# Is `other` equqls to `self`?
	fun ==(other: OTHER): Bool is intern

	# Is `other` different from `self`?
	fun !=(other: OTHER): Bool do return not self == other
end

# Some services about Integers.
class Int
	fun -: Int is intern
	fun +(i: Int): Int is intern
	fun -(i: Int): Int is intern
	fun *(i: Int): Int is intern
	fun /(i: Int): Int is intern
	fun >(i: Int): Bool is intern
	fun to_f: Float is intern
end

# Some services about Floats.
class Float
	fun +(f: Float): Float is intern
	fun -(f: Float): Float is intern
	fun *(f: Float): Float is intern
	fun /(f: Float): Float is intern
	fun >(f: Float): Bool is intern
end

# Booleans, `true` or `false`.
class Bool end

# Strings (there is no chars...).
class String end

# List of things.
class List[E] end
