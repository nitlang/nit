# This file is part of NIT ( https://nitlanguage.org ).
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

# Defines abstract classes for user and general inputs to the application.
# Implemented independantly for each platforms and technologies.
module input

import android::input_events is conditional(android)

# Input to the App, propagated through `App::input`.
interface InputEvent
end

# Mouse and touch input events
interface PointerEvent
	super InputEvent

	# X position on screen (in pixels)
	fun x: Float is abstract

	# Y position on screen (in pixels)
	fun y: Float is abstract

	# Is down? either going down or already down
	fun pressed: Bool is abstract

	# Is it not currently pressed down? The opposite of `pressed`.
	fun depressed: Bool do return not pressed

	# Is this a movement event?
	fun is_move: Bool is abstract

	# Unique identifier of this pointer among other active pointers
	#
	# This value is useful to differentiate between pointers (or fingers) on
	# multi-touch systems. This value does not change for the same pointer
	# while it touches the screen.
	fun pointer_id: Int do return 0
end

# A motion event on screen composed of many `PointerEvent`
#
# Example of a `MotionEvent` a gesture such as pinching using two fingers.
interface MotionEvent
	super InputEvent

	# A pointer just went down?
	fun just_went_down: Bool is abstract

	# Which pointer is down, if any
	fun down_pointer: nullable PointerEvent is abstract
end

# Specific touch event
interface TouchEvent
	super PointerEvent

	# Pressure level of input
	fun pressure: Float is abstract
end

# Keyboard or other keys event
interface KeyEvent
	super InputEvent

	# Key is currently down?
	fun is_down: Bool is abstract

	# Key is currently up?
	fun is_up: Bool do return not is_down

	# Key is the up arrow key?
	fun is_arrow_up: Bool is abstract

	# Key is the left arrow key?
	fun is_arrow_left: Bool is abstract

	# Key is the down arrow key?
	fun is_arrow_down: Bool is abstract

	# Key is the right arrow key?
	fun is_arrow_right: Bool is abstract

	# Key code, is plateform specific
	fun code: Int is abstract

	# Get Char value of key, if any
	fun to_c: nullable Char is abstract

	# Name of the key that raised `self`
	#
	# Use mainly for debug since it is implementation dependent.
	fun name: String is abstract
end

# Mobile hardware (or pseudo hardware) event
interface MobileKeyEvent
	super KeyEvent

	# Key is back button? (mostly for Android)
	fun is_back_key: Bool is abstract

	# Key is menu button? (mostly for Android)
	fun is_menu_key: Bool is abstract

	# Key is search button? (mostly for Android)
	fun is_search_key: Bool is abstract

	# Key is home button? (mostly for Android)
	fun is_home_key: Bool is abstract
end

# Sensor events like accelerometer, gyroscope etc for mobile apps
interface SensorEvent
	super InputEvent
end

# Quit event, used for window close button
interface QuitEvent
	super InputEvent
end
