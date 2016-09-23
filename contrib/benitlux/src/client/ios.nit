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

# iOS variant using a button to check in/out and local notifications
module ios

import ::ios
intrude import app::ui

import client
import push
import checkins

redef class HomeWindow
	init
	do
		title = "Benitlux"
		update_checkin_text
	end

	# TODO hide when not logged in
	private var layout_login_checkin = new HorizontalLayout(parent=layout_user)
	private var checkin_label = new Label(parent=layout_login_checkin)
	private var checkin_button = new Button(parent=layout_login_checkin)

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
		if app.currently_on_location then
			checkin_label.text = "Leaving?".t
			checkin_button.text = "Check out".t
		else
			checkin_label.text = "On location?".t
			checkin_button.text = "Check in".t
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

	redef fun did_finish_launching_with_options
	do
		ui_application.register_user_notification_settings
		return super
	end
end

redef class UserWindow
	init do title = "Preferences".t
end

redef class BeersWindow
	init do title = "Beers".t
end

redef class SocialWindow
	init do title = "People".t
end

# --- Notifications

redef fun notify(title, content, id)
do native_notify(title.to_nsstring, content.to_nsstring)

private fun native_notify(title, content: NSString) in "ObjC" `{
	UILocalNotification* notif = [[UILocalNotification alloc] init];
	notif.alertTitle = title;
	notif.alertBody = content;
	notif.timeZone = [NSTimeZone defaultTimeZone];
	[[UIApplication sharedApplication] presentLocalNotificationNow: notif];
`}

redef class UIApplication

	# Register this app to display notifications
	private fun register_user_notification_settings
	in "ObjC" `{
		if ([UIApplication instancesRespondToSelector:@selector(registerUserNotificationSettings:)]){
			[self registerUserNotificationSettings:[UIUserNotificationSettings settingsForTypes:UIUserNotificationTypeAlert|UIUserNotificationTypeBadge|UIUserNotificationTypeSound categories:nil]];
		}
	`}
end
