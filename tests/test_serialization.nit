# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

#alt2#module test_serialization_alt2 is serialize

import serialization
import json

# Simple class
class A
	serialize
#alt5#	serialize

	var b: Bool
	var c: Char#alt2#
	#alt2#var c: Char is noserialize
	var f: Float#alt4#
	#alt4#var f: Float is serialize
	var i: Int
	var s: String
	var n: nullable Int
	var array = new Array[nullable Object].with_items(88, "hello", null)

	redef fun to_s do return "<A: {b} {c} {f} {i} {s} {n != null}>"
end

# Sub-class of A
class B
	auto_serializable#alt2##alt3#
#alt2#	noserialize
#alt3#	noserialize
	super A

	var ii: Int
	var ss: String

	redef fun to_s do return "<B: {super} {ii} {ss}>"
end

# Composed of an A and a B
class C
	auto_serializable

	var a: A
	var b: B
	var aa: A

	redef fun to_s do return "<C: {a} {b}>"
end

# Class with cyclic reference
class D
	auto_serializable
	super B

	var d: nullable D = null

	redef fun to_s do return "<D: {super} {d != null}>"
end

var a = new A(true, 'a', 0.1234, 1234, "asdf", null)
var b = new B(false, 'b', 123.123, 2345, "hjkl", 12, 1111, "qwer")
var c = new C(a, b, a)
var d = new D(false, 'b', 123.123, 2345, "new line ->\n<-", null, 1111, "\t\f\"\r\\/")
d.d = d

for o in new Array[Serializable].with_items(a, b, c, d) do
	var stream = new StringWriter
	var serializer = new JsonSerializer(stream)
	#alt1#serializer.plain_json = true
	serializer.serialize(o)

	print "# Nit:\n{o}\n"
	print "# Json:\n{stream}\n"
end
