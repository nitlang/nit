# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

class A
	fun foo do end
	fun bar(a: Int): Int do return 1
	fun baz(a, b: Int) do end
	fun gaz(a: Int, b: Float...) do end
end

fun top1 do end

fun top2(a: Int) do end

# comment 1
var a = new A # comment 2
a.foo # comment 3
a.bar 1 # comment 4
a.baz(1, 2) # comment 5
top1 # comment 6
top2 10 # comment 7
print 10 # comment 8
var b = a.bar(1)
