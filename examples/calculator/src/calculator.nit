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

# Portable calculator UI
module calculator is
app_name "app.nit Calc."
	app_version(0, 1, git_revision)
	app_namespace "org.nitlanguage.calculator"

	# Lock in portrait mode
	android_manifest_activity """android:screenOrientation="portrait""""
	android_api_target 15
end

import app::ui
import android::aware

import calculator_logic

redef class App
	redef fun on_create
	do
		# Create the main window
		window = new CalculatorWindow
		super
	end
end

# The main (and only) window of this calculator
class CalculatorWindow
	super Window

	# Calculator context, our business logic
	private var context = new CalculatorContext

	# Main window layout
	private var layout = new VerticalLayout(parent=self)

	# Main display, at the top of the screen
	private var display = new TextInput(parent=layout)

	# Maps operators as `String` to their `Button`
	private var buttons = new HashMap[String, Button]

	init
	do
		# All the button labels, row by row
		var rows = [["7", "8", "9", "+"],
		            ["4", "5", "6", "-"],
		            ["1", "2", "3", "*"],
		            ["0", ".", "C", "/"],
		            ["="]]

		for row in rows do
			var row_layout = new HorizontalLayout(parent=layout)

			for op in row do
				var but = new Button(parent=row_layout, text=op)
				but.observers.add self
				buttons[op] = but
			end
		end
	end

	redef fun on_event(event)
	do
		if event isa ButtonPressEvent then

			var op = event.sender.text
			if op == "." then
				event.sender.enabled = false
				context.switch_to_decimals
			else if op.is_numeric then
				var n = op.to_i
				context.push_digit n
			else
				buttons["."].enabled = true
				context.push_op op.chars.first
			end

			display.text = context.display_text
		end
	end
end
