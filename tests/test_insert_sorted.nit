# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

for a in new Array[Array[Int]].with_items(new Array[Int], [0], [2,4,6,8,10]) do
	var sorter = new ComparableSorter[Int]
	sorter.insert_sorted(a, 1)
	print a.join(" ")
	sorter.insert_sorted(a, 3)
	print a.join(" ")
	sorter.insert_sorted(a, 7)
	print a.join(" ")
	sorter.insert_sorted(a, 11)
	print a.join(" ")
	sorter.insert_sorted(a, 11)
	print a.join(" ")
	sorter.insert_sorted(a, 13)
	print a.join(" ")
	sorter.insert_sorted(a, -100)
	print a.join(" ")
end
