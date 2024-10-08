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

class A
end

class B
	super A
end

class C
	super A
end

class D
	super B
	super C
end

class E
	super D
end

class F
	super D
end

class G
	super F
end


var a = new A
var b = new B
var c = new C
var d = new D
var e = new E
var f = new F
var g = new G

assert (g isa A) # true
assert not (a isa G) # false
assert (d isa B) # true

true.output
