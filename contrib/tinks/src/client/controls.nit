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

# On-screen alternative controls
module controls

import client

redef class App

	# All active UI controls
	fun controls: Array[Control] is abstract

	redef fun frame_core(display)
	do
		super

		for control in controls do control.draw(display)
	end

	redef fun input(event)
	do
		for control in controls do
			var hit = control.input(event)
			if hit then return true
		end

		return super
	end
end

# An event raised by a `Control`
class ControlEvent
	super InputEvent

	# Sender control
	var sender: Control
end

# UI control
abstract class Control

	# Draw `self` to `display`
	fun draw(display: Display) do end

	# Intercept and act upon events concerving `self`
	fun input(event: InputEvent): Bool do return false
end
