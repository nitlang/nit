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

class G[E: A]
	var e: nullable E = null
	fun foo(e: E)
	do
		0.output
	end
end

class H
	super G[B]
	redef fun foo(e)
	do
		e.bar
	end
end

class A
end
class B
	super A
	fun bar
	do
		2.output
	end
end
class D
	super A
	fun not_bar
	do
		100.output
	end
end

var h: G[A] = new H
var b = new B
var d = new D
h.foo(b)
#alt1#h.foo(d)
'!'.output
b.bar
'!'.output
d.not_bar
