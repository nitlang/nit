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

# Provides context to abstract the exchanges with a local game or a remote game
module context

import gamnit::network

import game
intrude import game::players
import server

# Interface to a game
abstract class GameContext

	# The current game
	var game: TGame

	# The local player on this client, if any
	var local_player: nullable Player = null

	# Do a turn
	fun do_turn: TTurn is abstract
end

# Simple local single-player game
class LocalGameContext
	super GameContext

	noautoinit

	init
	do
		# Create basic game
		game = new TGame
		var setup_turn = game.do_turn

		var local_player = new Player
		game.players.add local_player
		self.local_player = local_player
		setup_turn.spawn_tank local_player
	end

	redef fun do_turn do return game.do_turn
end

# Multiplayer game running on a remote server
class RemoteGameContext
	super GameContext

	autoinit remote_server

	# Remote server that controls the `game`
	var remote_server: RemoteServer

	# Setup `game` from `remote_server`
	fun setup
	do
		var game = remote_server.reader.deserialize
		var errors = remote_server.reader.errors
		assert errors.is_empty else print_error errors.join("\n")
		assert game isa TGame else print_error "Server sent a {game.class_name}"
		self.game = game

		var local_player = remote_server.reader.deserialize
		errors = remote_server.reader.errors
		assert errors.is_empty else print_error errors.join("\n")
		assert local_player isa Player else print_error "Server sent a {local_player.class_name}"
		self.local_player = local_player
	end

	redef fun do_turn
	do
		# Get turn from server
		var turn = remote_server.reader.deserialize
		var errors = remote_server.reader.errors
		assert errors.is_empty else print_error errors.join("\n")
		assert turn isa TTurn else print_error "Server sent a {turn.class_name}"

		# Apply the turn locally
		game.apply_turn turn

		# Send orders to server
		var local_player = local_player
		if local_player != null and local_player.orders.not_empty then
			remote_server.writer.serialize local_player.orders
			remote_server.socket.flush
			local_player.orders = new Array[TOrder]
		end

		return turn
	end
end

# Local game ran by a server accepting other clients
class LocalServerContext
	super LocalGameContext

	# The server managing the game and other clients
	var server = new Server(default_listening_port)

	init do server.game = game

	redef fun do_turn do return server.do_turn
end
