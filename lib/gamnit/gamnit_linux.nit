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

# Support services for Gamnit on GNU/Linux
module gamnit_linux

import sdl2::events

intrude import gamnit
intrude import display_linux

redef class App
	private var sdl_event_buffer = new SDLEventBuffer.malloc

	redef fun feed_events
	do
		var display = display
		if display == null then return

		loop
			var avail = sdl_event_buffer.poll_event
			if not avail then break

			# Convert to an SDL event with data
			var sdl_event = sdl_event_buffer.to_event
			if sdl_event isa SDLWindowEvent and sdl_event.is_resized then
				display.width = sdl_event.data1
				display.height = sdl_event.data2
				display.aspect_ratio = sdl_event.data1.to_f / sdl_event.data2.to_f
				on_resize display
			end

			# Convert to `mnit::inputs` conforming objects
			var gamnit_event = sdl_event.to_gamnit_event(sdl_event_buffer)
			accept_event gamnit_event
		end
	end

	redef fun on_create
	do
		super
		create_display
		create_gamnit
		create_scene
	end
end

redef class GamnitDisplay
	redef var aspect_ratio = super is lazy
end

# ---
# Redef services from `sdl2::events`

redef class SDLEvent
	private fun to_gamnit_event(buffer: SDLEventBuffer): GamnitInputEvent
	do return new GamnitOtherEvent(buffer, self)
end

redef class SDLQuitEvent
	redef fun to_gamnit_event(buffer) do return new GamnitQuitEvent(buffer, self)
end

redef class SDLMouseEvent
	redef fun to_gamnit_event(buffer) do return new GamnitPointerEvent(buffer, self)
end

redef class SDLMouseWheelEvent
	redef fun to_gamnit_event(buffer) do return new GamnitMouseWheelEvent(buffer, self)
end

redef class SDLKeyboardEvent
	redef fun to_gamnit_event(buffer) do return new GamnitKeyEvent(buffer, self)
end

# ---
# Implement `mnit::inputs` interfaces

# SDL2 event wrapper implementing the `mnit::input` API
#
# There is two views to the underlying native object: `buffer` and `native`.
class GamnitInputEvent
	super InputEvent

	# Native SDL 2 event buffer with the pseudo class hierarchy metadata
	var buffer: SDLEventBuffer

	# Native SDL 2 event
	var native: NATIVE

	# Type of the `native` underlying SDL 2 event
	type NATIVE: SDLEvent
end

# Event on user requested quit
class GamnitQuitEvent
	super GamnitInputEvent
	super QuitEvent

	redef type NATIVE: SDLQuitEvent
end

# Event on keyboard input
class GamnitKeyEvent
	super GamnitInputEvent
	super KeyEvent

	redef type NATIVE: SDLKeyboardEvent

	redef fun is_down do return buffer.is_keydown
	redef fun is_up do return buffer.is_keyup
	redef fun is_arrow_up do return native.keysym.is_up
	redef fun is_arrow_left do return native.keysym.is_left
	redef fun is_arrow_down do return native.keysym.is_down
	redef fun is_arrow_right do return native.keysym.is_right
	redef fun to_c do return native.to_s.chars.first
	redef fun name do return native.to_s.to_lower
end

# Event on pointer, mouse and finger input
class GamnitPointerEvent
	super GamnitInputEvent
	super PointerEvent

	redef type NATIVE: SDLMouseEvent

	redef fun x do return native.x.to_f
	redef fun y do return native.y.to_f
	redef fun is_move do return buffer.is_mouse_motion

	redef fun pressed
	do
		var native = native
		if native isa SDLMouseButtonEvent then
			return native.pressed and native.button == 1
		else if native isa SDLMouseMotionEvent then
			return native.state & 1 == 1
		else abort
	end
end

# Event on mouse wheel input
class GamnitMouseWheelEvent
	super GamnitInputEvent

	redef type NATIVE: SDLMouseWheelEvent

	# Horizontal scroll amount
	fun x: Float do return native.x.to_f

	# Vertical scroll amount
	fun y: Float do return native.y.to_f
end

# SDL2 event not handled by gamnit
class GamnitOtherEvent
	super GamnitInputEvent
end
