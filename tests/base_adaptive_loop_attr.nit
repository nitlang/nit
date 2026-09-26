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
	fun m: nullable Object do
		var b = null
		loop
			if b != null then return b
			b = 1
		end
	end

	var x: nullable Object do
		var b = null
		loop
			if b != null then return b
			b = 2
		end
	end

	var y: nullable Object is lazy do
		var b = null
		loop
			if b != null then return b
			b = 3
		end
	end
end

var a = new A
a.m.as(not null).output
a.x.as(not null).output
a.y.as(not null).output
