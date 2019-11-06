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

module test_postgres_nity

import postgresql::postgres

var db_suffix = "NIT_TESTING_ID".environ
var db = new Postgres.open("host=postgres user=postgres dbname=postgres")
assert open_db: not db.is_closed else print db.error

assert create_table: db.create_table("IF NOT EXISTS users_{db_suffix} (uname TEXT PRIMARY KEY, pass TEXT NOT NULL, activated INTEGER, perc FLOAT)") else
  print db.error
end

assert insert1: db.insert("INTO users_{db_suffix} VALUES('Bob', 'zzz', 1, 77.7)") else
  print db.error
end

assert insert2: db.insert("INTO users_{db_suffix} VALUES('Guilherme', 'xxx', 1, 88)") else
  print db.error
end

var result = db.raw_execute("SELECT * FROM users_{db_suffix}")

assert raw_exec: result.is_ok else print db.error

assert postgres_nfields: result.nfields == 4 else print_error db.error
assert postgres_fname: result.fname(0) == "uname" else print_error db.error
assert postgres_isnull: not result.is_null(0,0) else print_error db.error
assert postgres_value: result.value(0,0) == "Bob" else print_error db.error

assert drop_table: db.execute("DROP TABLE users_{db_suffix}") else print db.error

db.finish

assert db.is_closed else print db.error
