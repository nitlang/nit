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

class Animal end

class Canard
	super Animal
end

class A
end

class B[T]
	super A
end

class C[T]
	super B[T]
end

var b1 = new B[Canard]
var b2 = new B[B[Canard]]

assert b1 isa A
assert b1 isa B[Canard]
assert b1 isa B[Animal]
assert not b1 isa B[Bool]
assert not b2 isa C[Animal]

assert not b2 isa B[Bool]
assert b2 isa B[B[Canard]]
assert not b2 isa B[B[Bool]]
assert b2 isa B[B[Animal]]

true.output
