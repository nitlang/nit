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

# Mouse wheel and middle mouse button to control camera
module camera_control_linux

import linux
import camera_control

redef class EulerCamera

	# Zoom factor, default at 1.2, higher means more reactive zoom effect
	var camera_zoom_mod = 1.2 is writable

	# Scroll trigger button mask from SDL2 (1: left, 2: middle, 4: right)
	#
	# Set to 0 to deactivate the scrolling feature.
	var camera_pan_mask = 2 is writable

	redef fun accept_scroll_and_zoom(event)
	do
		# Zoom
		if event isa GamnitMouseWheelEvent then
			var dy = event.y
			var mod = camera_zoom_mod
			if dy > 0.0 then
				# Zoom in when moving the wheel up
				mod = 1.0/mod
			else dy = -dy

			position.z *= dy * mod
			return true
		end

		# Scroll
		var but_mask = camera_pan_mask
		if but_mask != 0 and event isa GamnitPointerEvent then
			var native = event.native
			if native isa SDLMouseMotionEvent and native.state & but_mask == but_mask then
				var dx = native.xrel.to_f
				var dy = native.yrel.to_f

				var world_height = field_of_view_y.sin * position.z
				var mod = app.display.as(not null).height.to_f / world_height
				position.x -= dx / mod
				position.y += dy / mod # Y is inverted between the input and output
				return true
			end
		end

		return false
	end
end
