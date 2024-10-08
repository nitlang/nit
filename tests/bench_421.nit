# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2005-2008 Jean Privat <jean@pryen.org>
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

fun count_421(n: Int): Int
# Return the number of steps to come back to 1
do
	var steps = 0
	while n > 1 do
		steps = steps + 1
		if n % 2 == 0 then
			n = n / 2
		else
			n = n * 3 + 1
		end
	end
	return steps
end

var n = 456
if not args.is_empty then
	n = args.first.to_i
end

var max_i = 1
var max_v = 0
for i in [2..n] do
	var v = count_421(i)
	if v >= max_v then
		max_i = i
		max_v = v
	end
end

print("{max_i}: {max_v}")
