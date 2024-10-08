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

class G
	type E: nullable Object
	var e: nullable E = null
end

class GA
	super G
	redef type E: A
end
class GB
	super GA
	redef type E: B
end
class GC
	super GA
	redef type E: C
end

class GGA
	super G
	redef type E: GA
end
class GGB
	super GGA
	redef type E: GB
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
var gb: GB = new GB
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

var ga: GA = gb

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

var ggb: GGB = new GGB
var ggbe: nullable GB
var ggbee: nullable B

ggb.e = gb
ggbe = ggb.e
ggbee = ggbe.e
ggbee.foo
ggbee.bar

#alt4#ggb.e = ga.as(GB)
#alt4#ggbe = ggb.e
#alt4#ggbee = ggbe.e
#alt4#ggbee.foo
#alt4#ggbee.bar

var gga: GGA = ggb

gga.e = ga
ggbe = ggb.e
ggbee = ggbe.e
ggbee.foo
ggbee.bar

var gc: GA = new GC
gc.e = c

#alt5#ggb.e = gc.as(GB)
#alt5#ggbe = ggb.e
#alt5#ggbee = ggbe.e
#alt5#ggbee.foo
#alt5#ggbee.bar

#alt6#gga.e = gc
#alt6#ggbe = ggb.e
#alt6#ggbee = ggbe.e
#alt6#ggbee.foo
#alt6#ggbee.bar

var ga2: GA = new GA
ga2.e = b

#alt7#ggb.e = ga2.as(GB)
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
