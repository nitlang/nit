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

import end

interface Object
end

class A
end

class B
	super A
end

class G[E:B]
end

class H[F:A]
	#alt1 super G[F]
	#alt2 var a: G[F]
	#alt3 fun b: G[F] is abstract
	#alt4 fun c(x: G[F]) is abstract
end

class I
	type V: A
	#alt5 var a: G[V]
	#alt6 fun b: G[V] is abstract
	#alt7 fun c(x: G[V]) is abstract
end

#alt8 class J[FF:G[A]]
#alt8 end

var a = new A
var b = new B
#alt9 var ga = new G[A]
var gb = new G[B]
var ha = new H[A]
var hb = new H[B]
var i = new I
