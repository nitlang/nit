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

class G[E]
	var e: nullable E = null
end

class A
	fun foo do 1.output
end
class B
	super A
	redef fun foo do 2.output
	fun bar do 20.output
end
class C
	super A
	redef fun foo do 3.output
	fun function_never_called do 300.output
end

var b: B = new B
var gb: G[B] = new G[B]
var gbe: nullable B

gb.e = b
gbe = gb.e
gbe.foo
gbe.bar

var a: A = b

#alt1#gb.e = a.as(B)
#alt1#gbe = gb.e
#alt1#gbe.foo
#alt1#gbe.bar

var ga: G[A] = gb

ga.e = a
gbe = gb.e
gbe.foo
gbe.bar

var c: A = new C

#alt2#gb.e = c.as(B)
#alt2#gbe = gb.e
#alt2#gbe.foo
#alt3#gbe.bar

#alt3#ga.e = c
#alt3#gbe = gb.e
#alt3#gbe.foo
#alt3#gbe.bar

var ggb: G[G[B]] = new G[G[B]]
var ggbe: nullable G[B]
var ggbee: nullable B

ggb.e = gb
ggbe = ggb.e
ggbee = ggbe.e
ggbee.foo
ggbee.bar

#alt4#ggb.e = ga.as(G[B])
#alt4#ggbe = ggb.e
#alt4#ggbee = ggbe.e
#alt4#ggbee.foo
#alt4#ggbee.bar

var gga: G[G[A]] = ggb

gga.e = ga
ggbe = ggb.e
ggbee = ggbe.e
ggbee.foo
ggbee.bar

var gc: G[A] = new G[C]
gc.e = c

#alt5#ggb.e = gc.as(G[B])
#alt5#ggbe = ggb.e
#alt5#ggbee = ggbe.e
#alt5#ggbee.foo
#alt5#ggbee.bar

#alt6#gga.e = gc
#alt6#ggbe = ggb.e
#alt6#ggbee = ggbe.e
#alt6#ggbee.foo
#alt6#ggbee.bar

var ga2: G[A] = new G[A]
ga2.e = b

#alt7#ggb.e = ga2.as(G[B])
#alt7#ggbe = ggb.e
#alt7#ggbee = ggbe.e
#alt7#ggbee.foo
#alt7#ggbee.bar

#alt8#gga.e = ga2
#alt8#ggbe = ggb.e
#alt8#ggbee = ggbe.e
#alt8#ggbee.foo
#alt8#ggbee.bar

# make the funtions live
if false then (new C).function_never_called
if false then (new C).foo
