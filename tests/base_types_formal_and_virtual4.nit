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

import end

interface Object
end

class A[E: Object]
	fun e: E is abstract
end

class C[G: Object]
	type V: A[G]
	fun v: V is abstract
	fun test
	do
		__debug__ type V : v
		__debug__ type G : v.e
	end
end

class B[F: A[X]]
	fun f: F is abstract
	fun test
	do
		__debug__ type F : f
		__debug__ type X : f.e
	end
end

class X
end
