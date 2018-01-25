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

# Virtual gamepad mapped to keyboard keys for quick and dirty mobile support
#
# For Android, the texture is automatically added to the APK when this
# module is imported. However, due to a limitation of the _app.nit_
# framework on desktop OS, the texture must be copied manually to the assets
# folder at `assets/images`, the texture is available at, from the repo root,
# `lib/gamnit/virtual_gamepad/assets/images`.
#
# The texture was created by kenney.nl and modified by Alexis Laferrière.
# It is published under CC0 and can be used and modified without attribution.
#
# ~~~
# redef class App
#     redef fun create_scene
#     do
#         super
#
#         # Create the virtual gamepad
#         var gamepad = new VirtualGamepad
#
#         # Configure it as needed
#         gamepad.add_dpad(["w","a","s","d"])
#         gamepad.add_button("x", gamepad_spritesheet.x)
#         gamepad.add_button("space", gamepad_spritesheet.star)
#
#         # Assign it as the active gamepad
#         self.gamepad = gamepad
#    end
#
#    fun setup_play_ui
#    do
#        # Show the virtual gamepad
#        var gamepad = self.gamepad
#        if gamepad != null then gamepad.visible = true
#    end
# end
# ~~~
module virtual_gamepad is app_files

import flat
private import keys
import virtual_gamepad_spritesheet

redef class App

	# Current touch gamepad, still may be invisible
	var gamepad: nullable VirtualGamepad = null is writable

	# Textures used for `DPad` and available to clients
	var gamepad_spritesheet = new VirtualGamepadSpritesheet

	redef fun accept_event(event)
	do
		# Priority to the gamepad
		var gamepad = gamepad
		if gamepad != null and gamepad.accept_event(event) then return true

		return super
	end
end

# Gamepad on touch screen bound to keyboard keys
#
# Fires `VirtualGamepadEvent` which implement `KeyEvent` so it behaves like a keyboard.
class VirtualGamepad

	private var sprites = new Array[Sprite]

	# Controls composing this gamepad
	#
	# Controls can be added directly to this array or using `add_dpad`
	# and `add_button`.
	var controls = new Array[RoundControl]

	# Add and return a directional pad (`DPad`) to a default location
	#
	# The 4 buttons fire events with the corresponding name in `names`.
	# Items in `names` should be in order of top, left, down and right.
	# If `null`, defaults to WASD.
	#
	# If this method is called, it should be before `add_button` to
	# avoid overlapping controls.
	#
	# A maximum of 2 `DPad` may be added using this method.
	# The first `DPad` is placed on the left of the screen.
	# The second `DPad` is on the right and replaces some buttons
	# added by `add_button`.
	#
	# Require: `names == null or names.length == 4`
	fun add_dpad(names: nullable Array[String]): nullable DPad
	do
		if names == null then names = ["w","a","s","d"]
		assert names.length == 4

		if n_dpads == 0 then
			var dpad = new DPad(app.ui_camera.bottom_left.offset(200.0, 100.0, 0.0), names)
			controls.add dpad
			return dpad
		else if n_dpads == 1 then
			var dpad = new DPad(app.ui_camera.bottom_right.offset(-200.0, 100.0, 0.0), names)
			controls.add dpad
			return dpad
		else
			print_error "Too many DPad ({n_dpads}) in {self}"
			return null
		end
	end

	# Number of `DPad` in `controls`
	private fun n_dpads: Int
	do
		var n_dpads = 0
		for c in controls do if c isa DPad then n_dpads += 1
		return n_dpads
	end

	# Button positions for `add_button`, offsets from the bottom right
	private var button_positions = new Array[Point[Float]].with_items(
		new Point[Float](-150.0, 150.0),
		new Point[Float](-150.0, 350.0),
		new Point[Float](-150.0, 550.0),
		new Point[Float](-350.0, 150.0),
		new Point[Float](-350.0, 350.0),
		new Point[Float](-350.0, 550.0))

	# Add and return a round button to a default location
	#
	# Fired events use `name`, it should usually correspond to a
	# keyboard key like "space" or "a".
	# `texture` is displayed at the button position, it also sets the
	# touchable surface of the button.
	#
	# If this method is called, it should be after `add_dpad` to
	# avoid overlapping controls.
	#
	# A maximum of 6 buttons may be added using this method when
	# there is less than 2 `DPad`. Otherwise, only 2 buttons can be added.
	fun add_button(name: String, texture: Texture): nullable RoundButton
	do
		if n_dpads == 2 and button_positions.length == 6 then
			# Drop the bottom 4 buttons
			button_positions.remove_at 4
			button_positions.remove_at 3
			button_positions.remove_at 1
			button_positions.remove_at 0
		end

		assert button_positions.not_empty else print_error "Too many buttons in {self}"
		var pos = button_positions.shift
		var but = new RoundButton(
			app.ui_camera.bottom_right.offset(pos.x, pos.y, 0.0), name, texture)
		controls.add but
		return but
	end

	private fun prepare
	do
		var display = app.display
		assert display != null

		for control in controls do
			var sprites = control.sprites
			app.ui_sprites.add_all sprites
		end
	end

	# Is this control visible?
	var visible = false is private writable(visible_direct=)

	# Set this control to visible or not
	fun visible=(value: Bool)
	do
		visible_direct = value
		if value then show else hide
	end

	private fun show
	do
		if sprites.is_empty then prepare
		app.ui_sprites.add_all sprites
	end

	private fun hide do for s in sprites do app.ui_sprites.remove_all s

	private var control_under_pointer = new Map[Int, RoundControl]

	private fun accept_event(event: InputEvent): Bool
	do
		if not visible then return false

		var display = app.display
		if display == null then return false

		if event isa PointerEvent then
			var ui_pos = app.ui_camera.camera_to_ui(event.x, event.y)

			for control in controls do
				if control.accept_event(event, ui_pos) then
					var prev_control = control_under_pointer.get_or_null(event.pointer_id)
					if prev_control != null and prev_control != control then
						prev_control.depressed_down
					end
					control_under_pointer[event.pointer_id] = control
					return true
				end
			end

			var prev_control = control_under_pointer.get_or_null(event.pointer_id)
			if prev_control != null then prev_control.depressed_down
			control_under_pointer.keys.remove event.pointer_id
		end

		return false
	end
end

# Event fired by a `VirtualGamepad`
class VirtualGamepadEvent
	super KeyEvent

	redef var name

	redef var is_down is noautoinit
end

# Control composing a `VirtualGamepad`
abstract class RoundControl
	# Center position on the UI
	var center: Point3d[Float]

	# Radius in UI units/pixels of the  part of this control
	fun radius: Float is abstract

	private fun sprites: Array[Sprite] do return new Array[Sprite]

	private fun accept_event(event: InputEvent, ui_pos: Point[Float]): Bool
	do
		if event isa PointerEvent and contains(ui_pos) then
			return hit(event, ui_pos)
		end

		return false
	end

	# Does `self` contain a pointer at `ui_pos`?
	private fun contains(ui_pos: Point[Float]): Bool
	do
		var dx = center.x - ui_pos.x
		var dy = center.y - ui_pos.y
		return dx*dx + dy*dy < radius*radius
	end

	private fun hit(event: PointerEvent, ui_pos: Point[Float]): Bool
	do return false

	# Keys currently down, to be depressed if the pointer moves away
	private var down_names = new Set[String]

	# Depress/release keys kept down, listed by `down_names`
	private fun depressed_down
	do
		for name in down_names do
			var e = new VirtualGamepadEvent(name)
			e.is_down = false
			app.accept_event e
		end
		down_names.clear
	end
end

# Simple action button
class RoundButton
	super RoundControl

	# Event name, should usually correspond to a keyboard key like "a" or "left"
	var name: String

	# Texture drawn for this button, may be from `app.gamepad_spritesheet`
	var texture: Texture

	redef fun radius do return 0.5*texture.height

	redef fun hit(event, ui_pos)
	do
		if not event.is_move then
			var e = new VirtualGamepadEvent(name.to_s)
			e.is_down = event.pressed
			app.accept_event e

			if event.pressed then
				down_names.add name
			else down_names.clear
		end
		return true
	end

	redef var sprites = [new Sprite(texture, center)] is lazy
end

# Directional pad with up to 4 buttons
#
# Assumes that each pad is manipulated by at max a single pointer.
class DPad
	super RoundControl

	# Event names for the keys, in order of top, left, down and right
	var names: Array[String]

	# Show the up button
	var show_up = true is writable

	# Show the down button
	var show_down = true is writable

	# Show the left button
	var show_left = true is writable

	# Show the right button
	var show_right = true is writable

	redef fun radius do return 200.0

	redef fun contains(ui_pos)
	do
		if show_down then return super(new Point[Float](ui_pos.x+0.0, ui_pos.y-100.0))
		return super
	end

	redef fun hit(event, ui_pos)
	do
		var display = app.display
		if display == null then return false

		var dx = ui_pos.x - center.x
		var dy = ui_pos.y - center.y
		if show_down then dy -= 100.0

		# Angle (with 0.0 on the right) to index in WASD (0 -> W/up)
		var indexes = new Set[Int]
		var ao = atan2(dy, dx)
		ao -= pi/4.0

		# Look for 2 angles so 2 buttons can be pressed at the same time
		for da in once [-pi/8.0, pi/8.0] do
			var a = ao+da
			while a < 0.0 do a += pi*2.0
			while a > 2.0*pi do a -= pi*2.0
			var index = (a * 2.0 / pi).floor.to_i
			if index < 0 then index += 4
			indexes.add index
		end

		var shows = [show_up, show_left, show_down, show_right]
		var new_down_names = new Set[String]
		for index in indexes do
			# Don't trigger events for hidden buttons/directions
			if not shows[index] then continue

			var name = names[index]
			# Simulate event
			var e = new VirtualGamepadEvent(name)
			e.is_down = event.pressed
			app.accept_event e

			if event.pressed then new_down_names.add name
		end

		# Depress released directions
		for name in down_names do
			if not new_down_names.has(name) then
				var e = new VirtualGamepadEvent(name)
				e.is_down = false
				app.accept_event e
			end
		end

		down_names = new_down_names

		return true
	end

	redef fun sprites
	do
		var dy = 0.0
		if show_down then dy = 100.0

		var sprites = new Array[Sprite]

		# Interactive buttons
		if show_up then sprites.add new Sprite(app.gamepad_spritesheet.dpad_up,
			center.offset(   0.0, 100.0+dy, 0.0))
		if show_left then sprites.add new Sprite(app.gamepad_spritesheet.dpad_left,
			center.offset(-100.0,   0.0+dy, 0.0))
		if show_right then sprites.add new Sprite(app.gamepad_spritesheet.dpad_right,
			center.offset( 100.0,   0.0+dy, 0.0))
		if show_down then sprites.add new Sprite(app.gamepad_spritesheet.dpad_down,
			center.offset(   0.0,-100.0+dy, 0.0))

		# Non-interactive joystick background
		var back = new Sprite(app.gamepad_spritesheet.joystick_back,
			center.offset(0.0, 0.0+dy, -1.0)) # In the back
		back.draw_order = -1
		sprites.add back

		# Non-interactive handle in the bottom
		if not show_down then sprites.add new Sprite(app.gamepad_spritesheet.joystick_down,
			center.offset(0.0, -100.0+dy,  0.0))

		return sprites
	end
end
