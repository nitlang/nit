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
	fun foo: Int
		!bar: Int
	do
		1.output
		var r = bar
		3.output
		return r
	end
end

fun maybe: Bool do return true

fun work: Int
do
	var a = new A
	var i = a.foo !bar do
		2.output
		if maybe then
		#alt1#break
		#alt2#break 'x'
		#alt3#break 100
		#alt4#return
		#alt5#return 'x'
		#alt6#return 200
		#alt7#continue
		#alt8#continue 'x'
		end
		continue 5 #alt9#
	end
	4.output
	return i
end

0.output
work.output
6.output

