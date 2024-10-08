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

# Portable calculator UI
module calculator is
	app_name "app.nit Calc"
	app_version(0, 2, git_revision)
	app_namespace "org.nitlanguage.calculator"

	# Lock in portrait mode
	android_manifest_activity """android:screenOrientation="portrait""""
	android_api_target 15
end

import app::ui
import app::data_store
import android::aware

import calculator_logic

# Show debug output?
fun debug: Bool do return false

redef fun root_window do return new CalculatorWindow

# The main (and only) window of this calculator
class CalculatorWindow
	super Window

	# Calculator context, our business logic
	private var context = new CalculatorContext

	# Main window layout
	var layout = new VerticalLayout(parent=self)

	# Main display, at the top of the screen
	private var display = new TextInput(parent=layout)

	# Maps operators as `String` to their `Button`
	var buttons = new HashMap[String, Button]

	init
	do
		if debug then print "CalculatorWindow::init"

		# All the button labels, row by row
		var rows = [["7", "8", "9", "+"],
		            ["4", "5", "6", "-"],
		            ["1", "2", "3", "×"],
		            ["0", ".", "C", "÷"],
		            ["="]]

		for row in rows do
			var row_layout = new HorizontalLayout(parent=layout)

			for op in row do
				var but = new Button(parent=row_layout, text=op)
				buttons[op] = but
			end
		end
	end

	redef fun on_event(event)
	do
		if debug then print "CalculatorWindow::on_event {event}"

		if event isa ButtonPressEvent then

			var op = event.sender.text
			if op == "." then
				event.sender.enabled = false
				context.switch_to_decimals
			else if op.is_numeric then
				var n = op.to_i
				context.push_digit n
			else if op != null then
				buttons["."].enabled = true
				context.push_op op
			end

			display.text = context.display_text
		end
	end

	redef fun on_save_state
	do
		if debug then print "CalculatorWindow::on_save_state"

		app.data_store["context"] = context
		super
	end

	redef fun on_restore_state
	do
		if debug then print "CalculatorWindow::on_restore_state"

		super

		var context = app.data_store["context"]
		if not context isa CalculatorContext then return

		self.context = context
		display.text = context.display_text
	end
end
