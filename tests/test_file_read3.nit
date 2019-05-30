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

var f
var i
var l = 0

f = new FileReader.open("test_file_read.nit")
i = f.each_line
while i.is_ok do
	l += 1
	print i.item
	print i.is_ok
	i.next
end
f.close

print "---"

f = new FileReader.open("test_file_read.nit")
i = f.each_line
while i.is_ok do
	print i.is_ok
	print i.item
	print i.is_ok
	print i.item
	print i.is_ok
	i.next
end
f.close

print "---"

f = new FileReader.open("test_file_read.nit")
i = f.each_line
for x in [0..l[ do
	print i.item
	print i.item
	i.next
end
f.close
