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

# Server-side network services for games and such
#
# The following code creates a server that continuously listen for new clients,
# and exchange with them briefly before disconnecting.
#
# ~~~nitish
# redef fun handshake_app_name do return "nitwork_test"
# redef fun handshake_app_version do return "1.0"
#
# Open a server on port 4444
# var server = new Server(4444)
#
# loop
#     # Accept new clients
#     var new_clients = server.accept_clients
#     for client in new_clients do
#         # A client is connected, communicate!
#         print ""
#         print client.reader.deserialize.as(Object)
#         client.writer.serialize "Goodbye client"
#
#         # Done, close socket
#         client.socket.close
#     end
#
#     # `accept_clients` in non-blocking,
#     # sleep before tying again, or do something else.
#     0.5.sleep
#     printn "."
# end
# ~~~
module server

intrude import common

# Game server controller
class Server

	# Port for the `listening_socket`
	var port: Int

	# All connected `RemoteClient`
	var clients = new Array[RemoteClient]

	# TCP socket accepting new connections
	#
	# Opened on the first call to `accept_clients`.
	var listening_socket: TCPServer is lazy do
		var socket = new TCPServer(port)
		socket.listen 8
		socket.blocking = false
		return socket
	end

	# Accept currently waiting clients and return them as an array
	#
	# If `add_to_clients`, the default, the new clients are added to `clients`.
	# Otherwise, the return value of `accept_clients` may be added to `clients`
	# explicitly by the caller after an extra verification or sorting.
	fun accept_clients(add_to_clients: nullable Bool): Array[RemoteClient]
	do
		add_to_clients = add_to_clients or else true
		assert not listening_socket.closed

		var new_clients = new Array[RemoteClient]
		loop
			var client_socket = listening_socket.accept
			if client_socket == null then break

			var rc = new RemoteClient(client_socket)

			var handshake_success = rc.handshake
			if handshake_success then
				new_clients.add rc
				print "Server: Client at {client_socket.address} passed the handshake"
			else
				print_error "Server Error: Client at {client_socket.address} failed the handshake"
				client_socket.close
			end
		end

		if add_to_clients then clients.add_all new_clients

		return new_clients
	end

	# Broadcast a `message` to all `clients`, then flush the connection
	#
	# The client `except` is skipped and will not receive the `message`.
	fun broadcast(message: Serializable, except: nullable RemoteClient)
	do
		for client in clients do if client != except then
			client.writer.serialize(message)
			client.socket.flush
		end
	end

	# Respond to pending discovery requests by sending the TCP listening address and port
	#
	# Returns the number of valid requests received.
	#
	# The response messages includes the TCP listening address and port
	# for remote clients to connect with TCP using `connect`.
	# These connections are accepted by the server with `accept_clients`.
	fun answer_discovery_requests: Int
	do
		var count = 0
		loop
			var ptr = new Ref[nullable SocketAddress](null)
			var read = discovery_socket.recv_from(1024, ptr)

			# No sender means there is no discovery request
			var sender = ptr.item
			if sender == null then break

			var words = read.split(" ")
			if words.length != 2 or words[0] != discovery_request_message or words[1] != handshake_app_name then
				print "Server Warning: Rejected discovery request '{read}' from {sender.address}:{sender.port}"
				continue
			end

			var msg = "{discovery_response_message} {handshake_app_name} {self.port}"
			discovery_socket.send_to(sender.address, sender.port, msg)
			count += 1
		end
		return count
	end

	# UDP socket responding to discovery requests
	#
	# Usually opened on the first call to `answer_discovery_request`.
	var discovery_socket: UDPSocket is lazy do
		var s = new UDPSocket
		s.blocking = false
		s.bind(null, discovery_port)
		return s
	end
end

# Reference to a remote client connected to this server
class RemoteClient

	# Communication socket with the client
	var socket: TCPStream

	# Is this client connected?
	fun connected: Bool do return socket.connected

	# `MsgPackSerializer` used to send data to this client through `socket`
	var writer: MsgPackSerializer is noinit

	# `MsgPackDeserializer` used to receive data from this client through `socket`
	var reader: MsgPackDeserializer is noinit

	init
	do
		# Setup serialization
		writer = new MsgPackSerializer(socket)
		writer.cache = new AsyncCache(true)
		reader = new MsgPackDeserializer(socket)
		writer.link reader
	end

	# Check for compatibility with the client
	fun handshake: Bool
	do
		print "Server: Handshake initiated by {socket.address}"

		# Make sure it is the same app
		var server_app = sys.handshake_app_name
		var client_app = socket.deserialize_msgpack
		if server_app != client_app then
			print_error "Server Error: Client app name is '{client_app or else "<invalid>"}'"

			# Send an empty string so the client read it and give up
			socket.serialize_msgpack ""
			socket.close
			return false
		end

		socket.serialize_msgpack server_app

		# App version
		var app_version = sys.handshake_app_version
		var client_version = socket.deserialize_msgpack
		if client_version != app_version then
			print_error "Handshake Error: client version is different '{client_version or else "<invalid>"}'"
			socket.serialize_msgpack ""
			socket.close
			return false
		end

		socket.serialize_msgpack app_version

		return true
	end
end
