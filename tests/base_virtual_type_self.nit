# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
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

class A[E]
	type T: E
	var t: T is noinit
	fun foo(t: T) do end
	fun foo2: T do return _t
	fun bar(t: A[T]) do end
	fun bar2: A[T] do return self


end

class B
	#alt3#super A[Int]
	type U: Int

	fun test
	do
		#alt1#var a = new A[Int]
		#alt2#var a = new A[U]
		#alt3#var a = self
		#alt4#var a = new A[A[Int]]
		#alt5#var a = new A[A[U]]

		var f: Float = 1.0

		a.foo(f)
		f = a.foo2
		a.bar(f)
		f = a.bar2
	end
end

(new B).test
