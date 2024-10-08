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

# Services to parse .mtl material files
module mtl

import model_parser_base

# Parser of `.mtl` files
#
# ~~~
# var mtl_src = """
# # Green material with low reflections
# newmtl GreenMaterial
# Ns 96.078431
# Ka 0.000000 0.000000 0.000000
# Kd 0.027186 0.180434 0.012088
# Ks 0.500000 0.500000 0.500000
# Ni 1.000000
# d 1.000000
# illum 2
# """
#
# var parser = new MtlFileParser(mtl_src)
# var name_to_mtls = parser.parse
# assert name_to_mtls.keys.join == "GreenMaterial"
# ~~~
class MtlFileParser
	super StringProcessor

	# Read and parse source and return all materials organized by their names
	fun parse: Map[String, MtlDef]
	do
		var mat_lib = new Map[String, MtlDef]
		var material: nullable MtlDef = null

		while not eof do
			var token = read_token
			if token == "newmtl" then
				var name = read_until_eol_or_comment
				material = new MtlDef(name)
				mat_lib[name] = material
			else if material != null then
				if token == "Ka" then
					material.ambient = read_vec3
				else if token == "Kd" then
					material.diffuse = read_vec3
				else if token == "Ks" then
					material.specular = read_vec3
				else if token == "d" then
					material.dissolved = read_number
				else if token == "Tr" then
					material.dissolved = 1.0 - read_number
				else if token == "illum" then
					material.illumination_model = read_number.to_i
				else if token == "map_Ka" then
					material.map_ambient = read_until_eol_or_comment
				else if token == "map_Kd" then
					material.map_diffuse = read_until_eol_or_comment
				else if token == "map_Bump" then
					material.map_bump = read_until_eol_or_comment
				else if token == "map_Ks" then
					material.map_specular = read_until_eol_or_comment
				else if token == "map_Ns" then
					material.map_exponent = read_until_eol_or_comment

				# TODO other line type headers
				else if token == "Ns" then
				else if token == "Ni" then
				else if token == "sharpness" then
				else if token == "bump" then
				end
			end
			skip_eol
		end

		return mat_lib
	end
end

# Material defined in a `.mtl` file
class MtlDef

	# Name of this material
	var name: String

	# Ambient color
	var ambient = new Vec3 is lazy

	# Diffuse color
	var diffuse = new Vec3 is lazy

	# Specular color
	var specular = new Vec3 is lazy

	# Dissolved level, where 1.0 is fully visible
	var dissolved = 1.0

	# Transparency level, where 1.0 is fully invisible
	fun transparency: Float do return 1.0 - dissolved

	# Illumination model
	var illumination_model = 0

	# Ambient map
	var map_ambient: nullable String = null

	# Diffuse map
	var map_diffuse: nullable String = null

	# Bump map or normals texture
	var map_bump: nullable String = null

	# Specular reflectivity map
	var map_specular: nullable String = null

	# Specular exponent map
	var map_exponent: nullable String = null

	# Collect non-null maps from `map_diffuse, map_bump, map_specular, map_exponent`
	fun maps: Array[String]
	do
		return [for m in [map_ambient, map_diffuse, map_bump, map_specular, map_exponent] do if m != null then m]
	end
end
