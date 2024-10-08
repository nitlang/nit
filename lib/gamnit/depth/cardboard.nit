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

# Update the orientation of `world_camera` at each frame using the head position given by `android::cardboard`
#
# This module is Android specific.
module cardboard

import ::android::cardboard

import depth
intrude import cameras

redef class EulerCamera
	# Do not use `yaw` and `pitch`, the value will instead originate from the Cardboard API
	redef var rotation_matrix = new Matrix.identity(4)

	# Get the angle value from the `rotation_matrix`
	redef fun pitch
	do
		var a = rotation_matrix[0, 1]
		var b = rotation_matrix[1, 1]
		return -atan2(a, b)
	end

	# Get the angle value from the `rotation_matrix`
	redef fun yaw
	do
		var a = rotation_matrix[2, 0]
		var b = rotation_matrix[2, 2]
		return -atan2(a, b)
	end
end

redef class App

	# Cardboard's head tacker instance
	private var head_tracker: nullable NativeHeadTracker = null

	# Rotation matrix read from `head_tracker`, reusing the same structure as a buffer
	private var java_rotation_matrix = new JavaFloatArray(16) is lazy

	# Initialize and set `head_tracker`
	fun initialize_head_tracker
	do
		# Initialize the Cardboard head orientation tracker service
		var head_tracker = new NativeHeadTracker(app.native_activity)
		head_tracker.neck_model_enabled = true
		head_tracker.start_tracking
		self.head_tracker = head_tracker

		# Set a wide field of view
		world_camera.field_of_view_y = 1.0
	end

	# Read the rotation matrix from Cardboard and update `world_camera`
	private fun update_from_head_tracker
	do
		var head_tracker = head_tracker
		if head_tracker == null then return

		head_tracker.last_head_view(java_rotation_matrix, 0)

		# Copy values from the Java array to our matrix
		for y in [0..4[ do
			for x in [0..4[ do
				world_camera.rotation_matrix[y, x] = java_rotation_matrix[y*4+x]
			end
		end
	end

	redef fun create_scene
	do
		super
		initialize_head_tracker
	end

	redef fun update(dt)
	do
		super
		update_from_head_tracker
	end

	redef fun pause
	do
		super
		var tracker = head_tracker
		if tracker != null then tracker.stop_tracking
	end

	redef fun resume
	do
		super
		var tracker = head_tracker
		if tracker != null then tracker.start_tracking
	end
end
