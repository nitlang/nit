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

import csv

if args.length < 3 then
	print "Usage ./csv_gen record_length record_nb out_filepath [--unicode]"
	exit 1
end

var record_length = args[0].to_i
var record_nb = args[1].to_i
var outpath = args[2]
var unicode = false

if args.length == 4 then
	if not args[3] == "--unicode" then
		print "Usage ./csv_gen record_length record_nb [--unicode]"
		exit 1
	end
	unicode = true
end

var ocsv = new CsvDocument
ocsv.eol = "\r\n"

var sep = ocsv.separator.to_s
var eol = ocsv.eol
var del = ocsv.delimiter.to_s

for i in [0 .. record_length[ do ocsv.header.add "Col{i}"

var c = if unicode then "á" else "a"
for i in [0 .. record_nb[ do
	var line = new Array[String].with_capacity(record_length)
	for j in [0 .. record_length[ do
		var add_sep = 100.rand > 70
		var add_del = 100.rand > 70
		var add_eol = 100.rand > 70
		var ln = 10.rand
		var s = c * ln
		if add_sep then s = sep + s
		if add_del then s += del
		if add_eol then s += eol
		line.add s
	end
	ocsv.records.add line
end

ocsv.write_to_file(outpath)
