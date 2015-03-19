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

# Compile program for the Android platform
module android

import platform
import compiler::abstract_compiler
import ffi
intrude import ffi::extra_java_files
import android_annotations

redef class ToolContext
	redef fun platform_from_name(name)
	do
		if name == "android" then return new AndroidPlatform
		return super
	end
end

class AndroidPlatform
	super Platform

	redef fun name do return "android"

	redef fun supports_libgc do return true

	redef fun supports_libunwind do return false

	redef fun supports_linker_script do return false

	redef fun toolchain(toolcontext) do return new AndroidToolchain(toolcontext)
end

class AndroidToolchain
	super MakefileToolchain

	var android_project_root: nullable String = null

	redef fun compile_dir
	do
		var android_project_root = "{super}/android/"
		self.android_project_root = android_project_root
		return "{android_project_root}/jni/nit_compile/"
	end

	redef fun default_outname(mainmodule) do return "{mainmodule.name}.apk"

	redef fun write_files(compiler, compile_dir, cfiles)
	do
		var android_project_root = android_project_root.as(not null)
		var project = toolcontext.modelbuilder.android_project_for(compiler.mainmodule)
		var short_project_name = compiler.mainmodule.name.replace("-", "_")
		var release = toolcontext.opt_release.value

		var app_name = project.name
		if app_name == null then app_name = compiler.mainmodule.name
		if not release then app_name += " Debug"

		var app_package = project.java_package
		if app_package == null then app_package = "org.nitlanguage.{short_project_name}"
		if not release then app_package += "_debug"

		var app_version = project.version
		if app_version == null then app_version = "1.0"

		var app_min_api = project.min_api
		if app_min_api == null then app_min_api = 10

		var app_target_api = project.target_api
		if app_target_api == null then app_target_api = app_min_api

		var app_max_api = ""
		if project.max_api != null then app_max_api = "android:maxSdkVersion=\"{project.max_api.as(not null)}\""

		# Clear the previous android project, so there is no "existing project warning"
		# or conflict between Java files of different projects
		if android_project_root.file_exists then android_project_root.rmdir

		var args = ["android", "-s",
			"create", "project",
			"--name", short_project_name,
			"--target", "android-{app_target_api}",
			"--path", android_project_root,
			"--package", app_package,
			"--activity", short_project_name]
		toolcontext.exec_and_check(args, "Android project error")

		# create compile_dir
		var dir = "{android_project_root}/jni/"
		if not dir.file_exists then dir.mkdir

		dir = compile_dir
		if not dir.file_exists then dir.mkdir

		# compile normal C files
		super(compiler, compile_dir, cfiles)

		# Gather extra C files generated elsewhere than in super
		for f in compiler.extern_bodies do
			if f isa ExternCFile then cfiles.add(f.filename.basename(""))
		end

		# Is there an icon?
		var resolutions = ["ldpi", "mdpi", "hdpi", "xhdpi", "xxhdpi", "xxxhdpi"]
		var icon_available = false
		for res in resolutions do
			var path = "res/drawable-{res}/icon.png"
			if path.file_exists then
				icon_available = true
				break
			end
		end

		var icon_declaration
		if icon_available then
			icon_declaration = "android:icon=\"@drawable/icon\""
		else icon_declaration = ""

		# Also copy over the java files
		dir = "{android_project_root}/src/"
		for mmodule in compiler.mainmodule.in_importation.greaters do
			var extra_java_files = mmodule.extra_java_files
			if extra_java_files != null then for file in extra_java_files do
				var path = file.filename
				path.file_copy_to(dir/path.basename(""))
			end
		end

		## Generate Application.mk
		dir = "{android_project_root}/jni/"
		"""
APP_ABI := armeabi armeabi-v7a x86 mips
APP_PLATFORM := android-{{{app_target_api}}}
""".write_to_file "{dir}/Application.mk"

		## Generate delegating makefile
		"""
include $(call all-subdir-makefiles)
""".write_to_file "{dir}/Android.mk"

		# Gather ldflags for Android
		var ldflags = new Array[String]
		var platform_name = "android"
		for mmodule in compiler.mainmodule.in_importation.greaters do
			if mmodule.ldflags.keys.has(platform_name) then
				ldflags.add_all mmodule.ldflags[platform_name]
			end
		end

		### generate makefile into "{compile_dir}/Android.mk"
		dir = compile_dir
		"""
LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_CFLAGS	:= -D ANDROID -D WITH_LIBGC
LOCAL_MODULE    := main
LOCAL_SRC_FILES := \\
{{{cfiles.join(" \\\n")}}}
LOCAL_LDLIBS    := {{{ldflags.join(" ")}}} $(TARGET_ARCH)/libgc.a
LOCAL_STATIC_LIBRARIES := android_native_app_glue png

include $(BUILD_SHARED_LIBRARY)

$(call import-module,android/native_app_glue)
		""".write_to_file("{dir}/Android.mk")

		### generate AndroidManifest.xml
		dir = android_project_root
		var manifest_file = new FileWriter.open("{dir}/AndroidManifest.xml")
		manifest_file.write """
<?xml version="1.0" encoding="utf-8"?>
<!-- BEGIN_INCLUDE(manifest) -->
<manifest xmlns:android="http://schemas.android.com/apk/res/android"
        package="{{{app_package}}}"
        android:versionCode="{{{project.version_code}}}"
        android:versionName="{{{app_version}}}">

    <uses-sdk
        android:minSdkVersion="{{{app_min_api}}}"
        android:targetSdkVersion="{{{app_target_api}}}"
        {{{app_max_api}}} />

    <application
		android:label="@string/app_name"
		android:hasCode="true"
		android:debuggable="{{{not release}}}"
		{{{icon_declaration}}}
		android:configChanges="mcc|mnc|locale|touchscreen|keyboard|keyboardHidden|navigation|screenLayout|fontScale|uiMode|orientation">
"""

		for activity in project.activities do
			manifest_file.write """
        <activity android:name="{{{activity}}}"
                android:label="@string/app_name"
                {{{project.manifest_activity_attributes.join("\n")}}}
                {{{icon_declaration}}}>
            <intent-filter>
                <action android:name="android.intent.action.MAIN" />
                <category android:name="android.intent.category.LAUNCHER" />
            </intent-filter>
        </activity>
"""
		end

		manifest_file.write """
{{{project.manifest_application_lines.join("\n")}}}

    </application>

{{{project.manifest_lines.join("\n")}}}

</manifest>
<!-- END_INCLUDE(manifest) -->
"""

		### Link to png sources
		# libpng is not available on Android NDK
		# FIXME make obtionnal when we have alternatives to mnit
		var nit_dir = toolcontext.nit_dir
		var share_dir =  nit_dir/"share/"
		if not share_dir.file_exists then
			print "Android project error: Nit share directory not found, please use the environment variable NIT_DIR"
			exit 1
		end
		share_dir = share_dir.realpath
		var target_png_dir = "{android_project_root}/jni/png"
		if not target_png_dir.file_exists then
			toolcontext.exec_and_check(["ln", "-s", "{share_dir}/png/", target_png_dir], "Android project error")
		end

		# Ensure that android-setup-libgc.sh has been executed
		if not "{share_dir}/libgc/arm/lib".file_exists then
			toolcontext.exec_and_check(["{share_dir}/libgc/android-setup-libgc.sh"], "Android project error")
		end

		# Copy GC files
		for arch in ["arm", "x86", "mips"] do
			dir = android_project_root/arch
			dir.mkdir
			toolcontext.exec_and_check(["cp", "{share_dir}/libgc/{arch}/lib/libgc.a",
				dir/"libgc.a"], "Android project error")
		end

		toolcontext.exec_and_check(["ln", "-s", "{share_dir}/libgc/arm/include/gc/",
			"{android_project_root}/jni/nit_compile/gc"], "Android project error")

		### Link to assets (for mnit and others)
		# This will be accessed from `android_project_root`
		var assets_dir
		if compiler.mainmodule.location.file != null then
			# it is a real file, use "{file}/../assets"
			assets_dir = "{compiler.mainmodule.location.file.filename.dirname}/../assets"
		else
			# probably used -m, use "."
			assets_dir = "assets"
		end
		if assets_dir.file_exists then
			assets_dir = assets_dir.realpath
			var target_assets_dir = "{android_project_root}/assets"
			if not target_assets_dir.file_exists then
				toolcontext.exec_and_check(["ln", "-s", assets_dir, target_assets_dir], "Android project error")
			end
		end

		### Copy resources and libs where expected by the SDK
		var project_root
		if compiler.mainmodule.location.file != null then
			# it is a real file, use "{file}/../res"
			project_root = "{compiler.mainmodule.location.file.filename.dirname}/.."
		else
			# probably used -m, use "."
			project_root = "."
		end

		# Android resources folder
		var res_dir = project_root / "res"
		if res_dir.file_exists then
			# copy the res folder to .nit_compile
			res_dir = res_dir.realpath
			toolcontext.exec_and_check(["cp", "-R", res_dir, android_project_root], "Android project error")
		end

		if not res_dir.file_exists or not "{res_dir}/values/strings.xml".file_exists then
			# Create our own custom `res/values/string.xml` with the App name
"""<?xml version="1.0" encoding="utf-8"?>
<resources>
    <string name="app_name">{{{app_name}}}</string>
</resources>""".write_to_file "{android_project_root}/res/values/strings.xml"
		end

		# Android libs folder
		var libs_dir = project_root / "libs"
		if libs_dir.file_exists then
			toolcontext.exec_and_check(["cp", "-r", libs_dir, android_project_root], "Android project error")
		end
	end

	redef fun write_makefile(compiler, compile_dir, cfiles)
	do
		# Do nothing, already done in `write_files`
	end

	redef fun compile_c_code(compiler, compile_dir)
	do
		var android_project_root = android_project_root.as(not null)
		var short_project_name = compiler.mainmodule.name.replace("-", "_")
		var release = toolcontext.opt_release.value

		# Compile C code (and thus Nit)
		toolcontext.exec_and_check(["ndk-build", "-s", "-j", "-C", android_project_root], "Android project error")

		# Generate the apk
		var args = ["ant", "-q", "-f", android_project_root+"/build.xml"]
		if release then
			args.add "release"
		else args.add "debug"
		toolcontext.exec_and_check(args, "Android project error")

		# Move the apk to the target
		var outname = outfile(compiler.mainmodule)

		if release then
			var apk_path = "{android_project_root}/bin/{short_project_name}-release-unsigned.apk"

			# Sign APK
			var keystore_path= "KEYSTORE".environ
			var key_alias= "KEY_ALIAS".environ
			var tsa_server= "TSA_SERVER".environ

			if key_alias.is_empty then
				toolcontext.fatal_error(null,
					"Fatal Error: the environment variable `KEY_ALIAS` must be set to use the `--release` option on Android projects.")
			end

			args = ["jarsigner", "-sigalg", "MD5withRSA", "-digestalg", "SHA1", apk_path, key_alias]

			## Use a custom keystore
			if not keystore_path.is_empty then args.add_all(["-keystore", keystore_path])

			## Use a TSA server
			if not tsa_server.is_empty then args.add_all(["-tsa", tsa_server])

			toolcontext.exec_and_check(args, "Android project error")

			# Clean output file
			if outname.to_path.exists then outname.to_path.delete

			# Align APK
			args = ["zipalign", "4", apk_path, outname]
			toolcontext.exec_and_check(args, "Android project error")
		else
			# Move to the expected output path
			args = ["mv", "{android_project_root}/bin/{short_project_name}-debug.apk", outname]
			toolcontext.exec_and_check(args, "Android project error")
		end
	end
end

redef class JavaClassTemplate
	redef fun write_to_files(compdir)
	do
		var jni_path = "jni/nit_compile/"
		if compdir.has_suffix(jni_path) then
			var path = "{compdir.substring(0, compdir.length-jni_path.length)}/src/"
			return super(path)
		else return super
	end
end
