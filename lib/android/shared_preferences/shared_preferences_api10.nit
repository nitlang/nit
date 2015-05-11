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

# Services to save/load data using `android.content.SharedPreferences` for the android platform
module shared_preferences_api10

import dalvik
import serialization
private import json_serialization

in "Java" `{
	import android.content.SharedPreferences;
	import android.content.Context; 
	import android.app.Activity;
	import java.util.Map;
	import java.util.Iterator;
	import java.lang.ClassCastException;
	import java.lang.NullPointerException;
`}

extern class NativeSharedPreferences in "Java" `{ android.content.SharedPreferences `}
	super JavaObject
	
	fun contains(key: JavaString): Bool in "Java" `{ return recv.contains(key); `}
	fun get_all: HashMap[JavaString, JavaObject] import HashMap[JavaString, JavaObject],
		HashMap[JavaString, JavaObject].[]= in "Java" `{ 
		Map<String, ?> java_map = null;
		int nit_hashmap = new_HashMap_of_JavaString_JavaObject();
		try {
			java_map = recv.getAll();
		} catch (NullPointerException e) {
			return nit_hashmap;
		}

		for (Map.Entry<String, ?> entry: java_map.entrySet())
			HashMap_of_JavaString_JavaObject__index_assign(nit_hashmap, 
				entry.getKey(), entry.getValue());

		return nit_hashmap;
	`}
	fun get_boolean(key: JavaString, def_value: Bool): Bool in "Java" `{ 
		boolean return_value;
		try {
			return_value = recv.getBoolean(key, def_value); 
		} catch (ClassCastException e) {
			return def_value;
		}

		return return_value;
	`}
	fun get_float(key: JavaString, def_value: Float): Float in "Java" `{ 
		float return_value;
		try {
			return_value = recv.getFloat(key, (float) def_value); 
		} catch (ClassCastException e) {
			return def_value;
		}

		return return_value;
	`}
	fun get_int(key: JavaString, def_value: Int): Int in "Java" `{
		int return_value;
		try {
			return_value = recv.getInt(key, (int)def_value); 
		} catch (ClassCastException e) {
			return def_value;
		}

		return return_value;
	`}
	fun get_long(key: JavaString, def_value: Int): Int in "Java" `{
		long return_value;
		try {
			return_value = recv.getLong(key, def_value); 
		} catch (ClassCastException e) {
			return def_value;
		}

		return (int) return_value;
	`}
	fun get_string(key: JavaString, def_value: JavaString): JavaString in "Java" `{
		String return_value = null;
		try {
			return_value = recv.getString(key, def_value); 
		} catch (ClassCastException e) {
			return def_value;
		}

		return return_value;
	`}

	# HACK for bug #845
	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeSharedPreferences_sys(recv);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, recv);
	`}
end

extern class NativeSharedPreferencesEditor in "Java" `{ android.content.SharedPreferences$Editor `}
	super JavaObject

	fun clear: NativeSharedPreferencesEditor in "Java" `{ return recv.clear(); `}
	fun commit: Bool in "Java" `{ return recv.commit(); `}
	fun put_boolean(key: JavaString, value: Bool ): NativeSharedPreferencesEditor in "Java" `{ 
		return recv.putBoolean (key, value); 
	`}
	fun put_float(key: JavaString, value: Float): NativeSharedPreferencesEditor in "Java" `{
		return recv.putFloat(key, (float) value); 
	`}
	fun put_int(key: JavaString, value: Int): NativeSharedPreferencesEditor in "Java" `{
		return recv.putInt(key, (int)value); 
	`}
	fun put_long(key: JavaString, value: Int): NativeSharedPreferencesEditor in "Java" `{
		return recv.putLong(key, value); 
	`}
	fun put_string(key: JavaString, value: JavaString): NativeSharedPreferencesEditor in "Java" `{
		return recv.putString(key, value); 
	`}
	fun remove(key: JavaString): NativeSharedPreferencesEditor in "Java" `{ 
		return recv.remove(key); 
	`}

	# HACK for bug #845
	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeSharedPreferencesEditor_sys(recv);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, recv);
	`}
end

# Provides services to save and load data for the android platform
class SharedPreferences
	protected var context: NativeActivity
	protected var shared_preferences: NativeSharedPreferences
	protected var editor: NativeSharedPreferencesEditor

	# Automatically commits every saving/removing instructions (`true` by default)
	var auto_commit = true
	
	protected init(app: App, file_name: String, mode: Int) 
	do
		self.context = app.native_activity
		sys.jni_env.push_local_frame(1)
		setup(file_name.to_java_string, mode)
		sys.jni_env.pop_local_frame
	end

	# Restricts file access to the current application
	init privately(app: App, file_name: String) 
	do
		self.init(app, file_name, private_mode)
	end

	# File access mode
	private fun private_mode: Int in "Java" `{ return Context.MODE_PRIVATE; `}

	private fun set_vars(shared_pref: NativeSharedPreferences, editor: NativeSharedPreferencesEditor)
	do
		self.shared_preferences = shared_pref.new_global_ref
		self.editor = editor.new_global_ref
	end

	private fun setup(file_name: JavaString, mode: Int) import context, set_vars in "Java" `{
		Activity context = (Activity) SharedPreferences_context(recv);
		SharedPreferences sp;

		// Uses default SharedPreferences if file_name is an empty String
		if (file_name.equals("")) {
			sp = context.getPreferences((int)mode);
		} else { 
			sp = context.getSharedPreferences(file_name, (int)mode);
		}

		SharedPreferences.Editor editor = sp.edit();
		
		SharedPreferences_set_vars(recv, sp, editor);
	`}

	private fun commit_if_auto do if auto_commit then self.commit

	# Returns true if there's an entry corresponding the given key
	fun has(key: String): Bool 
	do
		sys.jni_env.push_local_frame(2)
		var return_value = shared_preferences.contains(key.to_java_string) 
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Returns a `HashMap` containing all entries or `null` if there's no entries
	#
	# User has to manage local stack deallocation himself
	#
	# ~~~nitish
	# var foo = new HashMap[JavaString, JavaObject]
	# # ...
	# for key, value in foo do
	#      key.delete_local_ref
	#      value.delete_local_ref
	# end
	# ~~~
	# *You should use Nit getters instead and get each value one by one* 
	fun all: nullable HashMap[JavaString, JavaObject]
	do 
		var hashmap = shared_preferences.get_all
		if hashmap.is_empty then return null
		return hashmap
	end

	# Returns the `Bool` value corresponding the given key or `def_value` if none
	# or if the value isn't of correct type
	fun bool(key: String, def_value: Bool): Bool 
	do 
		sys.jni_env.push_local_frame(2)
		var return_value = shared_preferences.get_boolean(key.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Returns the `Float` value corresponding the given key or `def_value` if none
	# or if the value isn't of correct type
	fun float(key: String, def_value: Float): Float 
	do 
		sys.jni_env.push_local_frame(2)
		var return_value = shared_preferences.get_float(key.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Returns the `Int` value corresponding the given key or `def_value` if none
	# or if the value isn't of correct type
	# Be aware of possible `def_value` integer overflow as the Nit `Int` corresponds 
	# to Java `long`
	fun int(key: String, def_value: Int): Int 
	do 
		sys.jni_env.push_local_frame(2)
		var return_value = shared_preferences.get_int(key.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Returns the `Int` value corresponding the given key or `def_value` if none
	# or if the value isn't of correct type
	# Calls `getLong(key, value)` java method
	# Nit `Int` is equivalent to Java `long` so that no integer overflow will occur
	fun long(key: String, def_value: Int): Int 
	do 
		sys.jni_env.push_local_frame(2)
		var return_value = shared_preferences.get_long(key.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Returns the `String` value corresponding the given key or `def_value` if none
	# or if the value isn't of correct type
	fun string(key: String, def_value: String): String 
	do 
		sys.jni_env.push_local_frame(3)
		var java_return_value = shared_preferences.get_string(key.to_java_string, 
			def_value.to_java_string)
		var nit_return_value = java_return_value.to_s
		sys.jni_env.pop_local_frame
		return nit_return_value
	end

	# Clears all the dictionnary entries in the specified file or the default file 
	# if none specified at instanciation
	# Returns `self` allowing fluent programming
	fun clear: SharedPreferences 
	do 
		editor.clear
		commit_if_auto
		return self
	end
	
	# If auto_commit is `false`, has to be called to save the data to persistant memory
	fun commit: Bool 
	do 
		sys.jni_env.push_local_frame(1)
		var return_value = editor.commit
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Set a key-value pair using a `Bool` value
	# Returns `self` allowing fluent programming
	fun add_bool(key: String, value: Bool ): SharedPreferences 
	do 
		sys.jni_env.push_local_frame(1)
		editor.put_boolean(key.to_java_string, value)
		sys.jni_env.pop_local_frame
		commit_if_auto
		return self
	end

	# Set a key-value pair using a `Float` value
	# Returns `self` allowing fluent programming
	#
	# Be aware of possible loss of precision as Nit `Float` corresponds to Java `double`
	# and the methods stores a Java `float`
	fun add_float(key: String, value: Float): SharedPreferences 
	do 
		sys.jni_env.push_local_frame(1)
		editor.put_float(key.to_java_string, value)
		sys.jni_env.pop_local_frame
		commit_if_auto
		return self
	end

	# Set a key-value pair using a `Int` type value
	# Returns `self` allowing fluent programming
	#
	# Be aware of possible integer overflow as the Nit `Int` corresponds to Java `long`
	# and the methods stores a Java `int`
	# *You might want to use add_long instead*
	fun add_int(key: String, value: Int): SharedPreferences 
	do 
		sys.jni_env.push_local_frame(1)
		editor.put_int(key.to_java_string, value)
		sys.jni_env.pop_local_frame
		commit_if_auto
		return self
	end

	# Set a key-value pair using a `Int` type value
	# Returns `self` allowing fluent programming
	fun add_long(key: String, value: Int): SharedPreferences 
	do 
		sys.jni_env.push_local_frame(1)
		editor.put_long(key.to_java_string, value)
		sys.jni_env.pop_local_frame
		commit_if_auto
		return self
	end

	# Set a key-value pair using a `String` type value
	# Returns `self` allowing fluent programming
	fun add_string(key: String, value: String): SharedPreferences 
	do 
		sys.jni_env.push_local_frame(2)
		editor.put_string(key.to_java_string, value.to_java_string)
		sys.jni_env.pop_local_frame
		commit_if_auto
		return self
	end

	# Removes the corresponding entry in the file
	# Returns `self` allowing fluent programming
	fun remove(key: String): SharedPreferences 
	do 
		sys.jni_env.push_local_frame(1)
		editor.remove(key.to_java_string)
		sys.jni_env.pop_local_frame
		commit_if_auto
		return self
	end

	# Deallocate global references allocated by the SharedPreferences instance
	fun destroy 
	do
		self.shared_preferences.delete_global_ref
		self.editor.delete_global_ref
	end

	# Store `value` as a serialized Json string
	fun []=(key: String, value: nullable Serializable)
	do
		var serialized_string = new StringWriter
		var serializer = new JsonSerializer(serialized_string)
		serializer.serialize(value)

		add_string(key, serialized_string.to_s)
		commit_if_auto
	end

	# Retrieve an `Object` stored via `[]=` function
	#
	# Returns `null` if there's no serialized object corresponding to the given key
	# Make sure that the serialized object is `auto_serializable` or that it redefines
	# the appropriate methods. Refer to `Serializable` documentation for further details
	fun [](key: String): nullable Object
	do
		var serialized_string = self.string(key, "")

		if serialized_string == "" then return null

		var deserializer = new JsonDeserializer(serialized_string)
		return deserializer.deserialize
	end
end

redef class App
	var shared_preferences: SharedPreferences is lazy do
		return new SharedPreferences.privately(self, "")
	end
end
