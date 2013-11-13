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

import opts

var ctx = new OptionContext
var ot = new OptionText("List of options")
var ob = new OptionBool("Test of OptionBool", "-b", "--bool")
var oc = new OptionCount("Test of OptionCount", "-c", "--count")
var os = new OptionString("Test of OptionString", "-s", "--string")
var oi = new OptionInt("Test of OptionInt", 10, "-i", "--int")
var oa = new OptionArray("Test of OptionArray", "-a", "--array")
var oe = new OptionEnum(["zero", "one", "two", "tree"], "Test of OptionEnum", 1, "-e", "--enum")
ctx.add_option(ot, ob, oc, os, oi, oa, oe)

ctx.parse(args)

print "Arguments: {args.length}"
for x in args do
	print x
end

print "Rest: {ctx.rest.length}"
for x in ctx.rest do
	print x
end

print "OptionBool: {ob.value}"
print "OptionCount: {oc.value}"
if os.value == null then os.value = ""
print "OptionString: {os.value.to_s}"
print "OptionInt: {oi.value}"
print "OptionArray: {oa.value}"
print "OptionEnum: {oe.value}"
