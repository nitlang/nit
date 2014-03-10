# This file is part of NIT ( http://www.nitlanguage.org )t
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

redef class ToolContext
	redef fun platform_from_name(name)
	do
		if name == "android" then return new AndroidPlatform
		return super
	end

	fun exec_and_check(args: Array[String])
	do
		var prog = args.first
		args.remove_at 0

		# Is the wanted program available?
		var proc_which = new IProcess.from_a("which", [prog])
		proc_which.wait
		var res = proc_which.status
		if res != 0 then
			print "Android project error: executable \"{prog}\" not found"
			exit 1
		end

		# Execute the wanted program
		var proc = new Process.from_a(prog, args)
		proc.wait
		res = proc.status
		if res != 0 then
			print "Android project error: execution of \"{prog} {args.join(" ")}\" failed"
			exit 1
		end
	end
end

class AndroidPlatform
	super Platform

	redef fun toolchain(toolcontext) do return new AndroidToolchain(toolcontext)
end

class AndroidToolchain
	super MakefileToolchain

	var android_project_root: String

	redef fun compile_dir
	do
		var normal_compile_dir = super
		android_project_root = normal_compile_dir
		return "{normal_compile_dir}/jni/nit_compile/"
	end

	redef fun write_files(compiler, compile_dir, cfiles)
	do
		var app_name = compiler.mainmodule.name
		var app_package = "org.nitlanguage.{app_name}"
		var app_version = "0.1"

		var args = ["android", "-s", "create", "project", "--name", app_name,
			"--target", "android-10", "--path", android_project_root,
			"--package", app_package, "--activity", app_name]
		toolcontext.exec_and_check(args)

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

		## Generate delagating makefile
		dir = "{android_project_root}/jni/"
		var file = new OFStream.open("{dir}/Android.mk")
		file.write """
include $(call all-subdir-makefiles)
"""
		file.close

		### generate makefile into "{compile_dir}/Android.mk"
		dir = compile_dir
		file = new OFStream.open("{dir}/Android.mk")
		file.write """
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
"""
		file.close

		### generate AndroidManifest.xml
		dir = android_project_root
		file = new OFStream.open("{dir}/AndroidManifest.xml")
		file.write """<?xml version="1.0" encoding="utf-8"?>
<!-- BEGIN_INCLUDE(manifest) -->
<manifest xmlns:android="http://schemas.android.com/apk/res/android"
        package="{{{app_package}}}"
        android:versionCode="1"
        android:versionName="{{{app_version}}}"
	android:debuggable="true">

    <!-- This is the platform API where NativeActivity was introduced. -->
    <uses-sdk android:minSdkVersion="9" />

    <!-- This .apk has no Java code itself, so set hasCode to false. -->
    <application android:label="@string/app_name" android:hasCode="false" android:debuggable="true">

        <!-- Our activity is the built-in NativeActivity framework class.
             This will take care of integrating with our NDK code. -->
        <activity android:name="android.app.NativeActivity"
                android:label="@string/app_name"
                android:configChanges="orientation|keyboardHidden">
            <!-- Tell NativeActivity the name of or .so -->
            <meta-data android:name=\"{{{app_package}}}\"
                    android:value=\"{{{app_name}}}\" />
            <intent-filter>
                <action android:name="android.intent.action.MAIN" />
                <category android:name="android.intent.category.LAUNCHER" />
            </intent-filter>
        </activity>
    </application>

</manifest> 
<!-- END_INCLUDE(manifest) -->
"""
		file.close

		### generate res/values/strings.xml
		dir = "{android_project_root}/res/"
		if not dir.file_exists then dir.mkdir
		dir = "{dir}/values/"
		if not dir.file_exists then dir.mkdir
		file = new OFStream.open("{dir}/strings.xml")
		file.write """<?xml version="1.0" encoding="utf-8"?>
<resources>
    <string name="app_name">{{{app_name}}}</string>
</resources>"""
		file.close

		### Link to png sources
		# libpng is not available on Android NDK
		# FIXME make obtionnal when we have alternatives to mnit
		var nit_dir = "NIT_DIR".environ
		var share_dir
		if not nit_dir.is_empty then
			share_dir = "{nit_dir}/share/"
		else
			share_dir = "{sys.program_name.dirname}/../share/"
		end
		if not share_dir.file_exists then 
			print "Android project error: Nit share directory not found, please use the environment variable NIT_DIR"
			exit 1
		end
		share_dir = share_dir.realpath
		var target_png_dir = "{android_project_root}/jni/png"
		if not target_png_dir.file_exists then
			toolcontext.exec_and_check(["ln", "-s", "{share_dir}/png/", target_png_dir])
		end

		### Link to assets (for mnit and others)
		# This will be accessed from `android_project_root`
		var mainmodule_dir = compiler.mainmodule.location.file.filename.dirname
		var assets_dir = "{mainmodule_dir}/../assets"
		if not assets_dir.file_exists then assets_dir = "{mainmodule_dir}/assets"
		if assets_dir.file_exists then
			assets_dir = assets_dir.realpath
			var target_assets_dir = "{android_project_root}/assets"
			if not target_assets_dir.file_exists then
				toolcontext.exec_and_check(["ln", "-s", assets_dir, target_assets_dir])
			end
		end
	end

	redef fun write_makefile(compiler, compile_dir, cfiles)
	do
		# Do nothing, already done in `write_files`
	end

	redef fun compile_c_code(compiler, compile_dir)
	do
		# Compile C code (and thus Nit)
		toolcontext.exec_and_check(["ndk-build", "-s", "-j", "4", "-C", android_project_root])

		# Generate the apk
		toolcontext.exec_and_check(["ant", "-q", "debug", "-f", android_project_root+"/build.xml"])

		# Move the apk to the target
		var outname = toolcontext.opt_output.value
		if outname == null then outname = "{compiler.mainmodule.name}.apk"
		toolcontext.exec_and_check(["mv", "{android_project_root}/bin/{compiler.mainmodule.name}-debug.apk", outname])
	end
end
