# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Benjamin JOSE - - SCHEIDT <beness.j@gmail.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Offers services to serialize a Nit objects to SQLite3 database
# It first creates the table associated to the object, and then inserts the values.
# If table already exists, it is not created again.

module sql_serialization

import serialization
import sqlite3

redef class Serializable
	private fun serialize_to_sqlite(v: SqlSerializer)
	do
		core_serialize_to(v)
	end
end

class SqlSerializer
	super Serializer
	
	# Path to the DB where objects are serialized
	var db_path : String
	
	# Type of the object to serialize
	var object_type : String

	# Map of property_name -> type
	var props_types : Map[String, String]
	
	# Map of property_name -> value
	var props_values : Map[String, nullable Object]
	
	# Map of references to already serialized objects
	var refs_map = new HashMap[Serializable,Int]

	
	init (filename: String) do 
		self.object_type = ""
		self.props_types = new ArrayMap[String, String]
		self.props_values = new ArrayMap[String, nullable Object]
		self.db_path = filename
	end
	
	
	redef fun serialize(object)
	do
		# Create the structure of db, based on the variable names and types
		# Verify that a table is always existing in db
		# Insert the values in the db
	
		if object != null then
						
			if self.object_type == "" then
				# Its the first object we serialize with this serializer
				self.object_type = object.class_name.to_lower
				object.serialize_to_sqlite(self)
				
				create_database_schema
				insert_values
				
			else if self.object_type.to_lower != object.class_name.to_lower then
				# its another object (other type) than before -> create new table
				var ns = new SqlSerializer(self.db_path)
				ns.serialize(object)
			else
				# its another object but same type than before -> dont create new DB schema
				# get only the values of each properties
				self.props_values.clear
				object.serialize_to_sqlite(self)
				
				insert_values
			end	
		end
	end

	# Method called via double dispatch
	# SqlSerializer -> Serializable -> SqlSerializer.serialize_attribute
	# For each property of the object
	redef fun serialize_attribute(name, value)
	do
		self.props_values[name.to_lower] = value
		if not self.props_types.keys.has(name.to_lower) then
			self.props_types[name.to_lower] = value.class_name.to_lower
		end
		
		super
	end

	redef fun serialize_reference(object)
	do
		if refs_map.keys.has(object) then
			# if already serialized, add local reference
			var id = ref_id_for(object)
			# TODO : trouver un moyen de stocker les objets déjà serialis& avec un id
			# et detecter si un fait référence à l'autre donc inserer dans la table des references
			#stream.write "\{\"__kind\": \"ref\", \"__id\": {id}\}"
		else
			# serialize here
			serialize object
		end
	end
	
	private fun ref_id_for(object: Serializable): Int
	do
		if refs_map.keys.has(object) then
			return refs_map[object]
		else
			var id = refs_map.length
			refs_map[object] = id
			return id
		end
	end
	
	# Convert Nit types into SQLite types
	# for statements
	private fun convert_type(obj : String) : String
	do
		if obj == "int" then
			return "INTEGER"
		else if obj == "float" then
			return "FLOAT"
		else if obj == "bool" then
			return "BOOL"
		else if obj == "char" then
			return "CHAR"
		else if obj == "string" then
			return "VARCHAR"
		else
			return "VARCHAR"
		end
	end 
	
	# Create the DB schema for later values insertion
	private fun create_database_schema
	do
		var a = ["int", "float", "bool", "char", "string"]
		if a.has(self.object_type.to_lower) then return
		
		var create_stmt = "CREATE TABLE IF NOT EXISTS " + self.object_type.to_lower		
		create_stmt += "( \"_id_\" INTEGER PRIMARY KEY AUTOINCREMENT  NOT NULL  UNIQUE"
		
		for key, value in self.props_types do
			create_stmt += ", \""+key.to_lower+"\" "+convert_type(value)+""
		end
		
		create_stmt += " );"
				
		var db = new Sqlite3.open(self.db_path)
		
		db.exec(create_stmt)
		# TODO : assert that the table has been correctly created
		
		db.close
	end
	
	# Insert values of object in DB
	private fun insert_values
	do
		if ["int", "float", "bool", "char", "string"].has(self.object_type.to_lower) then return
		var insert_stmt = "INSERT INTO "+self.object_type.to_lower+"("
		
		for key, value in self.props_values do
			insert_stmt += key.to_lower+","			
		end
		insert_stmt = insert_stmt.substring(0, insert_stmt.length-1)
		insert_stmt += ") VALUES ("
		for key, value in self.props_values do
			insert_stmt += " \""+value.to_s+"\","			
		end
		insert_stmt = insert_stmt.substring(0, insert_stmt.length-1)
		insert_stmt += ");"
		
		var db = new Sqlite3.open(self.db_path)
		
		db.exec(insert_stmt)
		#TODO : assert that the row has been inserted
		
		db.close
	end
end

