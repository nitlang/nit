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

# A CSV document representation.
class CsvDocument
	super Streamable

	# The header.
	#
	# Contains the name of all fields in this table.
	var header: Array[String] = new Array[String] is writable

	# The list of the records.
	#
	# All records must have the same length than `header`.
	var records: Array[Array[String]] = new Array[Array[String]]

	# Replace the header by the specified row.
	fun set_header(values: Object...) do
		header.clear
		for value in values do header.add(value.to_s)
	end

	# Append the specfied record.
	fun add_record(values: Object...) do
		assert values.length == header.length else
			sys.stderr.write "CSV error: Header declares {header.length} columns, record contains {values.length} values.\n"
		end
		var record = new Array[String]
		for value in values do record.add(value.to_s)
		records.add(record)
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

	redef fun write_to(stream) do
		write_line_to(header, stream)
		for record in records do write_line_to(record, stream)
	end

	# Deprecated alias for `write_to_file`.
	fun save(file: String) do write_to_file(file)
end
