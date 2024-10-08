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

class MyClass
	var i = 12
	var s = "asdf"
	redef fun to_s do return "<{class_name} i:{i} s:{s}>"
end

fun foo(v: nullable Int): nullable Int do
	print "foo"
	return v
end

assert 1 == 1
#alt1#assert 1 == "some string"
#alt2#assert 1 == null
#alt3#assert foo(12) == null
#alt4#assert foo(null) != null

#alt5#var x = 0.0
#alt5#var y = 1.0
#alt5#assert x.is_approx(y, 0.5)

#alt6#assert not true

#alt7#var a = [true, false, true]
#alt7#assert a[1]

#alt8#assert [0, 1, 2].is_empty

#alt9#assert (new MyClass) == 0

#alt10#var n = foo(null)
#alt10#assert n != null and n.to_s == "crash" # Not explained

#alt11#assert not 1 == 1
#alt12#assert 4 isa MyClass

#alt13#var f = false
#alt13#assert f # Not explained
