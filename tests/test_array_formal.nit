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

class G[E]
	type T: nullable Object

	fun ae(e: E): Object do return [e]
	fun at(t: T): Object do return [t]
	fun ae2: Object do return new Array[E]
	fun at2: Object do return new Array[T]
end

class GO
	super G[Object]
	redef type T: Object
end

class GI
	super G[Int]
	redef type T: Int
end

fun test(x: Object)
do
	(x isa Array[nullable Object]).output
	(x isa Array[Object]).output
	(x isa Array[Int]).output
	'\n'.output
end

fun test2(x: G[Object])
do
	test(x.ae(1))
	test(x.ae2)
	test(x.at(2))
	test(x.at2)
	'\n'.output
end

test2(new GO)
test2(new GI)
test2(new G[Object])
