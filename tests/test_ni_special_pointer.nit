# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2011 Alexis Laferrière <alexis.laf@xymus.net>
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

extern ExternInt special Pointer
	new as_0 is extern
	new as_1 is extern
	new as_2 is extern

	redef fun to_s : String is extern import String::from_cstring
	fun to_i : Int is extern
end

redef class Int
	fun to_extern_int : ExternInt is extern
end

var i = new ExternInt.as_0
print i.to_i

i = new ExternInt.as_1
print i.to_i

i = new ExternInt.as_2
print i.to_i

i = 1234 .to_extern_int
print i.to_i
