# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006 Jean Privat <jean@pryen.org>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Binding to the SDL multomedia library
package sdl

extern SDL_Surface
	fun width: Int is extern "sdl_surface_width"
	fun height: Int is extern "sdl_surface_height"
	
	fun lock_surface: Int is extern "SDL_LockSurface"
	fun unlock_surface: Int is extern "SDL_LockSurface"

	fun blit_on(dest: SDL_Surface) is extern "sdl_blit_surface"
	fun blit_on_xy(dest: SDL_Surface, dest_x: Int, dest_y: Int) is extern "sdl_blit_surface_xy"

	fun update_rect(x: Int, y: Int, w: Int, h: Int) is extern "SDL_UpdateRect"
	fun update_all
	do
		update_rect(0, 0, 0, 0)
	end

	fun clear is extern "sdl_clear_sruface"

	fun to_display_format: SDL_Surface is extern "SDL_DisplayFormat"
	fun free is extern "SDL_FreeSurface"
end

extern SDL_Screen
	super SDL_Surface
	fun flip is extern "SDL_Flip"
end
	
extern SDL_Event
	fun is_keyboard: Bool is extern "sdl_evt_is_keyboard"
	fun as_keyboard: SDL_KeyboardEvent is extern "sdl_evt_as_keyboard"
	fun is_mouse_button: Bool is extern "sdl_evt_is_mouse_button"
	fun as_mouse_button: SDL_MouseButtonEvent is extern "sdl_evt_as_mouse_button"
	fun is_mouse_motion: Bool is extern "sdl_evt_is_mouse_motion"
	fun as_mouse_motion: SDL_MouseMotionEvent is extern "sdl_evt_as_mouse_motion"
	fun is_expose: Bool is extern "sdl_evt_is_expose"
	fun is_quit: Bool is extern "sdl_evt_is_quit"
end

extern SDL_ButtonEvent
	super SDL_Event
	fun is_pressed: Bool is abstract
end

extern SDL_MouseEvent
	super SDL_Event
	fun x: Int is abstract
	fun y: Int is abstract
end

extern SDL_KeyboardEvent
	super SDL_ButtonEvent
	redef fun is_pressed: Bool is extern "sdl_keyboard_evt_state"
end

extern SDL_MouseButtonEvent
	super SDL_ButtonEvent
	super SDL_MouseEvent
	redef fun is_pressed: Bool is extern "sdl_mouse_button_evt_state"
	redef fun x: Int is extern "sdl_mouse_button_evt_x"
	redef fun y: Int is extern "sdl_mouse_button_evt_y"
	fun button: Int is extern "sdl_mouse_button_evt_button"
end

extern SDL_MouseMotionEvent
	super SDL_MouseEvent
	redef fun x: Int is extern "sdl_mouse_evt_x"
	redef fun y: Int is extern "sdl_mouse_evt_y"
	fun xrel: Int is extern "sdl_mouse_evt_xrel"
	fun yrel: Int is extern "sdl_mouse_evt_yrel"
end

class SDL_EventListener
	fun on_keyboard(evt: SDL_KeyboardEvent)
	do end
	
	fun on_mouse_button(evt: SDL_MouseButtonEvent)
	do end

	fun on_mouse_motion(evt: SDL_MouseMotionEvent)
	do end

	fun on_expose
	do end

	fun on_quit
	do end
end

class SDL_EventProcessor
	var _listeners: Array[SDL_EventListener]

	fun add_listener(l: SDL_EventListener)
	do
		_listeners.add(l)
	end

	fun remove_listener(l: SDL_EventListener)
	do
		_listeners.remove(l)
	end
	
	fun process_one_event
	do
		if sdl_poll_next_event then
			process_event(sdl_current_event)
		end
	end

	fun process_all_events
	do
		while sdl_poll_next_event do
			process_event(sdl_current_event)
		end
	end
	
	private fun process_event(evt: SDL_Event)
	do
		var sdl_listeners = _listeners
		if evt.is_keyboard then
			for i in sdl_listeners do
				i.on_keyboard(evt.as_keyboard)
			end
		else if evt.is_mouse_button then
			for i in sdl_listeners do
				i.on_mouse_button(evt.as_mouse_button)
			end
		else if evt.is_mouse_motion then
			for i in sdl_listeners do
				i.on_mouse_motion(evt.as_mouse_motion)
			end
		else if evt.is_expose then
			for i in sdl_listeners do
				i.on_expose
			end
		else if evt.is_quit then
			for i in sdl_listeners do
				i.on_quit
			end
		end
	end

	init
	do
		_listeners = new Array[SDL_EventListener]
	end
end

# General

fun sdl_init is extern

# Video

fun sdl_set_video_mode(w: Int, h: Int, d: Int): SDL_Screen is extern
fun sdl_set_fullscreen_video_mode(w: Int, h: Int, d: Int): SDL_Screen is extern

fun sdl_load_raw_bmp(s: String): SDL_Surface
do
	return sdl_load_bmp_native(s.to_cstring)
end
fun sdl_load_bmp(s: String): SDL_Surface
do
	var raw = sdl_load_raw_bmp(s)
	var sprite = raw.to_display_format
	raw.free
	return sprite
end

fun sdl_load_bmp_native(s: NativeString): SDL_Surface is extern

fun sdl_show_cursor=(b: Bool) is extern "sdl_show_cursor_1"
fun sdl_show_cursor: Bool is extern "sdl_show_cursor_0"

# WM

fun sdl_grab=(b: Bool) is extern "sdl_grab_1"
fun sdl_grab: Bool is extern "sdl_grab_0"

# Events

fun sdl_current_event: SDL_Event is extern
fun sdl_poll_next_event: Bool is extern

# Time

fun sdl_get_ticks: Int is extern
fun sdl_delay(ms: Int) is extern
