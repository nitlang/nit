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

# Player related and tank spawning logic
module players is serialize

import tanks

redef class TGame

	# All the known players in the game
	var players = new Array[Player]

	redef fun do_turn
	do
		var turn = super
		for player in players do
			player.do_turn turn
		end
		return turn
	end
end

redef class TTurn

	# Range around the center of the world (0, 0) where a tank can spawn
	var spawn_range = 256.0

	# Spawn a new tank for `player`
	fun spawn_tank(player: Player)
	do
		var pos = new Pos(spawn_range.rand, spawn_range.rand)
		var tank = new Tank(game.story.tanks.rand, pos, 2.0*pi.rand)

		if tank.next_move_collisions(self).not_empty then
			# Clear the way
			game.world.explode(self, pos, 3)
		end

		add new TankSpawnEvent(tank, player)
	end
end

# A player in the game
class Player
	super TTurnable

	# Queue of orders to apply at the end of the turn
	var orders = new Array[TOrder]

	# The tank controlled by this player, if any
	var tank: nullable Tank = null

	# Index of the "unique" player stencil applied on all its tanks
	var stencil_index: Int do
		var counter = once new Ref[Int](0)
		var val = counter.item
		counter.item = (counter.item+1) % 4
		return val
	end

	redef fun do_turn(turn)
	do
		# Apply orders if they are legal
		for order in orders do
			if order.is_legal(turn.game, self) then
				order.apply turn
			else print "Server Warning: Order {order} is now illegal"
		end

		orders.clear
	end
end

redef class Tank
	# The player controlling this tank, if any
	var player: nullable Player = null
end

redef class TOrder

	# Is this order (still) legal?
	#
	# This is executed client-side.
	fun is_legal(game: TGame, issed_by: Player): Bool do return true
end

redef abstract class TankOrder
	redef fun is_legal(game, issed_by) do return issed_by == tank.player
end

# A request to spawn a new tank
class SpawnTankOrder
	super TOrder

	# Requester
	var player: Player

	redef fun is_legal(turn, issed_by) do return issed_by == player and player.tank == null

	redef fun apply(turn)
	do
		turn.spawn_tank player
	end
end

# A new tank appeared
class TankSpawnEvent
	super TEvent

	# The new tank
	var tank: Tank

	# The `tank` owner
	var player: nullable Player

	redef fun apply(game)
	do
		var player = player
		if player != null then player.tank = tank
		tank.player = player
		game.tanks.add tank
	end
end

redef class TankDeathEvent

	redef fun apply(game)
	do
		super

		# `player` has no tank anymore
		var player = tank.player
		if player != null then
			player.tank = null
		end
	end
end
