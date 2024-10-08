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

import core::kernel

var x
x = null

var i = 0
while i < 2 do
	var y
	y = x
	if y == null then 1.output
	y = x
	if y != null then 2.output
	y = x
	if y isa Int then 3.output
	y = x
	if y isa nullable Int then 4.output
	y = x
	if y isa nullable Bool then 5.output
	y = x or else 6
	y.output
	#alt1#x = 1

	i += 1
end

x = 10
i = 0
while i < 2 do
	var y
	y = x
	if y == null then 1.output
	y = x
	if y != null then 2.output
	y = x
	if y isa Int then 3.output
	y = x
	if y isa nullable Int then 4.output
	y = x
	if y isa nullable Bool then 5.output
	y = x or else 6
	y.output
	#alt1#x = null

	i += 1
end
