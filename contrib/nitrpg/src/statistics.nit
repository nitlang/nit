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

redef class Game

	# Statistics for this game instance.
	var stats = new GameStats

	redef fun from_json(json) do
		super
		if json.has_key("statistics") then
			stats.from_json(json["statistics"].as(JsonObject))
		end
	end

	redef fun to_json do
		var obj = super
		obj["statistics"] = stats.to_json
		return obj
	end

	redef fun pretty do
		var res = new FlatBuffer
		res.append super
		res.append "# stats:\n"
		res.append stats.pretty
		return res.write_to_string
	end

	redef fun clear do
		super
		stats.clear
	end
end

# Game statistics structure that can be saved as a `GameEntity`.
class GameStats
	super GameEntity

	redef var key = "statistics"

	# Used internally to stats values.
	private var stats = new HashMap[String, Int]

	init do clear

	# Load `self` from saved data
	private fun from_json(json: JsonObject) do
		for k, v in json do stats[k] = v.as(Int)
	end

	redef fun to_json do
		var obj = new JsonObject
		for k, v in stats do obj[k] = v
		return obj
	end

	# Retrieves the current value of `key` statistic entry.
	fun [](key: String): Int do return stats[key]

	# Increments the value of `key` statistic entry by 1.
	fun incr(key: String) do stats[key] += 1

	# Decrements the value of `key` statistic entry by 1.
	fun decr(key: String) do stats[key] -= 1

	# Reset game stats.
	fun clear do
		stats["issues"] = 0
		stats["issues_open"] = 0
		stats["pulls"] = 0
		stats["pulls_open"] = 0
	end

	redef fun pretty do
		var res = new FlatBuffer
		for k, v in stats do
			res.append "# {v} {k}\n"
		end
		return res.write_to_string
	end
end

# `GameReactor` that computes statistics about the game.
class StatisticsReactor
	super GameReactor

	redef fun react_event(game, e) do
		super # log events
		e.react_stats_event(game)
		game.save
	end
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
		if action == "opened" then
			game.stats.incr("issues")
			game.stats.incr("issues_open")
		else if action == "reopened" then
			game.stats.incr("issues_open")
		else if action == "closed" then
			game.stats.decr("issues_open")
		end
	end
end

redef class PullRequestEvent

	# Count opened and closed pull requests.
	redef fun react_stats_event(game) do
		if action == "opened" then
			game.stats.incr("pulls")
			game.stats.incr("pulls_open")
		else if action == "reopened" then
			game.stats.incr("pulls_open")
		else if action == "closed" then
			game.stats.decr("pulls_open")
		end
	end
end
