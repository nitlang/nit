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

var c1 = u'G'
var c2 = u'𐏓'

var s = b"String\x41\x42"
var s2 = "String\u0103D3"
var s3 = b"String\x41\xFD"
var s4 = re"String"i
#alt1 s4 = b"String{c1}"
var s5 = "String\xFD"
var s6 = raw"\nStr\x00"
var s7 = raw"\nString{c2}\x41"
var s8 = "\nString{c2}\x41"
var s9 = re"\n{c1}String"imb
var s10 = re"String"b
var s11 = re"String"m

print "s isa {s.class_name}"
print s
print s.hexdigest
print "s2 isa {s2.class_name}"
print s2
print "s3 isa {s3.class_name}"
print s3
print s3.hexdigest
print "s4 isa {s4.class_name}"
print s4
print s4.ignore_case
print s4.extended
print s4.newline
print "s5 isa {s5.class_name}"
print s5
print "s6 isa {s6.class_name}"
print s6
print "s7 isa {s7.class_name}"
print s7
print "s8 isa {s8.class_name}"
print s8
print "s9 isa {s9.class_name}"
print s9
print s9.ignore_case
print s9.extended
print s9.newline
print "s10 isa {s10.class_name}"
print s10
print s10.ignore_case
print s10.extended
print s10.newline
print "s11 isa {s11.class_name}"
print s11
print s11.ignore_case
print s11.extended
print s11.newline
