# This file is part of NIT ( http://www.nitlanguage.org ).
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

# The goal of this code is to check the astbuilder features

class A

	fun titi
	do
		print "Test print"
	end

	fun toto(int: Int, float: Float, bool: Bool, char: Char): Int
	do
		var test_int = int
		var test_float = float
		var test_bool = bool
		var test_char = char
		self.titi
		return 1
	end
end

var a = new A
a.toto(10, 2.0, true, 'c')
print "Test astbuilder"
print 'c'
