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

import rubix
import combinations

var commands = ["U", "L", "F", "R", "B", "D", "M", "E", "S", "u", "l", "r", "b", "d", "X", "Y", "Z"]

for iters in [1 .. commands.length[ do
	var ref_rubix = new RubixCube.solved
	#alt1 ref_rubix = new RubixCube.scrambled
	var combin = new CombinationCollection[String](commands, iters)
	combin.are_sorted = true
	combin.are_unique = true
	for cmd in combin do
		var rubix = new RubixCube.solved
		#alt1 rubix = new RubixCube.scrambled
		var revcmd = new Array[String].with_capacity(cmd.length * 2)
		for i in cmd do revcmd.add i
		for i in cmd.reverse_iterator do revcmd.add("{i}'")
		print "Trying combination {revcmd}"
		for i in revcmd do rubix.do_cmd(i)
		assert rubix == ref_rubix
		print "Combination {revcmd} is OK."
	end
end
