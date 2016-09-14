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

# Statistics about the Game.
#
# This module uses `GameReactor` to extract statistics about the game from
# triggered `Github::Event`.
module statistics

import game
import github::hooks
import counter

redef class GameEntity

	# Statistics manager for this entity.
	fun stats: GameStatsManager is abstract
end

redef class Game

	redef var stats is lazy do return new GameStatsManager(game, self)

	redef fun pretty do
		var res = new FlatBuffer
		res.append super
		res.append "# stats:\n"
		res.append stats.pretty
		return res.write_to_string
	end

	redef fun save do
		super
		stats.save
	end
end

redef class Player

	redef var stats is lazy do return new GameStatsManager(game, self)

	redef fun nitcoins do return stats["nitcoins"]
	redef fun nitcoins=(nc) do stats["nitcoins"] = nc

	redef fun pretty do
		var res = new FlatBuffer
		res.append super
		res.append "# stats:\n"
		res.append stats.pretty
		return res.write_to_string
	end

	redef fun save do
		super
		stats.save
	end
end

# Store game stats for defined period.
class GameStatsManager
	super GameEntity
	super Counter[String]

	redef var game

	# The GameEntity monitored by these statistics.
	var owner: GameEntity

	# Current date to extract stats
	private var date = new Tm.gmtime

	# Returns the `GameStats` instance for the overall statistics.
	var overall: GameStats = load_stats_for("all") is lazy

	# Returns the `GameStats` instance for the current year statistics.
	var yearly: GameStats = load_stats_for(date.strftime("%Y")) is lazy

	# Returns the `GameStats` instance for the current month statistics.
	var monthly: GameStats = load_stats_for(date.strftime("%Y-%m")) is lazy

	# Returns the `GameStats` instance for the current day statistics.
	var daily: GameStats = load_stats_for(date.strftime("%Y-%m-%d")) is lazy

	# Returns the `GameStats` instance for the current week statistics.
	var weekly: GameStats = load_stats_for(date.strftime("%Y-W%U")) is lazy

	# Load statistics for a `period` key.
	fun load_stats_for(period: String): GameStats do
		var req = new JsonObject
		req["period"] = period
		req["owner"] = owner.key
		var obj = game.db.collection("statistics").find(req)
		if obj isa JsonObject then
			return new GameStats.from_json(game, period, owner, obj)
		else
			return new GameStats(game, period, owner)
		end
	end

	redef fun [](key) do return overall[key]

	redef fun []=(key, value) do
		overall[key] = value
		yearly[key] = value
		monthly[key] = value
		daily[key] = value
		weekly[key] = value
	end

	redef fun inc(e) do
		overall.inc(e)
		yearly.inc(e)
		monthly.inc(e)
		daily.inc(e)
		weekly.inc(e)
	end

	redef fun dec(e) do
		overall.dec(e)
		yearly.dec(e)
		monthly.dec(e)
		daily.dec(e)
		weekly.dec(e)
	end

	redef fun save do
		overall.save
		yearly.save
		monthly.save
		daily.save
		weekly.save
	end

	redef fun pretty do return overall.pretty
end

# Game statistics structure that can be saved as a `GameEntity`.
class GameStats
	super GameEntity
	super Counter[String]

	redef var game

	redef var collection_name = "statistics"

	# The period these stats are about.
	var period: String

	# The game entity these stats are about.
	var owner: GameEntity

	redef var key = "{owner.key}-{period}" is lazy

	# Load `self` from saved data.
	init from_json(game: Game, period: String, owner: GameEntity, json: JsonObject) do
		init(game, period, owner)
		var values = json.get_or_null("values")
		if not values isa JsonObject then return
		for k, v in values do self[k] = v.as(Int)
	end

	redef fun to_json_object do
		var obj = super
		obj["period"] = period
		obj["owner"] = owner.key
		var values = new JsonObject
		values.add_all(self)
		obj["values"] = values
		return obj
	end

	redef fun pretty do
		var res = new FlatBuffer
		for k, v in self do
			res.append "# {v} {k}\n"
		end
		return res.write_to_string
	end
end

# `GameReactor` that computes statistics about the game.
class StatisticsReactor
	super GameReactor

	redef fun react_event(game, e) do e.react_stats_event(game)
end

redef class GithubEvent
	# Reacts to a statistics related event.
	#
	# Called by `StatisticsReactor::react_event`.
	# No-op by default.
	private fun react_stats_event(game: Game) do end
end

redef class IssuesEvent

	# Count opened and closed issues.
	redef fun react_stats_event(game) do
		var player = issue.user.player(game)
		if action == "opened" then
			game.stats.inc("issues")
			game.stats.inc("issues_open")
			game.save
			player.stats.inc("issues")
			player.stats.inc("issues_open")
			player.save
		else if action == "reopened" then
			game.stats.inc("issues_open")
			game.save
			player.stats.inc("issues_open")
			player.save
		else if action == "closed" then
			game.stats.dec("issues_open")
			game.save
			player.stats.dec("issues_open")
			player.save
		end
	end
end

redef class PullRequestEvent

	# Count opened and closed pull requests.
	redef fun react_stats_event(game) do
		var player = pull.user.player(game)
		if action == "opened" then
			game.stats.inc("pulls")
			game.stats.inc("pulls_open")
			game.save
			player.stats.inc("pulls")
			player.stats.inc("pulls_open")
			player.save
		else if action == "reopened" then
			game.stats.inc("pulls_open")
			game.save
			player.stats.inc("pulls_open")
			player.save
		else if action == "closed" then
			game.stats.dec("pulls_open")
			player.stats.dec("pulls_open")
			if pull.merged then
				game.stats["commits"] += pull.commits
				player.stats["commits"] += pull.commits
			end
			game.save
			player.save
		end
	end
end

redef class IssueCommentEvent

	# Count posted comments
	redef fun react_stats_event(game) do
		if action == "created" then
			var player = comment.user.player(game)
			game.stats.inc("comments")
			player.stats.inc("comments")
			# FIXME use a more precise way to locate reviews
			if comment.is_ack then
				game.stats.inc("reviews")
				player.stats.inc("reviews")
			end
			game.save
			player.save
		end
	end
end
