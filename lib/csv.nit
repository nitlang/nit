# This file is part of NIT ( http://www.nitlanguage.org ).
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

# CSV output facilities
module csv

# A CSV document representation
class CSVDocument
	private var file: String
	private var header: Array[String] = new Array[String]
	private var lines: Array[Array[String]] = new Array[Array[String]]

	init(file: String) do self.file = file

	fun set_header(values: Object...) do
		header.clear
		for value in values do header.add(value.to_s)
	end

	fun add_line(values: Object...) do
		if values.length != header.length then
			print "CSV error: header declares {header.length} columns, line contains {values.length} values"
			abort
		end
		var line = new Array[String]
		for value in values do line.add(value.to_s)
		lines.add(line)
	end
	
	fun get_header: String
	do
		var line = new IFStream.open(self.file)
		line.fill_buffer
		if not line.eof then
			var result = line.read_line
			line.close
			return result
		else
			line.close
			return "Fichier vide."
		end
	end
	
	fun read_all: String
	do
		var result
		var lines = new IFStream.open(self.file)
		lines.fill_buffer
		if not lines.eof then
			result = lines.read_all
			lines.close
			return result
		else
			lines.close
			return "Fichier vide."
		end
	end

	redef fun to_s do
		var str = header.join(";") + "\n"
		for line in lines do str += line.join(";") + "\n"
		return str
	end

	fun save do
		var out = new OFStream.open(self.file)
		out.write(self.to_s)
		out.close
	end
end
