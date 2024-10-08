# This file is part of NIT ( https://nitlanguage.org ).
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

# Process privileges management utilities
#
# Used mainly by daemons and such to aquire resources as su and
# then drop back to a restricted user.
module privileges

import opts
import posix

redef class Text
	# Does the operating system know the user named `self`?
	fun user_exists: Bool
	do
		var passwd = new Passwd.from_name(to_s)
		return not passwd.address_is_null
	end

	# Does the operating system know the group named `self`?
	fun group_exists: Bool
	do
		var passwd = new Group.from_name(to_s)
		return not passwd.address_is_null
	end
end

# Class to manage user groups
class UserGroup

	# User name
	var user: String

	# Group name
	var group: nullable String

	# Drop privileges of the running program to those of `self`
	#
	# require: `user.user_exists and (group == null or group.group_exists)`
	fun drop_privileges
	do
		var passwd = new Passwd.from_name(user)
		assert not passwd.address_is_null
		var uid = passwd.uid

		var group = group
		var gid
		if group != null then
			var gpasswd = new Group.from_name(group)
			assert not gpasswd.address_is_null
			gid = gpasswd.gid
		else gid = passwd.gid

		sys.gid = gid
		sys.uid = uid
	end
end

# Option to ask for a username and group
class OptionUserAndGroup
	super OptionParameter

	redef type VALUE: nullable UserGroup

	# Create an `OptionUserAndGroup` for dropping privileges
	init for_dropping_privileges
	do
		init("Drop privileges to user:group or simply user", null, ["-u", "--usergroup"])
	end

	redef fun convert(str)
	do
		var words = str.split(":")
		if words.length == 1 then
			return new UserGroup(str, null)
		else if words.length == 2 then
			return new UserGroup(words[0], words[1])
		else
			errors.add("Option {names.join(", ")} expected parameter in the format \"user:group\" or simply \"user\".\n")
			return null
		end
	end
end
