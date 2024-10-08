# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
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

	fun work
	do
		if self isa B then
			foo
			if self isa C then
				bar
			end
#alt1#			bar
			foo
		else
#alt2#			foo
		end
#alt3#		foo

		if self isa B and self == self then
			foo
		end

		if self isa B or self == self then
#alt4#			foo
		end

		assert self isa B
		foo
	end
end

class B
	super A
	fun foo do 0.output
	init do end
end

class C
	super B
	fun bar do 1.output
	init do end
end

var a: A
a = new C
#alt5#a = new B
#alt6#a = new A
a.work
