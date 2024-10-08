# This file is part of NIT ( https://nitlanguage.org ).
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

# Services conforming to POSIX
module posix

in "C Header" `{
#include <sys/types.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>
`}

redef class Sys
	# Set the real current user id of this process
	fun uid=(uid: Int): Bool `{ return setuid(uid); `}

	# Current real user id of this process
	fun uid: Int `{ return getuid(); `}

	# Set the current real group id of this process
	fun gid=(gid: Int): Bool `{ return setgid(gid); `}

	# Current real group id of this process
	fun gid: Int `{ return getgid(); `}

	# Set the effective user id of this process
	fun euid=(uid: Int): Bool `{ return seteuid(uid); `}

	# The effective user id of this process
	fun euid: Int `{ return geteuid(); `}

	# Set the effective group id of this process
	fun egid=(gid: Int): Bool `{ return setegid(gid); `}

	# The effective group id of this process
	fun egid: Int `{ return getegid(); `}
end

# Information on a user account
extern class Passwd `{struct passwd*`}
	# Get the `Passwd` of the user with the `uid`
	new from_uid(uid: Int) `{ return getpwuid(uid); `}

	# Get the `Passwd` of the user with the `name`
	new from_name(name: String) import String.to_cstring `{ return getpwnam( String_to_cstring(name) ); `}

	# Username
	fun name: String import CString.to_s `{ return CString_to_s(self->pw_name); `}

	# User password
	fun passwd: String import CString.to_s `{ return CString_to_s(self->pw_passwd); `}

	# User ID
	fun uid: Int `{ return self->pw_uid; `}

	# Group ID
	fun gid: Int `{ return self->pw_gid; `}

	# Home directory
	fun dir: String import CString.to_s `{ return CString_to_s(self->pw_dir); `}

	# Shell program
	fun shell: String import CString.to_s `{ return CString_to_s(self->pw_shell); `}
end

# Information on a user group
extern class Group `{struct group*`}
	# Get a group from its id
	new from_gid(gid: Int) `{ return getgrgid(gid); `}

	# Get a group from its name
	new from_name(name: String) import String.to_cstring `{ return getgrnam( String_to_cstring(name) ); `}

	# Name of this ground
	fun name: String import CString.to_s `{ return CString_to_s(self->gr_name); `}

	# Encrypted password of this group
	fun passwd: String import CString.to_s `{ return CString_to_s(self->gr_passwd); `}

	# Id of this group
	fun gid: Int `{ return self->gr_gid; `}

	# List of the members of the group
	fun mem: Array[String] import Array[String], Array[String].add, CString.to_s `{
		char **mem;
		int m;
		Array_of_String ret;

		mem = self->gr_mem;
		ret = new_Array_of_String();

		for (m = 0; mem[m] != NULL; m++)
			Array_of_String_add(ret, CString_to_s(mem[m]));

		return ret;
	`}
end
