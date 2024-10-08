# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module commands_ini

import commands_model

# Cmd that finds the ini file related to an `mentity`
abstract class CmdIni
	super CmdEntity

	# Ini file
	var ini: nullable IniFile = null

	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		if not mentity isa MPackage then return new WarningNoIni(mentity)

		var ini = mentity.ini
		if ini == null then return new WarningNoIni(mentity)

		self.ini = ini

		return res
	end
end

# No ini file for `mentity`
class WarningNoIni
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No ini file for `{mentity.full_name}`"
end

# Cmd that finds the ini description related to an `mentity`
class CmdIniDescription
	super CmdIni

	# Ini description
	var desc: nullable String = null

	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res

		var mentity = self.mentity.as(not null)
		var ini = self.ini.as(not null)

		var desc = ini["package.desc"]
		if desc == null then return new WarningNoDescription(mentity)
		self.desc = desc

		return res
	end
end

# No git clone url for `mentity`
class WarningNoDescription
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No description for `{mentity.full_name}`"
end

# Cmd that finds the clone url related to an `mentity`
class CmdIniGitUrl
	super CmdIni

	# Clone url
	var url: nullable String = null

	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res

		var mentity = self.mentity.as(not null)
		var ini = self.ini.as(not null)

		var url = ini["upstream.git"]
		if url == null then return new WarningNoGitUrl(mentity)
		self.url = url

		return res
	end
end

# No git url for `mentity`
class WarningNoGitUrl
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No git url for `{mentity.full_name}`"
end

# Cmd that finds the git clone command related to an `mentity`
class CmdIniCloneCommand
	super CmdIniGitUrl

	# Clone command
	var command: nullable String is lazy do
		var url = self.url
		if url == null then return null
		return "git clone {url}"
	end
end

# Cmd that finds the issues link related to an `mentity`
class CmdIniIssuesUrl
	super CmdIni

	# Issues url
	var url: nullable String = null

	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res

		var mentity = self.mentity.as(not null)
		var ini = self.ini.as(not null)

		var url = ini["upstream.issues"]
		if url == null then return new WarningNoIssuesUrl(mentity)
		self.url = url

		return res
	end
end

# No issues url for `mentity`
class WarningNoIssuesUrl
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No issues url for `{mentity.full_name}`"
end

# Cmd that finds the maintainer name of an `mentity`
class CmdIniMaintainer
	super CmdIni

	# Maintainer name
	var maintainer: nullable String = null

	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res

		var mentity = self.mentity.as(not null)
		var ini = self.ini.as(not null)

		var maintainer = ini["package.maintainer"]
		if maintainer == null then return new WarningNoMaintainer(mentity)
		self.maintainer = maintainer

		return res
	end
end

# No maintainer for `mentity`
class WarningNoMaintainer
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No maintainer for `{mentity.full_name}`"
end

# Cmd that finds the contributors list of an `mentity`
class CmdIniContributors
	super CmdIni

	# Contributors list
	var contributors: nullable Array[String] = null

	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res

		var mentity = self.mentity.as(not null)
		var ini = self.ini.as(not null)

		var names = ini["package.more_contributors"]
		if names == null then return new WarningNoContributor(mentity)

		var contributors = new Array[String]
		for name in names.split(",") do
			contributors.add name.trim
		end
		if contributors.is_empty then return new WarningNoContributor(mentity)
		self.contributors = contributors

		return res
	end
end

# No contributor for `mentity`
class WarningNoContributor
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No contributor for `{mentity.full_name}`"
end

# Cmd that finds the license related to an `mentity`
class CmdIniLicense
	super CmdIni

	# License string
	var license: nullable String = null

	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res

		var mentity = self.mentity.as(not null)
		var ini = self.ini.as(not null)

		var license = ini["package.license"]
		if license == null then return new WarningNoLicense(mentity)
		self.license = license

		return res
	end
end

# No ini license string for `mentity`
class WarningNoLicense
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No license for `{mentity.full_name}`"
end

abstract class CmdEntityFile
	super CmdEntity

	# File path
	var file: nullable String = null is writable

	# Accepted file names
	fun file_names: Array[String] is abstract

	# Init file related data
	fun init_file: CmdMessage do
		var mentity = self.mentity.as(not null)

		var source_file = mentity.location.file
		if source_file == null then return throw_warning

		for file_name in file_names do
			var file = source_file.filename / file_name
			if not file.file_exists then continue
			self.file = file
			break
		end

		if file == null then return throw_warning

		return new CmdSuccess
	end

	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res
		return init_file
	end

	fun throw_warning: CmdWarning is abstract
end

abstract class CmdEntityFileContent
	super CmdEntityFile

	# File content
	var content: nullable String = null is writable

	redef fun init_file do
		var res = super
		if not res isa CmdSuccess then return res

		var file = self.file.as(not null)
		content = file.to_path.read_all
		return res
	end
end

# Cmd that finds the license file related to an `mentity`
class CmdLicenseFile
	super CmdEntityFile

	redef var file_names = ["LICENSE", "LICENSE.md", "LICENSE.txt"]
	redef fun throw_warning do return new WarningNoLicenseFile(mentity.as(not null))
end

# Cmd that finds the license file content related to an `mentity`
class CmdLicenseFileContent
	super CmdEntityFileContent
	super CmdLicenseFile
end

# No license file for `mentity`
class WarningNoLicenseFile
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No license file for `{mentity.full_name}`"
end

# Cmd that finds the contributing file related to an `mentity`
class CmdContribFile
	super CmdEntityFile

	redef var file_names = ["CONTRIBUTING", "CONTRIBUTING.md", "CONTRIBUTING.txt"]
	redef fun throw_warning do return new WarningNoContribFile(mentity.as(not null))
end

# Cmd that finds the contrib file content related to an `mentity`
class CmdContribFileContent
	super CmdEntityFileContent
	super CmdContribFile
end

# No license file for `mentity`
class WarningNoContribFile
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No contributing file for `{mentity.full_name}`"
end
