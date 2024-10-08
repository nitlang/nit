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

interface A
	type V1: Object
	fun v1(v: V1): V1 do return v
	type V2: Object
	fun v2(v: V2): V2 do return v
end
interface B
	super A
	redef type V1: Discrete
	redef type V2: Discrete is fixed
end
class C
	super B

	# Because of the workaround, there is no simple way to see the subtype relation
	#alt1#redef fun v1(v: Discrete): Discrete do return v
	redef fun v2(v: Discrete): Discrete do return v
end

var c: A = new C
c.v1(1).output
c.v1(2).output
