# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2006-2008 Jean Privat <jean@pryen.org>
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

class A
	var a: Int

	init(a: Int)
	do
		a = a
	end
end

class B
	super A
	redef fun ==(o: nullable Object): Bool
	do
		if not o isa B then
			return false
		end

		return o.a.is_same_instance(a)
	end

	init(b: Int)
	do
		a = b
	end
end

var a1 = new A(1)
var a2 = a1
var a3 = new A(1)
var b1 = new B(1)
var b2 = new B(1)
var b3 = new B(2)

a1.is_same_type(a1).output
a1.is_same_type(a2).output
a1.is_same_type(a3).output
(not a1.is_same_type(b1)).output
(not a1.is_same_type(b2)).output
(not a1.is_same_type(b3)).output
(not b1.is_same_type(a1)).output
(not b1.is_same_type(a2)).output
(not b1.is_same_type(a3)).output
b1.is_same_type(b1).output
b1.is_same_type(b2).output
b1.is_same_type(b2).output

'\n'.output

(a1.is_same_instance(a1)).output
(a1.is_same_instance(a2)).output
(not a1.is_same_instance(a3)).output
(not a1.is_same_instance(b1)).output
(not b1.is_same_instance(b2)).output
(not b1.is_same_instance(b3)).output

'\n'.output

(a1 == a1).output
(a1 == a2).output
(not a1 == a3).output
(not a1 == b1).output
(b1 == b1).output
(b1 == b2).output
(not b1 == b3).output

