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

# Services allowing to launch activities and start/stop services using
# `android.content.Intent` for the android platform
module intent_api10

import dalvik
import android::bundle
import serialization
private import json

in "Java" `{
	import android.content.Intent;
	import android.net.Uri;
	import android.graphics.Rect;
	import java.util.Set;
	import java.util.ArrayList;
	import nit.app.NitObject;
`}

extern class NativeIntent in "Java" `{ android.content.Intent `}
	super JavaObject

	new in "Java" `{ return new Intent(); `}

	fun add_category(category: JavaString) in "Java" `{ self.addCategory(category); `}
	fun add_flags(flags: Int) in "Java" `{ self.addFlags((int)flags); `}
	fun filter_equals(other: NativeIntent): Bool in "Java" `{
		return self.filterEquals(other);
	`}
	fun action: JavaString in "Java" `{ return self.getAction(); `}
	fun boolean_array_extra(name: JavaString): Array[Bool] import Array[Bool],
	  Array[Bool].push in "Java" `{
		boolean[] java_array = self.getBooleanArrayExtra(name);
		NitObject nit_array = new_Array_of_Bool();

		for(int i=0; i < java_array.length; ++i)
			Array_of_Bool_push(nit_array, java_array[i]);

		return nit_array;
	`}
	fun boolean_extra(name: JavaString, def_value: Bool): Bool in "Java" `{
		return self.getBooleanExtra(name, def_value);
	`}
	fun byte_array_extra(name: JavaString): Array[Int] import Array[Int],
	  Array[Int].add in "Java" `{
		byte[] java_array = self.getByteArrayExtra(name);
		NitObject nit_array = new_Array_of_Int();

		for (int i=0; i < java_array.length; ++i)
			Array_of_Int_add(nit_array, java_array[i]);

		return nit_array;
	`}
	fun byte_extra(name: JavaString, def_value: Int): Int in "Java" `{
		return (int) self.getByteExtra(name, (byte) def_value);
	`}
	# FIXME: Java's `char` are encoded on 16-bits whereas Nit's are on 8-bits.
	fun char_array_extra(name: JavaString): Array[Char] import Array[Char],
	  Array[Char].add in "Java" `{
		char[] java_array = self.getCharArrayExtra(name);
		NitObject nit_array = new_Array_of_Char();

		for (int i = 0; i < java_array.length; ++i)
			Array_of_Char_add(nit_array, java_array[i]);

		return nit_array;
	`}
	# FIXME: Java's `char` are encoded on 16-bits whereas Nit's are on 8-bits.
	fun char_extra(name: JavaString, def_value: Char): Char in "Java" `{
		return (int)self.getCharExtra(name, (char)def_value);
	`}
	fun char_sequence_array_extra(name: JavaString): Array[String]
	  import StringCopyArray, StringCopyArray.add, StringCopyArray.collection in "Java" `{
		CharSequence[] java_array = self.getCharSequenceArrayExtra(name);
		NitObject nit_array = new_StringCopyArray();

		for (int i = 0; i < java_array.length; ++i)
			StringCopyArray_add(nit_array, (String) java_array[i]);

		return StringCopyArray_collection(nit_array);
	`}
	fun char_sequence_array_list_extra(name: JavaString): Array[String]
	  import StringCopyArray, StringCopyArray.add, StringCopyArray.collection in "Java" `{
		ArrayList<CharSequence> java_array = self.getCharSequenceArrayListExtra(name);
		NitObject nit_array = new_StringCopyArray();

		if (java_array == null) return nit_array;

		for (CharSequence element: java_array)
			StringCopyArray_add(nit_array, (String) element);

		return StringCopyArray_collection(nit_array);
	`}
	fun char_sequence_extra(name: JavaString): JavaString in "Java" `{
		return (String) self.getCharSequenceExtra(name);
	`}
	fun categories: HashSet[String] import StringCopyHashSet,
	  StringCopyHashSet.add, StringCopyHashSet.collection  in "Java" `{
		Set<String> java_set = self.getCategories();
		NitObject nit_hashset = new_StringCopyHashSet();

		if (java_set == null) return nit_hashset;

		for (String element: java_set)
			StringCopyHashSet_add(nit_hashset, element);

		return StringCopyHashSet_collection(nit_hashset);
	`}
	# Returns the Uri as an encoded String
	fun data: JavaString in "Java" `{ return self.getDataString(); `}
	fun double_array_extra(name: JavaString): Array[Float] import Array[Float],
	  Array[Float].push in "Java" `{
		double[] java_array = self.getDoubleArrayExtra(name);
		NitObject nit_array = new_Array_of_Float();

		for(int i=0; i < java_array.length; ++i)
			Array_of_Float_push(nit_array, java_array[i]);

		return nit_array;
	`}
	fun double_extra(name: JavaString, def_value: Float): Float in "Java" `{
		return self.getDoubleExtra(name, def_value);
	`}
	fun flags: Int in "Java" `{ return self.getFlags(); `}
	fun float_array_extra(name: JavaString): Array[Float] import Array[Float],
	  Array[Float].push in "Java" `{
		float[] java_array = self.getFloatArrayExtra(name);
		NitObject nit_array = new_Array_of_Float();

		for(int i=0; i < java_array.length; ++i)
			Array_of_Float_push(nit_array, java_array[i]);

		return nit_array;
	`}
	fun float_extra(name: JavaString, def_value: Float): Float in "Java" `{
		return self.getFloatExtra(name, (float) def_value);
	`}
	fun int_array_extra(name: JavaString): Array[Int] import Array[Int],
	  Array[Int].push in "Java" `{
		int[] java_array = self.getIntArrayExtra(name);
		NitObject nit_array = new_Array_of_Int();

		for(int i=0; i < java_array.length; ++i)
			Array_of_Int_push(nit_array, java_array[i]);

		return nit_array;
	`}
	fun int_extra(name: JavaString, def_value: Int): Int in "Java" `{
		return self.getIntExtra(name, (int)def_value);
	`}
	fun long_array_extra(name: JavaString): Array[Int] import Array[Int],
	  Array[Int].push in "Java" `{
		long[] java_array = self.getLongArrayExtra(name);
		NitObject nit_array = new_Array_of_Int();

		for(int i=0; i < java_array.length; ++i)
			Array_of_Int_push(nit_array, (int) java_array[i]);

		return nit_array;
	`}
	fun long_extra(name: JavaString, def_value: Int): Int in "Java" `{
		return (int) self.getLongExtra(name, def_value);
	`}
	fun get_package: JavaString in "Java" `{ return self.getPackage(); `}
	fun scheme: JavaString in "Java" `{ return self.getScheme(); `}
	fun short_array_extra(name: JavaString): Array[Int] import Array[Int],
	  Array[Int].push in "Java" `{
		short[] java_array = self.getShortArrayExtra(name);
		NitObject nit_array = new_Array_of_Int();

		for(int i=0; i < java_array.length; ++i)
			Array_of_Int_push(nit_array, (int) java_array[i]);

		return nit_array;
	`}
	fun short_extra(name: JavaString, def_value: Int): Int in "Java" `{
		return self.getShortExtra(name, (short) def_value);
	`}
	fun string_array_extra(name: JavaString): Array[String]
	  import StringCopyArray, StringCopyArray.add, StringCopyArray.collection in "Java" `{
		String[] java_array = self.getStringArrayExtra(name);
		NitObject nit_array = new_StringCopyArray();

		for(int i=0; i < java_array.length; ++i)
			StringCopyArray_add(nit_array, java_array[i]);

		return StringCopyArray_collection(nit_array);
	`}
	fun string_array_list_extra(name: JavaString): Array[String]
	  import StringCopyArray, StringCopyArray.add, StringCopyArray.collection in "Java" `{
		ArrayList<String> java_array = self.getStringArrayListExtra(name);
		NitObject nit_array = new_StringCopyArray();

		for (String element: java_array)
			StringCopyArray_add(nit_array, element);

		return StringCopyArray_collection(nit_array);
	`}
	fun string_extra(name: JavaString): JavaString in "Java" `{
		String return_value = self.getStringExtra(name);
		if (return_value == null) return "";

		return return_value;
	`}
	fun get_type: JavaString in "Java" `{ return self.getType(); `}
	fun has_category(category: JavaString): Bool in "Java" `{
		return self.hasCategory(category);
	`}
	fun has_extra(extra: JavaString): Bool in "Java" `{ return self.hasExtra(extra); `}
	fun has_file_descriptors: Bool in "Java" `{ return self.hasFileDescriptors(); `}
	fun add_extra_double(name: JavaString, value: Float): NativeIntent in "Java" `{
		return self.putExtra(name, value);
	`}
	fun add_extra_array_of_double(name: JavaString, value: Array[Float]): NativeIntent
	  import Array[Float].length, Array[Float].[] in "Java" `{
		double[] java_array = new double[(int)Array_of_Float_length(value)];

		for (int i=0; i < java_array.length; ++i)
			java_array[i] = Array_of_Float__index(value, i);

		return self.putExtra(name, java_array);
	`}
	# FIXME: Java's `char` are encoded on 16-bits whereas Nit's are on 8-bits.
	fun add_extra_char(name: JavaString, value: Char): NativeIntent in "Java" `{
		return self.putExtra(name, value);
	`}
	# FIXME: Java's `char` are encoded on 16-bits whereas Nit's are on 8-bits.
	fun add_extra_array_of_char(name: JavaString, value: Array[Char]): NativeIntent
	  import Array[Char].length, Array[Char].[] in "Java" `{
		char[] java_array = new char[(int)Array_of_Char_length(value)];

		for (int i=0; i < java_array.length; ++i)
			java_array[i] = (char)Array_of_Char__index(value, i);

		return self.putExtra(name, java_array);
	`}
	fun add_extra_char_sequence(name: JavaString, value: JavaString): NativeIntent
	  in "Java" `{
		return self.putExtra(name, value);
	`}
	fun add_extra_array_of_char_sequence(name: JavaString, value: Array[JavaString]):
	  NativeIntent import Array[JavaString].length, Array[JavaString].[] in "Java" `{
		CharSequence[] java_array = new CharSequence[(int)Array_of_JavaString_length(value)];

		for (int i=0; i < java_array.length; ++i)
			java_array[i] = Array_of_JavaString__index(value, i);

		return self.putExtra(name, java_array);
	`}
	fun add_extra_bundle(name: JavaString, value: NativeBundle): NativeIntent
	  in "Java" `{
		return self.putExtra(name, value);
	`}
	fun add_extra_int(name: JavaString, value: Int): NativeIntent in "Java" `{
		return self.putExtra(name, value);
	`}
	fun add_extra_array_of_int(name: JavaString, value: Array[Int]): NativeIntent
	  import Array[Int].length, Array[Int].[] in "Java" `{
		int[] java_array = new int[(int)Array_of_Int_length(value)];

		for (int i=0; i < java_array.length; ++i)
			java_array[i] = (int)Array_of_Int__index(value, i);

		return self.putExtra(name, java_array);
	`}
	fun add_extra_array_list_of_int(name: JavaString, value: Array[Int]): NativeIntent
	  import Array[Int].length, Array[Int].[] in "Java" `{
		int length = (int)Array_of_Int_length(value);
		ArrayList<Integer> java_array = new ArrayList<Integer>(length);

		for (int i=0; i < length; ++i)
			java_array.add((int)Array_of_Int__index(value, i));

		return self.putExtra(name, java_array);
	`}
	fun add_extra_byte(name: JavaString, value: Int): NativeIntent in "Java" `{
		return self.putExtra(name, (byte) value);
	`}
	fun add_extra_array_of_byte(name: JavaString, value: Int): NativeIntent in "Java" `{
		return self.putExtra(name, (byte) value);
	`}
	fun add_extra_long(name: JavaString, value: Int): NativeIntent in "Java" `{
		return self.putExtra(name, value);
	`}
	fun add_extra_array_of_long(name: JavaString, value: Array[Int]): NativeIntent
	  import Array[Int].length, Array[Int].[] in "Java" `{
		long[] java_array = new long[(int)Array_of_Int_length(value)];

		for (int i=0; i < java_array.length; ++i)
			java_array[i] = Array_of_Int__index(value, i);

		return self.putExtra(name, java_array);
	`}
	fun add_extra_float(name: JavaString, value: Float): NativeIntent in "Java" `{
		return self.putExtra(name, value);
	`}
	fun add_extra_array_of_float(name: JavaString, value: Array[Float]): NativeIntent
	  import Array[Float].length, Array[Float].[] in "Java" `{
		float[] java_array = new float[(int)Array_of_Float_length(value)];

		for (int i=0; i < java_array.length; ++i)
			java_array[i] = (float) Array_of_Float__index(value, i);

		return self.putExtra(name, java_array);
	`}
	fun add_extra_string(name: JavaString, value: JavaString): NativeIntent in "Java" `{
		return self.putExtra(name, value);
	`}
	fun add_extra_array_of_string(name: JavaString, value: Array[JavaString]): NativeIntent
	  import Array[JavaString].length, Array[JavaString].[] in "Java" `{
		String[] java_array = new String[(int)Array_of_JavaString_length(value)];

		for (int i=0; i < java_array.length; ++i)
			java_array[i] = Array_of_JavaString__index(value, i);

		return self.putExtra(name, java_array);
	`}
	fun add_extra_array_list_of_string(name: JavaString, value: Array[JavaString]): NativeIntent
	  import Array[JavaString].length, Array[JavaString].[] in "Java" `{
		int length = (int)Array_of_JavaString_length(value);
		ArrayList<String> java_array = new ArrayList<String>(length);

		for (int i=0; i < length; ++i) {
			java_array.add(Array_of_JavaString__index(value, i));
		}

		return self.putExtra(name, java_array);
	`}
	fun add_extra_bool(name: JavaString, value: Bool): NativeIntent in "Java" `{
		return self.putExtra(name, value);
	`}
	fun add_extra_array_of_bool(name: JavaString, value: Array[Bool]): NativeIntent
	  import Array[Bool].length, Array[Bool].[] in "Java" `{
		boolean[] java_array = new boolean[(int)Array_of_Bool_length(value)];

		for (int i=0; i < java_array.length; ++i)
			java_array[i] = Array_of_Bool__index(value, i);

		return self.putExtra(name, java_array);
	`}
	fun add_extra_short(name: JavaString, value: Int): NativeIntent in "Java" `{
		return self.putExtra(name, value);
	`}
	fun add_extra_array_of_short(name: JavaString, value: Array[Int]): NativeIntent
	  import Array[Int].length, Array[Int].[] in "Java" `{
		short[] java_array = new short[(int)Array_of_Int_length(value)];

		for (int i=0; i < java_array.length; ++i)
			java_array[i] = (short) Array_of_Int__index(value, i);

		return self.putExtra(name, java_array);
	`}
	fun copy_extras(src: NativeIntent): NativeIntent in "Java" `{ return self.putExtras(src); `}
	fun add_extras(src: NativeBundle): NativeIntent in "Java" `{ return self.putExtras(src); `}
	fun remove_category(category: JavaString) in "Java" `{ self.removeCategory(category); `}
	fun remove_extra(name: JavaString) in "Java" `{ self.removeExtra(name); `}
	fun replace_extras(src: NativeIntent): NativeIntent in "Java" `{
		return self.replaceExtras(src);
	`}
	fun resolve_activity(pm: NativePackageManager): NativeComponentName in "Java" `{
		return self.resolveActivity(pm);
	`}
	fun resolve_type(context: NativeActivity): JavaString in "Java" `{
		return self.resolveType(context);
	`}
	fun action=(action: JavaString): NativeIntent in "Java" `{ return self.setAction(action); `}
	fun class_=(package_context: NativeActivity, class_name: JavaString): NativeIntent
	  in "Java" `{
		Class<?> java_class = null;
		try {
			java_class = Class.forName(class_name);
		} catch (Exception e) {
			e.getStackTrace();
		}
		return self.setClass(package_context, java_class);
	`}
	fun class_name=(package_context: NativeActivity, class_name: JavaString): NativeIntent
	  in "Java" `{
		return self.setClassName(package_context, class_name);
	`}
	fun set_class_name(package_name: JavaString, class_name: JavaString): NativeIntent
	  in "Java" `{
		return self.setClassName(package_name, class_name);
	`}
	fun data=(data_uri: JavaString): NativeIntent in "Java" `{
		return self.setData(Uri.parse(data_uri));
	`}
	fun data_and_type=(data_uri: JavaString, type_: JavaString): NativeIntent in "Java" `{
		return self.setDataAndType(Uri.parse(data_uri), type_);
	`}
	fun flags=(flags: Int): NativeIntent in "Java" `{ return self.setFlags((int)flags); `}
	fun package_name=(package_name: JavaString): NativeIntent in "Java" `{
		return self.setPackage(package_name);
	`}
	fun source_bounds=(left, top, right, bottom: Int) in "Java" `{
		self.setSourceBounds(new Rect((int)left, (int)top, (int)right, (int)bottom));
	`}
	fun mime_type=(mime_type: JavaString): NativeIntent in "Java" `{
		return self.setType(mime_type);
	`}
	fun to_native_s: JavaString in "Java" `{ return self.toString(); `}
	fun to_uri(flags: Int): JavaString in "Java" `{ return self.toUri((int)flags); `}

	# HACK for bug #845
	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeIntent_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}
end

extern class NativePackageManager in "Java" `{ android.content.pm.PackageManager `}
end

extern class NativeComponentName in "Java" `{ android.content.ComponentName `}
end

# Contains a set of actions that can be performed by the intent
# Designed to be used with the `intent_action` function
# Example : `intent_action.main`
#
# For further details on actions, refer to Android Intent documentation
class Action

	# Standard Activity Action
	fun main: JavaString in "Java" `{ return Intent.ACTION_MAIN; `}
	fun view: JavaString in "Java" `{ return Intent.ACTION_VIEW; `}
	fun attach_data: JavaString in "Java" `{ return Intent.ACTION_ATTACH_DATA; `}
	fun edit: JavaString in "Java" `{ return Intent.ACTION_EDIT; `}
	fun pick: JavaString in "Java" `{ return Intent.ACTION_PICK; `}
	fun chooser: JavaString in "Java" `{ return Intent.ACTION_CHOOSER; `}
	fun get_content: JavaString in "Java" `{ return Intent.ACTION_GET_CONTENT; `}
	fun dial: JavaString in "Java" `{ return Intent.ACTION_DIAL; `}
	fun call: JavaString in "Java" `{ return Intent.ACTION_CALL; `}
	fun send: JavaString in "Java" `{ return Intent.ACTION_SEND; `}
	fun sent_to: JavaString in "Java" `{ return Intent.ACTION_SENDTO; `}
	fun answer: JavaString in "Java" `{ return Intent.ACTION_ANSWER; `}
	fun insert: JavaString in "Java" `{ return Intent.ACTION_INSERT; `}
	fun delete: JavaString in "Java" `{ return Intent.ACTION_DELETE; `}
	fun run: JavaString in "Java" `{ return Intent.ACTION_RUN; `}
	fun sync: JavaString in "Java" `{ return Intent.ACTION_SYNC; `}
	fun pick_activity: JavaString in "Java" `{ return Intent.ACTION_PICK_ACTIVITY; `}
	fun search: JavaString in "Java" `{ return Intent.ACTION_SEARCH; `}
	fun web_search: JavaString in "Java" `{ return Intent.ACTION_WEB_SEARCH; `}
	fun factory_test: JavaString in "Java" `{ return Intent.ACTION_FACTORY_TEST; `}

	# Standard Broadcast Actions
	fun time_tick: JavaString in "Java" `{ return Intent.ACTION_TIME_TICK; `}
	fun time_changed: JavaString in "Java" `{ return Intent.ACTION_TIME_CHANGED; `}
	fun timezone_changed: JavaString in "Java" `{ return Intent.ACTION_TIMEZONE_CHANGED; `}
	fun boot_completed: JavaString in "Java" `{ return Intent.ACTION_BOOT_COMPLETED; `}
	fun package_added: JavaString in "Java" `{ return Intent.ACTION_PACKAGE_ADDED; `}
	fun package_changed: JavaString in "Java" `{ return Intent.ACTION_PACKAGE_CHANGED; `}
	fun package_removed: JavaString in "Java" `{ return Intent.ACTION_PACKAGE_REMOVED; `}
	fun package_restarted: JavaString in "Java" `{ return Intent.ACTION_PACKAGE_RESTARTED; `}
	fun package_data_cleared: JavaString in "Java" `{
		return Intent.ACTION_PACKAGE_DATA_CLEARED;
	`}
	fun uid_removed: JavaString in "Java" `{ return Intent.ACTION_UID_REMOVED; `}
	fun battery_changed: JavaString in "Java" `{ return Intent.ACTION_BATTERY_CHANGED; `}
	fun power_connected: JavaString in "Java" `{ return Intent.ACTION_POWER_CONNECTED; `}
	fun power_disconnected: JavaString in "Java" `{ return Intent.ACTION_POWER_DISCONNECTED; `}
	fun shutdown: JavaString in "Java" `{ return Intent.ACTION_SHUTDOWN; `}
end

# A category gives extra information about the action to execute
# Designed to be used with the `intent_category` function
# Example : `intent_category.home`
#
# For further details on categories, refer to Android Intent documentation
class Category
	fun alternative: JavaString in "Java" `{ return Intent.CATEGORY_ALTERNATIVE; `}
	fun car_dock: JavaString in "Java" `{ return Intent.CATEGORY_CAR_DOCK; `}
	fun car_mode: JavaString in "Java" `{ return Intent.CATEGORY_CAR_MODE; `}
	fun default: JavaString in "Java" `{ return Intent.CATEGORY_DEFAULT; `}
	fun desk_dock: JavaString in "Java" `{ return Intent.CATEGORY_DESK_DOCK; `}
	fun development_preference: JavaString in "Java" `{
		return Intent.CATEGORY_DEVELOPMENT_PREFERENCE;
	`}
	fun embed: JavaString in "Java" `{ return Intent.CATEGORY_EMBED; `}
	fun framework_instrumentation_test: JavaString in "Java" `{
		return Intent.CATEGORY_FRAMEWORK_INSTRUMENTATION_TEST;
	`}
	fun home: JavaString in "Java" `{ return Intent.CATEGORY_HOME; `}
	fun info: JavaString in "Java" `{ return Intent.CATEGORY_INFO; `}
	fun launcher: JavaString in "Java" `{ return Intent.CATEGORY_LAUNCHER; `}
	fun monkey: JavaString in "Java" `{ return Intent.CATEGORY_MONKEY; `}
	fun openable: JavaString in "Java" `{ return Intent.CATEGORY_OPENABLE; `}
	fun preference: JavaString in "Java" `{ return Intent.CATEGORY_PREFERENCE; `}
	fun sample_code: JavaString in "Java" `{ return Intent.CATEGORY_SAMPLE_CODE; `}
	fun selected_alternative: JavaString in "Java" `{
		return Intent.CATEGORY_SELECTED_ALTERNATIVE;
	`}
	fun tab: JavaString in "Java" `{ return Intent.CATEGORY_TAB; `}
	fun test: JavaString in "Java" `{ return Intent.CATEGORY_TEST; `}
	fun unit_test: JavaString in "Java" `{ return Intent.CATEGORY_UNIT_TEST; `}
end

# Used to add any additional information.
#
# For further details on extras, refer to Android Intent documentation
class Extra
	fun alarm_count: JavaString in "Java" `{ return Intent.EXTRA_ALARM_COUNT; `}
	fun bcc: JavaString in "Java" `{ return Intent.EXTRA_BCC; `}
	fun cc: JavaString in "Java" `{ return Intent.EXTRA_CC; `}
	fun changed_component_name: JavaString in "Java" `{
		return Intent.EXTRA_CHANGED_COMPONENT_NAME;
	`}
	fun changed_component_name_list: JavaString in "Java" `{
		return Intent.EXTRA_CHANGED_COMPONENT_NAME_LIST;
	`}
	fun changed_package_list: JavaString in "Java" `{
		return Intent.EXTRA_CHANGED_PACKAGE_LIST;
	`}
	fun changed_uid_list: JavaString in "Java" `{ return Intent.EXTRA_CHANGED_UID_LIST; `}
	fun data_removed: JavaString in "Java" `{ return Intent.EXTRA_DATA_REMOVED; `}
	fun dock_state: JavaString in "Java" `{ return Intent.EXTRA_DOCK_STATE; `}
	fun dock_state_car: Int in "Java" `{ return Intent.EXTRA_DOCK_STATE_CAR; `}
	fun dock_state_desk: Int in "Java" `{ return Intent.EXTRA_DOCK_STATE_DESK; `}
	fun dock_state_undocked: Int in "Java" `{ return Intent.EXTRA_DOCK_STATE_UNDOCKED; `}
	fun dont_kill_app: JavaString in "Java" `{ return Intent.EXTRA_DONT_KILL_APP; `}
	fun email: JavaString in "Java" `{ return Intent.EXTRA_EMAIL; `}
	fun initial_intents: JavaString in "Java" `{ return Intent.EXTRA_INITIAL_INTENTS; `}
	fun intent: JavaString in "Java" `{ return Intent.EXTRA_INTENT; `}
	fun key_event: JavaString in "Java" `{ return Intent.EXTRA_KEY_EVENT; `}
	fun phone_number: JavaString in "Java" `{ return Intent.EXTRA_PHONE_NUMBER; `}
	fun remote_intent_token: JavaString in "Java" `{
		return Intent.EXTRA_REMOTE_INTENT_TOKEN;
	`}
	fun replacing: JavaString in "Java" `{ return Intent.EXTRA_REPLACING; `}
	fun shortcut_icon: JavaString in "Java" `{ return Intent.EXTRA_SHORTCUT_ICON; `}
	fun shortcut_icon_resource: JavaString in "Java" `{
		return Intent.EXTRA_SHORTCUT_ICON_RESOURCE;
	`}
	fun shortcut_intent: JavaString in "Java" `{ return Intent.EXTRA_SHORTCUT_INTENT; `}
	fun stream: JavaString in "Java" `{ return Intent.EXTRA_STREAM; `}
	fun subject: JavaString in "Java" `{ return Intent.EXTRA_SUBJECT; `}
	fun template: JavaString in "Java" `{ return Intent.EXTRA_TEMPLATE; `}
	fun text: JavaString in "Java" `{ return Intent.EXTRA_TEXT; `}
	fun title: JavaString in "Java" `{ return Intent.EXTRA_TITLE; `}
	fun uid: JavaString in "Java" `{ return Intent.EXTRA_UID; `}
end

# A Flag controls how to handle the Intent
# Designed to be used with the `intent_flag` function
# Example : `intent_flag.activity_brought_to_front`
#
# For further details on flags, refer to Android Intent documentation
class Flag
	fun activity_brought_to_front: Int in "Java" `{
		return Intent.FLAG_ACTIVITY_BROUGHT_TO_FRONT;
	`}
	fun activity_clear_top: Int in "Java" `{
		return Intent.FLAG_ACTIVITY_CLEAR_TOP;
	`}
	fun activity_clear_when_task_reset: Int in "Java" `{
		return Intent.FLAG_ACTIVITY_CLEAR_WHEN_TASK_RESET;
	`}
	fun activity_exclude_from_recents: Int in "Java" `{
		return Intent.FLAG_ACTIVITY_EXCLUDE_FROM_RECENTS;
	`}
	fun activity_forward_result: Int in "Java" `{
		return Intent.FLAG_ACTIVITY_FORWARD_RESULT;
	`}
	fun activity_launched_from_history: Int in "Java" `{
		return Intent.FLAG_ACTIVITY_LAUNCHED_FROM_HISTORY;
	`}
	fun activity_multiple_task: Int in "Java" `{
		return Intent.FLAG_ACTIVITY_MULTIPLE_TASK;
	`}
	fun activity_new_task: Int in "Java" `{
		return Intent.FLAG_ACTIVITY_NEW_TASK;
	`}
	fun activity_no_animation: Int in "Java" `{
		return Intent.FLAG_ACTIVITY_NO_ANIMATION;
	`}
	fun activity_no_history: Int in "Java" `{
		return Intent.FLAG_ACTIVITY_NO_HISTORY;
	`}
	fun activity_no_user_action: Int in "Java" `{
		return Intent.FLAG_ACTIVITY_NO_USER_ACTION;
	`}
	fun activity_previous_is_top: Int in "Java" `{
		return Intent.FLAG_ACTIVITY_PREVIOUS_IS_TOP;
	`}
	fun activity_reorder_to_front: Int in "Java" `{
		return Intent.FLAG_ACTIVITY_REORDER_TO_FRONT;
	`}
	fun activity_reset_task_if_needed: Int in "Java" `{
		return Intent.FLAG_ACTIVITY_RESET_TASK_IF_NEEDED;
	`}
	fun activity_single_top: Int in "Java" `{
		return Intent.FLAG_ACTIVITY_SINGLE_TOP;
	`}
	fun debug_log_resolution: Int in "Java" `{
		return Intent.FLAG_DEBUG_LOG_RESOLUTION;
	`}
	fun from_background: Int in "Java" `{
		return Intent.FLAG_FROM_BACKGROUND;
	`}
	fun grant_read_uri_permission: Int in "Java" `{
		return Intent.FLAG_GRANT_READ_URI_PERMISSION;
	`}
	fun grant_write_uri_permission: Int in "Java" `{
		return Intent.FLAG_GRANT_WRITE_URI_PERMISSION;
	`}
	fun receiver_registered_only: Int in "Java" `{
		return Intent.FLAG_RECEIVER_REGISTERED_ONLY;
	`}
	fun receiver_replace_pending: Int in "Java" `{
		return Intent.FLAG_RECEIVER_REPLACE_PENDING;
	`}
end

# Services allowing to launch an activity and start/stop services
class Intent
	protected var intent: NativeIntent = (new NativeIntent).new_global_ref is lazy

	# The general action to be performed
	#
	# ~~~nitish
	# # TODO better example
	# intent.action = intent_action.view.to_s
	# ~~~
	fun action=(action: String)
	do
		sys.jni_env.push_local_frame(1)
		intent.action = action.to_java_string
		sys.jni_env.pop_local_frame
	end

	# Returns the action to be performed or `null` if none
	fun action: nullable String do
		var result = intent.action.to_s
		if result == "" then return null
		return result
	end

	# Add category to the intent
	# Only activities providing all of the requested categories will be used
	#
	# ~~~nitish
	# # TODO better example
	# intent.add_category(intent_category.home.to_s)
	# ~~~
	# Returns `self` allowing fluent programming
	fun add_category(category: String): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_category(category.to_java_string)
		sys.jni_env.pop_local_frame
		return self
	end

	# Returns all the intent categories or `null` if none
	fun categories: nullable HashSet[String]
	do
		var string_set = intent.categories
		if string_set.is_empty then return null

		return string_set
	end

	# Sets the data uri the intent is working on
	# Automatically clears the type field set using `mime_type=` method as it
	# uses the data uri to determine the MIME type
	# Note: The Uri string has to comply with RFC 2396
	fun data=(data_uri: String)
	do
		sys.jni_env.push_local_frame(1)
		intent.data = data_uri.to_java_string
		sys.jni_env.pop_local_frame
	end

	# Returns the data Uri the data is operating on or `null` if none
	fun data: nullable String
	do
		var result = intent.data.to_s
		if result == "" then return null
		return result
	end

	# Sets an explicit MIME data type to be handled by the intent, for example
	# the return data type
	# Automatically clears the data type field set using `data=` method
	fun mime_type=(mime_type: String)
	do
		sys.jni_env.push_local_frame(1)
		intent.mime_type = mime_type.to_java_string
		sys.jni_env.pop_local_frame
	end

	# Add a flag to be used by the intent
	#
	# ~~~nitish
	# # TODO better example
	# intent.add_flags(intent_flag.activity_new_task)
	# ~~~
	# Returns `self` allowing fluent programming
	fun add_flags(flags: Int): Intent
	do
		intent.add_flags(flags)
		return self
	end

	# Returns an `Int` representing all the intent flags
	fun flags: Int do return intent.flags

	# Returns the package name the intent resolution is limited to
	# Returns `null` if not defined
	fun package_name: nullable String do
		var result = intent.get_package.to_s
		if result == "" then return null
		return result
	end

	# Returns the set MIME and `null` if none
	fun type_name: nullable String do
		var result = intent.get_type.to_s
		if result == "" then return null
		return result
	end

	# Returns `true` if the intent contains the given category
	fun has_category(category: String): Bool
	do
		sys.jni_env.push_local_frame(1)
		var return_value = intent.has_category(category.to_java_string)
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Returns `true` if the intent contains the given extra
	fun has_extra(extra: String): Bool
	do
		sys.jni_env.push_local_frame(1)
		var return_value = intent.has_extra(extra.to_java_string)
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Removes the given category
	# Returns `self` allowing fluent programming
	fun remove_category(category: String): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.remove_category(category.to_java_string)
		sys.jni_env.pop_local_frame
		return self
	end

	# Removes the given extra
	# Returns `self` allowing fluent programming
	fun remove_extra(name: String): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.remove_extra(name.to_java_string)
		sys.jni_env.pop_local_frame
		return self
	end

	# Retrieves the `Array[Bool]` extra stored as Java `boolean[]` with the
	# corresponding name
	fun extra_bool_array(name: String): Array[Bool]
	do
		sys.jni_env.push_local_frame(1)
		var nit_array = intent.boolean_array_extra(name.to_java_string)
		sys.jni_env.pop_local_frame
		return nit_array
	end

	# Retrieves the `Bool` extra stored with the corresponding name
	fun extra_bool(name: String, def_value: Bool): Bool
	do
		sys.jni_env.push_local_frame(1)
		var nit_bool = intent.boolean_extra(name.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return nit_bool
	end

	# Retrieves the `Array[Int]` extra stored as Java `byte[]` with the
	# corresponding name
	fun extra_byte_array(name: String): Array[Int]
	do
		sys.jni_env.push_local_frame(1)
		var nit_array = intent.byte_array_extra(name.to_java_string)
		sys.jni_env.pop_local_frame
		return nit_array
	end

	# Retrieves the `Int` extra stored as Java `byte` with the corresponding name
	fun extra_byte(name: String, def_value: Int): Int
	do
		sys.jni_env.push_local_frame(1)
		var nit_int = intent.byte_extra(name.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return nit_int
	end

	# Retrieves the `Array[Char]` extra stored as Java `char[]` with the
	# corresponding name
	# FIXME: Java's `char` are encoded on 16-bits whereas Nit's are on 8-bits.
	fun extra_char_array(name: String): Array[Char]
	do
		sys.jni_env.push_local_frame(1)
		var nit_array = intent.char_array_extra(name.to_java_string)
		sys.jni_env.pop_local_frame
		return nit_array
	end

	# Retrieves the `Char` extra stored as Java `char` with the
	# corresponding name
	# FIXME: Java's `char` are encoded on 16-bits whereas Nit's are on 8-bits.
	fun extra_char(name: String, def_value: Char): Char
	do
		sys.jni_env.push_local_frame(1)
		var nit_char = intent.char_extra(name.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return nit_char
	end

	# Retrieves the `String` extra stored as Java `CharSequence` with the
	# corresponding name
	fun extra_char_sequence(name: String, def_value: String ): String
	do
		sys.jni_env.push_local_frame(1)
		var nit_charseq =
			intent.char_sequence_extra(name.to_java_string).to_s
		sys.jni_env.pop_local_frame
		return nit_charseq
	end

	# Retrieves the `Array[String]` extra stored as Java `ArrayList<CharSequence>`
	# with the corresponding name
	fun extra_char_sequence_array_list_extra(name: String): Array[String]
	do
		sys.jni_env.push_local_frame(1)
		var string_array = intent.char_sequence_array_list_extra(name.to_java_string)
		sys.jni_env.pop_local_frame
		return string_array
	end

	# Retrieves the `Array[String]` extra stored as Java `CharSequence[]`
	# with the corresponding name
	fun extra_char_sequence_array(name: String): Array[String]
	do
		sys.jni_env.push_local_frame(1)
		var string_array = intent.char_sequence_array_list_extra(name.to_java_string)
		sys.jni_env.pop_local_frame
		return string_array
	end

	# Retrieves the `Array[Float]` extra stored as Java `double[]` with the
	# corresponding name
	fun extra_double_array(name: String): Array[Float]
	do
		sys.jni_env.push_local_frame(1)
		var nit_array = intent.double_array_extra(name.to_java_string)
		sys.jni_env.pop_local_frame
		return nit_array
	end

	# Retrieves the `Float` extra stored as Java `double` with the corresponding
	# name
	fun extra_double(name: String, def_value: Float): Float
	do
		sys.jni_env.push_local_frame(1)
		var nit_float = intent.double_extra(name.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return nit_float
	end

	# Retrieves the `Array[Float]` extra stored as Java `float[]` with the
	# corresponding name
	fun extra_float_array(name: String): Array[Float]
	do
		sys.jni_env.push_local_frame(1)
		var nit_array = intent.float_array_extra(name.to_java_string)
		sys.jni_env.pop_local_frame
		return nit_array
	end

	# Retrieves the `Float` extra stored as Java `float` with the corresponding
	# name
	fun extra_float(name: String, def_value: Float): Float
	do
		sys.jni_env.push_local_frame(1)
		var nit_float = intent.float_extra(name.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return nit_float
	end

	# Retrieves the `Array[Int]` extra stored as Java `int[]` with the
	# corresponding name
	fun extra_int_array(name: String): Array[Int]
	do
		sys.jni_env.push_local_frame(1)
		var nit_array = intent.int_array_extra(name.to_java_string)
		sys.jni_env.pop_local_frame
		return nit_array
	end

	# Retrieves the `Int` extra stored as Java `int` with the corresponding
	# name
	fun extra_int(name: String, def_value: Int): Int
	do
		sys.jni_env.push_local_frame(1)
		var nit_int = intent.int_extra(name.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return nit_int
	end

	# Retrieves the `Array[Int]` extra stored as Java `long[]` with the
	# corresponding name
	fun extra_long_array(name: String): Array[Int]
	do
		sys.jni_env.push_local_frame(1)
		var nit_array = intent.long_array_extra(name.to_java_string)
		sys.jni_env.pop_local_frame
		return nit_array
	end

	# Retrieves the `Int` extra stored as Java `long` with the corresponding
	# name
	fun extra_long(name: String, def_value: Int): Int
	do
		sys.jni_env.push_local_frame(1)
		var nit_int = intent.long_extra(name.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return nit_int
	end

	# Retrieves the `Array[Int]` extra stored as Java `short[]` with the
	# corresponding name
	fun extra_short_array(name: String): Array[Int]
	do
		sys.jni_env.push_local_frame(1)
		var nit_array = intent.short_array_extra(name.to_java_string)
		sys.jni_env.pop_local_frame
		return nit_array
	end

	# Retrieves the `Int` extra stored as Java `short` with the corresponding
	# name
	fun extra_short(name: String, def_value: Int): Int
	do
		sys.jni_env.push_local_frame(1)
		var nit_int = intent.short_extra(name.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return nit_int
	end

	# Retrieves the `Array[String]` extra stored as Java `String[]` with the
	# corresponding name
	fun extra_string_array(name: String): Array[String]
	do
		sys.jni_env.push_local_frame(1)
		var string_array = intent.string_array_extra(name.to_java_string)
		sys.jni_env.pop_local_frame
		return string_array
	end

	# Retrieves the `Array[String]` extra stored as Java `ArrayList<String>`
	# with the corresponding name
	fun extra_string_array_list(name: String): Array[String]
	do
		sys.jni_env.push_local_frame(1)
		var string_array = intent.string_array_list_extra(name.to_java_string)
		sys.jni_env.pop_local_frame
		return string_array
	end

	# Retrieves the `String` extra stored as Java `String` with the corresponding
	# name
	fun extra_string(name: String): String
	do
		sys.jni_env.push_local_frame(1)
		var nit_java_string = intent.string_extra(name.to_java_string).to_s
		sys.jni_env.pop_local_frame
		return nit_java_string
	end

	# Adds extra data corresponding to `double` java type
	# Returns `self` allowing fluent programming
	fun add_extra_double(name: String, value: Float): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_double(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `double[]` java type
	# Returns `self` allowing fluent programming
	fun add_extra_array_of_double(name: String, value: Array[Float]): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_array_of_double(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `char` java type
	# Returns `self` allowing fluent programming
	# FIXME: Java's `char` are encoded on 16-bits whereas Nit's are on 8-bits.
	fun add_extra_char(name: String, value: Char): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_char(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `char[]` java type
	# Returns `self` allowing fluent programming
	# FIXME: Java's `char` are encoded on 16-bits whereas Nit's are on 8-bits.
	fun add_extra_array_of_char(name: String, value: Array[Char]): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_array_of_char(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `CharSequence` java type
	# Returns `self` allowing fluent programming
	fun add_extra_char_sequence(name: String, value: String): Intent
	do
		sys.jni_env.push_local_frame(2)
		intent.add_extra_char_sequence(name.to_java_string, value.to_java_string)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `CharSequence[]` java type
	# Returns `self` allowing fluent programming
	fun add_extra_array_of_char_sequence(name: String, value: Array[String]): Intent
	do
		sys.jni_env.push_local_frame(value.length + 1)
		var java_string_array = new Array[JavaString]
		for element in value do
			java_string_array.push(element.to_java_string)
		end
		intent.add_extra_array_of_char_sequence(name.to_java_string, java_string_array)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `bundle` java type
	# Returns `self` allowing fluent programming
	fun add_extra_bundle(name: String, value: NativeBundle): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_bundle(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `int` java type
	# Returns `self` allowing fluent programming
	# *Be aware of possible integer overflow as Nit `Int` corresponds to*
	# *java `long` and the expected value is a java `int`*
	# Consider using add_extra_long instead
	fun add_extra_int(name: String, value: Int): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_int(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `int[]` java type
	# Returns `self` allowing fluent programming
	# *Be aware of possible integer overflow as Nit `Int` corresponds to*
	# *java `long` and the expected value is a java `int[]`*
	# Consider using add_extra_array_of_long instead
	fun add_extra_array_of_int(name: String, value: Array[Int]): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_array_of_int(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `ArrayList<Integer>` java type
	# Returns `self` allowing fluent programming
	# *Be aware of possible integer overflow as Nit `Int` corresponds to*
	# *java `long` and the expected value is a java `ArrayList<Integer>`*
	# Consider using add_extra_array_of_long instead
	fun add_extra_array_list_of_int(name: String, value: Array[Int]): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_array_list_of_int(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `byte` java type
	# Returns `self` allowing fluent programming
	# *Be aware of possible integer overflow as Nit `Int` corresponds to*
	# *java `long` and the expected value is a java `byte`*
	# Consider using add_extra_array_of_long instead
	fun add_extra_byte(name: String, value: Int): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_byte(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `byte[]` java type
	# Returns `self` allowing fluent programming
	# *Be aware of possible integer overflow as Nit `Int` corresponds to*
	# *java `long` and the expected value is a java `byte[]`*
	# Consider using add_extra_array_of_long instead
	fun add_extra_array_of_byte(name: String, value: Int): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_array_of_byte(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `long` java type
	# Returns `self` allowing fluent programming
	fun add_extra_long(name: String, value: Int): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_long(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `long[]` java type
	# Returns `self` allowing fluent programming
	fun add_extra_array_of_long(name: String, value: Array[Int]): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_array_of_long(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `float` java type
	# Returns `self` allowing fluent programming
	# *Be aware of possible loss of precision as Nit `Float` corresponds to*
	# *java `double` and the expected value is a java `float`*
	# Consider using add_extra_double
	fun add_extra_float(name: String, value: Float): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_float(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `float[]` java type
	# Returns `self` allowing fluent programming
	# *Be aware of possible loss of precision as Nit `Float` corresponds to*
	# *java `double` and the expected value is a java `float[]`*
	# Consider using add_extra_array_of_double
	fun add_extra_array_of_float(name: String, value: Array[Float]): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_array_of_float(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `String` java type
	# Returns `self` allowing fluent programming
	fun add_extra_string(name: String, value: String): Intent
	do
		sys.jni_env.push_local_frame(2)
		intent.add_extra_string(name.to_java_string, value.to_java_string)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `String[]` java type
	# Returns `self` allowing fluent programming
	fun add_extra_array_of_string(name: String, value: Array[String]): Intent
	do
		sys.jni_env.push_local_frame(value.length + 1)
		var java_string_array = new Array[JavaString]
		for element in value do
			java_string_array.push(element.to_java_string)
		end
		intent.add_extra_array_of_string(name.to_java_string, java_string_array)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `ArrayList<String>` java type
	# Returns `self` allowing fluent programming
	fun add_extra_array_list_of_string(name: String, value: Array[String]): Intent
	do
		sys.jni_env.push_local_frame(value.length + 1)
		var java_string_array = new Array[JavaString]
		for element in value do
			java_string_array.push(element.to_java_string)
		end

		intent.add_extra_array_list_of_string(name.to_java_string, java_string_array)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `boolean` java type
	# Returns `self` allowing fluent programming
	fun add_extra_bool(name: String, value: Bool): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_bool(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `boolean[]` java type
	# Returns `self` allowing fluent programming
	fun add_extra_array_of_bool(name: String, value: Array[Bool]): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_array_of_bool(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `short` java type
	# Returns `self` allowing fluent programming
	# *Be aware of possible integer overflow as Nit `Int` corresponds to*
	# *java `long` and the expected value is a java `short`*
	# Consider using add_extra_long instead
	fun add_extra_short(name: String, value: Int): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_short(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Adds extra data corresponding to `short[]` java type
	# Returns `self` allowing fluent programming
	# *Be aware of possible integer overflow as Nit `Int` corresponds to*
	# *java `long` and the expected value is a java `short[]`*
	# Consider using add_extra_array_of_long instead
	fun add_extra_array_of_short(name: String, value: Array[Int]): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.add_extra_array_of_short(name.to_java_string, value)
		sys.jni_env.pop_local_frame
		return self
	end

	# Store `value` as a serialized Json string
	# java method according to value type
	# Returns `self` allowing fluent programming
	fun []=(name: String, value: nullable Serializable): Intent
	do
		var serialized_string = new StringWriter
		var serializer = new JsonSerializer(serialized_string)
		serializer.serialize(value)

		add_extra_string(name, serialized_string.to_s)
		return self
	end

	# Retrieve an `Object` stored via `[]=` function
	fun [](name: String): nullable Object
	do
		var serialized_string = self.extra_string(name)
		if serialized_string == "" then return null

		var deserializer = new JsonDeserializer(serialized_string)
		return deserializer.deserialize
	end

	# Specify the class to be launched by the intent
	fun set_class_name(package_name: String, class_name: String): Intent
	do
		sys.jni_env.push_local_frame(2)
		intent.set_class_name(package_name.to_java_string, class_name.to_java_string)
		sys.jni_env.pop_local_frame
		return self
	end

	# Deletes intent global reference
	fun destroy do self.intent.delete_global_ref

	# Returns a human readable representation of the intent
	redef fun to_s do return intent.to_native_s.to_s
end

redef extern class NativeContext
	private fun start_activity(intent: NativeIntent) in "Java" `{ self.startActivity(intent); `}
	private fun start_service(intent: NativeIntent) in "Java" `{ self.startService(intent); `}
	private fun stop_service(intent: NativeIntent) in "Java" `{ self.stopService(intent); `}
end

# Allows user to get values with enum-like syntax : `intent_action.main`
fun intent_action: Action do return once new Action
# Allows user to get values with enum-like syntax : `intent_category.home`
fun intent_category: Category do return once new Category
# Allows user to get values with enum-like syntax : `intent_flag.activity_brought_to_front`
fun intent_flag: Flag do return once new Flag

private class StringCopyArray
	var collection = new Array[String]
	fun add(element: JavaString) do collection.add element.to_s
end

private class StringCopyHashSet
	var collection = new HashSet[String]
	fun add(element: JavaString) do collection.add element.to_s
end

redef class App

	# Execute the intent and launch the appropriate application
	fun start_activity(intent: Intent) do native_context.start_activity(intent.intent)

	# Start a service that will be running until the `stop_service` call
	fun start_service(intent: Intent) do native_context.start_service(intent.intent)

	# Stop service
	fun stop_service(intent: Intent) do native_context.stop_service(intent.intent)
end
