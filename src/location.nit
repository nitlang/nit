# This file is part of NIT ( http://www.nitlanguage.org ).
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

# This module is used to model Nit source-file and locations in source-file
package location

# A raw text Nit source file
class SourceFile
	# The path of the source
	var filename: String

	# The content of the source
	var string: String

	# Create a new sourcefile using a filename and a stream
	init(filename: String, stream: IStream)
	do
		self.filename = filename
		string = stream.read_all
	end
end

# A location inside a source file
class Location
	super Comparable
	redef type OTHER: Location

	readable var _file: nullable SourceFile
	readable var _line_start: Int
	readable var _line_end: Int
	readable var _column_start: Int
	readable var _column_end: Int

	init(f: nullable SourceFile, line_s: Int, line_e: Int, column_s: Int, column_e: Int) do
		_file = f
		_line_start = line_s
		_line_end = line_e
		_column_start = column_s
		_column_end = column_e
	end

	init with_file(f: SourceFile) do init(f,0,0,0,0)

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

	fun located_in(loc: nullable Location): Bool do
		if loc == null then return false

		if line_start < loc.line_start then return false
		if line_start > loc.line_end then return false

		if line_end > loc.line_end then return false

		if line_start == loc.line_start then
			if column_start < loc.column_start then return false
			if column_start > loc.column_end then return false
		end

		if line_end == loc.line_end and column_end > loc.column_end then return false

		return true
	end

	redef fun to_s: String do
		var file_part = ""
		if file != null then
			file_part = file.filename
			if file.filename.length > 0 then file_part += ":"
		end

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
end

