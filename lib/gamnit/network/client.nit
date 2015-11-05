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

import common

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
	fun connected: Bool do return socket != null and socket.connected == true

	# `BinarySerializer` used to send data to this client through `socket`
	var writer: BinarySerializer is noinit

	# `BinaryDeserializer` used to receive data from this client through `socket`
	var reader: BinaryDeserializer is noinit

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
		writer = new BinarySerializer(socket)
		writer.cache = new AsyncCache(false)
		reader = new BinaryDeserializer(socket)
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
		socket.write_string app_name

		var server_app = socket.read_string
		if server_app != app_name then
			print_error "Handshake Error: server app name is '{server_app}'"
			socket.close
			return false
		end

		# App version
		socket.write_string sys.handshake_app_version

		var server_version = socket.read_string
		if server_version != sys.handshake_app_version then
			print_error "Handshake Error: server version is different '{server_version}'"
			socket.close
			return false
		end

		return true
	end
end
