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

import base_arg_default
import core::collection::array

fun order(i: Int): Int do
	'>'.output
	i.output
	return i
end

fun bar(a: Int, bs: Int..., c: Int)
do
	a.output
	for b in bs do
		' '.output
		b.output
	end
	c.output
end

var a = new A
a.foo(order(1),order(2),order(3),order(4),order(5),order(6))
a.foo(a=order(1),b=order(2),c=order(3),d=order(4),e=order(5),f=order(6))
a.foo(a=order(1),b=order(2),order(3),order(4),e=order(5),f=order(6))
a.foo(f=order(6),order(3),e=order(5),b=order(2),order(4),a=order(1))
a.foo(f=order(6),d=order(4),e=order(5),b=order(2),c=order(3),a=order(1))

bar(order(1),order(2),order(3))
bar(order(1),order(2),order(3),order(4))
