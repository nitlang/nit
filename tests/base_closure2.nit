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
	fun foo
		!bar(i: Int)
	do
		1.output
		bar(2) #alt1#
		#alt2#bar
		#alt12#bar('x')
		#alt3#var x = bar(2)
		4.output
	end
end

fun maybe: Bool do return true

fun work
do
	var a = new A
	a.foo !bar x do #alt11#
	#alt11#a.foo !bar do
		x.output
		if maybe then
		#alt4#break
		#alt5#break 'x'
		#alt6#continue
		#alt7#continue 'x'
		#alt8#return
		#alt9#return 'x'
		end
		(x+1).output
	end
	#alt10# a.foo
	5.output
end

0.output
work
6.output

