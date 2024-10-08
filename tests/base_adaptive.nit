# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2006-2008 Jean Privat <jean@pryen.org>
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
end

class B
	super A
	fun bar do 1.output
end


fun test(a: A)
do
	var bool = a isa B
	0.output
	#alt1#a.bar
	if bool then # not data flow
		#alt2#a.bar
	end
	if a isa B then
		a.bar
	else
		#alt3#a.bar
	end
end

test(new A)
test(new B)
