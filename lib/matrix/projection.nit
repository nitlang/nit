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

# Services on `Matrix` to transform and project 3D coordinates
module projection

intrude import matrix

redef class Matrix

	# Create an orthogonal projection matrix
	#
	# `left, right, bottom, top, near, far` defines the world clip planes.
	new orthogonal(left, right, bottom, top, near, far: Float)
	do
		var dx = right - left
		var dy = top - bottom
		var dz = far - near

		assert dx != 0.0 and dy != 0.0 and dz != 0.0

		var mat = new Matrix.identity(4)
		mat[0, 0] = 2.0 / dx
		mat[3, 0] = -(right + left) / dx
		mat[1, 1] = 2.0 / dy
		mat[3, 1] = -(top + bottom) / dy
		mat[2, 2] = 2.0 / dz
		mat[3, 2] = -(near + far) / dz
		return mat
	end

	# Create a perspective transformation matrix
	#
	# Using the given vertical `field_of_view_y` in radians, the `aspect_ratio`
	# and the `near`/`far` world distances.
	new perspective(field_of_view_y, aspect_ratio, near, far: Float)
	do
		var frustum_height = (field_of_view_y/2.0).tan * near
		var frustum_width = frustum_height * aspect_ratio

		return new Matrix.frustum(-frustum_width, frustum_width,
		                          -frustum_height, frustum_height,
		                          near, far)
	end

	# Create a frustum transformation matrix
	#
	# `left, right, bottom, top, near, far` defines the world clip planes.
	new frustum(left, right, bottom, top, near, far: Float)
	do
		var dx = right - left
		var dy = top - bottom
		var dz = far - near

		assert near > 0.0
		assert far > 0.0
		assert dx > 0.0
		assert dy > 0.0
		assert dz > 0.0

		var mat = new Matrix(4, 4)

		mat[0, 0] = 2.0 * near / dx
		mat[0, 1] = 0.0
		mat[0, 2] = 0.0
		mat[0, 3] = 0.0

		mat[1, 0] = 0.0
		mat[1, 1] = 2.0 * near / dy
		mat[1, 2] = 0.0
		mat[1, 3] = 0.0

		mat[2, 0] = (right + left) / dx
		mat[2, 1] = (top + bottom) / dy
		mat[2, 2] = -(near + far) / dz
		mat[2, 3] = -1.0

		mat[3, 0] = 0.0
		mat[3, 1] = 0.0
		mat[3, 2] = -2.0 * near * far / dz
		mat[3, 3] = 0.0

		return mat
	end

	# Apply a translation by `x, y, z` to this matrix
	fun translate(x, y, z: Float)
	do
		for i in [0..3] do
			self[3, i] = self[3,i] + self[0, i] * x + self[1, i] * y + self[2, i] * z
		end
	end

	# Apply scaling on `x, y, z` to this matrix
	fun scale(x, y, z: Float)
	do
		for i in [0..3] do
			self[0, i] = self[0, i] * x
			self[1, i] = self[1, i] * y
			self[2, i] = self[2, i] * z
		end
	end

	# Create a rotation matrix by `angle` around the vector defined by `x, y, z`
	new rotation(angle, x, y, z: Float)
	do
		var mat = new Matrix.identity(4)

		var mag = (x*x + y*y + z*z).sqrt
		var sin = angle.sin
		var cos = angle.cos

		if mag > 0.0 then
			x = x / mag
			y = y / mag
			z = z / mag

			var inv_cos = 1.0 - cos

			mat[0, 0] = inv_cos*x*x + cos
			mat[0, 1] = inv_cos*x*y - z*sin
			mat[0, 2] = inv_cos*z*x + y*sin

			mat[1, 0] = inv_cos*x*y + z*sin
			mat[1, 1] = inv_cos*y*y + cos
			mat[1, 2] = inv_cos*y*z - x*sin

			mat[2, 0] = inv_cos*z*x - y*sin
			mat[2, 1] = inv_cos*y*z + x*sin
			mat[2, 2] = inv_cos*z*z + cos
		end
		return mat
	end

	# Apply a rotation of `angle` radians around the vector `x, y, z`
	fun rotate(angle, x, y, z: Float)
	do
		var rotation = new Matrix.rotation(angle, x, y, z)
		var rotated = self * rotation
		self.items = rotated.items
	end

	# Rotation matrix from Euler angles `pitch`, `yaw` and `roll` in radians
	#
	# Apply a composition of intrinsic rotations around the axes x-y'-z''.
	# Or `pitch` around the X axis, `yaw` around Y and `roll` around Z,
	# applied successively. All rotations follow the right hand rule.
	#
	# This service aims to respect the world axes and logic of `gamnit`,
	# it may not correspond to all needs.
	#
	# The returned `Matrix` may be cached, it must not be modified.
	new gamnit_euler_rotation(pitch, yaw, roll: Float)
	do
		if pitch == 0.0 and yaw == 0.0 and roll == 0.0 then
			return once new Matrix.identity(4)
		end

		if rotation_pitch == pitch and rotation_yaw == yaw and rotation_roll == roll then
			var rot = rotation_matrix_cache
			if rot != null then return rot
		end

		var c1 = pitch.cos
		var s1 = pitch.sin
		var c2 = yaw.cos
		var s2 = yaw.sin
		var c3 = roll.cos
		var s3 = roll.sin

		var rot = new Matrix(4, 4)
		rot.items.mat4_set(
			          c2*c3,          -c2*s3,   -s2, 0.0,
			 c1*s3+c3*s1*s2,  c1*c3-s1*s2*s3, c2*s1, 0.0,
			-s1*s3+c1*c3*s2, -c3*s1-c1*s2*s3, c1*c2, 0.0,
			            0.0,             0.0,   0.0, 1.0)

		rotation_matrix_cache = rot
		rotation_pitch = pitch
		rotation_yaw = yaw
		rotation_roll = roll
		return rot
	end
end

redef class NativeDoubleArray
	fun mat4_set(f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15: Float) `{
		self[ 0] =  f0;
		self[ 1] =  f1;
		self[ 2] =  f2;
		self[ 3] =  f3;

		self[ 4] =  f4;
		self[ 5] =  f5;
		self[ 6] =  f6;
		self[ 7] =  f7;

		self[ 8] =  f8;
		self[ 9] =  f9;
		self[10] = f10;
		self[11] = f11;

		self[12] = f12;
		self[13] = f13;
		self[14] = f14;
		self[15] = f15;
	`}
end

redef class Sys

	private var rotation_matrix_cache: nullable Matrix = null
	private var rotation_pitch = 0.0
	private var rotation_yaw = 0.0
	private var rotation_roll = 0.0
end
