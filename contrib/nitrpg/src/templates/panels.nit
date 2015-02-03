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

# Panels templates for `nitpg`.
module panels

import templates_base

# A panel can be displayed in a html page.
#
# This display a Bootstrap panel.
class Panel
	super Template

	redef fun rendering do
		add """<div class="panel panel-default">
			    <div class="panel-heading">
				 <h3 class="panel-title">"""
		render_title
		add """  </h3>
			    </div>
			   <div class="panel-body">"""
		render_body
		add """</div>
			  </div>"""
	end

	# Render the panel title.
	# Betweem `<h4>` tags.
	fun render_title do end

	# Render the panel body.
	fun render_body do end
end

# A panel that contain only a table as body.
class TablePanel
	super Panel

	redef fun rendering do
		add """<div class="panel panel-default">
			    <div class="panel-heading">
			     <h3 class="panel-title">"""
		render_title
		add """
			     </h3>
			    </div>"""
		render_body
		add """</div>"""
	end
end

# Display an error message within a panel.
class ErrorPanel
	super Panel

	redef fun rendering do
		add """
<div class="panel panel-danger">
	<div class="panel-heading">
		<h3 class="panel-title">"""
		render_title
		add """
		</h3>
	</div>
	<div class="panel-body">"""
		render_body
		add """
	</div>
</div>
"""
	end

	# The error message to display as panel body.
	var msg: String

	redef fun render_title do
		add "<span class=\"glyphicon glyphicon-warning-sign\"></span>&nbsp;&nbsp;"
		add "Error"
	end

	redef fun render_body do
		add msg.html_escape
	end

end

# A panel that display repo statistics.
class GameStatusPanel
	super Panel

	# Repo to display.
	var game: Game

	redef fun render_title do
		add "<span class=\"glyphicon glyphicon-home\"></span>&nbsp;&nbsp;"
		add "<a href=\"{game.url}\">{game.name}</a>"
	end

	redef fun render_body do
		add "<strong class=\"text-success\">{game.load_players.length}</strong>"
		add " <a href=\"{game.url}/players\">players</a><br>"
		add "<strong class=\"text-success\">{game.stats["pulls"]}</strong> pull requests"
		add " (<strong>{game.stats["pulls_open"]}</strong> open)<br>"
		add "<strong class=\"text-success\">{game.stats["issues"]}</strong> issues"
		add " (<strong>{game.stats["issues_open"]}</strong> open)<br>"
	end
end

# Player status panel.
class PlayerStatusPanel
	super Panel

	# Game instance.
	var game: Game

	# Target player.
	var player: Player

	redef fun render_title do
		add "<a href=\"{player.url}\">"
		add " <img class=\"img-circle\" style=\"width: 30px\""
		add "   src=\"{player.user.avatar_url}\" alt=\"{player.name}\">"
		add "</a>&nbsp;&nbsp;"
		add "<a href=\"{player.url}\">{player.name}</a>"
	end

	redef fun render_body do
		var ranking = game.player_ranking
		# TODO player.rank
		add "<p class=\"lead\">ranked "
		add " <span class=\"text-success\"># {ranking[player.name]}</span></p>"
		add "<strong class=\"text-success\">{player.nitcoins}</strong> nitcoins<br>"
	end
end

# A panel that display a list of player in a repo.
class ShortListPlayersPanel
	super Panel

	# Game instance.
	var game: Game

	redef fun render_title do
		add "<span class=\"glyphicon glyphicon-user\"></span>&nbsp;&nbsp;"
		add "<a href=\"{game.url}/players\">Players</a>"
	end

	redef fun render_body do
		var players = game.load_players.values.to_a
		if players.is_empty then
			add "<em>No player yet...</em>"
			return
		end
		(new PlayerCoinComparator).sort(players)
		for player in players do
			add "<a href=\"{player.url}\">"
			add player.name
			add "</a>&nbsp;({player.nitcoins})<br>"
		end
	end
end

# A panel that display a list of player in a repo.
class ListPlayersPanel
	super TablePanel

	# Game instance.
	var game: Game

	redef fun render_title do
		add "<span class=\"glyphicon glyphicon-user\"></span>&nbsp;&nbsp;"
		add "<a href=\"{game.url}/players\">Players</a>"
	end

	redef fun render_body do
		var players = game.load_players.values.to_a
		(new PlayerCoinComparator).sort(players)
		if players.is_empty then
			add "<div class=\"panel-body\">"
			add "<em>No player yet...</em>"
			add "</div>"
			return
		end
		add """<table class="table table-striped table-hover">
			    <tr>
				 <th>#</th>
				 <th>Player</th>
				 <th>Nitcoins</th>
				</tr>"""
		var rank = 1
		for player in players do
			add "<tr>"
			add " <td>{rank}</td>"
			add " <td><a href=\"{player.url}\">{player.name}</a></td>"
			add " <td>{player.nitcoins}</td>"
			add "</tr>"
			rank += 1
		end
		add "</table>"
	end
end

# A panel that display the podium.
class PodiumPanel
	super Panel

	# Game instance.
	var game: Game

	redef fun render_title do
		add "<span class=\"glyphicon glyphicon-stats\"></span>&nbsp;&nbsp;Hall of fame"
	end

	redef fun render_body do
		var players = game.load_players.values.to_a
		(new PlayerCoinComparator).sort(players)
		if players.is_empty then
			add "<em>No players yet...</em>"
			return
		end
		add """
			<div class="container-fluid">
				<div id="podium" class="row row-sm-height">"""
		var max = players.first.nitcoins
		var orders = [3, 1, 0, 2, 4]
		for order in orders do
			if order >= players.length then continue
			var player = players[order]
			var size = 0
			if max > 0 then size = player.nitcoins * 300 / max
			add """
				<div class="col-xs-2 col-xs-height col-xs-offset-{{{order}}} col-bottom"
					style="text-align: center;">
					<p>
						<a href="{{{player.url}}}">
							<img class="img-circle" style="width: 80px"
								src="{{{player.user.avatar_url}}}" alt="{{{player.name}}}">
						</a>
					</p>
					<p><a href="{{{player.url}}}">{{{player.name}}}</a></p>
					<p>{{{player.nitcoins}}}</p>
					<div class=" progress-bar-warning progress-bar-striped"
						style="height: {{{size}}}px;"></div>
				</div>"""
		end
		add """
				</div>
			</div>"""
	end
end

# A `Panel` that displays the list of PR to review for a `Player`.
class PlayerReviewsPanel
	super Panel

	# Repo to display.
	var game: Game

	# Player to display customized list for.
	var player: Player

	redef fun render_title do
		add "<span class=\"glyphicon glyphicon-check\"></span>&nbsp;&nbsp;"
		add "Review pull requests to gain nitcoins!"
	end

	redef fun render_body do
		var q = "is:open label:need_review sort:updated-asc " +
			"-involves:{player.name}"

		var issues = game.repo.search_issues(q)
		if issues.is_empty then
			add "<em>No pull request to review yet...</em>"
			return
		end
		for issue in issues do
			add """<div class="media">
			        <a class="media-left" href="{{{player.url}}}">
					 <img class=\"img-circle\" style="width:50px"
					   src="{{{issue.user.avatar_url}}}" alt="{{{issue.user.login}}}">
					</a>
					<div class="media-body">
					 <h4 class="media-heading">
					 <a href="{{{issue.html_url}}}">#{{{issue.number}}} {{{issue.title}}}</a></h4>
					 <span class="text-muted">opened by </span>
					 <a href="{{{player.url}}}">{{{issue.user.login}}}</a>
					</div>
				   </div>"""
		end
	end
end
