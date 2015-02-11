# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Matthieu Lucas <lucasmatthieu@gmail.com>
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

# Socket services
module socket

private import socket_c
intrude import standard::stream

# A general TCP socket, either a `TCPStream` or a `TCPServer`
abstract class Socket

	# Underlying C socket
	private var socket: NativeSocket is noinit

	# Port used by the socket
	var port: Int

	# IPv4 address to which `self` is connected
	#
	# Formatted as xxx.xxx.xxx.xxx.
	var address: String is noinit

	# Is this socket closed?
	var closed = false
end

# Simple communication stream with a remote socket
class TCPStream
	super Socket
	super BufferedReader
	super Writer
	super PollableReader

	# Real canonical name of the host to which `self` is connected
	var host: String

	private var addrin: NativeSocketAddrIn is noinit

	redef var end_reached = false

	# TODO make init private

	# Creates a socket connection to host `host` on port `port`
	init connect(host: String, port: Int)
	do
		_buffer = new FlatBuffer
		_buffer_pos = 0
		socket = new NativeSocket.socket(new NativeSocketAddressFamilies.af_inet,
			new NativeSocketTypes.sock_stream, new NativeSocketProtocolFamilies.pf_null)
		if socket.address_is_null then
			end_reached = true
			closed = true
			return
		end
		if not socket.setsockopt(new NativeSocketOptLevels.socket, new NativeSocketOptNames.reuseaddr, 1) then
			end_reached = true
			closed = true
			return
		end
		var hostname = socket.gethostbyname(host)
		addrin = new NativeSocketAddrIn.with_hostent(hostname, port)

		address = addrin.address
		init(addrin.port, hostname.h_name)

		closed = not internal_connect
		end_reached = closed
	end

	# Creates a client socket, this is meant to be used by accept only
	private init server_side(h: SocketAcceptResult)
	do
		_buffer = new FlatBuffer
		_buffer_pos = 0
		socket = h.socket
		addrin = h.addr_in
		address = addrin.address

		init(addrin.port, address)
	end

	redef fun poll_in do return ready_to_read(0)

	# Returns an array containing an enum of the events ready to be read
	#
	# event_types : Combination of several event types to watch
	#
	# timeout : Time in milliseconds before stopping listening for events on this socket
	private fun pollin(event_types: Array[NativeSocketPollValues], timeout: Int): Array[NativeSocketPollValues] do
		if end_reached then return new Array[NativeSocketPollValues]
		return socket.socket_poll(new PollFD(socket.descriptor, event_types), timeout)
	end

	# Easier use of pollin to check for something to read on all channels of any priority
	#
	# timeout : Time in milliseconds before stopping to wait for events
	fun ready_to_read(timeout: Int): Bool
	do
		if _buffer_pos < _buffer.length then return true
		if end_reached then return false
		var events = [new NativeSocketPollValues.pollin]
		return pollin(events, timeout).length != 0
	end

	# Checks if the socket still is connected
	fun connected: Bool
	do
		if closed then return false
		var events = [new NativeSocketPollValues.pollhup, new NativeSocketPollValues.pollerr]
		if pollin(events, 0).length == 0 then
			return true
		else
			closed = true
			return false
		end
	end

	redef fun is_writable do return not end_reached

	# Establishes a connection to socket addrin
	#
	# REQUIRES : not self.end_reached
	private fun internal_connect: Bool
	do
		assert not closed
		return socket.connect(addrin) >= 0
	end

	# If socket.end_reached, nothing will happen
	redef fun write(msg: Text)
	do
		if closed then return
		socket.write(msg.to_s)
	end

	fun write_ln(msg: Text)
	do
		if end_reached then return
		write(msg.to_s)
		write("\n")
	end

	redef fun fill_buffer
	do
		_buffer.clear
		_buffer_pos = 0
		if not connected then return
		var read = socket.read
		if read.length == 0 then
			close
			end_reached = true
		end
		_buffer.append(read)
	end

	redef fun close
	do
		if closed then return
		if socket.close >= 0 then
			closed = true
			end_reached = true
		end
	end

	# Send the data present in the socket buffer
	fun flush
	do
		if not socket.setsockopt(new NativeSocketOptLevels.tcp, new NativeSocketOptNames.tcp_nodelay, 1) or
		   not socket.setsockopt(new NativeSocketOptLevels.tcp, new NativeSocketOptNames.tcp_nodelay, 0) then
			closed = true
		end
	end
end

# A socket listening on a given `port` for incomming connections
#
# Create streams to communicate with clients using `accept`.
class TCPServer
	super Socket

	private var addrin: NativeSocketAddrIn is noinit

	# Create and bind a listening server socket on port `port`
	init
	do
		socket = new NativeSocket.socket(new NativeSocketAddressFamilies.af_inet,
			new NativeSocketTypes.sock_stream, new NativeSocketProtocolFamilies.pf_null)
		assert not socket.address_is_null
		if not socket.setsockopt(new NativeSocketOptLevels.socket, new NativeSocketOptNames.reuseaddr, 1) then
			closed = true
			return
		end
		addrin = new NativeSocketAddrIn.with(port, new NativeSocketAddressFamilies.af_inet)
		address = addrin.address

		# Bind it
		closed = not bind
	end

	# Associates the socket to a local address and port
	#
	# Returns whether the socket has been be bound.
	private fun bind: Bool do
		return socket.bind(addrin) >= 0
	end

	# Sets the socket as ready to accept incoming connections, `size` is the maximum number of queued clients
	#
	# Returns `true` if the socket could be set, `false` otherwise
	fun listen(size: Int): Bool do
		return socket.listen(size) >= 0
	end

	# Accepts an incoming connection from a client
	#
	# Create and return a new socket to the client. May return null if not
	# `blocking` and there's no waiting clients, or upon an interruption
	# (whether `blocking` or not).
	#
	# Require: not closed
	fun accept: nullable TCPStream
	do
		assert not closed
		var native = socket.accept
		if native == null then return null
		return new TCPStream.server_side(native)
	end

	# Set whether calls to `accept` are blocking
	fun blocking=(value: Bool)
	do
		# We use the opposite from the native version as the native API
		# is closer to the C API. In the Nity API, we use a positive version
		# of the name.
		socket.non_blocking = not value
	end

	# Close this socket
	fun close
	do
		# FIXME unify with `SocketStream::close` when we can use qualified names

		if closed then return
		if socket.close >= 0 then
			closed = true
		end
	end
end

# A simple set of sockets used by `SocketObserver`
class SocketSet
	private var native = new NativeSocketSet

	init do clear

	# Add `socket` to this set
	fun add(socket: Socket) do native.set(socket.socket)

	# Remove `socket` from this set
	fun remove(socket: Socket) do native.clear(socket.socket)

	# Does this set has `socket`?
	fun has(socket: Socket): Bool do return native.is_set(socket.socket)

	# Clear all sockets from this set
	fun clear do native.zero
end

# Service class to manage calls to `select`
class SocketObserver
	private var native = new NativeSocketObserver

	var read_set: nullable SocketSet = null

	var write_set: nullable SocketSet = null

	var except_set: nullable SocketSet = null

	init(read: Bool, write: Bool, except: Bool)
	is old_style_init do
		if read then read_set = new SocketSet
		if write then write_set = new SocketSet
		if except then except_set = new SocketSet
	end

	fun select(max: Socket, seconds: Int, microseconds: Int): Bool
	do
		# FIXME this implementation (see the call to nullable attributes below) and
		# `NativeSockectObserver::select` is not stable.

		var timeval = new NativeTimeval(seconds, microseconds)
		return native.select(max.socket, read_set.native, write_set.native, except_set.native, timeval) > 0
	end
end
