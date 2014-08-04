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

# Test for the intent module of App.nit framework
module test_intent

import simple_android
import android::intent::intent_api19

redef class App
	var intent: Intent
	redef fun input( ie )
	do
		if ie isa PointerEvent and ie.depressed then
			test_intent
		end
		return super
	end

	fun test_intent
	do
		intent = new Intent(self)
		intent.action = intent_action.view.to_s
		intent.data   = "content://contacts/people/"

		intent.launch_activity
		intent.destroy

		intent = new Intent(self)
		var p1 = new Point(10, 20)
		intent["a_point"] = p1
		var p2 = intent["a_point"]
		assert p1.to_s == p2.to_s

		intent.action = intent_action.main.to_s
		assert intent.action == intent_action.main.to_s

		intent.add_flags intent_flag.activity_brought_to_front
		assert intent.flags == intent_flag.activity_brought_to_front

		var bool_array = new Array[Bool]
		for i in [0..5] do bool_array.add( i % 2 == 0 )

		intent.add_extra_array_of_bool("bools", bool_array)
		var bool_array2 = intent.extra_bool_array("bools")
		for i in [0..5] do assert bool_array2[i] == (i%2 ==0)

		var string_array = ["foo", "bar", "baz"]
		intent.add_extra_array_of_string("strings", string_array)
		var string_array2 = intent.extra_string_array("strings")
		for i in [0..string_array2.length[ do assert string_array[i] == string_array2[i]

		intent.add_extra_array_list_of_string("strings", string_array)
		string_array2 = intent.extra_string_array_list("strings")
		for i in [0..string_array2.length[ do assert string_array[i] == string_array2[i]

		intent.add_category intent_category.home.to_s
		var categories = intent.categories
		assert categories.first == intent_category.home.to_s
		assert intent.has_category(intent_category.home.to_s)

		intent.destroy
	end
end
