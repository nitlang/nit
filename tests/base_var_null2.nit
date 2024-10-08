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

fun test(i: Int)
do
	var a = null #alt1#var a: nullable Int = null #alt2#var a: nullable Object = null
	if i == 1 then a = 1
	if i == 2 then a = 2
	#1alt3#if i == 3 then a = '3'
	if a == null then 0.output else a.output
	'\n'.output
end

test(1)
test(2)
test(3)
