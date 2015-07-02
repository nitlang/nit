# This file is part of NIT ( http://www.nitlanguage.org ).
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
#     nanosleep(0, 50000000)
#     printn "."
# end
# ~~~
module server

import common

# Game server controller
class Server

	# Port for the `listening_socket`
	var port: Int

	# All connected `RemoteClient`
	var clients = new Array[RemoteClient]

	# Socket accepting new connections
	var listening_socket: TCPServer is lazy do
		print port
		var socket = new TCPServer(port)
		socket.listen 8
		socket.blocking = false
		return socket
	end
	init do listening_socket

	# Accept currently waiting clients and return them as an array
	fun accept_clients: Array[RemoteClient]
	do
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
		return new_clients
	end

	# Broadcast a `message` to all `clients`, then flush the connection
	fun broadcast(message: Serializable)
	do
		for client in clients do
			client.writer.serialize(message)
			client.socket.flush
		end
	end
end

# Reference to a remote client connected to this server
class RemoteClient

	# Communication socket with the client
	var socket: TCPStream

	# Is this client connected?
	fun connected: Bool do return socket.connected

	# `BinarySerializer` used to send data to this client through `socket`
	var writer: BinarySerializer is noinit

	# `BinaryDeserializer` used to receive data from this client through `socket`
	var reader: BinaryDeserializer is noinit

	init
	do
		# Setup serialization
		writer = new BinarySerializer(socket)
		reader = new BinaryDeserializer(socket)
		writer.link reader
	end

	# Check for compatibility with the client
	fun handshake: Bool
	do
		print "Server: Handshake requested by {socket.address}"

		# Make sure it is the same app
		var server_app = sys.handshake_app_name
		var client_app = socket.read_string
		if server_app != client_app then
			print_error "Server Error: Client app name is '{client_app}'"

			# Send an empty string so the client read it and give up
			socket.write_string ""
			socket.close
			return false
		end

		socket.write_string server_app

		# App version
		var app_version = sys.handshake_app_version
		var client_version = socket.read_string
		if client_version != app_version then
			print_error "Handshake Error: client version is different '{client_version}'"
			socket.write_string ""
			socket.close
			return false
		end

		socket.write_string app_version

		return true
	end
end
