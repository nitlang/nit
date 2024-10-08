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

import gamnit::virtual_gamepad

import action_nitro

redef class App
	redef fun on_create
	do
		super

		var gamepad = new VirtualGamepad
		gamepad.add_dpad(["up","left","down","right"])
		gamepad.add_dpad(["w","a","s","d"])
		gamepad.add_button("space", planes_sheet.open_chute)
		self.gamepad = gamepad
	end

	redef fun begin_play(initial)
	do
		super

		var gamepad = self.gamepad
		if gamepad != null then gamepad.visible = true
	end
end
