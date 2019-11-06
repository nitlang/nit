# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# `app::data_store` implementation on GNU/Linux
module data_store

import app::data_store
private import xdg_basedir
import sqlite3
private import json

redef class DataStore

	# File path of the Sqlite3 DB file
	fun db_file: String do return "data_store.db"

	# Sqlite3 table used
	fun db_table: String do return "data_store"

	private var db_cache: nullable Sqlite3DB = null

	# Database to use to implement the `DataStore`
	fun db: nullable Sqlite3DB
	do
		var db = db_cache
		if db != null then return db

		# Find DB path
		var config_home = xdg_basedir.config_home.to_s
		var config_dir = config_home.join_path(sys.program_name.basename)
		if not config_dir.file_exists then config_dir.mkdir
		var db_path = config_dir.join_path(db_file)

		# Open DB connection
		db = new Sqlite3DB.open(db_path)
		if not db.is_open then
			print_error "Data store unavaible, cannot load/save data. (at '{db_path}' with '{db.error or else "unknown"}')"
			return null
		end

		# Create DB table
		db.create_table "IF NOT EXISTS {db_table} (key TEXT PRIMARY KEY, value TEXT)"

		db_cache = db
		return db
	end

	redef fun [](key)
	do
		# Get DB
		var db = self.db
		if db == null then return null

		# Prepare SELECT statement
		var stmt = db.select("* FROM {db_table} WHERE key == {key.to_sql_string}")
		if stmt == null then return null

		# Execute statment
		for row in stmt do
			# Get from statement
			var serialized = row[1].to_s
			stmt.close

			# Deserialize
			var deserializer = new JsonDeserializer(serialized)
			var deserialized = deserializer.deserialize

			var errors = deserializer.errors
			if errors.not_empty then
				# An update may have broken the versioning compatibility
				print_error "{class_name} error at deserialization: {errors.join(", ")}"
				return null # Let's be safe
			end

			return deserialized
		end

		stmt.close
		return null
	end

	redef fun []=(key, value)
	do
		# Get DB
		var db = self.db
		if db == null then return

		# Serialize
		var stream = new StringWriter
		var serializer = new JsonSerializer(stream)
		serializer.serialize value
		var serialized = stream.to_s

		# Save in DB
		db.execute "BEGIN TRANSACTION"
		db.insert "OR REPLACE INTO {db_table} VALUES({key.to_sql_string}, {serialized.to_sql_string})"
		db.execute "COMMIT"
	end
end
