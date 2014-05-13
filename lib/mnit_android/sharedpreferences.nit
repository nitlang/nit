module sharedpreferences

import mnit_android
import android_app

in "Java" `{
	import android.content.SharedPreferences;
	import android.content.Context; // Context.MODE_PRIVATE
`}

extern class NativeSharedPreferences in "Java" `{ android.content.SharedPreferences `}
	super JavaObject
	redef type SELF: NativeSharedPreferences
	
	fun contains(key: JavaString): Bool in "Java" `{ return recv.contains(key); `}
	fun get_all: HashMap[JavaString, JavaObject] import HashMap[JavaString, JavaObject].[]= in "Java" `{ 
		Map<String, Object> java_map = recv.getAll();
		int nit_hashmap = new_HashMap_of_JavaString_JavaObject();

		for (Map.Entry<String, Object> entry: java_map.entrySet())
			HashMap_of_JavaString_JavaObject__index_assign(nit_hashmap, entry.getKey(), entry.getValue());

		return nit_hashmap;
	`}
	fun get_boolean(key: JavaString, defValue: Bool): Bool in "Java" `{ return recv.getBoolean(key, defValue); `}
	fun get_float(key: JavaString, defValue: Float): Float in "Java" `{ return recv.getFloat(key, defValue); `}
	fun get_int(key: JavaString, defValue: Int): Int in "Java" `{ return recv.getInt(key, defValue); `}
	fun get_long(key: JavaString, defValue: Int): Int in "Java" `{ return recv.getLong(key, defValue); `}
	fun get_string(key: JavaString, defValue: JavaString): JavaString in "Java" `{ return recv.getString(key, defValue); `}

	# Default value to null instead of Set<String>
	fun get_string_set(key: JavaString): ArraySet[JavaString] import ArraySet[JavaString].add in "Java" `{ 
		Set<String> java_set = recv.getString(key, null);
		int nit_arrayset = new_ArraySet_of_JavaString();

		Iterator<String> itr = java_set.iterator();
		while (itr.hasNext())
			ArraySet_of_JavaString_add(nit_arrayset, itr.next());

		return nit_arrayset;
	`}
end

extern class NativeSharedPreferencesEditor in "Java" `{ android.content.SharedPreferences.Editor `}
	super JavaObject
	redef type SELF: NativeSharedPreferencesEditor

	fun clear: Bool in "Java" `{ return recv.clear(); `}
	fun commit: Bool in "Java" `{ return recv.commit(); `}
	fun put_boolean(key: JavaString, value: Bool ) in "Java" `{ recv.putBoolean (key, value); `}
	fun put_float(key: JavaString, value: Float) in "Java" `{ recv.putFloat(value); `}
	fun put_int(key: JavaString, value: Int) in "Java" `{ recv.putInt(value); `}
	fun put_long(key: JavaString, value: Int) in "Java" `{ recv.putLong(value); `}
	fun put_string(key: JavaString, value: JavaString) in "Java" `{ recv.putString(value); `}
	fun put_string_set(key: JavaString, value: ArraySet[JavaString]) import ArraySet[JavaString].iterator, 
	  Iterator[JavaString].is_ok, Iterator[JavaString].item, Iterator[JavaString].next in "Java" `{ 
		TreeSet<String> java_set = new TreeSet<String>();
		int itr = ArraySet_of_JavaString_iterator(value);
		
		while (Iterator_of_JavaString_is_ok(itr)) {
			java_set.add(Iterator_of_JavaString_item(itr));
			Iterator_of_JavaString_next(itr);
		}

		recv.putStringSet(java_set); 
	`}
	fun remove(key: JavaString) in "Java" `{ recv.remove(key); `}
end

class SharedPreferences

end

