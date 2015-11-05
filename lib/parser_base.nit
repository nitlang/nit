# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Simple base for hand-made parsers of all kinds
module parser_base

# Basic facilities for common parser operations on String sources
class StringProcessor
	# Source document to parse
	private var src: String

	# Current position in `src`
	private var pos = 0

	# Position at which current line started
	private var line_start = 0

	# Current line in `src`
	private var line = 1

	# Offset in the current line
	private fun line_offset: Int do return pos - line_start + 1

	# Gives the current location in the `src`
	fun current_location: Location do return new Location(line, line_offset)

	# Advances in `src` until a non-whitespace character is encountered
	private fun ignore_whitespaces do
		var srclen = src.length
		if pos >= srclen then return
		var c = src[pos]
		while c.is_whitespace do
			pos += 1
			if pos >= srclen then break
			if c == '\n' then
				line += 1
				line_start = pos
			end
			c = src[pos]
		end
	end

	# Reads characters until pattern `s` is found
	private fun ignore_until(s: String): Int do
		if s.length == 0 then return pos
		var srclen = src.length
		if pos >= srclen then return -1
		loop
			var c = s[0]
			var src_c = src[pos]
			while src_c != c do
				pos += 1
				if pos >= srclen then return -1
				if src_c == '\n' then
					line += 1
					line_start= pos
				end
				src_c = src[pos]
			end
			var relpos = pos
			var fnd = true
			for i in s do
				if relpos >= srclen then
					fnd = false
					break
				end
				if src[relpos] != i then
					pos += 1
					fnd = false
					break
				end
				relpos += 1
			end
			if fnd then return pos
		end
	end
end

# Information about the location of an entity in a source document
class Location
	# Line in which the element is described
	var line: Int
	# Offset in the line at which the element is positioned
	var offset: Int

	redef fun to_s do return "line {line}, position {offset}"
end
