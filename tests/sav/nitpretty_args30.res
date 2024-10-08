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

# comment 1
class A
	type FOO: Discrete
	private var foo: FOO # comment

	# comment 2
	var bar: Int = 10
end

class B
	super A
	redef type FOO: Int

	# comment 3
	redef fun foo do return bar # comment

	redef fun bar do
		return 10 # comment 4
	end

	fun baz do return # comment 5
	protected fun baz2 do end

	fun other: String do
		return "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
	end

	fun foo1(arr: Array[String], len: Int, ind: Int): String do
		return "Hello World!"
	end
end

# end
