# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2013 Guillaume Auger <jeho@resist.ca>
# Copyright 2013-2014 Alexis Laferrière <alexis.laf@xymus.net>
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

import sqlite3

var path = "test_nity.db"
#alt1#path = "/../invalid_path.db"
if path.file_exists then path.file_delete

var db = new Sqlite3DB.open(path)
assert db.is_open else print db.error or else "no error?"

assert db.create_table("IF NOT EXISTS users (uname TEXT PRIMARY KEY, pass TEXT NOT NULL, activated INTEGER, perc FLOAT)") else
	print db.error or else "no error?"
end

assert db.insert("INTO users VALUES('Bob', 'zzz', 1, 77.7)") else
	print db.error or else "no error?"
end

assert db.insert("INTO users VALUES('Guillaume', 'xxx', 1, 88.8)") else
	print db.error or else "no error?"
end

#alt2#assert db.insert("INTO notable VALUES('Alexis', 'asdf', 2, 99.9)") else
#alt2#	print db.error or else "no error?"
#alt2#end

for row in db.select("* FROM users") do
	print "####"

	printn "{row[0].name}: "
	print row[0]

	printn "{row[1].name}: "
	var val = row[1].value
	assert val isa Text
	print val.to_s

	printn "{row[2].name}: "
	print row[2].to_i

	printn "{row[3].name}: "
	print row[3].to_f
end

print "\nMap test:\n"

for row in db.select("* FROM users") do
	var m = row.map
	print "####"
	for k, v in m do
		print "{k} = {v or else "nil"}"
	end
end
print ""

print db.is_open
db.close
print db.is_open
