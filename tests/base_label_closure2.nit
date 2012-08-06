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

fun foo: Int
	!bar: Int
do
	var i = bar !break do 'X'.output
	return i * 10
end

fun maybe: Bool do return true

1.output
var i = foo !bar do
	2.output
	var j = foo !bar do
		3.output
		foo !bar do
			continue 0
		end label l3
		if maybe then
		#alt1#break label l2 10
		#alt2#break label l3 10
		#alt3#break label l4 10
		#alt4#break 10
		#alt5#continue label l1 10
		end
		if maybe then break label l1 10
		4.output
		break 4
	end label l2#alt6#
	#alt6#end label l1
	j.output
	5.output
	continue 20
end label l1
i.output
6.output

#alt7#foo !bar do
#alt7#	continue 0
#alt7#end label l1
