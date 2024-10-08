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

redef class Discrete
	fun foo(o: OTHER): Bool is abstract
end

redef class Int
	redef fun foo(o) do return self < o
end

redef class Char
	redef fun foo(o) do return self < o
end

var d1: Discrete = 1
var d2: Discrete = 2
var c1: Discrete = 'a'
var c2: Discrete = 'b'
1.foo(2).output
d1.foo(2).output
#alt1#c1.foo(2).output
#alt2#1.foo(d2).output
d1.foo(d2).output
#alt3#c1.foo(d2).output
#alt4#1.foo(c2).output
#alt5#d1.foo(c2).output
c1.foo(c2).output
