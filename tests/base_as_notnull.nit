# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2005-2008 Jean Privat <jean@pryen.org>
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

import kernel

class A
	var i: Int
	redef fun output do _i.output
	init(i: Int) do _i = i
end

class B
	super A
end

fun outa(a: A) do a.output
fun outb(b: B) do b.output

var a: A = new A(1)
var ab: A = new B(2)
var b: B = new B(3)
var na: nullable A = new A(4)
var nab: nullable A = new B(5)
var nb: nullable B = new B(6)
var nan: nullable A = null
var nbn: nullable B = null

outa(a.as(not null))
outa(ab.as(not null))
outa(b.as(not null))
outa(na.as(not null))
outa(nab.as(not null))
outa(nb.as(not null))

'\n'.output

#alt1#outb(a.as(not null))
#alt2#outb(ab.as(not null))
outb(b.as(not null))
#alt3#outb(na.as(not null))
#alt4#outb(nab.as(not null))
outb(nb.as(not null))

'\n'.output

#alt5#nan.as(not null).output
#alt6#nbn.as(not null).output
#alt7#null.as(not null).output
