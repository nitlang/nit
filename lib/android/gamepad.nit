# This file is part of NIT (https://nitlanguage.org).
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

# Support for gamepad events (over Bluetooth or USB)
module gamepad

import input_events

redef class AndroidKeyEvent

	# Was `self` raised by the A button?
	fun is_a: Bool do return key_code == 96

	# Was `self` raised by the B button?
	fun is_b: Bool do return key_code == 97

	# Was `self` raised by the X button?
	fun is_x: Bool do return key_code == 99

	# Was `self` raised by the Y button?
	fun is_y: Bool do return key_code == 100

	# Was `self` raised by the directional pad?
	fun is_dpad: Bool
	do
		return is_dpad_up or is_dpad_down or is_dpad_left or is_dpad_right
	end

	# Was `self` raised by the up key on the directional pad?
	fun is_dpad_up: Bool do return key_code == 19

	# Was `self` raised by the down key on the directional pad?
	fun is_dpad_down: Bool do return key_code == 20

	# Was `self` raised by the left key on the directional pad?
	fun is_dpad_left: Bool do return key_code == 21

	# Was `self` raised by the right key on the directional pad?
	fun is_dpad_right: Bool do return key_code == 22

	# Was `self` raised by the start button?
	fun is_start: Bool do return key_code == 108

	# Was `self` raised by the select button?
	fun is_select: Bool do return key_code == 109

	# Was `self` raised by the right bumper button?
	fun is_bumper_right: Bool do return key_code == 103

	# Was `self` raised by the right trigger?
	fun is_trigger_right: Bool do return key_code == 105

	# Was `self` raised by the left bumper?
	fun is_bumper_left: Bool do return key_code == 102

	# Was `self` raised by the left trigger?
	fun is_trigger_left: Bool do return key_code == 101

	# Was `self` raised by the media button 'previous'?
	fun is_media_previous: Bool do return key_code == 87

	# Was `self` raised by the media button 'pause'?
	fun is_media_pause: Bool do return key_code == 85

	# Was `self` raised by the media button 'next'?
	fun is_media_next: Bool do return key_code == 88
end
