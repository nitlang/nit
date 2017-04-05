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

# Simple camera control for user, as the method `accept_scroll_and_zoom`
module camera_control

import gamnit
import cameras

import camera_control_linux is conditional(linux)
import camera_control_android is conditional(android)

redef class EulerCamera
	# Zoom and scroll this camera from user input
	#
	# Scrolling is accomplished by moving the camera on the XY plane and
	# zooming by moving it on the Z axis.
	#
	# This method has distinct implementations per platform.
	# On desktop computers, the mouse wheel changes the zoom level, and
	# holding down the middle mouse button scrolls the camera.
	# On Android, a two finger pinch and slide gesture zoom and scroll.
	#
	# Returns `true` if the event is used.
	#
	# Should be called from `App::accept_event` before accepting pointer events:
	#
	# ~~~nitish
	# redef class App
	#     redef fun accept_event(event)
	#     do
	#         if world_camera.accept_scroll_and_zoom(event) then return true
	#
	#         # Handle other events...
	#         return false
	#     end
	# end
	# ~~~
	fun accept_scroll_and_zoom(event: InputEvent): Bool do return false
end
