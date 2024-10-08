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

import kernel

class A
	fun start do 1.output
	fun work do 2.output
	fun finish do 3.output
end

fun escape do
	with a = new A do
		a.work
		if true then return
		a.work
	end
end

with new A do
	2.output
	2.output
end

with a = new A do
	a.work
	a.work
end

with a = new A do
	a.work
	if true then break
	a.work
end

#alt1#escape
