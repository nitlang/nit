# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# comment
var a = 1# comment
# comment
var b = 2# comment

# comment
if a == b then a = b# comment

# comment
if a != b then# comment
# comment
	a = b# comment
# comment
	a = b# comment
# comment
end# comment

# comment
if a > b then# comment
# comment
	b = a# comment
# comment
	a = b# comment
# comment
else# comment
# comment
	a = b# comment
# comment
	a = b# comment
# comment
end# comment

# comment
if a < b then# comment
# comment
	a = b# comment
# comment
	a = b# comment
# comment
else if a == b then# comment
# comment
	b = a# comment
# comment
	a = b# comment
# comment
end# comment

# comment
if a < b then# comment
# comment
	a = b# comment
# comment
	a = b# comment
# comment
else if a == b then# comment
# comment
	b = b# comment
# comment
	a = b# comment
# comment
else# comment
# comment
	a = b# comment
# comment
	a = b# comment
# comment
end# comment
