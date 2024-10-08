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
	var i: nullable Int = null
	var b: nullable Bool = null
	var c: nullable Char = null

	init
	do
		var o: nullable Object
		'I'.output
		'\n'.output
		(_i == null).output
		(not _i == 0).output
		o = _i
		(o == null).output
		(not o == 0).output
		#alt1#_i.output

		'B'.output
		'\n'.output
		(_b == null).output
		(not _b == false).output
		o = _b
		(o == null).output
		(not o == false).output
		#alt2#_b.output

		'C'.output
		'\n'.output
		(_c == null).output
		(not _c == '\0').output
		o = _c
		(o == null).output
		(not o == '\0').output
		#alt3#_c.code_point.output
	end
end

var a = new A
