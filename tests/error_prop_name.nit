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

import error_prop_name_m1
import error_prop_name_m2

class C
	fun bar do 4.output
	fun bar_c do bar
end

redef class A
	super B
	super C

	#alt3#redef fun foo do 5.output
	#alt4#redef fun bar do 6.output
end

var a = new A
a.foo_a
a.foo_b
#alt1#a.foo
a.bar_a
a.bar_c
#alt2#a.bar
