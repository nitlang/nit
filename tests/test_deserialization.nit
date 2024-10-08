# This file is part of NIT ( https://nitlanguage.org ).
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

import serialization

# Simple class
class A
	auto_serializable

	var b: Bool
	var c: Char
	var f: Float
	var i: Int
	var s: String is serialize_as "serialization_specific_name"
	var n: nullable Int
	var password = "p4ssw0rd" is lazy, noserialize

	redef fun to_s do return "<A: {b} {c} {f} {i} {s} {n != null} {password}>"
end

# Sub-class of A
class B
	auto_serializable
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

# Class with generics
class E
	auto_serializable

	var a = new Array[Object].with_items("hello", 1234, 123.4)
	var b = new Array[nullable Serializable].with_items("hella", 2345, 234.5)

	redef fun to_s do return "<E: a: {a.join(", ")}; b: {b.join(", ")}>"
end

# Parameterized class
class F[N: Numeric]
	auto_serializable

	var n: N

	redef fun to_s do return "<F: {n}>"
end

# Other collections
class G
	auto_serializable

	var hs = new HashSet[Int]
	var s: Set[String] = new ArraySet[String]
	var hm = new HashMap[String, Int]
	var am = new ArrayMap[String, String]

	init
	do
		hs.add -1
		hs.add 0
		s.add "one"
		s.add "two"
		hm["one"] = 1
		hm["two"] = 2
		am["three"] = 3.to_s
		am["four"] = 4.to_s
	end

	redef fun to_s do return "<G: hs: {hs.join(", ")}; s: {s.join(", ")}; "+
		"hm: {hm.join(", ", ". ")}; am: {am.join(", ", ". ")}>"
end

class TestEntities
	var a = new A(true, 'a', 0.1234, 1234, "asdf", null)
	var b = new B(false, 'b', 123.123, 2345, "hjkl", 12, 1111, "qwer")
	var c = new C(a, b, a)
	var d = new D(false, 'b', 123.123, 2345, "new line ->\n<-", null, 1111, "\t\f\"\r\\/")
	init do d.d = d
	var e = new E
	var fi = new F[Int](2222)
	var ff = new F[Float](33.33)
	var g = new G

	# should work without nitserial
	var without_generics: Array[Serializable] = [a, b, c, d: Serializable]

	# Default works only with Nit serial
	var with_generics: Array[Serializable] = [a, b, c, d, e, fi, ff, g: Serializable]
end

# We instantiate it here so that `nitserial` detects generic types as being alive
var entities = new TestEntities
