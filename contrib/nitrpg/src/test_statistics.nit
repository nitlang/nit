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

# Test module for `stats.nit`
module test_statistics is test

import test_helper
import statistics

class TestGame
	super NitrpgTestHelper
	test

	fun test_game_stats is test do
		var db = gen_test_db
		var game = load_game("privat/nit", db)
		var stats = game.stats
		assert stats.overall["test"] == 0
		stats.overall.inc("test")
		assert stats.overall["test"] == 1
		stats.save
		var ogame = load_game("privat/nit", db)
		var ostats = ogame.stats
		ostats.overall.inc("test")
		assert ostats.overall["test"] == 2
	end
end

class TestPlayer
	super NitrpgTestHelper
	test

	fun test_player_stats is test do
		var db = gen_test_db
		var game = load_game("privat/nit", db)
		var player = new Player(game, "Morriar")
		var stats = player.stats
		assert stats.overall["test"] == 0
		stats.overall.inc("test")
		assert stats.overall["test"] == 1
		stats.save
		var oplayer = new Player(game, "Morriar")
		var ostats = oplayer.stats
		ostats.overall.inc("test")
		assert ostats.overall["test"] == 2
	end
end

class TestGameStats
	super NitrpgTestHelper
	test

	fun test_init_from_json is test do
		var db = gen_test_db
		var game = load_game("privat/nit", db)
		var owner = new Player(game, "Morriar")
		var json = """{
			"period": "2015",
			"owner": "Morriar",
			"values": {
				"test1": 10,
				"test2": 20
			}
		}""".parse_json.as(JsonObject)
		var stats = new GameStats.from_json(game, "2015", owner, json)
		assert stats["test0"] == 0
		assert stats["test1"] == 10
		assert stats["test2"] == 20
	end
end
