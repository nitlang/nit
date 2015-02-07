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

# Templates to display `GameEvent` kinds.
module templates_events

import events
import templates_base

redef class GameEvent
	# See `TplEvent`
	fun tpl_event: TplEvent do
		if kind == "pull_open" then
			return new TplPullOpened(self)
		else if kind == "pull_merged" then
			return new TplPullMerged(self)
		else if kind == "pull_review" then
			return new TplPullReview(self)
		end
		abort
	end
end

# A TplEvent factorizes HTML rendering methods for `GameEvent`.
class TplEvent

	# Event to display.
	var event: GameEvent

	# Title to display.
	var title: String is lazy do return "raw event"

	# Load Player from event data.
	var player: nullable Player is lazy do
		return event.game.load_player(event.data["player"].to_s)
	end

	# Load reward from event data.
	var reward: Int is lazy do return event.data["reward"].as(Int)

	# Load `github_event` data key as a PullRequestEvent.
	var pull_event: PullRequestEvent is lazy do
		var obj = event.data["github_event"].as(JsonObject)
		return new PullRequestEvent.from_json(event.game.api, obj)
	end

	# Load `github_event` data key as a IssueCommentEvent.
	var issue_comment_event: IssueCommentEvent is lazy do
		var obj = event.data["github_event"].as(JsonObject)
		return new IssueCommentEvent.from_json(event.game.api, obj)
	end

	# Display a media item for a reward event.
	fun media_item: String do
		return """<div class="media">
		        <a class="media-left" href="{{{player.url}}}">
				 <span class="badge progress-bar-success"
				  style=\"position: absolute\">+{{{reward}}}</span>
				 <img class=\"img-circle\" style="width:50px"
				   src="{{{player.user.avatar_url}}}" alt="{{{player.name}}}">
				</a>
				<div class="media-body">
				 <h4 class="media-heading">{{{title}}}</h4>
				 <span class="text-muted">at {{{event.time}}}</span>
				</div>
			   </div>"""
	end
end

# Event: pull_open
class TplPullOpened
	super TplEvent

	redef var title is lazy do
		var pull = pull_event.pull
		return "{player.link} pushed {pull.link}"
	end
end

# Event: pull_merged
class TplPullMerged
	super TplEvent

	redef var title is lazy do
		var pull = pull_event.pull
		return "{player.link} merged <strong>{pull.commits}</strong> commits with {pull.link}"
	end
end

# Event: pull_review
class TplPullReview
	super TplEvent

	redef var title is lazy do
		var issue = issue_comment_event.issue
		return "{player.link} reviewed {issue.link}"
	end
end
