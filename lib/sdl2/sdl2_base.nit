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

# Basic SDL 2 features
module sdl2_base is pkgconfig "sdl2"

in "C header" `{
	#include <SDL2/SDL.h>
`}

redef class Sys
	# Access to the global methods of `sdl2`
	var sdl = new SDL is lazy
end

# Holds the global methods of `sdl2`
class SDL
	super Finalizable

	# Get the `SDL` singleton
	new do return once new SDL.internal

	# TODO make this private and only called through `sys.sdl`
	init internal do end

	# Initialize the given SDL `subsystems`, returns `false` on error
	fun initialize(subsystems: SDLInitFlags): Bool `{ return SDL_Init(subsystems) == 0; `}

	# Returns the latest SDL error
	#
	# After calling this method, you should also call `clear_error`.
	fun error: CString `{ return (char*)SDL_GetError(); `}

	# Clear the SDL error
	fun clear_error `{ SDL_ClearError(); `}

	# Quit SDL
	fun quit `{ SDL_Quit(); `}

	# Was SDL initialized?
	fun was_initialized: Bool do return not initialized_subsystems((new SDLInitFlags).everything).is_empty

	# What SDL subsystems are initialized? You can use a mask of `subsystems` to restrict the query.
	#
	# Returns the flags of the initialized subsystems.
	fun initialized_subsystems(subsystems: SDLInitFlags): SDLInitFlags `{ return SDL_WasInit(subsystems); `}

	# The number of CPU on the system
	fun cpu_count: Int `{ return SDL_GetCPUCount(); `}

	# Amount of RAM configured on the system
	fun system_ram: Int `{ return SDL_GetSystemRAM(); `}

	# Show a simple message box
	fun show_simple_message_box(level: SDLMessageBoxFlags, title, content: CString) `{
		SDL_ShowSimpleMessageBox(level, title, content, NULL);
	`}

	redef fun finalize do if was_initialized then quit

	# Function that should be called from the SDL main method
	#
	# This method should not normally be used, refer to the SDL source code
	# before use.
	fun set_main_ready `{ SDL_SetMainReady(); `}

	# Show or hide the cursor
	fun show_cursor=(val: Bool) `{ SDL_ShowCursor(val? SDL_ENABLE: SDL_DISABLE); `}

	# Is the cursor visible?
	fun show_cursor: Bool `{ return SDL_ShowCursor(SDL_QUERY); `}

	# Collect only relative mouse events and hide cursor
	#
	# Check `relative_mouse_mode` to see if the mode could be applied,
	# if not, see `error`.
	fun relative_mouse_mode=(value: Bool) `{
		SDL_SetRelativeMouseMode(value);
	`}

	# Hide cursor and collect only relative mouse events?
	fun relative_mouse_mode: Bool `{
		return SDL_GetRelativeMouseMode();
	`}
end

# Flags for `sys.sdl.initialize` and related methods
extern class SDLInitFlags `{ Uint32 `}
	# Get the default empty flag set
	new `{ return 0; `}

	# Add the timer subsystem
	fun timer: SDLInitFlags `{ return self | SDL_INIT_TIMER; `}

	# Add the audio subsystem
	fun audio: SDLInitFlags `{ return self | SDL_INIT_AUDIO; `}

	# Add the video subsystem
	fun video: SDLInitFlags `{ return self | SDL_INIT_VIDEO; `}

	# Add the joystick subsystem
	#
	# Implied by `gamecontroller`
	fun joystick: SDLInitFlags `{ return self | SDL_INIT_JOYSTICK; `}

	# Add the haptic subsystem
	fun haptic: SDLInitFlags `{ return self | SDL_INIT_HAPTIC; `}

	# Add the gamecontroller subsystem
	fun gamecontroller: SDLInitFlags `{ return self | SDL_INIT_GAMECONTROLLER; `}

	# Add the events subsystem
	#
	# Implied by `video` and `joystick`
	fun events: SDLInitFlags `{ return self | SDL_INIT_EVENTS; `}

	# Add all subsystems
	fun everything: SDLInitFlags `{ return self | SDL_INIT_EVERYTHING; `}

	# Is this flag set empty?
	fun is_empty: Bool `{ return self == 0; `}

	# TODO add all other is_
end

# A window created by SDL
extern class SDLWindow `{ SDL_Window * `}
	# Create a window with the given `title`, `width` and `height`, also apply the `flags`
	new (title: CString, width, height: Int, flags: SDLWindowFlags) `{
		return SDL_CreateWindow(title,
			SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
			width, height, flags);
	`}

	# Has this window been correctly initialized?
	fun initialized: Bool do return not address_is_null

	# Destroy this window
	fun destroy `{ SDL_DestroyWindow(self); `}

	# Get the `SDLWindowFlags` describing the status of the window
	fun flags: SDLWindowFlags `{ return SDL_GetWindowFlags(self); `}

	# Show a simple message box
	#
	# Similar to `sys.sdl.show_simple_message_box` but attached to this window
	fun show_simple_message_box(level: SDLMessageBoxFlags, title, content: CString) `{
		SDL_ShowSimpleMessageBox(level, title, content, self);
	`}

	# Set the icon of this window
	fun icon=(icon: SDLSurface) `{ SDL_SetWindowIcon(self, icon); `}
end

# Flags for `SDLWindow::new` and returned by `SDLWindow::flags`
extern class SDLWindowFlags `{ Uint32 `}
	# Get the default empty flag set
	new `{ return 0; `}

	# Add the flag requesting a fullscreen window
	fun fullscreen: SDLWindowFlags `{ return self | SDL_WINDOW_FULLSCREEN; `}

	# Add the flag requesting a fullscreen window for the current desktop
	fun fullscreen_desktop: SDLWindowFlags `{ return self | SDL_WINDOW_FULLSCREEN_DESKTOP; `}

	# Add the flag requesting a window usable with an OpenGL context
	fun opengl: SDLWindowFlags `{ return self | SDL_WINDOW_OPENGL; `}

	# Add the flag requesting a hidden window
	fun hidden: SDLWindowFlags `{ return self | SDL_WINDOW_HIDDEN; `}

	# Add the flag requesting a borderless window
	fun borderless: SDLWindowFlags `{ return self | SDL_WINDOW_BORDERLESS; `}

	# Add the flag requesting a resizable window
	fun resizable: SDLWindowFlags `{ return self | SDL_WINDOW_RESIZABLE; `}

	# Add the flag requesting a minimized window
	fun minimized: SDLWindowFlags `{ return self | SDL_WINDOW_MINIMIZED; `}

	# Add the flag requesting a maximimez window
	fun maximized: SDLWindowFlags `{ return self | SDL_WINDOW_MAXIMIZED; `}

	# Add the flag to grab the input focus
	fun input_grabbed: SDLWindowFlags `{ return self | SDL_WINDOW_INPUT_GRABBED; `}

	# Add the flag to request a window using the system High-DPI mode
	fun allow_highdpi: SDLWindowFlags `{
		#if SDL_VERSION_ATLEAST(2, 0, 2)
			return self | SDL_WINDOW_ALLOW_HIGHDPI;
		#else
			return self;
		#endif
	`}

	# Is the window shown?
	#
	# Can only be queried because it is ignored by `SDLWindow::new`
	fun is_shown: Bool `{ return self & SDL_WINDOW_SHOWN; `}

	# Does the window has the input focus?
	#
	# Can only be queried because it is ignored by `SDLWindow::new`
	fun has_input_focus: Bool `{ return self & SDL_WINDOW_INPUT_FOCUS; `}

	# Does the window has the mouse focus?
	#
	# Can only be queried because it is ignored by `SDLWindow::new`
	fun has_mouse_focus: Bool `{ return self & SDL_WINDOW_MOUSE_FOCUS; `}

	# TODO add all other `is_` methods, as needed
end

redef universal Int
	# Suspend execution for `self` milliseconds
	fun delay `{ SDL_Delay(self); `}
end

# A renderer, maybe software or hardware
extern class SDLRenderer `{ SDL_Renderer * `}
	# Create a new `SDLRenderer` for the `window` using the `index`th renderer according to `flags`
	#
	# Use an `index` of `-1` to get the default renderer for the given flags.
	new (window: SDLWindow, index: Int, flags: SDLRendererFlags) `{
		return SDL_CreateRenderer(window, index, flags);
	`}

	# Create a new software `SDLRenderer`
	new software(surface: SDLSurface) `{
		return SDL_CreateSoftwareRenderer(surface);
	`}

	# Destroy this renderer
	fun destroy `{ SDL_DestroyRenderer(self); `}

	# Clear the rendering target with the current `draw_color`
	fun clear `{ SDL_RenderClear(self); `}

	# Copy the rectangle at `src` from `texture` to fill the `dst` at the rendering `target`
	#
	# If `dst` has a different size than `src`, the image will be stretched.
	#
	# If `src == null` the whole source texture will be drawn, and if
	# `dst == null` then the texture will fill the rendering `target`.
	fun copy(texture: SDLTexture, src, dst: nullable SDLRect)
	do
		if src == null then src = new SDLRect.nil
		if dst == null then dst = new SDLRect.nil

		native_copy(texture, src, dst)
	end

	private fun native_copy(texture: SDLTexture, src, dst: SDLRect) `{
		SDL_RenderCopy(self, texture, src, dst);
	`}

	# Update the screen with all rendering since the previous call
	fun present `{ SDL_RenderPresent(self); `}

	# Get the `SDLRendererInfo` for this renderer
	fun info_copy(out: SDLRendererInfo) `{ SDL_GetRendererInfo(self, out); `}

	# Set the drawing color
	fun draw_color=(val: SDLColor) `{
		SDL_SetRenderDrawColor(self, val->r, val->g, val->b, val->a);
	`}

	# Get the drawing color of this renderer
	#
	# The returned `SDLColor` is malloced here and must be freed by the called.
	# For a more efficient usage, it is recommended to use instead `draw_color_copy`.
	fun draw_color: SDLColor
	do
		var color = new SDLColor.malloc
		draw_color_copy color
		return color
	end

	# Copy the drawing color of this renderer in `color`
	fun draw_color_copy(color: SDLColor) `{
		SDL_GetRenderDrawColor(self, &color->r, &color->g, &color->b, &color->a);
	`}

	# Fill a rectangle with the current `draw_color`
	#
	# If `rect.address_is_null` then fills the entire screen.
	fun fill_rect(rect: SDLRect) `{ SDL_RenderFillRect(self, rect); `}

	# Draw a rectangle with the current `draw_color`
	fun draw_rect(rect: SDLRect) `{ SDL_RenderDrawRect(self, rect); `}

	# Draw a point with the current `draw_color`
	fun draw_point(x, y: Int) `{ SDL_RenderDrawPoint(self, x, y); `}

	# Draw a line with the current `draw_color`
	fun draw_line(x1, y1, x2, y2: Int) `{ SDL_RenderDrawLine(self, x1, y1, x2, y2); `}

	# Set the viewport of this renderer
	fun viewport=(rect: SDLRect) `{ SDL_RenderSetViewport(self, rect); `}

	# Get the rendering target of this renderer
	fun target: SDLTexture `{ return SDL_GetRenderTarget(self); `}

	# Set the rendering target of this renderer
	fun target=(val: SDLTexture) `{ SDL_SetRenderTarget(self, val); `}

	# TODO add other renderer related methods:
	#
	# draw_rects
	# draw_lines
end

# A color
extern class SDLColor `{ SDL_Color *`}
	# Allocate the memory for a new `SDLColor`, it must then be freed with `free`
	new malloc `{ return malloc(sizeof(SDL_Color)); `}

	# Allocate the memory for a new `SDLColor` and fill it with `r`, `g`, `b` and `a`
	#
	# As with `malloc`, the new instances must then be freed with `free`.
	new (r, g, b, a: Int)
	do
		var color = new SDLColor.malloc
		color.set(r, g, b, a)
		return color
	end

	# Set this instance's `r`, `g`, `b` and `a`
	fun set(r, g, b, a: Int)
	do
		self.r = r
		self.g = g
		self.b = b
		self.a = a
	end

	# The red component of this color `[0..255]`
	fun r: Int `{ return self->r; `}

	# Set the red component of this color `[0..255]`
	fun r=(val: Int) `{ self->r = val; `}

	# The green component of this color `[0..255]`
	fun g: Int `{ return self->g; `}

	# Set the green component of this color `[0..255]`
	fun g=(val: Int) `{ self->g = val; `}

	# The blue component of this color `[0..255]`
	fun b: Int `{ return self->b; `}

	# Set the blue component of this color `[0..255]`
	fun b=(val: Int) `{ self->b = val; `}

	# The alpha component of this color `[0..255]`
	fun a: Int `{ return self->a; `}

	# Set the ralpha component of this color `[0..255]`
	fun a=(val: Int) `{ self->a = val; `}

	# TODO implement the related `SDL_Palette` and related methods
end

# Flags for `SDLRenderer::new`
extern class SDLRendererFlags `{ Uint32 `}
	# Get the default empty flag set
	new `{ return 0; `}

	# Add the flag to request a software renderer
	fun software: SDLRendererFlags `{ return self | SDL_RENDERER_SOFTWARE; `}

	# Add the flag to request an accelerated renderer
	#
	# This is the default option.
	fun accelerated: SDLRendererFlags `{ return self | SDL_RENDERER_ACCELERATED; `}

	# Add the flag to request a renderer where `SDLRenderer::present` is synchronized with the refresh rate
	fun presentvsync: SDLRendererFlags `{ return self | SDL_RENDERER_PRESENTVSYNC; `}

	# Add the flag to request a renderer able to render to a texture
	fun targettexture: SDLRendererFlags `{ return self | SDL_RENDERER_TARGETTEXTURE; `}
end

# A bitmap surface
extern class SDLSurface `{ SDL_Surface * `}

	# Load the BMP file at `path`
	new load_bmp(path: CString) `{ return SDL_LoadBMP(path); `}

	redef fun free `{ SDL_FreeSurface(self); `}

	# Save this texture to a BMP file
	fun save_bmp(path: CString) `{ SDL_SaveBMP(self, path); `}

	# Format of the pixels
	fun format: SDL_PixelFormat `{ return self->format; `}

	# Width in pixels
	fun w: Int `{ return self->w; `}

	# Height in pixels
	fun h: Int `{ return self->h; `}

	# Bytes in a row of pixels
	fun pitch: Int `{ return self->pitch; `}

	# Pointer to pixel data
	fun pixels: Pointer `{ return self->pixels; `}
end

# Pixel format information
extern class SDL_PixelFormat `{ SDL_PixelFormat * `}
	# Number of significant bits in a pixel
	fun bits_per_pixel: Int `{ return self->BitsPerPixel; `}

	# Number of bytes required to hold a pixel
	fun bytes_per_pixel: Int `{ return self->BytesPerPixel; `}

	# Mask of the location of the red component
	fun rmask: UInt32 `{ return self->Rmask; `}

	# Mask of the location of the green component
	fun gmask: UInt32 `{ return self->Gmask; `}

	# Mask of the location of the blue component
	fun bmask: UInt32 `{ return self->Bmask; `}

	# Mask of the location of the alpha component
	fun amask: UInt32 `{ return self->Amask; `}
end

# A loaded bitmap texture
extern class SDLTexture `{ SDL_Texture * `}
	# Get a `SDLTexture` from a `surface`, for a given `renderer`
	new from_surface(renderer: SDLRenderer, surface: SDLSurface) `{
		return SDL_CreateTextureFromSurface(renderer, surface);
	`}

	# Destroy this texture
	fun destroy `{ SDL_DestroyTexture(self); `}

	# Width of this texture
	fun width: Int `{
		int val;
		SDL_QueryTexture(self, NULL, NULL, &val, NULL);
		return val;
	`}

	# Height of this texture
	fun height: Int `{
		int val;
		SDL_QueryTexture(self, NULL, NULL, NULL, &val);
		return val;
	`}

	# TODO other queries: format and access
end

# A rectangle
extern class SDLRect `{SDL_Rect *`}
	# Get a null rectangle (on the C side), should be used only internally
	new nil `{ return NULL; `}

	# Allocate the memory for a new `SDLRect`, it must then be freed with `free`
	new malloc`{ return malloc(sizeof(SDL_Rect)); `}

	# Allocate the memory for a new `SDLRect` and fill it with `x`, `y`, `w` and `h`
	#
	# As with `malloc`, the new instances must then be freed with `free`.
	new (x, y, w, h: Int)
	do
		var rect = new SDLRect.malloc
		rect.set(x, y, w, h)
		return rect
	end

	# Set this instance's `x`, `y`, `w` and `h`
	fun set(x, y, w, h: Int)
	do
		self.x = x
		self.y = y
		self.w = w
		self.h = h
	end

	# X coordinate of the top left corner
	fun x: Int `{ return self->x; `}

	# Set the X coordinate of the top left corner
	fun x=(val: Int) `{ self->x = val; `}

	# Y coordinate of the top left corner
	fun y: Int `{ return self->y; `}

	# Set the Y coordinate of the top left corner
	fun y=(val: Int) `{ self->y = val; `}

	# Width of this rectangle
	fun w: Int `{ return self->w; `}

	# Set the width of this rectangle
	fun w=(val: Int) `{ self->w = val; `}

	# Height of this rectangle
	fun h: Int `{ return self->h; `}

	# Set the height of this rectangle
	fun h=(val: Int) `{ self->h = val; `}

	# TODO implement other `SDLRect` related methods:
	#
	# SDL_EnclosePoints
	# SDL_HasIntersection
	# SDL_IntersectRect
	# SDL_IntersectRectAndLine
	# SDL_PointInRect
	# SDL_RectEmpty
	# SDL_RectEquals
	# SDL_UnionRect
end

# A point with `x` and `y`
extern class SDLPoint `{SDL_Point *`}
	# Get a null rectangle (on the C side), should be used only internally
	new nil `{ return NULL; `}

	# Allocate the memory for a new `SDLPoint`, it must the be freed with `free`
	new malloc`{ return malloc(sizeof(SDL_Point)); `}

	# Allocate the memory for a new `SDLPoint` and fill it with `x` and `y`
	#
	# As with `malloc`, the new instances must the be freed with `free`.
	new (x, y: Int) do
		var point = new SDLPoint.malloc
		point.x = x
		point.y = y
		return point
	end

	# X coordinate of this point
	fun x: Int `{ return self->x; `}

	# Set the X coordinate of this point
	fun x=(val: Int) `{ self->x = val; `}

	# Y coordinate of this point
	fun y: Int `{ return self->y; `}

	# Set the Y coordinate of this point
	fun y=(val: Int) `{ self->y = val; `}
end

# Flag to set the icon in `sys.sdl.show_simple_message_box` and `SDLWindow::show_simple_message_box`
extern class SDLMessageBoxFlags `{  Uint32 `}
	# Request the error icon
	new error `{ return SDL_MESSAGEBOX_ERROR; `}

	# Request the warning icon
	new warning `{ return SDL_MESSAGEBOX_WARNING; `}

	# Request the information icon
	new information `{ return SDL_MESSAGEBOX_INFORMATION; `}
end

# Information on a `SDLRenderer`
extern class SDLRendererInfo `{ SDL_RendererInfo * `}
	# Allocate the memory for a new `SDLRenderer`, it must then be freed with `free`
	new malloc `{ return malloc(sizeof(SDL_RendererInfo)); `}

	# Name of the renderer's driver
	fun name: CString `{ return (char*)self->name; `}

	# Maximum texture width supported by the renderer
	fun max_texture_width: Int `{ return self->max_texture_width; `}

	# Maximum texture height supported by the renderer
	fun max_texture_height: Int `{ return self->max_texture_height; `}
end
