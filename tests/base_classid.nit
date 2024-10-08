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

class A
	init do end
end

class B
	super A
	fun unreasheable
	do
		var a: A
		a = new B
		(a isa C).output
	end
	init do end
end

class C
	super A
	init do end
end

var a: A = new A
var ab: A = new B
var b: B = new B



(not(a == b)).output
(a == a).output
(a isa A).output
(ab isa A).output
(b isa A).output
(not(a isa B)).output
(ab isa B).output
(b isa B).output
