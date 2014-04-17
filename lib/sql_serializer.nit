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
# Offers services to serialize a Nit object to SQLite3 database
# It first creates the table associated to the object, and then inserts the values.
# If table already exists, it is not created again.
# For each object, it creates 2 tables, one for storing the values,
# another for the description of the fields.
module sql_serializer

import serialization
import sqlite3
import objectproperty

redef class Serializable
	private fun serialize_to_sqlite(v: SqlSerializer, obj: Serializable)
	do
		var tmp_step = v.step_id
		var tmp_obj = v.my_obj
		v.ref_id_for(self)		

		if not v.to_escape.has(v.my_obj.class_name) then
			v.step_id += 1
			v.my_obj = obj
		end
		core_serialize_to(v)
		
		v.step_id = tmp_step
		v.my_obj = tmp_obj
	end
end

class SqlSerializer
	super Serializer

	# Path to the DB where objects are serialized
	var db_path : String
	
	# Id of the current object
	var unique_id : Int
	
	# Value to add to the ID when the object is composed
	var step_id : Int = -1

	# List of all the properties of the object an sub-objects
	var props = new List[ObjectProperty]
	
	# List of the properties of one object.
	# Used for creating the ObjectProperty table
	var my_props = new List[ObjectProperty]

	# Map of references to already serialized objects
	var refs_map = new HashMap[Serializable,Int]
	
#	Current serialized object
	var my_obj : nullable Object
	
	# Hack to escape creation of unecessary tables
	var to_escape = new Array[String]

	init (filename: String, unique_id : Int) do
		self.db_path = filename
		self.unique_id = unique_id
		self.to_escape = ["Int", "Float", "Bool", "Char", "String"]
	end

	redef fun serialize(object)
	do
		if self.my_obj == null then self.my_obj = object

		if object != null then
			object.serialize_to_sqlite(self, object)
		end
	end

	# Has to be called to save datas to the DB.
	fun persist_to_db
	do
		compute_references
		create_database_schema
		create_object_property_schema
		insert_values
	end
	
	redef fun serialize_attribute(name, value)
	do
		if value != null then
			props.add new ObjectProperty(unique_id+step_id, name, value.class_name, value, my_obj.class_name)
			my_props.add new ObjectProperty(unique_id+step_id, name, value.class_name, value, my_obj.class_name)
		end
		super
	end

	redef fun serialize_reference(object)
	do
		var len = self.props.length

		if refs_map.keys.has(object) then
			var id = 0
			var cl_name = ""
			for p in props do
				if p.value == object then
					id = p.obj_id
					cl_name = p.property_type
					break
				end
			end
			self.props[len-1].reference_id ="{cl_name}-{id}"			
		else
			serialize object
		end
	end	

	private fun ref_id_for(object: Serializable): Int
	do
		if refs_map.keys.has(object) then
			return refs_map[object]
		else
			refs_map[object] = object.object_id
			return object.object_id
		end
	end

	# Convert Nit types into SQLite types for statements
	private fun convert_type(obj : String) : String
	do
		if obj == "Int" then
			return "INTEGER"
		else if obj == "Float" then
			return "FLOAT"
		else if obj == "Bool" then
			return "BOOL"
		else
			return "VARCHAR"
		end
	end

	# Create the DB schema for later values insertion
	private fun create_database_schema
	do
		var fields = new Array[String]
		var create_stmt = "CREATE TABLE IF NOT EXISTS '{my_obj.class_name}' "
		create_stmt += "(\"_id_\" INTEGER PRIMARY KEY NOT NULL UNIQUE"

		for prop in self.props do
			if not fields.has(prop.name) then
				create_stmt += ", \"{prop.name}\" {convert_type(prop.property_type)}"
				fields.add prop.name			
			end
		end

		create_stmt += ");"

		var db = new Sqlite3.open(db_path)

		db.exec(create_stmt)
		# TODO : assert that the table has been correctly created

		db.close
	end
	
	# Creates the ObjectProperty table for describing the data
	# Usefull for deserialization
	private fun create_object_property_schema
	do
		var create_stmt = "CREATE TABLE IF NOT EXISTS '{my_obj.class_name}-ObjectProperties' "
		create_stmt += "(field_name VARCHAR, value_type VARCHAR, value_kind VARCHAR);"
		
		var fields = new Array[String]
		var inserts = new Array[String]
		var insert_stmt = "INSERT INTO '{my_obj.class_name}-ObjectProperties' "
		insert_stmt += "(field_name, value_type, value_kind) VALUES ("
		
		for prop in self.my_props do
			if not fields.has(prop.name) then
				var my_insert = insert_stmt
				my_insert += "\"{prop.name}\", \"{prop.value.class_name}\", \"{get_kind_of_value(prop.value)}\");"
				inserts.add my_insert
				fields.add prop.name			
			end
		end
				
		var db = new Sqlite3.open(db_path)
		db.exec(create_stmt)
		
		for stmt in inserts do
			db.exec(stmt)
		end
		
		db.close
	end
	
	# Returns the king of value (custom object, or native object)
	private fun get_kind_of_value(o: nullable Object) : String
	do
		if to_escape.has(o.class_name) then
			return o.class_name
		else
			return "obj"
		end
	end
	
	# Updates the properties list for setting the correct references IDs
	private fun compute_references
	do
		var i = 0
		for prop in self.props do
			if (i+1 < self.props.length) and self.props[i+1].obj_id > prop.obj_id then
				prop.value = "{prop.property_type}-{self.props[i+1].obj_id}"
			end
			i += 1
		end
	end

	# Insert values of object in DB and returns the id of the object
	private fun insert_values
	do
		var max_id = self.unique_id
		
		for prop in self.props do
			if prop.obj_id > max_id then max_id = prop.obj_id 
		end
				
		for k in [self.unique_id..max_id] do
			var insert_stmt = "INSERT INTO '{my_obj.class_name}' ("
			
			for prop in self.props do
				if prop.obj_id == k then
					insert_stmt += prop.name+", "
				end
			end
			
			insert_stmt = insert_stmt.substring(0, insert_stmt.length-2)
			insert_stmt += ") VALUES ("
		
			for prop in self.props do
				if prop.obj_id == k then
					if prop.reference_id != "" then
						insert_stmt += " \""+prop.reference_id+"\", "
					else
						insert_stmt += " \""+prop.value.to_s+"\", "
					end
				end
			end
			
			insert_stmt = insert_stmt.substring(0, insert_stmt.length-2)
			insert_stmt += ");"

			var db = new Sqlite3.open(db_path)

			db.exec(insert_stmt)
			#TODO : assert that the row has been inserted
			db.close
		end		
	end	
end
