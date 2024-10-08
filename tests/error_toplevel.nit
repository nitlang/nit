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

redef class Object
	fun baz do
		output
	end

	fun foo1
	do
		bar(1)
		bar(self)
		#alt1#3.bar(3)

		5.baz
		baz
	end
end

fun foo2
do
	bar(10)
	#alt2#self.bar(20)
	#alt3#bar(self)
	#alt4#4.bar(40)

	50.baz
	#alt5#baz
end

fun bar(o: Object)
do
	o.output
end

redef class Sys
	redef fun output do 'S'.output
end

0.foo1
foo2
