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

interface A
	new do return new B(5)
end

class B
	super A
	var i: Int
	redef fun output do
		'B'.output
		i.output
	end
end

interface G[E: Object]
	new(a: E) do return new H[E](a)
	fun dup:G[E] is abstract
end

class H[F: Object]
	super G[F]
	var o: F

	redef fun output do
		'H'.output
		o.output
	end

	redef fun dup do return new G[F](self.o)
end

var b = new B(1)
b.output
var a = new A
a.output

var ha = new H[A](a)
ha.output
var hb = new H[B](b)
hb.output

var ga = new G[A](a)
ga.output
var gb = new G[B](b)
gb.output

ga.dup.output
gb.dup.output

var gga = new G[G[A]](ga)
gga.output
var ggb = new G[G[B]](gb)
ggb.output

gga.dup.output
ggb.dup.output
