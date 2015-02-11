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

# `nitrpg` game structures.
#
# Here we define the main game entities:
#
# * `Game` holds all the entities for a game and provides high level services.
# * `Player` represents a `Github::User` which plays the `Game`.
#
# Developpers who wants to extend the game capabilities should look at
# the `GameReactor` abstraction.
module game

intrude import json::store
import github::events

# An entity within a `Game`.
#
# All game entities can be saved in a json format.
interface GameEntity
	# The game instance containing `self`.
	fun game: Game is abstract

	# Uniq key used for data storage.
	fun key: String is abstract

	# Save `self` as a json object.
	fun save do game.store.store_object(key, to_json)

	# Json representation of `self`.
	fun to_json: JsonObject  do return new JsonObject

	# Pretty print `self` to be displayed in a terminal.
	fun pretty: String is abstract
end

# Holder for game data and main services.
#
# Game is a `GameEntity` so it can be saved.
class Game
	super GameEntity

	redef fun game do return self

	# Returns the repo `full_name`.
	#
	# Example: `"privat/nit"`
	redef fun key do return repo.full_name

	# We need a `GithubAPI` client to load Github data.
	var api: GithubAPI

	# A game takes place in a `github::Repo`.
	var repo: Repo

	# Directory where game data are stored.
	var game_dir: String is lazy do return "nitrpg_data" / repo.full_name

	# Used for data storage.
	#
	# File are stored in `game_dir`.
	var store: JsonStore is lazy do return new JsonStore(game_dir)

	# Init the Game and try to load saved data.
	init do if store.has_key(key) then from_json(store.load_object(key))

	# Init `self` from a JsonObject.
	#
	# Used to load entities from saved data.
	fun from_json(json: JsonObject) do end

	# Create a player from a Github `User`.
	#
	# Or return the existing one from game data.
	fun add_player(user: User): Player do
		# check if player already exists
		var player = load_player(user.login)
		if player != null then return player
		# create and store new player
		player = new Player(self, user.login)
		player.save
		return player
	end

	# Get a Player from his `name` or null if no player was found.
	#
	# Looks for the player save file in game data.
	#
	# Returns `null` if the player cannot be found.
	# In this case, the player can be created with `add_player`.
	fun load_player(name: String): nullable Player do
		var key = "players" / name
		if not store.has_key(key) then return null
		var json = store.load_object(key)
		return new Player.from_json(self, json)
	end

	# List known players.
	#
	# This list is reloaded from game data each time its called.
	#
	# To add players see `add_player`.
	fun load_players: MapRead[String, Player] do
		var res = new HashMap[String, Player]
		if not store.has_collection("players") then return res
		var coll = store.list_collection("players")
		for id in coll do
			var name = id.to_s
			res[name] = load_player(name).as(not null)
		end
		return res
	end

	# Return a list of player name associated to their rank in the game.
	fun player_ranking: MapRead[String, Int] do
		var arr = load_players.values.to_a
		var res = new HashMap[String, Int]
		(new PlayerCoinComparator).sort(arr)
		var rank = 1
		for player in arr do
			res[player.name] = rank
			rank += 1
		end
		return res
	end

	# Erase all saved data for this game.
	fun clear do store.clear

	# Verbosity level used fo stdout.
	#
	# * `-1` quiet
	# * `0` error and warnings
	# * `1` info
	# * `2` debug
	var verbose_lvl = 0 is writable

	# Display `msg` if `lvl` >= `verbose_lvl`
	fun message(lvl: Int, msg: String) do
		if lvl > verbose_lvl then return
		print msg
	end

	redef fun pretty do
		var res = new FlatBuffer
		res.append "-------------------------\n"
		res.append "{repo.full_name}\n"
		res.append "-------------------------\n"
		res.append "# {load_players.length} players \n"
		return res.write_to_string
	end
end

# Players can battle on nitrpg for nitcoins and glory.
#
# A `Player` is linked to a `Github::User`.
class Player
	super GameEntity

	# Key is based on player `name`.
	redef var key is lazy do return "players" / name

	redef var game

	# FIXME contructor should be private

	# Player name.
	#
	# This is the unic key for this player.
	# Should be equal to the associated `Github::User::login`.
	#
	# The name is also used to load the user data lazilly from Github API.
	var name: String

	# Player amount of nitcoins.
	#
	# Nitcoins is the currency used in nitrpg.
	# They can be obtained by performing actions on the `Game::Repo`.
	var nitcoins: Int = 0 is public writable

	# `Github::User` linked to this player.
	var user: User is lazy do
		var user = game.api.load_user(name)
		assert user isa User
		return user
	end

	# Init `self` from a `json` object.
	#
	# Used to load players from saved data.
	init from_json(game: Game, json: JsonObject) do
		self.game = game
		name = json["name"].to_s
		nitcoins = json["nitcoins"].as(Int)
	end

	redef fun to_json do
		var json = super
		json["name"] = name
		json["nitcoins"] = nitcoins
		return json
	end

	redef fun pretty do
		var res = new FlatBuffer
		res.append "-- {name} ({nitcoins} $)\n"
		return res.write_to_string
	end

	redef fun to_s do return name
end

redef class User
	# The player linked to `self`.
	fun player(game: Game): Player is lazy do
		var player = game.load_player(login)
		if player == null then player = game.add_player(self)
		return player
	end
end

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
# ~~~
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

# utils

# Sort players by descending number of nitcoins.
#
# The first in the list is the player with the more of nitcoins.
class PlayerCoinComparator
	super Comparator

	redef type COMPARED: Player

	redef fun compare(a, b) do return b.nitcoins <=> a.nitcoins
end
