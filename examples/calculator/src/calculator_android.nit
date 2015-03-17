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

# Android calculator application
module calculator_android is
	app_name "app.nit Calc."
	app_version(0, 1, git_revision)
	java_package "org.nitlanguage.calculator"

	# Use a translucent background and lock in portrait mode
	android_manifest_activity """
		android:theme="@android:style/Theme.Holo.Wallpaper"
		android:screenOrientation="portrait""""
end

# FIXME the next line should import `android` only when it uses nit_activity
import android::log
import android::ui

import calculator_logic

redef class App
	private var context = new CalculatorContext

	# The main display, at the top of the screen
	private var display: EditText

	# Maps operators as `String` to their `Button`
	private var op2but = new HashMap[String, Button]

	# Has this window been initialized?
	private var inited = false

	redef fun init_window
	do
		super

		if inited then return
		inited = true

		# Setup UI
		var context = native_activity
		var layout = new NativeLinearLayout(context)
		layout.set_vertical

		# Display screen
		var display = new EditText
		layout.add_view_with_weight(display.native, 1.0)
		display.text_size = 36.0
		self.display = display

		# Buttons; numbers and operators
		var ops = [["7", "8", "9", "+"],
		           ["4", "5", "6", "-"],
		           ["1", "2", "3", "*"],
		           ["0", ".", "C", "/"],
		           ["="]]

		for line in ops do
			var buts_layout = new NativeLinearLayout(context)
			buts_layout.set_horizontal
			layout.add_view_with_weight(buts_layout, 1.0)

			for op in line do
				var but = new Button
				but.text = op
				but.text_size = 40
				buts_layout.add_view_with_weight(but.native, 1.0)
				op2but[op] = but
			end
		end

		context.content_view = layout
	end

	redef fun catch_event(event)
	do
		if event isa ClickEvent then
			var sender = event.sender
			var op = sender.text

			if op == "." then
				sender.enabled = false
				context.switch_to_decimals
			else if op.is_numeric then
				var n = op.to_i
				context.push_digit n
			else
				op2but["."].enabled = true
				context.push_op op.chars.first
			end

			display.text = context.display_text
		end
	end
end
