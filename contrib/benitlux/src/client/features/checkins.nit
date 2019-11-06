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

# On location checkin services
module checkins

import client

redef class App

	# Should we share our checkins with the server and friends?
	fun share_checkins: Bool
	do return app.data_store["share_checkins"].as(nullable Bool) or else true

	# Should we share our checkins with the server and friends?
	fun share_checkins=(value: Bool)
	do
		# Notify server
		if currently_on_location then
			if value then
				server_check_in
			else server_check_out
		end

		app.data_store["share_checkins"] = value
	end

	# Are we currently at the location?
	fun currently_on_location: Bool
	do return app.data_store["currently_on_location"].as(nullable Bool) or else false

	# Are we currently at the location?
	fun currently_on_location=(value: Bool) do app.data_store["currently_on_location"] = value

	# Request beer menu from the server
	#
	# It includes a diff if `checkins` remembers a previous visit.
	fun request_menu
	do
		var checkins = checkins
		var since = checkins.latest
		if since != null then
			var today = today
			if since == today then
				since = checkins.previous
			end
		end

		(new MenuHttpRequest("rest/since?token={token}&date={since or else ""}")).start
	end

	# User checks in
	fun on_check_in
	do
		if currently_on_location then return

		if share_checkins then server_check_in

		currently_on_location = true
		request_menu
		checkins.update today
	end

	# User checks out
	fun on_check_out
	do
		if not currently_on_location then return

		if share_checkins then server_check_out
		currently_on_location = false
	end

	# Notify server of checkin
	private fun server_check_in do (new BenitluxHttpRequest("rest/checkin?token={app.token}&is_in=true")).start

	# Notify server of checkout
	private fun server_check_out do (new BenitluxHttpRequest("rest/checkin?token={app.token}&is_in=false")).start

	# History of the last 1 or 2 checkins
	var checkins = new SimpleMemory

	redef fun on_save_state
	do
		super
		app.data_store["checkins"] = checkins
	end

	redef fun on_restore_state
	do
		var checkins = app.data_store["checkins"]
		if checkins isa SimpleMemory then self.checkins = checkins

		super
	end
end

# Request the menu from the server for a notification
class MenuHttpRequest
	super BenitluxHttpRequest

	redef fun on_load(data, status)
	do
		if not data isa Array[BeerAndRatings] then
			on_fail new Error("Server sent unexpected data {data or else "null"}")
			return
		end

		var content = data.beers_to_notification

		notify("Passing by the Benelux?".t, content, 2)
	end
end

# ---
# Support services

# Memory of an element and the previous one, avoiding duplication
#
# Used to remember the last day at the location,
# ignoring multiple reports on the same day.
class SimpleMemory
	serialize

	# Before latest remembered entry
	var previous: nullable String = null

	# Last remembered entry
	var latest: nullable String = null

	# Update `latest` if `value` is different
	fun update(value: String)
	do
		if value == latest then return

		previous = latest
		latest = value
	end
end

# ---
# UI

redef class UserWindow

	private var header = new SectionHeader(parent=layout)
	private var lbl_checkins_options_title = new SectionTitle(parent=header,
		text="Share options".t)

	private var chk_share_checkins = new CheckBox(parent=layout,
		text="Share checkins with your friends".t)

	init
	do
		chk_share_checkins.is_checked = app.share_checkins
	end

	redef fun on_event(event)
	do
		super

		if event isa ToggleEvent then
			var sender = event.sender
			if sender == chk_share_checkins then
				app.share_checkins = sender.is_checked
			end
		end
	end
end
