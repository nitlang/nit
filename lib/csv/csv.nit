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

# CSV document handling.
module csv

redef class Text
	# Escape the content of `self` for inclusion in a CSV document
	private fun escape_to_csv(sep_char, delim_char: Char, eol: String): String do
		var add_sp = chars_to_escape_csv(sep_char, delim_char, eol)
		if add_sp == 0 then return to_s
		var bf = new Buffer.with_cap(add_sp + byte_length)
		bf.add '"'
		for i in [0 .. length[ do
			var c = self[i]
			if c == delim_char then
				bf.add c
			end
			bf.add c
		end
		bf.add '"'
		return bf.to_s
	end

	# How many more bytes should be allocated for CSV escaping ?
	private fun chars_to_escape_csv(sep_char, delim_char: Char, eol: String): Int do
		var more_ln = 0
		var ln = length
		var need_esc = false
		var fst_eol = eol.first
		var i = 0
		while i < ln do
			var c = self[i]
			if c == delim_char then more_ln += 1
			if c == fst_eol then
				need_esc = true
				for j in [1 .. eol.length[ do
					i += 1
					c = self[i]
					if c != eol[j] then
						i -= j
						need_esc = false
						break
					end
				end
			end
			if c == sep_char then need_esc = true
			i += 1
		end
		var more = more_ln * delim_char.u8char_len
		if need_esc then more += 2
		return more
	end

	# Unescape the content of `self` from CSV format to Nit String
	private fun unescape_csv(delim_char: Char): String do
		var to_un = chars_to_unescape_csv(delim_char)
		if to_un == 0 then return to_s
		var buf = new Buffer.with_cap(byte_length - to_un)
		var pos = 0
		var ln = length
		while pos < ln do
			var c = self[pos]
			if c == delim_char then pos += 1
			buf.add c
			pos += 1
		end
		return buf.to_s
	end

	# How many bytes should be removed for CSV unescaping ?
	private fun chars_to_unescape_csv(delim_char: Char): Int do
		var pos = 0
		var to_un = 0
		var ln = length
		while pos < ln do
			var c = self[pos]
			if c == delim_char then
				pos += 1
				to_un += 1
			end
			pos += 1
		end
		return to_un
	end
end

# Shared properties by all CSV-related classes
#
# This class is basically only here for implementation purposes and should not be used
# by clients for typing.
abstract class CsvStream
	# The character that delimits escaped value.
	#
	# The delimiter is escaped by doubling it.
	var delimiter = '"' is writable

	# The character that split each cell in a record.
	var separator = ',' is writable

	# The character that ends a record (end of line).
	var eol = "\n" is writable
end

# A CSV document representation.
class CsvDocument
	super Writable
	super CsvStream

	# The header.
	#
	# Contains the name of all fields in this table.
	var header = new Array[String] is writable, optional

	# The list of the records.
	#
	# All records must have the same length than `header`.
	var records = new Array[Array[String]] is writable, optional

	# Adds a new record to document containing the values in `objs`
	fun add_record(objs: Object...) do
		var ln = new Array[String].with_capacity(objs.length)
		for i in objs do ln.add(i.to_s)
		records.add ln
	end

	redef fun write_to(stream) do
		var s = new CsvWriter(stream)
		s.separator = separator
		s.eol = eol
		s.delimiter = delimiter
		if not header.is_empty then
			s.write_line header
		end
		s.write_lines(records)
	end

	# Load from the specified stream.
	#
	# Parameters:
	#
	# * `stream`: Input stream.
	# * `has_header`: Is the first record the header? - defaults to true
	# * `skip_empty`: Do we skip the empty lines? - defaults to true
	fun load_from(stream: Reader, has_header: nullable Bool, skip_empty: nullable Bool) do
		if has_header == null then has_header = true
		if skip_empty == null then skip_empty = true
		var reader = new CsvReader(stream)
		reader.separator = separator
		reader.eol = eol
		reader.delimiter = delimiter
		reader.skip_empty = skip_empty
	end
end

# Appends CSV records to a file.
#
# By default, uses the format recommended by RFC 4180 (see `rfc4180`).
#
# Note: If a record contains only an empty cell, its representation is
# undistinguishable from an empty line. This is because the empty values are
# always written unescaped in order to avoid them to be interpreted as escaped
# delimiters by some parsers.
#
# ~~~nit
# var out = new StringWriter
# var writer = new CsvWriter(out)
# writer.write_elements(1, 2.0, "foo\nbar")
# writer.write_line([""])
# assert out.to_s == """1,2.0,"foo\nbar"\n\n"""
# ~~~
class CsvWriter
	super CsvStream

	# The output stream.
	var ostream: Writer

	# Write several lines to a stream
	fun write_lines(lines: Array[Array[Object]]) do for i in lines do write_line i

	# Append the elements in `els` as a record.
	#
	# The representation of each cell is determined by `to_s`.
	fun write_elements(els: Object...) do
		var os = ostream
		var esc = delimiter
		var sep = separator
		var eol = eol
		for i in [0 .. els.length - 1[ do
			os.write(els[i].to_s.escape_to_csv(sep, esc, eol))
			os.write_char(sep)
		end
		os.write(els.last.to_s.escape_to_csv(sep, esc, eol))
		os.write(eol)
	end

	# Append the specified record.
	#
	# The representation of each cell is determined by `to_s`.
	fun write_line(line: Array[Object]) do
		var os = ostream
		var esc = delimiter
		var sep = separator
		var eol = eol
		for i in [0 .. line.length - 1[ do
			os.write(line[i].to_s.escape_to_csv(sep, esc, eol))
			os.write_char(sep)
		end
		os.write(line.last.to_s.escape_to_csv(sep, esc, eol))
		os.write(eol)
	end
end

# Reads records from a CSV file.
#
# By default, the format recognizes EOLs as `\n`
#
# ~~~nit
# var example = """
# foo,bar
# "Hello, word!",1234.5 + 42
# "Something
# ""else""\", baz
# """
# var reader = new CsvReader.from_string(example)
# var table = reader.read_all
#
# assert table.header  == ["foo","bar"]
# assert table.records == [["Hello, word!","1234.5 + 42"],
# 			["Something\n\"else\""," baz"]]
# ~~~
class CsvReader
	super CsvStream

	# The input stream.
	var istream: Reader

	# Do we skip the empty lines?
	#
	# Note: Even if this attribute is `false`, the presence of an line ending at
	# end of the last record does not change the number of returned record.
	# This is because the line endings are processed as terminators, not as
	# separators. Therefore, when there is more than one line ending at the end
	# of the file, the additional lines are interpreted as empty records that
	# are skipped only if `skip_empty` is set to `true`.
	#
	# `false` by default.
	var skip_empty: Bool = false is writable

	# Creates a new CSVReader from a `string` data
	init from_string(s: String) do init(new StringReader(s))

	# Reads the content of the Stream and interprets it as a CSV Document
	#
	# Optional parameter `has_header` determines whether the first line
	# of the CSV Document is header data.
	# Defaults to true
	fun read_all(has_header: nullable Bool): CsvDocument do
		var header: nullable Array[String] = null
		if has_header == null then has_header = true
		var iss = istream
		var res_data = new Array[Array[String]]
		var eol_st = eol.first
		var line = new Array[String]
		var esc = delimiter
		var sep = separator
		var eol = eol
		var is_eol = false
		var eol_buf = new Buffer.with_cap(eol.length)
		var c = iss.read_char
		var el = new Buffer
		while not iss.eof do
			if c == null then continue
			loop
				if c == esc then
					c = iss.read_char
					loop
						if c == esc then
							c = iss.read_char
							if c != esc then break
						end
						if c == null then break
						el.add c
						c = iss.read_char
					end
				end
				if c == sep then break
				if c == eol_st then
					eol_buf.add c.as(not null)
					is_eol = true
					for i in [1 .. eol.length[ do
						c = iss.read_char
						if c == null or c != eol[i] then
							is_eol = false
							el.append(eol_buf)
							eol_buf.clear
							break
						end
						eol_buf.add c
					end
					if not is_eol then continue
					eol_buf.clear
					break
				end
				if c == sep then break
				el.add c.as(not null)
				c = iss.read_char
				if c == null then break
			end
			line.add el.to_s
			el.clear
			if is_eol or iss.eof then
				c = iss.read_char
				is_eol = false
				if skip_empty and line.is_empty then
					continue
				end
				if has_header and header == null then
					header = line
				else res_data.add line
				line = new Array[String]
			end
			if c == sep then c = iss.read_char
		end
		if header == null then header = new Array[String]
		var doc = new CsvDocument
		doc.header = header
		doc.records = res_data
		return doc
	end
end
