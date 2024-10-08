# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# A test program with a fake model to check model tools.
module longmethod

import platform

class Starter
	var attribute = 0
	var attribute1 = 0
	var attribute2 = 0
	fun start do
		self.attribute1 = 10
	end

	fun ended do end
end

class LongMethodClass
	var test_variable = 0

	fun long_method do
		var starter = new Starter
		test_variable = 3
	end

	fun extra_long_method do
		var starter = new Starter
		test_variable = 3
		test_variable = 5
		test_variable = 8
	end
end
