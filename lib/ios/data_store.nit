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

# Implements `app::data_store` using `NSUserDefaults`
module data_store

import app::data_store
import cocoa::foundation
private import json

redef class DataStore

	# The `NSUserDefaults` used to implement `DataStore`
	var user_defaults = new NSUserDefaults.standard_user_defaults is lazy

	redef fun [](key)
	do
		var nsstr = user_defaults.string_for_key(key.to_nsstring)

		if nsstr.address_is_null then return null

		# TODO report errors
		var deserializer = new JsonDeserializer(nsstr.to_s)
		var deserialized = deserializer.deserialize

		var errors = deserializer.errors
		if errors.not_empty then
			# An update may have broken the versioning compatibility
			print_error "{class_name} error at deserialization: {errors.join(", ")}"
			return null # Let's be safe
		end

		return deserialized
	end

	redef fun []=(key, value)
	do
		var nsobject: NSString

		if value == null then
			nsobject = new NSString.nil
		else
			var serialized_string = new StringWriter
			var serializer = new JsonSerializer(serialized_string)
			serializer.serialize(value)

			# TODO report errors
			nsobject = serialized_string.to_s.to_nsstring
		end

		user_defaults.set_object(nsobject, key.to_nsstring)
	end
end
