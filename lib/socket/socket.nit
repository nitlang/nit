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

import socket_c

# Portal for communication between two machines
class Socket
	super BufferedIStream
	super OStream
	super PollableIStream

	# IPv4 address the socket is connected to
	# Formatted as xxx.xxx.xxx.xxx
	var address: String

	# Hostname of the socket connected to self
	# In C : The real canonical host name (e.g. example.org)
	var host: nullable String

	# Port open for the socket
	var port: Int

	# Underlying C socket
	private var socket: FFSocket

	# Underlying C socket
	private var addrin: FFSocketAddrIn

	redef var end_reached = false

	# Creates a socket connection to host `thost` on port `port`
	init client(thost: String, tport: Int)
	do
		_buffer = new FlatBuffer
		_buffer_pos = 0
		socket = new FFSocket.socket( new FFSocketAddressFamilies.af_inet, new FFSocketTypes.sock_stream, new FFSocketProtocolFamilies.pf_null )
		if socket.address_is_null then
			end_reached = true
			return
		end
		socket.setsockopt(new FFSocketOptLevels.socket, new FFSocketOptNames.reuseaddr, 1)
		var hostname = socket.gethostbyname(thost)
		addrin = new FFSocketAddrIn.with_hostent(hostname, tport)
		address = addrin.address
		host = hostname.h_name
		port = addrin.port
		if not end_reached then end_reached = not connect
	end

	# Creates a server socket on port `tport`, with a connection queue of size `max`
	init server(tport: Int, max: Int)
	do
		_buffer = new FlatBuffer
		_buffer_pos = 0
		socket = new FFSocket.socket( new FFSocketAddressFamilies.af_inet, new FFSocketTypes.sock_stream, new FFSocketProtocolFamilies.pf_null )
		if socket.address_is_null then
			end_reached = true
			return
		end
		socket.setsockopt(new FFSocketOptLevels.socket, new FFSocketOptNames.reuseaddr, 1)
		addrin = new FFSocketAddrIn.with(tport, new FFSocketAddressFamilies.af_inet)
		address = addrin.address
		port = addrin.port
		host = null
		bind
		listen(max)
	end

	# Creates a client socket, this is meant to be used by accept only
	private init primitive_init(h: FFSocketAcceptResult)
	do
		_buffer = new FlatBuffer
		_buffer_pos = 0
		socket = h.socket
		addrin = h.addrIn
		address = addrin.address
		port = addrin.port
		host = null
	end

	redef fun poll_in do return ready_to_read(0)

	# Returns an array containing an enum of the events ready to be read
	#
	# event_types : Combination of several event types to watch
	#
	# timeout : Time in milliseconds before stopping listening for events on this socket
	#
	private fun pollin(event_types: Array[FFSocketPollValues], timeout: Int): Array[FFSocketPollValues] do
		if end_reached then return new Array[FFSocketPollValues]
		return socket.socket_poll(new PollFD(socket.descriptor, event_types), timeout)
	end

	# Easier use of pollin to check for something to read on all channels of any priority
	#
	# timeout : Time in milliseconds before stopping to wait for events
	#
	fun ready_to_read(timeout: Int): Bool
	do
		if _buffer_pos < _buffer.length then return true
		if eof then return false
		var events = new Array[FFSocketPollValues]
		events.push(new FFSocketPollValues.pollin)
		return pollin(events, timeout).length != 0
	end

	# Checks if the socket still is connected
	#
	fun connected: Bool
	do
		if eof then return false
		var events = new Array[FFSocketPollValues]
		events.push(new FFSocketPollValues.pollhup)
		events.push(new FFSocketPollValues.pollerr)
		if pollin(events, 0).length == 0 then
			return true
		else
			end_reached = true
			return false
		end
	end

	redef fun is_writable do return not end_reached

	# Establishes a connection to socket addrin
	#
	# REQUIRES : not self.end_reached
	private fun connect: Bool
	do
		assert not end_reached
		return socket.connect(addrin) >= 0
	end

	# If socket.end_reached, nothing will happen
	redef fun write(msg: Text)
	do
		if end_reached then return
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

	redef fun close do
		if end_reached then return
		if socket.close >= 0 then
			end_reached = true
		end
	end

	# Associates the socket to a local address and port
	#
	# Returns : `true` if the socket could be bound, `false` otherwise
	private fun bind: Bool do
		if end_reached then return false
		return socket.bind(addrin) >= 0
	end

	# Sets the socket as ready to accept incoming connections, `size` is the maximum number of queued clients
	#
	# Returns : `true` if the socket could be set, `false` otherwise
	private fun listen(size: Int): Bool do
		if end_reached then return false
		return socket.listen(size) >= 0
	end

	# Accepts an incoming connection from a client
	# This creates a new socket that represents the connection to a client
	#
	# Returns : the socket for communication with the client
	#
	# REQUIRES : not self.end_reached
	fun accept: Socket do
		assert not end_reached
		return new Socket.primitive_init(socket.accept)
	end

end

class SocketSet
	var sset = new FFSocketSet
	fun set(s: Socket) do sset.set(s.socket) end
	fun is_set(s: Socket): Bool do return sset.is_set(s.socket) end
	fun zero do sset.zero end
	fun clear(s: Socket) do sset.clear(s.socket) end
end

class SocketObserver
	private var observer: FFSocketObserver
	var readset: nullable SocketSet = null
	var writeset: nullable SocketSet = null
	var exceptset: nullable SocketSet = null
	init(read :Bool, write :Bool, except: Bool)
	do
		if read then readset = new SocketSet
		if write then writeset = new SocketSet
		if except then exceptset = new SocketSet
		observer = new FFSocketObserver
	end	
	fun select(max: Socket,seconds: Int, microseconds: Int): Bool
	do
		var timeval = new FFTimeval(seconds, microseconds)
		return observer.select(max.socket, readset.sset, writeset.sset, readset.sset, timeval) > 0
	end
end

