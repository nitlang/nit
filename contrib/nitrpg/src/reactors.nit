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
module reactors

import game

# Reacts to event that can affect players (like giving nitcoins).
class PlayerReactor
	super GameReactor

	# Nitcoins rewarded when the player opens a new pull request.
	var nc_pull_open = 10

	# Nitcoins rewarded when the player reviews a pull request.
	var nc_pull_review = 2

	redef fun react_event(game, e) do e.react_player_event(self, game)
end

redef class GithubEvent
	# Reacts to a player related event.
	#
	# Called by `PlayerReactor::react_event`.
	# No-op by default.
	private fun react_player_event(reactor: PlayerReactor, game: Game) do end
end

redef class PullRequestEvent

	# Rewards player for opened pull requests.
	redef fun react_player_event(r, game) do
		if action == "opened" then
			var player = pull.user.player(game)
			player.nitcoins += r.nc_pull_open
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
	redef fun react_player_event(r, game) do
		# FIXME use a more precise way to locate reviews
		if comment.body.has("\\+1\\b".to_re) then
			var player = comment.user.player(game)
			player.nitcoins += r.nc_pull_review
			player.save
		end
	end
end
