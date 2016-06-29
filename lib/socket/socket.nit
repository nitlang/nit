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
intrude import core::stream

# A general Socket, either TCP or UDP
abstract class Socket

	# Underlying C socket
	private var native: NativeSocket is noinit

	# Is this socket closed?
	var closed = false

	# Is `self` a blocking socket connection ?
	fun blocking: Bool do return not native.non_blocking

	# Set whether calls to `accept` are blocking
	fun blocking=(value: nullable Bool) do
		if value == null then value = true
		# We use the opposite from the native version as the native API
		# is closer to the C API. In the Nity API, we use a positive version
		# of the name.
		native.non_blocking = not value
	end
end

# A general TCP socket, either a `TCPStream` or a `TCPServer`
abstract class TCPSocket
	super Socket

	# Port used by the socket
	var port: Int

	# IPv4 address to which `self` is connected
	#
	# Formatted as xxx.xxx.xxx.xxx.
	var address: String is noinit
end

# Simple communication stream with a remote socket
#
# NOTE: NON-THREAD SAFE
class TCPStream
	super TCPSocket
	super Duplex
	super FinalizableOnce

	# Real canonical name of the host to which `self` is connected
	var host: String

	private var addrin: NativeSocketAddrIn is noinit

	# Read Byte buffer, required by C-API
	var read_buf: NativeString is lazy do return new NativeString(1)

	# Creates a socket connection to host `host` on port `port`
	init connect(host: String, port: Int, blocking: nullable Bool)
	do
		native = new NativeSocket.socket(new NativeSocketAddressFamilies.af_inet,
			new NativeSocketTypes.sock_stream, new NativeSocketProtocolFamilies.pf_null)
		if native.address_is_null then
			closed = true
			return
		end

		var hostent = sys.gethostbyname(host.to_cstring)
		if hostent.address_is_null then
			# Error in name lookup
			last_error = new IOError.from_h_errno

			closed = true
			return
		end

		addrin = new NativeSocketAddrIn
		addrin.fill_from_hostent hostent
		addrin.port = port

		address = addrin.address.to_s
		init(addrin.port, hostent.h_name.to_s)

		closed = not internal_connect
		if closed then
			# Connection failed
			last_error = new IOError.from_errno
		end
	end

	# Creates a client socket, this is meant to be used by accept only
	private init server_side(h: SocketAcceptResult)
	do
		native = h.socket
		addrin = h.addr_in
		address = addrin.address.to_s

		init(addrin.port, address)
	end

	redef fun finalize do
		addrin.free
	end

	redef fun eof do return super and not connected

	redef fun read_byte do
		var b = super
		if b != null then return b
		if not blocking and not ready then return null
		if native.read(read_buf, 1) > 0 then
			#print "Read byte {read_buf[0]}"
			return read_buf[0]
		end
		close
		return null
	end

	redef fun read_bytes(bytes, max) do
		var rd = super
		if rd >= max then return rd
		if rd != 0 and not ready then return rd
		if not blocking and not ready then return rd
		rd += native.read(bytes.fast_cstring(rd), max - rd)
		if rd == 0 then close
		return rd
	end

	# Returns an array containing an enum of the events ready to be read
	#
	# event_types : Combination of several event types to watch
	#
	# timeout : Time in milliseconds before stopping listening for events on this socket
	private fun pollin(event_types: Array[NativeSocketPollValues], timeout: Int): Array[NativeSocketPollValues] do
		return native.socket_poll(new PollFD(native.descriptor, event_types), timeout)
	end

	# Easier use of pollin to check for something to read on all channels of any priority
	#
	# timeout : Time in milliseconds before stopping to wait for events
	redef fun ready(timeout)
	do
		if super then return true
		if closed then return false
		if not connected then return false
		var t = if timeout == null then 0 else timeout
		var events = [new NativeSocketPollValues.pollin]
		return pollin(events, t).length != 0
	end

	redef fun is_writable do return not closed

	redef fun write_byte(value)
	do
		if closed then
			last_error = new IOError("Cannot write on a closed socket")
			return
		end
		native.write_byte value
	end

	redef fun write_bytes(bytes, ln) do
		if closed then
			last_error = new IOError("Cannot write on a closed socket")
			return
		end
		native.write(bytes, ln)
	end

	redef fun close
	do
		if closed then return
		flush
		if native.close >= 0 then
			closed = true
		end
	end

	# Is this socket still connected?
	fun connected: Bool
	do
		if native.poll_hup_err != 0 then closed = true
		if closed then return false
		return true
	end

	# Establishes a connection to socket addrin
	#
	# REQUIRES : not self.closed
	private fun internal_connect: Bool
	do
		assert not closed
		return native.connect(addrin) >= 0
	end

	# Send the data present in the socket buffer
	fun flush
	do
		var nsol_tcp = new NativeSocketOptLevels.tcp
		var nson_nodelay = new NativeSocketOptNames.tcp_nodelay
		if not native.setsockopt(nsol_tcp, nson_nodelay, 1) or
		   not native.setsockopt(nsol_tcp, nson_nodelay, 0) then
			closed = true
		end
	end
end

# A socket listening on a given `port` for incoming connections
#
# Create streams to communicate with clients using `accept`.
class TCPServer
	super TCPSocket

	private var addrin: NativeSocketAddrIn is noinit

	# Create and bind a listening server socket on port `port`
	init do
		native = new NativeSocket.socket(new NativeSocketAddressFamilies.af_inet,
			new NativeSocketTypes.sock_stream, new NativeSocketProtocolFamilies.pf_null)
		assert not native.address_is_null
		if not native.setsockopt(new NativeSocketOptLevels.socket, new NativeSocketOptNames.reuseaddr, 1) then
			closed = true
			return
		end

		addrin = new NativeSocketAddrIn
		addrin.family = new NativeSocketAddressFamilies.af_inet
		addrin.port = port
		addrin.address_any

		address = addrin.address.to_s

		# Bind it
		closed = not bind
	end

	# Associates the socket to a local address and port
	#
	# Returns whether the socket has been be bound.
	private fun bind: Bool do
		return native.bind(addrin) >= 0
	end

	# Sets the socket as ready to accept incoming connections, `size` is the maximum number of queued clients
	#
	# Returns `true` if the socket could be set, `false` otherwise
	fun listen(size: Int): Bool do
		return native.listen(size) >= 0
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
		var native = native.accept
		if native == null then return null
		return new TCPStream.server_side(native)
	end

	# Close this socket
	fun close
	do
		# FIXME unify with `SocketStream::close` when we can use qualified names

		if closed then return
		if native.close >= 0 then
			closed = true
		end
	end
end

# A simple set of sockets used by `SocketObserver`
class SocketSet
	private var native = new NativeSocketSet

	init do clear

	# Add `socket` to this set
	fun add(socket: Socket) do native.set(socket.native)

	# Remove `socket` from this set
	fun remove(socket: Socket) do native.clear(socket.native)

	# Does this set has `socket`?
	fun has(socket: Socket): Bool do return native.is_set(socket.native)

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
		return native.select(max.native, read_set.native, write_set.native, except_set.native, timeval) > 0
	end
end

# Socket over UDP, sends and receive data without the need for a connection
class UDPSocket
	super Socket

	# Last error raised by this socket
	var error: nullable Error = null

	init do native = new NativeSocket.socket(
			new NativeSocketAddressFamilies.af_inet,
			new NativeSocketTypes.sock_dgram,
			new NativeSocketProtocolFamilies.pf_null)

	# Bind this socket to an `address`, on `port` (to all addresses if `null`)
	#
	# On error, sets `error` appropriately.
	fun bind(address: nullable Text, port: Int)
	do
		var addr_in = new NativeSocketAddrIn
		addr_in.port = port
		if address != null then
			# FIXME replace all use of gethostbyname with something not obsolete
			var hostent = sys.gethostbyname(address.to_cstring)
			if hostent.address_is_null then
				error = new IOError.from_h_errno
				addr_in.free
				return
			end

			addr_in.fill_from_hostent hostent
		else
			addr_in.family = new NativeSocketAddressFamilies.af_inet
			addr_in.address_any
		end

		if native.bind(addr_in) != 0 then error = new IOError.from_errno

		addr_in.free
	end

	# Receive `length` bytes of data from any sender
	#
	# On error, returns an empty string and sets `error` appropriately.
	fun recv(length: Int): String
	do
		var buf = new NativeString(length)
		var len = native.recvfrom(buf, length, 0, new NativeSocketAddrIn.nul)
		if len == -1 then
			error = new IOError.from_errno
			return ""
		end
		return buf.to_s_with_length(len)
	end

	# Receive `length` bytes of data from any sender and store the sender info in `sender.item`
	#
	# On error, returns an empty string and sets `error` appropriately.
	fun recv_from(length: Int, sender: Ref[nullable SocketAddress]): String
	do
		var src = new NativeSocketAddrIn
		var buf = new NativeString(length)

		var len = native.recvfrom(buf, length, 0, src)
		if len == -1 then
			error = new IOError.from_errno
			src.free
			return ""
		end

		sender.item = new SocketAddress(src)
		return buf.to_s_with_length(len)
	end

	# Send `data` to `dest_address` on `port`
	#
	# On error, sets `error` appropriately.
	fun send_to(dest_address: Text, port: Int, data: Text)
	do
		var hostent = sys.gethostbyname(dest_address.to_cstring)
		if hostent.address_is_null then
			error = new IOError.from_h_errno
			return
		end

		var dest = new NativeSocketAddrIn
		dest.fill_from_hostent hostent
		dest.port = port
		native.setsockopt(new NativeSocketOptLevels.socket, new NativeSocketOptNames.broadcast, 1)

		var buf = data.to_cstring
		if native.sendto(buf, data.length, 0, dest) == -1 then
			error = new IOError.from_errno
		end
		dest.free
	end

	# Enable broadcasting for this socket
	#
	# On error, sets `error` appropriately.
	fun enable_broadcast=(value: Bool) do
		var res = native.setsockopt(new NativeSocketOptLevels.socket, new NativeSocketOptNames.broadcast, value.to_i)
		if res == -1 then error = new IOError.from_errno
	end

	# Broadcast `data` on the network on `port`
	#
	# On error, sets `error` appropriately.
	#
	# Require: setting `enable_broadcast = true`
	fun broadcast(port: Int, data: Text)
	do
		var addr_in = new NativeSocketAddrIn
		addr_in.port = port
		addr_in.family = new NativeSocketAddressFamilies.af_inet
		addr_in.address_broadcast

		var buf = data.to_cstring
		if native.sendto(buf, data.length, 0, addr_in) == -1 then
			error = new IOError.from_errno
		end

		addr_in.free
	end
end

# Address of a socket in the Internet namespace
#
# Used in one of the out parameters of `UDPSocket::recv_from`.
class SocketAddress
	super FinalizableOnce

	# FIXME make init private

	private var native: NativeSocketAddrIn

	init
	do
		address = native.address.to_s
		port = native.port
	end

	# Internet address
	var address: String is noinit

	# Port of the socket
	var port: Int is noinit

	redef fun ==(o) do return o isa SocketAddress and o.address == address and o.port == port

	redef fun finalize_once do native.free
end

redef class IOError
	# Fill a new `IOError` from the message of `errno`
	init from_errno do init errno.strerror

	# Fill a new `IOError` from the message of `h_errno`
	#
	# Used with `gethostbyname`.
	init from_h_errno do init h_errno.to_s
end
