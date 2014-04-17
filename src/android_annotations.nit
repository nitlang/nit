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

# Annotations to gather metadata on Android projects. Get the metadata
# by calling `ModelBuilder::android_project_for`.
module android_annotations

import parser_util
import modelbuilder
import modelize_property
import literal
import typing

# Metadata associated to an Android project
class AndroidProject
	# Name of the resulting application
	var name: nullable String = null

	# Java package used to identify the APK
	var java_package: nullable String = null

	redef fun to_s do return """
name: {{{name or else "null"}}}
namespace: {{{java_package or else "null"}}}"""
end

redef class ModelBuilder
	# Get the `AndroidProject` gathered from `mmodule` and its importations
	fun android_project_for(mmodule: MModule): AndroidProject
	do
		var project = new AndroidProject

		var annot = priority_annotation_on_modules("app_name", mmodule)
		if annot != null then project.name = annot.arg_as_string(self)

		annot = priority_annotation_on_modules("java_package", mmodule)
		if annot != null then project.java_package = annot.arg_as_string(self)

		toolcontext.check_errors

		return project
	end

	# Get an annotation by name from `mmodule` and its super modules. Will recursively search
	# in imported module to find the "latest" declaration and detects priority conflicts.
	private fun priority_annotation_on_modules(name: String, mmodule: MModule): nullable AAnnotation
	do
		if mmodule2nmodule.keys.has(mmodule) then
			var amod = mmodule2nmodule[mmodule]
			var module_decl = amod.n_moduledecl
			if module_decl != null then
				var annotations = module_decl.collect_annotations_by_name(name)
				if annotations.length == 1 then
					return annotations.first
				else if annotations.length > 1 then
					toolcontext.error(mmodule.location,
						"Multiple declaration of annotation {name}, it must be defined only once.")
				end
			end
		end

		var sources = new Array[MModule]
		var annotations = null
		for mmod in mmodule.in_importation.direct_greaters do
			var res = priority_annotation_on_modules(name, mmod)
			if res != null then
				sources.add mmod
				annotations = res
			end
		end
		if sources.length > 1 then
			toolcontext.error(mmodule.location,
				"Priority conflict on annotation {name}, it has been defined in: {sources.join(", ")}")
			return null
		end
		return annotations
	end
end

redef class AAnnotation
	# Get the single argument of `self` as a `String`. Raise error on any inconsistency.
	private fun arg_as_string(modelbuilder: ModelBuilder): String
	do
		var annotation_name = n_atid.n_id.text
		var format_error = "Annotation error: \"{annotation_name}\" expects a single String as argument."

		var args = n_args
		var platform_name
		if args.length != 1 then
			modelbuilder.error(self, format_error)
			return ""
		else
			var arg = args.first
			
			if not arg isa AExprAtArg then
				modelbuilder.error(self, format_error)
				return ""
			end

			var expr = arg.n_expr
			if not expr isa AStringFormExpr then
				modelbuilder.error(self, format_error)
				return ""
			end
			return expr.value.as(not null)
		end
	end
end
