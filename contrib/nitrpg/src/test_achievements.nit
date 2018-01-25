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

# Test module for `achievements.nit`
module test_achievements is test

import test_helper
import achievements

class TestGame
	super NitrpgTestHelper
	test

	fun test_add_achievement is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var a1 = new Achievement(game, "test_id1", "test_name", "test_desc", 15)
		var a2 = new Achievement(game, "test_id2", "test_name", "test_desc", 15)
		game.add_achievement(a1)
		game.add_achievement(a2)
		assert game.load_achievements.length == 2
	end

	fun test_load_achievement is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var a1 = new Achievement(game, "test_id1", "test_name", "test_desc", 15)
		var a2 = new Achievement(game, "test_id2", "test_name", "test_desc", 15)
		game.add_achievement(a1)
		assert game.load_achievement(a1.id).id == "test_id1"
		assert game.load_achievement(a2.id) == null
	end

	fun test_load_achievements is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var a1 = new Achievement(game, "test_id1", "test_name", "test_desc", 15)
		var a2 = new Achievement(game, "test_id2", "test_name", "test_desc", 15)
		var a3 = new Achievement(game, "test_id3", "test_name", "test_desc", 15)
		game.add_achievement(a1)
		game.add_achievement(a2)
		game.db.collection("achievements").insert(a3.to_json_object)
		var ok = [a1.id, a2.id]
		var res = game.load_achievements
		assert res.length == 2
		for a in res.values do assert ok.has(a.id)
	end
end

class TestPlayer
	super NitrpgTestHelper
	test

	fun test_add_achievement is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var player1 = new Player(game, "Morriar")
		var a1 = new Achievement(game, "test_id1", "test_name", "test_desc", 15)
		var a2 = new Achievement(game, "test_id2", "test_name", "test_desc", 15)
		player1.add_achievement(a1)
		player1.add_achievement(a2)
		assert player1.load_achievements.length == 2
	end

	fun test_load_achievement is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var player1 = new Player(game, "Morriar")
		var player2 = new Player(game, "xymus")
		var a1 = new Achievement(game, "test_id1", "test_name", "test_desc", 15)
		var a2 = new Achievement(game, "test_id2", "test_name", "test_desc", 15)
		player1.add_achievement(a1)
		player2.add_achievement(a2)
		assert player1.load_achievement(a1.id).id == "test_id1"
		assert player1.load_achievement(a2.id) == null
		assert player2.load_achievement(a2.id).id == "test_id2"
		assert player2.load_achievement(a1.id) == null
	end

	fun test_load_achievements is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var player1 = new Player(game, "Morriar")
		var player2 = new Player(game, "xymus")
		var a1 = new Achievement(game, "test_id1", "test_name", "test_desc", 15)
		var a2 = new Achievement(game, "test_id2", "test_name", "test_desc", 15)
		var a3 = new Achievement(game, "test_id3", "test_name", "test_desc", 15)
		player1.add_achievement(a1)
		player1.add_achievement(a2)
		player2.add_achievement(a3)
		var ok = [a1.id, a2.id]
		var res = player1.load_achievements
		assert res.length == 2
		for a in res.values do assert ok.has(a.id)
	end
end

class TestAchievement
	super NitrpgTestHelper
	test

	fun test_init is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var a = new Achievement(game, "test_id", "test_name", "test_desc", 15)
		assert a.id == "test_id"
		assert a.name == "test_name"
		assert a.desc == "test_desc"
		assert a.reward == 15
	end

	fun test_init_from_json is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var json = """{
			"id": "test_id",
			"name": "test_name",
			"desc": "test_desc",
			"reward": 15
		}""".parse_json.as(JsonObject)
		var a = new Achievement.from_json(game, json)
		assert a.id == "test_id"
		assert a.name == "test_name"
		assert a.desc == "test_desc"
		assert a.reward == 15
	end
end
