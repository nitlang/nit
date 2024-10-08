# This file is part of NIT ( https://nitlanguage.org ).
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

# Services from the `java.io` package
#
# This module is used by `android::assets_and_resources` and `android::audio`.
module io

import ffi_support

in "Java" `{
	import java.io.File;
	import java.io.FileInputStream;
	import java.io.FileOutputStream;
	import java.io.FileDescriptor;
	import java.io.IOException;
	import java.io.SyncFailedException;
`}

extern class NativeFile in "Java" `{ java.io.File `}
	super JavaObject

	fun can_execute: Bool in "Java" `{ return self.canExecute(); `}
	fun can_read: Bool in "Java" `{ return self.canRead(); `}
	fun can_write: Bool in "Java" `{ return self.canWrite(); `}
	fun create_file: Bool in "Java" `{
		try {
			return self.createNewFile();
		}catch(IOException e){
			e.printStackTrace();
			return false;
		}
	`}
	fun delete: Bool in "Java" `{ return self.delete(); `}
	fun delete_on_exit in "Java" `{ self.deleteOnExit(); `}
	fun exists: Bool in "Java" `{ return self.exists(); `}
	fun absolute_file: NativeFile in "Java" `{ return self.getAbsoluteFile(); `}
	fun absolute_path: JavaString in "Java" `{ return self.getAbsolutePath(); `}
	fun canonical_file: NativeFile in "Java" `{
		try {
			return self.getCanonicalFile();
		}catch(IOException e){
			e.printStackTrace();
			return null;
		}
	`}
	fun free_space: Int in "Java" `{ return (int)self.getFreeSpace(); `}
	fun name: JavaString in "Java" `{ return self.getName(); `}
	fun parent: JavaString in "Java" `{ return self.getParent(); `}
	fun parent_file: NativeFile in "Java" `{ return self.getParentFile(); `}
	fun path: JavaString in "Java" `{ return self.getPath(); `}
	fun total_space: Int in "Java" `{ return (int)self.getTotalSpace(); `}
	fun usable_space: Int in "Java" `{ return (int)self.getUsableSpace(); `}
	fun absolute: Bool in "Java" `{ return self.isAbsolute(); `}
	fun is_directory: Bool in "Java" `{ return self.isDirectory(); `}
	fun is_file: Bool in "Java" `{ return self.isFile(); `}
	fun is_hidden: Bool in "Java" `{ return self.isHidden(); `}
	fun last_modified: Int in "Java" `{ return (int)self.lastModified(); `}
	fun length: Int in "Java" `{ return (int)self.length(); `}
	fun set_readable(r: Bool, owner_only: Bool): Bool in "Java" `{ return self.setReadable(r, owner_only); `}
	fun set_writable(w: Bool, owner_only: Bool): Bool in "Java" `{ return self.setWritable(w, owner_only); `}
end

extern class NativeFileInputStream in "Java" `{ java.io.FileInputStream `}
	super JavaObject

	fun available: Int in "Java" `{
		try {
			return self.available();
		}catch(IOException e){
			e.printStackTrace();
			return -1;
		}
	`}
	fun close in "Java" `{
		try {
			self.close();
		}catch(IOException e){
			e.printStackTrace();
		}
	`}
	fun read: Int in "Java" `{
		try {
			return self.read();
		}catch(IOException e){
			e.printStackTrace();
			return -1;
		}
	`}
	fun skip(byte_count: Int): Int in "Java" `{
		try {
			return (int)self.skip(byte_count);
		}catch(IOException e){
			e.printStackTrace();
			return -1;
		}
	`}
end

extern class NativeFileOutputStream in "Java" `{ java.io.FileOutputStream `}
	super JavaObject

	fun close in "Java" `{
		try {
			self.close();
		}catch(IOException e){
			e.printStackTrace();
		}
	`}
	fun write(one_byte: Int) in "Java" `{
		try {
			self.write((byte)one_byte);
		}catch(IOException e){
			e.printStackTrace();
		}
	`}
	fun flush in "Java" `{
		try {
			self.flush();
		}catch(IOException e){
			e.printStackTrace();
		}
	`}
end

extern class NativeFileDescriptor in "Java" `{ java.io.FileDescriptor `}
	super JavaObject

	fun sync in "Java" `{
		try{
			self.sync();
		}catch(SyncFailedException e){
			e.printStackTrace();
		}
	`}
	fun valid: Bool in "Java" `{ return self.valid(); `}
end

extern class NativeInputStream in "Java" `{ java.io.InputStream `}
	super JavaObject

	fun available: Int in "Java" `{
		try {
			return self.available();
		}catch(IOException e){
			e.printStackTrace();
			return -1;
		}
	`}

	fun close in "Java" `{
		try {
			self.close();
		}catch(IOException e){
			e.printStackTrace();
		}
	`}

	# HACK for bug #845
	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeInputStream_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end
