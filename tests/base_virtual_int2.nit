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

import kernel

interface A
	type V: A
	fun foo(v: V): V is abstract
end

redef class Int
	super A
	redef type V: Int
	redef fun foo(v) do return self
end

redef class Char
	super A
	redef type V: Char
	redef fun foo(v) do return self
end

fun test(d: A)
do
	d.foo(5).output
	#alt1#3.foo(d).output
	d.foo(d).output
	#alt2#d.foo('a').output
	#alt3#5.as(A).foo(d).output
end

test(4)
