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

# Game framework with an emphasis on efficient event coordination
#
# Provides basic game logic entities to manage a game where the logic is executed by turns:
# `Game`, `GameTurn`, `GameEvent`, `Turnable`.
# Also offers a bucket system to plan future events at a known number of turns in the future:
# `Bucketable` and the services `act_next` and `act_in`.
#
# Efficiently support large number of entities with rare or sparse actions,
# such as a forest with many individual trees growing slowly.
module bucketed_game is serialize

import serialization
import counter

# Something acting on the game
abstract class Turnable[G: Game]

	# Execute `turn` for this instance.
	fun do_turn(turn: GameTurn[G]) is abstract
end

# Something acting on the game from time to time
abstract class Bucketable[G: Game]
	super Turnable[G]

	private var act_at: nullable Int = null

	# Cancel the previously registered acting turn
	#
	# Once called, `self.do_turn` will not be invoked until `GameTurn::act_next`
	# or `GameTurn::act_in` are called again.
	fun cancel_act do act_at = null
end

# Optimized organization of `Bucketable` instances
class Buckets[G: Game]
	super Turnable[G]

	# Bucket type used in this implementation.
	type BUCKET: HashSet[Bucketable[G]]

	private var next_bucket: nullable BUCKET = null
	private var current_bucket_key = -1

	# Number of `buckets`, default at 100
	#
	# Must be set prior to using any other methods of this class.
	var n_buckets = 100

	private var buckets: Array[BUCKET] =
		[for b in n_buckets.times do new HashSet[Bucketable[G]]] is lazy

	# Stats on delays asked when adding an event with `act_in` and `act_next`
	private var delays = new Counter[Int]

	# Add the Bucketable event `e` at `at_tick`.
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

		var next_bucket = new HashSet[Bucketable[G]]
		buckets[current_bucket_key] = next_bucket
		self.next_bucket = next_bucket

		for e in current_bucket do
			var act_at = e.act_at
			if act_at != null then
				if turn.tick == act_at then
					e.do_turn(turn)
				else if act_at > turn.tick and
					key_for_tick(act_at) == current_bucket_key
				then
					next_bucket.add(e)
				end
			end
		end
	end

	# Get some statistics on both the current held events and historic expired events
	fun stats: String
	do
		var entries = 0
		var instances = new HashSet[Bucketable[G]]
		var max = 0
		var min = 100000
		for bucket in buckets do
			var len = bucket.length
			entries += len
			instances.add_all bucket
			min = min.min(len)
			max = max.max(len)
		end
		var avg = entries.to_f / buckets.length.to_f

		return "{buckets.length} buckets; uniq/tot:{instances.length}/{entries}, avg:{avg.to_precision(1)}, min:{min}, max:{max}\n" +
			"history:{delays.sum}, avg:{delays.avg}, min:{delays[delays.min.as(not null)]}, max:{delays[delays.max.as(not null)]}"
	end
end

# Game related event
interface GameEvent

	# Apply `self` to `game` logic.
	fun apply( game : ThinGame ) is abstract
end

# Event raised at the first turn
class FirstTurnEvent
	super GameEvent
end

# Game logic on the client
class ThinGame

	# Current game tick
	#
	# Default is 0.
	var tick: Int = 0 is writable
end

# Game turn on the client
class ThinGameTurn[G: ThinGame]

	# Game tick when happened this turn
	var tick: Int is protected writable

	# Game events occurred for `self`.
	var events = new Array[GameEvent] is protected writable
end

# Game turn on the full logic
class GameTurn[G: Game]
	super ThinGameTurn[G]

	# Game that `self` belongs to.
	var game: G

	# Create a new game turn for `game`.
	init (game: G) is old_style_init do
		super(game.tick)
		self.game = game
	end

	# Insert the Bucketable event `e` to be executed at next tick.
	fun act_next(e: Bucketable[G])
	do
		game.buckets.add_at(e, tick + 1)
		game.buckets.delays.inc(1)
	end

	# Insert the Bucketable event `e` to be executed at tick `t`.
	fun act_in(e: Bucketable[G], t: Int)
	do
		game.buckets.add_at(e, tick + t)
		game.buckets.delays.inc(t)
	end

	# Add and `apply` a game `event`.
	fun add_event( event : GameEvent )
	do
		event.apply( game )
		events.add( event )
	end
end

# Full game logic
class Game
	super ThinGame

	# Game type used in this implementation.
	type G: Game

	# Bucket list in this game.
	var buckets: Buckets[G] = new Buckets[G]

	# Last turn executed in this game
	# Can be used to consult the latest events (by the display for example),
	# but cannot be used to add new Events.
	var last_turn: nullable ThinGameTurn[G] = null

	# Execute and return a new GameTurn.
	#
	# This method calls `do_pre_turn` before executing the GameTurn
	# and `do_post_turn` after.
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

	# Execute something before executing the current GameTurn.
	#
	# Should be redefined by clients to add a pre-turn behavior.
	# See `Game::do_turn`.
	fun do_pre_turn(turn: GameTurn[G]) do end

	# Execute something after executing the current GameTurn.
	#
	# Should be redefined by clients to add a post-turn behavior.
	# See `Game::do_turn`.
	fun do_post_turn(turn: GameTurn[G]) do end
end
