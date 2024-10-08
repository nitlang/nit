# This file is part of NIT (https://nitlanguage.org).
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
	var position = new Point3d[Float](0.0, 0.0, 0.0)

	# The Model-View-Projection matrix created by this camera
	#
	# This method should only be called by the display at the moment
	# of drawing to the screen.
	fun mvp_matrix: Matrix is abstract
end

# Simple camera with perspective oriented with Euler angles (`pitch, yaw, roll`)
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
	# Default at `10000.0` but this one should be adapted to each context.
	var far = 10000.0 is writable

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

	# Aim the camera at `x, y, z`
	fun look_at(x, y, z: Float)
	do
		var dx = position.x
		var dy = position.y
		var dz = position.z

		yaw = atan2(dx, dz)
		pitch = atan2(-dy, dz)
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
		view.translate(-position.x, -position.y, -position.z)

		# Rotate the camera, first by looking left or right, then up or down
		view = view * rotation_matrix

		# Use a projection matrix with a depth
		var projection = new Matrix.perspective(field_of_view_y,
			display.aspect_ratio, near, far)

		return view * projection
	end

	# Reset the camera position so that `height` world units are visible on the y axis at z=0
	#
	# By default, `height` is set to `display.height`.
	#
	# After the reset, the camera sits on the Z axis and rotation values are reset to 0.
	# The X axis is horizontal on the screen and the Y axis is vertical.
	# Higher values on the Z axis are closer to the camera.
	fun reset_height(height: nullable Float)
	do
		if height == null then height = display.height.to_f

		var opp = height / 2.0
		var angle = field_of_view_y / 2.0
		var adj = opp / angle.tan

		position.x = 0.0
		position.y = 0.0
		position.z = adj

		pitch = 0.0
		yaw = 0.0
		roll = 0.0
	end

	# Convert the position `x, y` on screen, to world coordinates on the plane at `target_z`
	#
	# `target_z` defaults to `0.0` and specifies the Z coordinates of the plane
	# on which to project the screen position `x, y`.
	#
	# This method assumes that the camera is looking along the Z axis towards higher values.
	# Using it in a different orientation can be useful, but won't result in valid
	# world coordinates.
	fun camera_to_world(x, y: Numeric, target_z: nullable Float): Point[Float]
	do
		# TODO, this method could be tweaked to support projecting the 2D point,
		# on the near plane (x,y) onto a given distance no matter to orientation
		# of the camera.

		target_z = target_z or else 0.0

		# Convert from pixel units / window resolution to
		# units on the near clipping wall to
		# units on the target wall at Z = 0
		var near_height = (field_of_view_y/2.0).tan * near
		var cross_screen_to_near = near_height / (display.height.to_f/2.0)
		var cross_near_to_target = (position.z - target_z) / near
		var mod = cross_screen_to_near * cross_near_to_target

		var wx = position.x + (x.to_f-display.width.to_f/2.0) * mod
		var wy = position.y - (y.to_f-display.height.to_f/2.0) * mod
		return new Point[Float](wx, wy)
	end
end

# Orthogonal camera to draw UI objects with services to work with screens of different sizes
#
# X axis: left to right of the screen, from `position.x` to `position.x + width`
# Y axis: top to bottom of the screen, from `position.y` to `position.y + height`
# Z axis: far to near the camera (usually when values are higher), from `far` to `near`
class UICamera
	super Camera

	# Clipping wall near the camera, defaults to 100.0
	var near = 100.0 is writable

	# Clipping wall the farthest of the camera, defaults to -100.0
	var far: Float = -100.0 is writable

	# Width in world units, calculated from `height` and the screen aspect ratio
	fun width: Float do return height * display.aspect_ratio

	# Height in world units, defaults to 1080.0
	#
	# Set this value using `reset_height`.
	var height = 1080.0

	# Reset the camera position so that `height` world units are visible on the Y axis
	#
	# This can be used to set standardized UI units independently from the screen resolution.
	fun reset_height(height: nullable Float)
	do
		if height == null then height = display.height.to_f
		self.height = height
	end

	# Convert the position `x, y` on screen, to UI coordinates
	fun camera_to_ui(x, y: Numeric): Point3d[Float]
	do
		# FIXME this kind of method should use something like a canvas
		# instead of being hard coded on the display.

		var wx = x.to_f * width / display.width.to_f - position.x
		var wy = y.to_f * height / display.height.to_f - position.y
		return new Point3d[Float](wx, -wy, 0.0)
	end

	# Center of the screen, from the point of view of the camera, at z = 0
	var center: IPoint3d[Float] = new CameraAnchor(self, 0.5, -0.5)

	# Center of the top of the screen, at z = 0
	var top: IPoint3d[Float] = new CameraAnchor(self, 0.5, 0.0)

	# Center of the bottom of the screen, at z = 0
	var bottom: IPoint3d[Float] = new CameraAnchor(self, 0.5, -1.0)

	# Center of the left border of the screen, at z = 0
	var left: IPoint3d[Float] = new CameraAnchor(self, 0.0, -0.5)

	# Center of the right border of the screen, at z = 0
	var right: IPoint3d[Float] = new CameraAnchor(self, 1.0, -0.5)

	# Top left corner of the screen, at z = 0
	var top_left: IPoint3d[Float] = new CameraAnchor(self, 0.0, 0.0)

	# Top right corner of the screen, at z = 0
	var top_right: IPoint3d[Float] = new CameraAnchor(self, 1.0, 0.0)

	# Bottom left corner of the screen, at z = 0
	var bottom_left: IPoint3d[Float] = new CameraAnchor(self, 0.0, -1.0)

	# Bottom right corner of the screen, at z = 0
	var bottom_right: IPoint3d[Float] = new CameraAnchor(self, 1.0, -1.0)

	redef fun mvp_matrix
	do
		var view = new Matrix.identity(4)

		# Translate the world away from the camera
		view.translate(-position.x, -position.y, -position.z)

		# Use a projection matrix with a depth
		var projection = new Matrix.orthogonal(0.0, width, -height, 0.0, near, far)

		return view * projection
	end
end

# Immutable relative anchors for reference points on `camera`
private class CameraAnchor
	super IPoint3d[Float]

	# Reference camera
	var camera: UICamera

	# Reference position, the top left of the screen
	var ref: Point3d[Float] = camera.position is lazy

	# X position as proportion of the screen width
	var relative_x: Float

	# Y position as proportion of the screen height
	var relative_y: Float

	redef fun x do return ref.x + relative_x*camera.width
	redef fun y do return ref.y + relative_y*camera.height
	redef fun z do return ref.z

	redef fun offset(x, y, z) do return new OffsetPoint3d(self, x.to_f, y.to_f, z.to_f)
end

# Position relative to another point or usually a `CameraAnchor`
private class OffsetPoint3d
	super Point3d[Float]

	autoinit ref, offset_x, offset_y, offset_z

	# Reference point to which the offsets are applied
	var ref: IPoint3d[Float]

	# Difference on the X axis
	var offset_x: Float

	# Difference on the X axis
	var offset_y: Float

	# Difference on the X axis
	var offset_z: Float

	redef fun x do return ref.x + offset_x
	redef fun y do return ref.y + offset_y
	redef fun z do return ref.z + offset_z

	redef fun x=(value) do if value != null then offset_x += value - x
	redef fun y=(value) do if value != null then offset_y += value - y
	redef fun z=(value) do if value != null then offset_z += value - z

	redef fun offset(x, y, z) do return new OffsetPoint3d(self, x.to_f, y.to_f, z.to_f)
end
