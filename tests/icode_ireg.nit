# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2010 Jean Privat <jean@pryen.org>
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

fun maybe: Bool do return true

fun foo
do
	var a: Object
	var b: Object
	var c: Object
	var d: Object
	var e: Object
	var f: Object
	var g: Object
	var h: Object
	var i: Object
	var j: Object
	var k: Object
	c = 5 #R1
	b = 2 #R2
	a = 1 #R3
	var out = not maybe
	loop
		a.output #Deferred free R3
		f = 4 #R4
		e = 6 #R5
		d = 3 #R6
		if maybe and out then break
		out = maybe
	end #Free a(R3)
	b.output #Free R2
	d.output #Free R6
	g = 6 #R2
	out = not maybe
	loop
		loop
			f.output #Deferred free
			if maybe then break
		end
		h = 7 #R3
		if maybe and out then break
		out = maybe
	end #Free f(R4)
	i = 8 #R4
	j = 9 #R6
	k = 10 #R7
	c.output #Free R1
	e.output #Free R5
	g.output #Free R2
	h.output #Free R3
	i.output #Free R4
	j.output #Free R6
	k.output #Free R7
end

foo
