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

module commands_main

import commands_model

# Cmd that finds the mains of an `mentity`
class CmdMains
	super CmdEntityList

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)
		var mentities = new Array[MEntity]

		if mentity isa MPackage then
			for mmodule in mentity.collect_all_mmodules(filter) do
				if mmodule_has_main(mmodule) then mentities.add mmodule
			end
		else if mentity isa MGroup then
			for mmodule in mentity.collect_all_mmodules(filter) do
				if mmodule_has_main(mmodule) then mentities.add mmodule
			end
		else if mentity isa MModule then
			if mmodule_has_main(mentity) then mentities.add mentity
		else
			return new WarningNoMains(mentity)
		end

		if mentities.is_empty then return new WarningNoMains(mentity)

		self.results = mentities
		return res
	end

	# Does `mmodule` has a `main` method?
	private fun mmodule_has_main(mmodule: MModule): Bool do
		for mclassdef in mmodule.collect_redef_mclassdefs(filter) do
			if mclassdef.name != "Sys" then continue
			for mpropdef in mclassdef.collect_redef_mpropdefs(filter) do
				if mpropdef.name == "main" then return true
			end
		end
		return false
	end
end

# No tests for `mentity`
class WarningNoMains
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No main found for `{mentity.full_name}`"
end

# Cmd that finds the nitc command related to an `mentity`
class CmdMainCompile
	super CmdEntity

	var file: nullable SourceFile = null

	var command: nullable String is lazy do
		var path = test_path(file)
		if path == null then return null
		return "nitc {path}"
	end

	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		if mentity isa MModule then
			file = mmodule_main(mentity)
			if file == null then return new WarningNoMain(mentity)
		else
			return new WarningNoMain(mentity)
		end
		return res
	end

	# Does `mmodule` has a `main` method?
	private fun mmodule_main(mmodule: MModule): nullable SourceFile do
		for mclassdef in mmodule.mclassdefs do
			if mclassdef.name != "Sys" then continue
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef.name == "main" then return mmodule.location.file
			end
		end
		return null
	end

	# Return the sourcefile path
	#
	# This method exists for the only purpose to be redefined by nitunit tests
	# to avoid path diffs.
	private fun test_path(file: nullable SourceFile): nullable String do
		if file == null then return null
		var base_path = mentity.as(MModule).mpackage.as(not null).location.file.as(not null).filename
		return file.filename.replace(base_path, "")
	end
end

# No tests for `mentity`
class WarningNoMain
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No main to compile for `{mentity.full_name}`"
end

# Cmd that finds the nitunit command related to an `mentity`
class CmdTesting
	super CmdEntityList

	var command: nullable String is lazy do
		var results = self.results
		if results == null then return null

		var tpl = new Template
		tpl.add "nitunit"
		for result in results do
			var path = test_path(result)
			if path == null then continue
			tpl.add " {path}"
		end
		return tpl.write_to_string
	end

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		var mentities = new Array[MEntity]
		if not mentity isa MPackage then return new WarningNoTest(mentity)

		for mgroup in mentity.collect_all_mgroups(filter) do
			if mgroup.is_test then
				mentities.add mgroup
				continue
			end
			for mmodule in mgroup.collect_mmodules(filter) do
				if mmodule.is_test then mentities.add mmodule
			end
		end

		if mentities.is_empty then return new WarningNoTest(mentity)

		self.results = mentities
		return res
	end

	# Return the mentity path
	#
	# This method exists for the only purpose to be redefined by nitunit tests
	# to avoid path diffs.
	private fun test_path(mentity: MEntity): nullable String do
		var file = mentity.location.file
		if file == null then return null
		var base_path = self.mentity.as(not null).location.file.as(not null).filename
		return file.filename.replace(base_path, "")
	end
end

# No tests for `mentity`
class WarningNoTest
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No nitunit files for `{mentity.full_name}`"
end

# Cmd that finds the man file related to an `mentity`
class CmdManFile
	super CmdEntity

	# Man file
	var file: nullable String = null

	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		var mpackage = null
		if mentity isa MPackage then
			mpackage = mentity
		else if mentity isa MGroup then
			mpackage = mentity.mpackage
		else if mentity isa MModule then
			mpackage = mentity.mpackage
		end

		if mpackage == null then return new WarningNoManFile(mentity)

		var source_file = mpackage.location.file
		if source_file == null then return new WarningNoManFile(mentity)

		var man_dir = source_file.filename / "man"
		if not man_dir.file_exists then return new WarningNoManFile(mentity)

		var man_file = null
		for file in man_dir.files do
			if not file.has_prefix(mentity.name) then continue
			man_file = man_dir / file
		end
		if man_file == null then return new WarningNoManFile(mentity)

		self.file = man_file

		return res
	end
end

# No man file for `mentity`
class WarningNoManFile
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No man file for `{mentity.full_name}`"
end

class CmdManSynopsis
	super CmdManFile

	# Synopsis string extracted from man
	var synopsis: nullable String

	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)
		var file = self.file.as(not null)

		var lines = file.to_path.read_lines
		var in_synopsis = false
		for line in lines do
			if in_synopsis and line.has_prefix(mentity.name) then
				synopsis = line
				break
			end
			if line != "# SYNOPSIS" then continue
			in_synopsis = true
		end

		if synopsis == null then return new WarningNoManSynopsis(mentity)

		return res
	end
end

# No synopsis found in the man file for `mentity`
class WarningNoManSynopsis
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No synopsis found in the man file for `{mentity.full_name}`"
end

class CmdManOptions
	super CmdManFile

	# Options description
	var options: nullable ArrayMap[String, String]

	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)
		var file = self.file.as(not null)

		var options = new ArrayMap[String, String]

		var lines = file.to_path.read_lines
		var in_options = false
		for i in [0 .. lines.length[ do
			var line = lines[i]
			if line == "# OPTIONS" then
				in_options = true
			else if in_options and line.has_prefix("### ") then
				var opt = line.substring(4, line.length).trim.replace("`", "")
				var desc = ""
				if i < lines.length - 1 then
					desc = lines[i + 1].trim
				end
				options[opt] = desc
			else if line.has_prefix("# ") then
				in_options = false
			end
		end

		if options.is_empty then return new WarningNoManOptions(mentity)
		self.options = options

		return res
	end
end

# No options description found in the man file for `mentity`
class WarningNoManOptions
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No options description found in the man file for `{mentity.full_name}`"
end
