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

interface Inline__
	fun foo(i: Int)
	do
		'F'.output
		i.output
		if i > 0 then
			bar(i-1)
		end
	end
	fun bar(i: Int)
	do
		'B'.output
		i.output
		if i > 0 then
			foo(i-1)
		end
	end
end

class A
	super Inline__
	redef fun foo(i: Int)
	do
		'A'.output
		i.output
		if i > 0 then
			bar(i-1)
		end
	end
end

var a: A = new A
a.foo(10)
a.bar(10)
