# This file is part of NIT (http://www.nitlanguage.org).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#	 http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Camera services producing Model-View-Projection matrices
module cameras

import geometry
import matrix::projection

import display

# A camera with a point of view on the world
abstract class Camera

	# TODO make this a physical object in the world

	# The host `GamnitDisplay`
	var display: GamnitDisplay

	# Position of this camera in world space
	var position = new Point3d[Float](0.0, 0.0, 0.0) is writable

	# The Model-View-Projection matrix created by this camera
	#
	# This method should only be called by the display at the moment
	# of drawing to the screen.
	fun mvp_matrix: Matrix is abstract
end

# Simple camera with perspective oriented with Euler angles (`pitch`, `yaw`, `roll`)
class EulerCamera
	super Camera

	# Rotation around the X axis (looking down or up)
	var pitch = 0.0 is writable

	# Rotation around the Y axis (looking left or right)
	var yaw = 0.0 is writable

	# Rotation around the Z axis
	var roll = 0.0 is writable

	# Field of view in radians on the vertical axis of the screen
	#
	# Default at `0.8`
	var field_of_view_y = 0.8 is writable

	# Clipping wall near the camera, in world dimensions
	#
	# Default at `0.01`.
	var near = 0.01 is writable

	# Clipping wall the farthest of the camera, in world dimensions
	#
	# Default at `100.0` but this one should be adapted to each context.
	var far = 100.0 is writable

	# Look around sensitivity, used by `turn`
	var sensitivity = 0.005 is writable

	# Apply a mouse movement (or similar) to the camera
	#
	# `dx` and `dy` are relative mouse movements in pixels.
	fun turn(dx, dy: Float)
	do
		# Moving on x, turn around the y axis
		yaw -= dx*sensitivity
		pitch -= dy*sensitivity

		# Protect rotation around then x axis for not falling on your back
		pitch = pitch.min(pi/2.0)
		pitch = pitch.max(-pi/2.0)
	end

	# Move the camera considering the current orientation
	fun move(dx, dy, dz: Float)
	do
		# +dz move forward
		position.x -= yaw.sin*dz
		position.z -= yaw.cos*dz

		# +dx strafe to the right
		position.x += yaw.cos*dx
		position.z -= yaw.sin*dx

		# +dz move towards the sky
		position.y += dy
	end

	# Rotation matrix produced by the current rotation of the camera
	protected fun rotation_matrix: Matrix
	do
		var view = new Matrix.identity(4)

		# Rotate the camera, first by looking left or right, then up or down
		view.rotate(yaw,   0.0, 1.0, 0.0)
		view.rotate(pitch, 1.0, 0.0, 0.0)
		view.rotate(roll,  0.0, 0.0, 1.0)

		return view
	end

	redef fun mvp_matrix
	do
		var view = new Matrix.identity(4)

		# Translate the world away from the camera
		view.translate(-position.x/2.0, -position.y/2.0, -position.z/2.0)

		# Rotate the camera, first by looking left or right, then up or down
		view = view * rotation_matrix

		# Use a projection matrix with a depth
		var projection = new Matrix.perspective(pi*field_of_view_y/2.0,
			display.aspect_ratio, near, far)

		return view * projection
	end
end
