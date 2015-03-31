# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Test for app.nit's UI services
module ui_test is
	app_name "app.nit UI test"
	app_version(0, 1, git_revision)
	app_namespace "org.nitlanguage.ui_test"
	android_manifest_activity """android:theme="@android:style/Theme.Light""""
end

import android
import android::ui
import android::toast
import android::notification

redef class App

	var but_notif: Button
	var but_toast: Button

	var notif: nullable Notification = null

	var inited = false
	redef fun init_window
	do
		super

		if inited then return
		inited = true

		# Setup UI
		var context = native_activity
		var layout = new NativeLinearLayout(context)
		layout.set_vertical

		but_notif = new Button
		but_notif.text = "Show Notification"
		layout.add_view but_notif.native

		but_toast = new Button
		but_toast.text = "Show Toast"
		layout.add_view but_toast.native

		context.content_view = layout
	end

	fun act_notif
	do
		var notif = self.notif
		if notif == null then
			notif = new Notification("From app.nit", "Some content...")
			notif.ticker = "Ticker text..."
			notif.show
			self.notif = notif
		else
			notif.cancel
			self.notif = null
		end
	end

	fun act_toast
	do
		toast("Sample toast from app.nit at {get_time}", false)
	end

	redef fun catch_event(event)
	do
		if event isa ClickEvent then
			var sender = event.sender
			if sender == but_notif then
				act_notif
			else if sender == but_toast then
				act_toast
			end
		end
	end
end
