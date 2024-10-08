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

fun foo is abstract
fun bar is intern

class A
	var a: A is noautoinit
	fun foo do 0.output
end

var a = new A
var n: nullable A = null
var o: Object = 1

do
	1.output
	if true then abort
	666.output
catch
	1.output
end

do
	2.output
	n.foo
	666.output
catch
	2.output
end

do
	3.output
	foo
	666.output
catch
	3.output
end

do
	4.output
	assert false
	666.output
catch
	4.output
end

do
	5.output
	o.as(A).foo
	666.output
catch
	5.output
end

do
	6.output
	a.a.foo
	666.output
catch
	6.output
end

do
	7.output
	bar
	666.output
catch
	7.output
end
