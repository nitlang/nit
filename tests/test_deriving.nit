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

import deriving

redef class Object
	# Redef to avoid unstable `object_id`
	redef fun inspect_head do return "{class_name}"
end

class A
	auto_inspect
	auto_derive
	super DeriveToS#alt1#
	super DeriveEqual#alt2#

	var i: Int
	var s: String
end

class A2
	super DeriveToS
	super DeriveEqual

	redef fun derive_to_map
	do
		var res = super
		res["string"] = s # drop i
		return res
	end

	var i: Int
	var s: String
end

class B
	super A#alt4#super A2

	auto_inspect
	auto_derive#alt3#

	var a: A
end

var a = new A(5, "Hello")
print a.inspect
print a.derive_to_map.join(" ", "=")
print a

print ""

var a2 = new A(5, "Hel" + "lo")
var a3 = new A(6, "Hel" + "lo")
print a == a2
print a.hash == a2.hash
print a != a3

print ""

var b = new B(100, "World", a)
print b.inspect
print b.derive_to_map.join(" ", "=")
print b

print ""

var b2 = new B(100, "World", a2)
var b3 = new B(100, "World", a3)
print b == b2
print b.hash == b2.hash
print b != b3
