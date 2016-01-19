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

# More simple geometric meshes
module more_meshes

import geometry
import depth_core

# Simple flat mesh, sits on the axes X and Z, normal on Y
class Plane
	super Mesh

	# TODO allow for complex rotation, either at creation or in Actor

	redef var vertices is lazy do
		var a = [-0.5, 0.0, -0.5]
		var b = [ 0.5, 0.0, -0.5]
		var c = [-0.5, 0.0,  0.5]
		var d = [ 0.5, 0.0,  0.5]

		var vertices = new Array[Float]
		for v in [c, d, a, b] do vertices.add_all v
		return vertices
	end

	redef var normals: Array[Float] is lazy do
		var normals = new Array[Float]
		for i in 4.times do normals.add_all([0.0, 1.0, 0.0])
		return normals
	end

	redef var texture_coords: Array[Float] is lazy do
		var offset_left = 0.0
		var offset_top = 0.0
		var offset_right = 1.0
		var offset_bottom = 1.0
		var a = [offset_left,  offset_bottom]
		var b = [offset_right, offset_bottom]
		var c = [offset_left,  offset_top]
		var d = [offset_right, offset_top]

		var texture_coords = new Array[Float]
		for v in [c, d, a, b] do texture_coords.add_all v
		return texture_coords
	end

	redef var center = new Point3d[Float](0.0, 0.0, 0.0) is lazy

	init do indices.add_all([0, 1, 2, 2, 1, 3])
	# TODO use gl_TRIANGLE_FAN instead
end

# Cube, with 6 faces
class Cube
	super Mesh

	redef var vertices is lazy do
		var a = [-0.5, -0.5, -0.5]
		var b = [ 0.5, -0.5, -0.5]
		var c = [-0.5,  0.5, -0.5]
		var d = [ 0.5,  0.5, -0.5]

		var e = [-0.5, -0.5,  0.5]
		var f = [ 0.5, -0.5,  0.5]
		var g = [-0.5,  0.5,  0.5]
		var h = [ 0.5,  0.5,  0.5]

		var vertices = new Array[Float]
		for v in [a, c, d, a, d, b, # front
		          f, h, g, f, g, e, # back
		          b, d, h, b, h, f, # right
		          e, g, c, e, c, a, # left
		          e, a, b, e, b, f, # bottom
		          c, g, h, c, h, d  # top
				  ] do vertices.add_all v
		return vertices
	end

	redef var normals is lazy do
		var normals = new Array[Float]
		var faces_normals = [
			[0.0, 0.0, -1.0],
			[0.0, 0.0,  1.0],
			[ 1.0, 0.0, 0.0],
			[-1.0, 0.0, 0.0],
			[0.0, -1.0, 0.0],
			[0.0,  1.0, 0.0]]
		for f in faces_normals do for i in 6.times do normals.add_all f
		return normals
	end

	redef var center = new Point3d[Float](0.0, 0.0, 0.0) is lazy
end
