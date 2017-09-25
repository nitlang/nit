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

# Test module for `listener.nit`
module test_listener is test

import test_helper
import reactors
import achievements
import events_generator

private class DummyListener
	super NitrpgTestHelper
	test

	var reactors = new Array[GameReactor]

	fun apply_event(event: GithubEvent, db: MongoDb) do
		var game = load_game(event.repo.full_name, db)
		for reactor in reactors do
			reactor.react_event(game, event)
		end
	end

	fun add_reactor(reactors: GameReactor...) do self.reactors.add_all reactors
end

class TestListener
	super NitrpgTestHelper
	test

	var generator = new EventsGenerator(api)

	var repo: Repo is lazy do return load_repo("Morriar/nit")

	fun test_game_issue_stats is test do
		var db = gen_test_db
		var l = new DummyListener
		l.add_reactor(new StatisticsReactor)

		var issue = api.load_issue(repo, 322)
		assert issue != null

		l.apply_event(generator.issue_open(repo, issue), db)
		var game = load_game("Morriar/nit", db)
		assert game.stats.overall["issues"] == 1
		assert game.stats.overall["issues_open"] == 1
		l.apply_event(generator.issue_close(repo, issue), db)
		game = load_game("Morriar/nit", db)
		assert game.stats.overall["issues"] == 1
		assert game.stats.overall["issues_open"] == 0
		l.apply_event(generator.issue_reopen(repo, issue), db)
		game = load_game("Morriar/nit", db)
		assert game.stats.overall["issues"] == 1
		assert game.stats.overall["issues_open"] == 1
	end

	fun test_player_issue_stats is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var l = new DummyListener
		l.add_reactor(new StatisticsReactor)

		var issue = api.load_issue(repo, 322)
		assert issue != null

		l.apply_event(generator.issue_open(repo, issue), db)
		var player = new Player(game, "Morriar")
		assert player.stats.overall["issues"] == 1
		assert player.stats.overall["issues_open"] == 1
		l.apply_event(generator.issue_close(repo, issue), db)
		player = new Player(game, "Morriar")
		assert player.stats.overall["issues"] == 1
		assert player.stats.overall["issues_open"] == 0
		l.apply_event(generator.issue_reopen(repo, issue), db)
		player = new Player(game, "Morriar")
		assert player.stats.overall["issues"] == 1
		assert player.stats.overall["issues_open"] == 1
	end

	fun test_game_pr_stats is test do
		var db = gen_test_db
		var l = new DummyListener
		l.add_reactor(new StatisticsReactor)

		var pr = api.load_pull(repo, 275)
		assert pr != null

		l.apply_event(generator.pull_open(repo, pr), db)
		var game = load_game("Morriar/nit", db)
		assert game.stats.overall["pulls"] == 1
		assert game.stats.overall["pulls_open"] == 1
		assert game.stats.overall["commits"] == 0
		pr.merged = false
		l.apply_event(generator.pull_close(repo, pr), db)
		game = load_game("Morriar/nit", db)
		assert game.stats.overall["pulls"] == 1
		assert game.stats.overall["pulls_open"] == 0
		assert game.stats.overall["commits"] == 0
		l.apply_event(generator.pull_reopen(repo, pr), db)
		game = load_game("Morriar/nit", db)
		assert game.stats.overall["pulls"] == 1
		assert game.stats.overall["pulls_open"] == 1
		assert game.stats.overall["commits"] == 0
		pr.merged = true
		l.apply_event(generator.pull_close(repo, pr), db)
		game = load_game("Morriar/nit", db)
		assert game.stats.overall["pulls"] == 1
		assert game.stats.overall["pulls_open"] == 0
		assert game.stats.overall["commits"] == 2
	end

	fun test_game_issue_comment_stats is test do
		var db = gen_test_db
		var l = new DummyListener
		l.add_reactor(new StatisticsReactor)

		var issue = api.load_issue(repo, 322)
		assert issue != null
		var comment = api.load_issue_comment(repo, 76119442)
		assert comment != null

		comment.body = "foo bar"
		l.apply_event(generator.issue_comment_event(repo, issue, comment), db)
		var game = load_game("Morriar/nit", db)
		assert game.stats.overall["comments"] == 1
		assert game.stats.overall["reviews"] == 0
		comment.body = "foo +1 bar"
		l.apply_event(generator.issue_comment_event(repo, issue, comment), db)
		game = load_game("Morriar/nit", db)
		assert game.stats.overall["comments"] == 2
		assert game.stats.overall["reviews"] == 1
	end

	fun test_player_pull_reactor is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var l = new DummyListener
		l.add_reactor(new PlayerReactor)

		var pull = api.load_pull(repo, 275)
		assert pull != null

		l.apply_event(generator.pull_open(repo, pull), db)
		var player = new Player(game, "itch76")
		assert player.stats.overall["nitcoins"] == 10
		pull.merged = false
		l.apply_event(generator.pull_close(repo, pull), db)
		player = new Player(game, "itch76")
		assert player.stats.overall["nitcoins"] == 0
		l.apply_event(generator.pull_reopen(repo, pull), db)
		player = new Player(game, "itch76")
		assert player.stats.overall["nitcoins"] == 10
		pull.merged = true
		l.apply_event(generator.pull_close(repo, pull), db)
		player = new Player(game, "itch76")
		assert player.stats.overall["nitcoins"] == 12
	end

	fun test_player_review_reactor is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var l = new DummyListener
		l.add_reactor(new PlayerReactor)

		var pull = api.load_pull(repo, 275)
		assert pull != null
		var comment = api.load_issue_comment(repo, 36961230)
		assert comment != null

		# TODO handle multiple review by the same user

		# no review in opened issue
		pull.state = "open"
		comment.body = "foo bar"
		l.apply_event(generator.issue_comment_event(repo, pull, comment), db)
		var player = new Player(game, "Morriar")
		assert player.stats.overall["nitcoins"] == 0

		# review in opened issue
		pull.state = "open"
		comment.body = "foo +1 bar"
		l.apply_event(generator.issue_comment_event(repo, pull, comment), db)
		player = new Player(game, "Morriar")
		print player.stats.overall["nitcoins"]
		assert player.stats.overall["nitcoins"] == 2

		# review in closed issue
		pull.state = "closed"
		comment.body = "foo +1 bar"
		l.apply_event(generator.issue_comment_event(repo, pull, comment), db)
		player = new Player(game, "Morriar")
		assert player.stats.overall["nitcoins"] == 2

		# review in reopened issue
		pull.state = "open"
		comment.body = "foo +1 bar"
		l.apply_event(generator.issue_comment_event(repo, pull, comment), db)
		player = new Player(game, "Morriar")
		assert player.stats.overall["nitcoins"] == 4
	end

	fun test_X_issues_achievements is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var l = new DummyListener
		l.add_reactor(new StatisticsReactor)
		l.add_reactor(new Player1Issue, new Player100Issues, new Player1KIssues)

		var issue = api.load_issue(repo, 322)
		assert issue != null

		for i in [0, 99, 999] do
			var id = "player_{i + 1}_issue"
			if i > 0 then id = "{id}s"
			var player = new Player(game, "Morriar")
			player.stats["issues"] = i
			player.save
			l.apply_event(generator.issue_open(repo, issue), db)
			assert player.load_achievements.has_key(id)
		end
		var player = new Player(game, "Morriar")
		assert player.stats.overall["nitcoins"] == 1110
	end

	fun test_X_pulls_achievements is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var l = new DummyListener
		l.add_reactor(new StatisticsReactor)
		l.add_reactor(new Player1Pull, new Player100Pulls, new Player1KPulls)

		var pull = api.load_pull(repo, 275)
		assert pull != null

		for i in [0, 99, 999] do
			var id = "player_{i + 1}_pull"
			if i > 0 then id = "{id}s"
			var player = new Player(game, "itch76")
			player.stats["pulls"] = i
			player.save
			l.apply_event(generator.pull_open(repo, pull), db)
			assert player.load_achievements.has_key(id)
		end
		var player = new Player(game, "itch76")
		assert player.stats.overall["nitcoins"] == 1110
	end

	fun test_X_commits_achievements is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var l = new DummyListener
		l.add_reactor(new StatisticsReactor)
		l.add_reactor(new Player1Commit, new Player100Commits)
		l.add_reactor(new Player1KCommits, new Player10KCommits)

		var pull = api.load_pull(repo, 275)
		assert pull != null
		pull.state = "closed"
		pull.merged = true

		for i in [0, 99, 999, 9999] do
			var id = "player_{i + 1}_commit"
			if i > 0 then id = "{id}s"
			var player = new Player(game, "itch76")
			player.stats["commits"] = i
			player.save
			l.apply_event(generator.pull_close(repo, pull), db)
			assert player.load_achievements.has_key(id)
		end
		var player = new Player(game, "itch76")
		assert player.stats.overall["nitcoins"] == 11110
	end

	fun test_X_comments_achievements is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var l = new DummyListener
		l.add_reactor(new StatisticsReactor)
		l.add_reactor(new Player1Comment, new Player100Comments, new Player1KComments)

		var pull = api.load_pull(repo, 275)
		assert pull != null
		var comment = api.load_issue_comment(repo, 36961230)
		assert comment != null

		for i in [0, 99, 999] do
			var id = "player_{i + 1}_comment"
			if i > 0 then id = "{id}s"
			var player = new Player(game, "Morriar")
			player.stats["comments"] = i
			player.save
			l.apply_event(generator.issue_comment_event(repo, pull, comment), db)
			assert player.load_achievements.has_key(id)
		end
		var player = new Player(game, "Morriar")
		assert player.stats.overall["nitcoins"] == 1110
	end

    fun test_issues_achievements is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var l = new DummyListener
		l.add_reactor(new IssueAboutNitdoc, new IssueAboutFFI)

		var issue = api.load_issue(repo, 322)
		assert issue != null

		issue.title = "nitdoc ffi"
		l.apply_event(generator.issue_open(repo, issue), db)
		var player = new Player(game, "Morriar")
		assert player.load_achievements.has_key("issue_about_nitdoc")
		assert player.load_achievements.has_key("issue_about_ffi")
		assert player.stats.overall["nitcoins"] == 20
	end

	fun test_comments_reactor is test do
		var db = gen_test_db
		var game = load_game("Morriar/nit", db)
		var l = new DummyListener
		l.add_reactor(new PlayerPingGod, new PlayerFirstReview, new PlayerSaysNitcoin)

		var pull = api.load_pull(repo, 275)
		assert pull != null
		var comment = api.load_issue_comment(repo, 36961230)
		assert comment != null

		comment.body = "@{game.repo.owner.login}"
		l.apply_event(generator.issue_comment_event(repo, pull, comment), db)
		var player = new Player(game, "Morriar")
		assert player.load_achievements.has_key("player_ping_god")
		assert player.stats.overall["nitcoins"] == 50

		comment.body = "+1"
		l.apply_event(generator.issue_comment_event(repo, pull, comment), db)
		player = new Player(game, "Morriar")
		assert player.load_achievements.has_key("player_first_review")
		assert player.stats.overall["nitcoins"] == 60

		comment.body = "Nitcoins"
		l.apply_event(generator.issue_comment_event(repo, pull, comment), db)
		player = new Player(game, "Morriar")
		assert player.load_achievements.has_key("player_says_nitcoin")
		assert player.stats.overall["nitcoins"] == 70
	end
end
