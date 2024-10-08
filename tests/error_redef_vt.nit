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

class G[E: Object]
end

class A
	redef type N1: A
	redef type N2: FAIL
	fun foo1: G[N1] do return new G[N1]
	fun foo2: G[N2] do return new G[N2]
end

var a = new A
a.foo1
a.foo2
