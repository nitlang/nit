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

# Refine `EulerCamera` and `App::frame_core_draw` to get a stereoscopic view
module stereoscopic_view

import depth
intrude import cameras

redef class EulerCamera
	redef var mvp_matrix = new Matrix.identity(4)

	# Half of the distance between the eyes
	var eye_separation: Float = 0.03125

	# MVP matrix for the left eye
	fun mvp_matrix_left: Matrix do return mvp_matrix_eye(eye_separation)

	# MVP matrix for the right eye
	fun mvp_matrix_right: Matrix do return mvp_matrix_eye(-eye_separation)

	# Get an MVP matrix for an eye at `diff` world unit from the center
	private fun mvp_matrix_eye(diff: Float): Matrix
	do
		var view = new Matrix.identity(4)

		# Translate the world away from the camera
		view.translate(-position.x/2.0, -position.y/2.0, -position.z/2.0)

		# Rotate the camera, first by looking left or right, then up or down
		view = view * rotation_matrix

		# Apply eye transformation
		var translation = new Matrix.identity(4)
		translation.translate(diff, 0.0, 0.0)
		view = view * translation

		# Use a projection matrix with a depth
		var projection = new Matrix.perspective(pi*field_of_view_y/2.0,
			display.aspect_ratio, near, far)

		return view * projection
	end
end

redef class GamnitDisplay

	# With stereoscopic view, the aspect ratio (in each eye) is half of the screen
	redef fun aspect_ratio do return super / 2.0
end

redef class App
	redef fun frame_core_draw(display) do frame_core_stereoscopic display

	# Split the screen in two, and call `frame_core_depth` for each eyes
	protected fun frame_core_stereoscopic(display: GamnitDisplay)
	do
		var half_width = display.width / 2

		# Left eye
		glViewport(0, 0, half_width, display.height)
		world_camera.mvp_matrix = world_camera.mvp_matrix_left
		frame_core_depth display

		# Right eye
		glViewport(half_width, 0, half_width, display.height)
		world_camera.mvp_matrix = world_camera.mvp_matrix_right
		frame_core_depth display

		# We reset the viewport for selection
		glViewport(0, 0, display.width, display.height)

		# Check for errors
		var gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print gl_error
	end
end
