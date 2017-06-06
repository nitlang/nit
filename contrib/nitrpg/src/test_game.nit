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

# Test module for `game.nit`.
module test_game is test

import test_helper

class TestGame
	super NitrpgTestHelper
	test

	fun test_add_player is test do
		var db = gen_test_db
		var game = load_game("privat/nit", db)
		var users = ["Morriar", "xymus"]
		for name in users do
			game.add_player(game.api.load_user(name).as(not null))
		end
		var res = game.load_players.values
		assert res.length == 2
		for player in res do
			assert users.has(player.name)
		end
	end

	fun test_load_player is test do
		var db = gen_test_db
		var game = load_game("privat/nit", db)
		var ogame = load_game("Morriar/nit", db)

		var player1 = new Player(game, "Morriar")
		var player2 = new Player(ogame, "privat")
		game.db.collection("players").insert(player1.to_json_object)
		ogame.db.collection("players").insert(player2.to_json_object)

		assert game.load_player("privat") == null
		assert game.load_player("Morriar").name == "Morriar"
		assert ogame.load_player("privat").name == "privat"
		assert ogame.load_player("Morriar") == null
	end

	fun test_load_players is test do
		var db = gen_test_db
		var game = load_game("privat/nit", db)
		var ogame = load_game("Morriar/nit", db)

		var player1 = new Player(game, "Morriar")
		var player2 = new Player(ogame, "privat")
		var player3 = new Player(game, "xymus")
		game.db.collection("players").insert(player1.to_json_object)
		ogame.db.collection("players").insert(player2.to_json_object)
		game.db.collection("players").insert(player3.to_json_object)

		var players = game.load_players
		var ok = ["Morriar", "xymus"]
		for player in players.values do assert ok.has(player.name)
	end
end

class TestPlayer
	super NitrpgTestHelper
	test

	fun test_init is test do
		var db = gen_test_db
		var game = load_game("privat/nit", db)
		var player = new Player(game, "Morriar")
		assert player.name == "Morriar"
		assert player.user.login == "Morriar"
		assert player.nitcoins == 0
	end

	fun test_init_from_json is test do
		var db = gen_test_db
		var game = load_game("privat/nit", db)
		var json = """{"name": "Morriar", "nitcoins": 10}""".parse_json
		var player = new Player.from_json(game, json.as(JsonObject))
		assert player.name == "Morriar"
		assert player.user.login == "Morriar"
		assert player.nitcoins == 10
	end

	fun test_save is test do
		var db = gen_test_db
		var game = load_game("privat/nit", db)
		var json = """{"name": "Morriar", "nitcoins": 10}""".parse_json.as(JsonObject)
		var player = new Player.from_json(game, json)
		player.save
		assert game.db.collection("players").find(json) != null
	end

	fun test_game_add_player is test do
		var db = gen_test_db
		var game = load_game("privat/nit", db)
		game.add_player(game.api.load_user("Morriar").as(not null))
		var json = """{"name": "Morriar"}""".parse_json.as(JsonObject)
		assert game.db.collection("players").find(json) != null
	end

	fun test_game_load_player is test do
		var db = gen_test_db
		var game = load_game("privat/nit", db)
		var json = """{"name": "Morriar", "nitcoins": 10}""".parse_json.as(JsonObject)
		var player = new Player.from_json(game, json)
		player.save
		var oplayer = game.load_player("Morriar")
		assert oplayer != null
		assert player.nitcoins == oplayer.nitcoins
	end
end

class TestUser
	super NitrpgTestHelper
	test

	fun test_player is test do
		var db = gen_test_db
		var api = new GithubAPI(get_github_oauth)
		var game = load_game("privat/nit", db)
		var user = api.load_user("Morriar")
		assert user != null
		var player = user.player(game)
		assert player.name == "Morriar"
		game.clear
	end
end
