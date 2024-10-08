# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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
    var foo: nullable Object
    var bar: nullable A
    var baz: nullable Int
    redef fun output do 'A'.output end

    init do end
end

class B
	super A
    redef var foo: nullable Int
    redef var bar: nullable B
    redef fun output do 'B'.output end

    init do end
end

var a = new A
var b = new B
var ab: A = b

a.foo = a
a.foo.output
a.foo = b
a.foo.output
a.foo = 1
a.foo.output
a.bar = a
a.bar.output
a.bar = b
a.bar.output
a.baz = 1
a.baz.output

#ab.foo = a
#ab.foo.output
#ab.foo = b
#ab.foo.output
ab.foo = 1
ab.foo.output
#ab.bar = a 
#ab.bar.output
ab.bar = b
ab.bar.output
ab.baz = 1
ab.baz.output

#b.foo = a
#b.foo.output
#b.foo = b
#b.foo.output
b.foo = 1
b.foo.output
#b.bar = a
#b.bar.output
b.bar = b
b.bar.output
b.baz = 1
b.baz.output

