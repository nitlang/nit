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
module longparameterlist

import platform

class Starter
	fun no_para do end

	fun no_para2 do end
end

class Test
	fun short_list_parameter(numbers : Int, para1 : Bool, para2 : Float, para3 : Int) do
		var starter = new Starter
	end

	fun long_list_parameter(numbers : Int, para1 : Bool, para2 : Float, para3 : Int, para4 : Starter) do
		var starter = new Starter
	end

	fun extra_long_list_parameter(numbers : Int, para1 : Bool, para2 : Float, para3 : Int, para4 : Starter,para5 : Int, para6 : Int) do
		var starter = new Starter
	end
end
