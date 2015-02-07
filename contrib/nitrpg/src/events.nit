# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014-2015 Alexandre Terrasa <alexandre@moz-code.org>
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

# `nitrpg` game events.
#
# In this module we introduce the concept of `GameEvent`.
# They can be attached to every GameEntities.
module events

import game

redef class GameEntity

	# Saves `event` in `self`.
	fun add_event(event: GameEvent) do event.save_in(self)

	# List all events registered in this entity.
	#
	# This list is reloaded from game data each time its called.
	#
	# To add events see `add_event`.
	fun load_events: Array[GameEvent] do
		var key = key / "events"
		var res = new Array[GameEvent]
		if not game.store.has_collection(key) then return res
		var coll = game.store.list_collection(key)
		for id in coll do
			var name = id.to_s
			res.add load_event(name).as(not null)
		end
		(new EventTimeComparator).sort(res)
		return res
	end

	# Load the event from its `id`.
	#
	# Looks for the event save file in game data.
	# Returns `null` if the event cannot be found.
	fun load_event(id: String): nullable GameEvent do
		var key = key / "events" / id
		if not game.store.has_key(key) then return null
		var json = game.store.load_object(key)
		return new GameEvent.from_json(game, json)
	end
end

# An event that occurs in the `Game`.
class GameEvent
	super GameEntity

	redef var key is lazy do return "events" / internal_id

	redef var game

	# String used to dissociate events in the display.
	var kind: String

	# GameEvents have raw data associated to them.
	#
	# These data are stored in a JsonObject.
	var data: JsonObject is writable

	# GameEvent uniq id used for storage.
	var internal_id: String is noinit

	# Date and time of the event.
	var time: ISODate is noinit, writable

	# An event initialized at now `time`.
	init do
		internal_id = "{get_time}{object_id}{100.rand}"
		time = new ISODate
	end

	# Init `self` from a `json` object.
	#
	# Used to load events from json storage.
	init from_json(game: Game, json: JsonObject) do
		self.game = game
		internal_id = json["internal_id"].to_s
		kind = json["kind"].to_s
		time = new ISODate.from_string(json["time"].to_s)
		data = json["data"].as(JsonObject)
	end

	redef fun to_json do
		var json = new JsonObject
		json["internal_id"] = internal_id.to_s
		json["kind"] = kind
		json["time"] = time.to_s
		json["data"] = data
		return json
	end
end

# Compare `GameEvent` to sort them from the most recent to the older.
class EventTimeComparator
	super Comparator

	redef type COMPARED: GameEvent

	redef fun compare(a, b) do return b.time <=> a.time
end
