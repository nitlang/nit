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

class A
	var attribute: nullable A is noinit
	var num: Char is noinit

	fun foo=(a: nullable A)
	do
		_attribute = a
	end

	fun foo: nullable A
	do
		return _attribute
	end

	fun bar=(c: Char, a: nullable A)   
	do
		_num = c
		_attribute = a
	end

	fun bar(c: Char): nullable A
	do
		if c == _num then
			return _attribute
		else
			return null
		end
	end

	redef fun to_s: String
	do
		var s = _num.to_s
		if _attribute == null then
			s += "\n"
		else
			s += _attribute.to_s
		end
		return s
	end



	init
	do
		_num = '*'
	end

	init init2(c: Char, a: nullable A)
	do
		_num = c
		_attribute = a
	end
end

var a: Array[A]
a = new Array[A]
a = new Array[A].with_capacity(6)
a[0] = new A
a[1] = new A
a[1].foo = new A
a[0] =  new A
a[1].foo._attribute = new A.init2('0',a[0])
a[2] = new A.init2('1', a[1])
a[3] = new A.init2('3', a[2].bar('1'))
a[2].bar('2') = new A
a[4] = new A.init2('4', a[2].bar('1'))
a[5] = new A.init2('5', a[2].bar('2'))
print a
