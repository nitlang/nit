# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2011-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# Provides basic game logic utilities using buckets to coordinate and
# optimize actions on game turn ends. Supports both action at each
# end of turn as well as actions on some end of turns.
#
# Allows for fast support of a large number of entities with rare actions,
# such as a forest with many individual trees.
module bucketed_game

# Something acting on the game
class Turnable[G: Game]
	fun do_turn(turn: GameTurn[G]) is abstract
end

# Something acting on the game from time to time
class Bucketable[G: Game]
	super Turnable[G]
	private var act_at: Int = 0
end

# Optiomized organization of `Bucketable` instances
class Buckets[G: Game]
	super Turnable[G]
	type BUCKET: HashSet[Bucketable[G]]

	private var buckets: Array[BUCKET] is noinit

	private var next_bucket: nullable BUCKET = null
	private var current_bucket_key: Int = -1

	init
	do
		var n_buckets = 100
		buckets = new Array[BUCKET].with_capacity(n_buckets)

		for b in [0 .. n_buckets [do
			buckets[b] = new HashSet[Bucketable[G]]
		end
	end

	fun add_at(e: Bucketable[G], at_tick: Int)
	do
		var at_key = key_for_tick(at_tick)

		if at_key == current_bucket_key then
			next_bucket.as(not null).add(e)
		else
			buckets[at_key].add(e)
		end

		e.act_at = at_tick
	end

	private fun key_for_tick(at_tick: Int): Int
	do
		return at_tick % buckets.length
	end

	redef fun do_turn(turn: GameTurn[G])
	do
		current_bucket_key = key_for_tick(turn.tick)
		var current_bucket = buckets[current_bucket_key]

		next_bucket = new HashSet[Bucketable[G]]

		for e in current_bucket do
			if e.act_at == turn.tick then
				e.do_turn(turn)
			else if e.act_at > turn.tick and
				key_for_tick(e.act_at) == current_bucket_key
			then
				next_bucket.as(not null).add(e)
			end
		end

		buckets[current_bucket_key] = next_bucket.as(not null)
	end
end

# Game related event
interface GameEvent
	fun apply( game : ThinGame ) is abstract
end

# Event raised at the first turn
class FirstTurnEvent
	super GameEvent
end

# Game logic on the client
class ThinGame
	var tick: Int protected writable = 0
end

# Game turn on the client
class ThinGameTurn[G: ThinGame]
	var tick: Int protected writable = 0

	var events: List[GameEvent] protected writable = new List[GameEvent]

	init (t: Int) do tick = t
end

# Game turn on the full logic
class GameTurn[G: Game]
	super ThinGameTurn[G]
	var game: G

	init (g: G)
	do
		super(g.tick)
		game = g
	end

	fun act_next(e: Bucketable[G])
	do
		game.buckets.add_at(e, tick + 1)
	end

	fun act_in(e: Bucketable[G], t: Int)
	do
		game.buckets.add_at(e, tick + t)
	end

	fun add_event( event : GameEvent )
	do
		event.apply( game )
		events.add( event )
	end
end

# Full game logic
class Game
	super ThinGame
	type G: Game

	var buckets: Buckets[G] = new Buckets[G]

	# Last turn executed in this game
	# Can be used to consult the latest events (by the display for example),
	# but cannot be used to add new Events.
	var last_turn: nullable ThinGameTurn[G] = null

	init do end

	fun do_turn: GameTurn[G]
	do
		var turn = new GameTurn[G](self)

		do_pre_turn(turn)
		buckets.do_turn(turn)
		do_post_turn(turn)

		last_turn = turn

		tick += 1

		return turn
	end

	fun do_pre_turn(turn: GameTurn[G]) do end
	fun do_post_turn(turn: GameTurn[G]) do end
end
