# This file is part of NIT ( http://www.nitlanguage.org )
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

# Compile programs for the iOS platform
module ios

import platform
import compiler::abstract_compiler
import xcode_templates
import app_annotations

redef class ToolContext
	redef fun platform_from_name(name)
	do
		if name == "ios" then return new IOSPlatform
		return super
	end
end

private class IOSPlatform
	super Platform

	redef fun supports_libunwind do return false
	redef fun supports_libgc do return false
	redef fun toolchain(toolcontext, compiler) do return new IOSToolchain(toolcontext, compiler)
end

private class IosProject
	super AppProject

	redef fun namespace do return super.to_camel_case
end

private class IOSToolchain
	super MakefileToolchain

	# Root of the iOS project, usually `.nit_compile/ios/`
	var ios_project_root: String is noinit

	# `app.nit` project for the current compilation target
	var app_project = new IosProject(compiler.modelbuilder, compiler.mainmodule) is lazy

	redef fun default_outname do return "{super}.app"

	# Compile C files in `ios_project_root/app_project.name`
	redef fun compile_dir
	do
		ios_project_root = super/"ios"
		return ios_project_root/app_project.short_name
	end

	redef fun write_files(compile_dir, cfiles)
	do
		# Clear the project directory before writing anything
		if ios_project_root.file_exists then ios_project_root.rmdir
		compile_dir.mkdir

		super
	end

	redef fun write_makefile(compile_dir, cfiles)
	do
		var project_name = app_project.short_name

		# Create an XCode project directory
		var dir = ios_project_root/project_name+".xcodeproj"
		if not dir.file_exists then dir.mkdir

		# Create a PBX project file
		var pbx = new PbxprojectTemplate(project_name)

		## Register all source files
		for file in cfiles do pbx.add_file new PbxFile(file)
		for file in compiler.extern_bodies do
			pbx.add_file new PbxFile(file.filename.basename(""))
		end

		## TODO Register asset files

		pbx.write_to_file dir/"project.pbxproj"

		# Create the plist in the same directory as the generated C code
		if not compile_dir.file_exists then compile_dir.mkdir
		var plist = new PlistTemplate(app_project.name, app_project.namespace,
			app_project.version, app_project.version_code.to_s)
		plist.write_to_file compile_dir/"Info.plist"
	end

	redef fun compile_c_code(compile_dir)
	do
		var project_name = app_project.short_name
		var release = toolcontext.opt_release.value
		var outfile = outfile(compiler.mainmodule)

		# Compile with `xcodebuild`
		#
		# TODO support more than the iPhone and the simulator.
		var args = ["sh", "-c", "cd {ios_project_root}; " +
			"xcodebuild -target '{project_name}' " +
			"-destination 'platform=iOS Simulator,name=iPhone' " +
			"-configuration {if release then "Release" else "Debug"} " +
			"-sdk iphonesimulator build"]
		toolcontext.exec_and_check(args, "iOS project error")

		# Move compiled app to destination
		if outfile.file_exists then outfile.rmdir
		args = ["mv", "{ios_project_root}/build/Debug-iphonesimulator/{project_name}.app", outfile]
		toolcontext.exec_and_check(args, "iOS project error")
	end
end
