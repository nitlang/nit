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

import end

interface Object
	type T: Object
	fun output do 0.output
	fun foo: T do return self
	fun bar(t: T) do t.output
end

enum Int
	redef type T: Int
	redef fun output is intern
	redef fun foo: T do return self
	redef fun bar(t: T) do t.output
end

fun test(o: Object)
do
	o.output
	o.foo.output
	o.bar(o)
end

5.output
5.foo.output
4.bar(5)

test(5)
