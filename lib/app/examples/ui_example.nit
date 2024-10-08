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

# User interface example using `app::ui`
module ui_example is
	example
	app_name "app.nit UI"
	app_namespace "org.nitlanguage.ui_example"
	android_api_min 21
	android_api_target 21
	android_manifest_activity "android:theme=\"@android:style/Theme.Material\""
end

import app::ui
import app::data_store
import android::aware # for android_api_target

# Window showing off some the available controls
class UiExampleWindow
	super Window

	# Root layout
	var layout = new ListLayout(parent=self)

	# Some label
	var some_label = new Label(parent=layout, text="Sample Window using a ListLayout.")

	# A checkbox
	var checkbox = new CheckBox(parent=layout, text="A CheckBox")

	# Horizontal organization
	var h_layout = new HorizontalLayout(parent=layout)

	# Description for the `user_input`
	var user_input_label = new Label(parent=h_layout, text="Input some text:", align=0.5)

	# Field for the user to enter data
	var user_input = new TextInput(parent=h_layout, text="Default text")

	# Button to open a new window with a ListLayout
	var button_window = new Button(parent=layout, text="Open a new window")

	# URL to open
	var example_url = "http://nitlanguage.org/"

	# Button to open the browser
	var button_browser = new Button(parent=layout, text="Open {example_url}")

	redef fun on_event(event)
	do
		if event isa ButtonPressEvent then
			if event.sender == button_browser then
				example_url.open_in_browser
			else if event.sender == button_window then
				app.push_window new SecondWindow
			end
		else if event isa ToggleEvent then
			if event.sender == checkbox then checkbox.text = if checkbox.is_checked then "Checked" else "Unchecked"
		end
	end
end

# Another window with a small `VerticalLayout`
class SecondWindow
	super Window

	# Root layout
	var layout = new VerticalLayout(parent=self)

	# Some label
	var a_label = new Label(parent=layout, text="This window uses a VerticalLayout.")

	# Another label
	var another_label = new Label(parent=layout, text="Close it by tapping the back button.")
end

redef fun root_window do return new UiExampleWindow
