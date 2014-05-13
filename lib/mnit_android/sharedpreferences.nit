module sharedpreferences

import android_app
import mnit_android

in "Java" `{
	import android.content.SharedPreferences;
	import android.content.Context; // Context.MODE_PRIVATE
	import android.app.NativeActivity;
	import android.app.Activity;
	import java.util.Set;
	import java.util.Map;
	import java.util.HashSet;
	import java.util.Iterator;
`}

extern class NativeSharedPreferences in "Java" `{ android.content.SharedPreferences `}
	super JavaObject
	redef type SELF: NativeSharedPreferences
	
	fun contains(key: JavaString): Bool in "Java" `{ return recv.contains(key); `}
	fun get_all: HashMap[JavaString, JavaObject] import HashMap[JavaString, JavaObject], HashMap[JavaString, JavaObject].[]= in "Java" `{ 
		Map<String, ?> java_map = recv.getAll();
		int nit_hashmap = new_HashMap_of_JavaString_JavaObject();

		for (Map.Entry<String, ?> entry: java_map.entrySet())
			HashMap_of_JavaString_JavaObject__index_assign(nit_hashmap, entry.getKey(), entry.getValue());

		return nit_hashmap;
	`}
	fun get_boolean(key: JavaString, defValue: Bool): Bool in "Java" `{ return recv.getBoolean(key, defValue); `}
	fun get_float(key: JavaString, defValue: Float): Float in "Java" `{ return recv.getFloat(key, (float) defValue); `}
	fun get_int(key: JavaString, defValue: Int): Int in "Java" `{ return recv.getInt(key, defValue); `}
	fun get_long(key: JavaString, defValue: Int): Int in "Java" `{ return (int) recv.getLong(key, defValue); `}
	fun get_string(key: JavaString, defValue: JavaString): JavaString in "Java" `{ return recv.getString(key, defValue); `}

	# Default value to null instead of Set<String>
	fun get_string_set(key: JavaString): HashSet[JavaString] import HashSet[JavaString], HashSet[JavaString].add in "Java" `{ 
		final Set<String> defValue = new HashSet<String>();
		final Set<String> java_set = recv.getStringSet(key, defValue);
		int nit_hashset = new_HashSet_of_JavaString();

		for (String element: java_set)
			HashSet_of_JavaString_add(nit_hashset, element);

		return nit_hashset;
	`}
end

extern class NativeSharedPreferencesEditor in "Java" `{ android.content.SharedPreferences.Editor `}
	super JavaObject
	redef type SELF: NativeSharedPreferencesEditor

	fun clear: NativeSharedPreferencesEditor in "Java" `{ return recv.clear(); `}
	fun commit: Bool in "Java" `{ return recv.commit(); `}
	fun put_boolean(key: JavaString, value: Bool ): NativeSharedPreferencesEditor in "Java" `{ return recv.putBoolean (key, value); `}
	fun put_float(key: JavaString, value: Float): NativeSharedPreferencesEditor in "Java" `{ return recv.putFloat(key, (float) value); `}
	fun put_int(key: JavaString, value: Int): NativeSharedPreferencesEditor in "Java" `{ return recv.putInt(key, value); `}
	fun put_long(key: JavaString, value: Int): NativeSharedPreferencesEditor in "Java" `{ return recv.putLong(key, value); `}
	fun put_string(key: JavaString, value: JavaString): NativeSharedPreferencesEditor in "Java" `{ return recv.putString(key, value); `}
	fun put_string_set(key: JavaString, value: HashSet[JavaString]): NativeSharedPreferencesEditor import HashSet[JavaString], HashSet[JavaString].iterator, 
	  Iterator[JavaString].is_ok, Iterator[JavaString].item, Iterator[JavaString].next in "Java" `{ 
		Set<String> java_set = new HashSet<String>();
		int itr = HashSet_of_JavaString_iterator(value);
		
		while (Iterator_of_JavaString_is_ok(itr)) {
			java_set.add(Iterator_of_JavaString_item(itr));
			Iterator_of_JavaString_next(itr);
		}

		return recv.putStringSet(key, java_set); 
	`}
	fun remove(key: JavaString): NativeSharedPreferencesEditor in "Java" `{ return recv.remove(key); `}
end

extern class Context in "Java" `{ android.content.Context `}
	super JavaObject
	redef type SELF: Context

	fun mode_private: Int in "Java" `{ return Context.MODE_PRIVATE; `}
	fun mode_world_readable: Int in "Java" `{ return Context.MODE_WORLD_READABLE; `}
	fun mode_world_writeable: Int in "Java" `{ return Context.MODE_WORLD_WRITEABLE; `}

	# API 11
	# fun mode_multi_process: Int in "Java" `{ return recv.MODE_MULTI_PROCESS; `}
end


class SharedPreferences
	var context: NativeActivity
	var shared_preferences: NativeSharedPreferences
	var editor: NativeSharedPreferencesEditor

	var xml_file_name: String
	var mode: Int

	
	init(app: App, file_name: String, mode: Int) 
	do
		self.context = app.native_activity
		self.xml_file_name = file_name
		self.mode = mode
		setup(file_name.to_java_string, mode)
	end
	
	private fun set_vars(shared_pref: NativeSharedPreferences, editor: NativeSharedPreferencesEditor)
	do
		self.shared_preferences = shared_pref.new_global_ref
		self.editor = editor.new_global_ref
	end

	private fun setup(xml_file_name: JavaString, mode: Int) import context, set_vars in "Java" `{
		final Activity context = (Activity) SharedPreferences_context(recv);
		final SharedPreferences sp = context.getSharedPreferences(xml_file_name, mode);
		final SharedPreferences.Editor editor = sp.edit();
		
		SharedPreferences_set_vars(recv, sp, editor);
	`}
		
	# Access methods
	fun contains(key: JavaString): Bool do return shared_preferences.contains(key)
# 	fun get_all: HashMap[JavaString, JavaObject] do return shared_preferences.get_all 
	fun get_boolean(key: JavaString, defValue: Bool): Bool do return shared_preferences.get_boolean(key, defValue)
	fun get_float(key: JavaString, defValue: Float): Float do return shared_preferences.get_float(key, defValue)
	fun get_int(key: JavaString, defValue: Int): Int do return shared_preferences.get_int(key, defValue)
	fun get_long(key: JavaString, defValue: Int): Int do return shared_preferences.get_long(key, defValue)
	fun get_string(key: JavaString, defValue: JavaString): JavaString do return shared_preferences.get_string(key, defValue)

	# Default value to null instead of Set<String>
# 	fun get_string_set(key: JavaString): HashSet[JavaString] do return shared_preferences.get_string_set(key)

	# Editor methods
	fun clear: NativeSharedPreferencesEditor do return editor.clear
	fun commit: Bool do return editor.commit
	fun put_boolean(key: JavaString, value: Bool ): NativeSharedPreferencesEditor do return editor.put_boolean(key, value)
	fun put_float(key: JavaString, value: Float): NativeSharedPreferencesEditor do return editor.put_float(key, value)
	fun put_int(key: JavaString, value: Int): NativeSharedPreferencesEditor do return editor.put_int(key, value)
	fun put_long(key: JavaString, value: Int): NativeSharedPreferencesEditor do return editor.put_long(key, value)
	fun put_string(key: JavaString, value: JavaString): NativeSharedPreferencesEditor do return editor.put_string(key, value)
# 	fun put_string_set(key: JavaString, value: HashSet[JavaString]): NativeSharedPreferencesEditor do return editor.put_string_set(key, value)
	fun remove(key: JavaString): NativeSharedPreferencesEditor do return editor.remove(key)
	
end

