# This file is part of NIT ( http://www.nitlanguage.org ).
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

interface Foo
	var a: Object is abstract
	#alt1#var b = 1 is abstract
	#alt2#var b is abstract, noautoinit
end

class Bar
	super Foo
	redef var a
end

class Baz
	super Foo
	redef fun a do return 100
	redef fun a=(x) do (101).output
end

class FooBar
	super Foo
end

var f: Foo = new Bar(1)
f.a.output
f.a = 2
f.a.output

f = new Baz
f.a.output
f.a = 3
f.a.output

f = new FooBar
#alt3#f.a.output
#alt4#f.a = 4
