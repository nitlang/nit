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

import module_1
import module_1b

redef class module_1::A
	fun foo do print(100)
end

redef class module_1b::A
	fun foob do print(110)
end

#alt1#redef class A
#alt1#end

#alt2#redef class fail::A
#alt2#end

var a = new module_1::A
a.a1
a.foo
#alt3#a.foob

var b = new module_1b::A
b.a1
b.foob
#alt3#b.foo
