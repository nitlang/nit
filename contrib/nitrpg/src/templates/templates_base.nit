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

# Base HTML rendering templates for `nitpg`.
module templates_base

import achievements

redef class GameEntity

	# URL to this game entity page.
	fun url: String do return game.url / key
end

redef class Game

	# Root URL ise used as a prefix for `url`.
	#
	# This must be set before any access to `url`.
	var root_url: String is noinit, writable

	redef fun url do return "{root_url}/games" / key

	# Displayed name.
	fun name: String do return repo.full_name

	# Return a HTML link to this Game.
	fun link: String do return "<a href=\"{url}\">{name}</a>"
end

redef class Player
	# Return a HTML link to this Player.
	fun link: String do return "<a href=\"{url}\">{name}</a>"
end

redef class Issue
	# Return a HTML link to this Issue.
	fun link: String do return "<a href=\"{html_url}\">#{number}</a>"
end

redef class Achievement
	# Return a HTML link to this Issue.
	fun link: String do return "<a href=\"{url}\">{name}</a>"

	fun list_item: String do
		return """<div class="media">
			       <div class="media-left" style="width: 50px">
			        <span class="glyphicon glyphicon-check"></span>
			        <span class="badge progress-bar-success"
			         style="position: absolute; margin-top: 10px;
					 margin-left: -5px;">+{{{reward}}}</span>
			       </div>
			       <div class="media-body">
			        <h4 class="media-heading">{{{link}}}</h4>
			        <span class="text-muted">{{{desc}}}</span>
			       </div>
			      </div>"""

	end
end
