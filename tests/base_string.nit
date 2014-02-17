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

import string

redef class String
	redef fun output
	do
		for c in self.chars do c.output
	end
end

var a = "Hello"
a.output
'\n'.output

var b = 5.to_s
b.output
'\n'.output

(a*3).output
'\n'.output

(a+b).output
'\n'.output

(a == a).output
(a == "Hello").output
(a != "Hellb").output
(a+b == "Hello5").output
(a+b != "Hello").output

"hello\n1\"2\'3".output
'\n'.output
