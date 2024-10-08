# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2010 Jean Privat <jean@pryen.org>
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

class G[A: nullable Object]
	var a: A
	init (a: A) do _a = a

	fun run
	do
		var a = _a

		if a != null then
			a.output
		end

		_a = a
	end

	fun na: nullable A do return _a

	fun run2
	do
		var na = na
		if na != null then
			na.output
			_a = na
		end

		#alt1# _a = na
	end
end

fun foo
do
	var a: Object = 5
	var o = a
	if a != null then
		a.output
	end
	o = a
end

fun rand: Bool do return true

var g = new G[Object](1)
g.run
g.run2
foo
