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

var quiet = false

var tree = new OrderedTree[String]
var todo = new Array[String]
if args.is_empty then
	print "Usage: ./test [-q] paths"
	exit -1
else
	if args.first == "-q" then
		args.shift
		quiet = true
	end
	todo.add_all args
	for a in args do tree.add(null, a)
end
while todo.not_empty do
	var file = todo.pop
	var entries = file.files
	for entry in entries do
		var sub = file / entry
		todo.add sub
		tree.add(file, sub)
	end
end
tree.sort_with(alpha_comparator)

if not quiet then tree.write_to(stdout)
