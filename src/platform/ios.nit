# This file is part of NIT ( https://nitlanguage.org )
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
	redef fun supports_libgc do return true
	redef fun toolchain(toolcontext, compiler) do return new IOSToolchain(toolcontext, compiler)
end

private class IosProject
	super AppProject

	redef fun namespace do return super.to_camel_case
end

private class IOSToolchain
	super MakefileToolchain

	# Root of the iOS project, usually `nit_compile/ios/`
	var ios_project_root: String is noinit

	# `app.nit` project for the current compilation target
	var app_project = new IosProject(compiler.modelbuilder, compiler.mainmodule) is lazy

	redef fun default_outname do return "{super}.app"

	private var bdwgc_dir: nullable String = null

	# Compile C files in `ios_project_root/app_project.name`
	redef fun compile_dir
	do
		ios_project_root = root_compile_dir/"ios"
		return ios_project_root/app_project.short_name
	end

	redef fun write_files(compile_dir, cfiles)
	do
		# Clear the project directory before writing anything
		if ios_project_root.file_exists then ios_project_root.rmdir
		compile_dir.mkdir

		# Download the libgc/bdwgc sources
		var nit_dir = toolcontext.nit_dir or else "."
		var share_dir = (nit_dir/"share").realpath
		if not share_dir.file_exists then
			print "iOS project error: Nit share directory not found, please use the environment variable NIT_DIR"
			exit 1
		end

		var bdwgc_dir = "{share_dir}/android-bdwgc/bdwgc"
		self.bdwgc_dir = bdwgc_dir
		if not bdwgc_dir.file_exists then
			toolcontext.exec_and_check(["{share_dir}/android-bdwgc/setup.sh"], "iOS project error")
		end

		super
	end

	redef fun write_makefile(compile_dir, cfiles)
	do
		var project_name = app_project.short_name

		# ---
		# project_folder (source code)

		# Create the plist in the same directory as the generated C code
		if not compile_dir.file_exists then compile_dir.mkdir
		var plist = new PlistTemplate(app_project.name, app_project.namespace,
			app_project.version, app_project.version_code.to_s)
		plist.write_to_file compile_dir/"Info.plist"

		# Copy the folder `ios/AppIcon.appiconset` from the root of the project
		var project_root = "."
		var mpackage = compiler.mainmodule.first_real_mmodule.mpackage
		if mpackage != null then
			var root = mpackage.root
			if root != null then
				var filepath = root.filepath
				if filepath != null then
					project_root = filepath
				end
			end
		end

		# Copy all resources
		var app_files = [project_root]
		app_files.add_all app_project.files

		var icons_found = false

		# Prepare the `Assets.xcassets` folder
		var target_assets_dir = compile_dir / "Assets.xcassets"
		if not target_assets_dir.file_exists then target_assets_dir.mkdir
		"""
{
  "info" : {
	"version" : 1,
	"author" : "nitc"
  }
}""".write_to_file target_assets_dir / "Contents.json"

		(compile_dir / "assets").mkdir

		for path in app_files do

			# Icon
			var icon_dir = path / "ios" / "AppIcon.appiconset"
			if icon_dir.file_exists then
				icons_found = true


				# copy the res folder to the compile dir
				icon_dir = icon_dir.realpath
				toolcontext.exec_and_check(["cp", "-R", icon_dir, target_assets_dir], "iOS project error")
			end

			# Assets
			var assets_dir = path / "assets"
			if assets_dir.file_exists then
				assets_dir = assets_dir.realpath
				toolcontext.exec_and_check(["cp", "-r", assets_dir, compile_dir], "iOS project error")
			end
		end

		# ---
		# project_folder.xcodeproj (projet meta data)

		# Create an XCode project directory
		var dir = ios_project_root/project_name+".xcodeproj"
		if not dir.file_exists then dir.mkdir

		# Create a PBX project file
		var pbx = new PbxprojectTemplate(project_name)

		## Register all source files
		for file in cfiles do pbx.add_file new PbxFile(file)
		for file in compiler.extern_bodies do
			pbx.add_file new PbxFile(file.filename.basename)
		end

		# GC
		if compiler.target_platform.supports_libgc then
			var bdwgc_dir = bdwgc_dir
			assert bdwgc_dir != null

			pbx.cflags = "-I '{bdwgc_dir}/include/' -I '{bdwgc_dir}/libatomic_ops/src' -fno-strict-aliasing " +
			"-DWITH_LIBGC -DNO_EXECUTE_PERMISSION -DALL_INTERIOR_POINTERS -DGC_NO_THREADS_DISCOVERY -DNO_DYLD_BIND_FULLY_IMAGE " +
			"-DGC_DISABLE_INCREMENTAL -DGC_THREADS -DUSE_MMAP -DUSE_MUNMAP -DGC_GCJ_SUPPORT -DJAVA_FINALIZATION "

			var gc_file = new PbxFile("{bdwgc_dir}/extra/gc.c")
			gc_file.cflags = "-Wno-tautological-pointer-compare"
			pbx.add_file gc_file
		end

		# Basic storyboard, mainly to have the right screen size
		var launch_screen_storyboard = new LaunchScreenStoryboardTemplate
		launch_screen_storyboard.title = app_project.name
		launch_screen_storyboard.subtitle = "app.nit"
		launch_screen_storyboard.write_to_file ios_project_root / "LaunchScreen.storyboard"

		# Register the Assets.xcassets folder in the project description
		if icons_found then
			var xcassets = new PbxFile("Assets.xcassets")
			pbx.add_file xcassets
		end

		pbx.write_to_file dir / "project.pbxproj"
	end

	redef fun compile_c_code(compile_dir)
	do
		var project_name = app_project.short_name
		var release = toolcontext.opt_release.value
		var outfile = outfile(compiler.mainmodule)

		# Compile with `xcodebuild`
		#
		# TODO support more than the iPhone and the simulator.
		var compile_mode = if release then "Release" else "Debug"
		var args = ["sh", "-c", "cd {ios_project_root}; " +
			"xcodebuild -quiet -target '{project_name}' " +
			"-destination 'platform=iOS Simulator,name=iPhone' " +
			"-configuration {compile_mode} " +
			 "ONLY_ACTIVE_ARCH=NO "+
			"-sdk iphonesimulator build"]
		toolcontext.exec_and_check(args, "iOS project error")

		# Move compiled app to destination
		if outfile.file_exists then
			var error = outfile.rmdir
			if error != null then
				print_error error
				exit 1
			end
		end

		args = ["mv", "{ios_project_root}/build/{compile_mode}-iphonesimulator/{project_name}.app", outfile]
		toolcontext.exec_and_check(args, "iOS project error")
	end
end
