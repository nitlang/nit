# This file is part of NIT ( https://nitlanguage.org ).
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
	var x: Object is noautoinit #alt1,3# var x: Object
	var y: Object is noautoinit #alt2,3# var y: Object
	fun work
	do
		if isset _x then x.output
		if isset _y then y.output
		0.output
	end
	#alt5#var z: Object = 5 is noinit
end

var a: A
a = new A#alt1#a = new A(2)#alt2#a = new A(30)#alt3#a = new A(4, 40)#alt4#a=new A(5)
a.work
