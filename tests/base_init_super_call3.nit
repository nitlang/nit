# This file is part of NIT ( https://nitlanguage.org ).
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
	init(i: Int) do i.output
end

class B
	super A
	init(i)
	do
		super
		(i+1).output
	end
end

class C
	super A
	init(i)
	do
		(i+1).output
		super
	end
end

class D
	super A
	init(i)
	is
		nosuper
	do
		(i+1).output
	end
end

class E
	super A
	init(i)
	do
		(i+1).output
	end
end

class F
	super A
	redef init(i)
	do
		super
		(i+1).output
	end
end

class G
	super A
	redef init(i)
	do
		(i+1).output
		super
	end
end

class H
	super A
	redef init(i)
	is
		nosuper
	do
		(i+1).output
	end
end

class I
	super A
	redef init(i)
	do
		(i+1).output
	end
end

var a = new A(10)
var b = new B(20)
var c = new C(30)
var d = new D(40)
var e = new E(50)
var f = new F(60)
var g = new G(70)
var h = new H(80)
var i = new I(90)
