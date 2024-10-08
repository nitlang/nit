# This file is part of NIT (https://nitlanguage.org).
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

# Use of EGL to implement Gamnit on GNU/Linux and Android
module egl

import ::egl

import gamnit::display

redef class GamnitDisplay

	# The EGL display
	var egl_display: EGLDisplay is noautoinit

	# The EGL context
	var egl_context: EGLContext is noautoinit

	# The EGL surface for the window
	var window_surface: EGLSurface is noautoinit

	# The selected EGL configuration
	var egl_config: EGLConfig is noautoinit

	# Setup the EGL display for the given `native_display`
	protected fun setup_egl_display(native_display: Pointer)
	do
		var egl_display = new EGLDisplay(native_display)
		assert egl_display.is_valid else print "new EGL display is not valid"

		egl_display.initialize
		assert egl_display.is_valid else print "EGL initialize error: {egl_display.error}"

		self.egl_display = egl_display
	end

	# Select an EGL config
	protected fun select_egl_config(red, green, blue, alpha, depth, stencil: Int)
	do
		var config_chooser = new EGLConfigChooser
		config_chooser.renderable_type_egl
		config_chooser.surface_type_egl
		config_chooser.red_size = red
		config_chooser.green_size = green
		config_chooser.blue_size = blue
		if alpha > 0 then config_chooser.alpha_size = alpha
		if depth > 0 then config_chooser.depth_size = depth
		if stencil > 0 then config_chooser.stencil_size = stencil

		config_chooser.sample_buffers = 1
		config_chooser.samples = 4

		config_chooser.close

		var configs = config_chooser.choose(egl_display)
		assert configs != null else print "Choosing EGL config failed: {egl_display.error}"
		assert not configs.is_empty else print "Found no EGL config"

		if debug_gamnit then
			print "EGL available configurations:"
			for config in configs do
				var attribs = config.attribs(egl_display)
				print "* Conformant to: {attribs.conformant}"
				print "  Caveats: {attribs.caveat}"
				print "  Size of RGBA: {attribs.red_size} {attribs.green_size} {attribs.blue_size} {attribs.alpha_size}"
				print "  Buffer, depth, stencil: {attribs.buffer_size} {attribs.depth_size} {attribs.stencil_size}"
				print "  Sample buffers, samples: {attribs.sample_buffers} {attribs.samples}"
			end
		end

		# We use the first one, it is recommended
		self.egl_config = configs.first
	end

	# Setup the EGL context for the given `native_window`
	protected fun setup_egl_context(native_window: Pointer)
	do
		var window_surface = egl_display.create_window_surface(egl_config, native_window, [0])
		assert window_surface.is_ok else print "Creating EGL window surface failed: {egl_display.error}"
		self.window_surface = window_surface

		egl_context = egl_display.create_context(egl_config)
		assert egl_context.is_ok else print "Creating EGL context failed: {egl_display.error}"

		var make_current_res = egl_display.make_current(window_surface, window_surface, egl_context)
		assert make_current_res else print "Creating EGL make current failed: {egl_display.error}"

		# TODO make the API selection configurable per platform
		assert egl_bind_opengl_es_api else print "EGL bind API failed: {egl_display.error}"
	end

	# Check if the current configuration of `native_window` is still valid
	#
	# There is two return values:
	# * Returns `true` if the Gamnit services should be recreated.
	# * Sets `native_window_is_invalid` if the system provided window handle is invalid.
	#   We should wait until we are provided a valid window handle.
	fun check_egl_context(native_window: Pointer): Bool
	do
		native_window_is_invalid = false

		if not egl_context.is_ok then
			# Needs recreating
			egl_context = egl_display.create_context(egl_config)
			assert egl_context.is_ok else print "Creating EGL context failed: {egl_display.error}"
		end

		var success = egl_display.make_current(window_surface, window_surface, egl_context)
		if not success then
			var error = egl_display.error
			print "check_egl_context make_current: {error}"


			if error.is_bad_native_window then
				# native_window is invalid
				native_window_is_invalid = true
				return true

			else if not error.is_success then
				# The context is now invalid, rebuild it
				setup_egl_context native_window
				return true
			end
		end
		return false
	end

	# Return value from `check_egl_context`, the current native window is invalid
	#
	# We should wait until we are provided a valid window handle.
	var native_window_is_invalid = false

	redef fun width do return window_surface.attribs(egl_display).width

	redef fun height do return window_surface.attribs(egl_display).height

	# Close the EGL context
	fun close_egl
	do
		egl_display.make_current(new EGLSurface.none, new EGLSurface.none, new EGLContext.none)
		egl_display.destroy_context(egl_context)
		egl_display.destroy_surface(window_surface)
	end

	redef fun flip
	do
		assert glGetError == gl_NO_ERROR

		assert egl_display.is_valid

		egl_display.swap_buffers(window_surface)
	end
end
