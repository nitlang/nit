# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012 Alexandre Terrasa <alexandre@moz-code.org>
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

import base_minimal

class A end

class B
	super A
end

class C
	super A
end

class E
	super A
end

class G
	super A
end

class D
	super C
	super E
end

class F
	super E
	super G
end

var a = new A
var b = new B
var c = new C
var d = new D
var e = new E
var f = new F
var g = new G

# A
assert not a isa B

# B
assert b isa A
assert b isa B
assert not b isa C

# C
assert c isa A
assert not c isa B
assert c isa C

# D
assert d isa A
assert not d isa B
assert d isa C
assert d isa D
assert d isa E
assert d isa E
assert d isa E
assert d isa E

# E
assert e isa A
assert not e isa B
assert e isa E

# F
assert f isa A
assert f isa E
assert f isa F
assert f isa G
assert not f isa D

# G
assert g isa A
assert not g isa B
assert g isa G

true.output
