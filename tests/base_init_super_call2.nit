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
	var i: Int
end

class B1
	super A
	#alt1#init is old_style_init do super
end

class B2
	super A
	init is old_style_init do super(3)
end

class B3
	super A
	#alt2#init is old_style_init do super(true)
end

class B4
	super A
	#alt3#init is old_style_init do end
end

class C1
	super A
	init(j: Int)
	is
		old_style_init
	do
		super
		j.output
	end
end

class D1
	super A
	init(j: Int)
	is
		old_style_init
	do
		super
		j.output
	end
end

class E1
	super A
	init(j: Bool)
	is
		old_style_init
	do
		super(8)#alt4#super
		j.output
	end
end

class C2
	super A
	init(j: Int)
	is
		old_style_init
	do
		super(j)
		j.output
	end
end

class D2
	super A
	init(j: Int)
	is
		old_style_init
	do
		super(j)
		j.output
	end
end

class E2
	super A
	init(j: Bool)
	is
		old_style_init
	do
		super(11)#alt5#super(j)
		j.output
	end
end

class C3
	super A
	init(j: Int)
	is
		old_style_init
	do
		super(j)#alt6#
		j.output
	end
end

class D3
	super A
	init(j: Int)
	is
		old_style_init
	do
		super(j)#alt6#
		j.output
	end
end

class E3
	super A
	init(j: Bool)
	is
		old_style_init
	do
		super(14)#alt6#
		j.output
	end
end

class F1
	super A
	init(j: Int, k: Bool)
	is
		old_style_init
	do
		super
		j.output
	end
end

class F2
	super A
	init(j: Int, k: Bool)
	is
		old_style_init
	do
		super(j)#alt6#
		j.output
	end
end

var x
x = new A(1)
x.i.output
x = new B1(2) #alt1# x = new B1
x.i.output
x = new B2
x.i.output
x = new B3(4) #alt2# x = new B3
x.i.output
x = new B4(5) #alt3# x = new B4
x.i.output
x = new C1(6)
x.i.output
x = new D1(7)
x.i.output
x = new E1(true)
x.i.output
x = new C2(9)
x.i.output
x = new D2(10)
x.i.output
x = new E2(true)
x.i.output
x = new C3(12)
x.i.output
x = new D3(13)
x.i.output
x = new E3(true)
x.i.output
x = new F1(15,true)
x.i.output
x = new F2(16,true)
x.i.output
