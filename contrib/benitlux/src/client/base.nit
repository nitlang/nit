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

# Common services for the Benitlux app
module base

import app::ui
import app::data_store
import app::http_request
import android::aware
import json

import benitlux_model
import translations

# Show debug output?
fun debug: Bool do return true

# Root URI of the remote RESTfule server
fun benitlux_rest_server_uri: String do return "http://localhost:8080/"

redef class App

	# Current connection token, or "none"
	var token: String is lazy, writable do
		var token = app.data_store["token"]
		if token isa String then return token
		return "none"
	end

	# Name of the currently logged in user
	var user: nullable String is lazy, writable do
		var user = app.data_store["user"]
		if user isa nullable String then return user
		return null
	end

	# Event when user logs in or out
	fun on_log_in do on_save_state

	redef fun on_save_state
	do
		app.data_store["user"] = user
		app.data_store["token"] = token
		super
	end

	# Has this app state been restored yet?
	var restored = false

	redef fun on_restore_state
	do
		super

		# TODO this may happen before the lazy loading above
		restored = true

		if token != "none" then on_log_in
	end

	# Show simple feedback to the user on important errors
	fun feedback(text: Text) do print_error text
end

# Show a notification to the user
fun notify(title, content: Text, uniqueness_id: Int)
do print "Notification {uniqueness_id}: {title}; {content}"

# View for an item in a list, like a beer or a person
abstract class ItemView super View end

# Descriptive label providing extra information
class DescLabel super Label end

# `HorizontalLayout` header to a section
class SectionHeader super HorizontalLayout end

# `Label` used in section headers
class SectionTitle super Label end

# Basic async HTTP request for this app
#
# Note that connection errors are passed to `on_fail`, and
# server errors or authentification errors are received by `on_load`
# and should be passed to `intercept_error`.
class BenitluxHttpRequest
	super AsyncHttpRequest

	redef fun uri_root do return benitlux_rest_server_uri

	redef var uri_tail

	redef fun on_fail(error)
	do
		if error isa IOError then
			# This should be a normal network error like being offline.
			# Print to log, but don't show to the user.
			print_error error.class_name
		else
			# This could be a deserialization error,
			# it may be related to an outdated client.
			# Report to user.
			print_error "Request Error: {uri} with {error}"
			app.feedback "Request Error: {error}"
		end
	end

	# Intercept known server side errors
	fun intercept_error(res: nullable Object): Bool
	do
		if res isa BenitluxTokenError then
			app.token = "none"
			app.user = null
			return true
		else if res isa BenitluxError then
			feedback((res.user_message or else res.message).t)
			return true
		else if res isa Error then
			feedback res.message.t
			return true
		end
		return false
	end

	# Show feedback pertinent to the user, defaults to a platform specific popup
	fun feedback(text: String) do app.feedback text
end

# Async request with services to act on the windows of the app
class WindowHttpRequest
	super BenitluxHttpRequest

	autoinit window, uri_tail

	# Type of the related `window`
	type W: Window

	# `Window` on which to apply the results of this request
	var window: W

	# `Views` to disable while this request is in progress
	var affected_views = new Array[View]

	redef fun before do for view in affected_views do view.enabled = false

	redef fun after do for view in affected_views do view.enabled = true
end

redef class Text
	# Ellipsize `self` so it fits within `max_length` characters
	#
	# FIXME Remove this when labels are correctly ellipsized on iOS.
	fun ellipsize: Text do return self
end
