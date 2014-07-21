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
private import annotation

# Metadata associated to an Android project
class AndroidProject
	# Name of the resulting application
	var name: nullable String = null

	# Java package used to identify the APK
	var java_package: nullable String = null

	# Version of the Android application and APK
	var version: nullable String = null

	# Numerical version code of the Android application and APK
	var version_code: Int = 0

	# Custom lines to add to the AndroidManifest.xml in the <manifest> node
	var manifest_lines = new Array[String]

	# Custom lines to add to the AndroidManifest.xml in the <application> node
	var manifest_application_lines = new Array[String]

	# Minimum API level required for the application to run
	var min_api: nullable Int = null

	# Build target API level
	var target_api: nullable Int = null

	# Maximum API level on which the application will be allowed to run
	var max_api: nullable Int = null

	redef fun to_s do return """
name: {{{name or else "null"}}}
namespace: {{{java_package or else "null"}}}
version: {{{version or else "null"}}}"""
end

redef class ModelBuilder
	# Get the `AndroidProject` gathered from `mmodule` and its importations
	fun android_project_for(mmodule: MModule): AndroidProject
	do
		var project = new AndroidProject

		var annot = priority_annotation_on_modules("app_name", mmodule)
		if annot != null then project.name = annot.arg_as_string(self)

		annot =  priority_annotation_on_modules("app_version", mmodule)
		if annot != null then project.version =  annot.as_version(self)

		annot = priority_annotation_on_modules("java_package", mmodule)
		if annot != null then project.java_package = annot.arg_as_string(self)

		var annots = collect_annotations_on_modules("min_api_version", mmodule)
		for an in annots do project.min_api = an.arg_as_int(self)

		annots = collect_annotations_on_modules("max_api_version", mmodule)
		for an in annots do project.max_api = an.arg_as_int(self)

		annots = collect_annotations_on_modules("target_api_version", mmodule)
		for an in annots do project.target_api = an.arg_as_int(self)

		annots = collect_annotations_on_modules("android_manifest", mmodule)
		for an in annots do project.manifest_lines.add an.arg_as_string(self) or else ""

		annots = collect_annotations_on_modules("android_manifest_application", mmodule)
		for an in annots do project.manifest_application_lines.add an.arg_as_string(self) or else ""

		# Get the date and time (down to the minute) as string
		var local_time = new Tm.localtime
		var local_time_s = local_time.strftime("%y%m%d%H%M")
		project.version_code = local_time_s.to_i

		toolcontext.check_errors

		return project
	end

	# Recursively collect all annotations by name in `mmodule` and its importations (direct and indirect)
	private fun collect_annotations_on_modules(name: String, mmodule: MModule): Array[AAnnotation]
	do
		var annotations = new Array[AAnnotation]
		for mmod in mmodule.in_importation.greaters do
			if not mmodule2nmodule.keys.has(mmod) then continue
			var amod = mmodule2nmodule[mmod]
			var module_decl = amod.n_moduledecl
			if module_decl == null then continue
			var aas = module_decl.collect_annotations_by_name(name)
			annotations.add_all aas
		end
		return annotations
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
	# Returns a version string (example: "1.5.6b42a7c") from an annotation `version(1, 5, git_revision)`.
	#
	# The user can enter as many fields as needed. The call to `git_revision` will be replaced by the short
	# revision number. If the working tree is dirty, it will append another field with "d" for dirty.
	private fun as_version(modelbuilder: ModelBuilder): String
	do
		var annotation_name = n_atid.n_id.text
		var version_fields = new Array[Object]

		var args = n_args
		var platform_name
		if args.length < 1 then
			modelbuilder.error(self, "Annotation error: \"{name}\" expects at least a single argument.")
			return ""
		else
			for arg in args do
				var format_error = "Annotation error: \"{name}\" expects its arguments to be of type Int or a call to `git_revision`"
				
				var value
				value = arg.as_int
				if value != null then
					version_fields.add value
					continue
				end

				value = arg.as_string
				if value != null then
					version_fields.add value
				end

				value = arg.as_id
				if value == "git_revision" then
					# Get Git short revision
					var proc = new IProcess("git", "rev-parse", "--short", "HEAD")
					proc.wait
					assert proc.status == 0
					var lines = proc.read_all
					var revision = lines.split("\n").first

					# Is it dirty?
					# If not, the return of `git diff --shortstat` is an empty line
					proc = new IProcess("git", "diff-index", "--quiet", "HEAD")
					proc.wait
					var dirty = proc.status != 0
					if dirty then revision += ".d"

					version_fields.add revision
					continue
				end

				modelbuilder.error(self, format_error)
				return ""
			end
		end

		return version_fields.join(".")
	end
end
