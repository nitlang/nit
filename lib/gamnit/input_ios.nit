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

# Gamnit event support for iOS
module input_ios

intrude import ios::glkit
import display_ios
import gamnit_ios

# Pointer/touch event on iOS
class GamnitIOSPointerEvent
	super PointerEvent

	private var native: UIEvent

	private var native_touch: UITouch

	private var content_scale_factor: Float

	redef fun x do return native_touch.x * content_scale_factor

	redef fun y do return native_touch.y * content_scale_factor

	redef var pressed

	redef var is_move

	redef var pointer_id = native_touch.to_i is lazy
end

redef class NitGLKView

	redef var content_scale_factor = super is lazy

	redef fun touches_began(touches, event)
	do app.accept_event(new GamnitIOSPointerEvent(event, touches.any_object, content_scale_factor, true, false))

	redef fun touches_moved(touches, event)
	do app.accept_event(new GamnitIOSPointerEvent(event, touches.any_object, content_scale_factor, true, true))

	redef fun touches_ended(touches, event)
	do app.accept_event(new GamnitIOSPointerEvent(event, touches.any_object, content_scale_factor, false, false))

	# TODO handle cancel
	#redef fun touches_cancelled(touches_event) do
	#do app.accept_event(new GamnitIOSPointerEvent(event, false, false))
end
