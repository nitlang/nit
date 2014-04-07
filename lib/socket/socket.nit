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

	# Guard for errors
	# If the socket could not be created or if the socket was destroyed
	# before a call needing the socket was made
	# this flag will be set to false.
	var still_alive = true # Note : HUGE SUCCESS

	# Creates a socket connection to host `thost` on port `port`
	init stream_with_host(thost: String, tport: Int)
	do
		socket = new FFSocket.socket( new FFSocketAddressFamilies.af_inet, new FFSocketTypes.sock_stream, new FFSocketProtocolFamilies.pf_null )
		if socket.address_is_null then
			still_alive = false
			return
		end
		socket.setsockopt(new FFSocketOptLevels.socket, new FFSocketOptNames.reuseaddr, 1)
		var hostname = socket.gethostbyname(thost)
		addrin = new FFSocketAddrIn.with_hostent(hostname, tport)
		address = addrin.address
		host = hostname.h_name
		port = addrin.port
	end

	# Creates a server socket on port `tport`
	init stream_with_port(tport: Int)
	do
		socket = new FFSocket.socket( new FFSocketAddressFamilies.af_inet, new FFSocketTypes.sock_stream, new FFSocketProtocolFamilies.pf_null )
		if socket.address_is_null then
			still_alive = false
			return
		end
		socket.setsockopt(new FFSocketOptLevels.socket, new FFSocketOptNames.reuseaddr, 1)
		addrin = new FFSocketAddrIn.with(tport, new FFSocketAddressFamilies.af_inet)
		address = addrin.address
		port = addrin.port
		host = null
	end

	# Creates a client socket, this is meant to be used by accept only
	private init primitive_init(h: FFSocketAcceptResult)
	do
		socket = h.socket
		addrin = h.addrIn
		address = addrin.address
		port = addrin.port
		host = null
	end

	# Returns an array containing an enum of the events ready to be read
	#
	# event_types : Combination of several event types to watch
	#
	# timeout : Time in milliseconds before stopping listening for events on this socket
	#
	private fun poll_in(event_types: Array[FFSocketPollValues], timeout: Int): Array[FFSocketPollValues] do
		if not still_alive then return new Array[FFSocketPollValues]
		return socket.socket_poll(new PollFD(socket.descriptor, event_types), timeout)
	end

	# Easier use of poll_in to check for something to read on all channels of any priority
	#
	# timeout : Time in milliseconds before stopping to wait for events
	#
	fun ready_to_read(timeout: Int): Bool
	do
		if not still_alive then return false
		var events = new Array[FFSocketPollValues]
		events.push(new FFSocketPollValues.pollin)
		events.push(new FFSocketPollValues.pollrdnorm)
		events.push(new FFSocketPollValues.pollpri)
		events.push(new FFSocketPollValues.pollrdband)
		return poll_in(events, timeout).length != 0
	end

	# Checks if the socket still is connected
	#
	fun connected: Bool
	do
		if not still_alive then return false
		var events = new Array[FFSocketPollValues]
		events.push(new FFSocketPollValues.pollhup)
		events.push(new FFSocketPollValues.pollerr)
		return poll_in(events, 0).length == 0
	end

	# Establishes a connection to socket addrin
	#
	# REQUIRES : self.still_alive
	fun connect: Bool do
		assert still_alive
		return socket.connect(addrin) >= 0
	end

	# Write a message to connected socket
	#
	# Returns `true` if the `msg` was sent, `false` otherwise
	#
	# If not socket.sill_alive, false will be returned
	fun write(msg: String): Bool do
		if not still_alive then return false
		return socket.write(msg) >= 0
	end

	# Read from connected socket
	#
	# If the socket is disconnected, an empty string will be returned
	fun read: String do
		if not still_alive then return ""
		return socket.read
	end

	# Close connection
	#
	# Returns : `true` if the close was successful, `false` otherwise
	fun close: Bool do
		if not still_alive then return true
		if socket.close >= 0 then
			still_alive = false
			return true
		end
		return false
	end

	# Associates the socket to a local address and port
	#
	# Returns : `true` if the socket could be bound, `false` otherwise
	fun bind: Bool do
		if not still_alive then return false
		return socket.bind(addrin) >= 0
	end

	# Sets the socket as ready to accept incoming connections, `size` is the maximum number of queued clients
	#
	# Returns : `true` if the socket could be set, `false` otherwise
	fun listen(size: Int): Bool do
		if not still_alive then return false
		return socket.listen(size) >= 0
	end

	# Accepts an incoming connection from a client
	# This creates a new socket that represents the connection to a client
	#
	# Returns : the socket for communication with the client
	#
	# REQUIRES : self.still_alive
	fun accept: Socket do
		assert still_alive
		return new Socket.primitive_init(socket.accept)
	end

end

class SocketSet
	var sset: FFSocketSet
	init do sset = new FFSocketSet end
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

