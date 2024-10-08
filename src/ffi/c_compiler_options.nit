# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# Offers the annotations `cflags` and `ldflags` to specify
# options for the C compiler directly or indirectly. Differs from the `pkgconfig`
# annotation by the separation of the options between the compiler and linker.
module c_compiler_options

import c
import cpp
private import annotation
private import platform

redef class ToolContext
	# Phase to find `cflags`, `ldflags` and `cppflags`
	var cflags_phase: Phase = new CCompilerOptionsPhase(self, [platform_phase])
end

private class CCompilerOptionsPhase
	super Phase

	fun compiler_annotation_name: String do return "cflags"
	fun linker_annotation_name: String do return "ldflags"
	fun cpp_compiler_annotation_name: String do return "cppflags"

	redef fun process_annotated_node(nmoduledecl, nat)
	do
		# Skip if we are not interested
		var annotation_name = nat.name
		if annotation_name != compiler_annotation_name and
		   annotation_name != linker_annotation_name and
		   annotation_name != cpp_compiler_annotation_name then return

		# Do some validity checks and print errors if the annotation is used incorrectly
		var modelbuilder = toolcontext.modelbuilder

		if not nmoduledecl isa AModuledecl then
			modelbuilder.error(nat, "Syntax Error: only the declaration of modules may use `{annotation_name}`.")
			return
		end

		var args = nat.n_args
		if args.is_empty then
			modelbuilder.error(nat, "Syntax Error: `{annotation_name}` expects at least one argument.")
			return
		end

		var options = new Array[CCompilerOption]
		for expr in args do
			if expr isa AStringFormExpr then
				var text = expr.collect_text
				text = text.substring(1, text.length-2)
				var opt = new DirectCCompilerOption(text)
				options.add(opt)
			else if expr isa ACallExpr then
				# We support calls to "exec" only
				var exec_args = expr.n_args.to_a
				if expr.n_qid.n_id.text != "exec" or exec_args.is_empty then
					modelbuilder.error(nat, "Syntax Error: `{annotation_name}` accepts only calls to `exec` with the command as arguments.")
					return
				end

				var exec_args_as_strings = new Array[String]
				for exec_arg in exec_args do
					if not exec_arg isa AStringFormExpr then
						modelbuilder.error(nat, "Syntax Error: calls to `exec` expects the arguments to be String literals.")
						return
					else
						var arg_string = exec_arg.collect_text
						arg_string = arg_string.substring(1, arg_string.length-2)
						exec_args_as_strings.add(arg_string)
					end
				end

				var opt = new ExecCCompilerOption(exec_args_as_strings, expr)
				options.add(opt)
			else
				modelbuilder.error(nat, "Syntax Error: `{annotation_name}` expects its arguments to be the name of the package as String literals.")
				return
			end
		end

		# process calls to external command
		var simplified_options = new Array[DirectCCompilerOption]
		for opt in options do
			if opt isa ExecCCompilerOption then
				# prepare to execute command
				var cmd_args = opt.command
				var proc
				if cmd_args.length == 1 then
					proc = new ProcessReader.from_a(cmd_args[0], new Array[String])
				else if cmd_args.length > 1 then
					var rest_args = cmd_args.subarray(1, cmd_args.length-1)
					proc = new ProcessReader.from_a(cmd_args[0], rest_args)
				else abort

				# wait for its completion
				proc.wait

				# check result
				var status = proc.status
				if status != 0 then
					modelbuilder.error(opt.exec_node, "Error: something went wrong when executing the argument of `{annotation_name}`, make sure the command is valid.")
					return
				end

				# process result
				var result = proc.read_all.replace("\n", " ")
				if result.is_empty then
					modelbuilder.error(opt.exec_node, "Error: got no result from the command, make sure it is valid.")
					return
				end
				simplified_options.add(new DirectCCompilerOption(result))
			else
				assert opt isa DirectCCompilerOption
				simplified_options.add(opt)
			end
		end

		# Retrieve module
		var mmodule = nmoduledecl.parent.as(AModule).mmodule.as(not null)

		# Get target platform from annotation on annotation
		var platform = ""

		## Is there an imported platform?
		var target_platform = mmodule.target_platform
		if target_platform != null then
			platform = target_platform.name or else ""
		end

		## Is the platform declared explicitly?
		var annots = nat.n_annotations
		if annots != null then
			var items = annots.n_items
			if items.length > 1 then
				modelbuilder.error(annots, "Syntax Error: `{annotation_name}` accepts only a single annotation, the platform name.")
				return
			end
			assert items.length == 1

			var item = items.first
			platform = item.name
		end

		# Store the flags in the module
		for opt in simplified_options do
			var arg = opt.option
			if annotation_name == compiler_annotation_name then
				mmodule.cflags.add_one(platform, arg)
			else if annotation_name == linker_annotation_name then
				mmodule.ldflags.add_one(platform, arg)
			else if annotation_name == cpp_compiler_annotation_name then
				mmodule.cppflags.add_one(platform, arg)
			else abort
		end
	end

end

abstract class CCompilerOption
end

class DirectCCompilerOption
	super CCompilerOption

	var option: String
end

class ExecCCompilerOption
	super CCompilerOption

	var command: Array[String]
	var exec_node: ACallExpr
end
