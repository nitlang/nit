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

# Server to host multiplayer games
module server

import gamnit::network

import game
import common

redef class RemoteClient
	# `Player` associated to this client
	var player = new Player
end

redef class Server
	# `UDPSocket` to which clients send discovery requests
	var discovery_socket: UDPSocket do
		var s = new UDPSocket
		s.blocking = false
		s.bind(null, discovery_port)
		return s
	end

	# The current game
	var game = new TGame is lazy, writable

	# Is this a dedicated server
	var dedicated = false

	# Create and run a new `Game`
	fun run_dedicated
	do
		dedicated = true

		# Setup game
		print "Server: Setup game"
		game

		# Play
		print "Server: Starting play"
		loop do_turn
	end

	# Run the server logic over a single turn
	fun do_turn: TTurn
	do
		var game = game

		# Do game logic
		var turn = game.do_turn

		# Respond to discovery requests
		loop
			var ptr = new Ref[nullable SocketAddress](null)
			var read = discovery_socket.recv_from(1024, ptr)

			# No sender means there is no request (an error would also do it)
			var sender = ptr.item
			if sender == null then break

			var words = read.split(" ")
			if words.length != 2 or words[0] != "Server?" or words[1] != handshake_app_name then
				print "Server Warning: Rejected discovery request '{read}'"
				continue
			end

			discovery_socket.send_to(sender.address, sender.port,
				"Server! {handshake_app_name} {self.port}")
		end

		# Setup clients
		var new_clients = accept_clients
		for client in new_clients do
			# Register player and spawn first tank
			game.players.add client.player
			turn.spawn_tank client.player

			client.writer.serialize game
			client.writer.serialize client.player
			client.socket.flush

			clients.add client
		end

		if dedicated and clients.is_empty then
			# No clients, sleep for a while
			nanosleep(0, 10000000)
			return turn
		end

		# Update clients
		broadcast turn

		# Get orders from players
		var clients_to_remove = new Array[RemoteClient]
		for client in clients do
			if not client.socket.poll_in then continue

			var orders = client.reader.deserialize
			var errors = client.reader.errors
			if errors.not_empty then
				print_error "Comm Error: (Dropping client) {errors.join(", ")}"
				clients_to_remove.add client
			else if not orders isa Array[TOrder] then
				if orders == null then
					print_error "Comm Error: (Dropping client) Unexpected null"
				else print_error "Comm Error: (Dropping client) Unexpected {orders.class_name}"
				# TODO remove code duplication when we have ? or an equivalent

				clients_to_remove.add client
			else
				client.player.orders.add_all orders
			end
		end

		for client in clients_to_remove do clients.remove client

		return turn
	end
end
