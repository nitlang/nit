# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2016 Guilherme Mansur <guilhermerpmansur@gmail.com>
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

module test_postgres_native

import postgresql::native_postgres

var db_suffix = "NIT_TESTING_ID".environ
var db = new NativePostgres.connectdb("host=postgres user=postgres dbname=postgres")
assert postgres_open: db.status.is_ok else print_error db.error

var result = db.exec("CREATE TABLE IF NOT EXISTS animals_{db_suffix} (aname TEXT PRIMARY KEY, class TEXT NOT NULL, sex INTEGER)")
assert postgres_create_table: result.status.is_ok else print_error db.error

result = db.exec("INSERT INTO animals_{db_suffix} VALUES('Whale', 'mammal', 1)")
assert postgres_insert_1: result.status.is_ok else print_error db.error

result = db.exec("INSERT INTO animals_{db_suffix} VALUES('Snake', 'reptile', 0)")
assert postgres_insert_2: result.status.is_ok else print_error db.error

result = db.exec("SELECT * FROM animals_{db_suffix}")
assert postgres_select: result.status.is_ok else print_error db.error

assert postgres_ntuples: result.ntuples == 2 else print_error db.error
assert postgres_nfields: result.nfields == 3 else print_error db.error
assert postgres_fname: result.fname(0) == "aname" else print_error db.error
assert postgres_isnull: not result.is_null(0,0) else print_error db.error
assert postgres_value: result.value(0,0) == "Whale" else print_error db.error

var cols: Int = result.nfields
var rows: Int = result.ntuples
var fields: String = ""
for c in [0..cols[ do fields += result.fname(c) + "   "
print fields
for i in [0..rows[ do
  fields = ""
  for j in [0..cols[ do fields +=  result.value(i, j) + "   "
  print fields
end

result = db.exec("DELETE FROM animals_{db_suffix} WHERE aname = 'Lioness'")
assert postgres_delete_1: result.status.is_ok else print_error db.error

result = db.exec("DELETE FROM animals_{db_suffix} WHERE aname = 'Snake'")
assert postgres_delete_2: result.status.is_ok else print_error db.error

result = db.prepare("PREPARED_INSERT", "INSERT INTO animals_{db_suffix}(aname, class, sex) VALUES ($1, $2, $3)", 3)
assert postgres_prepare: result.status.is_ok else print_error db.error

result = db.exec("DELETE FROM animals_{db_suffix} WHERE aname = 'Frog'")
assert postgres_delete_3: result.status.is_ok else print_error db.error

var values = ["Frog", "Anphibian", "1"]
var lengths = [values[0].length, values[1].length, values[2].length]
var formats = [0,0,0]
result = db.exec_prepared("PREPARED_INSERT", 3, values, lengths, formats,0)
assert postgres_exec_prepared: result.status.is_ok else print_error db.error

result = db.exec("DROP TABLE animals_{db_suffix}")
assert postgres_drop_table: result.status.is_ok else print_error db.error
db.finish
