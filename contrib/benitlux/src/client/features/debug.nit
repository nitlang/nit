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

# Debugging features accessible from the user preference menu
module debug

import client
import push
import checkins

redef class UserWindow

	private var layout_debug = new VerticalLayout(parent=layout)

	private var lbl_debug_title = new Label(parent=layout_debug,
		text="Debug options".t, size=1.5)

	private var but_test_notif = new Button(parent=layout_debug,
		text="Test notifications".t)

	private var but_test_checkin = new Button(parent=layout_debug,
		text="Test checkin".t)

	private var but_test_checkout = new Button(parent=layout_debug,
		text="Test checkout".t)

	private var but_test_menu = new Button(parent=layout_debug,
		text="Test menu diff".t)

	redef fun on_event(event)
	do
		super

		if event isa ButtonPressEvent then
			var sender = event.sender
			if sender == but_test_notif then
				notify("Test Notification", "Some content\nmultiline", 5)
			else if sender == but_test_checkin then
				app.on_check_in
			else if sender == but_test_checkout then
				app.on_check_out
			else if sender == but_test_menu then
				app.request_menu
			end
		end
	end
end
