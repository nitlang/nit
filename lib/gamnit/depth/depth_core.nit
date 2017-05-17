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

# Visible 3D entity in the game world
#
# Similar to `gamnit::Sprite` which is in 2D.
#
# Each actor associates a `model` to the position `center`.
# The appearance is modified by `rotation`, `scale` and `alpha`,
# as well as the attributes of `model` itself.
#
# ~~~
# import gamnit::depth
#
# # Load model from the assets folder
# var model = new Model("path/in/assets.obj")
#
# # Create and configure an actor
# var actor = new Actor(model, new Point3d[Float](0.0, 0.0, 0.0))
# actor.scale = 2.0
#
# # Add to the visible game world
# app.actors.add actor
# ~~~
class Actor

	# Model used to draw this actor
	var model: Model

	# Position of this sprite in world coordinates
	var center: Point3d[Float] is writable

	# Rotation on the Z axis
	var rotation = 0.0 is writable

	# Scale applied to the model
	var scale = 1.0 is writable

	# Transparency applied to the model on draw
	#
	# This value may be ignored by some materials.
	# Non-opaque values may result in artifacts as there is no specialized
	# support for transparent models and the depth buffer.
	var alpha = 1.0 is writable
end

# 3D model composed of `Mesh` and `Material`, loaded from the assets folder by default
#
# Instances can be created at any time and must be loaded after or at the end of `on_create`.
# If loading fails, the model is replaced by `placeholder_model`.
#
# ~~~
# import gamnit::depth
#
# var model = new Model("path/in/assets.obj")
# model.load
# ~~~
#
# The most simple model is `LeafModel`, composed of a single `Mesh` and `Material`.
# It can be easily created programmatically to display simple geometries.
# Whereas `CompositeModel` is composed of one or many `LeafModel` and is usually
# loaded from the assets folder as a `ModelAsset`.
# Instances of `ModelAsset` must be in the format OBJ and MAT,
# and their texture in PNG or JPG.
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

# Basic model with a single `mesh` and `material`
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

# Material for models, or how to draw the model
#
# To create a simple basic blueish material, use `new Material`.
#
# Each class of material is associated to a `GLProgram` and its GPU shaders.
# The simple material `SmoothMaterial` allows to set an ambient, diffuse and specular color.
# To which `TextureMaterial` adds three textures, for each kind of light.
# The `NormalsMaterial` may be useful for debugging, it show the orientation of
# the normal vectors as colors.
#
# ~~~
# import gamnit::depth
#
# var blueish_material = new Material
# var redish_material = new SmoothMaterial([0.3, 0.0, 0.0],
#                                          [0.6, 0.0, 0.0],
#                                          [1.0, 1.0, 1.0])
# var normals_material = new NormalsMaterial
# ~~~
abstract class Material

	# Draw a `model` from `actor`
	#
	# This method should be refined by subclasses as the default implementation is a no-op.
	#
	# This method is called on many materials for many `actor` and `model` at each frame.
	# It is expected to use a `GLProgram` and call an equivalent to `glDrawArrays`.
	# However, it should not call `glClear` nor `GamnitDisplay::flip`.
	fun draw(actor: Actor, model: LeafModel) do end
end

# Mesh with all geometry data
#
# May be created via `Plane`, `Cube` or `UVSphere`,
# or loaded from the assets folder indirectly with a `Model`.
#
# ~~~
# import gamnit::depth
#
# var plane = new Plane
# var cube = new Cube
# var sphere = new UVSphere(1.0, 32, 16)
# ~~~
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
