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

import core::kernel

class G[E: Object]
end

class A
	fun foo(t: T): Comparable do return t
	type T: Comparable #alt1-5#
	#alt1#type T: T
	#alt2#type T: nullable T
	#alt3#type T: G[T]
	#alt4#type T: U
	#alt4#type U: FAIL
	#alt5#type T: U
	#alt5#type U: T
	fun bar(t: T): Comparable do return t
end

var a = new A
a.foo(1)
a.bar('1')
