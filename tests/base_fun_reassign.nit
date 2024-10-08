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
	var x: Int = 0
	fun y(i: Int): Int do return x * i
	fun y=(i, o: Int) do x = (o / i)
end

var a = new A
a.x += 2
a.x.output

a.y(10).output
a.y(10) += 30
a.y(10).output

a.x.output
