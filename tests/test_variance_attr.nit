# This file is part of NIT ( http://www.nitlanguage.org ).
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
    var _foo: nullable Object
    var _bar: nullable A
    var _baz: nullable Int
    redef fun output do 'A'.output end

    init do end
end

class B
	super A
    redef var _foo: nullable Int
    redef var _bar: nullable B
    redef fun output do 'B'.output end

    init do end
end

var a = new A
var b = new B
var ab: A = b

a._foo = a
a._foo.output
a._foo = b
a._foo.output
a._foo = 1
a._foo.output
a._bar = a
a._bar.output
a._bar = b
a._bar.output
a._baz = 1
a._baz.output

#ab._foo = a
#ab._foo.output
#ab._foo = b
#ab._foo.output
ab._foo = 1
ab._foo.output
#ab._bar = a 
#ab._bar.output
ab._bar = b
ab._bar.output
ab._baz = 1
ab._baz.output

#b._foo = a
#b._foo.output
#b._foo = b
#b._foo.output
b._foo = 1
b._foo.output
#b._bar = a
#b._bar.output
b._bar = b
b._bar.output
b._baz = 1
b._baz.output

