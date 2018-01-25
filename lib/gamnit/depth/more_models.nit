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

# Services to load models from the assets folder
module more_models

intrude import depth_core

import gamnit::obj
import gamnit::mtl

import more_materials
import more_meshes

redef class Model
	# Prepare to load a model from the assets folder
	new(path: Text) do return new ModelAsset(path.to_s)
end

# Model loaded from a file in the asset folder
#
# In case of error, `error` is set accordingly.
# If the error is on the mesh, `mesh` is set to a default `new Cube`.
# If the material is missing or it failed to load, `material` is set to the blueish `new Material`.
class ModelAsset
	super Model
	super Asset

	init do models.add self

	private var loaded = false

	redef fun load
	do
		if loaded then return

		var ext = path.file_extension
		if ext == "obj" then
			load_obj_file
		else
			errors.add new Error("Model at '{path}' failed to load: Extension '{ext or else "null"}' unrecognized")
		end

		if leaves_cache.is_empty then
			# Nothing was loaded, use a cube with the default material
			var leaf = placeholder_model
			leaves_cache.add leaf
		end

		loaded = true
	end

	private fun lazy_load
	do
		if loaded then return

		# Lazy load
		load

		# Print errors when lazy loading only
		if errors.length == 1 then
			print_error errors.first
		else if errors.length > 1 then
			print_error "Loading model at '{path}' raised {errors.length} errors:\n* "
			print_error errors.join("\n* ")
		end
	end

	private fun load_obj_file
	do
		# Read .obj description from assets
		var text_asset = new TextAsset(path)
		var content = text_asset.to_s
		if content.is_empty then
			errors.add new Error("Model failed to load: Asset empty at '{self.path}'")
			leaves_cache.add new LeafModel(new Cube, new Material)
			return
		end

		# Parse .obj description
		var parser = new ObjFileParser(content)
		var obj_def = parser.parse
		if obj_def == null then
			errors.add new Error("Model failed to load: .obj format error on '{self.path}'")
			leaves_cache.add new LeafModel(new Cube, new Material)
			return
		end

		# Check for errors
		if debug_gamnit then assert obj_def.is_coherent

		# Build models
		var converter = new BuildModelFromObj(path, obj_def)
		converter.fill_leaves self
		errors.add_all converter.errors
	end

	redef fun leaves
	do
		lazy_load
		return leaves_cache
	end

	private var leaves_cache = new Array[LeafModel]

	redef fun named_parts
	do
		lazy_load
		return named_leaves_cache
	end

	private var named_leaves_cache = new Map[String, Model]
end

# Short-lived service to convert an `ObjDef` to `fill_leaves`
#
# Limitations: This service only support faces with 3 or 4 vertices.
# Faces with more vertices should be triangulated by the modeling tool.
private class BuildModelFromObj

	# Path to the .obj file in the assets folder, used to find .mtl files
	var path: String

	# Parsed .obj definition
	var obj_def: ObjDef

	# Errors raised by calls to `fill_leaves`
	var errors = new Array[Error]

	# Fill `leaves` with objects described in `obj_def`
	fun fill_leaves(target_model: ModelAsset)
	do
		var leaves = target_model.leaves_cache

		# Sort faces by material
		var obj_mtl_to_faces = new Map[ObjObj, MultiHashMap[String, ObjFace]]
		for obj in obj_def.objects do
			var mtl_to_faces = new MultiHashMap[String, ObjFace]
			obj_mtl_to_faces[obj] = mtl_to_faces
			for face in obj.faces do
				var mtl_lib_name = face.material_lib
				var mtl_name = face.material_name

				var full_name = ""
				if mtl_lib_name != null and mtl_name != null then full_name = mtl_lib_name / mtl_name

				mtl_to_faces[full_name].add face
			end
		end

		# Load material libs
		var mtl_libs = sys.mtl_libs
		var lib_names = obj_def.material_libs
		for name in lib_names do
			var asset_path = self.path.dirname / name
			var lib_asset = new TextAsset(asset_path)
			lib_asset.load

			var error = lib_asset.error
			if error != null then
				errors.add error
				continue
			end

			var mtl_parser = new MtlFileParser(lib_asset.to_s)
			var mtl_lib = mtl_parser.parse
			mtl_libs[asset_path] = mtl_lib
		end

		# Create 1 mesh per material per object, and prepare materials
		var mesh_to_mtl = new Map[Mesh, nullable MtlDef]
		var mesh_to_name = new Map[Mesh, String]
		var texture_names = new Set[String]
		for obj in obj_def.objects do
			var mtl_to_faces = obj_mtl_to_faces[obj]
			for mtl_path, faces in mtl_to_faces do

				# Create mesh
				var mesh = new Mesh
				mesh.vertices = vertices(faces)
				mesh.normals = normals(faces)
				mesh.texture_coords = texture_coords(faces)

				# Material
				var mtl_def = null

				var mtl_lib_name = faces.first.material_lib
				var mtl_name = faces.first.material_name
				if mtl_lib_name != null and mtl_name != null then
					var asset_path = self.path.dirname / mtl_lib_name
					var mtl_lib = mtl_libs[asset_path]
					var mtl = mtl_lib.get_or_null(mtl_name)
					if mtl != null then
						mtl_def = mtl

						for e in mtl.maps do
							texture_names.add self.path.dirname / e
						end
					else
						errors.add new Error("Error loading model at '{path}': mtl '{mtl_name}' not found in '{asset_path}'")
					end
				end

				mesh_to_mtl[mesh] = mtl_def
				mesh_to_name[mesh] = obj.name
			end
		end

		# Load textures need for these materials
		for name in texture_names do
			if not asset_textures_by_name.keys.has(name) then
				var tex = new TextureAsset(name)
				asset_textures_by_name[name] = tex

				tex.load
				var error = tex.error
				if error != null then errors.add error
			end
		end

		# Create final `Materials` from defs and textures
		var materials = new Map[MtlDef, Material]
		for mtl in mesh_to_mtl.values do
			if mtl == null then continue

			var ambient = mtl.ambient.to_a
			ambient.add 1.0

			var diffuse = mtl.diffuse.to_a
			diffuse.add 1.0

			var specular = mtl.specular.to_a
			specular.add 1.0

			var material = new TexturedMaterial(ambient, diffuse, specular)
			materials[mtl] = material

			var tex_name = mtl.map_ambient
			if tex_name != null then
				tex_name = self.path.dirname / tex_name
				material.ambient_texture = asset_textures_by_name[tex_name]
			end

			tex_name = mtl.map_diffuse
			if tex_name != null then
				tex_name = self.path.dirname / tex_name
				material.diffuse_texture = asset_textures_by_name[tex_name]
			end

			tex_name = mtl.map_specular
			if tex_name != null then
				tex_name = self.path.dirname / tex_name
				material.specular_texture = asset_textures_by_name[tex_name]
			end
		end

		# Create models and store them
		var name_to_leaves = new MultiHashMap[String, LeafModel]
		for mesh, mtl_def in mesh_to_mtl do

			var material = materials.get_or_null(mtl_def)
			if material == null then material = new Material

			var model = new LeafModel(mesh, material)
			leaves.add model

			name_to_leaves[mesh_to_name[mesh]].add model
		end

		# Collect objects with a name
		for name, models in name_to_leaves do
			if models.length == 1 then
				target_model.named_leaves_cache[name] = models.first
			else
				var named_model = new CompositeModel
				named_model.leaves.add_all models
				target_model.named_leaves_cache[name] = named_model
			end
		end
	end

	# Compute the vertices coordinates of `faces` in a flat `Array[Float]`
	fun vertices(faces: Array[ObjFace]): Array[Float] do
		var obj_def = obj_def

		var vertices = new Array[Float]
		for face in faces do

			# 1st triangle
			var count = 0
			for e in face.vertices do
				var i = e.vertex_point_index - 1
				var v = obj_def.vertex_points[i]

				vertices.add v.x
				vertices.add v.y
				vertices.add v.z

				if count == 2 then break
				count += 1
			end

			# If square, 2nd triangle
			#
			# This may not support all vertices ordering.
			if face.vertices.length > 3 then
				for e in [face.vertices[0], face.vertices[2], face.vertices[3]] do
					var i = e.vertex_point_index - 1
					var v = obj_def.vertex_points[i]

					vertices.add v.x
					vertices.add v.y
					vertices.add v.z
				end
			end

			# TODO use polygon triangulation to support larger polygons
		end
		return vertices
	end

	# Compute the normals of `faces` in a flat `Array[Float]`
	fun normals(faces: Array[ObjFace]): Array[Float] do
		var obj_def = obj_def

		var normals = new Array[Float]
		for face in faces do
			# 1st triangle
			var count = 0
			for e in face.vertices do
				var i = e.normal_index
				if i == null then
					compute_and_append_normal(normals, face)
				else
					var v = obj_def.normals[i-1]
					normals.add v.x
					normals.add v.y
					normals.add v.z
				end

				if count == 2 then break
				count += 1
			end

			# If square, 2nd triangle
			#
			# This may not support all vertices ordering.
			if face.vertices.length > 3 then
				for e in [face.vertices[0], face.vertices[2], face.vertices[3]] do
					var i = e.normal_index
					if i == null then
						compute_and_append_normal(normals, face)
					else
						var v = obj_def.normals[i-1]
						normals.add v.x
						normals.add v.y
						normals.add v.z
					end
				end
			end
		end
		return normals
	end

	# Compute the normal of `face` and append it as 3 floats to `seq`
	#
	# Resulting normals are not normalized.
	fun compute_and_append_normal(seq: Sequence[Float], face: ObjFace)
	do
		var i1 = face.vertices[0].vertex_point_index
		var i2 = face.vertices[1].vertex_point_index
		var i3 = face.vertices[2].vertex_point_index

		var v1 = obj_def.vertex_points[i1-1]
		var v2 = obj_def.vertex_points[i2-1]
		var v3 = obj_def.vertex_points[i3-1]

		var vx = v2.x - v1.x
		var vy = v2.y - v1.y
		var vz = v2.z - v1.z
		var wx = v3.x - v1.x
		var wy = v3.y - v1.y
		var wz = v3.z - v1.z

		var nx = (vy*wz) - (vz*wy)
		var ny = (vz*wx) - (vx*wz)
		var nz = (vx*wy) - (vy*wx)

		# Append to `seq`
		seq.add nx
		seq.add ny
		seq.add nz
	end

	# Compute the texture coordinates of `faces` in a flat `Array[Float]`
	fun texture_coords(faces: Array[ObjFace]): Array[Float] do
		var obj_def = obj_def

		var coords = new Array[Float]
		for face in faces do

			# 1st triangle
			var count = 0
			for e in face.vertices do
				var i = e.texture_coord_index
				if i == null then
					coords.add 0.0
					coords.add 0.0
				else
					var tc = obj_def.texture_coords[i-1]
					coords.add tc.u
					coords.add tc.v
				end

				if count == 2 then break
				count += 1
			end

			# If square, 2nd triangle
			#
			# This may not support all vertices ordering.
			if face.vertices.length > 3 then
				for e in [face.vertices[0], face.vertices[2], face.vertices[3]] do
					var i = e.texture_coord_index
					if i == null then
						coords.add 0.0
						coords.add 0.0
					else
					var tc = obj_def.texture_coords[i-1]
					coords.add tc.u
					coords.add tc.v
					end
				end
			end
		end
		return coords
	end
end

redef class Sys
	# Textures loaded from .mtl files for models
	var asset_textures_by_name = new Map[String, TextureAsset]

	# Loaded .mtl material definitions, sorted by path in assets and material name
	private var mtl_libs = new Map[String, Map[String, MtlDef]]

	# All instantiated asset models
	var models = new Set[ModelAsset]

	# Blue cube of 1 unit on each side, acting as placeholder for models failing to load
	#
	# This model can be freely used by any `Actor` as placeholder or for debugging.
	var placeholder_model = new LeafModel(new Cube, new Material) is lazy
end
