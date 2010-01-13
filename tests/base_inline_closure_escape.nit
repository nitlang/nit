# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

class Inline__
	fun foo1
		!f
	do
		f
		5.output
	end

	fun foo2
		!f
	do
		f
		2.output
	end
end

fun maybe: Bool do return true

var a = new Inline__
a.foo1 !f do
	do
		a.foo2 !f do
			if maybe then
			#alt1#break label l1
			#alt2#break label l2
			#alt3#break label l3
			#alt4#continue label l1
			#alt5#continue label l2
			end
			1.output
		end label l1
		3.output
	end label l3
	4.output
end label l2
6.output
