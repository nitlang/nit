# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Key/value storage services
#
# The main services is `App::data_store`, a `DataStore` holding any
# serializable Nit object.
module data_store

import app_base
import serialization

# Platform variations
import linux::data_store is conditional(linux)
import android::data_store is conditional(android)
import ios::data_store is conditional(ios)

redef class App

	# Services to store and load data
	#
	# ~~~
	# import app::ui
	# import app::data_store
	#
	# class MyWindow
	#     super Window
	#
	#     var state = "Simple string or any serializable class"
	#
	#     redef fun on_save_state do app.data_store["state"] = state
	#
	#     redef fun on_restore_state
	#     do
	#         var state = app.data_store["state"]
	#         if state isa String then self.state = state
	#     end
	# end
	# ~~~
	var data_store = new DataStore is lazy
end

# Simple data storage facility
#
# Write values with `[]=` and read with `[]`.
# ~~~
# import linux::data_store # Needed for testing only
#
# class A
#     serialize
#
#     var b = true
#     var f = 1.234
# end
#
# var data_store = new DataStore
# data_store["one"] = 1
# data_store["str"] = "Some string"
# data_store["a"] = new A
#
# assert data_store["one"] == 1
# assert data_store["str"] == "Some string"
# assert data_store["a"].as(A).b
# assert data_store["a"].as(A).f == 1.234
# assert data_store["other"] == null
# ~~~
#
# Set to `null` to clear a value.
# ~~~
# data_store["one"] = null
# assert data_store["one"] == null
# ~~~
class DataStore

	# Get the object stored at `key`, or null if nothing is available
	fun [](key: String): nullable Object is abstract

	# Store `value` at `key`
	fun []=(key: String, value: nullable Serializable) is abstract
end
