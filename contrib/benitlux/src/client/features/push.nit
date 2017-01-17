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

# Push notification support
module push

import app::http_request

import client

redef class App
	redef fun on_log_in
	do
		super
		#(new PushHttpRequest("push/check_token?token={app.token}")).start
	end

	# Names of the known users currently on location
	var users_on_location = new Set[String]

	# Should we show a daily notification when new beers are available?
	fun notify_on_new_beers: Bool
	do return app.data_store["notify_on_new_beers"].as(nullable Bool) or else true

	# Should we show a daily notification when new beers are available?
	fun notify_on_new_beers=(value: Bool) do app.data_store["notify_on_new_beers"] = value

	# Should we show a daily notification of the menu?
	fun notify_menu_daily: Bool
	do return app.data_store["notify_menu_daily"].as(nullable Bool) or else false

	# Should we show a daily notification of the menu?
	fun notify_menu_daily=(value: Bool) do app.data_store["notify_menu_daily"] = value

	# Should we show a notification when friends check in at the location?
	fun notify_on_checkins: Bool
	do return app.data_store["notify_on_checkins"].as(nullable Bool) or else true

	# Should we show a notification when friends check in at the location?
	fun notify_on_checkins=(value: Bool) do app.data_store["notify_on_checkins"] = value
end

# Open push notification request
class PushHttpRequest
	super BenitluxHttpRequest

	redef fun on_fail(error)
	do
		if app.user == null then return

		super

		print_error "{class_name}: on_fail {error}"

		var t = new PushHttpRequest("push/?token={app.token}")
		t.delay = 10.0
		t.start
	end

	redef fun on_load(data, status)
	do
		if app.user == null then return

		var delay = 0.0
		if data isa Pushable then
			data.apply_push_if_desired
		else if data isa BenitluxError then
			# TODO if forbidden ask for a new token
			delay = 5.0*60.0
		else
			print_error "{class_name}: Received {data or else "null"}"
		end

		var t = new PushHttpRequest("push/?token={app.token}")
		t.delay = delay
		t.start
	end
end

# ---
# Objects sent from the server to the client

# Objects sent as push notifications by the server
interface Pushable
	# Act on this push notification
	fun apply_push do print_error "Unimplemented `apply_push` on {class_name}"

	# Consider to `apply_push` if the user preferences wants to
	fun apply_push_if_desired do apply_push
end

redef class CheckinReport
	super Pushable

	# Flattened array of the name of users
	var user_names: Array[String] = [for u in users do u.name] is lazy

	redef fun apply_push_if_desired
	do
		if not app.notify_on_checkins then return

		var there_is_a_new_user = false
		for new_users in user_names do
			if not app.users_on_location.has(new_users) then
				there_is_a_new_user = true
				break
			end
		end

		app.users_on_location.clear
		app.users_on_location.add_all user_names

		# Apply only if there is someone new on location
		if there_is_a_new_user then super
	end

	redef fun apply_push
	do
		if users.is_empty then
			#app.notif_push.cancel
			#self.cancel(tag, (int)id);
			return
		end

		var title = "TTB!".t
		var names = [for user in users do user.name]
		var content = "From %0".t.format(names.join(", "))

		notify(title, content, 1)
	end
end

redef class DailyNotification
	super Pushable

	redef fun apply_push_if_desired
	do
		if app.notify_menu_daily then
			super
			return
		end

		if app.notify_on_new_beers then
			for beer in beers do
				if beer.is_new then
					super
					return
				end
			end
		end
	end

	redef fun apply_push
	do
		var title = if beers.has_new_beers then
			"New beers are on the menu".t
		else "Beer Menu".t

		var content = beers.beers_to_notification
		notify(title, content, 3)
	end
end

# ---
# UI

redef class UserWindow

	private var header = new SectionHeader(parent=layout)

	private var lbl_push_options_title = new SectionTitle(parent=header,
		text="Notifications options".t)

	private var layout_push_options = new VerticalLayout(parent=layout)

	private var chk_notify_on_new_beers = new CheckBox(parent=layout_push_options,
		text="Notify when there are new beers".t)

	private var chk_notify_menu_daily = new CheckBox(parent=layout_push_options,
		#text="Show the menu every work day?".t)
		text="Show the menu every work day".t)

	private var chk_notify_on_checkins = new CheckBox(parent=layout_push_options,
		text="Notify when a friend checks in".t)

	init
	do
		chk_notify_on_new_beers.is_checked = app.notify_on_new_beers
		chk_notify_menu_daily.is_checked = app.notify_menu_daily
		chk_notify_on_checkins.is_checked = app.notify_on_checkins
	end

	redef fun on_event(event)
	do
		super

		if event isa ToggleEvent then
			var sender = event.sender
			if sender == chk_notify_on_new_beers then
				app.notify_on_new_beers = sender.is_checked
			else if sender == chk_notify_menu_daily then
				app.notify_menu_daily = sender.is_checked
			else if sender == chk_notify_on_checkins then
				app.notify_on_checkins = sender.is_checked
			end
		end
	end
end
