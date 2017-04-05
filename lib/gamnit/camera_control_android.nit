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

# Two fingers camera manipulation, pinch to zoom and slide to scroll
module camera_control_android

import android
import camera_control

redef class EulerCamera
	# Smoothened history of pointers in the current motion event
	private var last_motion_pointers = new HashMap[Int, Point[Float]] is lazy

	# Start time of the current motion event
	private var last_motion_start: Int = -1

	redef fun accept_scroll_and_zoom(event)
	do
		if not event isa AndroidMotionEvent then return false

		if event.pointers.length < 2 then
			# Intercept leftovers of the last motion
			return event.down_time == last_motion_start
		end

		# Collect active pointer and their world position
		var new_motion_pointers = new HashMap[Int, Point[Float]]
		var ids = new Array[Int]
		for pointer in event.pointers do
			var id = pointer.pointer_id
			ids.add id
			new_motion_pointers[id] = camera_to_world(pointer.x, pointer.y)
		end

		var last_motion_pointers = last_motion_pointers
		if last_motion_start == event.down_time and
		   last_motion_pointers.keys.has(ids[0]) and last_motion_pointers.keys.has(ids[1]) then
			# Continued motion event

			# Get new and old position for 2 fingers
			var new_motion_a = new_motion_pointers[ids[0]]
			var new_motion_b = new_motion_pointers[ids[1]]
			var prev_pos_a = last_motion_pointers[ids[0]]
			var prev_pos_b = last_motion_pointers[ids[1]]

			# Move camera
			var prev_middle_pos = prev_pos_a.lerp(prev_pos_b, 0.5)
			var new_middle_pos = new_motion_a.lerp(new_motion_b, 0.5)
			position.x -= new_middle_pos.x - prev_middle_pos.x
			position.y -= new_middle_pos.y - prev_middle_pos.y

			# Zoom camera
			var prev_dist = prev_pos_a.dist(prev_pos_b)
			var new_dist = new_motion_a.dist(new_motion_b)

			position.z = prev_dist * position.z / new_dist
		else
			# Prepare for a new motion event
			last_motion_pointers.clear
			last_motion_start = event.down_time
		end

		# Keep a smooth history
		for i in [0..1] do
			if last_motion_pointers.keys.has(ids[i]) then
				last_motion_pointers[ids[i]] = last_motion_pointers[ids[i]]*0.5 +
				                                new_motion_pointers[ids[i]]*0.5
			else last_motion_pointers[ids[i]] = new_motion_pointers[ids[i]]
		end

		return true
	end
end

redef class Point[N]
	private fun *(scalar: Numeric): Point[N]
	do return new Point[N](x.mul(scalar), y.mul(scalar))

	private fun +(other: Point[N]): Point[N]
	do return new Point[N](x.add(other.x), y.add(other.y))
end
