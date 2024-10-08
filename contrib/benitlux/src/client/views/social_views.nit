# This file is part of NIT ( https://nitlanguage.org ).
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
module social_views

import base

# Social pane with networking features
class SocialWindow
	super Window

	private var layout = new VerticalLayout(parent=self)

	private var list_search = new ListLayout(parent=layout)

	private var layout_header = new VerticalLayout(parent=list_search)
	private var layout_search = new HorizontalLayout(parent=layout_header)
	var txt_query = new TextInput(parent=layout_search)
	private var but_search = new Button(parent=layout_search, text="Search".t)

	private var layout_list = new HorizontalLayout(parent=layout_header)
	private var but_followed = new Button(parent=layout_list, text="List followed".t)
	private var but_followers = new Button(parent=layout_list, text="List followers".t)

	init
	do
		# Load friends and suggestions
		(new ListUsersAction(self, "rest/friends?token={app.token}&n=16")).start
	end

	redef fun on_event(event)
	do
		if debug then print "BenitluxWindow::on_event {event}"

		if event isa ButtonPressEvent then
			var sender = event.sender
			if sender == but_search then
				search
			else if sender == but_followed then
				var cmd = "rest/followed?token={app.token}"
				(new ListUsersAction(self, cmd)).start
			else if sender == but_followers then
				var cmd = "rest/followers?token={app.token}"
				(new ListUsersAction(self, cmd)).start
			end
		end

		super
	end

	# Execute search with `txt_query.text`
	fun search
	do
		var query = txt_query.text
		if query == null or query.is_empty then return

		var res = "rest/search?token={app.token}&query={query.to_percent_encoding}&offset=0"
		(new ListUsersAction(self, res)).start
	end

	# Fill `list_search` with views for each of `users`
	fun list_users(users: Array[UserAndFollowing])
	do
		for uaf in users do
			var view = new PeopleView(uaf, false, parent=list_search)
		end
	end
end

# View to describe, and follow a person
class PeopleView
	super VerticalLayout
	super ItemView

	autoinit user_and_following, home_window_mode, parent

	# Description of the user
	var user_and_following: UserAndFollowing

	# Toggle tweaks for the home window where the is no "unfollow" buttons
	var home_window_mode: Bool

	init
	do
		var user = user_and_following.user

		var layout_top_line = new HorizontalLayout(parent=self)
		var lbl_name = new Label(parent=layout_top_line, text=user.name)

		if app.user != null then

			# Show unfollow button if not on the home screen
			if not home_window_mode or not user_and_following.following then
				var but = new FollowButton(user.id, user_and_following.following, user_and_following.followed, parent=layout_top_line)
			end
		end

		var favs = if not user_and_following.favs.is_empty then
			"Favorites: %0".t.format(user_and_following.favs)
		else "No favorites yet".t
		var lbl_desc = new DescLabel(parent=self, text=favs, size=0.5)
	end
end

# Button to follow or unfollow a user
class FollowButton
	super Button

	autoinit followed_id, following, followed_by, parent, enabled, text, size, align

	# Id of the user to be followd/unfollow
	var followed_id: Int

	# Does the local user already follows `followed_id`
	var following: Bool

	# Does `followed_id` already follows the local user
	var followed_by: Bool

	# Update the visible text according to `following`
	fun update_text do text = if following then "Unfollow".t else "Follow".t

	init do update_text

	redef fun on_event(event)
	do
		assert event isa ButtonPressEvent
		var cmd = "rest/follow?token={app.token}&user_to={followed_id}&follow={not following}"
		enabled = false
		text = "Updating...".t
		(new FollowAction(app.window, cmd, self)).start
	end
end

# Async request to receive and display a list of users
#
# This is used by many features of the social window:
# search, list followed and list followers.
class ListUsersAction
	super WindowHttpRequest

	redef type W: SocialWindow

	init do affected_views.add_all([window.but_search, window.but_followed, window.but_followers])

	redef fun on_load(users, status)
	do
		window.layout.remove window.list_search
		window.list_search = new ListLayout(parent=window.layout)
		window.layout_header.parent = window.list_search

		if intercept_error(users) then return

		if users isa Array[UserAndFollowing] then window.list_users users
	end
end

# Async request to follow or unfollow a user
class FollowAction
	super WindowHttpRequest

	private var button: FollowButton
	init do affected_views.add(button)

	redef fun on_load(res, status)
	do
		if intercept_error(res) then return
	end

	redef fun after
	do
		button.following = not button.following
		button.update_text
		button.enabled = true

		super
	end

	redef fun before
	do
		button.enabled = false
		super
	end
end
