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

import serialization
import json_serialization
import sql_serialization
import sqlite3

# Simple class
class A
	auto_serializable
	super Serializable

	var b: Bool
	var c: Char
	var f: Float
	var i: Int
	var s: String
	var n: nullable Int
	var array: Array[nullable Object] = new Array[nullable Object].with_items(88, "hello", null)

	init(b: Bool, c: Char, f: Float, i: Int, s: String, n: nullable Int)
	do
		self.b = b
		self.c = c
		self.f = f
		self.i = i
		self.s = s
	end

	redef fun to_s do return "<A: {b} {c} {f} {i} {s} {n != null}>"
end

# Sub-class of A
class B
	auto_serializable
	super A

	var ii: Int
	var ss: String

	init(b: Bool, c: Char, f: Float, i: Int, s: String, n: nullable Int, ii: Int, ss: String)
	do
		super(b, c, f, i, s, n)

		self.ii = ii
		self.ss = ss
	end

	redef fun to_s do return "<B: {super} {ii} {ss}>"
end

# Composed of an A and a B
class C
	auto_serializable
	super Serializable

	var a: A
	var b: B
	var aa: A

	init(a: A, b: B)
	do
		self.a = a
		self.b = b
		self.aa = a
	end

	redef fun to_s do return "<C: {a} {b}>"
end

# Class with cyclic reference
class D
	auto_serializable
	super B

	var d: nullable D = null

	redef fun to_s do return "<D: {super} {d != null}>"
end

class E
	auto_serializable
	super Serializable

	var gender: Char
	var age: Int
	var name: String
	var is_major: Bool
	
	init(c: Char, i: Int, s: String, b: Bool)
	do
		self.gender = c
		self.age = i
		self.name = s
		self.is_major = b
	end
	redef fun to_s do return "<E: {gender} {name}, {age}, {is_major}>"
end

var a = new A(true, 'a', 0.1234, 1234, "asdf", null)
var b = new B(false, 'b', 123.123, 2345, "hjkl", 12, 1111, "qwer")
var c = new C(a, b)
var d = new D(false, 'b', 123.123, 2345, "new line ->\n<-", null, 1111, "\t\f\"\r\\/")
d.d = d

var e = new E('M', 21, "Name", true)

for o in new Array[nullable Serializable].with_items(a, b, c, d) do
	var stream = new StringOStream
	var serializer = new JsonSerializer(stream)
	serializer.serialize(o)

	print "# Nit:\n{o}\n"
	print "# Json:\n{stream}\n"
end

var serializer = new SqlSerializer("serialization.db")
serializer.serialize(e)

var db = new Sqlite3.open("serialization.db")
assert sqlite_open: db.error.is_ok

var sel = "SELECT * FROM e;"

var stm = db.prepare(sel)

while stm.step.is_row do
	assert stm.column_text(1) == 'M'
	assert stm.column_int(2) == 21
	assert stm.column_text(3) == "Name"
end

db.close




