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
module android_platform

import platform
import abstract_compiler
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

	redef fun supports_libunwind do return false

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
		var short_project_name = compiler.mainmodule.name
		var release = toolcontext.opt_release.value

		var app_name = project.name
		if app_name == null then app_name = compiler.mainmodule.name

		var app_package = project.java_package
		if app_package == null then app_package = "org.nitlanguage.{short_project_name}"

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
		var extra_java_files = compiler.mainmodule.extra_java_files
		if extra_java_files != null then for file in extra_java_files do
			var path = file.filename
			path.file_copy_to("{dir}/{path.basename("")}")
		end

		## Generate delagating makefile
		dir = "{android_project_root}/jni/"
		"""
include $(call all-subdir-makefiles)
		""".write_to_file("{dir}/Android.mk")

		### generate makefile into "{compile_dir}/Android.mk"
		dir = compile_dir
		"""
LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_CFLAGS	:= -D ANDROID
LOCAL_MODULE    := main
LOCAL_SRC_FILES := \\
{{{cfiles.join(" \\\n")}}}
LOCAL_LDLIBS    := -llog -landroid -lEGL -lGLESv1_CM -lz
LOCAL_STATIC_LIBRARIES := android_native_app_glue png

include $(BUILD_SHARED_LIBRARY)

$(call import-module,android/native_app_glue)
		""".write_to_file("{dir}/Android.mk")

		### generate AndroidManifest.xml
		dir = android_project_root
		"""<?xml version="1.0" encoding="utf-8"?>
<!-- BEGIN_INCLUDE(manifest) -->
<manifest xmlns:android="http://schemas.android.com/apk/res/android"
        package="{{{app_package}}}"
        android:versionCode="{{{project.version_code}}}"
        android:versionName="{{{app_version}}}">

    <!-- This is the platform API where NativeActivity was introduced. -->
    <uses-sdk
        android:minSdkVersion="{{{app_min_api}}}"
        android:targetSdkVersion="{{{app_target_api}}}"
        {{{app_max_api}}} />

    <application
		android:label="@string/app_name"
		android:hasCode="true"
		android:debuggable="{{{not release}}}">

        <!-- Our activity is the built-in NativeActivity framework class.
             This will take care of integrating with our NDK code. -->
        <activity android:name="android.app.NativeActivity"
                android:label="@string/app_name"
                android:theme="@android:style/Theme.NoTitleBar.Fullscreen"
                android:configChanges="orientation|keyboardHidden"
                android:screenOrientation="portrait"
                {{{icon_declaration}}}>
            <!-- Tell NativeActivity the name of or .so -->
            <meta-data android:name=\"{{{app_package}}}\"
                    android:value=\"{{{app_name}}}\" />
            <intent-filter>
                <action android:name="android.intent.action.MAIN" />
                <category android:name="android.intent.category.LAUNCHER" />
            </intent-filter>
        </activity>

{{{project.manifest_application_lines.join("\n")}}}

    </application>

{{{project.manifest_lines.join("\n")}}}

</manifest>
<!-- END_INCLUDE(manifest) -->
		""".write_to_file("{dir}/AndroidManifest.xml")

		### Link to png sources
		# libpng is not available on Android NDK
		# FIXME make obtionnal when we have alternatives to mnit
		var nit_dir = toolcontext.nit_dir
		var share_dir =  "{nit_dir or else ""}/share/"
		if nit_dir == null or not share_dir.file_exists then
			print "Android project error: Nit share directory not found, please use the environment variable NIT_DIR"
			exit 1
		end
		share_dir = share_dir.realpath
		var target_png_dir = "{android_project_root}/jni/png"
		if not target_png_dir.file_exists then
			toolcontext.exec_and_check(["ln", "-s", "{share_dir}/png/", target_png_dir], "Android project error")
		end

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

		### copy resources  (for android)
		# This will be accessed from `android_project_root`
		var res_dir
		if compiler.mainmodule.location.file != null then
			# it is a real file, use "{file}/../res"
			res_dir = "{compiler.mainmodule.location.file.filename.dirname}/../res"
		else
			# probably used -m, use "."
			res_dir = "res"
		end
		if res_dir.file_exists then
			# copy the res folder to .nit_compile
			res_dir = res_dir.realpath
			var target_res_dir = "{android_project_root}"
			toolcontext.exec_and_check(["cp", "-R", res_dir, target_res_dir], "Android project error")
		end

		if not res_dir.file_exists or not "{res_dir}/values/strings.xml".file_exists then
			# Create our own custom `res/values/string.xml` with the App name
"""<?xml version="1.0" encoding="utf-8"?>
<resources>
    <string name="app_name">{{{app_name}}}</string>
</resources>""".write_to_file "{dir}/res/values/strings.xml"
		end
	end

	redef fun write_makefile(compiler, compile_dir, cfiles)
	do
		# Do nothing, already done in `write_files`
	end

	redef fun compile_c_code(compiler, compile_dir)
	do
		var android_project_root = android_project_root.as(not null)
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

		var src_apk_suffix
		if release then
			src_apk_suffix = "release-unsigned"
		else src_apk_suffix = "debug"

		toolcontext.exec_and_check(["mv", "{android_project_root}/bin/{compiler.mainmodule.name}-{src_apk_suffix}.apk", outname], "Android project error")
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
