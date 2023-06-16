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

import error
intrude import bytes
import codecs

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
	# Codec used to transform raw data to text
	#
	# Note: defaults to UTF-8
	var codec: Codec = utf8_codec is protected writable(set_codec)

	# Lookahead buffer for codecs
	#
	# Since some codecs are multibyte, a lookahead may be required
	# to store the next bytes and consume them only if a valid character
	# is read.
	protected var lookahead: CString is noinit

	# Capacity of the lookahead
	protected var lookahead_capacity = 0

	# Current occupation of the lookahead
	protected var lookahead_length = 0

	# Buffer for writing data to a stream
	protected var write_buffer: CString is noinit

	init do
		var lcap = codec.max_lookahead
		lookahead = new CString(lcap)
		write_buffer = new CString(lcap)
		lookahead_length = 0
		lookahead_capacity = lcap
	end

	# Change the codec for this stream.
	fun codec=(c: Codec) do
		if c.max_lookahead > lookahead_capacity then
			var lcap = codec.max_lookahead
			var lk = new CString(lcap)
			var llen = lookahead_length
			if llen > 0 then
				lookahead.copy_to(lk, llen, 0, 0)
			end
			lookahead = lk
			lookahead_capacity = lcap
			write_buffer = new CString(lcap)
		end
		set_codec(c)
	end

	# Error produced by the file stream
	#
	#     var ifs = new FileReader.open("donotmakethisfile.binx")
	#     ifs.read_all
	#     ifs.close
	#     assert ifs.last_error != null
	var last_error: nullable IOError = null

	# close the stream
	fun close is abstract

	# Pre-work hook.
	#
	# Used to inform `self` that operations will start.
	# Specific streams can use this to prepare some resources.
	#
	# Is automatically invoked at the beginning of `with` structures.
	#
	# Do nothing by default.
	fun start do end

	# Post-work hook.
	#
	# Used to inform `self` that the operations are over.
	# Specific streams can use this to free some resources.
	#
	# Is automatically invoked at the end of `with` structures.
	#
	# call `close` by default.
	fun finish do close
end

# A `Stream` that can be read from
abstract class Reader
	super Stream

	# Read a byte directly from the underlying stream, without
	# considering any eventual buffer
	protected fun raw_read_byte: Int is abstract

	# Read at most `max` bytes from the underlying stream into `buf`,
	# without considering any eventual buffer
	#
	# Returns how many bytes were read
	protected fun raw_read_bytes(buf: CString, max: Int): Int do
		var rd = 0
		for i in [0 .. max[ do
			var b = raw_read_byte
			if b < 0 then break
			buf[i] = b
			rd += 1
		end
		return rd
	end

	# Reads a character. Returns `null` on EOF or timeout
	#
	# Returns unicode replacement character '�' if an
	# invalid byte sequence is read.
	#
	# `read_char` may block if:
	#
	# * No byte could be read from the current buffer
	# * An incomplete char is partially read, and more bytes are
	#   required for full decoding.
	fun read_char: nullable Char do
		if eof then return null
		var cod = codec
		var codet_sz = cod.codet_size
		var lk = lookahead
		var llen = lookahead_length
		if llen < codet_sz then
			llen += raw_read_bytes(lk.fast_cstring(llen), codet_sz - llen)
		end
		if llen < codet_sz then
			lookahead_length = 0
			return 0xFFFD.code_point
		end
		var ret = cod.is_valid_char(lk, codet_sz)
		var max_llen = cod.max_lookahead
		while ret == 1 and llen < max_llen do
			var rd = raw_read_bytes(lk.fast_cstring(llen), codet_sz)
			if rd < codet_sz then
				llen -= codet_sz
				if llen > 0 then
					lookahead.lshift(codet_sz, llen, codet_sz)
				end
				lookahead_length = llen.max(0)
				return 0xFFFD.code_point
			end
			llen += codet_sz
			ret = cod.is_valid_char(lk, llen)
		end
		if ret == 0 then
			var c = cod.decode_char(lk)
			var clen = c.u8char_len
			llen -= clen
			if llen > 0 then
				lookahead.lshift(clen, llen, clen)
			end
			lookahead_length = llen
			return c
		end
		if ret == 2 or ret == 1 then
			llen -= codet_sz
			if llen > 0 then
				lookahead.lshift(codet_sz, llen, codet_sz)
			end
			lookahead_length = llen
			return 0xFFFD.code_point
		end
		# Should not happen if the decoder works properly
		var arr = new Array[Object]
		arr.push "Decoder error: could not decode nor recover from byte sequence ["
		for i in [0 .. llen[ do
			arr.push lk[i]
			arr.push ", "
		end
		arr.push "]"
		var err = new IOError(arr.plain_to_s)
		err.cause = last_error
		last_error = err
		return 0xFFFD.code_point
	end

	# Reads a byte. Returns a negative value on error
	fun read_byte: Int do
		var llen = lookahead_length
		if llen == 0 then return raw_read_byte
		var lk = lookahead
		var b = lk[0].to_i
		if llen == 1 then
			lookahead_length = 0
		else
			lk.lshift(1, llen - 1, 1)
			lookahead_length -= 1
		end
		return b
	end

	# Reads a String of at most `i` length
	fun read(i: Int): String do
		assert i >= 0
		var cs = new CString(i)
		var rd = read_bytes_to_cstring(cs, i)
		if rd < 0 then return ""
		return codec.decode_string(cs, rd)
	end

	# Reads up to `max` bytes from source
	fun read_bytes(max: Int): Bytes do
		assert max >= 0
		var cs = new CString(max)
		var rd = read_bytes_to_cstring(cs, max)
		return new Bytes(cs, rd, max)
	end

	# Reads up to `max` bytes from source and stores them in `bytes`
	fun read_bytes_to_cstring(bytes: CString, max: Int): Int do
		var llen = lookahead_length
		if llen == 0 then return raw_read_bytes(bytes, max)
		var rd = max.min(llen)
		var lk = lookahead
		lk.copy_to(bytes, rd, 0, 0)
		if rd < llen then
			lk.lshift(rd, llen - rd, rd)
			lookahead_length -= rd
		else
			lookahead_length = 0
		end
		return rd + raw_read_bytes(bytes.fast_cstring(rd), max - rd)
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
	# When `max` is given, it indicates the maximum number of read bytes (including \n).
	#
	# ~~~
	# txt = "Hello\nWorld"
	# i = new StringReader(txt)
	# assert i.read_line(50) == "Hello"
	# assert i.read_line(2) == "Wo"
	# ~~~
	#
	# NOTE: Use `append_line_to` if the line terminator needs to be preserved.
	fun read_line(max: nullable Int): String
	do
		if last_error != null then return ""
		if eof then return ""
		var s = new FlatBuffer
		append_line_to(s, max)
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
	fun read_all: String do
		var s = read_all_bytes
		var slen = s.length
		if slen == 0 then return ""
		return codec.decode_string(s.items, s.length)
	end

	# Read all the stream until the eof.
	#
	# The content of the file is returned verbatim.
	fun read_all_bytes: Bytes
	do
		if last_error != null then return new Bytes.empty
		var s = new Bytes.empty
		var buf = new CString(4096)
		while not eof do
			var rd = read_bytes_to_cstring(buf, 4096)
			s.append_ns(buf, rd)
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
	# when `max` is given it is the maximum of characters to read.
	#
	# ~~~
	# txt = "Hello\nWorld\n"
	# i = new StringReader(txt)
	# b = new FlatBuffer
	# i.append_line_to(b, 50)
	# assert b == "Hello\n"
	# i.append_line_to(b, 2)
	# assert b == "Hello\nWo"
	# ~~~
	#
	# If `\n` is not present at the end of the result, it means that
	# a non-eol terminated last line was returned or that `max` characters where read.
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
	fun append_line_to(s: Buffer, max: nullable Int)
	do
		if last_error != null then return
		loop
			if max != null then
				if max <= 0 then return
				max -= 1
			end
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
	fun eof: Bool do
		if lookahead_length > 0 then return false
		lookahead_length = raw_read_bytes(lookahead, 1)
		return lookahead_length <= 0
	end

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
	# assert w.read_char == '\n'
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
	super CachedIterator[String]

	# The original stream
	var stream: Reader

	redef fun next_item
	do
		if stream.eof then
			if close_on_finish then stream.close
			return null
		end
		return stream.read_line
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

	# Write bytes from `s`
	fun write_bytes(s: Bytes) do write_bytes_from_cstring(s.items, s.length)

	# Write `len` bytes from `ns`
	fun write_bytes_from_cstring(ns: CString, len: Int) is abstract

	# Write a string
	fun write(s: Text) is abstract

	# Write a single byte
	fun write_byte(value: Int) is abstract

	# Write a single char
	fun write_char(c: Char) do
		var ln = codec.add_char_to(c, write_buffer)
		write_bytes_from_cstring(write_buffer, ln)
	end

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

	# Like `write_to` but return a new String (may be quite large).
	#
	# This functionality is anecdotal, since the point
	# of a streamable object is to be efficiently written to a
	# stream without having to allocate and concatenate strings.
	fun write_to_string: String
	do
		var stream = new StringWriter
		write_to(stream)
		return stream.to_s
	end

	# Like `write_to` but return a new Bytes (may be quite large)
	#
	# This functionality is anecdotal, since the point
	# of a streamable object is to be efficiently written to a
	# stream without having to allocate and concatenate buffers.
	#
	# Nevertheless, you might need this method if you want to know
	# the byte size of a writable object.
	fun write_to_bytes: Bytes
	do
		var stream = new BytesWriter
		write_to(stream)
		return stream.bytes
	end
end

redef class Bytes
	super Writable
	redef fun write_to(s) do s.write_bytes(self)

	redef fun write_to_string do return to_s
end

redef class Text
	super Writable
	redef fun write_to(stream) do stream.write(self)
end

# A `Stream` that can be written to and read from
abstract class Duplex
	super Reader
	super Writer
end

# Write to `bytes` in memory
#
# ~~~
# var writer = new BytesWriter
#
# writer.write "Strings "
# writer.write_char '&'
# writer.write_byte 0x20
# writer.write_bytes "bytes".to_bytes
#
# assert writer.to_s == "\\x53\\x74\\x72\\x69\\x6E\\x67\\x73\\x20\\x26\\x20\\x62\\x79\\x74\\x65\\x73"
# assert writer.bytes.to_s == "Strings & bytes"
# ~~~
#
# As with any binary data, UTF-8 code points encoded on two bytes or more
# can be constructed byte by byte.
#
# ~~~
# writer = new BytesWriter
#
# # Write just the character first half
# writer.write_byte 0xC2
# assert writer.to_s == "\\xC2"
# assert writer.bytes.to_s == "�"
#
# # Complete the character
# writer.write_byte 0xA2
# assert writer.to_s == "\\xC2\\xA2"
# assert writer.bytes.to_s == "¢"
# ~~~
class BytesWriter
	super Writer

	# Written memory
	var bytes = new Bytes.empty

	redef fun to_s do return bytes.chexdigest

	redef fun write(str)
	do
		if closed then return
		str.append_to_bytes bytes
	end

	redef fun write_char(c)
	do
		if closed then return
		bytes.add_char c
	end

	redef fun write_byte(value)
	do
		if closed then return
		bytes.add value
	end

	redef fun write_bytes_from_cstring(ns, len) do
		if closed then return
		bytes.append_ns(ns, len)
	end

	# Is the stream closed?
	protected var closed = false

	redef fun close do closed = true
	redef fun is_writable do return not closed
end

# `Stream` writing to a `String`
#
# This class has the same behavior as `BytesWriter`
# except for `to_s` which decodes `bytes` to a string.
#
# ~~~
# var writer = new StringWriter
#
# writer.write "Strings "
# writer.write_char '&'
# writer.write_byte 0x20
# writer.write_bytes "bytes".to_bytes
#
# assert writer.to_s == "Strings & bytes"
# ~~~
class StringWriter
	super BytesWriter

	redef fun to_s do return bytes.to_s
end

# Read from `bytes` in memory
#
# ~~~
# var reader = new BytesReader(b"a…b")
# assert reader.read_char == 'a'
# assert reader.read_byte == 0xE2 # 1st byte of '…'
# assert reader.read_byte == 0x80 # 2nd byte of '…'
# assert reader.read_char == '�' # Reads the last byte as an invalid char
# assert reader.read_all_bytes == b"b"
# ~~~
class BytesReader
	super Reader

	# Source data to read
	var bytes: Bytes

	# The current position in `bytes`
	private var cursor = 0

	redef fun raw_read_byte
	do
		if cursor >= bytes.length then return -1

		var c = bytes[cursor]
		cursor += 1
		return c.to_i
	end

	redef fun close do bytes = new Bytes.empty

	redef fun read_all_bytes
	do
		var res = bytes.slice_from(cursor)
		cursor = bytes.length
		return res
	end

	redef fun raw_read_bytes(ns, max) do
		if cursor >= bytes.length then return 0

		var copy = max.min(bytes.length - cursor)
		bytes.items.copy_to(ns, copy, cursor, 0)
		cursor += copy
		return copy
	end

	redef fun eof do return cursor >= bytes.length
end

# `Stream` reading from a `String` source
#
# This class has the same behavior as `BytesReader`
# except for its constructor accepting a `String`.
#
# ~~~
# var reader = new StringReader("a…b")
# assert reader.read_char == 'a'
# assert reader.read_byte == 0xE2 # 1st byte of '…'
# assert reader.read_byte == 0x80 # 2nd byte of '…'
# assert reader.read_char == '�' # Reads the last byte as an invalid char
# assert reader.read_all == "b"
# ~~~
class StringReader
	super BytesReader

	autoinit source

	# Source data to read
	var source: String

	init do bytes = source.to_bytes

	redef fun close
	do
		source = ""
		super
	end
end
