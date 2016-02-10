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

# Base entities of the depth 3D game framework
module depth_core

intrude import gamnit::flat

# Visible entity in the game world, represented by its `model` modified by the other attributes
class Actor

	# Model used to dray this actor
	var model: Model

	# Position of this sprite in world coordinates
	var center: Point3d[Float] is writable

	# Rotation on the Z axis
	var rotation = 0.0 is writable

	# Scale applied to this sprite
	var scale = 1.0 is writable

	# Transparency applied to the texture on draw
	var alpha = 1.0 is writable
end

# Entire 3D model defined by its `leaves`, an association of `Mesh` to `Material`
abstract class Model

	# Load this model in memory
	fun load do end

	# All `LeafModel` composing this model
	#
	# Usually, there is one `LeafModel` per material.
	# At each frame, each material is asked to draw all the live `LeafModel` instaces.
	fun leaves: Array[LeafModel] is abstract
end

# Model composed of one or many other `LeafModel`
class CompositeModel
	super Model

	redef var leaves = new Array[LeafModel]
end

# Single model with a `mesh` and `material`
#
# Only leaves are actually drawn by the `material`.
class LeafModel
	super Model

	# Mesh forming this model
	var mesh: Mesh

	# Material applied on this model
	var material: Material

	redef var leaves = [self]
end

# Material for a model or how to draw the model
abstract class Material

	# Draw `actor`
	#
	# This method should be refined by subclasses as the default implementation is a no-op.
	#
	# This method is called on many materials for many `actor` and `model` at each frame.
	# It is expected to use a `GLProgram` and call an equivalent to `glDrawArrays`.
	# However, it should not call `glClear` nor `GamnitDisplay::flip`.
	fun draw(actor: Actor, model: LeafModel) do end
end

# Mesh with all geometry data
class Mesh

	# Vertices coordinates
	var vertices = new Array[Float] is lazy, writable

	# Indices to draw triangles with `glDrawElements`
	#
	# If `not_empty`, use `glDrawElements`, otherwise use `glDrawArrays`.
	var indices = new Array[Int] is lazy, writable

	private var indices_c = new CUInt16Array.from(indices) is lazy, writable

	# Normals on each vertex
	var normals = new Array[Float] is lazy, writable

	# Coordinates on the texture per vertex
	var texture_coords = new Array[Float] is lazy, writable

	# `GLDrawMode` used to display this mesh, defaults to `gl_TRIANGLES`
	fun draw_mode: GLDrawMode do return gl_TRIANGLES

	# Create an UV sphere of `radius` with `n_meridians` and `n_parallels`
	init uv_sphere(radius: Float, n_meridians, n_parallels: Int)
	do
		var w = n_meridians
		var h = n_parallels

		var vertices = new Array[Float].with_capacity(w*h*3)
		self.vertices = vertices

		var texture_coords = new Array[Float].with_capacity(w*h*2)
		self.texture_coords = texture_coords

		var normals = new Array[Float].with_capacity(w*h*3)
		self.normals = normals

		# Build vertices
		for m in [0..w[ do
			for p in [0..h[ do
				var u = m.to_f * 2.0 * pi / (w-1).to_f
				var v = p.to_f * pi / (h-1).to_f

				vertices.add radius * u.cos * v.sin
				vertices.add radius * v.cos
				vertices.add radius * u.sin * v.sin

				texture_coords.add (1.0 - m.to_f/(w-1).to_f)
				texture_coords.add(p.to_f/(h-1).to_f)

				normals.add u.cos * v.sin
				normals.add v.cos
				normals.add u.sin * v.sin
			end
		end

		# Build faces
		var indices = new Array[Int].with_capacity((w-1)*(h-1)*6)
		self.indices = indices
		for m in [0..w-1[ do
			for p in [0..h-1[ do
				var a = m*h + p

				indices.add a
				indices.add a+h
				indices.add a+1

				indices.add a+h
				indices.add a+h+1
				indices.add a+1
			end
		end
	end

	# Dimensions of this geometry using the min and max of all points on each axis
	var dimensions: Point3d[Float] is lazy, writable do
		assert vertices.length % 3 == 0

		var minx = inf
		var miny = inf
		var minz = inf
		var maxx = -inf
		var maxy = -inf
		var maxz = -inf

		var i = 0
		while i < vertices.length do
			var x = vertices[i]
			i += 1
			var y = vertices[i]
			i += 1
			var z = vertices[i]
			i += 1

			minx = minx.min(x)
			miny = miny.min(y)
			minz = minz.min(z)

			maxx = maxx.max(x)
			maxy = maxy.max(y)
			maxz = maxz.max(z)
		end

		return new Point3d[Float](maxx-minx, maxy-miny, maxz-minz)
	end

	# Center of the geometry
	var center: Point3d[Float] is lazy, writable do
		assert vertices.length % 3 == 0

		var minx = inf
		var miny = inf
		var minz = inf
		var maxx = -inf
		var maxy = -inf
		var maxz = -inf

		var i = 0
		while i < vertices.length do
			var x = vertices[i]
			i += 1
			var y = vertices[i]
			i += 1
			var z = vertices[i]
			i += 1

			minx = minx.min(x)
			miny = miny.min(y)
			minz = minz.min(z)

			maxx = maxx.max(x)
			maxy = maxy.max(y)
			maxz = maxz.max(z)
		end

		var center = new Point3d[Float](
			(minx+maxx)/2.0,
			(miny+maxy)/2.0,
			(minz+maxz)/2.0)
		return center
	end
end

# Source of light
#
# Instances of this class define a light source position and type.
class Light

	# TODO point light, spotlight, directional light, etc.

	# Center of this light source in world coordinates
	var position = new Point3d[Float](0.0, 1000.0, 0.0)
end

redef class App

	# Live actors to be drawn on screen
	var actors = new Array[Actor]

	# Single light of the scene
	var light = new Light

	# TODO move `actors & light` to a scene object
	# TODO support more than 1 light
end
