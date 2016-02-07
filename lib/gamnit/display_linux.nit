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

import sdl
import x11

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

	redef fun show_cursor do return sdl_display.show_cursor

	redef fun show_cursor=(val) do sdl_display.show_cursor = val

	# Setup SDL, X11, EGL in order
	redef fun setup
	do
		if debug_gamnit then print "Setting up SDL"
		self.sdl_display = setup_sdl(requested_width, requested_height)

		if debug_gamnit then print "Setting up X11"
		var x11_display = setup_x11
		var window_handle = window_handle
		setup_egl_display x11_display

		if debug_gamnit then print "Setting up EGL context"
		select_egl_config(8, 8, 8, 8, 8, 0, 0)
		setup_egl_context window_handle
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
	var sdl_display: SDLDisplay is noautoinit

	# Setup the SDL display and lib
	fun setup_sdl(window_width, window_height: Int): SDLDisplay
	do
		var sdl_display = new SDLDisplay(window_width, window_height)
		assert not sdl_display.address_is_null else print "Opening SDL display failed"
		return sdl_display
	end

	# Close the SDL display
	fun close_sdl do sdl_display.destroy

	# Get a native handle to the current SDL window
	fun window_handle: Pointer
	do
		var sdl_wm_info = new SDLSystemWindowManagerInfo
		return sdl_wm_info.x11_window_handle
	end

	# ---
	# X11

	# Get a native handle to the current X11 display
	fun setup_x11: Pointer
	do
		var x11_display = x_open_default_display
		assert not x11_display.address_is_null else print "Opening X11 display failed"
		return x11_display
	end
end

redef class TextureAsset

	redef fun load_from_platform
	do
		var path = "assets" / path # TODO use app.assets_dir
		var sdl_tex = new SDLImage.from_file(path)

		if sdl_tex.address_is_null then
			error = new Error("Failed to load texture at '{path}'")
			return
		end

		self.width = sdl_tex.width.to_f
		self.height = sdl_tex.height.to_f
		var format = if sdl_tex.amask > 0 then gl_RGBA else gl_RGB
		var pixels = sdl_tex.pixels

		load_from_pixels(pixels, sdl_tex.width, sdl_tex.height, format)
	end
end
