# This file is part of NIT ( http://www.nitlanguage.org ).
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

class A[T]
	fun isa_gtno(x: Object): Bool do return x isa G[T, Bool]
end

class G[E, F]
	fun new_ae: A[nullable Object] do return new A[E]
	fun isa_af(x: Object): Bool
	do 
		return x isa A[F]
	end
end

class H[E, F]
	fun new_gafgaaenae: G[nullable Object, nullable Object] do return new G[A[F],G[A[A[E]],nullable A[E]]]
end

var gib = new G[Int, Bool]

var gib_ae = gib.new_ae
gib_ae.output_class_name
(gib_ae isa A[Object]).output
(gib_ae isa A[Int]).output
(not gib_ae isa A[Bool]).output

'\n'.output

var hib = new H[Int, Bool]
var gib_x = hib.new_gafgaaenae
gib_x.output_class_name
(gib_x isa G[Object, Object]).output
(gib_x isa G[A[Object], G[nullable A[Object], nullable Object]]).output
(not gib_x isa G[A[Object], G[nullable A[Object], Object]]).output
(gib_x isa G[A[Bool],G[A[A[Int]],nullable A[Int]]]).output
(not gib_x isa G[A[Bool],G[A[A[Bool]],nullable A[Int]]]).output

'\n'.output

var gbi = new G[Bool, Int]
gbi.output_class_name
var gbi_ae = gbi.new_ae
gbi_ae.output_class_name
(not gib.isa_af(gib_ae)).output
(gib.isa_af(gbi_ae)).output
(gib_ae.isa_gtno(gib)).output
(not gib_ae.isa_gtno(gib_x)).output
(not gib_ae.isa_gtno(gbi)).output
(not gib_x.isa_af(gib_ae)).output
(not gib_x.isa_af(gbi_ae)).output
(gbi.isa_af(gib_ae)).output
(not gbi.isa_af(gbi_ae)).output
