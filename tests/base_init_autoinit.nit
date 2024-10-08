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
	fun toto(i: Int) is autoinit do
		'A'.output
		'o'.output
		i.output
	end

	fun tata is autoinit do
		'A'.output
		'a'.output
		'\n'.output
	end

	init do
		'A'.output
		'\n'.output
	end
end

class B
	super A
	fun tutu=(j: Int) is autoinit do
		# no super here!
		'B'.output
		'u'.output
		j.output
	end

	redef fun toto(i)
	do
		super
		'B'.output
		'o'.output
		i.output
	end

	redef fun tata do #alt1#redef fun tata is autoinit do
		'B'.output
		'a'.output
		'\n'.output
	end

	init do
		'B'.output
		'\n'.output
	end
end

class C
	super A
	fun tete(k,l: Int) is autoinit do
		'C'.output
		'e'.output
		k.output
		l.output
	end
end

var a = new A(1)

'\n'.output

var b = new B(10,20)

'\n'.output

var c = new C(100,200,300)
