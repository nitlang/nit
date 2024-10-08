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

import kernel
class A
	type T: K
	type U: T
	fun check(o: Object)
	do
		o.output
		'<'.output
		'T'.output
		(o isa T).output
		o.output
		'<'.output
		'U'.output
		(o isa U).output
	end
	fun check2(o: T)
	do
		o.output
		'<'.output
		'T'.output
		'\n'.output
	end
	fun check3(o: U)
	do
		o.output
		'<'.output
		'U'.output
		'\n'.output
	end
end
class B
	super A
	redef type T: L
end
class J
	redef fun output do 'J'.output
end
class K
	super J
	redef fun output do 'K'.output
end
class L
	super K
	redef fun output do 'L'.output
end

var a = new A
a.check(new J)
a.check(new K)
a.check(new L)
#alt1#a.check2(new J) # Static error
a.check2(new K)
a.check2(new L)
#alt2#a.check3(new J) # Static error
a.check3(new K)
a.check3(new L)
var b = new B
b.check(new J)
b.check(new K)
b.check(new L)
#alt3#b.check2(new J) # Static error
#alt4#b.check2(new K) # Static error
b.check2(new L)
#alt5#b.check3(new J) # Static error
#alt6#b.check3(new K) # Static error
b.check3(new L)
var ab: A = new B
ab.check(new J)
ab.check(new K)
ab.check(new L)
#alt7#ab.check2(new J) # Static error
#alt8#ab.check2(new K) # Dynamic error
ab.check2(new L)
#alt9#ab.check3(new J) # Static error
#alt10#ab.check3(new K) # Dynamic error
ab.check3(new L)
