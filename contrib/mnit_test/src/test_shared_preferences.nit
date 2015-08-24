# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Frédéric Vachon <fredvac@gmail.com>
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

# Test for the shared_preferences module of App.nit framework
module test_shared_preferences

import simple_android
import android::shared_preferences

redef class App
	redef fun input ( ie )
	do
		if ie isa PointerEvent and ie.depressed then
			test_shared_preferences
		end
		return super
	end

	fun test_shared_preferences
	do
		# Private mode tests
		var sp = new SharedPreferences.privately(self, "test")
		sp.add_bool("a_boolean",  true)
		sp.add_float("a_float", 66.6)
		sp.add_int("an_int", 666)
		sp.add_int("a_second_int", 666777)
		sp.add_long("a_long", 6666666666)
		sp.add_string("a_string", "A string")
		sp["another_int"] = 85
		sp["yet_another_string"] = "Another string"
		sp.remove("a_second_int")

		# Serialized object test
		var my_point = new Point(10, 10)
		sp["a_point"] = my_point
		var my_deserialized_point = sp["a_point"]
		assert my_point.to_s == my_deserialized_point.to_s

		assert sp.bool("a_boolean", false) == true
		assert sp.bool("wrong_boolean", false) == false
		assert sp.float("a_float", 0.0) != 0.0
		assert sp.float("wrong_float", 0.0) == 0.0
		assert sp.int("an_int", 0) == 666
		assert sp.int("a_second_int", 0) == 0
		assert sp.long("a_long", 0) == 6666666666
		assert sp.long("wrong_long", 0) == 0
		assert sp.string("a_string", "ERROR!") == "A string"
		assert sp.string("wrong_string", "ERROR!") == "ERROR!"
		assert sp["another_int"] == 85
		assert sp["yet_another_string"] == "Another string"
		assert sp.has("an_int") == true
		assert sp.has("a_second_int") == false

		sp.clear
		assert sp.all == null

		sp.destroy
	end
end
