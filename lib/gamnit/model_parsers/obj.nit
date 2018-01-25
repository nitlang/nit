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

# Services to parse .obj geometry files
module obj

import model_parser_base

# Parser of .obj files in ASCII format
#
# Instantiate from a `String` and use `parse` to extract the `ObjDef`.
#
# ~~~
# var obj_src = """
# # Model of a cube
# mtllib material_file.mtl
# o Cube
# v 1.000000 0.000000 0.000000
# v 1.000000 0.000000 1.000000
# v 0.000000 0.000000 1.000000
# v 0.000000 0.000000 0.000000
# v 1.000000 1.000000 0.999999
# v 0.999999 1.000000 1.000001
# v 0.000000 1.000000 1.000000
# v 0.000000 1.000000 0.000000
# usemtl GreenMaterial
# s off
# f 1 2 3 4
# f 5 6 7 8
# f 1 5 8 2
# f 2 8 7 3
# f 3 7 6 4
# f 5 1 4 6
# """
#
# var parser = new ObjFileParser(obj_src)
# var parsed_obj = parser.parse
# assert parsed_obj.is_coherent
# assert parsed_obj.objects.first.name == "Cube"
# ~~~
class ObjFileParser
	super StringProcessor

	private var geometry = new ObjDef is lazy

	private var current_material_lib: nullable String = null

	private var current_material_name: nullable String = null

	# Execute parsing of `src` to extract an `ObjDef`
	fun parse: nullable ObjDef
	do
		var obj_obj = null
		while not eof do
			var token = read_token
			if token.is_empty or token == "#" then
				# Ignore empty lines and comments
			else if token == "v" then # Vertex points
				var vec = read_vec4
				geometry.vertex_points.add vec
			else if token == "vt" then # Texture coords
				var vec = read_vec3
				geometry.texture_coords.add vec
			else if token == "vn" then # Normals
				var vec = read_vec3 # This one should not accept `w` values
				geometry.normals.add vec
			else if token == "vp" then # Parameter space vertices
				var vec = read_vec3
				geometry.params.add vec
			else if token == "f" then # Faces
				var face = read_face
				if obj_obj == null then
					obj_obj = new ObjObj("")
					geometry.objects.add obj_obj
				end
				obj_obj.faces.add face
			else if token == "mtllib" then
				current_material_lib = read_until_eol_or_comment
			else if token == "usemtl" then
				current_material_name = read_until_eol_or_comment

			# TODO other line type headers
			else if token == "s" then
			else if token == "o" then
				obj_obj = new ObjObj(read_until_eol_or_comment)
				geometry.objects.add obj_obj
			else if token == "g" then
			end
			skip_eol
		end
		return geometry
	end

	private fun read_face: ObjFace
	do
		var face = new ObjFace(current_material_lib, current_material_name)

		loop
			var r = read_face_index_set(face)
			if not r then break
		end

		return face
	end

	private fun read_face_index_set(face: ObjFace): Bool
	do
		var token = read_token

		var parts = token.split('/')
		if parts.is_empty or parts.first.is_empty then return false

		var v = new ObjVertex
		for i in parts.length.times, part in parts do
			part = part.trim

			var n = null
			if not part.is_empty and part.is_numeric then n = part.to_i

			if i == 0 then
				n = n or else 0 # Error if n == null
				if n < 0 then n = geometry.vertex_points.length + n
				v.vertex_point_index = n
			else if i == 1 then
				if n != null and n < 0 then n = geometry.texture_coords.length + n
				v.texture_coord_index = n
			else if i == 2 then
				if n != null and n < 0 then n = geometry.normals.length + n
				v.normal_index = n
			else abort
		end
		face.vertices.add v

		return true
	end
end

# Geometry from a .obj file
class ObjDef
	# Vertex coordinates
	var vertex_points = new Array[Vec4]

	# Texture coordinates
	var texture_coords = new Array[Vec3]

	# Normals
	var normals = new Array[Vec3]

	# Surface parameters
	var params = new Array[Vec3]

	# Sub-objects
	var objects = new Array[ObjObj]

	# Relative paths to referenced material libraries
	fun material_libs: Set[String] do
		var libs = new Set[String]
		for obj in objects do
			for face in obj.faces do
				var lib = face.material_lib
				if lib != null then libs.add lib
			end
		end
		return libs
	end

	# Check the coherence of the model
	#
	# Returns `false` on error and prints details to stderr.
	#
	# This service can be useful for debugging, however it should not
	# be executed at each execution of a game.
	fun is_coherent: Bool
	do
		for obj in objects do
			for f in obj.faces do
				if f.vertices.length < 3 then return error("Face with less than 3 vertices")
			end

			for f in obj.faces do for v in f.vertices do
				var i = v.vertex_point_index
				if i < 1 then return error("Vertex point index < 1")
				if i > vertex_points.length then return error("Vertex point index > than length")

				var j = v.texture_coord_index
				if j != null then
					if j < 1 then return error("Texture coord index < 1")
					if j > texture_coords.length then return error("Texture coord index > than length")
				end

				j = v.normal_index
				if j != null then
					if j < 1 then return error("Normal index < 1")
					if j > normals.length then return error("Normal index > than length")
				end
			end
		end
		return true
	end

	# Service to print errors for `is_coherent`
	private fun error(msg: Text): Bool
	do
		print_error "ObjDef Error: {msg}"
		return false
	end
end

# Sub-object within an `ObjDef`
class ObjObj

	# Sub-object name as declared in the source file
	var name: String

	# Sub-object faces
	var faces = new Array[ObjFace]
end

# Flat surface of an `ObjDef`
class ObjFace
	# Vertex composing this surface, there should be 3 or more
	var vertices = new Array[ObjVertex]

	# Relative path to the .mtl material lib
	var material_lib: nullable String

	# Name of the material in `material_lib`
	var material_name: nullable String
end

# Vertex composing a `ObjFace`
class ObjVertex
	# Vertex coordinates index in `ObjDef::vertex_points`, starting at 1
	var vertex_point_index = 0

	# Texture coordinates index in `ObjDef::texture_coords`, starting at 1
	var texture_coord_index: nullable Int = null

	# Normal index in `ObjDef::normals`, starting at 1
	var normal_index: nullable Int = null
end
