# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Benjamin JOSE <beness.j@gmail.com>
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
# Offers services to deserialize a Nit object from SQLite3 database.
# Retrieves all the datas of the DB and stores it in an intermediate structure,
# the ObjectProperty list. When the core functions need the value of an attribute, 
# it will be retrieved from this structure.
# For composed objects, a recursive call to this class deserializes the sub-object.
module sql_deserializer

import serialization
import sqlite3
import objectproperty

class SqlDeserializer
		super Deserializer
	
	# Path to the DB where objects are serialized
	var db_path : String
	
	# Type of the object to deserialize
	var object_type : String
	
	# Id of the object to deserialize
	var id : Int
	
	# Properties of the object
	var props = new List[ObjectProperty]
	
	# Map of already deserialized objects
	var id_to_object = new HashMap[Int, Object]
	
	init (filename: String, object_class_name : String, object_id : Int) do 
		self.db_path = filename
		self.object_type = object_class_name
		self.id = object_id
	end
	
	# Retrieves datas from the DB and stores it into the ObjectPproperty list
	fun get_from_db
	do		
		var select_stmt = "SELECT * FROM '"+self.object_type+"' WHERE _id_ = {id};"
		var select_obj_prop = "SELECT * FROM '{object_type}-ObjectProperties';"

		var db = new Sqlite3.open(self.db_path)
		
		var select_res = db.prepare(select_stmt)
		var properties_res = db.prepare(select_obj_prop)
		
		var count = select_res.column_count
		
		while select_res.step.is_row do
		# Should loop only one time because it's only one object
			for i in [1..count-1] do
				# For each field of the object
				while properties_res.step.is_row do
					# For all the property infos
					if select_res.column_name(i) == properties_res.column_text(0) then
						# Its the matching field
						if select_res.column_text(i) == "" then
							# The value is null
							self.props.add new ObjectProperty(0, select_res.column_name(i), "", null, "")
						else if not properties_res.column_text(2) == "obj" then							
							# It is a common object, so we can create build it directly
							var field_value = convert_sqlite_type(select_res.column_type(i), select_res.column_text(i))
							var field_name = select_res.column_name(i)
							self.props.add new ObjectProperty(select_res.column_int(0), field_name, field_value.class_name, field_value, object_type)
						else
							# It's a custom object, so we have to deserialize it and build it
							var custom_obj_id = select_res.column_text(i)
							var split = custom_obj_id.split("-")
							
							if "{object_type}-{id}" == custom_obj_id then
								# It's a circular reference																
								self.props.add new ObjectProperty(split[1].to_i, select_res.column_name(i), split[0], "{object_type}-{id}", split[0])
								var len = props.length
								props[len-1].reference_id = "{object_type}-{id}"
							else
								# It's a composition of another object
								var serr = new SqlDeserializer(db_path, split[0], split[1].to_i)
								var obj = serr.deserialize
								
								if not obj == null then
									self.props.add new ObjectProperty(split[1].to_i, select_res.column_name(i), split[0], obj, split[0])
								end
							end
						end
					end 
				end
			end
		end
		
		db.close
	end
	
	# Converts the SQLite type to a Nit native type
	private fun convert_sqlite_type(t: Int, v: String) : nullable Object
	do
		if t == 1 then
			return v.to_i
		else if t == 2 then
			return v.to_f
		else if t == 3 then
			return v
		else return null
	end
	
	redef fun deserialize do 
		get_from_db
		
		return deserialize_class(self.object_type)
	end
	
	redef fun deserialize_attribute(name)
	do
		# assert that the property is in the property list
		# check if it is a ref
		for prop in self.props do
			if prop.name == name then
				if prop.reference_id != "" then
					assert id_to_object.keys.has(prop.obj_id)
					return id_to_object[prop.obj_id]
				end
				return prop.value
			end
		end
		return null
	end
	
	redef fun notify_of_creation(new_object) do
		id_to_object[id] = new_object
	end
end
