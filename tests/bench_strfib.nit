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

# Function that recursively allocate and concatenate strings.
#
# It is related to the Fibonacci sequence since:
#
# * `strfib(0).length == 0`
# * `strfib(1).length == 2`
# * `strfib(n).length = strfib(n-1).length + strfib(n-2).length + 2`
fun strfib(i: Int): String
do
	if i == 0 then return ""
	if i == 1 then return "()"
	return "({strfib(i-2)}{strfib(i-1)})"
end

var quiet = false
if args.has("-q") then
	quiet = true
	args.remove("-q")
end

var n = 15
if args.length > 0 then n = args.first.to_i
var res = strfib(n)

if quiet then
	print res.length
else
	print res
end
