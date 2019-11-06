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

import serialization

# Basic facilities for common parser operations on String sources
class StringProcessor
	# Source document to parse
	protected var src: String

	# Length of the source document
	protected var len: Int is noinit

	# Current position in `src`
	protected var pos = 0

	# Position at which current line started
	protected var line_start = 0

	# Current line in `src`
	protected var line = 1

	# Offset in the current line
	protected fun line_offset: Int do return pos - line_start + 1

	init do
		_len = src.length
	end

	# Gives the current location in the `src`
	fun current_location: Location do return new Location(line, line_offset)

	# Advances in `src` until a non-whitespace character is encountered
	protected fun ignore_whitespaces do
		var srclen = _len
		var p = _pos
		if p >= srclen then return
		var c = src[p]
		while c.is_whitespace do
			p += 1
			if p >= srclen then break
			if c == '\n' then
				_line += 1
				_line_start = p
			end
			c = src[p]
		end
		_pos = p
		return
	end

	# Reads characters until pattern `s` is found
	protected fun ignore_until(s: String): Int do
		if s.length == 0 then return _pos
		var srclen = _len
		var p = _pos
		if p >= srclen then return -1
		loop
			var c = s[0]
			var src_c = src[p]
			while src_c != c do
				p += 1
				if p >= srclen then
					_pos = p
					return -1
				end
				if src_c == '\n' then
					line += 1
					line_start= pos
				end
				src_c = src[p]
			end
			var relpos = p
			var fnd = true
			for i in s do
				if relpos >= srclen then
					fnd = false
					break
				end
				if src[relpos] != i then
					p += 1
					fnd = false
					break
				end
				relpos += 1
			end
			if fnd then
				_pos = p
				return p
			end
		end
	end

	# Ignores any printable character until a whitespace is encountered
	protected fun ignore_until_whitespace: Int do
		while src.length > pos and not src[pos].is_whitespace do pos += 1
		return pos
	end

	# Returns the current location as a `Location` object
	protected fun hot_location: Location do return new Location(line, line_offset)

	# Is `pos` at the end of the source?
	protected fun eof: Bool do return pos >= src.length
end

# Information about the location of an entity in a source document
class Location
	serialize

	# Line in which the element is described
	var line: Int
	# Offset in the line at which the element is positioned
	var offset: Int

	redef fun to_s do return "line {line}, position {offset}"
end
