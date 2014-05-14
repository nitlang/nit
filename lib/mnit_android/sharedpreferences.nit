module sharedpreferences

import android_app
# import mnit_android

in "Java" `{
	import android.content.SharedPreferences;
	import android.content.Context; // File access mode
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
	fun get_boolean(key: JavaString, def_value: Bool): Bool in "Java" `{ return recv.getBoolean(key, def_value); `}
	fun get_float(key: JavaString, def_value: Float): Float in "Java" `{ return recv.getFloat(key, (float) def_value); `}
	fun get_int(key: JavaString, def_value: Int): Int in "Java" `{ return recv.getInt(key, def_value); `}
	fun get_long(key: JavaString, def_value: Int): Int in "Java" `{ return (int) recv.getLong(key, def_value); `}
	fun get_string(key: JavaString, def_value: JavaString): JavaString in "Java" `{ return recv.getString(key, def_value); `}

	# Default value to null instead of Set<String>
	# FIXME: API 11
# 	fun get_string_set(key: JavaString): HashSet[JavaString] import HashSet[JavaString], HashSet[JavaString].add in "Java" `{ 
# 		final Set<String> def_value = new HashSet<String>();
# 		final Set<String> java_set = recv.getStringSet(key, def_value);
# 		int nit_hashset = new_HashSet_of_JavaString();
# 
# 		for (String element: java_set)
# 			HashSet_of_JavaString_add(nit_hashset, element);
# 
# 		return nit_hashset;
# 	`}
end

extern class NativeSharedPreferencesEditor in "Java" `{ android.content.SharedPreferences$Editor `}
	super JavaObject
	redef type SELF: NativeSharedPreferencesEditor

	fun clear: NativeSharedPreferencesEditor in "Java" `{ return recv.clear(); `}
	fun commit: Bool in "Java" `{ return recv.commit(); `}
	fun put_boolean(key: JavaString, value: Bool ): NativeSharedPreferencesEditor in "Java" `{ return recv.putBoolean (key, value); `}
	fun put_float(key: JavaString, value: Float): NativeSharedPreferencesEditor in "Java" `{ return recv.putFloat(key, (float) value); `}
	fun put_int(key: JavaString, value: Int): NativeSharedPreferencesEditor in "Java" `{ return recv.putInt(key, value); `}
	fun put_long(key: JavaString, value: Int): NativeSharedPreferencesEditor in "Java" `{ return recv.putLong(key, value); `}
	fun put_string(key: JavaString, value: JavaString): NativeSharedPreferencesEditor in "Java" `{ return recv.putString(key, value); `}
# 	fun put_string_set(key: JavaString, value: HashSet[JavaString]): NativeSharedPreferencesEditor import HashSet[JavaString], HashSet[JavaString].iterator, 
# 	  Iterator[JavaString].is_ok, Iterator[JavaString].item, Iterator[JavaString].next in "Java" `{ 
# 		Set<String> java_set = new HashSet<String>();
# 		int itr = HashSet_of_JavaString_iterator(value);
# 		
# 		while (Iterator_of_JavaString_is_ok(itr)) {
# 			java_set.add(Iterator_of_JavaString_item(itr));
# 			Iterator_of_JavaString_next(itr);
# 		}
# 
# 		return recv.putStringSet(key, java_set); 
# 	`}
	fun remove(key: JavaString): NativeSharedPreferencesEditor in "Java" `{ return recv.remove(key); `}
end

class SharedPreferences
	var context: NativeActivity
	var shared_preferences: NativeSharedPreferences
	var editor: NativeSharedPreferencesEditor
	
	private init(app: App, file_name: String, mode: Int) 
	do
		self.context = app.native_activity
		
		sys.jni_env.push_local_frame(2)
		setup(file_name.to_java_string, mode)
		sys.jni_env.pop_local_frame
	end

	init mode_private(app: App, file_name: String) 
	do
		self.init(app, file_name, private_mode)
	end

	init mode_world_readable(app: App, file_name: String)
	do
		self.init(app, file_name, world_readable_mode)
	end

	init mode_world_writeable(app: App, file_name: String)
	do
		self.init(app, file_name, world_writeable_mode)
	end
	
	# FIXME: API 11
# 	init mode_multi_access(app: App, file_name: String)
# 	do
# 		self.init(app, file_name, multi_process_mode)
# 	end

	private fun set_vars(shared_pref: NativeSharedPreferences, editor: NativeSharedPreferencesEditor)
	do
		self.shared_preferences = shared_pref.new_global_ref
		self.editor = editor.new_global_ref
	end

	private fun setup(xml_file_name: JavaString, mode: Int) import context, set_vars in "Java" `{
		Activity context = (Activity) SharedPreferences_context(recv);
		SharedPreferences sp;
		if (xml_file_name.equals("")) {
			sp = context.getPreferences( mode);
		} else { 
			sp = context.getSharedPreferences(xml_file_name, mode);
		}

		SharedPreferences.Editor editor = sp.edit();
		
		SharedPreferences_set_vars(recv, sp, editor);
	`}
		
	# File access mode
	private fun private_mode: Int in "Java" `{ return Context.MODE_PRIVATE; `}
	private fun world_readable_mode: Int in "Java" `{ return Context.MODE_WORLD_READABLE; `}
	private fun world_writeable_mode: Int in "Java" `{ return Context.MODE_WORLD_WRITEABLE; `}

	# FIXME: API 11
	# fun multi_process_mode: Int in "Java" `{ return recv.MODE_MULTI_PROCESS; `}

	# Access methods
	fun contains(key: String): Bool 
	do
		sys.jni_env.push_local_frame(2)
		var return_value =shared_preferences.contains(key.to_java_string) 
		sys.jni_env.pop_local_frame
		return return_value
	end

	# User has to manage local stack deallocation himself
	fun all: HashMap[JavaString, JavaObject] do return shared_preferences.get_all

	fun boolean(key: String, def_value: Bool): Bool 
	do 
		sys.jni_env.push_local_frame(3)
		var return_value = shared_preferences.get_boolean(key.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return return_value
	end

	fun float(key: String, def_value: Float): Float 
	do 
		sys.jni_env.push_local_frame(3)
		var return_value = shared_preferences.get_float(key.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return return_value
	end

	fun int(key: String, def_value: Int): Int 
	do 
		sys.jni_env.push_local_frame(3)
		var return_value = shared_preferences.get_int(key.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return return_value
	end

	fun long(key: String, def_value: Int): Int 
	do 
		sys.jni_env.push_local_frame(3)
		var return_value = shared_preferences.get_long(key.to_java_string, def_value)
		sys.jni_env.pop_local_frame
		return return_value
	end

	fun string(key: String, def_value: String): JavaString 
	do 
		sys.jni_env.push_local_frame(3)
		var return_value = shared_preferences.get_string(key.to_java_string, def_value.to_java_string)
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Default value to null instead of Set<String>
	# FIXME: API 11
	# User has to manage local stack deallocation himself
# 	fun string_set(key: String): HashSet[JavaString] 
# 	do 
# 		sys.jni_env.push_local_frame(3)
# 		var return_value = shared_preferences.get_string_set(key)
# 		sys.jni_env.pop_local_frame
# 		return return_value
# 	end

	# Editor methods
	fun clear: NativeSharedPreferencesEditor 
	do 
		sys.jni_env.push_local_frame(1)
		var return_value = editor.clear.new_global_ref
		sys.jni_env.pop_local_frame
		return return_value
	end
	
	fun commit: Bool 
	do 
		sys.jni_env.push_local_frame(1)
		var return_value = editor.commit
		sys.jni_env.pop_local_frame
		return return_value
	end

	fun boolean=(key: String, value: Bool ): NativeSharedPreferencesEditor 
	do 
		sys.jni_env.push_local_frame(3)
		var return_value = editor.put_boolean(key.to_java_string, value).new_global_ref
		sys.jni_env.pop_local_frame
		return return_value
	end
		
	fun float=(key: String, value: Float): NativeSharedPreferencesEditor 
	do 
		sys.jni_env.push_local_frame(3)
		var return_value = editor.put_float(key.to_java_string, value).new_global_ref
		sys.jni_env.pop_local_frame
		return return_value
	end
		
	fun int=(key: String, value: Int): NativeSharedPreferencesEditor 
	do 
		sys.jni_env.push_local_frame(3)
		var return_value = editor.put_int(key.to_java_string, value).new_global_ref
		sys.jni_env.pop_local_frame
		return return_value
	end
		
	fun long=(key: String, value: Int): NativeSharedPreferencesEditor 
	do 
		sys.jni_env.push_local_frame(3)
		var return_value = editor.put_long(key.to_java_string, value).new_global_ref
		sys.jni_env.pop_local_frame
		return return_value
	end
		
	fun string=(key: String, value: String): NativeSharedPreferencesEditor 
	do 
		sys.jni_env.push_local_frame(3)
		var return_value = editor.put_string(key.to_java_string, value.to_java_string).new_global_ref
		sys.jni_env.pop_local_frame
		return return_value
	end
		
	# FIXME: API 11
	# User has to manage local stack deallocation himself
# 	fun string_set=(key: String, value: HashSet[JavaString]): NativeSharedPreferencesEditor do return editor.put_string_set(key.to_java_string, value)

	fun remove(key: String): NativeSharedPreferencesEditor 
	do 
		sys.jni_env.push_local_frame(2)
		var return_value = editor.remove(key.to_java_string).new_global_ref
		sys.jni_env.pop_local_frame
		return return_value
	end

	fun destroy 
	do
		self.shared_preferences.delete_global_ref
		self.editor.delete_global_ref
	end
end

