# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Window to list beers and other beer-related views
module beer_views

import base

# View about a beer, with its name, description and rating
class BeerView
	super VerticalLayout
	super ItemView

	autoinit beer_info, parent

	# Beer information
	var beer_info: BeerAndRatings

	# Buttons to realize the rating buttons
	var star_buttons = new Array[StarButton]

	# Layout of the first line with the name and `star_buttons`
	var top_line_layout = new HorizontalLayout(parent=self)

	var lbl_name = new Label(parent=top_line_layout, text=beer_info.beer.name, size = 1.25) is lazy
	var lbl_stats = new DescLabel(parent=self, text=beer_info.rating_text, size=0.5) is lazy
	var lbl_desc: Label is noinit
	var lbl_comment: nullable Label = null

	init
	do
		lbl_name

		var desc = beer_info.beer.desc
		if beer_info.is_new then desc += " (New)".t
		lbl_desc = new DescLabel(parent=self, text=desc)

		lbl_stats

		var badges = beer_info.badges
		if badges != null then
			var lbl_comment = new DescLabel(parent=self, text=badges.join(" "))
			lbl_comment.size = 0.5
			self.lbl_comment = lbl_comment
		end

		var rating = beer_info.user_rating or else 0
		setup_stars rating
	end

	# Prepare and display the rating controls
	fun setup_stars(rating: Int)
	do
		var l_stars = new HorizontalLayout(parent=top_line_layout)

		for i in [1..5] do
			var but = new StarButton(beer_info.beer, i, i <= rating, parent=l_stars)
			but.size = 1.5
			but.enabled = app.user != null
			star_buttons.add but
		end
	end

	redef fun on_event(event)
	do
		assert event isa ButtonPressEvent

		var sender = event.sender
		if sender isa StarButton then
			on_review sender.rating
		end
	end

	# Post a user review
	fun on_review(rating: Int)
	do
		var beer_id = beer_info.beer.id
		(new ReviewAction(app.window, "rest/review?token={app.token}&beer={beer_id}&rating={rating}")).start

		# Update UI
		var i = 1
		for but in star_buttons do
			but.on = i <= rating
			i += 1
		end
	end
end

# Beers pane listing the available beers
class BeersWindow
	super Window

	private var layout = new VerticalLayout(parent=self)
	private var list_beers = new ListLayout(parent=layout)

	init
	do
		if debug then print "BenitluxWindow::init"

		action_list_beers
	end

	# Send HTTP request to list beers
	fun action_list_beers
	do (new ListBeersAction(self, "rest/list?token={app.token}")).start
end

# ---
# Customized buttons

# View to describe and rate a eer
class RatingView
	super View

	autoinit beer, init_rating, parent, enabled

	# Beer id
	var beer: Beer

	# Previous rating, 0 for none
	var init_rating: Int

	redef fun parent=(layout) do end

	redef fun enabled=(value) do end
end

# Button with a star, filled or not, for rating beers
class StarButton
	super Button

	autoinit beer, rating, on, parent, enabled, size, align

	# Info on the beer to rate
	var beer: Beer

	# Rating of `beer`
	var rating: Int

	# Set if the star is filled
	fun on=(on: Bool) is autoinit do text = if on then "★" else "☆"
end

redef class BeerAndRatings
	# Text version of the ratings
	fun rating_text: String
	do
		var txt = new Array[String]

		var global = global
		if global != null and global.count > 0 then
			txt.add "%0★ %1 reviews".t.format(global.average.to_precision(1), global.count)
		else txt.add "No reviews yet".t

		var local = followed
		if local != null and local.count > 0 then
			txt.add ", friends: %0☆ %1 reviews".t.format(local.average.to_precision(1), local.count)
		end

		return txt.join
	end
end

redef class Beer
	# Capitalize first letter for a prettier display
	redef fun desc
	do
		var desc = super
		if desc.length == 0 then return desc

		var first_letter = desc.first.to_upper
		return first_letter.to_s + desc.substring_from(1)
	end
end

# Comparator of beers
class BeerComparator
	super Comparator

	redef type COMPARED: BeerAndRatings

	redef fun compare(a, b) do return value_of(a) <=> value_of(b)

	private fun value_of(beer: COMPARED): Float
	do
		var max = 0.0
		var value = 0.0

		var rating = beer.user_rating
		if rating != null then
			max += 20.0
			value += rating.to_f * 4.0
		end

		var followed = beer.followed
		if followed != null then
			max += 10.0
			value += followed.average * 2.0
		end

		var global = beer.global
		if global != null then
			max += 5.0
			value += global.average
		end

		return (max - value)/max
	end
end

# Async request to submit a review
class ReviewAction
	super WindowHttpRequest

	redef fun on_load(res, status)
	do
		if intercept_error(res) then return
	end
end

# Async request to update the beer list
class ListBeersAction
	super WindowHttpRequest

	redef type W: BeersWindow

	redef fun on_load(beers, status)
	do
		window.layout.remove window.list_beers
		window.list_beers = new ListLayout(parent=window.layout)

		if intercept_error(beers) then return

		if not beers isa Array[BeerAndRatings] then
			app.feedback "Communication Error".t
			return
		end

		# Sort beers per preference
		var comparator = new BeerComparator
		comparator.sort beers

		# Populate the list
		for beer_and_rating in beers do
			var view = new BeerView(beer_and_rating, parent=window.list_beers)
		end
	end
end

redef class BestBeerBadge
	redef fun to_s do return "Favorite beer on the menu.".t
end

redef class FavoriteBeerBadge
	redef fun to_s do return "Favorite of %0.".t.format(users.join(", ", " & "))
end

redef class SimilarBeerBadge
	redef fun to_s do return "Similar to %0.".t.format(beers.join(", ", " & "))
end

redef class Array[E]
	# Pretty compressed list of this list of beer as a pseudo diff
	#
	# Require: `self isa Array[BeerAndRatings]`
	fun beers_to_notification: String
	do
		assert self isa Array[BeerAndRatings]

		# Sort beers per preference
		var comparator = new BeerComparator
		comparator.sort self

		# Organize the notification line per line
		# First the new beers, then the fixed one.
		var lines = new Array[String]
		var fix_beers = new Array[String]
		for bar in self do
			var beer = bar.beer
			if bar.is_new then
				lines.add "+ {beer.name}: {beer.desc}"
			else fix_beers.add beer.name
		end

		# Show a few fixed beers per line
		if fix_beers.not_empty then
			var line = new FlatBuffer
			line.append "= "
			for i in fix_beers.length.times, beer in fix_beers do

				if i > 0 then line.append ", "

				var l = line.length + beer.length
				if l < 42 then # Very approximate width of a notification on Android
					line.append beer
					continue
				end

				lines.add line.to_s

				line = new FlatBuffer
				line.append "= "
				line.append beer
			end

			lines.add line.to_s
		end

		return lines.join("\n")
	end

	# Does `self` has a new beer?
	#
	# Require: `self isa Array[BeerAndRatings]`
	fun has_new_beers: Bool
	do
		assert self isa Array[BeerAndRatings]

		for beer in self do if beer.is_new then return true
		return false
	end
end
