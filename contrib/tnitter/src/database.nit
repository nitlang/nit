# This file is part of NIT ( https://nitlanguage.org ).
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

# Database interface of Tnitter
module database

import sqlite3

import model

# The Tnitter database
class DB
	super Sqlite3DB

	redef init open(path)
	do
		super
		create_tables
	end

	# Create the needed tables
	fun create_tables
	do
		assert create_table("IF NOT EXISTS users (user TEXT PRIMARY KEY, pass TEXT)") else
			print error or else "?"
		end

		assert create_table("IF NOT EXISTS posts (user TEXT, text TEXT, posted DATETIME DEFAULT CURRENT_TIMESTAMP)") else
			print error or else "?"
		end
	end

	# Check if the login credentials are valid
	#
	# If valid, returns the username at database creation time. Otherwise returns `null`.
	fun check_login(user, pass: String): nullable String
	do
		var stmt = select("user FROM users WHERE lower({user.to_sql_string}) = lower(user) " +
		                  "AND {pass.tnitter_hash.to_sql_string} = pass")
		assert stmt != null else print error or else "?"

		for row in stmt do return row[0].to_s
		return null
	end

	# Try to sign up a new user, return `true` on success
	fun sign_up(user, pass: String): Bool
	do
		# Check if already in user
		var stmt = select("user FROM users WHERE lower({user.to_sql_string}) = lower(user)")
		assert stmt != null else print error or else "?"

		if not stmt.iterator.to_a.is_empty then return false

		# Insert intro BD
		assert insert("INTO users(user, pass) VALUES ({user.to_sql_string}, {pass.tnitter_hash.to_sql_string})") else
			print error or else "?"
		end

		return true
	end

	# Tnit something
	fun post(user, text: String)
	do
		assert insert("INTO posts(user, text) VALUES ({user.to_sql_string}, {text.to_sql_string})") else
			print error or else "?"
		end
	end

	# List `count` of the latest Tnits skipping `offset`
	fun list_posts(offset, count: Int): Array[Post]
	do
		var stmt = select("user, text FROM posts ORDER BY datetime(posted) DESC LIMIT {count} OFFSET {offset}")
		assert stmt != null else print error or else "?"

		var posts = new Array[Post]
		for row in stmt do posts.add new Post(row[0].to_s, row[1].to_s)

		return posts
	end
end
