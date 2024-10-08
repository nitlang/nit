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

var re = "a+".to_re #alt1#
#alt1#var re = "+".to_re
#alt2#var re = "\(".to_re
#alt3#var re = "\[".to_re

print "aa".has(re)
print "bb".has(re)

var str = "é12345"

var re1 = "3".to_re
print str.split(re1)

var re2 = "5".to_re
print str.split(re2)

str = "résonnance réseau résultat"

print str.search_all("rés".to_re).join(", ")

str = "あついあのあほ"
print str.split("あ(の)?".to_re).join

for i in str.search_all("あ(の)?".to_re) do
	print "Match found : {i}"
	print "Submatches: "
	var sbs = i.subs
	for j in sbs.length.times do
		print "[{j}] : {sbs[j] or else "null"} "
	end
end
