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

class A
	fun foo: Int do return 1
	fun foo=(o: Int) do o.output
end

class G[E]
	fun foo: E do return 2
	fun foo=(o: E) do o.output
end

var a = new A
var af = a.foo
var ap = af + 10
a.foo = ap
a.foo = a.foo + 20
a.foo += 30

var g = new G[Int]
var gf = g.foo
var gp = gf + 10
g.foo = gp
g.foo = g.foo + 20
g.foo += 30

var gc = new G[Float]
#alt1#var gcf = gc.foo
#alt1#var gcp = gcf + 10.0
#alt1#gc.foo = gcp
#alt2#gc.foo = gc.foo + 20.0
#alt3#gc.foo += 30

var gd: G[Numeric] = new G[Int]
var gdf = gd.foo
var gdp = gdf + 10
gd.foo = gdp
gd.foo = gd.foo + 20
gd.foo += 30

var gdc: G[Numeric] = new G[Float]
#alt4#var gdcf = gdc.foo
#alt4#var gdcp = gdcf + 10.0
#alt4#gdc.foo = gdcp
#alt5#gdc.foo = gdc.foo + 20.0
#alt6#gdc.foo += 30.0

var c = 'X'
