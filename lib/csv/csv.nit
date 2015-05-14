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
	super Writable

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

	# Load from the specified stream.
	#
	# Parameters:
	#
	# * `stream`: Input stream.
	# * `has_header`: Is the first row the header?
	# * `skip_empty`: Do we skip the empty lines?
	# For details, see `CsvReader.skip_empty`.
	fun load_from(stream: Reader, has_header: Bool, skip_empty: Bool) do
		var reader = new CsvReader.with_format(stream, format)
		reader.skip_empty = skip_empty
		if has_header then
			if reader.is_ok then
				header = reader.item
			else
				header.clear
			end
		end
		records.clear
		for record in reader do records.add(record)
	end

	# Load from the specified file.
	#
	# Parameters:
	#
	# * `path`: Path of the file.
	# * `has_header`: Is the first row the header?
	# * `skip_empty`: Do we skip the empty lines?
	fun load(path: String, has_header: Bool, skip_empty: Bool) do
		var istream = new FileReader.open(path)
		load_from(istream, has_header, skip_empty)
		istream.close
	end
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
# var out = new StringWriter
# var writer = new CsvWriter(out)
# writer.write_row(1, 2.0, "foo\nbar")
# writer.write_sequence([""])
# assert out.to_s == """1,2.0,"foo\nbar"\r\n\r\n"""
# ~~~
class CsvWriter

	# The output stream.
	var ostream: Writer

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
	init with_format(ostream:Writer, format: CsvFormat) do
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

# Reads rows from a CSV file.
#
# By default, uses the format recommended by RFC 4180 (see `rfc4180`).
#
# ~~~nit
# var example = new StringReader("""
# foo,bar\r
# "Hello, word!",1234.5 + 42\r
# "Something\r
# ""else""\", baz\r
# """)
# var reader = new CsvReader(example)
# var table = new Array[Array[String]]
#
# for row in reader do table.add row
# assert table == [
# 			["foo","bar"],
# 			["Hello, word!","1234.5 + 42"],
# 			["Something\r\n\"else\""," baz"]
# 		]
# ~~~
class CsvReader
	super Iterator[Array[String]]

	# The input stream.
	var istream: Reader

	# The format to use.
	#
	# Defaults to `rfc4180`.
	var format: CsvFormat = rfc4180 is lazy

	# Do we skip the empty lines?
	#
	# Note: Even if this attribute is `false`, the presence of an line ending at
	# end of the last row does not change the number of returned rows.
	# This is because the line endings are processed as terminators, not as
	# separators. Therefore, when there is more than one line ending at the end
	# of the file, the additional lines are interpreted as empty rows that
	# are skipped only if `skip_empty` is set to `true`.
	#
	# `false` by default.
	var skip_empty: Bool = false is writable

	# The last read row.
	private var row: nullable Array[String] = null

	# Did we read something?
	private var started = false

	# Create a new reader with the specified format.
	init with_format(istream:Reader, format: CsvFormat) do
		self.istream = istream
		self.format = format
	end

	# Read the first row, if needed.
	fun prepare do
		if not started then
			row = read_row
			started = true
		end
	end

	redef fun next do
		prepare
		assert is_ok else
			sys.stderr.write "Already at the end of the stream.\n"
		end
		row = read_row
	end

	# Return the last read row.
	redef fun item do
		prepare
		return row.as(not null)
	end

	redef fun is_ok do
		prepare
		return row != null
	end

	# Free some internal ressources and set `is_ok` to `false`.
	#
	# Do not close the input stream.
	redef fun finish do row = null

	# Close the input stream.
	fun close do istream.close

	private fun read_row: nullable Array[String] do
		if istream.eof then return null
		var row = new Array[String]
		var value = new RopeBuffer

		# Number of unescaped characters since the last delimiter or separator.
		var unescaped = 0

		# Do we read the start of a row?
		var got_row = false

		# Do we found a delimited string in the current cell?
		var got_delimiter = false

		loop
			var c = istream.read_char

			if c == null then
				if got_row then
					row.add value.to_s
					return row
				else
					return null
				end
			end

			if c == format.delimiter then
				if got_delimiter and unescaped == 0 then
					# Got an escaped delimiter.
					value.add format.delimiter
				end
				# Read all bytes until the delimiter.
				loop
					c = istream.read_char
					assert not_eof: c != null else
						sys.stderr.write "Unexpected end of file before the end of a delimited value.\n"
					end
					if c == format.delimiter then break
					value.add c
				end
				unescaped = 0
				got_row = true
				got_delimiter = true
			else if c == format.separator then
				# Flush the value to the row.
				row.add value.to_s
				value.clear
				unescaped = 0
				got_delimiter = false
			else
				value.add c
				unescaped += 1
				if unescaped >= format.eol.length and
						value.has_suffix(format.eol) then
					var value_trimed = value.substring(0,
							value.length - format.eol.length).to_s
					if skip_empty and row.is_empty and
							value_trimed.is_empty and
							not got_delimiter then
						# Skip the empty line.
						value.clear
						unescaped = 0
						got_row = false
					else
						row.add value_trimed
						return row
					end
				else
					got_row = true
				end
			end
		end
	end
end

# The CSV format recommended by [RFC 4180](https://tools.ietf.org/html/rfc4180).
#
# * `delimiter`: `'"'`
# * `separator`: `','`
# * `eol`: `"\r\n"`
fun rfc4180: CsvFormat do return once new CsvFormat('"', ',', "\r\n")
