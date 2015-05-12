# this file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Romain Chanoir <romain.chanoir@viacesi.fr>
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

# Android Assets and Resources Management
#
# Use the ResourceManager to retrieve resources from the `res` folder of your app
# Use the AssetManager to retrieve resources files from the `assets` folder of your app
# both are available from `App`
# If you write your own resources in your NIT project part of the application,
# you are obliged to set a string resource with the name "app_name" or it will be
# impossible for you to compile the apk correctly
module assets_and_resources

import dalvik
import java
import java::io

in "Java" `{
	import android.content.res.AssetManager;
	import android.content.res.AssetFileDescriptor;
	import android.content.res.Resources;
	import android.content.res.XmlResourceParser;
	import java.io.IOException;
	import android.graphics.Bitmap;
	import android.graphics.BitmapFactory;
	import android.graphics.drawable.Drawable;
	import java.io.InputStream;
	import android.util.Log;
	import java.io.FileDescriptor;
`}

# AssetManager from Java, used by `AssetManager` to access resources in `assets` app's directory
# This is a low-level class, use `AssetManager` instead
extern class NativeAssetManager in "Java" `{ android.content.res.AssetManager `}
	super JavaObject

	fun close in "Java" `{ recv.close(); `}

	fun get_locales: Array[JavaString] import Array[JavaString], Array[JavaString].add in "Java" `{
		int arr = new_Array_of_JavaString();
		for (String s : recv.getLocales()) {
			Array_of_JavaString_add(arr, s);
		}
		return arr;
	`}

	fun list(path: JavaString): Array[JavaString] import Array[JavaString], Array[JavaString].add  in "Java" `{
		int arr = new_Array_of_JavaString();
		try {
			for (String s : recv.list(path)) {
				Array_of_JavaString_add(arr, s);
			}
		}catch (IOException e) {
			Log.e("Error retrieving the list of assets at 'path' ", e.getMessage());
			e.printStackTrace();
		}
		return arr;
	`}

	fun open(file_name: JavaString): NativeInputStream in "Java" `{
		InputStream stream = null;
		try {
			stream = recv.open(file_name);
		}catch (IOException e) {
			Log.e("Error while opening " + file_name, e.getMessage());
			e.printStackTrace();
		}
		return stream;
	`}

	fun open_fd(file_name: JavaString): NativeAssetFileDescriptor in "Java" `{
		AssetFileDescriptor afd = null;
		try {
			afd = recv.openFd(file_name);
		}catch(IOException e){
			Log.e("Error while opening " + file_name, e.getMessage());
			e.printStackTrace();
		}
		return afd;
	`}

	fun open_non_asset_fd(file_name: JavaString): NativeAssetFileDescriptor in "Java" `{
		AssetFileDescriptor afd = null;
		try {
			afd =  recv.openNonAssetFd(file_name);
		}catch(IOException e){
			Log.e("Error while opening " + file_name, e.getMessage());
			e.printStackTrace();
		}
		return afd;
	`}

	# HACK for bug #845
	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeResources_sys(recv);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, recv);
	`}
end

# Assets manager using a `NativeAssetManager` to manage android assets
class AssetManager
	# Native asset manager
	var native_assets_manager: NativeAssetManager

	init(app: App) do self.native_assets_manager = app.assets.new_global_ref

	# Close this asset manager
	fun close do native_assets_manager.close

	# Get the locales that this assets manager contains data for
	fun locales: Array[String] do
		var java_array = native_assets_manager.get_locales
		var nit_array = new Array[String]
		for s in java_array do
			nit_array.add(s.to_s)
		end
		return nit_array
	end

	# Return a string array of all the assets at the given path
	fun list(path: String): Array[String] do
		sys.jni_env.push_local_frame(1)
		var java_array = native_assets_manager.list(path.to_java_string)
		var nit_array = new Array[String]
		for s in java_array do
			nit_array.add(s.to_s)
		end
		sys.jni_env.pop_local_frame
		return nit_array
	end

	# Open an asset using ACCESS_STREAMING mode, returning a NativeInputStream
	fun open(file_name: String): NativeInputStream do
		sys.jni_env.push_local_frame(1)
		var return_value =  native_assets_manager.open(file_name.to_java_string)
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Open an asset using it's name and returning a NativeAssetFileDescriptor
	# `file_name` is
	fun open_fd(file_name: String): NativeAssetFileDescriptor do
		sys.jni_env.push_local_frame(1)
		var return_value = native_assets_manager.open_fd(file_name.to_java_string).new_global_ref
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Open a file that is not an asset returning a NativeAssetFileDescriptor
	fun open_non_asset_fd(file_name: String): NativeAssetFileDescriptor do
		var return_value =  native_assets_manager.open_non_asset_fd(file_name.to_java_string)
		return return_value
	end

	# Return a bitmap from the assets
	fun bitmap(name: String): NativeBitmap do
		sys.jni_env.push_local_frame(1)
		var return_value = new NativeBitmap.from_stream(native_assets_manager.open(name.to_java_string)).new_global_ref
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Deallocate the global reference allocated by AssetManager
	fun destroy do self.native_assets_manager.delete_global_ref
end

# Resource manager for android resources placed in the `res` folder of your app
# This is a low-level class, use `ResourcesManager` instead
extern class NativeResources in "Java" `{ android.content.res.Resources `}
	super JavaObject

	fun get_assets:NativeAssetManager in "Java" `{ return recv.getAssets(); `}
	fun get_color(id: Int): Int in "Java" `{ return recv.getColor((int)id); `}
	fun get_boolean(id: Int): Bool in "Java" `{ return recv.getBoolean((int)id); `}
	fun get_dimension(id: Int): Int in "Java" `{ return (int)recv.getDimension((int)id); `}
	fun get_drawable(id: Int): NativeDrawable in "Java" `{ return recv.getDrawable((int)id); `}
	fun get_identifier(name, def_type, def_package: JavaString): Int in "Java" `{ return recv.getIdentifier(name, def_type, def_package); `}
	fun get_integer(id: Int): Int in "Java" `{ return recv.getInteger((int)id); `}
	fun get_string(id: Int): JavaString in "Java" `{ return recv.getString((int)id); `}
	fun get_resource_entry_name(resid: Int): JavaString in "Java" `{ return recv.getResourceEntryName((int)resid); `}
	fun get_resource_name(resid: Int): JavaString in "Java" `{ return recv.getResourceName((int)resid); `}
	fun get_resource_pakage_name(resid: Int): JavaString in "Java" `{ return recv.getResourcePackageName((int)resid); `}
	fun get_resource_type_name(resid: Int): JavaString in "Java" `{ return recv.getResourceTypeName((int)resid); `}

	# HACK for bug #845
	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeResources_sys(recv);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, recv);
	`}
end

# Resource manager for android resources placed in the `res` folder of your app
class ResourcesManager
	# Native resources
	var android_resources: NativeResources

	# The name of the app_package
	var app_package: String

	init(res: NativeResources, app_package: String)
	do
		self.android_resources = res.new_global_ref
		self.app_package = app_package
	end

	# Get a color from resources
	fun color(name: String): Int do
		sys.jni_env.push_local_frame(3)
		var return_value = android_resources.get_color(android_resources.get_identifier(name.to_java_string, "color".to_java_string, app_package.to_java_string))
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Get a `Bool` from resources
	fun boolean(name: String): Bool do
		sys.jni_env.push_local_frame(3)
		var return_value = android_resources.get_boolean(android_resources.get_identifier(name.to_java_string, "bool".to_java_string, app_package.to_java_string))
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Get a dimension from resources
	# A dimension is specified with a number followed by a unit of measure
	fun dimension(name: String): Int do
		sys.jni_env.push_local_frame(3)
		var return_value =  android_resources.get_dimension(android_resources.get_identifier(name.to_java_string, "dimen".to_java_string, app_package.to_java_string))
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Get an `Integer` from resources
	fun integer(name: String): Int do
		sys.jni_env.push_local_frame(3)
		var return_value =  android_resources.get_integer(android_resources.get_identifier(name.to_java_string, "integer".to_java_string, app_package.to_java_string))
		sys.jni_env.pop_local_frame
		return return_value
	end


	# Get a `String` from resources
	fun string(name: String): String do
		sys.jni_env.push_local_frame(3)
		var return_value =  android_resources.get_string(android_resources.get_identifier(name.to_java_string, "string".to_java_string, app_package.to_java_string)).to_s
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Get a resource ID from one resource in `res/raw`folder
	# you may use this to retrieve the id of a sound for example
	fun raw_id(name: String): Int do
		sys.jni_env.push_local_frame(3)
		var return_value = android_resources.get_identifier(name.to_java_string, "raw".to_java_string, app_package.to_java_string)
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Get a drawable from `res/drawable` folder
	fun drawable(name: String): NativeDrawable do
		sys.jni_env.push_local_frame(3)
		var return_value = android_resources.get_drawable(android_resources.get_identifier(name.to_java_string, "drawable".to_java_string, app_package.to_java_string))
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Get and ID from a specific resource in `res/res_type` folder
	fun other_id(name, res_type: String): Int do
		sys.jni_env.push_local_frame(3)
		var return_value = android_resources.get_identifier(name.to_java_string, res_type.to_java_string, app_package.to_java_string)
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Deallocate global reference allocated by ResourcesManager
	fun destroy do self.android_resources.delete_global_ref
end

# An android Bitmap, get an instance using the AssetManager or the ResourceManager
extern class NativeBitmap in "Java" `{ android.graphics.Bitmap `}
	super JavaObject

	# Create a NativeBitmap from a NativeInputStream retrieved with `open` function of the AssetManager
	# Called by the AssetManager
	new from_stream(input_stream: NativeInputStream) in "Java" `{ return BitmapFactory.decodeStream(input_stream); `}

	# Create a NativeBitmap using a resource ID and the NativeResources
	# Called by the ResourceManager
	new from_resources(res: NativeResources, id: Int) in "Java" `{ return BitmapFactory.decodeResource(res, (int)id); `}
	fun width: Int in "Java" `{ return recv.getWidth(); `}
	fun height: Int in "Java" `{ return recv.getHeight(); `}

	# HACK for bug #845
	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeResources_sys(recv);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, recv);
	`}

end

# Android AssetFileDescriptor, can be retrieve by AssetManager and used to load a sound in a SoundPool
extern class NativeAssetFileDescriptor in "Java" `{ android.content.res.AssetFileDescriptor `}
	super JavaObject

	fun close in "Java" `{
		try {
			recv.close();
		}catch(IOException e){
			e.printStackTrace();
		}
	`}
	fun create_input_stream: NativeFileInputStream in "Java" `{
		try {
			return recv.createInputStream();
		}catch(IOException e){
			Log.e("Error creating input_stream", e.getMessage());
			e.printStackTrace();
			return null;
		}
	`}
	fun create_output_stream: NativeFileOutputStream in "Java" `{
		try {
			return recv.createOutputStream();
		}catch(IOException e){
			Log.e("Error creating output stream", e.getMessage());
			e.printStackTrace();
			return null;
		}
	`}
	fun describe_contents: Int in "Java" `{ return (int)recv.describeContents(); `}
	fun declared_length: Int in "Java" `{ return (int)recv.getDeclaredLength(); `}
	# fun extras: Bundle in "Java" `{ return recv.getExtras(); `}

	fun  file_descriptor: NativeFileDescriptor in "Java" `{
		FileDescriptor fd =  recv.getFileDescriptor();
		if (fd == null) {
			Log.e("AssetFileDesciptorError", "Can't retrieve the FileDescriptor of this AssetFileDescriptor");
		}
		return fd;
	`}

	fun length: Int in "Java" `{ return (int)recv.getLength(); `}
	fun start_offset: Int in "Java" `{ return (int)recv.getStartOffset(); `}
	redef fun to_s: String import JavaString.to_s in "Java" `{ return JavaString_to_s(recv.toString()); `}

	# HACK for bug #845
	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeResources_sys(recv);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, recv);
	`}
end

# Native class representing something drawable, can be retrieved from the resources
# will be used by the GUI
extern class NativeDrawable in "Java" `{ android.graphics.drawable.Drawable `}
end

redef class App
	# Resource Manager used to manage resources placed in the `res` folder of the app
	var resource_manager: ResourcesManager is lazy  do return new ResourcesManager(self.resources, self.package_name.to_s)

	# Assets Manager used to manage resources placed in the `assets` folder of the app
	var asset_manager: AssetManager is lazy do return new AssetManager(self)

	# Get the native AssetsManager of the application, used to initialize the nit's AssetManager
	private fun assets: NativeAssetManager import native_activity in "Java" `{ return App_native_activity(recv).getAssets(); `}

	# Get the package name of the application
	private fun package_name: JavaString import native_activity in "Java" `{ return App_native_activity(recv).getPackageName(); `}

	# Get the native ResourceManager of the application, used to initialize the nit's ResourceManager
	private fun resources: NativeResources import native_activity in "Java" `{ return App_native_activity(recv).getResources(); `}
end
