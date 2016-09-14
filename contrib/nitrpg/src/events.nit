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

	# Register a new game event for this entity.
	fun add_event(event: GameEvent) do
		event.owner = self
		event.save
	end

	# List all events registered in this entity.
	#
	# This list is reloaded from game data each time its called.
	#
	# To add events see `add_event`.
	fun load_events: Array[GameEvent] do
		var req = new JsonObject
		req["game"] = game.key
		req["owner"] = key
		var res = new Array[GameEvent]
		for obj in game.db.collection("events").find_all(req) do
			res.add new GameEvent.from_json(game, obj)
		end
		(new EventTimeComparator).sort(res)
		return res
	end

	# Load the event from its `id`.
	#
	# Looks for the event save file in game data.
	# Returns `null` if the event cannot be found.
	fun load_event(id: String): nullable GameEvent do
		var req = new JsonObject
		req["game"] = game.key
		req["owner"] = key
		req["internal_id"] = id
		var res = game.db.collection("events").find(req)
		if res != null then return new GameEvent.from_json(game, res)
		return null
	end
end

# An event that occurs in the `Game`.
class GameEvent
	super GameEntity

	redef var collection_name = "events"

	redef var game

	# Entity this event belongs to.
	var owner: nullable GameEntity = null

	# String used to dissociate events in the display.
	var kind: String

	# GameEvents have raw data associated to them.
	#
	# These data are stored in a JsonObject.
	var data: JsonObject is writable

	# GameEvent uniq id used for storage.
	var internal_id: String is noinit

	redef var key = internal_id is lazy

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
		init(game, json["kind"].as(String), json["data"].as(JsonObject))
		internal_id = json["internal_id"].as(String)
		time = new ISODate.from_string(json["time"].as(String))
	end

	redef fun to_json_object do
		var json = new JsonObject
		json["internal_id"] = internal_id.to_s
		json["kind"] = kind
		json["time"] = time.to_s
		json["data"] = data
		json["game"] = game.key
		var owner = self.owner
		if owner != null then json["owner"] = owner.key
		return json
	end
end

# Compare `GameEvent` to sort them from the most recent to the older.
class EventTimeComparator
	super Comparator

	redef type COMPARED: GameEvent

	redef fun compare(a, b) do return b.time <=> a.time
end
