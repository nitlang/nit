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

import end

interface Object
end

enum Char
	fun output is intern
end

class A
	init
	do
		'A'.output
	end
end

class B
	super A
	init
	do
		'B'.output
	end
end

class C
	super A
end

var a = new A
'\n'.output

var b = new B
'\n'.output

var c = new C
'\n'.output
