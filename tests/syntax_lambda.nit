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

class A
	fun foo(any: Object) do end
end

class B
end

fun bar(any: Object) do end

var a = fun do end

var b = fun do print 1 end
#alt1# var b2 = fun do print 1 # mandatory end
var b3 = (fun do print 1 end)
#alt2# var b3 = (fun do print 1) # still mandatory end

var c = fun do
	print 1
	return
end

var d = fun(a: A) do print 1 end
var d2 = fun(a) do print 1 end # might be a sematic error but is legal syntax

var e = fun: A do return new A end

var f = fun(a: A, b: B...): C do return a.foo(b) end

var g = [fun: Int do return 1 end, fun: Int do return 2 end]

bar(fun do print 1 end)
bar fun do print 1 end

bar(
fun
do
	print 1
end
)

(fun do print 1 end).bar
fun do print 1 end.bar # this is unexpectedly legal

var z = fun do
	return fun do
		return 1
	end
end

fun do fun do end.foo fun do end end.bar # hmmm
