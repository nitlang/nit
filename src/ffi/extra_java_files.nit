# This file is part of NIT ( https://nitlanguage.org ).
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

# Intro the annotation `extra_java_files` to compile extra java files
#
# It is mainly used to declare public Java classes.
module extra_java_files

import literal
import java
private import annotation

redef class ToolContext
	var extra_java_files_phase: Phase = new JavaExtraFilesPhase(self, [literal_phase])
end

redef class MModule
	# Extra Java files to compile with the module
	private var extra_java_files: nullable Array[ExtraJavaFile] = null
end

private class JavaExtraFilesPhase
	super Phase

	redef fun process_annotated_node(nmoduledecl, nat)
	do
		# Skip if we are not interested
		var annot_name = "extra_java_files"
		if nat.name != annot_name then return

		# Do some validity checks and print errors if the annotation is used incorrectly
		var modelbuilder = toolcontext.modelbuilder

		if not nmoduledecl isa AModuledecl then
			modelbuilder.error(nat, "Syntax Error: only the declaration of modules may use `{annot_name}`.")
			return
		end

		var args = nat.n_args
		if args.is_empty then
			modelbuilder.error(nat, "Syntax Error: `{annot_name}` expects at least one argument.")
			return
		end

		# retrieve module
		var nmodule = nmoduledecl.parent.as(AModule)
		var mmodule = nmodule.mmodule.as(not null)
		var java_files = mmodule.extra_java_files
		if java_files == null then
			java_files = new Array[ExtraJavaFile]
			mmodule.extra_java_files = java_files
		end

		var format_error = "Syntax Error: `{annot_name}` expects its arguments to be paths to java files."
		for arg in args do
			var name = arg.as_string
			if name == null or name.is_empty then
				modelbuilder.error(arg, format_error)
				return
			end

			var path = name.split(".").last + ".java"

			# Append specified path to directory of the Nit source file
			var source_file = nat.location.file
			if source_file != null then path = "{source_file.filename.dirname}/{path}"

			if not path.file_exists then
				modelbuilder.error(nat, "FFI with Java Error: file `{path}` not found.")
				continue
			end

			var file = new ExtraJavaFile(name, path)
			mmodule.ffi_files.add file
			java_files.add file
		end
	end
end

redef class JavaLanguage
	redef fun compile_to_files(mmodule, compdir)
	do
		super

		# Also copy over the extra Java files
		var extra_java_files = mmodule.extra_java_files
		if extra_java_files != null then for file in extra_java_files do

			var dir = compdir / file.filename.dirname
			dir.mkdir

			file.src_path.file_copy_to(compdir/file.filename)
		end
	end
end

# User supplied Java file to include with the app for use from the FFI
class ExtraJavaFile
	super JavaFile

	autoinit full_name, src_path

	redef var full_name

	# Path to the original user file
	var src_path: String

	redef fun filename do return full_name.replace(".", "/") + ".java"
end
