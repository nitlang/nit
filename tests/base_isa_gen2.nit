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

class A[T] end

class B[U]
	super A[U]
end

class C[V]
	super A[V]
end

class D[T, U]
	super B[T]
	super C[T]
end

var a = new A[Object]
var b = new B[Object]
var c = new C[Object]
var d = new D[Object, Object]

assert a isa A[Object]			# true
assert not a isa B[Object]		# false
assert b isa A[Object]			# true
assert b isa B[Object]			# true
assert not b isa C[Object]		# false
assert c isa A[Object]			# true
assert not c isa B[Object]		# false
assert c isa C[Object]			# true
assert not c isa D[Object, Object] # false
assert d isa A[Object]			# true
assert d isa B[Object]			# true
assert d isa C[Object]			# true
assert d isa D[Object, Object] 	# false


true.output
