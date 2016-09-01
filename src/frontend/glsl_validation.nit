# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Check shader code within Nit modules using the tool _glslangValidator_
#
# For this phase to work, _glslangValidator_ must be in PATH. It can be
# downloaded from https://www.khronos.org/opengles/sdk/tools/Reference-Compiler/
module glsl_validation

import literal

redef class ToolContext
	# Shader code validation phase
	var glsl_validation_phase: Phase = new GLSLValidationPhase(self, [literal_phase])
end

private class GLSLValidationPhase
	super Phase

	# Annotation names

	fun annot_name_vertex: String do return "glsl_vertex_shader"
	fun annot_name_fragment: String do return "glsl_fragment_shader"

	# TODO support more shader types as needed

	# Is the tool _glsllangValidator_ in path?
	var tool_is_in_path: nullable Bool = null

	redef fun process_annotated_node(nstring, nat)
	do
		var annot_name = nat.n_atid.n_id.text
		var is_vertex = annot_name == annot_name_vertex
		var is_fragment = annot_name == annot_name_fragment

		# Skip if we are not interested
		if not is_vertex and not is_fragment then return

		# Only applicable on strings
		if not nstring isa AStringFormExpr then
			toolcontext.error(nstring.location,
				"Syntax Error: only a string literal can be annotated as `{annot_name}`.")
			return
		end

		# Do not double check if tool is in path
		var in_path = tool_is_in_path
		if in_path == null then
			# Is _glslangValidator_ installed?
			var proc_which = new ProcessReader("which", "glslangValidator")
			proc_which.wait
			proc_which.close
			var status = proc_which.status
			in_path = status == 0
			tool_is_in_path = in_path
		end

		if not in_path then
			toolcontext.advice(nat.location, "glslvalidator",
				"Warning: program `glslangValidator` not in PATH, cannot validate this shader.")
			return
		end

		# Get the shader source
		var shader = nstring.value

		# Copy the shader to a file
		# TODO make it more portable
		var tmp = "/tmp/"
		var ext
		if is_vertex then
			ext = "vert"
		else ext = "frag"
		var path = tmp / "nit_shader." + ext

		shader.write_to_file path

		# Execute the validator
		var proc_validator = new ProcessReader("glslangValidator", path)
		proc_validator.wait
		var lines = proc_validator.read_all.split('\n')
		proc_validator.close

		# Parse errors
		var regex = "[A-Z]+: ([0-9]+):([0-9]+): (.*)".to_re
		for line in lines do
			var match = line.search(regex)

			# Does it match an error?
			# If not, then it should be the summary
			if match != null then
				var shader_line_no = match.subs[1].to_s.to_i
				var msg = match.subs[2].to_s

				var line_start = nstring.location.line_start + shader_line_no
				var char_start = 0
				var char_end = 0
				var loc = new Location(nat.location.file,
					line_start, line_start,
					char_start, char_end)

				toolcontext.warning(loc, "glslvalidator",
					"Shader error on {msg}")
			end
		end
	end
end
