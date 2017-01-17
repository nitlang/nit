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

# Variation adding a button to manually check in and out
module manual_checkins

import checkins

redef class HomeWindow

	redef fun refresh
	do
		super
		update_checkin_text
	end

	private var checkin_button = new Button(parent=layout_user, align=0.0)

	redef fun on_event(event)
	do
		super

		if event isa ButtonPressEvent then
			var sender = event.sender
			if sender == checkin_button then
				if app.currently_on_location then
					app.on_check_out
				else app.on_check_in
			end
		end
	end

	private fun update_checkin_text
	do
		if app.user != null then
			if app.currently_on_location then
				checkin_button.text = "Leaving? Check out".t
			else
				checkin_button.text = "On location? Check in".t
			end
			checkin_button.enabled = true
		else
			checkin_button.text = "Login to check in".t
			checkin_button.enabled = false
		end
	end
end

redef class App
	redef fun on_check_in
	do
		super
		var window = window
		if window isa HomeWindow then window.update_checkin_text
	end

	redef fun on_check_out
	do
		super
		var window = window
		if window isa HomeWindow then window.update_checkin_text
	end
end
