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

# Cache the `Matrix` produced by `Camera::mvp_matrix`
module cameras_cache

import cameras

redef class Camera
	private var mvp_matrix_cache: nullable Matrix = null

	private var position_cache = new Point3d[Float](0.0, 0.0, 0.0)

	# Has `position` changed from `position_cache`? Update the cache at the same time
	private fun check_position_changed: Bool
	do
		if position.x != position_cache.x or
		   position.y != position_cache.y or
		   position.z != position_cache.z then
			position_cache.x = position.x
			position_cache.y = position.y
			position_cache.z = position.z
			return true
		end
		return false
	end
end

redef class EulerCamera
	# The returned matrix must not be modified as it is cached.
	redef fun mvp_matrix
	do
		var m = mvp_matrix_cache
		if m == null or check_position_changed then
			m = super
			mvp_matrix_cache = m
		end
		return m
	end

	redef fun pitch=(value)
	do
		super
		mvp_matrix_cache = null
	end

	redef fun yaw=(value)
	do
		super
		mvp_matrix_cache = null
	end

	redef fun roll=(value)
	do
		super
		mvp_matrix_cache = null
	end

	redef fun field_of_view_y=(value)
	do
		super
		mvp_matrix_cache = null
	end

	redef fun near=(value)
	do
		super
		mvp_matrix_cache = null
	end

	redef fun far=(value)
	do
		super
		mvp_matrix_cache = null
	end
end

redef class UICamera
	# The returned matrix must not be modified as it is cached.
	redef fun mvp_matrix
	do
		var m = mvp_matrix_cache
		if m == null or check_position_changed then
			m = super
			mvp_matrix_cache = m
		end
		return m
	end

	redef fun near=(value)
	do
		super
		mvp_matrix_cache = null
	end

	redef fun far=(value)
	do
		super
		mvp_matrix_cache = null
	end

	redef fun height=(value)
	do
		super
		mvp_matrix_cache = null
	end
end
