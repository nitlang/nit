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

# Touchscreen UI for mobile devices
module touch_ui

import gamnit::virtual_gamepad

import asteronits

redef class App
	redef fun create_scene
	do
		super

		var gamepad = new VirtualGamepad

		var dpad = gamepad.add_dpad
		if dpad != null then dpad.show_down = false

		gamepad.add_button("space", gamepad_spritesheet.fire)
		gamepad.visible = true
		self.gamepad = gamepad
	end
end
