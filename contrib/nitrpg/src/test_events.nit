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

# Test module for `events.nit`
module test_events is test

import test_helper
import events

class TestGame
	super NitrpgTestHelper
	test

	fun test_add_event is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var event1 = new GameEvent(game, "test_kind", new JsonObject)
		var event2 = new GameEvent(game, "test_kind", new JsonObject)
		game.add_event(event1)
		game.add_event(event2)
		assert game.load_events.length == 2
	end

	fun test_load_event is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var event1 = new GameEvent(game, "test_kind", new JsonObject)
		var event2 = new GameEvent(game, "test_kind", new JsonObject)
		game.add_event(event1)
		assert game.load_event(event1.internal_id).kind == "test_kind"
		assert game.load_event(event2.internal_id) == null
	end

	fun test_load_events is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var event1 = new GameEvent(game, "test_kind", new JsonObject)
		var event2 = new GameEvent(game, "test_kind", new JsonObject)
		var event3 = new GameEvent(game, "test_kind", new JsonObject)
		game.add_event(event1)
		game.add_event(event2)
		game.db.collection("events").insert(event3.to_json_object)
		var ok = [event1.internal_id, event2.internal_id]
		var res = game.load_events
		assert res.length == 2
		for event in res do assert ok.has(event.internal_id)
	end
end

class TestPlayer
	super NitrpgTestHelper
	test

	fun test_add_event is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var player1 = new Player(game, "Morriar")
		var player2 = new Player(game, "xymus")
		var event1 = new GameEvent(game, "test_kind", new JsonObject)
		var event2 = new GameEvent(game, "test_kind", new JsonObject)
		player1.add_event(event1)
		player1.add_event(event2)
		assert player1.load_events.length == 2
		assert player2.load_events.length == 0
	end

	fun test_load_event is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var player1 = new Player(game, "Morriar")
		var player2 = new Player(game, "xymus")
		var event1 = new GameEvent(game, "test_kind", new JsonObject)
		var event2 = new GameEvent(game, "test_kind", new JsonObject)
		player1.add_event(event1)
		player2.add_event(event2)
		assert player1.load_event(event1.internal_id).kind == "test_kind"
		assert player1.load_event(event2.internal_id) == null
		assert player2.load_event(event2.internal_id).kind == "test_kind"
		assert player2.load_event(event1.internal_id) == null
	end

	fun test_load_events is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var player1 = new Player(game, "Morriar")
		var player2 = new Player(game, "xymus")
		var event1 = new GameEvent(game, "test_kind", new JsonObject)
		var event2 = new GameEvent(game, "test_kind", new JsonObject)
		var event3 = new GameEvent(game, "test_kind", new JsonObject)
		player1.add_event(event1)
		player1.add_event(event2)
		player2.add_event(event3)
		assert player1.load_events.length == 2
		assert player2.load_events.length == 1
		var ok = [event1.internal_id, event2.internal_id]
		for event in player1.load_events do assert ok.has(event.internal_id)
	end
end

class TestGameEvent
	super NitrpgTestHelper
	test

	fun test_init is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var event = new GameEvent(game, "test_kind", new JsonObject)
		assert event.to_json_object["kind"] == "test_kind"
	end

	fun test_init_from_json is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var json = """{
			"internal_id": "test_id",
			"kind": "test_kind",
			"time": "2015-02-05T00:00:00Z",
			"data": {"test_field": "test_value"}
		}""".parse_json.as(JsonObject)
		var event = new GameEvent.from_json(game, json)
		assert event.internal_id == "test_id"
		assert event.kind == "test_kind"
		assert event.data.to_json == """{"test_field":"test_value"}"""
		assert event.time.to_s == "2015-02-05T00:00:00Z"
	end
end
