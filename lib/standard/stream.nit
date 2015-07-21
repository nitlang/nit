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

intrude import text::ropes
import error
intrude import bytes

in "C" `{
	#include <unistd.h>
	#include <string.h>
	#include <signal.h>
`}

# Any kind of error that could be produced by an operation on Streams
class IOError
	super Error
end

# Any kind of stream to read/write/both to or from a source
abstract class Stream
	# Error produced by the file stream
	#
	#     var ifs = new FileReader.open("donotmakethisfile.binx")
	#     ifs.read_all
	#     ifs.close
	#     assert ifs.last_error != null
	var last_error: nullable IOError = null

	# close the stream
	fun close is abstract
end

# A `Stream` that can be read from
abstract class Reader
	super Stream
	# Reads a character. Returns `null` on EOF or timeout
	fun read_char: nullable Char is abstract

	# Reads a byte. Returns `null` on EOF or timeout
	fun read_byte: nullable Byte is abstract

	# Reads a String of at most `i` length
	fun read(i: Int): String do return read_bytes(i).to_s

	# Read at most i bytes
	fun read_bytes(i: Int): Bytes
	do
		if last_error != null then return new Bytes.empty
		var s = new NativeString(i)
		var buf = new Bytes(s, 0, 0)
		while i > 0 and not eof do
			var c = read_byte
			if c != null then
				buf.add c
				i -= 1
			end
		end
		return buf
	end

	# Read a string until the end of the line.
	#
	# The line terminator '\n' and '\r\n', if any, is removed in each line.
	#
	# ~~~
	# var txt = "Hello\n\nWorld\n"
	# var i = new StringReader(txt)
	# assert i.read_line == "Hello"
	# assert i.read_line == ""
	# assert i.read_line == "World"
	# assert i.eof
	# ~~~
	#
	# Only LINE FEED (`\n`), CARRIAGE RETURN & LINE FEED (`\r\n`), and
	# the end or file (EOF) is considered to delimit the end of lines.
	# CARRIAGE RETURN (`\r`) alone is not used for the end of line.
	#
	# ~~~
	# var txt2 = "Hello\r\n\n\rWorld"
	# var i2 = new StringReader(txt2)
	# assert i2.read_line == "Hello"
	# assert i2.read_line == ""
	# assert i2.read_line == "\rWorld"
	# assert i2.eof
	# ~~~
	#
	# NOTE: Use `append_line_to` if the line terminator needs to be preserved.
	fun read_line: String
	do
		if last_error != null then return ""
		if eof then return ""
		var s = new FlatBuffer
		append_line_to(s)
		return s.to_s.chomp
	end

	# Read all the lines until the eof.
	#
	# The line terminator '\n' and `\r\n` is removed in each line,
	#
	# ~~~
	# var txt = "Hello\n\nWorld\n"
	# var i = new StringReader(txt)
	# assert i.read_lines == ["Hello", "", "World"]
	# ~~~
	#
	# This method is more efficient that splitting
	# the result of `read_all`.
	#
	# NOTE: SEE `read_line` for details.
	fun read_lines: Array[String]
	do
		var res = new Array[String]
		while not eof do
			res.add read_line
		end
		return res
	end

	# Return an iterator that read each line.
	#
	# The line terminator '\n' and `\r\n` is removed in each line,
	# The line are read with `read_line`. See this method for details.
	#
	# ~~~
	# var txt = "Hello\n\nWorld\n"
	# var i = new StringReader(txt)
	# assert i.each_line.to_a == ["Hello", "", "World"]
	# ~~~
	#
	# Unlike `read_lines` that read all lines at the call, `each_line` is lazy.
	# Therefore, the stream should no be closed until the end of the stream.
	#
	# ~~~
	# i = new StringReader(txt)
	# var el = i.each_line
	#
	# assert el.item == "Hello"
	# el.next
	# assert el.item == ""
	# el.next
	#
	# i.close
	#
	# assert not el.is_ok
	# # closed before "world" is read
	# ~~~
	fun each_line: LineIterator do return new LineIterator(self)

	# Read all the stream until the eof.
	#
	# The content of the file is returned as a String.
	#
	# ~~~
	# var txt = "Hello\n\nWorld\n"
	# var i = new StringReader(txt)
	# assert i.read_all == txt
	# ~~~
	fun read_all: String do return read_all_bytes.to_s

	# Read all the stream until the eof.
	#
	# The content of the file is returned verbatim.
	fun read_all_bytes: Bytes
	do
		if last_error != null then return new Bytes.empty
		var s = new Bytes.empty
		while not eof do
			var c = read_byte
			if c != null then s.add(c)
		end
		return s
	end

	# Read a string until the end of the line and append it to `s`.
	#
	# Unlike `read_line` and other related methods,
	# the line terminator '\n', if any, is preserved in each line.
	# Use the method `Text::chomp` to safely remove it.
	#
	# ~~~
	# var txt = "Hello\n\nWorld\n"
	# var i = new StringReader(txt)
	# var b = new FlatBuffer
	# i.append_line_to(b)
	# assert b == "Hello\n"
	# i.append_line_to(b)
	# assert b == "Hello\n\n"
	# i.append_line_to(b)
	# assert b == txt
	# assert i.eof
	# ~~~
	#
	# If `\n` is not present at the end of the result, it means that
	# a non-eol terminated last line was returned.
	#
	# ~~~
	# var i2 = new StringReader("hello")
	# assert not i2.eof
	# var b2 = new FlatBuffer
	# i2.append_line_to(b2)
	# assert b2 == "hello"
	# assert i2.eof
	# ~~~
	#
	# NOTE: The single character LINE FEED (`\n`) delimits the end of lines.
	# Therefore CARRIAGE RETURN & LINE FEED (`\r\n`) is also recognized.
	fun append_line_to(s: Buffer)
	do
		if last_error != null then return
		loop
			var x = read_char
			if x == null then
				if eof then return
			else
				s.chars.push(x)
				if x == '\n' then return
			end
		end
	end

	# Is there something to read.
	# This function returns 'false' if there is something to read.
	fun eof: Bool is abstract

	# Read the next sequence of non whitespace characters.
	#
	# Leading whitespace characters are skipped.
	# The first whitespace character that follows the result is consumed.
	#
	# An empty string is returned if the end of the file or an error is encounter.
	#
	# ~~~
	# var w = new StringReader(" Hello, \n\t World!")
	# assert w.read_word == "Hello,"
	# assert w.read_char == '\n'.ascii
	# assert w.read_word == "World!"
	# assert w.read_word == ""
	# ~~~
	#
	# `Char::is_whitespace` determines what is a whitespace.
	fun read_word: String
	do
		var buf = new FlatBuffer
		var c = read_nonwhitespace
		if c != null then
			buf.add(c)
			while not eof do
				c = read_char
				if c == null then break
				if c.is_whitespace then break
				buf.add(c)
			end
		end
		var res = buf.to_s
		return res
	end

	# Skip whitespace characters (if any) then return the following non-whitespace character.
	#
	# Returns the code point of the character.
	# Returns `null` on end of file or error.
	#
	# In fact, this method works like `read_char` except it skips whitespace.
	#
	# ~~~
	# var w = new StringReader(" \nab\tc")
	# assert w.read_nonwhitespace == 'a'
	# assert w.read_nonwhitespace == 'b'
	# assert w.read_nonwhitespace == 'c'
	# assert w.read_nonwhitespace == null
	# ~~~
	#
	# `Char::is_whitespace` determines what is a whitespace.
	fun read_nonwhitespace: nullable Char
	do
		var c: nullable Char = null
		while not eof do
			c = read_char
			if c == null or not c.is_whitespace then break
		end
		return c
	end
end

# Iterator returned by `Reader::each_line`.
# See the aforementioned method for details.
class LineIterator
	super Iterator[String]

	# The original stream
	var stream: Reader

	redef fun is_ok
	do
		var res = not stream.eof
		if not res and close_on_finish then stream.close
		return res
	end

	redef fun item
	do
		var line = self.line
		if line == null then
			line = stream.read_line
		end
		self.line = line
		return line
	end

	# The last line read (cache)
	private var line: nullable String = null

	redef fun next
	do
		# force the read
		if line == null then item
		# drop the line
		line = null
	end

	# Close the stream when the stream is at the EOF.
	#
	# Default is false.
	var close_on_finish = false is writable

	redef fun finish
	do
		if close_on_finish then stream.close
	end
end

# `Reader` capable of declaring if readable without blocking
abstract class PollableReader
	super Reader

	# Is there something to read? (without blocking)
	fun poll_in: Bool is abstract

end

# A `Stream` that can be written to
abstract class Writer
	super Stream

	# Writes bytes from `s`
	fun write_bytes(s: Bytes) is abstract

	# write a string
	fun write(s: Text) is abstract

	# Write a single byte
	fun write_byte(value: Byte) is abstract

	# Can the stream be used to write
	fun is_writable: Bool is abstract
end

# Things that can be efficienlty written to a `Writer`
#
# The point of this interface is to allow the instance to be efficiently
# written into a `Writer`.
#
# Ready-to-save documents usually provide this interface.
interface Writable
	# Write itself to a `stream`
	# The specific logic it let to the concrete subclasses
	fun write_to(stream: Writer) is abstract

	# Like `write_to` but return a new String (may be quite large)
	#
	# This funtionality is anectodical, since the point
	# of streamable object to to be efficienlty written to a
	# stream without having to allocate and concatenate strings
	fun write_to_string: String
	do
		var stream = new StringWriter
		write_to(stream)
		return stream.to_s
	end
end

redef class Text
	super Writable
	redef fun write_to(stream) do stream.write(self)
end

# Input streams with a buffered input for efficiency purposes
abstract class BufferedReader
	super Reader
	redef fun read_char
	do
		if last_error != null then return null
		if eof then
			last_error = new IOError("Stream has reached eof")
			return null
		end
		# TODO: Fix when supporting UTF-8
		var c = _buffer[_buffer_pos].to_i.ascii
		_buffer_pos += 1
		return c
	end

	redef fun read_byte
	do
		if last_error != null then return null
		if eof then
			last_error = new IOError("Stream has reached eof")
			return null
		end
		var c = _buffer[_buffer_pos]
		_buffer_pos += 1
		return c
	end

	fun buffer_reset do
		_buffer_length = 0
		_buffer_pos = 0
	end

	# Peeks up to `n` bytes in the buffer
	#
	# The operation does not consume the buffer
	#
	# ~~~nitish
	# var x = new FileReader.open("File.txt")
	# assert x.peek(5) == x.read(5)
	# ~~~
	fun peek(i: Int): Bytes do
		if eof then return new Bytes.empty
		var remsp = _buffer_length - _buffer_pos
		if i <= remsp then
			var bf = new Bytes.with_capacity(i)
			bf.append_ns_from(_buffer, i, _buffer_pos)
			return bf
		end
		var bf = new Bytes.with_capacity(i)
		bf.append_ns_from(_buffer, remsp, _buffer_pos)
		_buffer_pos = _buffer_length
		read_intern(i - bf.length, bf)
		remsp = _buffer_length - _buffer_pos
		var full_len = bf.length + remsp
		if full_len > _buffer_capacity then
			var c = _buffer_capacity
			while c < full_len do c = c * 2 + 2
			_buffer_capacity = c
		end
		var nns = new NativeString(_buffer_capacity)
		bf.items.copy_to(nns, bf.length, 0, 0)
		_buffer.copy_to(nns, remsp, _buffer_pos, bf.length)
		_buffer = nns
		_buffer_pos = 0
		_buffer_length = full_len
		return bf
	end

	redef fun read_bytes(i)
	do
		if last_error != null then return new Bytes.empty
		var buf = new Bytes.with_capacity(i)
		read_intern(i, buf)
		return buf
	end

	# Fills `buf` with at most `i` bytes read from `self`
	private fun read_intern(i: Int, buf: Bytes): Int do
		if eof then return 0
		var p = _buffer_pos
		var bufsp = _buffer_length - p
		if bufsp >= i then
			_buffer_pos += i
			buf.append_ns_from(_buffer, i, p)
			return i
		end
		_buffer_pos = _buffer_length
		var readln = _buffer_length - p
		buf.append_ns_from(_buffer, readln, p)
		var rd = read_intern(i - readln, buf)
		return rd + readln
	end

	redef fun read_all_bytes
	do
		if last_error != null then return new Bytes.empty
		var s = new Bytes.with_capacity(10)
		while not eof do
			var j = _buffer_pos
			var k = _buffer_length
			while j < k do
				s.add(_buffer[j])
				j += 1
			end
			_buffer_pos = j
			fill_buffer
		end
		return s
	end

	redef fun append_line_to(s)
	do
		loop
			# First phase: look for a '\n'
			var i = _buffer_pos
			while i < _buffer_length and _buffer[i] != 0xAu8 do
				i += 1
			end

			var eol
			if i < _buffer_length then
				assert _buffer[i] == 0xAu8
				i += 1
				eol = true
			else
				eol = false
			end

			# if there is something to append
			if i > _buffer_pos then
				# Enlarge the string (if needed)
				s.enlarge(s.bytelen + i - _buffer_pos)

				# Copy from the buffer to the string
				var j = _buffer_pos
				while j < i do
					s.bytes.add(_buffer[j])
					j += 1
				end
				_buffer_pos = i
			else
				assert end_reached
				return
			end

			if eol then
				# so \n is found
				return
			else
				# so \n is not found
				if end_reached then return
				fill_buffer
			end
		end
	end

	redef fun eof
	do
		if _buffer_pos < _buffer_length then return false
		if end_reached then return true
		fill_buffer
		return _buffer_pos >= _buffer_length and end_reached
	end

	# The buffer
	private var buffer: NativeString = new NativeString(0)

	# The current position in the buffer
	private var buffer_pos = 0

	# Length of the current buffer (i.e. nuber of bytes in the buffer)
	private var buffer_length = 0

	# Capacity of the buffer
	private var buffer_capacity = 0

	# Fill the buffer
	protected fun fill_buffer is abstract

	# Has the last fill_buffer reached the end
	protected fun end_reached: Bool is abstract

	# Allocate a `_buffer` for a given `capacity`.
	protected fun prepare_buffer(capacity: Int)
	do
		_buffer = new NativeString(capacity)
		_buffer_pos = 0 # need to read
		_buffer_length = 0
		_buffer_capacity = capacity
	end
end

# A `Stream` that can be written to and read from
abstract class Duplex
	super Reader
	super Writer
end

# `Stream` that can be used to write to a `String`
#
# Mainly used for compatibility with Writer type and tests.
class StringWriter
	super Writer

	private var content = new Array[String]
	redef fun to_s do return content.plain_to_s
	redef fun is_writable do return not closed

	redef fun write_bytes(b) do
		content.add(b.to_s)
	end

	redef fun write(str)
	do
		assert not closed
		content.add(str.to_s)
	end

	# Is the stream closed?
	protected var closed = false

	redef fun close do closed = true
end

# `Stream` used to read from a `String`
#
# Mainly used for compatibility with Reader type and tests.
class StringReader
	super Reader

	# The string to read from.
	var source: String

	# The current position in the string (bytewise).
	private var cursor: Int = 0

	redef fun read_char do
		if cursor < source.length then
			# Fix when supporting UTF-8
			var c = source[cursor]
			cursor += 1
			return c
		else
			return null
		end
	end

	redef fun read_byte do
		if cursor < source.length then
			var c = source.bytes[cursor]
			cursor += 1
			return c
		else
			return null
		end
	end

	redef fun close do
		source = ""
	end

	redef fun read_all_bytes do
		var nslen = source.length - cursor
		var nns = new NativeString(nslen)
		source.copy_to_native(nns, nslen, cursor, 0)
		return new Bytes(nns, nslen, nslen)
	end

	redef fun eof do return cursor >= source.bytelen
end
