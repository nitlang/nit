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

# Test for the API level related annotations
module test_target_api is
	min_api_version(10)
	max_api_version(19)
end

import simple_android
#FIXME: Double quad to access lib/foo/goo/bar.nit is evil
import android::shared_preferences::shared_preferences_api11

redef class App
	redef fun input( ie )
	do
		if ie isa PointerEvent and ie.depressed then 
			test_target_api
		end
		return super
	end

	fun test_target_api
	do
		var hash_set = new HashSet[JavaString]
		hash_set.add "foo".to_java_string
		hash_set.add "bar".to_java_string

		shared_preferences.add_string_set("test", hash_set)

		var hash_set2 = shared_preferences.string_set("test")

		var tab = ["foo", "bar"]
		var i = 0

		for entry in hash_set2 do
			assert entry == tab[i].to_java_string
			i+=1
		end

	end
end
