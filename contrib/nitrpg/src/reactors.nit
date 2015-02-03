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

# Various implementations of `GameReactor` can be found here.
#
# TODO This module use a lot of magic numbers for nitcoin rewards.
# This should be extracted from configuration or stored elsewhere.
module reactors

import game

# Reacts to event that can affect players (like giving nitcoins).
class PlayerReactor
	super GameReactor

	redef fun react_event(game, e) do e.react_player_event(game)
end

redef class GithubEvent
	# Reacts to a player related event.
	#
	# Called by `PlayerReactor::react_event`.
	# No-op by default.
	private fun react_player_event(game: Game) do end
end

redef class PullRequestEvent

	# Rewards player for opened pull requests.
	redef fun react_player_event(game) do
		if action == "opened" then
			var player = pull.user.player(game)
			player.nitcoins += 10
			player.save
		end
	end
end

redef class IssueCommentEvent

	# Rewards player for review comments.
	#
	# Actuallty we look if the comment contains the string `"+1"`.
	#
	# TODO only give nitcoins if reviewers < 2
	redef fun react_player_event(game) do
		# FIXME use a more precise way to locate reviews
		if comment.body.has("\\+1\\b".to_re) then
			var player = comment.user.player(game)
			player.nitcoins += 2
			player.save
		end
	end
end
