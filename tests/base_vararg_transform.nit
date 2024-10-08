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

fun foo(i: Object...) do print i

var n: nullable Object = null

foo(1, 1)

foo((false or true) and true, 2)
foo(n or else 1, 3)
foo(if true then 1 else -1, 4)

foo([1..3], 5)
foo([1,2,3], 6)
foo([for i in [0..2] do i + 1], 7)
