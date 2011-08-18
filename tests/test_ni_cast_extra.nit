# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2011 Alexis Laferrière <alexis.laf@xymus.net>
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
    fun isa_b : Bool is extern import A as(B)
    fun as_b : nullable B is extern import A as(B), A as(nullable B)
end

class B
end

class C
special A
    fun isa_a : Bool is extern import C as(A)
end

class D # triangle
special A
special B
    init do end
    fun as_a : A is extern import D as(A)
end

# isa
var a = new A
var c = new C
var d = new D

print "a isa b {a.isa_b} (expected: false)"
print "c isa a {c.isa_a} (expected: true)"
print "d isa b {d.isa_b} (expected: true)"

var da = d.as_a
var db = d.as_b
var ab = a.as_b

print "da is null? {da==null} (expected: false)"
print "db is null? {db==null} (expected: false)"
print "ab is null? {ab==null} (expected: true)"
