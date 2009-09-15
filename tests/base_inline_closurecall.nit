# This file is part of NIT ( http://www.nitlanguage.org ).
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

class Inline__
	fun foo
		!f
	do
		0.output
		f
		2.output
	end

	fun bar
		!b do 11.output
	do
		10.output
		b
		12.output
	end
end

class A
	fun baz
		!b
	do
		var inl = new Inline__
		inl.foo !f do b
		inl.bar !b do b
		inl.bar
		inl.foo !f do inl.bar !b do b
	end

	fun baz2
		!b do 22.output
	do
		var inl = new Inline__
		inl.foo !f do b
		inl.bar !b do b
		inl.bar
		inl.foo !f do inl.bar !b do b
	end
end


var a = new A
a.baz !b do 20.output
'\n'.output
a.baz2 !b do 21.output
'\n'.output
a.baz2
