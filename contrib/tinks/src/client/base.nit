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

# Shader client code to manage the game context
module base

import app

import context

redef class App

	# Context of the game, either local or remote
	var context: GameContext is lazy do

		# Server info
		var address = null
		var port = default_listening_port

		if args.not_empty then
			# Use first argument as the server address
			address = args[0]
			if args.length > 1 then port = args[1].to_i
		else
			print "Looking for a server..."

			var servers = discover_local_servers
			if servers.not_empty then
				address = servers.first.address
				port = servers.first.port
			end
		end

		if address == null then
			print "Launching a local server"

			# No command line
			return new LocalServerContext
		else
			print "Connecting to {address}:{port}"

			# Args are: tinks server_address {port}
			if args.length > 1 then port = args[1].to_i

			# Setup connection config
			var server_config = new RemoteServerConfig(address, port)
			var server = new RemoteServer(server_config)

			# Connect then complete handshake
			assert server.connect else print_error "Connection to server failed with {server.socket.last_error or else "none"}"
			assert server.handshake else print_error "Handshake with server failed"

			# Download and setup remote game
			var context = new RemoteGameContext(server)
			context.setup

			return context
		end
	end

	# `Tank` of the local player, if any
	fun local_tank: nullable Tank
	do
		# FIXME use a ? to one line this
		var local_player = context.local_player
		if local_player == null then return null
		return local_player.tank
	end
end
