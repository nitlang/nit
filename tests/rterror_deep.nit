# This file is part of NIT ( http://www.nitlanguage.org ).
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

import kernel

class A
	meth foo(i: Int)
	do
		i.output
		if i == 1 then
			return
		end
		if i % 2 == 0 then
			bar(i)
		else
			baz(self, i)
		end
	end

	meth bar(i: Int)
	do
		foo(i/2)
	end

	init do end
end

class B
special A
	redef meth foo(i: Int)
	do
		if i == 1 then
			var a: A
			a.foo(i) # Nil call
		end
		super
	end

	init do end
end

meth baz(a: A, i: Int)
do
	a.foo(i+3)
end

var a = new A
a.foo(5)
a = new B
a.foo(5)
