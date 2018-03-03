# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Services related to the Nit package manager
module nitpm_shared

# Folder where are downloaded nitpm packages
fun nitpm_lib_dir: String
do
	var dir = "NITPM_PATH".environ
	if not dir.is_empty then return dir

	return "HOME".environ / ".local/lib/nit/"
end

redef class Text

	# Does `self` look like a package name?
	#
	# ~~~
	# assert "gamnit".is_package_name
	# assert "n1t".is_package_name
	# assert not ".".is_package_name
	# assert not "./gamnit".is_package_name
	# assert not "https://github.com/nitlang/nit.git".is_package_name
	# assert not "git://github.com/nitlang/nit".is_package_name
	# assert not "git@gitlab.com:xymus/gamnit.git".is_package_name
	# assert not "4it".is_package_name
	# ~~~
	fun is_package_name: Bool
	do
		if is_empty then return false
		if not chars.first.is_alpha then return false

		for c in chars do
			if not (c.is_alphanumeric or c == '_') then return false
		end

		return true
	end

	# Get package name from the Git address `self`
	#
	# Return `null` on failure.
	#
	# ~~~
	# assert "https://github.com/nitlang/nit.git".git_name == "nit"
	# assert "git://github.com/nitlang/nit".git_name == "nit"
	# assert "gamnit".git_name == "gamnit"
	# assert "///".git_name == null
	# assert "file:///".git_name == "file:"
	# ~~~
	fun git_name: nullable String
	do
		var parts = split("/")
		for part in parts.reverse_iterator do
			if not part.is_empty then
				return part.strip_extension(".git")
			end
		end

		return null
	end

	# Parse the external package declaration, as declared in package.ini
	#
	# Return a map of `ExternalPackage` organized by the short package name,
	# as used in imports from Nit code.
	fun parse_import: Map[String, ExternalPackage]
	do
		var res = new Map[String, ExternalPackage]
		var ids = self.split(",")
		for id in ids do
			id = id.chomp
			if id.is_empty then continue

			# Check version suffix (e.g. gamnit=1.0)
			var match = id.search_last("=")
			var package_name
			var version = null
			if match != null then
				# There's a version suffix
				package_name = id.substring(0, match.from)
				version = id.substring_from(match.after)
				id = package_name
			else
				package_name = id
			end

			# Extract a package name from a Git address
			if not package_name.is_package_name then
				# Assume it's a Git repository
				var git_name = package_name.git_name
				if git_name == null then
					# Invalid name
					# TODO report error only when used by the parser
					continue
				end
				package_name = git_name
			end

			res[package_name] = new ExternalPackage(id, package_name, version)
		end
		return res
	end
end

# Reference to a nitpm package
class ExternalPackage

	# Package identifier (name or Git address), without the version
	var id: String

	# Standard Nit package name, as used in importations from Nit
	var name: String

	# Version string of the package
	var version: nullable String

	# Expected folder name for this package
	var dir_name: String is lazy do
		var version = version
		if version == null then return name
		return name + "=" + version
	end
end
