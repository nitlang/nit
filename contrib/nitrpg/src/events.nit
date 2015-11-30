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
import github::events
import md5

# A GameReactor reacts to event sent by a `Github::HookListener`.
#
# Subclasses of `GameReactor` are implemented to handle all kind of
# `GithubEvent`.
# Depending on the received event, the reactor is used to update game data.
#
# Reactors are mostly used with a `Github::HookListener` that dispatchs received
# events from the Github API.
#
# Example:
#
# ~~~nitish
# import github::hooks
#
# # Reactor that prints received events in console.
# class PrintReactor
#	super GameReactor
#
#	redef fun react_event(game, e) do print e
# end
#
# # Hook listener that redirect events to reactors.
# class RpgHookListener
#    super HookListener
#
#	redef fun apply_event(event) do
#		var game = new Game(api, event.repo)
#		var reactor = new PrintReactor
#		reactor.react_event(game, event)
#	end
# end
# ~~~
#
# See module `reactors` and `listener` for more examples.
interface GameReactor

	# Reacts to this `event` and update `game` accordingly.
	#
	# Concrete `GameReactor` implement this method to update game data
	# for each specific GithubEvent.
	fun react_event(game: Game, event: GithubEvent) is abstract
end

redef class Game

	# Registered game reactors list.
	var reactors = new Array[GameReactor]

	# Register a reactor for this listener.
	fun add_reactor(reactors: GameReactor...) do self.reactors.add_all reactors

	# Register default game reactors.
	#
	# Override this method to select custom reactors.
	protected fun init_default_reactors do end

	# Register a new game event for this entity.
	fun add_github_event(event: KnownGithubEvent) do event.save

	# Dispatch event to registered `reactors`.
	fun apply_github_event(event: GithubEvent) do
		message(2, "Apply event {event} for {name}")
		if game.has_github_event(event) then
			message(3, "Event {event} already applied for {name}")
			return
		end
		for reactor in reactors do
			message(3, "Apply reactor {reactor} on {event}")
			reactor.react_event(game, event)
		end
		game.add_github_event new KnownGithubEvent(self, event)
	end

	# Was `event` already applied for `self`?
	#
	# We look in the DB for the exact same JSON object.
	private fun has_github_event(event: GithubEvent): Bool do
		var req = new JsonObject
		req["event_hash"] = event.json.to_json.md5
		var res = game.db.collection("github_events").find(req)
		if res != null then
			var other = new KnownGithubEvent.from_json(game, res)
			return event.json == other.github_event.json
		end
		return false
	end

	init do init_default_reactors
end

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
	fun load_events(skip, limit: nullable Int): Array[GameEvent] do
		var s = skip or else 0
		var l = limit or else 0
		var subreq = new JsonObject
		subreq["game"] = game.key
		subreq["owner"] = key
		var order_by = new JsonObject
		order_by["time"] = -1
		var req = new JsonObject
		req["$query"] = subreq
		req["$orderby"] = order_by
		var res = new Array[GameEvent]
		for obj in game.db.collection("events").find_all(req, s, l) do
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

	# Does `self` has a registered GameEvent with `id`?
	fun has_event(id: String): Bool do return load_event(id) != null
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

	redef fun to_json do
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

# A Github event already processed by this game.
class KnownGithubEvent
	super GameEntity

	redef var collection_name = "github_events"

	redef var game

	# Github Event associated.
	var github_event: GithubEvent

	# Return a hash for this github_event.
	#
	# The hash is used to check if a github event already exists in the db.
	fun event_hash: String do return github_event.json.to_json.md5

	redef fun key do return event_hash

	# Init `self` from a JsonObject.
	init from_json(game: Game, json: JsonObject) do
		var obj = json["github_event"].as(JsonObject)
		var event = new GithubEvent.from_json(game.api, obj)
		init(game, event)
	end

	redef fun to_json do
		var json = super
		json["game"] = game.key
		json["github_event"] = github_event.json
		json["event_hash"] = event_hash
		return json
	end
end

# Compare `GameEvent` to sort them from the most recent to the older.
class EventTimeComparator
	super Comparator

	redef type COMPARED: GameEvent

	redef fun compare(a, b) do return b.time <=> a.time
end
