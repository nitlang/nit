# This file is part of NIT (http://www.nitlanguage.org).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#	 http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Gamnit display implementation for GNU/Linux using `egl`, `sdl` and `x11`
module display_linux

import sdl2::image
import sdl2::mixer

import egl # local to gamnit
intrude import display
intrude import textures

redef class GamnitDisplay

	# Actual width or desired width of the window, can be set before calling `setup`
	fun width=(value: Int) do requested_width = value
	private var requested_width = 1920

	# Actual height or desired height of the window, can be set before calling `setup`
	fun height=(value: Int) do requested_height = value
	private var requested_height = 1080

	redef fun show_cursor do return sdl.show_cursor

	redef fun show_cursor=(val) do sdl.show_cursor = val

	redef fun lock_cursor=(val) do sdl.relative_mouse_mode = val

	redef fun lock_cursor do return sdl.relative_mouse_mode

	# Setup SDL, wm, EGL in order
	redef fun setup
	do
		if debug_gamnit then print "Setting up SDL"
		self.sdl_window = setup_sdl(requested_width, requested_height)

		if debug_gamnit then print "Setting up window manager"
		setup_egl_display sdl_window.wm_info.display_handle

		if debug_gamnit then print "Setting up EGL context"
		select_egl_config(red_bits, green_bits, blue_bits, 8, 8, 0)
		setup_egl_context sdl_window.wm_info.window_handle
	end

	# Close EGL and SDL in reverse order of `setup` (nothing to do for X11)
	redef fun close
	do
		close_egl
		close_sdl
	end

	# ---
	# SDL

	# The SDL display managing the window and events
	var sdl_window: SDLWindow is noautoinit

	# Title of the window, must be set before creating the window (or redef)
	var window_title = "gamnit game" is lazy, writable

	# Setup the SDL display and lib
	fun setup_sdl(window_width, window_height: Int): SDLWindow
	do
		assert sdl.initialize((new SDLInitFlags).video.audio) else
			print_error "Failed to initialize SDL2: {sdl.error}"
		end

		var img_flags = (new SDLImgInitFlags).png.jpg
		assert sdl.img.initialize(img_flags) == img_flags else
			print_error "Failed to initialize SDL2 IMG: {sdl.error}"
		end

		var sdl_window = new SDLWindow(window_title.to_cstring, window_width, window_height, sdl_window_flags)
		assert not sdl_window.address_is_null else
			print_error "Failed to create SDL2 window: {sdl.error}"
		end

		# Audio support
		var inited = mix.initialize(mix_init_flags)
		if inited != mix_init_flags then
			print_error "Failed to load SDL2 mixer format supports: {mix.error}"
		end

		var open = mix.open_audio(44100, mix.default_format, 2, 1024)
		if not open then
			print_error "Failed to initialize SDL2 mixer: {mix.error}"
		end

		return sdl_window
	end

	# SDL2 window initialization flags
	#
	# The default value supports OpenGL and window resizing.
	var sdl_window_flags: SDLWindowFlags = (new SDLWindowFlags).opengl.resizable is lazy, writable

	# SDL2 mixer initialization flags
	#
	# Defaults to FLAC, MP3 and OGG.
	var mix_init_flags: MixInitFlags = mix.flac | mix.mp3 | mix.ogg is lazy, writable

	# Close the SDL display
	fun close_sdl
	do
		sdl_window.destroy
		mix.close_audio
		mix.quit
		sdl.finalize
	end
end

redef class TextureAsset

	redef fun load_from_platform
	do
		var path = "assets" / path

		var surface = new SDLSurface.load(path.to_cstring)
		if surface.address_is_null then
			error = new Error("Failed to load texture at '{path}'")
			return
		end

		self.width = surface.w.to_f
		self.height = surface.h.to_f
		var format = if surface.format.amask > 0u32 then gl_RGBA else gl_RGB
		var pixels = surface.pixels

		load_from_pixels(pixels, surface.w, surface.h, format)

		surface.free
	end
end
