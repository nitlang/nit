# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012-2013 Alexis Laferrière <alexis.laf@xymus.net>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Serialisation from Nit objects to the Json format
module json_writer

intrude import jsonable

redef interface Jsonable
	# Get a JsonObject representing this instance, specific to the C library
	private fun to_json_object : JsonObject is abstract
end

# Will ignore non-jsonable
redef class Map[ K, V ]
	# Get a json-formatted string of this map
	fun to_pretty_json: String do return native_to_json(true)
	fun to_json: String do return native_to_json(false)

	fun native_to_json( pretty: Bool ): String import to_json_object `{
		json_object *jobj;
		const char *json_native_string;
		String json_string;

		jobj = Map_to_json_object( recv );
#ifdef JSON_C_TO_STRING_PRETTY
		if ( pretty )
			json_native_string = json_object_to_json_string_ext( jobj, JSON_C_TO_STRING_PRETTY );
		else
			json_native_string = json_object_to_json_string_ext( jobj, JSON_C_TO_STRING_PLAIN );
#else
		json_native_string = json_object_to_json_string( jobj );
#endif
		json_string = new_String_from_cstring( (char*)json_native_string );
		return json_string;
	`}

	redef fun to_json_object
	do
		var jobj = new JsonObject

		var iter = iterator
		while iter.is_ok do
			var key = iter.key
			if key isa String then
				var val = iter.item
				if val isa Jsonable then
					var jsubobj = val.to_json_object
					jobj.add( key, jsubobj )
				else if val == null then
					jobj.add( key, null )
				else
					print "WARNING: value \"{val}\" not jsonable, cannot be converted to json."
				end
			else
				print "WARNING: key \"{key}\" not a string, cannot be converted to json."
			end

			iter.next
		end
		return jobj
	end
end

redef class Sequence[ E ]
	redef fun to_json_object
	do
		var jarray = new JsonArray
		for e in self do
			if e isa nullable Jsonable then
				if e == null then
					jarray.push( null )
				else
					var obj = e.to_json_object
					jarray.push( obj )
				end
			else
				print "WARNING: element \"{e}\" not a Jsonable, cannot be converted to json."
			end
		end

		return jarray
	end
end

redef class String
	redef fun to_json_object import String::from_cstring `{
		char *native_recv = String_to_cstring( recv );
		return json_object_new_string( native_recv );
	`}
end

redef class Int
	redef fun to_json_object `{
		return json_object_new_int( recv );
	`}
end

redef class Bool
	redef fun to_json_object `{
		return json_object_new_boolean( recv );
	`}
end

redef class Float
	redef fun to_json_object `{
		return json_object_new_double( recv );
	`}
end

redef class JsonObject
	new `{ return json_object_new_object(); `}

	# Add a key and value to the object
	fun add( key : String, val : nullable JsonObject ) import String::to_cstring, nullable JsonObject as not nullable `{
		char* native_key;

		native_key = String_to_cstring( key );

		if ( JsonObject_is_null(val) ) {
			json_object_object_add( recv, native_key, NULL );
		} else {
			json_object *jobj;
			jobj = JsonObject_as_not_null( val );
			json_object_object_add( recv, native_key, jobj );
		}
	`}
end

private extern JsonArray
	super JsonObject

	new `{ return json_object_new_array(); `}

	fun push( val : nullable JsonObject ) `{
		if ( JsonObject_is_null(val) )
			json_object_array_add( recv, NULL );
		else
			json_object_array_add( recv, JsonObject_as_not_null(val) );
	`}
end
