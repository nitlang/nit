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

class A
	fun f do 1.output
	fun f2: Int do return 2
	fun f2=(i:Int) do i.output
	fun f3=(i:Int) do i.output
	var v = 4
	type T: A
	fun t(t: T): T do return t
end

class B
	super A#alt1#
	redef fun f do 10.output
	redef var f2 = 20
	var f3 = 30 is redef writable
	redef var v = 40
	redef type T: B
end

class C
	super B#alt2#
	redef fun f do 100.output
	redef var f2 = 200
	redef var f3 = 300
	redef var v = 400
	redef type T: C

end

var a = new A
a.f
a.f2 = -2
a.f2.output
a.f3 = -3
a.t(a).f

a = new B
a.f
a.f2 = -2
a.f2.output
a.f3 = -3
a.t(a).f

a = new C
a.f
a.f2 = -2
a.f2.output
a.f3 = -3
a.t(a).f
