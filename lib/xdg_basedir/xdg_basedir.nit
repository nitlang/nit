# This file is part of NIT (https://nitlanguage.org).
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

# Services for using the XDG Base Directory specification
#
# This is a low-level module, it is meant to be wrapped by higher level services.
#
# For more information, refer to the documentation of the `libxdg-basedir`
# project or the official specification at:
# http://standards.freedesktop.org/basedir-spec/basedir-spec-latest.html
module xdg_basedir is pkgconfig("libxdg-basedir")

in "C Header" `{
	#include <basedir.h>
`}

# Handle to a local cache of XDG base directories
extern class XdgBasedir `{ xdgHandle* `}

	# Initialize a handle to an XDG data cache and initialize the cache.
	new `{ return xdgInitHandle(NULL); `}

	# Has this instance been correctly initialized?
	fun is_valid: Bool do return not address_is_null

	# Wipe handle of XDG data cache.
	fun destroy `{ xdgWipeHandle(self); `}

	# Update the data cache.
	#
	# This should not be done frequently as it reallocates the cache.
	# Even if updating the cache fails the handle remains valid and can
	# be used to access XDG data as it was before `update` was called.
	#
	# Returns `true` if the update was successful.
	fun update: Bool `{ return xdgUpdateData(self); `}

	# Base directory for user specific data files.
	fun data_home: String import CString.to_s `{
		return CString_to_s((char*)xdgDataHome(self));
	`}

	# Base directory for user specific configuration files.
	fun config_home: String import CString.to_s `{
		return CString_to_s((char*)xdgConfigHome(self));
	`}

	# Base directory for user specific non-essential data files.
	fun cache_home: String import CString.to_s `{
		return CString_to_s((char*)xdgCacheHome(self));
	`}

	# Preference-ordered set of base directories to search for data files
	# in addition to the $XDG_DATA_HOME base directory.
	fun data_dirs: Array[String] do return native_data_dirs.to_string_array

	private fun native_data_dirs: ConstPointer `{
		return xdgDataDirectories(self);
	`}

	# Preference-ordered set of base directories to search for data files
	# with $XDG_DATA_HOME prepended.
	#
	# The base directory defined by $XDG_DATA_HOME is considered more
	# important than any of the base directories defined by $XDG_DATA_DIRS.
	fun searchable_data_dirs: Array[String]
	do
		return native_searchable_data_dirs.to_string_array
	end

	private fun native_searchable_data_dirs: ConstPointer `{
		return xdgSearchableDataDirectories(self);
	`}

	# Preference-ordered set of base directories to search for configuration
	# files in addition to the $XDG_CONFIG_HOME base directory.
	fun config_dirs: Array[String] do return native_config_dirs.to_string_array

	private fun native_config_dirs: ConstPointer `{
		return xdgConfigDirectories(self);
	`}

	# Preference-ordered set of base directories to search for configuration
	# files with $XDG_CONFIG_HOME prepended.
	#
	# The base directory defined by $XDG_CONFIG_HOME is considered more
	# important than any of the base directories defined by $XDG_CONFIG_DIRS.
	fun searchable_config_dirs: Array[String]
	do
		return native_searchable_config_dirs.to_string_array
	end

	private fun native_searchable_config_dirs: ConstPointer `{
		return xdgSearchableConfigDirectories(self);
	`}
end

private extern class ConstPointer `{ const void * `}
	# Convert a C `char **` to a Nit `Array[String]`
	fun to_string_array: Array[String]
	import Array[String], Array[String].add, CString.to_s `{
		char **strings = (char**)self;

		Array_of_String aos = new_Array_of_String();
		int p = 0;
		while (strings[p] != NULL) {
			Array_of_String_add(aos, CString_to_s((char*)strings[p]));
			p ++;
		}

		return aos;
	`}
end

# Version of XDG Base Directory specification implemented in this library.
fun xdg_basedir_spec: Float `{ return XDG_BASEDIR_SPEC; `}

# Get an instance of XdgBasedir
fun xdg_basedir: XdgBasedir do return once new XdgBasedir
