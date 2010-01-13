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

class A
	fun foo(i: Int)
		!bar
	do
		'['.output
		i.output
		bar !break do
			'!'.output
			i.output
		end
		#alt4#bar !baz do abort
		']'.output
		i.output
	end
end

fun maybe: Bool do return true

fun start
do
	var a = new A
	0.output
	a.foo(1) !bar do
		2.output
		a.foo(3) !bar do
			4.output
			if maybe then
			#alt1#break
			#alt2#continue
			#alt3#return
			end
			5.output
		end
		6.output
	end
	7.output
end

start
8.output
