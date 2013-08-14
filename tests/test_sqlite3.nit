# This file is part of NIT ( http://www.nitlanguage.org ).
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

module test_sqlite3

import sqlite3

var filename = "test.db"
filename.file_delete
var create_req = "CREATE TABLE IF NOT EXISTS users (uname TEXT PRIMARY KEY, pass TEXT NOT NULL, activated INTEGER)"
var insert_req_1 = "INSERT INTO users VALUES('Bob', 'zzz', 1)"
var insert_req_2 = "INSERT INTO users VALUES('Guillaume', 'xxx', 1)"
var select_req = "SELECT * FROM users"

var db = new Sqlite3

db.open(filename)
assert sqlite_open: db.get_error == 0

db.exec(create_req)
assert sqlite_create_table: db.get_error == 0

db.exec(insert_req_1)
assert sqlite_insert_1: db.get_error == 0

db.exec(insert_req_2)
assert sqlite_insert_2: db.get_error == 0

db.prepare(select_req)
assert sqlite_select: db.get_error == 0

# Get first row
db.step
assert sqlite_column_0_0: db.column_text(0) == "Bob"
assert sqlite_column_0_1: db.column_text(1) == "zzz"
assert sqlite_column_0_2: db.column_text(2) == "1"
db.step
assert sqlite_column_1_0: db.column_text(0) == "Guillaume"
assert sqlite_column_1_1: db.column_text(1) == "xxx"
assert sqlite_column_1_2: db.column_text(2) == "1"

db.close

db = new Sqlite3
db.open(filename)
assert sqlite_reopen: db.get_error == 0

db.prepare(select_req)
assert sqlite_reselect: db.get_error == 0
db.step
assert sqlite_column_0_0_reopened: db.column_text(0) == "Bob"
