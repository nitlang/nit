# This file is part of NIT ( https://nitlanguage.org ).
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
import md5

# A beer, with a name and description
class Beer
	auto_serializable

	# Database id
	var id: Int

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
		# New beers
		var new_beers_name = new Array[String]
		for beer in self.new_beers do new_beers_name.add beer.name

		if not new_beers_name.is_empty then
			return " (+ {new_beers_name.join(", ")})"
		end

		return ""
	end
end

# Basic user public information
class User
	serialize

	# ID of this user in the DB
	var id: Int

	# Visible user name
	var name: String

	redef fun to_s do return "<{class_name} {id} '{name}'>"
end

# User public information in reference to a user (medium details level)
class UserAndFollowing
	serialize

	# Basic user information
	var user: User

	# Favorite beers as a string
	var favs: String

	# Is the reference user following `user`?
	var following: Bool

	# Is the reference user followed by `user`?
	var followed: Bool

	# Time of the last check in, if `followed`
	var last_check_in: nullable String = null
end

# Review by `author` on a `beer`
class Review
	serialize

	# Basic author information
	var author: User

	# Basic beer information
	var beer: Beer

	# Rating out of 5
	var rating: Int

	# Text content of this review, may be empty
	var text: String
end

# Statistics of the reviews on `beer`
class BeerStats
	serialize

	# Basic beer information
	var beer: Beer

	# Average rating out of 5
	var average: Float

	# Number of reviews used for these statistics
	var count: Int
end

# Beer information in reference to a user (medium detail level)
class BeerAndRatings
	serialize

	# Basic beer information
	var beer: Beer

	# Global statistics on `beer`
	var global: nullable BeerStats

	# Statistics on `beer` among followed users only
	var followed: nullable BeerStats

	# Rating left by the referenced user, if any
	var user_rating: nullable Int

	# Do we predict this `beer` to go quickly?
	var will_go_fast: Bool

	# Data of appearance of this batch TODO
	var batch: String

	# Is this beer new since the last work day?
	var is_new: Bool

	# Has this beer been here since the last work day?
	var is_fix: Bool

	# Has this beer left the menu since the last work day?
	var is_gone: Bool

	# Noteworthy comments on this beer, often relative to a user
	var badges: nullable Array[BeerBadge] = null is writable
end

# Noteworthy comment on a beer
abstract class BeerBadge
	serialize
end

# A beer is the favorite of `users`
class FavoriteBeerBadge
	super BeerBadge
	serialize

	# Name of the user fan of the beer
	var users = new Array[String]
end

# A beer is similar to `beers`
class SimilarBeerBadge
	super BeerBadge
	serialize

	# Names of the similar beers
	var beers = new Array[String]
end

# This beer is the best on the menu
class BestBeerBadge
	super BeerBadge
	serialize
end

# Result of a login or signup request upon success
class LoginResult
	serialize

	# Basic user information
	var user: User

	# Reference token
	var token: String
end

# Report pushed to followed_followers when a user checks in or out
class CheckinReport
	serialize

	# Users currently in
	var users = new Array[User]
end

# Daily menu notifications
class DailyNotification
	serialize

	# All beers on the menu today
	var beers: Array[BeerAndRatings]
end

# Server or API usage error
class BenitluxError
	super Error
	serialize

	# Error message that can be shown to the user
	var user_message: nullable String
end

# Client sent an invalid token
class BenitluxTokenError
	super BenitluxError
	serialize
end

redef class Text
	# Is `self` a valid user name?
	fun name_is_ok: Bool
	do
		if length < 4 or length > 16 then return false

		for c in chars do
			if c.is_whitespace or c.code_point == 0xFFFD then return false
		end

		return true
	end

	# Is `self` a valid password?
	fun pass_is_ok: Bool do return length >= 6

	# Hashed Benitlux password
	fun pass_hash: String do return (to_s+benitlux_salt).md5
end

# Salt used on passwords
#
# Should be refined by user modules.
fun benitlux_salt: String do return "Vive le ben!"
