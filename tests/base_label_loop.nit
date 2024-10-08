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

fun maybe: Bool do return true

1.output
var exit=false
loop
	if exit then break
	exit = true
	2.output
	loop
		3.output
		loop
			break
		end label l3
		if maybe then
		#alt1#break label l2
		#alt2#break label l3
		#alt3#break label l4
		#alt4#break
		#alt5#continue label l1
		end
		if maybe then break label l1
		4.output
		if maybe then break
	end label l2#alt6#
	#alt6#end label l1
	5.output
end label l1
6.output

#alt7#loop
#alt7#	break
#alt7#end label l1
