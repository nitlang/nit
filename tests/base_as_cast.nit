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

class O
	redef fun output do 0.output
end

class A
	super O
	init do end
end

class U
	redef fun output do 1.output
end

class B
	super A
	super U
	redef fun output do 2.output
	init do end
end

var a: Object = new A
var b: Object = new B

a.as(Object).output
a.as(O).output
a.as(A).output
#alt1#a.as(U).output
#alt2#a.as(B).output
#alt3#a.as(Int).output
#alt4#a.as(Comparable).output

'\n'.output

b.as(Object).output
b.as(O).output
b.as(A).output
b.as(U).output
b.as(B).output
#alt5#b.as(Int).output
#alt6#b.as(Comparable).output

