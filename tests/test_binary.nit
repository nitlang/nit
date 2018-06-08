# This file is part of NIT (http://www.nitlanguage.org).
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

import binary

var path = "/tmp/bin"
var writer = new FileWriter.open(path)
#alt1# writer.big_endian = false
#alt3# writer.big_endian = false
writer.write "hello"
writer.write_byte 77
writer.write_float 1.23456789
writer.write_double 1.23456789
writer.write_int64 123456789
print writer.last_error or else "no error"
writer.close

var reader = new FileReader.open(path)
#alt2# reader.big_endian = false
#alt3# reader.big_endian = false
print reader.read(5)
var b = reader.read_byte
if b >= 0 then
	print b
else
	print "null"
end
print reader.read_float
print reader.read_double
print reader.read_int64
print reader.last_error or else "no error"
reader.close
