# This file is part of NIT ( http://www.nitlanguage.org ).
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

import java

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

	fun can_execute: Bool in "Java" `{ return recv.canExecute(); `}
	fun can_read: Bool in "Java" `{ return recv.canRead(); `}
	fun can_write: Bool in "Java" `{ return recv.canWrite(); `}
	fun create_file: Bool in "Java" `{
		try {
			return recv.createNewFile();
		}catch(IOException e){
			e.printStackTrace();
			return false;
		}
	`}
	fun delete: Bool in "Java" `{ return recv.delete(); `}
	fun delete_on_exit in "Java" `{ recv.deleteOnExit(); `}
	fun exists: Bool in "Java" `{ return recv.exists(); `}
	fun absolute_file: NativeFile in "Java" `{ return recv.getAbsoluteFile(); `}
	fun absolute_path: JavaString in "Java" `{ return recv.getAbsolutePath(); `}
	fun canonical_file: NativeFile in "Java" `{
		try {
			return recv.getCanonicalFile();
		}catch(IOException e){
			e.printStackTrace();
			return null;
		}
	`}
	fun free_space: Int in "Java" `{ return (int)recv.getFreeSpace(); `}
	fun name: JavaString in "Java" `{ return recv.getName(); `}
	fun parent: JavaString in "Java" `{ return recv.getParent(); `}
	fun parent_file: NativeFile in "Java" `{ return recv.getParentFile(); `}
	fun path: JavaString in "Java" `{ return recv.getPath(); `}
	fun total_space: Int in "Java" `{ return (int)recv.getTotalSpace(); `}
	fun usable_space: Int in "Java" `{ return (int)recv.getUsableSpace(); `}
	fun absolute: Bool in "Java" `{ return recv.isAbsolute(); `}
	fun is_directory: Bool in "Java" `{ return recv.isDirectory(); `}
	fun is_file: Bool in "Java" `{ return recv.isFile(); `}
	fun is_hidden: Bool in "Java" `{ return recv.isHidden(); `}
	fun last_modified: Int in "Java" `{ return (int)recv.lastModified(); `}
	fun length: Int in "Java" `{ return (int)recv.length(); `}
	fun set_readable(r: Bool, owner_only: Bool): Bool in "Java" `{ return recv.setReadable(r, owner_only); `}
	fun set_writable(w: Bool, owner_only: Bool): Bool in "Java" `{ return recv.setWritable(w, owner_only); `}
end

extern class NativeFileInputStream in "Java" `{ java.io.FileInputStream `}
	super JavaObject

	fun available: Int in "Java" `{
		try {
			return recv.available();
		}catch(IOException e){
			e.printStackTrace();
			return -1;
		}
	`}
	fun close in "Java" `{
		try {
			recv.close();
		}catch(IOException e){
			e.printStackTrace();
		}
	`}
	fun read: Int in "Java" `{
		try {
			return recv.read();
		}catch(IOException e){
			e.printStackTrace();
			return -1;
		}
	`}
	fun skip(byte_count: Int): Int in "Java" `{
		try {
			return (int)recv.skip(byte_count);
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
			recv.close();
		}catch(IOException e){
			e.printStackTrace();
		}
	`}
	fun write(one_byte: Int) in "Java" `{
		try {
			recv.write((byte)one_byte);
		}catch(IOException e){
			e.printStackTrace();
		}
	`}
	fun flush in "Java" `{
		try {
			recv.flush();
		}catch(IOException e){
			e.printStackTrace();
		}
	`}
end

extern class NativeFileDescriptor in "Java" `{ java.io.FileDescriptor `}
	super JavaObject

	fun sync in "Java" `{
		try{
			recv.sync();
		}catch(SyncFailedException e){
			e.printStackTrace();
		}
	`}
	fun valid: Bool in "Java" `{ return recv.valid(); `}
end

extern class NativeInputStream in "Java" `{ java.io.InputStream `}
	super JavaObject

	fun available: Int in "Java" `{
		try {
			return recv.available();
		}catch(IOException e){
			e.printStackTrace();
			return -1;
		}
	`}

	fun close in "Java" `{
		try {
			recv.close();
		}catch(IOException e){
			e.printStackTrace();
		}
	`}
end
