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
	var i: Int = 99 is optional

	var o: Object = 999 is optional
end

var a = new A
a.i.output
a.o.output

a.i = 1
a.o = 10
a.i.output
a.o.output

a.i = null
a.o = null
a.i.output
a.o.output

a = new A(2)
a.i.output
a.o.output

a = new A(3, true)
a.i.output
a.o.output
