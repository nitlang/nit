# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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

import module_0

class A # class 1
	fun a1
	do
		print(1)
		print(1)
	end
	fun a12
	do
		print(12)
		print(1)
	end
	fun a13
	do
		print(13)
		print(1)
	end
	fun a123
	do
		print(123)
		print(1)
	end
end

class B # class 2
	super A
	redef fun a12
	do
		print(12)
		print(2)
	end
	redef fun a123
	do
		print(123)
		print(2)
	end
	fun all2
	do
		a1
		a12
		a13
		a123
	end
	fun all25
	do
		print(250)
		print(2)
		a1
		a12
		a13
		a123
	end
end

var a = new A
a.a1
a.a12
a.a13
a.a123

var b = new B
b.a1
b.a12
b.a13
b.a123

b.all2
b.all25
