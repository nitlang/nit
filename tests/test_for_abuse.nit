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

import for_abuse

var escape_f: nullable Reader = null
for f in file_open("test_for_abuse.nit") do
	escape_f = f
	print f.read_line
	print "f is closed? {f.eof}"
end
print "f is closed? {escape_f.eof}"

var array = ["*", "****", "**", "*******"]
for q in array.sort_fa do
	# IN:
	#     q.a
	#     q-b
	# OUT
	#     q.res
	q.res = q.a.length <=> q.b.length
end
print array.join(" ")
