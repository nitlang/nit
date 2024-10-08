# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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
	init inita do
		'A'.output
		' '.output
	end
	init init_par(c: Char) do
		'A'.output
		'2'.output
		c.output
		' '.output
	end
	init init_par3(c: Char) do
		'A'.output
		'3'.output
		c.output
		' '.output
	end
	fun work do '\n'.output
end

class B
	super A
	init initb do
		'B'.output
		'1'.output
		' '.output
		inita
		'B'.output
		'2'.output
		' '.output
	end
	init init_par do
		inita
		'B'.output
		'3'.output
		' '.output
	end
	init init_par2(c: Char) do
		inita
		'B'.output
		'4'.output
		c.output
		' '.output
	end
end

class C
	super A
	init do
		'C'.output
		'1'.output
		' '.output
		super
		'C'.output
		'2'.output
		' '.output
	end
	redef init init_par(c: Char)
	do
		'C'.output
		'3'.output
		c.output
		' '.output
	end
	redef init init_par3(c: Char)
	do
		'C'.output
		'4'.output
		c.output
		' '.output
		super
		'C'.output
		'5'.output
		' '.output
	end
end

class D
	super B
	super C
	init initd do
#alt1#		super
		'D'.output
		'1'.output
		' '.output
#alt4#		init
		initb #alt2#
		'D'.output
		'2'.output
		' '.output
#alt5#		initb
#alt3#		init
		'D'.output
		'3'.output
		' '.output
	end
end

(new A.inita).work
(new A.init_par('x')).work
(new B.initb).work
(new B.init_par).work
(new B.init_par2('y')).work
(new C).work
(new C.init_par('z')).work
(new D.initd).work
