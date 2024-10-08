# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
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

# Nit source-file and locations in source-file
module location

# A raw text Nit source file
class SourceFile
	# The path of the source
	var filename: String

	# The content of the source
	var string: String is noinit

	# The original stream used to initialize `string`
	var stream: Reader

	init
	do
		string = stream.read_all
		line_starts[0] = 0
	end

	# Create a new sourcefile using a dummy filename and a given content
	init from_string(filename: String, string: String) is
		nosuper
	do
		self.filename = filename
		self.string = string
		line_starts[0] = 0
	end

	# Offset of each line start in the content `string`.
	#
	# Used for fast access to each line when rendering parts of the `string`.
	var line_starts = new Array[Int]

	# Extract a given line excluding the line-terminators characters.
	#
	# `line_number` starts at 1 for the first line.
	fun get_line(line_number: Int): String do
		if line_number > line_starts.length then return ""
		var line_start = line_starts[line_number-1]
		var line_end = line_start
		var string = self.string
		while line_end+1 < string.length and string.chars[line_end+1] != '\n' and string.chars[line_end+1] != '\r' do
			line_end += 1
		end
		return string.substring(line_start, line_end-line_start+1)
	end
end

# A location inside a source file
class Location
	super Comparable
	redef type OTHER: Location

	# The associated source-file
	var file: nullable SourceFile

	# The starting line number (starting from 1)
	#
	# If `line_start==0` then the whole file is considered
	var line_start: Int

	# The stopping line number (starting from 1)
	var line_end: Int

	# Start of this location on `line_start`
	#
	# A `column_start` of 1 means the first column or character.
	#
	# If `column_start == 0` this location concerns the whole line.
	#
	# Require: `column_start >= 0`
	var column_start: Int

	# End of this location on `line_end`
	var column_end: Int

	# Builds a location instance from its string representation.
	#
	# Examples:
	#
	# ~~~
	# var loc = new Location.from_string("location.nit:82,2--105,8")
	# assert loc.to_s == "location.nit:82,2--105,8"
	#
	# loc = new Location.from_string("location.nit")
	# assert loc.to_s == "location.nit"
	#
	# loc = new Location.from_string("location.nit:82,2")
	# assert loc.to_s == "location.nit:82,2--0,0"
	#
	# loc = new Location.from_string("location.nit:82--105")
	# assert loc.to_s == "location.nit:82,0--105,0"
	#
	# loc = new Location.from_string("location.nit:82,2--105")
	# assert loc.to_s == "location.nit:82,2--105,0"
	#
	# loc = new Location.from_string("location.nit:82--105,8")
	# assert loc.to_s == "location.nit:82,0--105,8"
	# ~~~
	init from_string(string: String) is
		nosuper
	do
		self.line_start = 0
		self.line_end = 0
		self.column_start = 0
		self.column_end = 0
		# parses the location string and init position vars
		var parts = string.split_with(":")
		var filename = parts.shift
		self.file = new SourceFile(filename, new FileReader.open(filename))
		# split position
		if parts.is_empty then return
		var pos = parts.first.split_with("--")
		# split start position
		if pos.first.has(",") then
			var pos1 = pos.first.split_with(",")
			self.line_start = pos1[0].to_i
			if pos1.length > 1 then
				self.column_start = pos1[1].to_i
			end
		else
			self.line_start = pos.first.to_i
		end
		# split end position
		if pos.length <= 1 then return
		if pos[1].has(",") then
			var pos2 = pos[1].split_with(",")
			if pos2.length > 1 then
				self.line_end = pos2[0].to_i
				self.column_end = pos2[1].to_i
			else
				self.line_end = self.line_start
				self.column_end = pos2[0].to_i
			end
		else
			self.line_end = pos[1].to_i
		end
	end

	# Initialize a location corresponding to an opaque file.
	#
	# The path is used as is and is not open nor read.
	init opaque_file(path: String)
	do
		var source = new SourceFile.from_string(path, "")
		init(source, 0, 0, 0, 0)
	end

	# The index in the start character in the source
	fun pstart: Int do return file.line_starts[line_start-1] + column_start-1

	# The index on the end character in the source
	fun pend: Int do return file.line_starts[line_end-1] + column_end-1

	# The verbatim associated text in the source-file
	fun text: String
	do
		var res = self.text_cache
		if res != null then return res
		var l = self
		var pstart = self.pstart
		var pend = self.pend
		res = l.file.string.substring(pstart, pend-pstart+1)
		self.text_cache = res
		return res
	end

	private var text_cache: nullable String = null

	redef fun ==(other: nullable Object): Bool do
		if other == null then return false
		if not other isa Location then return false

		if other.file != file then return false
		if other.line_start != line_start then return false
		if other.line_end != line_end then return false
		if other.column_start != column_start then return false
		if other.column_end != column_end then return false

		return true
	end

	# Is `self` included (or equals) to `loc`?
	fun located_in(loc: nullable Location): Bool do
		if loc == null then return false

		if line_start < loc.line_start then return false
		if line_start > loc.line_end then return false

		if line_end > loc.line_end then return false

		if line_start == loc.line_start then
			if column_start < loc.column_start then return false
			if line_start == loc.line_end and column_start > loc.column_end then return false
		end

		if line_end == loc.line_end and column_end > loc.column_end then return false

		return true
	end

	redef fun to_s: String do
		var file_part = ""
		if file != null then
			file_part = file.filename
		end

		if line_start <= 0 then return file_part

		if file != null and file.filename.length > 0 then file_part += ":"

		if line_start == line_end then
			if column_start == column_end then
				return "{file_part}{line_start},{column_start}"
			else
				return "{file_part}{line_start},{column_start}--{column_end}"
			end
		else
			return "{file_part}{line_start},{column_start}--{line_end},{column_end}"
		end
	end

	# Return a location message according to an observer.
	#
	# Currently, if both are in the same file, the file information is not present in the result.
	fun relative_to(loc: nullable Location): String do
		var relative: Location
		if loc != null and loc.file == self.file then
			relative = new Location(null, self.line_start, self.line_end, self.column_start, self.column_end)
		else
			relative = new Location(self.file, self.line_start, self.line_end, self.column_start, self.column_end)
		end
		return relative.to_s
	end

	redef fun <(other: OTHER): Bool do
		if self == other then return false
		if self.located_in(other) then return true
		if other.located_in(self) then return false

		if line_start != other.line_start then return line_start < other.line_start
		if column_start != other.column_start then return column_start < other.column_start
		if line_end != other.line_end then return line_end < other.line_end

		return column_end < other.column_end
	end

	# Return the associated line with the location highlighted with color and a caret under the starting position
	# `color` must be and terminal escape sequence used as `"{escape}[{color}m;"`
	# * `"0;31"` for red
	# * `"1;31"` for bright red
	# * `"0;32"` for green
	fun colored_line(color: String): String
	do
		var esc = 27.code_point
		var def = "{esc}[0m"
		var col = "{esc}[{color}m"

		var l = self
		var i = l.line_start
		if i <= 0 then return ""

		var line_start = l.file.line_starts[i-1]
		var line_end = line_start
		var string = l.file.string
		while line_end+1 < string.length and string.chars[line_end+1] != '\n' and string.chars[line_end+1] != '\r' do
			line_end += 1
		end
		var lstart
		if l.column_start > 0 then
			lstart = string.substring(line_start, l.column_start - 1)
		else
			lstart = ""
		end
		var cend
		if i != l.line_end then
			cend = line_end - line_start + 1
		else
			cend = l.column_end
		end
		var lmid
		var lend
		if line_start + cend <= string.length then
			lmid = string.substring(line_start + l.column_start - 1, cend - l.column_start + 1)
			lend = string.substring(line_start + cend, line_end - line_start - cend + 1)
		else
			lmid = ""
			lend = ""
		end
		var indent = new FlatBuffer
		for j in [line_start..line_start+l.column_start-1[ do
			if string.chars[j] == '\t' then
				indent.add '\t'
			else
				indent.add ' '
			end
		end
		return "\t{lstart}{col}{lmid}{def}{lend}\n\t{indent}^"
	end
end
