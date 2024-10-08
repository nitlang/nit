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

	redef fun toolchain(toolcontext, compiler) do return new AndroidToolchain(toolcontext, compiler)
end

class AndroidToolchain
	super MakefileToolchain

	var android_project_root: nullable String = null

	redef fun compile_dir
	do
		var android_project_root = "{root_compile_dir}/android/"
		self.android_project_root = android_project_root
		return "{android_project_root}/app/src/main/cpp/"
	end

	redef fun default_outname do return "{super}.apk"

	private fun share_dir: Text
	do
		var nit_dir = toolcontext.nit_dir or else "."
		return (nit_dir/"share").realpath
	end

	private fun gradlew_dir: Text do return share_dir / "android-gradlew"

	redef fun write_files(compile_dir, cfiles)
	do
		var android_project_root = android_project_root.as(not null)
		var android_app_root = android_project_root/"app"
		var project = new AndroidProject(toolcontext.modelbuilder, compiler.mainmodule)
		var release = toolcontext.opt_release.value

		# Compute the root of the project where could be assets and resources
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

		# Gather app configs
		# ---

		var app_name = project.name
		var app_package = project.namespace
		var app_version = project.version

		var app_min_api = project.min_api
		if app_min_api == null then app_min_api = 10

		var app_target_api = project.target_api
		if app_target_api == null then app_target_api = app_min_api

		var app_max_api = ""
		if project.max_api != null then app_max_api = "maxSdkVersion  {project.max_api.as(not null)}"

		# Create basic directory structure
		# ---

		android_project_root.mkdir
		android_app_root.mkdir
		(android_app_root/"libs").mkdir

		var android_app_main = android_app_root / "src/main"
		android_app_main.mkdir
		(android_app_main / "java").mkdir

		# /app/build.gradle
		# ---

		# Use the most recent build_tools_version
		var android_home = "ANDROID_HOME".environ
		if android_home.is_empty then android_home = "HOME".environ / "Android/Sdk"
		var build_tools_dir = android_home / "build-tools"
		var available_versions = build_tools_dir.files

		var build_tools_version
		if available_versions.is_empty then
			print_error "Error: found no Android build-tools, install one or set ANDROID_HOME."
			return
		else
			alpha_comparator.sort available_versions
			build_tools_version = available_versions.last
		end

		# Gather ldflags for Android
		var ldflags = new Array[String]
		var platform_name = "android"
		for mmodule in compiler.mainmodule.in_importation.greaters do
			if mmodule.ldflags.keys.has(platform_name) then
				ldflags.add_all mmodule.ldflags[platform_name]
			end
		end

		# Platform version for OpenGL ES
		var platform_version = ""
		if ldflags.has("-lGLESv3") then
			platform_version = "def platformVersion = 18"
		else if ldflags.has("-lGLESv2") then
			platform_version = "def platformVersion = 12"
		end

		# TODO make configurable client-side
		var compile_sdk_version = app_target_api

		var local_build_gradle = """
apply plugin: 'com.android.application'

{{{platform_version}}}

android {
    compileSdkVersion {{{compile_sdk_version}}}
    buildToolsVersion "{{{build_tools_version}}}"

    defaultConfig {
        applicationId "{{{app_package}}}"
        minSdkVersion {{{app_min_api}}}
        {{{app_max_api}}}
        targetSdkVersion {{{app_target_api}}}
        versionCode {{{project.version_code}}}
        versionName "{{{app_version}}}"
        ndk {
            abiFilters 'armeabi-v7a', 'x86'
        }
        externalNativeBuild {
            cmake {
                arguments "-DANDROID_TOOLCHAIN=gcc"
            }
        }
    }

    buildTypes {
        release {
            minifyEnabled false
            proguardFiles getDefaultProguardFile('proguard-android.txt'), 'proguard-rules.pro'
        }
    }

    externalNativeBuild {
        cmake {
            path "src/main/cpp/CMakeLists.txt"
        }
    }

    lintOptions {
       abortOnError false
    }
}

dependencies {
    implementation fileTree(dir: 'libs', include: ['*.jar'])
}
"""
		local_build_gradle.write_to_file "{android_project_root}/app/build.gradle"

		# TODO add 'arm64-v8a' and 'x86_64' to `abiFilters` when the min API is available

		# ---
		# Other, smaller files

		# /build.gradle
		var global_build_gradle = """
buildscript {
    repositories {
        google()
        jcenter()
    }
    dependencies {
        classpath 'com.android.tools.build:gradle:3.0.0'
    }
}

allprojects {
    repositories {
        google()
        jcenter()
    }
}
"""
		global_build_gradle.write_to_file "{android_project_root}/build.gradle"

		# /settings.gradle
		var settings_gradle = """
include ':app'
"""
		settings_gradle.write_to_file "{android_project_root}/settings.gradle"

		# /gradle.properties
		var gradle_properties = """
org.gradle.jvmargs=-Xmx1536m
"""
		gradle_properties.write_to_file "{android_project_root}/gradle.properties"

		# Insert an importation of the generated R class to all Java files from the FFI
		for mod in compiler.mainmodule.in_importation.greaters do
			var java_ffi_file = mod.java_file
			if java_ffi_file != null then java_ffi_file.add "import {app_package}.R;"
		end

		# compile normal C files
		super

		# ---
		# /app/src/main/cpp/CMakeLists.txt

		# Gather extra C files generated elsewhere than in super
		for f in compiler.extern_bodies do
			if f isa ExternCFile then cfiles.add(f.filename.basename)
		end

		# Prepare for the CMakeLists format
		var target_link_libraries = new Array[String]
		for flag in ldflags do
			if flag.has_prefix("-l") then
				target_link_libraries.add flag.substring_from(2)
			end
		end

		# Download the libgc/bdwgc sources
		var share_dir = share_dir
		if not share_dir.file_exists then
			print "Android project error: Nit share directory not found, please use the environment variable NIT_DIR"
			exit 1
		end

		var bdwgc_dir = "{share_dir}/android-bdwgc/bdwgc"
		if not bdwgc_dir.file_exists then
			toolcontext.exec_and_check(["{share_dir}/android-bdwgc/setup.sh"], "Android project error")
		end

		# Compile the native app glue lib if used
		var add_native_app_glue = ""
		if target_link_libraries.has("native_app_glue") then
			add_native_app_glue = """
add_library(native_app_glue STATIC ${ANDROID_NDK}/sources/android/native_app_glue/android_native_app_glue.c)
"""
		end

		var cmakelists = """
cmake_minimum_required(VERSION 3.4.1)

{{{add_native_app_glue}}}


# libgc/bdwgc

## The source is in the Nit repo
set(lib_src_DIR {{{bdwgc_dir}}})
set(lib_build_DIR ../libgc/outputs)
file(MAKE_DIRECTORY ${lib_build_DIR})

## Config
add_definitions("-DALL_INTERIOR_POINTERS -DGC_THREADS -DUSE_MMAP -DUSE_MUNMAP -DJAVA_FINALIZATION -DNO_EXECUTE_PERMISSION -DGC_DONT_REGISTER_MAIN_STATIC_DATA")
set(enable_threads TRUE)
set(CMAKE_USE_PTHREADS_INIT TRUE)

## link_map is already defined in Android
add_definitions("-DGC_DONT_DEFINE_LINK_MAP")

## Silence warning
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

add_subdirectory(${lib_src_DIR} ${lib_build_DIR} )
include_directories(${lib_src_DIR}/include)


# Nit generated code

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DANDROID -DWITH_LIBGC")

# Export ANativeActivity_onCreate(),
# Refer to: https://github.com/android-ndk/ndk/issues/381.
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -u ANativeActivity_onCreate")

#           name      so       source
add_library(nit_app   SHARED   {{{cfiles.join("\n\t")}}} )

target_include_directories(nit_app PRIVATE ${ANDROID_NDK}/sources/android/native_app_glue)


# Link!

target_link_libraries(nit_app gc-lib
	{{{target_link_libraries.join("\n\t")}}})
"""
		cmakelists.write_to_file "{android_app_main}/cpp/CMakeLists.txt"

		# ---
		# /app/src/main/res/values/strings.xml for app name

		# Set the default pretty application name
		var res_values_dir = "{android_app_main}/res/values/"
		res_values_dir.mkdir
"""<?xml version="1.0" encoding="utf-8"?>
<resources>
    <string name="app_name">{{{app_name}}}</string>
</resources>""".write_to_file res_values_dir/"strings.xml"

		# ---
		# Copy assets, resources in the Android project

		## Collect path to all possible folder where we can find the `android` folder
		var app_files = [project_root]
		app_files.add_all project.files

		for path in app_files do
			# Copy the assets folder
			var assets_dir = path / "assets"
			if assets_dir.file_exists then
				assets_dir = assets_dir.realpath
				toolcontext.exec_and_check(["cp", "-r", assets_dir, android_app_main], "Android project error")
			end

			# Copy the whole `android` folder
			var android_dir = path / "android"
			if android_dir.file_exists then
				android_dir = android_dir.realpath
				for f in android_dir.files do
					toolcontext.exec_and_check(["cp", "-r", android_dir / f, android_app_main], "Android project error")
				end
			end
		end

		# ---
		# Generate AndroidManifest.xml

		# Is there an icon?
		var resolutions = ["ldpi", "mdpi", "hdpi", "xhdpi", "xxhdpi", "xxxhdpi", "anydpi", "anydpi-v26"]
		var icon_name = null
		var has_round = false

		for res in resolutions do
			# New style mipmap
			if "{project_root}/android/res/mipmap-{res}/ic_launcher_round.png".file_exists then
				has_round = true
			end
			if "{project_root}/android/res/mipmap-{res}/ic_launcher.png".file_exists then
				icon_name = "@mipmap/ic_launcher"
				break
			end
			if "{project_root}/android/res/mipmap-{res}/ic_launcher.xml".file_exists then
				icon_name = "@mipmap/ic_launcher"
				break
			end
		end
		if icon_name == null then
			# Old style drawable-hdpi/icon.png
			for res in resolutions do
				var path = project_root / "android/res/drawable-{res}/icon.png"
				if path.file_exists then
					icon_name = "@drawable/icon"
					break
				end
			end
		end

		var icon_declaration
		if icon_name != null then
			icon_declaration = "android:icon=\"{icon_name}\""
			if app_target_api >= 25 and has_round then
				icon_declaration += "\n\t\tandroid:roundIcon=\"@mipmap/ic_launcher_round\""
			end
		else icon_declaration = ""

		# TODO android:roundIcon

		# Copy the Java sources files
		var java_dir = android_app_main / "java/"
		java_dir.mkdir
		for mmodule in compiler.mainmodule.in_importation.greaters do
			var extra_java_files = mmodule.extra_java_files
			if extra_java_files != null then for file in extra_java_files do
				var path = file.src_path
				var dir = file.filename.dirname
				(java_dir/dir).mkdir
				path.file_copy_to(java_dir/file.filename)
			end
		end

		# ---
		# /app/src/main/AndroidManifest.xml

		var manifest_file = new FileWriter.open(android_app_main / "AndroidManifest.xml")
		manifest_file.write """
<?xml version="1.0" encoding="utf-8"?>
<manifest xmlns:android="http://schemas.android.com/apk/res/android"
        package="{{{app_package}}}">

    <application
		android:hasCode="true"
		android:allowBackup="true"
		android:label="@string/app_name"
		{{{icon_declaration}}}>
"""

		for activity in project.activities do
			manifest_file.write """
        <activity android:name="{{{activity}}}"
                {{{project.manifest_activity_attributes.join("\n")}}}
                {{{icon_declaration}}}>

            <meta-data android:name="android.app.lib_name" android:value="nit_app" />

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
"""
		manifest_file.close
	end

	redef fun write_makefile(compile_dir, cfiles)
	do
		# Do nothing, already done in `write_files`
	end

	redef fun compile_c_code(compile_dir)
	do
		var android_project_root = android_project_root.as(not null)
		var release = toolcontext.opt_release.value

		# Compile C and Java code into an APK file
		var verb = if release then "assembleRelease" else "assembleDebug"
		var args = [gradlew_dir/"gradlew", verb, "-p", android_project_root]
		if toolcontext.opt_verbose.value <= 1 then args.add "-q"
		toolcontext.exec_and_check(args, "Android project error")

		# Move the APK to the target
		var outname = outfile(compiler.mainmodule)
		if release then
			var apk_path = "{android_project_root}/app/build/outputs/apk/release/app-release-unsigned.apk"

			# Sign APK
			var keystore_path= "KEYSTORE".environ
			var key_alias= "KEY_ALIAS".environ
			var tsa_server= "TSA_SERVER".environ

			if key_alias.is_empty then
				toolcontext.warning(null, "key-alias",
					"Warning: the environment variable `KEY_ALIAS` is not set, the APK file will not be signed.")

				# Just move the unsigned APK to outname
				args = ["mv", apk_path, outname]
				toolcontext.exec_and_check(args, "Android project error")
				return
			end

			# We have a key_alias, try to sign the APK
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
			args = ["mv", "{android_project_root}/app/build/outputs/apk/debug/app-debug.apk", outname]
			toolcontext.exec_and_check(args, "Android project error")
		end
	end
end

redef class JavaClassTemplate
	redef fun write_to_files(compdir)
	do
		var jni_path = "cpp/"
		if compdir.has_suffix(jni_path) then
			var path = "{compdir.substring(0, compdir.length-jni_path.length)}/java/"
			return super(path)
		else return super
	end
end
