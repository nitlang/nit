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

extern class NativeA
	new `{ return NULL; `}
	fun foo do print "a"
end

extern class NativeB
	super NativeA
	new `{ return NULL; `}
	redef fun foo do print "b"
end

extern class NativeC
	super NativeA
	new `{ return NULL; `}
	redef fun foo do print "c"
end

class A
	type NATIVE: NativeA
	var native: NATIVE
end

class B
	super A
	redef type NATIVE: NativeB
end

class C
	super A
	redef type NATIVE: NativeC
end

for a in [new A(new NativeA), new B(new NativeB), new C(new NativeC)] do
	a.native.foo
end

var a = new A(new NativeA)
var b = new A(new NativeB)
var c = new B(new NativeB)
#alt1# var d = new B(new NativeA)
a.native = new NativeB
#alt2# c.native = new NativeA
