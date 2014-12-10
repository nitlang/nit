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
	super Streamable

	# Line headers (the first line displayed in CSV).
	var header: Array[String] = new Array[String] is writable

	# List of lines to append in the CSV.
	var lines: Array[Array[String]] = new Array[Array[String]]

	# Set header values.
	fun set_header(values: Object...) do
		header.clear
		for value in values do
			header.add(value.to_s)
		end
	end

	# Add a line.
	#
	# Abort if the line doesn't have the same number of columns than `header.length`.
	fun add_line(values: Object...) do
		if values.length != header.length then
			print "CSV error: header declares {header.length} columns, line contains {values.length} values"
			abort
		end
		var line = new Array[String]
		for value in values do
			line.add(value.to_s)
		end
		lines.add(line)
	end

	private fun write_line_to(line: Collection[String], stream: OStream)
	do
		var i = line.iterator
		if i.is_ok then
			stream.write(i.item)
			i.next
			while i.is_ok do
				stream.write(";")
				stream.write(i.item)
				i.next
			end
		end
		stream.write("\n")
	end

	redef fun write_to(stream)
	do
		write_line_to(header, stream)
		for line in lines do write_line_to(line, stream)
	end

	# deprecated alias for `write_to_file`
	fun save(file: String) do write_to_file(file)
end
