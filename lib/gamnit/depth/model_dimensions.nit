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

# Dimensions related services for `Model` and `Mesh`
module model_dimensions

import depth_core

redef class Model

	# Dimensions of the bounding box containing all vertices
	var dimensions = new Point3d[Float](max.x-min.x, max.y-min.y, max.z-min.z) is lazy, writable

	# Center coordinates of all the vertices
	var center = new Point3d[Float]((min.x+max.x)/2.0, (min.y+max.y)/2.0, (min.z+max.z)/2.0) is lazy, writable

	# Minimum coordinates of all vertices on each axes
	#
	# This is a corner of the bounding box.
	var min: Point3d[Float] is lazy do
		var mx = inf
		var my = inf
		var mz = inf
		for leaf in leaves do
			var lm = leaf.mesh.min
			mx = mx.min(lm.x)
			my = my.min(lm.y)
			mz = mz.min(lm.z)
		end
		return new Point3d[Float](mx, my, mz)
	end

	# Maximum coordinates of all vertices on each axes
	#
	# This is a corner of the bounding box.
	var max: Point3d[Float] is lazy do
		var mx = -inf
		var my = -inf
		var mz = -inf
		for leaf in leaves do
			var lm = leaf.mesh.max
			mx = mx.max(lm.x)
			my = my.max(lm.y)
			mz = mz.max(lm.z)
		end
		return new Point3d[Float](mx, my, mz)
	end
end

redef class LeafModel

	redef fun dimensions do return mesh.dimensions

	redef fun center do return mesh.center
end

redef class Mesh

	# Dimensions of the bounding box containing all vertices
	var dimensions = new Point3d[Float](max.x-min.x, max.y-min.y, max.z-min.z) is lazy, writable

	# Center coordinates of all the vertices
	var center = new Point3d[Float]((min.x+max.x)/2.0, (min.y+max.y)/2.0, (min.z+max.z)/2.0) is lazy, writable

	# Minimum coordinates of all vertices on each axes
	#
	# This is a corner of the bounding box.
	var min: Point3d[Float] is lazy do
		var mx = inf
		var my = inf
		var mz = inf
		var i = 0
		while i < vertices.length do
			mx = mx.min(vertices[i])
			my = my.min(vertices[i+1])
			mz = mz.min(vertices[i+2])
			i += 3
		end
		return new Point3d[Float](mx, my, mz)
	end

	# Maximum coordinates of all vertices on each axes
	#
	# This is a corner of the bounding box.
	 var max: Point3d[Float] is lazy do
		var mx = -inf
		var my = -inf
		var mz = -inf
		var i = 0
		while i < vertices.length do
			mx = mx.max(vertices[i])
			my = my.max(vertices[i+1])
			mz = mz.max(vertices[i+2])
			i += 3
		end
		return new Point3d[Float](mx, my, mz)
	end
end
