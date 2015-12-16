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

# Support services for Gamnit on GNU/Linux
module gamnit_linux

intrude import gamnit
import display_linux

redef class App
	redef fun feed_events
	do
		var display = display
		if display == null then return

		var events = display.sdl_display.events
		display.check_lock_cursor
		for event in events do accept_event(event)
	end
end

redef class GamnitDisplay

	# HACK to keep the cursor in the center of the screen without producing move events
	private fun check_lock_cursor
	do
		var sdl_display = sdl_display
		if lock_cursor and sdl_display.input_focus then
			sdl_display.ignore_mouse_motion_events = true
			sdl_display.warp_mouse(width/2, height/2)
			sdl_display.ignore_mouse_motion_events = false
		end
	end
end
