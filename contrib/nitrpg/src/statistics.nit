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

	# Load statistics for this `MEntity` if any.
	fun load_statistics: nullable GameStats do
		var key = self.key / "statistics"
		if not game.store.has_key(key) then return null
		var json = game.store.load_object(key)
		return new GameStats.from_json(game, json)
	end

	# Save statistics under this `MEntity`.
	fun save_statistics(stats: GameStats) do
		game.store.store_object(key / stats.key, stats.to_json)
	end
end

redef class Game

	# Statistics for this game instance.
	var stats: GameStats is lazy do
		return load_statistics or else new GameStats(game)
	end

	redef fun save do
		super
		save_statistics(stats)
	end

	redef fun pretty do
		var res = new FlatBuffer
		res.append super
		res.append "# stats:\n"
		res.append stats.pretty
		return res.write_to_string
	end
end

# Game statistics structure that can be saved as a `GameEntity`.
class GameStats
	super GameEntity
	super Counter[String]

	redef var game

	redef var key = "statistics"

	# Load `self` from saved data
	init from_json(game: Game, json: JsonObject) do
		self.game = game
		for k, v in json do self[k] = v.as(Int)
	end

	redef fun to_json do
		var obj = new JsonObject
		for k, v in self do obj[k] = v
		return obj
	end

	# Decrements the value of `key` statistic entry by 1.
	fun dec(key: String) do
		if not has_key(key) then
			self[key] = 0
		else
			self[key] -= 1
		end
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
			game.stats.inc("issues")
			game.stats.inc("issues_open")
		else if action == "reopened" then
			game.stats.inc("issues_open")
		else if action == "closed" then
			game.stats.dec("issues_open")
		end
	end
end

redef class PullRequestEvent

	# Count opened and closed pull requests.
	redef fun react_stats_event(game) do
		if action == "opened" then
			game.stats.inc("pulls")
			game.stats.inc("pulls_open")
		else if action == "reopened" then
			game.stats.inc("pulls_open")
		else if action == "closed" then
			game.stats.dec("pulls_open")
		end
	end
end
