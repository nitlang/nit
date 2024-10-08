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

var words = "../examples/rosettacode/unixdict.txt".to_path.read_all.split('\n')

var doc = new CsvDocument
for i in [0 .. 8[ do doc.header.add("Col{i}")

var del = doc.delimiter.to_s
var eol = doc.eol
var sep = doc.separator.to_s
for i in [0 .. 10000[ do
	var ln = new Array[String]
	for j in [0 .. 8[ do
		var add_sep = 100.rand >= 70
		var add_eol = 100.rand >= 70
		var add_del = 100.rand >= 70
		var el = "{words.rand}"
		if add_sep then el += sep
		if add_eol then el += eol
		if add_del then el += del
		ln.add el
	end
	doc.records.add ln
end

var refst = new StringWriter
doc.write_to(refst)

var csvd = new CsvReader.from_string(refst.to_s).read_all

var prodst = new StringWriter
csvd.write_to(prodst)

assert refst.to_s.trim == prodst.to_s.trim
