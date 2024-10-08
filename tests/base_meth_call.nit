# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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

class A
	fun foo(a: Int) do a.output
	fun bar(a: Int): Int do
		' '.output
		a.output
		return a
	end

	fun baz do
		foo(1)
		bar(2).output
		var i = bar(3)
		i.output
		i = bar(4)
		i.output
		foo(bar(5))
		bar(6)
#alt1#		foo(7).output
#alt2#		var j = foo(8)
#alt2#		j.output
#alt3#		i = foo(9)
#alt3#		i.output
#alt4#		foo(foo(10))
	end
end

(new A).baz
