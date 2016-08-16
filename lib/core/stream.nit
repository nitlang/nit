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
intrude import text::ropes
intrude import bytes
import codecs

in "C" `{
	#include <unistd.h>
	#include <string.h>
	#include <signal.h>
`}

# Size of a page (used as buffer for I/O)
fun page_size: Int do return 4096

# Any kind of error that could be produced by an operation on Streams
class IOError
	super Error
end

# Any kind of stream to read/write/both to or from a source
abstract class Stream

	# The last recorded error when using `self`
	#
	# `null` if none has been recorded
	var last_error: nullable IOError = null

	# Closes the stream
	fun close is abstract

	# Codes/decodes I/O when reading/writing textual data
	var codec: Codec = utf8_codec is writable

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
	# Is automatically invoked at the end of `woth` structures.
	#
	# call `close` by default.
	fun finish do close
end

# Stream that supports reading bytes/chars from a source
abstract class Reader
	super Stream

	# Lookahead for the next char to read
	protected var lookahead = new NativeString(page_size)

	# Capacity of the lookahead
	protected var lookahead_capacity: Int = page_size

	# Length currently occupied in the lookahead
	protected var lookahead_length: Int = 0

	# Position of the cursor in lookahead
	protected var lookahead_position: Int = 0

	# Reads up to `max` bytes directly from source and stores them in `bytes`
	protected fun raw_read_bytes(bytes: NativeString, max: Int): Int is abstract

	# Reads at most one byte directly from source
	protected fun raw_read_byte: nullable Int is abstract

	# Is the source ready to be read without blocking ?
	#
	# If timeout is left to `null`, function will return immediately
	#
	# NOTE: Default behaviour is supposed Non-blocking
	fun ready(timeout: nullable Int): Bool do return lookahead_length != 0

	# Has the stream reached the end ?
	#
	# NOTE: `eof` may block on continuous streams
	fun eof: Bool do
		if lookahead_length != 0 then return false
		var b = raw_read_byte
		if b == null then return true
		lookahead[lookahead_position + lookahead_length] = b.to_b
		lookahead_length += 1
		return false
	end

	# Reads a byte from source
	#
	# NOTE: May block until a byte is read from source
	# NOTE: For implementers of a new subclass of `Reader`, you must
	# implement `raw_read_byte` to handle directly from the source.
	# `read_byte` will take care of previous lookahead buffers and such.
	fun read_byte: nullable Int do
		if eof then return null
		var b = lookahead[lookahead_position]
		lookahead_length -= 1
		if lookahead_length == 0 then
			lookahead_position = 0
		else
			lookahead_position += 1
		end
		return b.to_i
	end

	# Reads at most `max` bytes from source
	#
	# NOTE: May block until at least one byte is read from source.
	# NOTE: For implementers of a new subclass of `Reader`, you must
	# implement `raw_read_bytes` to handle directly from the source.
	# `read_bytes` will take care of previous lookahead buffers and such.
	fun read_bytes(max_length: Int): Bytes do
		var ret = new Bytes.with_capacity(max_length)
		var rd = read_bytes_native(ret.items, max_length)
		ret.length = rd
		return ret
	end

	# Reads up to `max` bytes from source and stores them in `bytes`
	#
	# NOTE: May block until at least one byte is read from source.
	# NOTE: For implementers of a new subclass of `Reader`, you must
	# implement `raw_read_bytes` to handle directly from the source.
	# `read_bytes_native` will take care of previous lookahead buffers
	# and such.
	fun read_bytes_native(bytes: NativeString, max: Int): Int do
		if eof then return 0
		var llen = lookahead_length
		var rd = max.min(llen)
		var lk = lookahead
		lk.copy_to(bytes, rd, lookahead_position, 0)
		lookahead_length -= rd
		if lookahead_length == 0 then
			lookahead_position = 0
		else
			lookahead_position += rd
		end
		if rd < max and ready then rd += raw_read_bytes(bytes.fast_cstring(rd), max - rd)
		return rd
	end

	# Reads all the content from the source until `eof` is reached
	#
	# WARNING: This can hang if done on a non-finishable source (i.e. stdin)
	# Take extra care when using this method.
	fun read_all_bytes: Bytes do
		var b = new Bytes.with_capacity(page_size)
		append_all_bytes(b)
		return b
	end

	# Appends all the next bytes from source to `b`
	#
	# WARNING: This can hang-up if done on a non-finishable source (i.e. stdin)
	# Take extra care when using this method.
	fun append_all_bytes(b: Bytes): Int do
		var lk = lookahead
		b.append_ns(lk.fast_cstring(lookahead_position), lookahead_length)
		lookahead_length = 0
		var rd = 0
		var sz = page_size
		while not eof do
			# The +/-1 are necessary due to `eof` pre-emptively
			# reading one byte and storing it in `lookahead`
			rd = raw_read_bytes(lk.fast_cstring(1), sz - 1)
			b.append_ns(lk, rd + 1)
			lookahead_length = 0
			lookahead_position = 0
		end
		return rd
	end

	# Appends at most `max` bytes from `self` to `b`
	fun append_bytes(b: Bytes, max: Int): Int do
		b.enlarge(b.length + max)
		var ons = b.items.fast_cstring(b.length)
		var rd = read_bytes_native(ons, max)
		b.length += rd
		return rd
	end

	# Reads a char from input source
	#
	# Returns unicode replacement character '�' if an
	# invalid byte sequence is read.
	fun read_char: nullable Char do
		if eof then return null
		var cod = codec
		var codet_sz = cod.codet_size
		var lk = lookahead.fast_cstring(lookahead_position)
		var llen = lookahead_length
		if llen < codet_sz then llen += raw_read_bytes(lk.fast_cstring(llen), codet_sz - llen)
		if llen < codet_sz then
			lookahead_length = 0
			lookahead_position = 0
			return 0xFFFD.code_point
		end
		var ret = cod.is_valid_char(lk, codet_sz)
		var max_llen = cod.max_lookahead
		while ret == 1 and llen < max_llen do
			if not ready then
				if llen >= codet_sz then
					llen -= codet_sz
				else
					llen = 0
				end
				if llen == 0 then
					lookahead_position = 0
				else
					lookahead_position += codet_sz
				end
				lookahead_length = llen
				return 0xFFFD.code_point
			end
			var rd = raw_read_bytes(lk.fast_cstring(llen), codet_sz)
			if rd < codet_sz then
				llen -= codet_sz
				if llen == 0 then
					lookahead_position = 0
				else
					lookahead_position += codet_sz
				end
				lookahead_length = llen
				return 0xFFFD.code_point
			end
			llen += codet_sz
			ret = cod.is_valid_char(lk, llen)
		end
		if ret == 0 then
			var c = cod.decode_char(lk)
			var clen = c.u8char_len
			if clen < llen then
				llen -= codet_sz
				if llen == 0 then
					lookahead_position = 0
				else
					lookahead_position += codet_sz
				end
				lookahead_length = llen
				return 0xFFFD.code_point
			end
			llen -= clen
			if llen == 0 then
				lookahead_position = 0
			else
				lookahead_position += clen
			end
			lookahead_length = llen
			return c
		end
		if ret == 2 or ret == 1 then
			llen -= codet_sz
			if llen == 0 then
				lookahead_position = 0
			else
				lookahead_position += codet_sz
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

	# Read a string until the end of the line.
	#
	# The line terminator '\n' and '\r\n', if any, is removed in each line.
	#
	# ~~~
	# var txt = "Hello\n\nWorld\n"
	# var i = new MemoryReader.from_str(txt)
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
	# var i2 = new MemoryReader.from_str(txt2)
	# assert i2.read_line == "Hello"
	# assert i2.read_line == ""
	# assert i2.read_line == "\rWorld"
	# assert i2.eof
	# ~~~
	#
	# NOTE: Use `append_line_to` if the line terminator needs to be preserved.
	fun read_line: String do
		var s = new Buffer
		var c = read_char
		while c != null do
			s.add c
			if c == '\n' then break
			c = read_char
		end
		return s.to_s.chomp
	end

	# Reads all the content of a stream as a String
	#
	# ~~~
	# var txt = "Hello\n\nWorld\n"
	# var i = new MemoryReader.from_str(txt)
	# assert i.read_all == txt
	# ~~~
	fun read_all: String do
		var b = read_all_bytes
		return codec.decode_string(b.items, b.length)
	end

	# Read all the lines until the eof.
	#
	# The line terminator '\n' and `\r\n` is removed in each line,
	#
	# ~~~
	# var txt = "Hello\n\nWorld\n"
	# var i = new MemoryReader.from_str(txt)
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
		for i in each_line do res.add i
		return res
	end

	# Return an iterator that read each line.
	#
	# The line terminator '\n' and `\r\n` is removed in each line,
	# The line are read with `read_line`. See this method for details.
	#
	# ~~~
	# var txt = "Hello\n\nWorld\n"
	# var i = new MemoryReader.from_str(txt)
	# assert i.each_line.to_a == ["Hello", "", "World"]
	# ~~~
	#
	# Unlike `read_lines` that read all lines at the call, `each_line` is lazy.
	# Therefore, the stream should no be closed until the end of the stream.
	#
	# ~~~
	# i = new MemoryReader.from_str(txt)
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
	# FIXME
	fun each_line: LineIterator do return new LineIterator(self)

	# Read a string until the end of the line and append it to `s`.
	#
	# Unlike `read_line` and other related methods,
	# the line terminator '\n', if any, is preserved in each line.
	# Use the method `Text::chomp` to safely remove it.
	#
	# ~~~
	# var txt = "Hello\n\nWorld\n"
	# var i = new MemoryReader.from_str(txt)
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
	# var i2 = new MemoryReader.from_str("hello")
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

	# Reads a String of at most `i` length
	fun read(i: Int): String do
		var c = read_char
		if c == null then return ""
		var b = new FlatBuffer
		b.add(c)
		var ln = 1
		while ln < i and ready do
			c = read_char
			if c == null then break
			b.add c
			ln += 1
		end
		return b.to_s
	end


	# Read the next sequence of non whitespace characters.
	#
	# Leading whitespace characters are skipped.
	# The first whitespace character that follows the result is consumed.
	#
	# An empty string is returned if the end of the file or an error is encounter.
	#
	# ~~~
	# var w = new MemoryReader.from_str(" Hello, \n\t World!")
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
	# var w = new MemoryReader.from_str(" \nab\tc")
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
		if line == null then line = stream.read_line
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

# Writer capable of writing bytes or text to a destination
abstract class Writer
	super Stream

	# Write a byte to destination
	fun write_byte(b: Byte) is abstract

	# Write `ln` bytes from `ns` to a destination
	fun write_bytes(ns: NativeString, ln: Int) do
		for i in [0 .. ln[ do write_byte(ns[i])
	end

	# Can the stream be used to write
	fun is_writable: Bool is abstract

	# Buffer to write a char to output
	private var char_buffer = new NativeString(20)

	# Writes a char to destination
	fun write_char(c: Char) do
		var sz = codec.add_char_to(c, char_buffer)
		write_bytes(char_buffer, sz)
	end

	# Writes a whole `text` to destination
	fun write(s: Text) do
		s.write_to self
	end

	# Fast track for `FlatTexts`
	private fun write_flat(ss: FlatText) do
		var len = once new Ref[Int](ss.byte_length)
		len.item = ss.byte_length
		var to_write = codec.fast_encode(ss, len)
		write_bytes(to_write, len.item)
	end

	# Write `s` to destination with a `\n`
	fun write_line(s: Text) do
		write(s)
		write_char('\n')
	end
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
	# of streamable objects is to be efficienlty written to a
	# stream without having to allocate and concatenate strings
	fun write_to_string: String do
		var stream = new MemoryWriter
		write_to(stream)
		return stream.to_s
	end
end

redef class Bytes
	super Writable
	redef fun write_to(s) do s.write_bytes(items, length)

	redef fun write_to_string do return to_s
end

redef class Text
	super Writable
	redef fun write_to(stream) do for i in substrings do stream.write_flat(i)
end

redef class Concat
	redef fun write_to(stream) do
		left.write_to(stream)
		right.write_to(stream)
	end
end

redef class FlatText
	redef fun write_to(stream) do stream.write_flat(self)
end

# A `Stream` that can read/write bytes or text from/to
abstract class Duplex
	super Reader
	super Writer
end

# `Stream` to write bytes or `Text` in memory
#
# Mainly used for compatibility with Writer type and tests.
class MemoryWriter
	super Writer

	# Where the bytes will be written
	var src = new Bytes.empty

	# Create a new MemoryWriter with the content of a Text
	init from(t: Text) do
		src = new Bytes.with_capacity(t.byte_length)
		src.append_text(t)
	end

	redef fun is_writable do return true

	# Is the stream closed?
	protected var closed = false

	redef fun close do closed = true

	redef fun write_byte(b) do src.add b

	redef fun write_bytes(ns, ln) do src.append_ns(ns, ln)

	# Returns the content of `self` as a `String`
	redef fun to_s do return src.to_s
end

# `Stream` used to read from a `String`
#
# Mainly used for compatibility with Reader type and tests.
class MemoryReader
	super Reader

	# Standard constructor with a `Text` object as only parameter
	init from_str(s: Text) do init(s.bytes)

	# Where the bytes will be read from
	var src: SequenceRead[Byte]

	# Position in source
	private var pos = 0

	redef fun ready(timeout) do return eof

	redef fun eof do return closed or pos >= src.length

	redef fun raw_read_byte do
		if closed then return null
		if pos < src.length then
			var b = src[pos]
			pos += 1
			return b.to_i
		end
		return null
	end

	redef fun raw_read_bytes(ns, ln) do
		if closed then return 0
		var s = src
		var rd = ln.min(s.length - pos)
		var ipos = pos
		for i in [0 .. rd[ do
			ns[i] = s[ipos]
			ipos += 1
		end
		pos = ipos
		return rd
	end

	# Is `self` closed ?
	protected var closed = false

	redef fun close do closed = true
end
