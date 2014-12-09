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

# CSV document handling.
module csv

# Specifies a CSV format.
class CsvFormat
	# The character that delimits escaped value.
	#
	# The delimiter is escaped by doubling it.
	var delimiter: Char

	# The character that split each cell in a row.
	var separator: Char

	# The character that ends a row (end of line).
	var eol: String

	# Escape sequence for the delimiter.
	private var escaping = "{delimiter}{delimiter}" is lazy

	# Escape the specified cell.
	private fun escape_cell(cell: String): Text do
		var result = new RopeBuffer
		result.add delimiter
		result.append cell.replace(delimiter, escaping)
		result.add delimiter
		return result
	end

	# Can the specified value be inserted without any escaping?
	private fun is_value_clean(value: String): Bool do
		for c in value.chars do
			if c == delimiter then return false
			if c == separator then return false
			if eol.chars.has(c) then return false
		end
		return true
	end
end

# A CSV document representation.
class CsvDocument
	super Streamable

	# The format to use.
	#
	# Defaults to `rfc4180`.
	var format: CsvFormat = rfc4180 is writable

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

	redef fun write_to(stream) do
		var writer = new CsvWriter.with_format(stream, format)
		writer.write_sequence(header)
		for record in records do writer.write_sequence(record)
	end

	# Deprecated alias for `write_to_file`.
	fun save(file: String) do write_to_file(file)
end

# Appends CSV rows to a file.
#
# By default, uses the format recommended by RFC 4180 (see `rfc4180`).
#
# Note: If a row contains only an empty cell, its representation is
# undistinguishable from an empty line. This is because the empty values are
# always written unescaped in order to avoid them to be interpreted as escaped
# delimiters by some parsers.
#
# ~~~nit
# var out = new StringOStream
# var writer = new CsvWriter(out)
# writer.write_row(1, 2.0, "foo\nbar")
# writer.write_sequence([""])
# assert out.to_s == """1,2.0,"foo\nbar"\r\n\r\n"""
# ~~~
class CsvWriter

	# The output stream.
	var ostream: OStream

	# The format to use.
	#
	# Defaults to `rfc4180`.
	var format: CsvFormat = rfc4180

	# Do we escape all cells (except empty ones)?
	#
	# If `false` (the default), escape only cells that contain a metacharacter
	# of the format. In all cases, empty cells are not escaped. This option
	# permits to choose between the optimization of the performances (when
	# `true`) and optimization of the size of the output (when `false`).
	#
	# Note: Escaping may not be correctly recognized by some parsers.
	var always_escape = false is writable

	# Create a new writer with the specified format.
	init with_format(ostream:OStream, format: CsvFormat) do
		self.ostream = ostream
		self.format = format
	end

	# Append the specified sequence as a row.
	#
	# The representation of each cell is determined by `to_s`.
	fun write_sequence(row: SequenceRead[Object]) do
		if not row.is_empty then
			var i = row.iterator
			var separator = format.separator.to_s
			write_cell i.item.to_s
			i.next
			for cell in i do
				ostream.write separator
				write_cell cell.to_s
			end
		end
		ostream.write format.eol
	end

	# Append the specified row.
	#
	# The representation of each cell is determined by `to_s`.
	fun write_row(row: Object...) do write_sequence(row)

	# Close the output stream.
	fun close do ostream.close

	private fun write_cell(cell: String) do
		if cell.is_empty then return
		if not always_escape and format.is_value_clean(cell) then
			ostream.write cell
		else
			ostream.write format.escape_cell(cell)
		end
	end
end

# The CSV format recommended by RFC 4180.
#
# * `delimiter`: `'"'`
# * `separator`: `','`
# * `eol`: `"\r\n"`
fun rfc4180: CsvFormat do return once new CsvFormat('"', ',', "\r\n")
