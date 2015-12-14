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

redef class App

	# Main `GamnitDisplay` initialized by `on_create`
	var display: nullable GamnitDisplay = null

	redef fun on_create
	do
		super

		var display = new GamnitDisplay
		display.setup
		self.display = display
	end

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

	# Main method to receive `InputEvent` produced by the system
	#
	# Returns whether or not the event is used or intercepted.
	# If `true`, the event will not be processed further by the system.
	# Returns `false` to intercepts events like the back key on mobile devices.
	#
	# This method should be refined by client modules to react to user inputs.
	fun accept_event(event: InputEvent): Bool do return false
end

redef class Sys
	redef fun run
	do
		if "NIT_TESTING".environ == "true" then exit 0
		super
	end
end
