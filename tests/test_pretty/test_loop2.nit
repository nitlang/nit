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

var a = 0
var b = 2

do # comment 1
	# comment 2
	var tmp = a
	a = b
	b = tmp
	# comment 3
end

# comment 4
do
	a = b
end # comment 5

do
	# comment 6
end

if a > b then loop print a # test

if a > b then
	loop print a
end

if a > b then
	loop
		print a
	end
end

if a > b then
	loop
		# comment 7
		print a
	end
end

