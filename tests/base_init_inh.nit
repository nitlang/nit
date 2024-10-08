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
	init do
		'A'.output
	end
end

class B
	super A
	init(s: Char) do
		'B'.output
		'['.output
		super 
		']'.output
		s.output
	end
end

class C
	super B
	init(s) do
		'C'.output
		'['.output
		super 
		']'.output
	end
end

class D
	super C
	init(s) do super
end

var a = new A
'\n'.output
var b = new B('.')
'\n'.output
var c = new C('.')
'\n'.output
var d = new D('.')
'\n'.output
