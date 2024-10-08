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

# Tnitter minimal portable app listing the latest Tnits
#
# This app use push notification to be updated in the second a new Tnit is posted.
# So it begins by requesting a full list and the successive push request for updates.
# If an error occurs, the full list is requested again after a short delay.
#
# This approach may still miss a few updates it they happen too close to one another.
# To solve this, we could send an id for the latest known Tnit to the server.
# Which could recognize if a client is not up to date.
module tnitter_app is
	app_name "Tnitter"
	app_version(0, 1, git_revision)
	app_namespace "net.xymus.tnitter"
end

import app::ui
import app::http_request
import app::data_store
import android::aware
import json

import model

# Delay in seconds before the next request after an error
fun request_delay_on_error: Float do return 60.0

redef class Window

	private var layout = new VerticalLayout(parent=self)
	private var list_posts = new ListLayout(parent=layout)
	private var lbl_init = new Label(parent=list_posts, text="Awaiting connection to server")

	# Request an initial full update
	init do (new ListPostRequest(self, "rest/list?count=16", false)).start

	# Request a full update after a delay
	fun request_full_list_on_error
	do
		(new ListPostRequest(self, "rest/list?count=16", true)).start
	end

	# Open a push notification connection and thread
	fun request_push_notification
	do
		(new ListPostRequest(self, "push/", false)).start
	end

	# Update the screen to show the new `posts`
	fun apply_update(posts: Array[Post])
	do
		list_posts.clear
		for post in posts do
			var line = new VerticalLayout(parent=list_posts)
			var author = new LabelAuthor(parent=line, text="@"+post.user)
			var text = new Label(parent=line, text=post.text)
		end
	end
end

# Label to display the author's name
#
# By default, this view is identical a `Label`,
# but if can be refined per platforms.
class LabelAuthor super Label end

# ---
# Async RESTful actions

# URI of the remote RESTful server
fun tnitter_server_uri: String do return "http://localhost:8080"

# `AsyncHttpRequest` with services to act on the windows of the app
abstract class AsyncTnitterRequest
	super AsyncHttpRequest

	private var window: Window

	redef fun uri_root do return tnitter_server_uri

	redef var uri_tail

	# Should this request be delayed by `request_delay_on_error` seconds?
	fun after_error(value: Bool) is autoinit do if value then delay = request_delay_on_error
end

# Async request to list latest posts, either immediately or by push notification
#
# Implementation note:
# This class could as well be merged with `AsyncTnitterRequest` or have two versions,
# one for the immediate update and one for the push notification.
# We chose this structure for simplicity of the example,
# and as more services may be added in the future.
# If these future services expect data of a different format,
# they will need a different `on_load` but could still use `AsyncTnitterRequest`.
class ListPostRequest
	super AsyncTnitterRequest

	redef fun on_load(posts, status)
	do
		# Deal with server-side errors
		if posts isa Error then
			print_error "Server Error: '{posts.message}' from '{uri}'"
			return
		end

		# Type check
		if not posts isa Array[Post] then
			print_error "Error: Got '{posts or else "null"}'"
			return
		end

		# Update UI and prepare for the next update
		window.apply_update posts
		window.request_push_notification
	end

	redef fun on_fail(error)
	do
		print "Warning: Request {uri} failed with {error}"
		window.request_full_list_on_error
	end
end

# ---
# Services

redef class Deserializer
	redef fun deserialize_class(name)
	do
		# This is usually generated using `nitserial`,
		# but for a single generic class it is easier to implement manually

		if name == "Array[Post]" then return new Array[Post].from_deserializer(self)
		return super
	end
end
