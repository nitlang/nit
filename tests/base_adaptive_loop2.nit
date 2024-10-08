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
	fun foo do 1.output
end

class B
	super A
	fun bar do 2.output
end

var x: A #alt3# var x
x = new B

var i = 0
while i < 3 do
	i += 1
	x.bar
	x = new A
	x.foo
	break#alt1#
end
x.foo
#alt2#x.bar
