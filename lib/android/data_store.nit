# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Implements `app::data_store` using `shared_preferences`
#
# We use the shared preferences named "data_store" to store the data.
module data_store

import app::data_store
import shared_preferences

redef class DataStore

	# The `SharedPreferences` used to implement the `DataStore`
	var shared_preferences = new SharedPreferences.privately(app, "data_store") is lazy

	redef fun [](key) do return shared_preferences[key]

	redef fun []=(key, value) do shared_preferences[key] = value
end
