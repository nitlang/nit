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

package location

class Location
special Comparable
	redef type OTHER: Location

	readable var _file: String
	readable var _line_start: Int
	readable var _line_end: Int
	readable var _column_start: Int
	readable var _column_end: Int

	init(f: String, line_s: Int, line_e: Int, column_s: Int, column_e: Int) do
		_file = f
		_line_start = line_s
		_line_end = line_e
		_column_start = column_s
		_column_end = column_e
	end

	init with_file(f: String) do init(f,0,0,0,0)

	redef fun to_s: String do
		if line_start == line_end then
			if column_start == column_end then
				return "{file}:{line_start},{column_start}"
			else
				return "{file}:{line_start},{column_start}--{column_end}"
			end
		else
			return "{file}:{line_start},{column_start}--{line_end}:{column_end}"
		end
	end

	redef fun <(other: OTHER): Bool do
		if line_start != other.line_start then return line_start < other.line_start
		if column_start != other.column_start then return column_start < other.column_start
		if line_end != other.line_end then return line_end < other.line_end

		return column_end < other.column_end
	end
end

