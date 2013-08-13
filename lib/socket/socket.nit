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

class Socket
	var address: String
	var host: nullable String
	var port: Int
	private var socket: FFSocket
	private var addrin: FFSocketAddrIn

	init stream_with_host(thost: String, tport: Int)
	do
		socket = new FFSocket.socket( new FFSocketAddressFamilies.af_inet, new FFSocketTypes.sock_stream, new FFSocketProtocolFamilies.pf_null )
		var hostname = socket.gethostbyname(thost)
		addrin = new FFSocketAddrIn.with_hostent(hostname, tport)
		address = addrin.address
		host = hostname.h_name
		port = addrin.port
	end

	init stream_with_port(tport: Int)
	do
		socket = new FFSocket.socket( new FFSocketAddressFamilies.af_inet, new FFSocketTypes.sock_stream, new FFSocketProtocolFamilies.pf_null )
		addrin = new FFSocketAddrIn.with(tport, new FFSocketAddressFamilies.af_inet)
		address = addrin.address
		port = addrin.port
		host = null
	end

	init primitive_init(h: FFSocketAcceptResult)
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
	private fun poll_in(event_types: Array[FFSocketPollValues], timeout: Int): Array[FFSocketPollValues] do return socket.socket_poll(new PollFD(socket.descriptor, event_types), timeout)

	# Easier use of poll_in to check for something to read on all channels of any priority
	#
	# timeout : Time in milliseconds before stopping to wait for events
	#
	fun ready_to_read(timeout: Int): Bool
	do
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
		var events = new Array[FFSocketPollValues]
		events.push(new FFSocketPollValues.pollhup)
		events.push(new FFSocketPollValues.pollerr)
		return poll_in(events, 0).length == 0
	end

	fun connect: Bool do return socket.connect(addrin) >= 0
	fun write(msg: String): Bool do return socket.write(msg) >= 0
	fun read: String do return socket.read
	fun close: Bool do return socket.close >= 0
	fun bind: Bool do return socket.bind(addrin) >= 0
	fun listen(size: Int): Bool do return socket.listen(size) >= 0
	fun accept: Socket do return new Socket.primitive_init(socket.accept)
	fun errno: Int do return socket.errno
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

