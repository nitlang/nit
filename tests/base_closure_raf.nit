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

import base_closure2

class B
special A
	redef meth foo
		with bar(i: Int) #!alt13# #!alt14# #!alt15#
		#alt13# with bar
		#alt14# with bar(b: Bool)
		#alt15# with bar(i: Int): Int
	do
		10.output
		bar(20) #!alt1#
		#alt2#bar
		#alt12#bar('x')
		#alt3#var x = bar(2)
		40.output
	end
end

meth work2
do
	var a: A = new B
	a.foo with x do #!alt11#
	#alt11#a.foo with do
		x.output
		#alt4#break
		#alt5#break 'x'
		#alt6#continue
		#alt7#continue 'x'
		#alt8#return
		#alt9#return 'x'
		(x+1).output
	end
	#alt10# a.foo
	5.output
end

0.output
work2
6.output

