# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# SDL 2 events and related services
module events is pkgconfig "sdl2"

import sdl2_base

in "C Header" `{
	#include <SDL2/SDL_events.h>
`}

# A temporary buffer for a SDL 2 event
#
# An instance of this class should be used to call `poll_event` and `to_event`.
extern class SDLEventBuffer `{SDL_Event *`}
	# Allocate memory for a new `SDLEventBuffer`
	new malloc `{ return malloc(sizeof(SDL_Event)); `}

	# Poll and event into `self`
	#
	# Returns `true` if an event was available.
	fun poll_event: Bool `{ return SDL_PollEvent(recv); `}

	# Get a reference to the data at `self` as a precise `SDLEvent`
	#
	# Returns `null` if the event is unknown.
	#
	# Note: The returned `SDLEvent` is just a different Nit instance pointing to the same data.
	# A call to `poll_event` will invalidate any instances returned previously by `to_event`.
	#
	# TODO remove `nullable` from the return type once all cases are correctly handled.
	fun to_event: nullable SDLEvent
	do
		if is_quit then return to_quit
		if is_mouse_motion then return to_mouse_motion
		if is_mouse_button_down then return to_mouse_button_down
		if is_mouse_button_up then return to_mouse_button_up
		return null
	end

	# Is this a quit event?
	fun is_quit: Bool `{ return recv->type == SDL_QUIT; `}

	# Get a reference to data at `self` as a `SDLQuitEvent`
	fun to_quit: SDLQuitEvent `{ return recv; `}

	# Is this a mouse motion event?
	fun is_mouse_motion: Bool `{ return recv->type == SDL_MOUSEMOTION; `}

	# Get a reference to data at `self` as a `SDLMouseMotionEvent`
	fun to_mouse_motion: SDLMouseMotionEvent `{ return recv; `}

	# Is this a mouse button down event?
	fun is_mouse_button_down: Bool `{ return recv->type == SDL_MOUSEBUTTONDOWN; `}

	# Get a reference to data at `self` as a `SDLMouseButtonDownEvent`
	fun to_mouse_button_down: SDLMouseButtonDownEvent `{ return recv; `}

	# Is this a mouse button up event?
	fun is_mouse_button_up: Bool `{ return recv->type == SDL_MOUSEBUTTONUP; `}

	# Get a reference to data at `self` as a `SDLMouseButtonUpEvent`
	fun to_mouse_button_up: SDLMouseButtonUpEvent `{ return recv; `}

	# TODO other SDL events:
	#
	# SDL_CommonEvent common
	# SDL_WindowEvent window
	# SDL_KeyboardEvent key
	# SDL_TextEditingEvent edit
	# SDL_TextInputEvent text
	# SDL_MouseWheelEvent wheel
	# SDL_JoyAxisEvent jaxis
	# SDL_JoyBallEvent jball
	# SDL_JoyHatEvent jhat;
	# SDL_JoyButtonEvent jbutton
	# SDL_JoyDeviceEvent jdevice
	# SDL_ControllerAxisEvent caxis
	# SDL_ControllerButtonEvent cbutton
	# SDL_ControllerDeviceEvent cdevice
	# SDL_QuitEvent quit
	# SDL_UserEvent user
	# SDL_SysWMEvent syswm
	# SDL_TouchFingerEvent tfinger
	# SDL_MultiGestureEvent mgesture
	# SDL_DollarGestureEvent dgesture
	# SDL_DropEvent drop
end

# An event from SDL 2
extern class SDLEvent `{SDL_Event *`}
end

# A quit event, usually from the close window button
extern class SDLQuitEvent
	super SDLEvent
end

# A mouse event
extern class SDLMouseEvent
	super SDLEvent

	# Implementation note
	#
	# Even if the structures are different between the mouse events, the first
	# four fields of each events are common to all of them.

	# Which mouse, pointer or finger raised this event
	fun which: Int `{ return recv->motion.which; `}
end

# A mouse motion event
extern class SDLMouseMotionEvent
	super SDLMouseEvent

	# X coordinate on screen of this event
	fun x: Int `{ return recv->motion.x; `}

	# Y coordinate on screen of this event
	fun y: Int `{ return recv->motion.y; `}

	# Difference on the X axis between this event and the previous one
	fun xrel: Int `{ return recv->motion.xrel; `}

	# Difference on the Y axis between this event and the previous one
	fun yrel: Int `{ return recv->motion.yrel; `}
end

# A mouse button event
#
# This could as well be an abstract class. All instances of `SDLMouseButtonEvent`
# is either a `SDLMouseButtonUpEvent` or a `SDLMouseButtonDownEvent`.
extern class SDLMouseButtonEvent
	super SDLMouseEvent

	# X coordinate on screen of this event
	fun x: Int `{ return recv->button.x; `}

	# Y coordinate on screen of this event
	fun y: Int `{ return recv->button.y; `}
end

# A mouse button release event
extern class SDLMouseButtonUpEvent
	super SDLMouseButtonEvent
end

# A mouse button click event
extern class SDLMouseButtonDownEvent
	super SDLMouseButtonEvent
end
