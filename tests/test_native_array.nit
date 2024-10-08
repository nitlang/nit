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

class Toto


	fun toto
	do
		var a = new NativeArray[Int](3)
		a[0] = 10
		a[1] = 20
		a[2] = 30
		a.length.output
		a.to_a.output
		(new Array[Int].with_native(a, 3)).output
	end
end

(new Toto).toto
