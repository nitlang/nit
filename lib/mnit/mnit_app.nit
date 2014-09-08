# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2011-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# General Mnit application structure
module mnit_app

import ::app
import mnit_display

# An App instance serves as base to every Mnit projects.
#
# This class is redefed by plateforme modules and so
# App can be specialized directly in the user app.
redef class App
	type D: Display
	type I: Image

	# Display to use by apps
	# Is null if the display is not available or not yet ready
	var display: nullable D = null is protected writable

	# Received quit order
	var quit: Bool = false is writable

	# App is visible? (vs minimized or in background)
	fun visible: Bool is abstract

	# Invoqued at each frame
	# Usually you want to redef frame_core instead of this
	fun full_frame
	do
		var display = self.display
		if display != null then
			display.begin
			frame_core( display )
			display.finish
		end
	end

	# Main frame method to redef
	# Is called between readying display and flipping it
	fun frame_core( display: D ) do end

	# Receive and deal with all inputs
	fun input( event: InputEvent ): Bool
	do
		return false
	end

	# Internal method to generate inputs
	protected fun generate_input
	do
		if "NIT_TESTING".environ == "true" then exit 0
		print "Compiled without platform"
		exit 1
	end

	# Main app loop
	# Usually you want to redef frame_core instead of this
	redef fun run
	do
		while not quit do
			generate_input
			full_frame
		end
	end
end
