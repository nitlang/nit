# This file is part of NIT ( https://nitlanguage.org ).
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

# Temporary buffer for an SDL 2 event exposing the pseudo-class hierarchy metadata
#
# An instance of this class should be used to call `poll_event` and `to_event`.
extern class SDLEventBuffer `{SDL_Event *`}
	# Allocate memory for a new `SDLEventBuffer`
	new malloc `{ return malloc(sizeof(SDL_Event)); `}

	# Poll and event into `self`
	#
	# Returns `true` if an event was available.
	fun poll_event: Bool `{ return SDL_PollEvent(self); `}

	# Get a reference to the data at `self` as a precise `SDLEvent`
	#
	# Returns `null` if the event is unknown.
	#
	# Note: The returned `SDLEvent` is just a different Nit instance pointing to the same data.
	# A call to `poll_event` will invalidate any instances returned previously by `to_event`.
	fun to_event: SDLEvent
	do
		if is_quit then return to_quit
		if is_mouse_motion then return to_mouse_motion
		if is_mouse_button_down then return to_mouse_button_down
		if is_mouse_button_up then return to_mouse_button_up
		if is_mouse_wheel then return to_mouse_wheel
		if is_keydown then return to_keydown
		if is_keyup then return to_keyup
		if is_window then return to_window
		return to_event_direct
	end

	private fun to_event_direct: SDLEvent `{ return self; `}

	# Is this a quit event?
	fun is_quit: Bool `{ return self->type == SDL_QUIT; `}

	# Get a reference to data at `self` as a `SDLQuitEvent`
	#
	# Require: `is_quit`
	fun to_quit: SDLQuitEvent `{ return self; `}

	# Is this a mouse motion event?
	fun is_mouse_motion: Bool `{ return self->type == SDL_MOUSEMOTION; `}

	# Get a reference to data at `self` as a `SDLMouseMotionEvent`
	#
	# Require: `is_mouse_motion`
	fun to_mouse_motion: SDLMouseMotionEvent `{ return self; `}

	# Is this a mouse button down event?
	fun is_mouse_button_down: Bool `{ return self->type == SDL_MOUSEBUTTONDOWN; `}

	# Get a reference to data at `self` as a `SDLMouseButtonDownEvent`
	#
	# Require: `is_mouse_button_down`
	fun to_mouse_button_down: SDLMouseButtonDownEvent `{ return self; `}

	# Is this a mouse button up event?
	fun is_mouse_button_up: Bool `{ return self->type == SDL_MOUSEBUTTONUP; `}

	# Get a reference to data at `self` as a `SDLMouseButtonUpEvent`
	#
	# Require: `is_mouse_button_up`
	fun to_mouse_button_up: SDLMouseButtonUpEvent `{ return self; `}

	# Is this a mouse wheel event?
	fun is_mouse_wheel: Bool `{ return self->type == SDL_MOUSEWHEEL; `}

	# Get a reference to data at `self` as a `SDLMouseWheelEvent`
	#
	# Require: `is_mouse_wheel`
	fun to_mouse_wheel: SDLMouseWheelEvent `{ return self; `}

	# Is this a key presse event?
	fun is_keydown: Bool `{ return self->type == SDL_KEYDOWN; `}

	# Get a reference to data at `self` as a `SDLKeyboardDownEvent`
	#
	# Require: `is_keydown`
	fun to_keydown: SDLKeyboardDownEvent `{ return self; `}

	#  Is this a key release event?
	fun is_keyup: Bool `{ return self->type == SDL_KEYUP; `}

	# Get a reference to data at `self` as a `SDLKeyboardUpEvent`
	#
	# Require: `is_keyup`
	fun to_keyup: SDLKeyboardUpEvent `{ return self; `}

	#  Is this a window event?
	fun is_window: Bool `{ return self->type == SDL_WINDOWEVENT; `}

	# Get a reference to data at `self` as a `SDLWindowEvent`
	#
	# Require: `is_window`
	fun to_window: SDLWindowEvent `{ return self; `}

	# TODO other SDL events:
	#
	# SDL_CommonEvent common
	# SDL_WindowEvent window
	# SDL_TextEditingEvent edit
	# SDL_TextInputEvent text
	# SDL_JoyAxisEvent jaxis
	# SDL_JoyBallEvent jball
	# SDL_JoyHatEvent jhat;
	# SDL_JoyButtonEvent jbutton
	# SDL_JoyDeviceEvent jdevice
	# SDL_ControllerAxisEvent caxis
	# SDL_ControllerButtonEvent cbutton
	# SDL_ControllerDeviceEvent cdevice
	# SDL_UserEvent user
	# SDL_SysWMEvent syswm
	# SDL_TouchFingerEvent tfinger
	# SDL_MultiGestureEvent mgesture
	# SDL_DollarGestureEvent dgesture
	# SDL_DropEvent drop
end

# SDL 2 event, only the data and no metadata
extern class SDLEvent `{SDL_Event *`}
end

# Quit event, usually from the close window button
extern class SDLQuitEvent
	super SDLEvent
end

# Mouse event
extern class SDLMouseEvent
	super SDLEvent

	# Implementation note
	#
	# Even if the structures are different between the mouse events, the first
	# four fields of each events are common to all of them.

	# Which mouse, pointer or finger raised this event
	fun which: Int `{ return self->motion.which; `}

	# X coordinate on screen of this event
	fun x: Int is abstract

	# Y coordinate on screen of this event
	fun y: Int is abstract
end

# Mouse motion event
extern class SDLMouseMotionEvent
	super SDLMouseEvent

	redef fun x `{ return self->motion.x; `}

	redef fun y `{ return self->motion.y; `}

	# State of the buttons
	#
	# ~~~raw
	# state & 1 == 1 -> left button down
	# state & 2 == 2 -> middle button down
	# state & 4 == 4 -> right button down
	# ~~~
	fun state: Int `{ return self->motion.state; `}

	# Difference on the X axis between this event and the previous one
	fun xrel: Int `{ return self->motion.xrel; `}

	# Difference on the Y axis between this event and the previous one
	fun yrel: Int `{ return self->motion.yrel; `}
end

# Mouse button event
#
# This could as well be an abstract class. All instances of `SDLMouseButtonEvent`
# is either a `SDLMouseButtonUpEvent` or a `SDLMouseButtonDownEvent`.
extern class SDLMouseButtonEvent
	super SDLMouseEvent

	# Index of the button
	#
	# ~~~raw
	# 1 -> left button
	# 2 -> center button
	# 3 -> right button
	# ~~~
	fun button: Int `{ return self->button.button; `}

	# Is the button currently pressed down?
	fun pressed: Bool `{ return self->button.state == SDL_PRESSED; `}

	# Number of clicks (1 or 2)
	fun clicks: Int `{ return self->button.clicks; `}

	redef fun x `{ return self->button.x; `}

	redef fun y `{ return self->button.y; `}
end

# Mouse button release event
extern class SDLMouseButtonUpEvent
	super SDLMouseButtonEvent
end

# Mouse button click event
extern class SDLMouseButtonDownEvent
	super SDLMouseButtonEvent
end

# Mouse wheel event
extern class SDLMouseWheelEvent
	super SDLEvent

	# Horizontal scroll amount
	fun x: Int `{ return self->wheel.x; `}

	# Vertical scroll amount
	fun y: Int `{ return self->wheel.y; `}
end

# Keyboard button event
extern class SDLKeyboardEvent
	super SDLEvent

	# Is this is a key repeat?
	fun repeat: Bool `{ return self->key.repeat; `}

	# The key that was pressed or released
	fun keysym: SDLKeysym `{ return &self->key.keysym; `}

	redef fun to_s do return native_to_s.to_s
	private fun native_to_s: CString `{
		return (char*)SDL_GetKeyName(self->key.keysym.sym);
	`}
end

# Keyboard button release event
extern class SDLKeyboardUpEvent
	super SDLKeyboardEvent
end

# Keyboard button click event
extern class SDLKeyboardDownEvent
	super SDLKeyboardEvent
end

# Key information
extern class SDLKeysym `{ SDL_Keysym * `}
	# Is this the arrow right key?
	fun is_right: Bool `{ return self->sym == SDLK_RIGHT; `}

	# Is this the arrow left key?
	fun is_left: Bool `{ return self->sym == SDLK_LEFT; `}

	# Is this the arrow down key?
	fun is_down: Bool `{ return self->sym == SDLK_DOWN; `}

	# Is this the arrow up key?
	fun is_up: Bool `{ return self->sym == SDLK_UP; `}

	# Modification keys
	fun mod: Int `{ return self->mod; `}
	# TODO related masks
end

# Window event
extern class SDLWindowEvent
	super SDLEvent

	# Window identifier
	fun id: Int `{ return self->window.windowID; `}

	# Is `self` a resized event?
	fun is_resized: Bool `{ return self->window.event == SDL_WINDOWEVENT_RESIZED; `}

	# Is `self` a size changed event?
	fun is_size_changed: Bool `{ return self->window.event == SDL_WINDOWEVENT_SIZE_CHANGED; `}

	# `data1` field, depends on the event kind
	fun data1: Int `{ return self->window.data1; `}

	# `data2` field, depends on the event kind
	fun data2: Int `{ return self->window.data2; `}
end
