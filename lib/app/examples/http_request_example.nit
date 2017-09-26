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

# Example for the `app::http_request` main service `AsyncHttpRequest`
module http_request_example is
	example
	app_name "app.nit HTTP"
	app_namespace "org.nitlanguage.http_example"
	android_api_target 15
end

import app::ui
import app::http_request
import android::aware # for android_api_target

# Simple asynchronous HTTP request to http://example.com/ displaying feedback to the window
class MyHttpRequest
	super AsyncHttpRequest

	# Back reference to the window to show feedback to the user
	var win: HttpRequestClientWindow

	# ---
	# Config the request

	redef fun uri do return "http://example.com/"
	redef fun deserialize_json do return false

	# ---
	# Customize callbacks

	redef fun before
	do
		win.label_response.text = "Sending request..."

		# Disable button to prevent double requests
		win.button_request.enabled = false
	end

	redef fun on_load(data, status)
	do win.label_response.text = "Received response code {status} with {data.as(Text).byte_length} bytes"

	redef fun on_fail(error)
	do win.label_response.text = "Connection error: {error}"

	redef fun after do win.button_request.enabled = true
end

# Simple window with a label and a button
class HttpRequestClientWindow
	super Window

	# Root layout
	var layout = new ListLayout(parent=self)

	# Button to send request
	var button_request = new Button(parent=layout, text="Press to send HTTP request")

	# Label displaying feedback to user
	var label_response = new Label(parent=layout, text="No response yet.")

	init do button_request.observers.add self

	redef fun on_event(event)
	do
		if event isa ButtonPressEvent and event.sender == button_request then
			# Prepare and send request
			var request = new MyHttpRequest(self)
			request.start
		end
	end
end

redef fun root_window do return new HttpRequestClientWindow
