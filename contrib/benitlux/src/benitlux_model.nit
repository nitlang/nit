# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Database and data model to be used by servers and clients
module benitlux_model

import serialization

# A beer, with a name and description
class Beer
	auto_serializable

	# Name of the beer
	var name: String

	# Description on the Web site
	var desc: String

	redef fun to_s do return "<{name}: {desc}>"
end

# A collection of beer-related events
class BeerEvents
	auto_serializable

	# New beers on the menu
	var new_beers = new Array[Beer]

	# Beers that have left the menu
	var gone_beers = new Array[Beer]

	# Beers that are on the menu today, and yesterday
	var fix_beers = new Array[Beer]

	# Get a human pretty `Array[String]` version of `self`
	fun to_email_content: Array[String]
	do
		var content = new Array[String]

		# New beers
		for beer in self.new_beers do
			content.add "+ {beer.name}: {beer.desc}"
		end

		# Gone beers
		for beer in self.gone_beers do
			content.add "- {beer.name}: {beer.desc}"
		end

		# Fix beers
		for beer in self.fix_beers do
			content.add "  {beer.name}: {beer.desc}"
		end

		return content
	end

	# Get a pretty and short version of `self`
	fun to_email_title: String
	do
		var title = "Benelux Beer Menu"

		# New beers
		var new_beers_name = new Array[String]
		for beer in self.new_beers do new_beers_name.add beer.name

		if not new_beers_name.is_empty then
			title += " (+ {new_beers_name.join(", ")})"
		end

		return title
	end
end
