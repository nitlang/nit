# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

import flat

`{
#include <sys/types.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>
`}

redef class Sys
	fun uid=(uid: Int): Bool `{ return setuid(uid); `}
	fun uid: Int `{ return getuid(); `}

	fun gid=(gid: Int): Bool `{ return setgid(gid); `}
	fun gid: Int `{ return getgid(); `}

	fun euid=(uid: Int): Bool `{ return seteuid(uid); `}
	fun euid: Int `{ return geteuid(); `}

	fun egid=(gid: Int): Bool `{ return setegid(gid); `}
	fun egid: Int `{ return getegid(); `}
end

extern class Passwd `{struct passwd*`}
	new from_uid(uid: Int) `{ return getpwuid(uid); `}
	new from_name(name: String) import String::to_cstring `{ return getpwnam( String_to_cstring(name) ); `}

	fun name: String import NativeString::to_s `{ return NativeString_to_s(recv->pw_name); `}
	fun passwd: String import NativeString::to_s `{ return NativeString_to_s(recv->pw_passwd); `}
	fun uid: Int `{ return recv->pw_uid; `}
	fun gid: Int `{ return recv->pw_gid; `}
	fun gecos: String import NativeString::to_s `{ return NativeString_to_s(recv->pw_gecos); `}
	fun dir: String import NativeString::to_s `{ return NativeString_to_s(recv->pw_dir); `}
	fun shell: String import NativeString::to_s `{ return NativeString_to_s(recv->pw_shell); `}
end

extern class Group `{struct group*`}
	new from_gid(gid: Int) `{ return getgrgid(gid); `}
	new from_name(name: String) import String::to_cstring `{ return getgrnam( String_to_cstring(name) ); `}

	fun name: String import NativeString::to_s `{ return NativeString_to_s(recv->gr_name); `}
	fun passwd: String import NativeString::to_s `{ return NativeString_to_s(recv->gr_passwd); `}
	fun gid: Int `{ return recv->gr_gid; `}
	fun mem: Array[String] import Array, Array::add, NativeString::to_s, String as (nullable Object) `{
		char **mem;
		int m;
		Array ret;

		mem = recv->gr_mem;
		ret = new_Array();

		for (m = 0; mem[m] != NULL; m++)
			Array_add(ret, String_as_nullable_Object( NativeString_to_s(mem[m]) ));

		return ret;
	`}
end
