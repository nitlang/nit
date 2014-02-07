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
# This class allows to create new CSV files, and also to read from existing CSV files.
# It is for the moment impossible to preserve data from existing files when modifying them.
class CSVDocument
	private var file: String
	private var header: Array[String] = new Array[String]
	private var lines: Array[Array[String]] = new Array[Array[String]]

	init(file: String) do self.file = file

	# This function allows to set header to a CSV file.
	# Example : yourCSVDocument.set_header("Id", "Name", "LastName")
	fun set_header(values: Object...) do
		header.clear
		for value in values do header.add(value.to_s)
	end
	
	# This function allows to get the header from an existing CSV file and stores it in the class 'header' property.
	fun get_header: String
	do
		var f = new IFStream.open(self.file)
		f.fill_buffer
		if not f.eof then
			var result = f.read_all.split('\n')
			f.close
			var result_columns = result[0].split(';')
			for value in result_columns do header.add(value.to_s)
			return result[0].to_s
		else
			f.close
			return "File is empty !"
		end
	end

	# This function allows to add a new line to a CSV file.
	# Example : yourCSVDocument.add_line("1", "James", "Bond")
	fun add_line(values: Object...) do
		if values.length != header.length then
			print "CSV error: header declares {header.length} columns, line contains {values.length} values"
			abort
		end
		var line = new Array[String]
		for value in values do line.add(value.to_s)
		lines.add(line)
	end
	
	# This function allows to read a specific line from an existing CSV file.
	# Example : yourCSVDocument.read_line(2)
	fun read_line(line: Int): String
	do
		var result_line = ""
		var f = new IFStream.open(self.file)
		f.fill_buffer
		if not f.eof then
			var result = f.read_all.split('\n')
			f.close
			var i = result.length
			if 1 <= line and line < i-1 then
				result_line = result[line]
			else if line == 0 then
				result_line = "You can't get the header with this function, try fun get_header."
			else
				result_line = "Error, this file contains only {i-1} lines (including the header)."
			end
		else
			f.close
			result_line = "File is empty !"
		end
		return result_line
	end
	
	# This function allows to read all lines from an existing CSV file, excluding the header.
	fun read_lines: String
	do
		var f = new IFStream.open(self.file)
		f.fill_buffer
		if not f.eof then
			var result = f.read_all.split('\n')
			f.close
			var i = result.length
			var result_lines = ""
			for x in [1..i-2] do
				# 'i-2' because text editors put a '\n' at the end of files.
				if x == i-2 then result_lines += result[x] else result_lines += result[x] + "\n"
			end
			return result_lines
		else
			f.close
			return "File is empty !"
		end
	end
	
	# This function allows to read all lines from an existing CSV file, including the header.
	fun read_all: String
	do
		var f = new IFStream.open(self.file)
		f.fill_buffer
		if not f.eof then
			var result = f.read_all
			f.close
			return result
		else
			f.close
			return "File is empty !"
		end
	end

	# This function prepares the writing by joining the class properties.
	redef fun to_s do
		var str = header.join(";") + "\n"
		for line in lines do str += line.join(";") + "\n"
		return str
	end

	# This function writes the CSV file.
	fun save do
		var out = new OFStream.open(self.file)
		out.write(self.to_s)
		out.close
	end
end
