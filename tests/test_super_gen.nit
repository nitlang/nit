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

class A[E: Object, F: Object]
	fun foo(e: E, f: F): F
	do
		0.output
		return f
	end
end

class B[G: Int]
	super A[Bool,G]
	redef fun foo(b: Bool, g: G): G
	do
		1.output
		super
		return g
	end

	init
	do
	end
end

var b = new B[Int]
b.foo(true, 5).output
