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

# Stream that supports reading bytes from a source
abstract class ByteReader
	super Stream

	# Decoder used to transform input bytes to UTF-8
	var decoder: Codec = utf8_codec is writable

	# Has the stream reached the end ?
	fun eof: Bool is abstract

	# Is the source ready to be read without blocking ?
	#
	# If timeout is left to `null`, function will return immediately
	#
	# NOTE: Default behaviour is supposed Non-blocking
	fun ready(timeout: nullable Int): Bool do return true

	# Read a byte from source input
	fun read_byte: nullable Byte is abstract

	# Reads up to `max` bytes from source and stores them in `bytes`
	fun read_bytes(bytes: NativeString, max: Int): Int do
		var rd = 0
		while rd < max and ready(0) do
			var b = read_byte
			if b == null then break
			bytes[rd] = b
			rd += 1
		end
		return rd
	end

	# Reads all the content from the source until `eof` is reached
	#
	# WARNING: This can hang-up if done on a non-finishable source (i.e. stdin)
	# Take extra care when using this method.
	fun read_all_bytes: Bytes do
		var b = new Bytes.with_capacity(100)
		append_all_bytes(b)
		return b
	end

	# Appends all the next bytes from source to `b`
	#
	# WARNING: This can hang-up if done on a non-finishable source (i.e. stdin)
	# Take extra care when using this method.
	fun append_all_bytes(b: Bytes): Int do
		var bf = new NativeString(100)
		var rd = 0
		while not eof do
			rd = read_bytes(bf, 100)
			b.append_ns(bf, rd)
		end
		return rd
	end
end

# Stream supporting input/output of text
class CharStream
	super Stream
	# Codes/Decodes Nit UTF-8 Strings to/from any output format
	var codec: Codec = utf8_codec is writable
end

# Base interface for streams capable of reading chars
class Reader
	super ByteReader
	super CharStream

	redef fun codec=(c) do
		if c.max_lookahead > lookahead_capacity then
			var lk = new NativeString(codec.max_lookahead)
			var llen = lookahead_length
			if llen > 0 then
				lookahead.copy_to(lk, llen, 0, 0)
			end
			lookahead = lk
		end
		super
	end

	# Lookahead for the next char to read
	private var lookahead = new NativeString(codec.max_lookahead) is lateinit

	# Capacity of the lookahead
	private var lookahead_capacity: Int = codec.max_lookahead is lateinit

	# Length currently occupied in the lookahead
	private var lookahead_length: Int = 0

	redef fun read_byte do
		var llen = lookahead_length
		if llen == 0 then return null
		var lk = lookahead
		var b = lk[0]
		if llen == 1 then
			lookahead_length = 0
		else
			lk.lshift(1, llen - 1, 1)
			lookahead_length -= 1
		end
		return b
	end

	redef fun read_bytes(ns, max) do
		var llen = lookahead_length
		if llen == 0 then return 0
		var rd = max.min(llen)
		var lk = lookahead
		lk.copy_to(ns, rd, 0, 0)
		if rd < llen then
			lk.lshift(rd, llen - rd, rd)
			lookahead_length -= rd
		else
			lookahead_length = 0
		end
		return rd
	end

	redef fun append_all_bytes(b) do
		var rd = lookahead_length
		if rd > 0 then
			b.append_ns(lookahead, rd)
			lookahead_length = 0
		end
		return rd
	end

	# Lookahead for internal use in `read_char` only
	private var read_char_lookahead = new NativeString(codec.max_lookahead)

	# Reads a char from input source
	#
	# Returns unicode replacement character '�' if an
	# invalid byte sequence is read.
	fun read_char: nullable Char do
		var l = read_char_lookahead
		var d = codec
		var codet_sz = d.codet_size
		var b = read_bytes(l, codet_sz)
		if b < codet_sz then return null
		var ln = codet_sz
		var cap = d.max_lookahead
		var ret = d.is_valid_char(l, ln)
		while ret == 1 and ln < cap do
			if not ready then
				if ln > codet_sz then backup_to_lookahead(l.fast_cstring(codet_sz), ln - codet_sz)
				return 0xFFFD.code_point
			end
			b = read_bytes(l.fast_cstring(ln), codet_sz)
			if b < codet_sz then
				if ln > codet_sz then backup_to_lookahead(l.fast_cstring(codet_sz), ln - codet_sz)
				return 0xFFFD.code_point
			end
			ln += codet_sz
			ret = d.is_valid_char(l, ln)
		end
		if ret == 0 then
			var c = d.decode_char(l)
			var clen = c.u8char_len
			if clen < ln then
				backup_to_lookahead(l.fast_cstring(codet_sz), ln - codet_sz)
				return 0xFFFD.code_point
			end
			backup_to_lookahead(l.fast_cstring(clen), ln - clen)
			return c
		end
		if ret == 2 or ret == 1 then
			backup_to_lookahead(l.fast_cstring(codet_sz), ln - codet_sz)
			return 0xFFFD.code_point
		end
		# Should not happen if the decoder works properly
		var arr = new Array[Object]
		arr.push "Decoder error: could not decode nor recover from byte sequence ["
		for i in [0 .. ln[ do
			arr.push l[i]
			arr.push ", "
		end
		arr.push "]"
		last_error = new IOError(arr.plain_to_s)
		return 0xFFFD.code_point
	end

	private fun backup_to_lookahead(s: NativeString, ln: Int) do
		if ln <= 0 then return
		lookahead.rshift(ln, 0, ln)
		s.copy_to(lookahead, ln, 0, 0)
		lookahead_length += ln
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
		var b = new Bytes.empty
		append_all_bytes(b)
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

	redef fun eof do return lookahead_length == 0

	redef fun ready(i) do return lookahead_length != 0

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

# Writer capable of writing bytes to a destination
class ByteWriter
	super Stream

	# Write a byte to destination
	fun write_byte(b: Byte) is abstract

	# Write `ln` bytes from `ns` to a destination
	fun write_bytes(ns: NativeString, ln: Int) do
		for i in [0 .. ln[ do write_byte(ns[i])
	end

	# Can the stream be used to write
	fun is_writable: Bool is abstract
end

# Writes chars to a destination
class Writer
	super ByteWriter
	super CharStream

	# Buffer to write a char to output
	private var char_buffer = new NativeString(codec.char_max_size) is lateinit

	# Writes a char to destination
	fun write_char(c: Char) do
		var sz = codec.add_char_to(c, char_buffer)
		write_bytes(char_buffer, sz)
	end

	# Writes a whole `text` to destination
	fun write(s: Text) do
		var b = codec.encode_string(s)
		write_bytes(b.items, b.length)
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
	redef fun write_to(stream) do for i in substrings do i.write_to(stream)
end

redef class FlatText
	redef fun write_to(stream) do stream.write(self)
end

# A `Stream` that can read/write bytes from/to
abstract class ByteDuplex
	super ByteReader
	super ByteWriter
end

# A `Stream` that can read/write text from/to
abstract class Duplex
	super Reader
	super Writer
	super ByteDuplex
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

	redef fun eof do return pos >= src.length

	redef fun read_byte do
		var b = super
		if b != null then return b
		if pos < src.length then
			b = src[pos]
			pos += 1
			return b
		end
		return null
	end

	redef fun read_bytes(ns, ln) do
		var rd = super
		if rd >= ln then return rd
		ns.fast_cstring(rd)
		var nspos = 0
		var ps = pos
		var seq = src
		var max = seq.length
		while ps < max and rd < ln do
			ns[nspos] = seq[ps]
			ps += 1
			rd += 1
			nspos += 1
		end
		pos = ps
		return rd
	end

	# Is `self` closed ?
	protected var closed = false

	redef fun close do closed = true
end
