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

class Foo
	var a: Object is abstract
	var b: Object = 10 is abstract
	#alt1#var b is abstract, noautoinit
	#alt1#var c = 1 is abstract, lazy
	#alt1#var d = 1 is abstract, autoinit
	#alt1#var e = 1 is abstract, readonly
end

class Bar
	super Foo
	redef var a
	redef var b is noinit
end

class Baz
	super Foo
	redef fun a do return 100 #alt2#
	redef fun a=(x) do (101).output #alt3#
	redef fun b do return 200 #alt4#
	redef fun b=(x) do (201).output #alt5#
end

var f: Foo = new Bar(1)
f.a.output
f.a = 2
f.a.output

'\n'.output

f.b.output
f.b = 20
f.b.output

'\n'.output

f = new Baz
f.a.output
f.a = 3
f.a.output

'\n'.output

f.b.output
f.b = 30
f.b.output
