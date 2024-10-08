# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

#alt1#class Object
redef class Object #alt1#
	fun bar: Int do return 10 + baz
end

class A
	fun foo: Int do return 100 + bar
#alt2#	fun foo(c: Char) do (200 + bar).output
	redef fun bar: Int do return 20 + baz #alt3#
#alt3#	fun bar: Int do return 30 + baz
#alt4#	fun baz(c: Char) do 2.output
#alt5#	redef fun baz(c: Char) do 2.output

	init do end
end

#alt6#class A
#alt6#	fun foo: Int do return 300 + bar
#alt6#end
#alt7#redef class A
#alt7#	fun foo: Int do return 300 + bar
#alt7#end
#alt8#redef class A
#alt8#	redef fun foo: Int do return 300 + bar
#alt8#end

#alt9#fun baz do abort
fun baz: Int do return 1

baz.output
bar.output
(new A).foo.output
#alt2#(new A).foo('x')
#alt4#(new A).baz('y')
#alt5#(new A).baz('y')
