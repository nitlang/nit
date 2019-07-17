# This file is part of NIT (http://www.nitlanguage.org).
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

# Refines shared_preferences module to add API 11 services
module shared_preferences_api11 is android_api_min 11

import shared_preferences

in "Java" `{
	import java.util.HashSet;
	import java.util.Set;
	import android.content.Context;
`}

redef extern class NativeSharedPreferences

	# Default value to null instead of Set<String>
	fun get_string_set(key: JavaString): HashSet[JavaString] import HashSet[JavaString],
		HashSet[JavaString].add in "Java" `{
		Set<String> def_value = new HashSet<String>();
		Set<String> java_set = self.getStringSet(key, def_value);
		nit.app.NitObject nit_hashset = new_HashSet_of_JavaString();

		for (String element: java_set)
			HashSet_of_JavaString_add(nit_hashset, element);

		return nit_hashset;
	`}
end

redef extern class NativeSharedPreferencesEditor

	fun put_string_set(key: JavaString, value: HashSet[JavaString]): NativeSharedPreferencesEditor
		import HashSet[JavaString], HashSet[JavaString].iterator, Iterator[JavaString].is_ok,
		Iterator[JavaString].item, Iterator[JavaString].next in "Java" `{
		Set<String> java_set = new HashSet<String>();
		nit.app.NitObject itr = HashSet_of_JavaString_iterator(value);

		while (Iterator_of_JavaString_is_ok(itr)) {
			java_set.add(Iterator_of_JavaString_item(itr));
			Iterator_of_JavaString_next(itr);
		}

		return self.putStringSet(key, java_set);
	`}
end

redef class SharedPreferences

	# Allows multiple processes to write into the same `SharedPreferences` file
	init multi_process(app: App, file_name: String)
	do
		self.init(app, file_name, multi_process_mode)
	end

	# File access mode
	private fun multi_process_mode: Int in "Java" `{ return Context.MODE_MULTI_PROCESS; `}

	# Returns the `HashSet[JavaString]` value corresponding the given key or `null` if none
	#
	# User has to manage local stack deallocation himself
	#
	# ~~~nitish
	# var a_hash_set = app.shared_preferences.string_set("A key")
	# # ...
	# for element in a_hash_set do element.delete_local_ref
	# ~~~
	fun string_set(key: String): HashSet[JavaString]
	do
		sys.jni_env.push_local_frame(3)
		var return_value = shared_preferences.get_string_set(key.to_java_string)
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Set a key-value pair using a `HashSet[JavaString]` value
	# Returns self allowing fluent programming
	#
	# User has to manage local stack deallocation himself
	#
	# ~~~nitish
	# var foo = new HashSet[JavaString]
	# app.shared_preferences.add_string_set("A key", foo)
	# for element in foo do element.delete_local_ref
	# ~~~
	fun add_string_set(key: String, value: HashSet[JavaString]): SharedPreferences
	do
		editor.put_string_set(key.to_java_string, value)
		return self
	end
end
