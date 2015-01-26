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

# A mapping class of `String` to various value types used by the 
# Android API for various data exchange purposes
module bundle

import serialization
import json_serialization

import platform
import activities

in "Java" `{
	import android.os.Bundle;
	import android.app.Activity;
	import java.util.ArrayList;
	import java.util.Set;
`}

extern class NativeBundle in "Java" `{ android.os.Bundle `}
	super JavaObject

	new in "Java" `{ return new Bundle(); `}

	fun clone: JavaObject in "Java" `{ return recv.clone(); `}
	fun size: Int in "Java" `{ return recv.size(); `}
	fun is_empty: Bool in "Java" `{ return recv.isEmpty(); `}
	fun clear in "Java" `{ recv.clear(); `}
	fun contains_key(key: JavaString): Bool in "Java" `{ return recv.containsKey(key); `}
	fun get(key: JavaString): JavaObject in "Java" `{ return recv.get(key); `}
	fun remove(key: JavaString) in "Java" `{ recv.remove(key); `}
	fun put_all(bundle: NativeBundle) in "Java" `{ recv.putAll(bundle); `}
	fun key_set: HashSet[JavaString] import HashSet[JavaString], 
	  HashSet[JavaString].add in "Java" `{ 
	  	Set<String> java_set = recv.keySet(); 
		int nit_hashset = new_HashSet_of_JavaString();

		for (String element: java_set)
			HashSet_of_JavaString_add(nit_hashset, element);

		return nit_hashset;
	`}
	fun has_file_descriptors: Bool in "Java" `{ return recv.hasFileDescriptors(); `}
	fun put_boolean(key: JavaString, value: Bool) in "Java" `{ 
		recv.putBoolean(key, value); 
	`}
	fun put_byte(key: JavaString, value: Int) in "Java" `{ 
		recv.putByte(key, (byte) value); 
	`}
	# FIXME: Java's `char` are encoded on 16-bits whereas Nit's are on 8-bits.
	fun put_char(key: JavaString, value: Char) in "Java" `{ 
		recv.putChar(key, value); 
	`}
	fun put_short(key: JavaString, value: Int) in "Java" `{ 
		recv.putShort(key, (short) value); 
	`}
	fun put_int(key: JavaString, value: Int) in "Java" `{ 
		recv.putInt(key, (int) value); 
	`}
	fun put_long(key: JavaString, value: Int) in "Java" `{ 
		recv.putLong(key, value); 
	`}
	fun put_float(key: JavaString, value: Float) in "Java" `{ 
		recv.putFloat(key, (float) value); 
	`}
	fun put_double(key: JavaString, value: Float) in "Java" `{ 
		recv.putDouble(key, value); 
	`}
	fun put_string(key: JavaString, value: JavaString) in "Java" `{ 
		recv.putString(key, value); 
	`}
	fun put_char_sequence(key: JavaString, value: JavaString) in "Java" `{ 
		recv.putCharSequence(key, value); 
	`}
	fun put_integer_array_list(key: JavaString, value: Array[Int]) 
	  import Array[Int].length, Array[Int].[] in "Java" `{
		ArrayList<Integer> java_array = 
			new ArrayList<Integer>((int) Array_of_Int_length(value));
		
		for(int i=0; i < java_array.size(); ++i)
			java_array.add((int) Array_of_Int__index(value, i));

		recv.putIntegerArrayList(key, java_array); 
	`}
	fun put_string_array_list(key: JavaString, value: Array[JavaString])
	  import Array[JavaString].length, Array[JavaString].[] in "Java" `{
		ArrayList<String> java_array = new ArrayList<String>((int)Array_of_JavaString_length(value));
		
		for(int i=0; i < java_array.size(); ++i)
			java_array.add(Array_of_JavaString__index(value, i));

		recv.putStringArrayList(key, java_array); 
	`}
	fun put_char_sequence_array_list(key: JavaString, value: Array[JavaString])
	  import Array[JavaString].length, Array[JavaString].[] in "Java" `{
		ArrayList<CharSequence> java_array = 
		  new ArrayList<CharSequence>((int)Array_of_JavaString_length(value));
		
		for(int i=0; i < java_array.size(); ++i)
			java_array.add(Array_of_JavaString__index(value, i));

		recv.putCharSequenceArrayList(key, java_array); 
	`}
	fun put_boolean_array(key: JavaString, value: Array[Bool])
	  import Array[Bool].length, Array[Bool].[] in "Java" `{
		boolean[] java_array = new boolean[(int)Array_of_Bool_length(value)];
		
		for(int i=0; i < java_array.length; ++i)
			java_array[i] = Array_of_Bool__index(value, i);

		recv.putBooleanArray(key, java_array); 
	`}
	fun put_byte_array(key: JavaString, value: Array[Int])
	  import Array[Int].length, Array[Int].[] in "Java" `{
		byte[] java_array = new byte[(int)Array_of_Int_length(value)];
		
		for(int i=0; i < java_array.length; ++i)
			java_array[i] = (byte) Array_of_Int__index(value, i);

		recv.putByteArray(key, java_array); 
	`}
	fun put_short_array(key: JavaString, value: Array[Int])
	  import Array[Int].length, Array[Int].[] in "Java" `{
		short[] java_array = new short[(int)Array_of_Int_length(value)];
		
		for(int i=0; i < java_array.length; ++i)
			java_array[i] = (short) Array_of_Int__index(value, i);

		recv.putShortArray(key, java_array); 
	`}
	# FIXME: Java's `char` are encoded on 16-bits whereas Nit's are on 8-bits.
	fun put_char_array(key: JavaString, value: Array[Char])
	  import Array[Char].length, Array[Char].[] in "Java" `{
		char[] java_array = new char[(int)Array_of_Char_length(value)];
		
		for(int i=0; i < java_array.length; ++i)
			java_array[i] = Array_of_Char__index(value, i);

		recv.putCharArray(key, java_array); 
	`}
	fun put_int_array(key: JavaString, value: Array[Int])
	  import Array[Int].length, Array[Int].[] in "Java" `{
		int[] java_array = new int[(int)Array_of_Int_length(value)];
		
		for(int i=0; i < java_array.length; ++i)
			java_array[i] = (int) Array_of_Int__index(value, i);

		recv.putIntArray(key, java_array); 
	`}
	fun put_long_array(key: JavaString, value: Array[Int])
	  import Array[Int].length, Array[Int].[] in "Java" `{
		long[] java_array = new long[(int)Array_of_Int_length(value)];
		
		for(int i=0; i < java_array.length; ++i)
			java_array[i] = Array_of_Int__index(value, i);

		recv.putLongArray(key, java_array); 
	`}
	fun put_float_array(key: JavaString, value: Array[Float])
	  import Array[Float].length, Array[Float].[] in "Java" `{
		float[] java_array = new float[(int)Array_of_Float_length(value)];
		
		for(int i=0; i < java_array.length; ++i)
			java_array[i] = (float) Array_of_Float__index(value, i);

		recv.putFloatArray(key, java_array); 
	`}
	fun put_double_array(key: JavaString, value: Array[Float])
	  import Array[Float].length, Array[Float].[] in "Java" `{
		double[] java_array = new double[(int)Array_of_Float_length(value)];
		
		for(int i=0; i < java_array.length; ++i)
			java_array[i] = Array_of_Float__index(value, i);

		recv.putDoubleArray(key, java_array); 
	`}
	fun put_string_array(key: JavaString, value: Array[JavaString])
	  import Array[JavaString].length, Array[JavaString].[] in "Java" `{
		String[] java_array = new String[(int)Array_of_JavaString_length(value)];
		
		for(int i=0; i < java_array.length; ++i)
			java_array[i] = Array_of_JavaString__index(value, i);

		recv.putStringArray(key, java_array); 
	`}
	fun put_char_sequence_array(key: JavaString, value: Array[JavaString])
	  import Array[JavaString].length, Array[JavaString].[] in "Java" `{
		CharSequence[] java_array = new CharSequence[(int)Array_of_JavaString_length(value)];
		
		for(int i=0; i < java_array.length; ++i)
			java_array[i] = Array_of_JavaString__index(value, i);

		recv.putCharSequenceArray(key, java_array); 
	`}
	fun put_bundle(key: JavaString, value: NativeBundle) in "Java" `{ 
		recv.putBundle(key, value); 
	`}
	fun get_boolean(key: JavaString): Bool in "Java" `{ return recv.getBoolean(key); `}
	fun get_boolean_with_def_value(key: JavaString, def_value: Bool): Bool in "Java" `{
		return recv.getBoolean(key, def_value); 
	`}
	fun get_byte(key: JavaString): Int in "Java" `{ return recv.getByte(key); `}
	fun get_byte_with_def_value(key: JavaString, def_value: Int): Int in "Java" `{ 
		return recv.getByte(key, (byte) def_value); 
	`}
	# FIXME: Java's `char` are encoded on 16-bits whereas Nit's are on 8-bits.
	fun get_char(key: JavaString): Char in "Java" `{ return recv.getChar(key); `}
	# FIXME: Java's `char` are encoded on 16-bits whereas Nit's are on 8-bits.
	fun get_char_with_def_value(key: JavaString, def_value: Char): Char in "Java" `{
		return recv.getChar(key, def_value); 
	`}
	fun get_short(key: JavaString): Int in "Java" `{ return (short) recv.getShort(key); `}
	fun get_short_with_def_value(key: JavaString, def_value: Int): Int in "Java" `{
		return (short) recv.getShort(key, (short) def_value); 
	`}
	fun get_int(key: JavaString): Int in "Java" `{ return recv.getInt(key); `}
	fun get_int_with_def_value(key: JavaString, def_value: Int): Int in "Java" `{
		return recv.getInt(key, (int) def_value);
	`}
	fun get_long(key: JavaString): Int in "Java" `{ return recv.getLong(key); `}
	fun get_long_with_def_value(key: JavaString, def_value: Int): Int in "Java" `{
		return recv.getLong(key); 
	`}
	fun get_float(key: JavaString): Float in "Java" `{
		return (float) recv.getFloat(key); 
	`}
	fun get_float_with_def_value(key: JavaString, def_value: Float): Float in "Java" `{
		return (float) recv.getFloat(key, (float) def_value);
	`}
	fun get_double(key: JavaString): Float in "Java" `{ return recv.getDouble(key); `}
	fun get_double_with_def_value(key: JavaString, def_value: Float): Float in "Java" `{ 
		return recv.getDouble(key, def_value); 
	`}
	fun get_string(key: JavaString): JavaString in "Java" `{
		return recv.getString(key);
	`}
	fun get_char_sequence(key: JavaString): JavaString in "Java" `{
		return (String) recv.getCharSequence(key); 
	`}
	fun get_bundle(key: JavaString): NativeBundle in "Java" `{
		return recv.getBundle(key); 
	`}
	fun get_integer_array_list(key: JavaString): Array[Int]
		import Array[Int], Array[Int].add in "Java" `{
		ArrayList<Integer> java_array = recv.getIntegerArrayList(key); 
		int nit_array = new_Array_of_Int();

		if (java_array == null) return nit_array;

		for (int element: java_array)
			Array_of_Int_add(nit_array, element);

		return nit_array;
	`}
	fun get_string_array_list(key: JavaString): Array[String]
		import StringCopyArray, StringCopyArray.add, StringCopyArray.collection in "Java" `{
		ArrayList<String> java_array = recv.getStringArrayList(key); 
		int nit_array = new_StringCopyArray();

		if (java_array == null) return nit_array;

		for (String element: java_array)
			StringCopyArray_add(nit_array, element);

		return StringCopyArray_collection(nit_array);
	`}
	fun get_char_sequence_array_list(key: JavaString): Array[String]
		import StringCopyArray, StringCopyArray.add, StringCopyArray.collection in "Java" `{
		ArrayList<CharSequence> java_array = recv.getCharSequenceArrayList(key); 
		int nit_array = new_StringCopyArray();

		if (java_array == null) return nit_array;

		for (CharSequence element: java_array)
			StringCopyArray_add(nit_array, (String) element);

		return StringCopyArray_collection(nit_array);
	`}
	fun get_boolean_array(key: JavaString): Array[Bool]
		import Array[Bool], Array[Bool].add in "Java" `{ 
		boolean[] java_array = recv.getBooleanArray(key); 
		int nit_array = new_Array_of_Bool();

		if (java_array == null) return nit_array;

		for (int i=0; i < java_array.length; ++i)
			Array_of_Bool_add(nit_array, java_array[i]);

		return nit_array;
	`}
	fun get_byte_array(key: JavaString): Array[Int]
		import Array[Int], Array[Int].add in "Java" `{ 
		byte[] java_array = recv.getByteArray(key); 
		int nit_array = new_Array_of_Int();
		
		if (java_array == null) return nit_array;

		for(int i=0; i < java_array.length; ++i)
			Array_of_Int_add(nit_array, java_array[i]);
			
		return nit_array;
	`}
	fun get_short_array(key: JavaString): Array[Int]
		import Array[Int], Array[Int].add in "Java" `{ 
		short[] java_array = recv.getShortArray(key); 
		int nit_array = new_Array_of_Int();
		
		if (java_array == null) return nit_array;

		for(int i=0; i < java_array.length; ++i)
			Array_of_Int_add(nit_array, java_array[i]);
			
		return nit_array;
	`}
	# FIXME: Java's `char` are encoded on 16-bits whereas Nit's are on 8-bits.
	fun get_char_array(key: JavaString): Array[Char]
		import Array[Char], Array[Char].add in "Java" `{ 
		char[] java_array = recv.getCharArray(key); 
		int nit_array = new_Array_of_Char();
		
		if (java_array == null) return nit_array;

		for(int i=0; i < java_array.length; ++i)
			Array_of_Char_add(nit_array, java_array[i]);
			
		return nit_array;
	`}
	fun get_int_array(key: JavaString): Array[Int]
		import Array[Int], Array[Int].add in "Java" `{ 
		int[] java_array = recv.getIntArray(key); 
		int nit_array = new_Array_of_Int();
		
		if (java_array == null) return nit_array;

		for(int i=0; i < java_array.length; ++i)
			Array_of_Int_add(nit_array, java_array[i]);
			
		return nit_array;
	`}
	# FIXME: Get rid of the int cast as soon as the ffi is fixed
	fun get_long_array(key: JavaString): Array[Int]
		import Array[Int], Array[Int].add in "Java" `{ 
		long[] java_array = recv.getLongArray(key); 
		int nit_array = new_Array_of_Int();
		
		if (java_array == null) return nit_array;

		for(int i=0; i < java_array.length; ++i)
			Array_of_Int_add(nit_array, java_array[i]);
			
		return nit_array;
	`}
	fun get_float_array(key: JavaString): Array[Float]
		import Array[Float], Array[Float].add in "Java" `{ 
		float[] java_array = recv.getFloatArray(key); 
		int nit_array = new_Array_of_Float();
		
		if (java_array == null) return nit_array;

		for(int i=0; i < java_array.length; ++i)
		Array_of_Float_add(nit_array, (double) java_array[i]);
			
		return nit_array;
	`}
	fun get_double_array(key: JavaString): Array[Float]
		import Array[Float], Array[Float].add in "Java" `{ 
		double[] java_array = recv.getDoubleArray(key); 
		int nit_array = new_Array_of_Float();
		
		if (java_array == null) return nit_array;

		for(int i=0; i < java_array.length; ++i)
			Array_of_Float_add(nit_array, java_array[i]);
			
		return nit_array;
	`}
	fun get_string_array(key: JavaString): Array[String]
		import StringCopyArray, StringCopyArray.add, StringCopyArray.collection in "Java" `{
		String[] java_array = recv.getStringArray(key); 
		int nit_array = new_StringCopyArray();
		
		if (java_array == null) return nit_array;

		for(int i=0; i < java_array.length; ++i)
			StringCopyArray_add(nit_array, java_array[i]);
			
		return StringCopyArray_collection(nit_array);
	`}
	fun get_char_sequence_array(key: JavaString): Array[String]
		import StringCopyArray, StringCopyArray.add, StringCopyArray.collection in "Java" `{
		CharSequence[] java_array = recv.getCharSequenceArray(key); 
		int nit_array = new_StringCopyArray();
		
		if (java_array == null) return nit_array;

		for(int i=0; i < java_array.length; ++i)
			StringCopyArray_add(nit_array, (String)java_array[i]);
			
		return StringCopyArray_collection(nit_array);
	`}
	fun describe_contents: Int in "Java" `{ return recv.describeContents(); `}
	fun to_string: JavaString in "Java" `{ return recv.toString(); `}

	# HACK for bug #845
	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeBundle_sys(recv);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, recv);
	`}
end

# A class mapping `String` keys to various value types
class Bundle
	private var native_bundle: NativeBundle = new NativeBundle is lazy

	# Get a new `Bundle` wrapping `native_bundle`
	init from(native_bundle: NativeBundle) do self.native_bundle = native_bundle

	# Returns `true` if the Bundle contains this key
	fun has(key: String): Bool
	do
		sys.jni_env.push_local_frame(1)
		var return_value = native_bundle.contains_key(key.to_java_string)
		sys.jni_env.pop_local_frame
		return return_value
	end
		
	# Returns the number of entries in the current `Bundle`
	fun size: Int do return native_bundle.size

	# Returns true if the current `Bundle` is empty
	fun is_empty: Bool do return native_bundle.is_empty

	# Clears all entries
	fun clear do native_bundle.clear

	# Removes the entry associated with the given key
	fun remove(key: String)
	do
		sys.jni_env.push_local_frame(1)
		native_bundle.remove(key.to_java_string)
		sys.jni_env.pop_local_frame
	end

	# Returns a `HashSet[String]` containing every mapping keys in the current
	# `Bundle`
	fun keys: HashSet[String]
	do
		var javastring_set = native_bundle.key_set
		var string_set = new HashSet[String]

		for element in javastring_set do
			string_set.add(element.to_s)
		end

		return string_set
	end

	# Add key-value information by dynamically choosing the appropriate 
	# java method according to value type
	# If there's already a value associated with this key, the new value 
	# overwrites it
	#
	# To retrieve entries, you'll have to call the type corresponding method
	# conforming to these rules :
	#
	# | Nit type              | corresponding getter            |
	# |:----------------------|:--------------------------------|
	# ! `Int`                 | `long`                          |
	# | `Float`               | `double`                        |
	# | `Bool`                | `bool`                          |
	# | `Char`                | `char`                          |
	# ! `String`              | `string`                        |
	# ! `Serializable`        | `deserialize`                   |
	# ! `Array[Int]`          | `array_of_long`                 |
	# ! `Array[Float]`        | `array_of_double`               |
	# ! `Array[Bool]`         | `array_of_bool`                 |
	# ! `Array[Char]`         | `array_of_char`                 |
	# ! `Array[String]`       | `array_of_string`               |
	# | `Array[Serializable]` | `deserialize_array`             |
	fun []=(key: String, value: Serializable): Bundle
	do
		sys.jni_env.push_local_frame(1)
		value.add_to_bundle(self.native_bundle, key.to_java_string)
		sys.jni_env.pop_local_frame
		return self
	end

	# Retrieve an `Object` serialized via `[]=` function
	# Returns `null` if there's no serialized object corresponding to the given key
	# or if it's the wrong value type
	# Make sure that the serialized object is `auto_serializable` or that it 
	# redefines the appropriate methods. Refer to `Serializable` documentation
	# for further details
	fun deserialize(key: String): nullable Object
	do
		var serialized_string = self.string(key)

		if serialized_string == null then return null

		var deserializer = new JsonDeserializer(serialized_string)

		return deserializer.deserialize
	end

	# Retrieve an `Array` of `Object` serialized via `[]=` function
	# Returns `null` if there's no serialized `Array` corresponding to the given key
	# or if it's the wrong value type
	# Make sure that the serialized objects are `auto_serializable` or that they 
	# redefine the appropriate methods. Refer to `Serializable` documentation
	# for further details
	fun deserialize_array(key: String): nullable Array[nullable Object]
	do
		var serialized_array = self.array_of_string(key)

		if serialized_array == null then return null

		var deserialized_array = new Array[nullable Object]

		for serialized_element in serialized_array do
			var deserializer = new JsonDeserializer(serialized_element)
			deserialized_array.add(deserializer.deserialize)
		end

		return deserialized_array
	end

	# Retrieves the `String` value corresponding to the given key
	# Returns `null` if none or if it's the wrong value type
	fun string(key: String): nullable String
	do
		sys.jni_env.push_local_frame(1)
		var return_value = native_bundle.get_string(key.to_java_string).to_s
		sys.jni_env.pop_local_frame

		if return_value == "" then return null

		return return_value
	end

	# Retrieves the `Bool` value corresponding to the given key
	# Returns the `def_value` if none or if it's the wrong value type
	fun bool(key: String, def_value: Bool): Bool
	do
		sys.jni_env.push_local_frame(1)
		var return_value = 
			native_bundle.get_boolean_with_def_value(key.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Retrieves the `Char` value corresponding to the given key
	# Returns the `def_value` if none or if it's the wrong value type
	# FIXME: Java's `char` are encoded on 16-bits whereas Nit's are on 8-bits.
	fun char(key: String, def_value: Char): Char
	do
		sys.jni_env.push_local_frame(1)
		var return_value = 
			native_bundle.get_char_with_def_value(key.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Retrieves the `Int` value corresponding to the given key
	# Returns the `def_value` if none or if it's the wrong value type
	fun int(key: String, def_value: Int): Int
	do
		sys.jni_env.push_local_frame(1)
		var return_value = 
			native_bundle.get_long_with_def_value(key.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return return_value
	end
	
	# Retrieves the `Float` value corresponding to the given key
	# Returns the `def_value` if none or if it's the wrong value type
	fun float(key: String, def_value: Float): Float
	do
		sys.jni_env.push_local_frame(1)
		var return_value = 
			native_bundle.get_double_with_def_value(key.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Retrieves the `Array[Float]` value corresponding to the given key
	# Returns the `null` if none or if it's the wrong value type
	fun array_of_float(key: String): nullable Array[Float]
	do
		sys.jni_env.push_local_frame(1)
		var return_value = native_bundle.get_double_array(key.to_java_string)
		sys.jni_env.pop_local_frame

		if return_value.is_empty then return null

		return return_value
	end

	# Retrieves the `Array[Char]` value corresponding to the given key
	# Returns the `null` if none or if it's the wrong value type
	# FIXME: Java's `char` are encoded on 16-bits whereas Nit's are on 8-bits.
	fun array_of_char(key: String): nullable Array[Char]
	do
		sys.jni_env.push_local_frame(1)
		var return_value = native_bundle.get_char_array(key.to_java_string)
		sys.jni_env.pop_local_frame

		if return_value.is_empty then return null

		return return_value
	end
	# Retrieves the `Array[Int]` value corresponding to the given key
	# Returns the `null` if none or if it's the wrong value type
	fun array_of_int(key: String): nullable Array[Int]
	do
		sys.jni_env.push_local_frame(1)
		var return_value = native_bundle.get_long_array(key.to_java_string)
		sys.jni_env.pop_local_frame

		if return_value.is_empty then return null

		return return_value
	end

	# Retrieves the `Array[Bool]` value corresponding to the given key
	# Returns the `null` if none or if it's the wrong value type
	fun array_of_bool(key: String): nullable Array[Bool]
	do
		sys.jni_env.push_local_frame(1)
		var return_value = native_bundle.get_boolean_array(key.to_java_string)
		sys.jni_env.pop_local_frame

		if return_value.is_empty then return null

		return return_value
	end

	# Retrieves the `Array[String]` value corresponding to the given key
	# Returns the `null` if none or if it's the wrong value type
	fun array_of_string(key: String): nullable Array[String]
	do
		sys.jni_env.push_local_frame(1)

		var return_value = native_bundle.get_string_array(key.to_java_string)
		sys.jni_env.pop_local_frame
		
		if return_value.is_empty then return null

		return return_value
	end
end

redef class Serializable
	# Called by `Bundle::[]=` to dynamically choose the appropriate method according
	# to the value type to store
	# Non-primitive Object (`String` excluded) will be stored as a serialized json `String`
	# Refine your class to customize this method behaviour
	protected fun add_to_bundle(bundle: NativeBundle, key: JavaString)
	do
		sys.jni_env.push_local_frame(1)
		var serialized_string = new StringOStream
		var serializer = new JsonSerializer(serialized_string)
		serializer.serialize(self)

		bundle.put_string(key, serialized_string.to_s.to_java_string)
	end
end

redef class Int
	redef fun add_to_bundle(bundle, key)
	do
		bundle.put_long(key, self)
	end
end

redef class Char
	redef fun add_to_bundle(bundle, key)
	do
		bundle.put_char(key, self)
	end
end

redef class Float
	redef fun add_to_bundle(bundle, key)
	do
		bundle.put_double(key, self)
	end
end

redef class Bool
	redef fun add_to_bundle(bundle, key)
	do
		bundle.put_boolean(key, self)
	end
end

redef class String
	redef fun add_to_bundle(bundle, key)
	do
		bundle.put_string(key, self.to_java_string)
	end
end

redef class Array[E]
	redef fun add_to_bundle(bundle, key)
	do
		if self isa Array[Bool] then
			bundle.put_boolean_array(key, self)
		else if self isa Array[Int] then
			bundle.put_long_array(key, self)
		else if self isa Array[Float] then
			bundle.put_double_array(key, self)
		else if self isa Array[Char] then
			bundle.put_char_array(key, self)
		else if self isa Array[String] then
			sys.jni_env.push_local_frame(self.length)
			var java_string_array = new Array[JavaString] 

			for element in self do
				java_string_array.push(element.to_s.to_java_string)
			end

			bundle.put_string_array(key, java_string_array)
		else if self isa Array[Serializable] then
			sys.jni_env.push_local_frame(self.length)
			var java_string_array = new Array[JavaString]

			for element in self do
			var serialized_string = new StringOStream
				var serializer = new JsonSerializer(serialized_string)
				serializer.serialize(element)
				java_string_array.add(serialized_string.to_s.to_java_string)
			end

			bundle.put_string_array(key, java_string_array)
		end
	end
end

# Allows JavaString collection copy through FFI with Java
private class StringCopyArray
	var collection = new Array[String]
	fun add(element: JavaString) do collection.add element.to_s
end
