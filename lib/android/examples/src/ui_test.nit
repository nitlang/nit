# This file is part of NIT ( https://nitlanguage.org ).
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
	example
	app_name "app.nit UI test"
	app_version(0, 1, git_revision)
	app_namespace "org.nitlanguage.ui_test"
	android_manifest_activity """android:theme="@android:style/Theme.Light""""
	android_api_target 15
end

import android::ui
import android::toast
import android::notification

redef class App
	redef fun on_create
	do
		self.window = new Window
		super
	end
end

redef class Window

	private var layout = new VerticalLayout(parent=self)

	private var but_notif = new Button(parent=layout, text="Show Notification")
	private var but_toast = new Button(parent=layout, text="Show Toast")

	private var notif: nullable Notification = null

	init
	do
		but_notif.observers.add self
		but_toast.observers.add self
	end

	# Action when pressing `but_notif`
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

	# Action when pressing `but_toast`
	fun act_toast
	do
		app.toast("Sample toast from app.nit at {get_time}", false)
	end

	redef fun on_event(event)
	do
		print "on_event {event}"
		if event isa ButtonPressEvent then
			var sender = event.sender
			if sender == but_notif then
				act_notif
			else if sender == but_toast then
				act_toast
			end
		end
	end
end
