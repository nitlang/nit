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

import asteronits
import controls

redef class App

	# Controls texture
	var spritesheet_controls = new ControlsImages

	private var joystick_x = 200.0
	private var joystick_y = 100.0

	redef fun accept_event(event)
	do
		super

		var display = display
		if display == null then return false

		if event isa PointerEvent and not event.is_move then

			# Convert input coordinates from screen coordinates to UI units.
			# Effectively reverting the transformation created by `ui_camera.reset_height`.
			var ui_pos = ui_camera.camera_to_ui(event.x, event.y)

			var ship = world.ship

			if ui_pos.y.to_i > display.height/2 then
				# Lower half of the screen
				if ui_pos.x.to_i > display.width/2 then
					# Bottom right
					if event.pressed then ship.fire
				else
					# Bottom left
					var dx = ui_pos.x - joystick_x
					var dy = ui_pos.y - (ui_camera.height - joystick_y)

					# Any touch in the joystick reset all joystick effects.
					# It prevents leaving a button without releasing by moving
					# the pointer over another button.
					ship.applied_rotation = 0.0
					ship.applied_thrust = 0.0

					if not event.pressed then return true

					if dy > 0.0 then
						# Bottom part of the joystick, turns left or right
						if dx < 0.0 then
							ship.applied_rotation = -1.0
						else
							ship.applied_rotation = 1.0
						end
					else
						# Upper part of the joystick, detect action using 45d angles
						if dx < dy then
							ship.applied_rotation = -1.0
						else if dx > -dy then
							ship.applied_rotation = 1.0
						else
							ship.applied_thrust = 1.0
						end
					end
				end
			end
			return true
		end

		return false
	end

	redef fun on_create
	do
		super

		var display = display
		assert display != null

		# Standardize the UI size to look like a 1600 pixels high screen.
		# Meaning that the controls have a size proportional to the height of each screen.
		# In the code, we can use "pixel" precision as if the target screen was 1600 pixels high.
		ui_camera.reset_height 1600.0

		# Add the joystick to the UI
		ui_sprites.add new Sprite(spritesheet_controls.forward,
			ui_camera.bottom_left.offset(joystick_x, -200.0, 0.0))
		ui_sprites.add new Sprite(spritesheet_controls.left,
			ui_camera.bottom_left.offset(joystick_x-100.0, -joystick_y, 0.0))
		ui_sprites.add new Sprite(spritesheet_controls.right,
			ui_camera.bottom_left.offset(joystick_x+100.0, -joystick_y, 0.0))

		# Purely cosmetic joystick background
		ui_sprites.add new Sprite(spritesheet_controls.joystick_back,
			ui_camera.bottom_left.offset(joystick_x, -joystick_y, -1.0)) # In the back
		ui_sprites.add new Sprite(spritesheet_controls.joystick_down,
			ui_camera.bottom_left.offset(joystick_x, 0.0, 1.0))

		# Add the "open fire" button
		ui_sprites.add new Sprite(spritesheet_controls.fire,
			ui_camera.bottom_right.offset(-150.0, -150.0, 0.0))
	end
end
