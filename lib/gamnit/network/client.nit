# This file is part of NIT ( https://nitlanguage.org ).
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

# Client-side network services for games and such
#
# The following code implements a client to connect to a local server and
# briefly exchange with it.
#
# ~~~
# redef fun handshake_app_name do return "nitwork_test"
# redef fun handshake_app_version do return "1.0"
#
# # Prepare connection with remote server
# var config = new RemoteServerConfig("localhost", 4444)
# var server = new RemoteServer(config)
#
# # Try to connect
# if not server.connect then return
#
# # Make sure the server is compatible
# if not server.handshake then return
#
# # Connection up! communicate
# server.writer.serialize "hello server"
# print server.reader.deserialize.as(Object)
#
# # Done, close socket
# server.socket.close
# ~~~
module client

intrude import common

# Information of the remove server
class RemoteServerConfig

	# Address of the remote server, either a domain name or an Internet address
	var address: Text

	# Listening port of the server
	var port: Int
end

# Connection to a remote server
class RemoteServer

	# `RemoteServerConfig` used to initiate connection to the server
	var config: RemoteServerConfig

	# Communication socket with the server
	var socket: nullable TCPStream = null

	# Is this connection connected?
	fun connected: Bool
	do
		var socket = socket
		return socket != null and socket.connected
	end

	# `MsgPackSerializer` used to send data to this client through `socket`
	var writer: MsgPackSerializer is noinit

	# `MsgPackDeserializer` used to receive data from this client through `socket`
	var reader: MsgPackDeserializer is noinit

	# Attempt connection with the remote server
	fun connect: Bool
	do
		print "Connecting to {config.address}:{config.port}..."
		var socket = new TCPStream.connect(config.address.to_s, config.port)
		self.socket = socket

		if not socket.connected then
			print "Connection failed: {socket.last_error or else "Internal error"}"
			return false
		end

		# Setup serialization
		writer = new MsgPackSerializer(socket)
		writer.cache = new AsyncCache(false)
		reader = new MsgPackDeserializer(socket)
		writer.link reader

		return true
	end

	# Attempt handshake with server
	#
	# Validates compatibility between `handshake_app_name` and `handshake_app_version`.
	#
	# On error, close `socket`.
	fun handshake: Bool
	do
		# The client goes first so that the server doesn't show its hand
		var socket = socket
		assert socket != null

		# App name
		var app_name = sys.handshake_app_name
		socket.serialize_msgpack app_name

		var server_app = socket.deserialize_msgpack("String")
		if server_app != app_name then
			print_error "Handshake Error: server app name is '{server_app or else "<invalid>"}'"
			socket.close
			return false
		end

		# App version
		socket.serialize_msgpack sys.handshake_app_version

		var server_version = socket.deserialize_msgpack("String")
		if server_version != sys.handshake_app_version then
			print_error "Handshake Error: server version is different '{server_version or else "<invalid>"}'"
			socket.close
			return false
		end

		return true
	end
end

# Discover local servers responding on UDP `discovery_port`
#
# Sends a message in the format `gamnit::network? handshake_app_name` and
# looks for the response `gamnit::network! handshake_app_name port_number`.
# Waits for `timeout`, or the default 0.1 seconds, after sending the message.
#
# The server usually responds using the method `answer_discovery_requests`.
# When receiving responses, the client may then choose a server and
# connect via `new RemoteServer`.
#
# ~~~
# var servers = discover_local_servers
# if servers.not_empty then
#     var server = new RemoteServer(servers.first)
#     server.connect
#     server.writer.serialize "hello server"
#     server.socket.close
# end
# ~~~
fun discover_local_servers(timeout: nullable Float): Array[RemoteServerConfig]
do
	timeout = timeout or else 0.1

	var s = new UDPSocket
	s.enable_broadcast = true
	s.blocking = false
	s.broadcast(discovery_port, "{discovery_request_message} {handshake_app_name}")
	timeout.sleep

	var r = new Array[RemoteServerConfig]
	loop
		var ptr = new Ref[nullable SocketAddress](null)
		var resp = s.recv_from(1024, ptr)
		var src = ptr.item

		if resp.is_empty then
			# No response
			break
		else
			assert src != null
			var words = resp.split(" ")
			if words.length == 3 and words[0] == discovery_response_message and
			   words[1] == handshake_app_name and words[2].is_int then
				var address = src.address
				var port = words[2].to_i
				r.add new RemoteServerConfig(address, port)
			end
		end
	end
	return r
end
