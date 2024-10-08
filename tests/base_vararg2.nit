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

import array

class G[E]
	fun foo(es:E...)
	do
		es.output_class_name
		' '.output
		es[0].output_class_name
		' '.output
		es[1].output_class_name
	end
end

class X[T:G[nullable Object],U]
	fun bar(t: T, u: U)
	do
		t.foo(u, u)
	end
end

var go = new G[Object]
go.foo(1, true)

var gi = new G[Int]
gi.foo(1, 2)

var goi: G[Object] = new G[Int]
goi.foo(1, 2)
#alt1#goi.foo(1, true)

var xgoo = new X[G[Object], Object]
xgoo.bar(go, 1)
xgoo.bar(gi, 1)
xgoo.bar(goi, 1)
xgoo.bar(go, true)
#alt2#xgoo.bar(gi, true)
#alt3#xgoo.bar(goi, true)

var xgoi = new X[G[Object], Int]
xgoi.bar(go, 1)
xgoi.bar(gi, 1)
xgoi.bar(goi, 1)
var gb: G[Object] = new G[Bool]
#alt4#xgoi.bar(gb, 1)

var xgio = new X[G[Int], Object]
xgio.bar(gi, 1)
#alt5#xgio.bar(gi, true)

var xgii = new X[G[Int], Object]
xgii.bar(gi, 1)
