# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2013 Guillaume Auger <jeho@resist.ca>
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

module test_sqlite3_native

import sqlite3::native_sqlite3

var filename = "test.db"
filename.file_delete
var create_req = "CREATE TABLE IF NOT EXISTS users (uname TEXT PRIMARY KEY, pass TEXT NOT NULL, activated INTEGER)"
var insert_req_1 = "INSERT INTO users VALUES('Bob', 'zzz', 1)"
var insert_req_2 = "INSERT INTO users VALUES('Guillaume', 'xxx', 1)"
var select_req = "SELECT * FROM users"

var db = new NativeSqlite3.open(filename.to_cstring)
assert sqlite_open: db.error.is_ok

db.exec(create_req.to_cstring)
assert sqlite_create_table: db.error.is_ok

db.exec(insert_req_1.to_cstring)
assert sqlite_insert_1: db.error.is_ok

db.exec(insert_req_2.to_cstring)
assert sqlite_insert_2: db.error.is_ok

var stmt = db.prepare(select_req.to_cstring)
assert sqlite_select: db.error.is_ok
if stmt.address_is_null then
	print "Prepared failed got: {db.error.to_s}"
	abort
end

while stmt.step.is_row do
	print stmt.column_text(0)
	print stmt.column_text(1)
	print stmt.column_text(2)
end

db.close

db = new NativeSqlite3.open(filename.to_cstring)
assert sqlite_reopen: db.error.is_ok

stmt = db.prepare(select_req.to_cstring)
assert sqlite_reselect: db.error.is_ok
assert not stmt.address_is_null
stmt.step
assert sqlite_column_0_0_reopened: stmt.column_text(0).to_s == "Bob"
