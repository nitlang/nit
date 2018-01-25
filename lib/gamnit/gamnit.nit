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

# Game and multimedia framework for Nit
module gamnit

import app

import display
import textures
import programs

import gamnit_android is conditional(android)
import gamnit_linux is conditional(linux)
import gamnit_ios is conditional(ios)
import input_ios is conditional(ios)

redef class App

	# Main `GamnitDisplay` initialized by `create_gamnit`
	var display: nullable GamnitDisplay = null

	# Hook to setup the OpenGL context: compiling shaders, creating VBO, reloading textures, etc.
	#
	# The gamnit services redefine this method to prepare optimizations and more.
	# Clients may also refine this method to prepare custom OpenGL resources.
	fun create_gamnit do end

	# Hook to prepare for recreating the OpenGL context
	#
	# Some gamnit services refine this method to reset caches before the
	# next call to `create_gamnit`.
	fun recreate_gamnit do end

	# Create and set `self.display`
	fun create_display
	do
		var display = new GamnitDisplay
		display.setup
		self.display = display

		# Print the current GL configuration, for debugging
		print "GL vendor: {glGetString(gl_VENDOR)}"
		print "GL renderer: {glGetString(gl_RENDERER)}"
		print "GL version: {glGetString(gl_VERSION)}"
		print "GLSL version: {glGetString(gl_SHADING_LANGUAGE_VERSION)}"
		print "GL extensions: {glGetString(gl_EXTENSIONS)}"
		print "GL max texture size: {glGetIntegerv(gl_MAX_TEXTURE_SIZE, 0)}"
	end

	# Hook for client programs to setup the scene
	#
	# Refine this method to build the game world or the main menu,
	# creating instances of `Sprite` and `Actor` as needed.
	#
	# This method is called only once per execution of the program and it should
	# be considered as the entry point of most game logic.
	fun create_scene do end

	# Core of the frame logic, executed only when the display is visible
	#
	# This method should be redefined by user modules to customize the behavior of the game.
	protected fun frame_core(display: GamnitDisplay) do end

	# Full frame logic, executed even if the display is not visible
	#
	# This method wraps `frame_core` and other services to be executed in the main app loop.
	#
	# To customize the behavior on each turn, it is preferable to redefined `frame_core`.
	# Still, `frame_full` can be redefined with care for more control.
	protected fun frame_full
	do
		var display = display
		if display != null then frame_core(display)

		feed_events
	end

	redef fun run
	do
		# TODO manage exit condition
		loop frame_full
	end

	# Loop on available events and feed them back to the app
	#
	# The implementation varies per platform.
	private fun feed_events do end

	# Hook to receive and respond to `event` triggered by the user or system
	#
	# Returns whether or not the event is used or intercepted.
	# If `true`, the event will not be processed further by the system.
	# Returns `false` to intercepts events like the back key on mobile devices.
	#
	# The instances passed as `event` may be freed (or overwritten),
	# right after this method returns. They should not be preserved.
	fun accept_event(event: InputEvent): Bool do return false

	# The window has been resized by the user or system
	#
	# The framework handles resizing the viewport automatically.
	fun on_resize(display: GamnitDisplay) do end
end

# Portable indirection to `glBindFramebuffer(gl_FRAMEBUFFER, fbo)`
#
# This is implemented differently on iOS.
fun bind_screen_framebuffer(fbo: Int) do glBindFramebuffer(gl_FRAMEBUFFER, fbo)
