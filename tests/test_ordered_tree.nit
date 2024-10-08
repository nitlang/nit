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

import ordered_tree

var tree = new OrderedTree[Int]
tree.add(null, 1)
tree.add(1, 11)
tree.add(11, 111)
tree.add(11, 112)
tree.add(1, 12)
tree.add(12, 121)
tree.add(12, 122)
tree.add(null, 2)
tree.add(2, 21)
tree.add(2, 22)

for i in tree do print i
print "--"
for i in tree.to_a.reversed do print i
