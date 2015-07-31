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

# Android client with a joystick
module android_client is
	app_name "Tinks!"
	app_namespace "net.xymus.tinks"
	android_manifest """<uses-permission android:name="android.permission.INTERNET" />"""
	android_api_target 10
end

import mnit_android
import android::audio
import android::vibration
import android::landscape

intrude import client
import controls

redef class App

	# Tank direction control
	var joystick = new Joystick is lazy

	redef var controls = new Array[Control].with_items(joystick) is lazy

	redef fun input(event)
	do
		var local_player = context.local_player
		var local_tank = local_tank
		if local_player != null and local_tank != null and event isa ControlEvent then
			local_player.orders.add new TankDirectionOrder(local_tank, joystick.value_x, joystick.value_y)
			return true
		end

		if event isa AndroidKeyEvent then
			if event.is_back_key then
				quit = true
				native_activity.finish
				return false
			end
		end

		return super
	end
end

redef class ExplosionEvent
	redef fun client_react(display, turn)
	do
		super

		var local_tank = app.local_tank
		var d = 20
		if local_tank != null then
			d = local_tank.pos.dist(pos).to_i
			d = 100 - d*5
			d = d.max(10)
		end

		app.vibrator.vibrate d
	end
end

# On-demand joystick that popups up when tapping the left border of the screen
class Joystick
	super Control

	# Current position of the joystick from its center on the X axis, in `[-1.0..1.0]`
	var value_x = 0.0

	# Current position of the joystick from its center on the Y axis, in `[-1.0..1.0]`
	var value_y = 0.0

	# Deadzone at the center of the joystick where the values are set at 0.0
	var deadzone = 0.3

	# Position of the center of the joystick, set at where the screen is first tapped
	var center: nullable ScreenPos

	# Position of the top of the joystick, the one that follows the finger
	var handle: nullable ScreenPos

	# Id of the pointer/finger that triggered the joystick
	var captured_pointer: Int = -1

	# Image of the left border
	var img_zone: Image = app.assets.drawing.joystick_zone

	# Image of the joystick base
	var img_back: Image = app.assets.drawing.joystick_back

	# Image of the top of the joystick
	var img_handle: Image = app.assets.drawing.joystick_handle

	# Radius where the top of the joystick can move around the center
	var radius: Float = img_back.width.to_f / 2.0 - 4.0

	# Width of the left border used to trigger the joystick
	var capture_width = 400.0

	redef fun draw(display)
	do
		display.blit_stretched(img_zone,
			0, -128,
			0, display.height+128,
			capture_width, display.height+128,
			capture_width, -128)

		var center = center
		var handle = handle
		if center != null and handle != null then
			img_back.scale = 1.0
			img_handle.scale = 1.0
			display.blit_centered(img_back, center.x, center.y)
			display.blit_centered(img_handle, handle.x, handle.y)
		end
	end

	redef fun input(event)
	do
		if event isa AndroidPointerEvent then
			var center = center
			if center == null then
				# New joystick?
				print "New joystick? {event.just_went_down} {event.x} < {capture_width}"
				if event.just_went_down and
				   event.x < capture_width then
					# Capture it!
					self.center = new ScreenPos(event.x, event.y)
					self.captured_pointer = event.pointer_id
					self.handle = center
					return true
				end
			else
				# Already down

				# Is it the finger already on the joystick?
				if captured_pointer != event.pointer_id then return false

				if event.depressed then
					self.center = null
					self.handle = null
					self.value_x = 0.0
					self.value_y = 0.0
				else
					# Update values
					var dx = center.x - event.x
					var dy = center.y - event.y # This is inverted, as is the input
					var d = dx.hypot_with(dy)
					if d < deadzone then
						self.value_x = 0.0
						self.value_y = 0.0
						self.handle = center
					else
						var a = atan2(dx, dy)+pi/2.0
						self.value_x = a.cos
						self.value_y = a.sin

						if d > radius then d = radius
						self.handle = new ScreenPos(center.x+a.cos*d, center.y-a.sin*d)
					end
				end

				app.input new ControlEvent(self)
				return true
			end
		end

		return false
	end
end
