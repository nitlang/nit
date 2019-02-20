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

# Test tools for NitRPG.
module test_helper

import game
import github::cache

# Used to factorize test treatments.
abstract class NitrpgTestHelper

	# Github API client
	var api: GithubAPI do
		var api = new GithubAPI(get_github_oauth)
		api.enable_cache = true
		return api
	end

	# Mongo API client
	var mongo = new MongoClient("mongodb://mongo:27017/")

	# Load a new test database by with a name
	private fun load_db(name: String): MongoDb do return mongo.database(name)

	# Load a repo by its name.
	fun load_repo(name: String): Repo do
		var repo = api.load_repo(name)
		assert repo != null
		return repo
	end

	# Load a game by its name.
	fun load_game(name: String, db: MongoDb): Game do
		var game = new Game(api, load_repo(name))
		game.db_name = db.name
		return game
	end

	# Stack of db used for testing.
	var test_dbs = new Array[MongoDb]

	# Gen a test db with a random name (to avoid race conditions).
	fun gen_test_db: MongoDb do
		var testid = "NIT_TESTING_ID".environ.to_i
		var db_name = "test_nitrpg_{testid}"
		var db = load_db(db_name)
		test_dbs.add db
		return db
	end

	# Should be called after your test.
	fun drop_test_db do
		var db = test_dbs.pop
		db.drop
	end

	# Drop the databse after each test
	fun after_test is after do drop_test_db
end
