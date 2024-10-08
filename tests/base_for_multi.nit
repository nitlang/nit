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

var a = [10, 20, 30, 40]
var m = new HashMap[Int, Int]
m[1] = 11
m[2] = 22
m[3] = 33
m[4] = 44

0.output
for i in a, j in [1..10[, k in a, l1, l2 in m do
	i.output
	j.output
	k.output
	l1.output
	l2.output
	'\n'.output
end

0.output
for i in a, j in [1..10[, x in [0..0[, k in a, l1, l2 in m do
	i.output
	j.output
	k.output
	l1.output
	l2.output
	x.output
	'\n'.output
end
0.output

#alt1# for i in i do end
#alt1# for i in j, j in [1..5] do end
#alt1# for i in [1..2], j in i do end
