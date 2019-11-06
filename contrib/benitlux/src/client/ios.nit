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
import manual_checkins
intrude import user_views

redef class HomeWindow
	init
	do
		title = "Benitlux"

		# Force equal height for `news_header`
		var b = new Button(text="", parent=news_header)
	end
end

redef class SignupWindow
	init
	do
		title = "Login or Signup".t
		txt_name.native.disable_autocorrect
		txt_name.placeholder = "Name".t
		txt_pass.placeholder = "Password".t
		txt_pass2.placeholder = "Password".t
		txt_email.placeholder = "example@example.com".t
		lbl_feedback.native.text_color = new UIColor.red_color
		lbl_feedback.align = 0.5

		for l in [layout_login, layout_signup] do
			l.native.spacing = 8.0
			l.native.set_layout_margins(16.0, 8.0)
		end
	end
end

redef class App
	redef fun did_finish_launching_with_options
	do
		ui_application.register_user_notification_settings
		return super
	end
end

redef class UserWindow
	init do
		title = "Preferences".t
		lbl_welcome.align = 0.5
	end
end

redef class BeersWindow
	init do title = "Beers".t
end

redef class SocialWindow
	init do
		title = "People".t
		txt_query.placeholder = "Name".t
		txt_query.align = 0.5
		txt_query.native.disable_autocorrect
	end
end

redef class DescLabel
	init do native.text_color = new UIColor.dark_gray_color
end

redef class SectionTitle
	init do
		native.text_color = new UIColor.init_with_white_alpha(0.4, 1.0)
		size = 1.0
	end
end

redef class SectionHeader
	init do
		native.layout_margins_relative_arrangement = true
		native.set_layout_margins(16.0, 4.0)
	end
end

redef class ItemView
	init do
		var native = native
		if native isa UIStackView then
			native.set_layout_margins(16.0, 2.0)
			native.layout_margins_relative_arrangement = true
		end
		native.background_color = new UIColor.white_color
		native.set_white_background
	end
end

redef class BeerView
	init do
		lbl_name.size = 1.0
		lbl_desc.size = 0.5
		native.set_layout_margins(16.0, 8.0)
	end
end

redef class ListLayout
	init do native.background_color = new UIColor.group_table_view_background_color
end

redef class CheckBox super ItemView end

# ---
# Extern classes

redef class UIView
	private fun set_layout_margins(margin, margin_y: Float)
	in "ObjC" `{
		self.layoutMargins = UIEdgeInsetsMake(margin_y, margin, margin_y, margin);
	`}

	private fun set_white_background
	in "ObjC" `{
		UIView *colored_view = [[UIView alloc] initWithFrame:self.bounds];
		colored_view.backgroundColor = [UIColor whiteColor];
		colored_view.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
		[self insertSubview:colored_view atIndex:0];

		[colored_view.layer setBorderColor: [[UIColor colorWithWhite:0.8 alpha:1.0] CGColor]];
		[colored_view.layer setBorderWidth: 0.5];
	`}
end

redef class UITextField
	private fun disable_autocorrect
	in "ObjC" `{
		self.autocorrectionType = UITextAutocorrectionTypeNo;
		self.autocapitalizationType = UITextAutocapitalizationTypeNone;
	`}
end

# ---
# Notifications

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
