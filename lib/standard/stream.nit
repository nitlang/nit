# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Input and output streams of characters
module stream

intrude import ropes
import error

in "C" `{
	#include <unistd.h>
	#include <string.h>
	#include <signal.h>
`}

# Any kind of error that could be produced by an operation on Streams
class IOError
	super Error
end

# Abstract stream class
abstract class IOS
	# Error produced by the file stream
	#
	#     var ifs = new IFStream.open("donotmakethisfile.binx")
	#     ifs.read_all
	#     ifs.close
	#     assert ifs.last_error != null
	var last_error: nullable IOError = null

	# close the stream
	fun close is abstract
end

# Abstract input streams
abstract class IStream
	super IOS
	# Read a character. Return its ASCII value, -1 on EOF or timeout
	fun read_char: Int is abstract

	# Read at most i bytes
	fun read(i: Int): String
	do
		if last_error != null then return ""
		var s = new FlatBuffer.with_capacity(i)
		while i > 0 and not eof do
			var c = read_char
			if c >= 0 then
				s.add(c.ascii)
				i -= 1
			end
		end
		return s.to_s
	end

	# Read a string until the end of the line.
	#
	# The line terminator '\n', if any, is preserved in each line.
	# Use the method `Text::chomp` to safely remove it.
	#
	# ~~~
	# var txt = "Hello\n\nWorld\n"
	# var i = new StringIStream(txt)
	# assert i.read_line == "Hello\n"
	# assert i.read_line == "\n"
	# assert i.read_line == "World\n"
	# assert i.eof
	# ~~~
	#
	# If `\n` is not present at the end of the result, it means that
	# a non-eol terminated last line was returned.
	#
	# ~~~
	# var i2 = new StringIStream("hello")
	# assert not i2.eof
	# assert i2.read_line == "hello"
	# assert i2.eof
	# ~~~
	#
	# NOTE: Only LINE FEED (`\n`) is considered to delimit the end of lines.
	fun read_line: String
	do
		if last_error != null then return ""
		assert not eof
		var s = new FlatBuffer
		append_line_to(s)
		return s.to_s
	end

	# Read all the lines until the eof.
	#
	# The line terminator '\n' is removed in each line,
	#
	# ~~~
	# var txt = "Hello\n\nWorld\n"
	# var i = new StringIStream(txt)
	# assert i.read_lines == ["Hello", "", "World"]
	# ~~~
	#
	# This method is more efficient that splitting
	# the result of `read_all`.
	#
	# NOTE: Only LINE FEED (`\n`) is considered to delimit the end of lines.
	fun read_lines: Array[String]
	do
		var res = new Array[String]
		while not eof do
			res.add read_line.chomp
		end
		return res
	end

	# Read all the stream until the eof.
	fun read_all: String
	do
		if last_error != null then return ""
		var s = new FlatBuffer
		while not eof do
			var c = read_char
			if c >= 0 then s.add(c.ascii)
		end
		return s.to_s
	end

	# Read a string until the end of the line and append it to `s`.
	#
	# SEE: `read_line` for details.
	fun append_line_to(s: Buffer)
	do
		if last_error != null then return
		loop
			var x = read_char
			if x == -1 then
				if eof then return
			else
				var c = x.ascii
				s.chars.push(c)
				if c == '\n' then return
			end
		end
	end

	# Is there something to read.
	# This function returns 'false' if there is something to read.
	fun eof: Bool is abstract
end

# IStream capable of declaring if readable without blocking
abstract class PollableIStream
	super IStream

	# Is there something to read? (without blocking)
	fun poll_in: Bool is abstract

end

# Abstract output stream
abstract class OStream
	super IOS
	# write a string
	fun write(s: Text) is abstract

	# Can the stream be used to write
	fun is_writable: Bool is abstract
end

# Things that can be efficienlty writen to a OStream
#
# The point of this interface it to allow is instance to be efficenty
# writen into a OStream without having to allocate a big String object
#
# ready-to-save documents usually provide this interface.
interface Streamable
	# Write itself to a `stream`
	# The specific logic it let to the concrete subclasses
	fun write_to(stream: OStream) is abstract

	# Like `write_to` but return a new String (may be quite large)
	#
	# This funtionnality is anectodical, since the point
	# of streamable object to to be efficienlty written to a
	# stream without having to allocate and concatenate strings
	fun write_to_string: String
	do
		var stream = new StringOStream
		write_to(stream)
		return stream.to_s
	end
end

redef class Text
	super Streamable
	redef fun write_to(stream) do stream.write(self)
end

# Input streams with a buffer
abstract class BufferedIStream
	super IStream
	redef fun read_char
	do
		if last_error != null then return 0
		if eof then last_error = new IOError("Stream has reached eof")
		if _buffer_pos >= _buffer.length then
			fill_buffer
		end
		if _buffer_pos >= _buffer.length then
			return -1
		end
		var c = _buffer.chars[_buffer_pos]
		_buffer_pos += 1
		return c.ascii
	end

	redef fun read(i)
	do
		if last_error != null then return ""
		if _buffer.length == _buffer_pos then
			if not eof then
				fill_buffer
				return read(i)
			end
			return ""
		end
		if _buffer_pos + i >= _buffer.length then
			var from = _buffer_pos
			_buffer_pos = _buffer.length
			return _buffer.substring_from(from).to_s
		end
		_buffer_pos += i
		return _buffer.substring(_buffer_pos - i, i).to_s
	end

	redef fun read_all
	do
		if last_error != null then return ""
		var s = new FlatBuffer
		while not eof do
			var j = _buffer_pos
			var k = _buffer.length
			while j < k do
				s.add(_buffer[j])
				j += 1
			end
			_buffer_pos = j
			fill_buffer
		end
		return s.to_s
	end

	redef fun append_line_to(s)
	do
		loop
			# First phase: look for a '\n'
			var i = _buffer_pos
			while i < _buffer.length and _buffer.chars[i] != '\n' do i += 1

			# if there is something to append
			if i > _buffer_pos then
				# Enlarge the string (if needed)
				s.enlarge(s.length + i - _buffer_pos)

				# Copy from the buffer to the string
				var j = _buffer_pos
				while j < i do
					s.add(_buffer.chars[j])
					j += 1
				end
			end

			if i < _buffer.length then
				# so \n is in _buffer[i]
				_buffer_pos = i + 1 # skip \n
				return
			else
				# so \n is not found
				_buffer_pos = i
				if end_reached then
					return
				else
					fill_buffer
				end
			end
		end
	end

	redef fun eof do return _buffer_pos >= _buffer.length and end_reached

	# The buffer
	private var buffer: nullable FlatBuffer = null

	# The current position in the buffer
	private var buffer_pos: Int = 0

	# Fill the buffer
	protected fun fill_buffer is abstract

	# Is the last fill_buffer reach the end
	protected fun end_reached: Bool is abstract

	# Allocate a `_buffer` for a given `capacity`.
	protected fun prepare_buffer(capacity: Int)
	do
		_buffer = new FlatBuffer.with_capacity(capacity)
		_buffer_pos = 0 # need to read
	end
end

# An Input/Output Stream
abstract class IOStream
	super IStream
	super OStream
end

# Stream to a String.
#
# Mainly used for compatibility with OStream type and tests.
class StringOStream
	super OStream

	private var content = new Array[String]
	redef fun to_s do return content.to_s
	redef fun is_writable do return not closed
	redef fun write(str)
	do
		assert not closed
		content.add(str.to_s)
	end

	# Is the stream closed?
	protected var closed = false

	redef fun close do closed = true
end

# Stream from a String.
#
# Mainly used for compatibility with IStream type and tests.
class StringIStream
	super IStream

	# The string to read from.
	var source: String

	# The current position in the string.
	private var cursor: Int = 0

	redef fun read_char do
		if cursor < source.length then
			var c = source[cursor].ascii

			cursor += 1
			return c
		else
			return -1
		end
	end

	redef fun close do
		source = ""
	end

	redef fun eof do return cursor >= source.length
end
