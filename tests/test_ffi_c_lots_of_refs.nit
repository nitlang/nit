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

extern class As `{ A* `}
	new (size: Int) `{
  		return malloc(sizeof(A) * size);
	`}

	fun []=(i: Int, v: A) `{
		recv[i] = v;
		A_incr_ref(v);
	`}

	fun [](i: Int): A `{
		return recv[i];
	`}
end

class A
	var i: Int
	var s: String

	init(i: Int)
	do
		self.i = i
		self.s = i.to_s
	end

	redef fun to_s do return "<{i} {s}>"
end

var length = 1000000
var aaa = new As(length)
for i in length.times do aaa[i] = new A(i)
sys.force_garbage_collection
for i in length.times do assert aaa[i].to_s == "<{i} {i}>"
