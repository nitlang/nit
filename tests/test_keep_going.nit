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

fun plop: Fail
do
	print 1
end

1.output
if false then
	plop
end
2.output
if false then
	fail
end
3.output
if false then
	var x = new Fail
	x.output
end
4.output
if false then
	if 1 then abort
end
5.output
if false then
	abort
	999.output
end
6.output
if false then
	var a = new Sys.fail
	a.output
end
7.output
