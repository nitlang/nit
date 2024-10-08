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

# Structure of a client/server game, based on turns, events, orders and rules
module framework is serialize

import geometry
import realtime

# Main game object containing the world, players and tanks
#
# The game object is shared by both the client and the server.
# So a method using the game object as visitor is to be executed client-side.
class TGame

	# `Story`, or rule book, with all the stats for this game
	var story = new Story

	# `Clock` timing the elapsed time between turns
	private var clock = new Clock is noserialize

	# Tick count of the last turn (The first turn as a tick of 0)
	var tick = -1

	# Execute the next turn and return it as a `TTurn`
	#
	# This is to be executed server-side only.
	fun do_turn: TTurn
	do
		var dt = clock.lapse
		tick += 1

		var turn = new TTurn(self, tick, dt, ((dt-dt.floor)*1000.0).to_i)
		return turn
	end

	# Apply `turn` locally by updating `tick` and applying all events
	#
	# This is to be executed client-side only.
	fun apply_turn(turn: TTurn)
	do
		tick = turn.tick
		for event in turn.events do event.apply self
	end
end

# A single turn of a `TGame`
#
# The turn object is created and populated by the server (using `TGame::do_turn`).
# It is transmitted to the client but it cannot modify it.
# So methods using the turn object as visitor are to be executed server-side.
class TTurn

	# `TGame` of which `self` is part of
	var game: TGame

	# Tick of this turn
	var tick: Int

	# Elapsed seconds since previous turn (as a `Float`)
	var dts: Float

	# Elapsed milliseconds since previous turn (as a `Int`)
	var dt: Int

	# `TEvent` that happened during this turn
	#
	# Events are added using `add`.
	# This information is used to apply the turn client-side to update its game object.
	# It is also used by effects on the UI and could be used by an AI.
	var events: SequenceRead[TEvent] = new Array[TEvent]

	# Add an `event` to `events` and apply it right away server-side
	fun add(event: TEvent)
	do
		event.apply game
		events.as(Array[TEvent]).add event
	end
end

# Game event sent from the server to the client
class TEvent

	# Executed client-side to apply this event on the `game`
	fun apply(game: TGame) do end
end

# An order sent from the client to the server
class TOrder

	# Apply order server-side on `turn`, usually spawns `GameEvent`
	fun apply(turn: TTurn) do end
end

# An entity acting on each turn
class TTurnable

	# Act on `turn`
	fun do_turn(turn: TTurn) do end
end

# A collection of `Rule` guiding the game
#
# Changing the story could (in theory) be enough to completely change the context of the game.
# In _Tinks!_ however, we use this class lightly and fill it with static content.
class Story
end

# Metadata of in game `Ruled` entities, keep their stats and assets in a single place
class Rule

	# `Story` to which `self` belongs
	var story: Story
end

# A game entity with metadata in its `rule`
class Ruled

	# Kind of `Rule` for `rule`
	type R: Rule

	# Metadata of this entity
	var rule: R
end

# Should the game show more information for debugging?
fun debug: Bool do return false
