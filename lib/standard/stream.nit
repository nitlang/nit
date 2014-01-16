# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Input and output streams of characters
module stream

import flat

# Abstract stream class
interface IOS
	# close the stream
	fun close is abstract
end

# Abstract input streams
interface IStream
	super IOS
	# Read a character. Return its ASCII value, -1 on EOF or timeout
	fun read_char: Int is abstract

	# Read at most i bytes
	fun read(i: Int): String
	do
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
	fun read_line: String
	do
		assert not eof
		var s = new FlatBuffer
		append_line_to(s)
		return s.to_s
	end

	# Read all the stream until the eof.
	fun read_all: String
	do
		var s = new FlatBuffer
		while not eof do
			var c = read_char
			if c >= 0 then s.add(c.ascii)
		end
		return s.to_s
	end

	# Read a string until the end of the line and append it to `s`.
	fun append_line_to(s: Buffer)
	do
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
	fun eof: Bool is abstract
end

# Abstract output stream
interface OStream
	super IOS
	# write a string
	fun write(s: String) is abstract

	# Can the stream be used to write
	fun is_writable: Bool is abstract
end

# Input streams with a buffer
abstract class BufferedIStream
	super IStream
	redef fun read_char
	do
		assert not eof
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
		var s = new FlatBuffer.with_capacity(i)
		var j = _buffer_pos
		var k = _buffer.length
		while i > 0 do
			if j >= k then
				fill_buffer
				if eof then return s.to_s
				j = _buffer_pos
				k = _buffer.length
			end
			while j < k and i > 0 do
				s.add(_buffer.chars[j])
				j +=  1
				i -= 1
			end
		end
		_buffer_pos = j
		return s.to_s
	end

	redef fun read_all
	do
		var s = new FlatBuffer
		while not eof do
			var j = _buffer_pos
			var k = _buffer.length
			while j < k do
				s.add(_buffer.chars[j])
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
				if s isa FlatBuffer then s.enlarge(s.length + i - _buffer_pos)

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
	var _buffer: nullable FlatBuffer = null

	# The current position in the buffer
	var _buffer_pos: Int = 0

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

interface IOStream
	super IStream
	super OStream
end

##############################################################"

abstract class FDStream
	super IOS
	# File description
	var fd: Int

	redef fun close do native_close(fd)

	private fun native_close(i: Int): Int is extern "stream_FDStream_FDStream_native_close_1"
	private fun native_read_char(i: Int): Int is extern "stream_FDStream_FDStream_native_read_char_1"
	private fun native_read(i: Int, buf: NativeString, len: Int): Int is extern "stream_FDStream_FDStream_native_read_3"
	private fun native_write(i: Int, buf: NativeString, len: Int): Int is extern "stream_FDStream_FDStream_native_write_3"
	private fun native_write_char(i: Int, c: Char): Int is extern "stream_FDStream_FDStream_native_write_char_2"

	init(fd: Int) do self.fd = fd
end

class FDIStream
	super FDStream
	super IStream
	redef var eof: Bool = false
	
	redef fun read_char
	do
		var nb = native_read_char(fd)
		if nb == -1 then eof = true
		return nb
	end

	init(fd: Int) do end 
end

class FDOStream
	super FDStream
	super OStream
	redef var is_writable: Bool

	redef fun write(s)
	do
		var nb = native_write(fd, s.to_cstring, s.length)
		if nb < s.length then is_writable = false
	end

	init(fd: Int)
	do
		is_writable = true
	end
end

class FDIOStream
	super FDIStream
	super FDOStream
	super IOStream
	init(fd: Int)
	do
		self.fd = fd
		is_writable = true
	end
end

redef interface Object
	# returns first available stream to read or write to
	# return null on interruption (possibly a signal)
	protected fun poll( streams : Sequence[FDStream] ) : nullable FDStream
	do
		var in_fds = new Array[Int]
		var out_fds = new Array[Int]
		var fd_to_stream = new HashMap[Int,FDStream]
		for s in streams do
			var fd = s.fd
			if s isa FDIStream then in_fds.add( fd )
			if s isa FDOStream then out_fds.add( fd )

			fd_to_stream[fd] = s
		end

		var polled_fd = intern_poll( in_fds, out_fds )

		if polled_fd == null then
			return null
		else
			return fd_to_stream[polled_fd]
		end
	end

	private fun intern_poll( in_fds : Array[Int], out_fds : Array[Int] ) : nullable Int is extern import Array::length, Array::[], nullable Object as ( Int ), Int as nullable
end
