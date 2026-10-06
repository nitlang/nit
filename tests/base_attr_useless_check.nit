# This file is part of NIT ( http://www.nitlanguage.org ).
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

import core::kernel

class A
	fun m: Int do
		var i = 1
		if i == null then return 0
		return i.as(Int)
	end

	var x: Int do
		var i = 2
		if i == null then return 0
		return i.as(Int)
	end

	var y: Int is lazy do
		var i = 3
		if i isa Int then return i
		return 0
	end

	var z: Int = 4.as(Int)
end

var a = new A
a.m.output
a.x.output
a.y.output
a.z.output
