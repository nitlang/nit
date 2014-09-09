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

intrude import ropes

in "C" `{
	#include <unistd.h>
	#include <poll.h>
	#include <errno.h>
	#include <string.h>
	#include <signal.h>
`}

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
	# This function returns 'false' if there is something to read.
	fun eof: Bool is abstract
end

# IStream capable of declaring if readable without blocking
interface PollableIStream
	super IStream

	# Is there something to read? (without blocking)
	fun poll_in: Bool is abstract

end

# Abstract output stream
interface OStream
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

redef class RopeNode
	super Streamable
end

redef class Leaf

	redef fun write_to(s) do s.write(str)
end

redef class Concat

	redef fun write_to(s)
	do
		if left != null then left.write_to(s)
		if right != null then right.write_to(s)
	end
end

redef class RopeString

	redef fun write_to(s) do root.write_to(s)
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

	private fun intern_poll(in_fds: Array[Int], out_fds: Array[Int]) : nullable Int is extern import Array[Int].length, Array[Int].[], Int.as(nullable Int) `{
		int in_len, out_len, total_len;
		struct pollfd *c_fds;
		sigset_t sigmask;
		int i;
		int first_polled_fd = -1;
		int result;

		in_len = Array_of_Int_length( in_fds );
		out_len = Array_of_Int_length( out_fds );
		total_len = in_len + out_len;
		c_fds = malloc( sizeof(struct pollfd) * total_len );

		/* input streams */
		for ( i=0; i<in_len; i ++ ) {
			int fd;
			fd = Array_of_Int__index( in_fds, i );

			c_fds[i].fd = fd;
			c_fds[i].events = POLLIN;
		}

		/* output streams */
		for ( i=0; i<out_len; i ++ ) {
			int fd;
			fd = Array_of_Int__index( out_fds, i );

			c_fds[i].fd = fd;
			c_fds[i].events = POLLOUT;
		}

		/* poll all fds, unlimited timeout */
		result = poll( c_fds, total_len, -1 );

		if ( result > 0 ) {
			/* analyse results */
			for ( i=0; i<total_len; i++ )
				if ( c_fds[i].revents & c_fds[i].events || /* awaited event */
					 c_fds[i].revents & POLLHUP ) /* closed */
				{
					first_polled_fd = c_fds[i].fd;
					break;
				}

			return Int_as_nullable( first_polled_fd );
		}
		else if ( result < 0 )
			fprintf( stderr, "Error in Stream:poll: %s\n", strerror( errno ) );

		return null_Int();
	`}
end

# Stream to a String. Mainly used for compatibility with OStream type and tests.
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

	protected var closed = false
	redef fun close do closed = true
end
