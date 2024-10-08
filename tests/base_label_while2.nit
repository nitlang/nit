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

var a = 1
1.output
while a == 1 do
	a = 2
	2.output
	while a == 2 do
		a = 3
		3.output
		if maybe then
		#alt4#break
		#alt5#continue label
		end
		if maybe then break label
		4.output
	end label l2#alt6#end label
	5.output
end label#alt7#end label l1
6.output
