# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# Loading of Nit source files
#
# The loader takes care of looking for module and projects in the file system, and the associated case of errors.
# The loading requires several steps:
#
# Identify: create an empty model entity associated to a name or a file path.
# Identification is used for instance when names are given in the command line.
# See `identify_module` and `identify_group`.
#
# Scan: visit directories and identify their contents.
# Scanning is done to enable the searching of modules in projects.
# See `scan_group` and `scan_full`.
#
# Parse: load the AST and associate it with the model entity.
# See `MModule::parse`.
#
# Import: means recursively load modules imported by a module.
# See `build_module_importation`.
#
# Load: means doing the full sequence: identify, parse and import.
# See `ModelBuilder::parse`, `ModelBuilder::parse_full`, `MModule::load` `ModelBuilder::load_module.
module loader

import modelbuilder_base
import ini
import nitpm_shared

redef class ToolContext
	# Option --path
	var opt_path = new OptionArray("Add an additional include path (may be used more than once)", "-I", "--path")

	# Option --only-metamodel
	var opt_only_metamodel = new OptionBool("Stop after meta-model processing", "--only-metamodel")

	# Option --only-parse
	var opt_only_parse = new OptionBool("Only proceed to parse files", "--only-parse")

	redef init
	do
		super
		option_context.add_option(opt_path, opt_only_parse, opt_only_metamodel)
	end
end

redef class ModelBuilder
	redef init
	do
		super

		# Setup the paths value
		paths.append(toolcontext.opt_path.value)

		# Packages managed by nitpm, only use when not testing with tests.sh
		if "NIT_TESTING_TESTS_SH".environ != "true" then
			paths.add nitpm_lib_dir
		end

		var path_env = "NIT_PATH".environ
		if not path_env.is_empty then
			paths.append(path_env.split_with(':'))
		end

		var nit_dir = toolcontext.nit_dir
		if nit_dir != null then
			var libname = nit_dir/"lib"
			if libname.file_exists then paths.add(libname)
			libname = nit_dir/"contrib"
			if libname.file_exists then paths.add(libname)
		end
	end

	# Load a bunch of modules.
	# `modules` can contains filenames or module names.
	# Imported modules are automatically loaded and modelized.
	# The result is the corresponding model elements.
	# Errors and warnings are printed with the toolcontext.
	#
	# Note: class and property model elements are not analysed.
	fun parse(modules: Sequence[String]): Array[MModule]
	do
		var time0 = get_time
		# Parse and recursively load
		self.toolcontext.info("*** PARSE ***", 1)
		var mmodules = new ArraySet[MModule]
		for a in modules do
			var nmodule = self.load_module(a)
			if nmodule == null then continue # Skip error
			var mmodule = nmodule.mmodule
			if mmodule == null then continue # skip error
			mmodules.add mmodule
		end
		var time1 = get_time
		self.toolcontext.info("*** END PARSE: {time1-time0} ***", 2)

		self.toolcontext.check_errors

		if toolcontext.opt_only_parse.value then
			self.toolcontext.info("*** ONLY PARSE...", 1)
			self.toolcontext.quit
		end

		return mmodules.to_a
	end

	# Identify a bunch of modules and groups.
	#
	# This does the same as `parse_full` but does only the identification (cf. `identify_module`)
	fun scan_full(names: Sequence[String]): Array[MModule]
	do
		var mmodules = new Array[MModule]
		for a in names do
			# Case of a group (root or sub-directory)
			var mgroup = self.identify_group(a)
			if mgroup != null then
				scan_group(mgroup)
				for mg in mgroup.in_nesting.smallers do mmodules.add_all mg.mmodules
				continue
			end

			# Case of a directory that is not a group
			var stat = a.to_path.stat
			if stat != null and stat.is_dir then
				self.toolcontext.info("look in directory {a}", 2)
				var fs = a.files
				alpha_comparator.sort(fs)
				# Try each entry as a group or a module
				for f in fs do
					if f.first == '.' then continue
					var af = a/f
					mgroup = identify_group(af)
					if mgroup != null then
						scan_group(mgroup)
						for mg in mgroup.in_nesting.smallers do mmodules.add_all mg.mmodules
						continue
					end
					var mmodule = identify_module(af)
					if mmodule != null then
						mmodules.add mmodule
					else
						self.toolcontext.info("ignore file {af}", 2)
					end
				end
				continue
			end

			var mmodule = identify_module(a)
			if mmodule == null then
				var le = last_loader_error
				if le != null then
					toolcontext.error(null, le)
				else if a.file_exists then
					toolcontext.error(null, "Error: `{a}` is not a Nit source file.")
				else
					toolcontext.error(null, "Error: cannot find module `{a}`.")
				end
				continue
			end

			mmodules.add mmodule
		end
		return mmodules
	end

	# Load a bunch of modules and groups.
	#
	# Each name can be:
	#
	# * a path to a module, a group or a directory of packages.
	# * a short name of a module or a group that are looked in the `paths` (-I)
	#
	# Then, for each entry, if it is:
	#
	# * a module, then is it parsed and returned.
	# * a group then recursively all its modules are parsed.
	# * a directory of packages then all the modules of all packages are parsed.
	# * else an error is displayed.
	#
	# See `parse` for details.
	fun parse_full(names: Sequence[String]): Array[MModule]
	do
		var time0 = get_time
		# Parse and recursively load
		self.toolcontext.info("*** PARSE ***", 1)
		var mmodules = new ArraySet[MModule]
		var scans = scan_full(names)
		for mmodule in scans do
			var ast = mmodule.load(self)
			if ast == null then continue # Skip error
			mmodules.add mmodule
		end
		var time1 = get_time
		self.toolcontext.info("*** END PARSE: {time1-time0} ***", 2)

		self.toolcontext.check_errors

		if toolcontext.opt_only_parse.value then
			self.toolcontext.info("*** ONLY PARSE...", 1)
			self.toolcontext.quit
		end

		return mmodules.to_a
	end

	# The list of directories to search for top level modules
	# The list is initially set with:
	#
	#   * the toolcontext --path option
	#   * the NIT_PATH environment variable
	#   * `toolcontext.nit_dir`
	# Path can be added (or removed) by the client
	var paths = new Array[String]

	# Like (and used by) `get_mmodule_by_name` but does not force the parsing of the MModule (cf. `identify_module`)
	fun search_mmodule_by_name(anode: nullable ANode, mgroup: nullable MGroup, name: String): nullable MModule
	do
		# First, look in groups
		var c = mgroup
		if c != null then
			var r = c.mpackage.root
			assert r != null
			scan_group(r)
			var res = r.mmodules_by_name(name)
			if res.not_empty then return res.first
		end

		# Look at some known directories
		var lookpaths = self.paths

		# Look in the directory of the group package also (even if not explicitly in the path)
		if mgroup != null then
			# path of the root group
			var dirname = mgroup.mpackage.root.filepath
			if dirname != null then
				dirname = dirname.join_path("..").simplify_path
				if not lookpaths.has(dirname) and dirname.file_exists then
					lookpaths = lookpaths.to_a
					lookpaths.add(dirname)
				end
			end
		end

		if mgroup != null then
			var alias = mgroup.mpackage.import_alias(name)
			if alias != null then name = alias
		end

		var loc = null
		if anode != null then loc = anode.hot_location
		var candidate = search_module_in_paths(loc, name, lookpaths)

		if candidate == null then
			if mgroup != null then
				error(anode, "Error: cannot find module `{name}` from `{mgroup.name}`. Tried: {lookpaths.join(", ")}.")
			else
				error(anode, "Error: cannot find module `{name}`. Tried: {lookpaths.join(", ")}.")
			end
			return null
		end
		return candidate
	end

	# Get a module by its short name; if required, the module is loaded, parsed and its hierarchies computed.
	# If `mgroup` is set, then the module search starts from it up to the top level (see `paths`);
	# if `mgroup` is null then the module is searched in the top level only.
	# If no module exists or there is a name conflict, then an error on `anode` is displayed and null is returned.
	fun get_mmodule_by_name(anode: nullable ANode, mgroup: nullable MGroup, name: String): nullable MModule
	do
		var mmodule = search_mmodule_by_name(anode, mgroup, name)
		if mmodule == null then return null # Forward error
		var ast = mmodule.load(self)
		if ast == null then return null # Forward error
		return mmodule
	end

	# Search a module `name` from path `lookpaths`.
	# If found, the module is returned.
	private fun search_module_in_paths(location: nullable Location, name: String, lookpaths: Collection[String]): nullable MModule
	do
		var name_no_version
		if name.has('=') then
			name_no_version = name.split('=').first
		else name_no_version = name

		var res = new ArraySet[MModule]
		for dirname in lookpaths do
			# Try a single module file
			var mp = identify_module((dirname/"{name}.nit").simplify_path)
			if mp != null then res.add mp
			# Try the default module of a group
			var g = identify_group((dirname/name).simplify_path)
			if g != null then
				scan_group(g)
				res.add_all g.mmodules_by_name(name_no_version)
			end
		end
		if res.is_empty then return null
		if res.length > 1 then
			toolcontext.error(location, "Error: conflicting module files for `{name}`: `{[for x in res do x.filepath or else x.full_name].join("`, `")}`")
		end
		return res.first
	end

	# Search groups named `name` from paths `lookpaths`.
	private fun search_group_in_paths(name: String, lookpaths: Collection[String]): ArraySet[MGroup]
	do
		var res = new ArraySet[MGroup]
		for dirname in lookpaths do
			# try a single group directory
			var mg = identify_group(dirname/name)
			if mg != null then
				res.add mg
			end
		end
		return res
	end

	# Cache for `identify_module` by relative and real paths
	private var identified_modules_by_path = new HashMap[String, nullable MModule]

	# All the currently identified modules.
	# See `identify_module`.
	#
	# An identified module exists in the model but might be not yet parsed (no AST), or not yet analysed (no importation).
	var identified_modules = new Array[MModule]

	# All the currently parsed modules.
	#
	# A parsed module exists in the model but might be not yet analysed (no importation).
	var parsed_modules = new Array[MModule]

	# Some `loader` services are silent and return `null` on error.
	#
	# Those services can set `last_loader_error` to precise an specific error message.
	# if `last_loader_error == null` then a generic error message can be used.
	#
	# See `identified_modules` and `identify_group` for details.
	var last_loader_error: nullable String = null

	# Identify a source file and load the associated package and groups if required.
	#
	# This method does what the user expects when giving an argument to a Nit tool.
	#
	# * If `path` is an existing Nit source file (with the `.nit` extension),
	#   then the associated MModule is returned
	# * If `path` is a directory (with a `/`),
	#   then the MModule of its default module is returned (if any)
	# * If `path` is a simple identifier (eg. `digraph`),
	#   then the main module of the package `digraph` is searched in `paths` and returned.
	#
	# Silently return `null` if `path` does not exists or cannot be identified.
	# If `null` is returned, `last_loader_error` can be set to a specific error message.
	#
	# On success, it returns a module that is possibly not yet parsed (no AST), or not yet analysed (no importation).
	# If the module was already identified, or loaded, it is returned.
	fun identify_module(path: String): nullable MModule
	do
		last_loader_error = null

		# special case for not a nit file
		if not path.has_suffix(".nit") then do
			# search dirless files in known -I paths
			if not path.chars.has('/') then
				var res = search_module_in_paths(null, path, self.paths)
				if res != null then return res
			end

			# Found nothing? maybe it is a group...
			if path.file_exists then
				var mgroup = identify_group(path)
				if mgroup != null then
					var owner_path = mgroup.filepath.join_path(mgroup.name + ".nit")
					if owner_path.file_exists then
						path = owner_path
						break
					end
				end
			end

			# Found nothing? maybe it is a qualified name
			if path.chars.has(':') then
				var ids = path.split("::")
				var g = identify_group(ids.first)
				if g != null then
					scan_group(g)
					var ms = g.mmodules_by_name(ids.last)

					# Return exact match
					for m in ms do
						if m.full_name == path then
							return m
						end
					end

					# Where there is only one or two names `foo::bar`
					# then accept module that matches `foo::*::bar`
					if ids.length <= 2 then
						if ms.length == 1 then return ms.first
						if ms.length > 1 then
							var l = new Array[String]
							for m in ms do
								var fp = m.filepath
								if fp != null then fp = " ({fp})" else fp = ""
								l.add "`{m.full_name}`{fp}"
							end
							last_loader_error = "Error: conflicting module for `{path}`: {l.join(", ")} "
							return null
						end
					end

					var bests = new BestDistance[String](path.length / 2)
					# We found nothing. But propose something in the package?
					for sg in g.mpackage.mgroups do
						for m in sg.mmodules do
							var d = path.levenshtein_distance(m.full_name)
							bests.update(d, m.full_name)
						end
					end
					var last_loader_error = "Error: cannot find module `{path}`."
					if bests.best_items.not_empty then
						last_loader_error += " Did you mean " + bests.best_items.join(", ", " or ") + "?"
					end
					self.last_loader_error = last_loader_error
					return null
				end
			end

			return null
		end

		# Does the file exists?
		if not path.file_exists then
			return null
		end

		# Fast track, the path is already known
		if identified_modules_by_path.has_key(path) then return identified_modules_by_path[path]
		var rp = module_absolute_path(path)
		if identified_modules_by_path.has_key(rp) then return identified_modules_by_path[rp]

		var pn = path.basename(".nit")

		# Search for a group
		var mgrouppath = path.join_path("..").simplify_path
		var mgroup = identify_group(mgrouppath)

		if mgroup != null then
			var mpackage = mgroup.mpackage
			if not mpackage.accept(path) then
				mgroup = null
				toolcontext.info("module `{path}` excluded from package `{mpackage}`", 2)
			end
		end
		if mgroup == null then
			# singleton package
			var loc = new Location.opaque_file(path)
			var mpackage = new MPackage(pn, model, loc)
			mgroup = new MGroup(pn, loc, mpackage, null) # same name for the root group
			mpackage.root = mgroup
			toolcontext.info("found singleton package `{pn}` at {path}", 2)

			# Attach homonymous `ini` file to the package
			var inipath = path.dirname / "{pn}.ini"
			if inipath.file_exists then
				var ini = new IniFile.from_file(inipath)
				mpackage.ini = ini
			end
		end

		var loc = new Location.opaque_file(path)
		var res = new MModule(model, mgroup, pn, loc)

		identified_modules_by_path[rp] = res
		identified_modules_by_path[path] = res
		identified_modules.add(res)
		return res
	end

	# Groups by path
	private var mgroups = new HashMap[String, nullable MGroup]

	# Return the mgroup associated to a directory path.
	# If the directory is not a group null is returned.
	#
	# Silently return `null` if `dirpath` does not exists, is not a directory,
	# cannot be identified or cannot be attached to a mpackage.
	# If `null` is returned, `last_loader_error` can be set to a specific error message.
	#
	# Note: `paths` is also used to look for mgroups
	fun identify_group(dirpath: String): nullable MGroup
	do
		# Reset error
		last_loader_error = null

		var stat = dirpath.file_stat

		if stat == null or not stat.is_dir then do
			# search dirless directories in known -I paths
			if dirpath.chars.has('/') then return null
			for p in paths do
				var try = p / dirpath
				stat = try.file_stat
				if stat != null then
					dirpath = try
					break label
				end
			end
			return null
		end label

		# Filter out non-directories
		if not stat.is_dir then
			last_loader_error = "Error: `{dirpath}` is not a directory."
			return null
		end

		# Fast track, the path is already known
		var rdp = module_absolute_path(dirpath)
		if mgroups.has_key(rdp) then
			return mgroups[rdp]
		end

		# By default, the name of the package or group is the base_name of the directory
		var pn = rdp.basename

		# Check `package.ini` that indicate a package
		var ini = null
		var parent = null
		var inipath = dirpath / "package.ini"
		if inipath.file_exists then
			ini = new IniFile.from_file(inipath)
		end

		if ini == null then
			# No ini, multiple course of action

			# The root of the directory hierarchy in the file system.
			if rdp == "/" then
				mgroups[rdp] = null
				last_loader_error = "Error: `{dirpath}` is not a Nit package."
				return null
			end

			# Special stopper `packages.ini`
			if (dirpath/"packages.ini").file_exists then
				# dirpath cannot be a package since it is a package directory
				mgroups[rdp] = null
				last_loader_error = "Error: `{dirpath}` is not a Nit package."
				return null
			end

			# check the parent directory (if it does not contain the stopper file)
			var parentpath = dirpath.join_path("..").simplify_path
			var stopper = parentpath / "packages.ini"
			if not stopper.file_exists then
				# Recursively get the parent group
				parent = identify_group(parentpath)
				if parent != null then do
					var mpackage = parent.mpackage
					if not mpackage.accept(dirpath) then
						toolcontext.info("directory `{dirpath}` excluded from package `{mpackage}`", 2)
						parent = null
					end
				end
				if parent == null then
					# Parent is not a group, thus we are not a group either
					mgroups[rdp] = null
					last_loader_error = "Error: `{dirpath}` is not a Nit package."
					return null
				end
			end
		end

		var loc = new Location.opaque_file(dirpath)
		var mgroup
		if parent == null then
			# no parent, thus new package
			if ini != null then pn = ini["package.name"] or else pn
			var mpackage = new MPackage(pn, model, loc)
			mgroup = new MGroup(pn, loc, mpackage, null) # same name for the root group
			mpackage.root = mgroup
			toolcontext.info("found package `{mpackage}` at {dirpath}", 2)
			mpackage.ini = ini
		else
			mgroup = new MGroup(pn, loc, parent.mpackage, parent)
			toolcontext.info("found sub group `{mgroup.full_name}` at {dirpath}", 2)
		end

		# search documentation
		# in src first so the documentation of the package code can be distinct for the documentation of the package usage
		var readme = dirpath.join_path("README.md")
		if not readme.file_exists then readme = dirpath.join_path("README")
		if readme.file_exists then
			var mdoc = load_markdown(readme)
			mgroup.mdoc = mdoc
			mdoc.original_mentity = mgroup
		end

		mgroups[rdp] = mgroup
		return mgroup
	end

	# Load a markdown file as a documentation object
	fun load_markdown(filepath: String): MDoc
	do
		var s = new FileReader.open(filepath)
		var lines = new Array[String]
		var line_starts = new Array[Int]
		var len = 1
		while not s.eof do
			var line = s.read_line
			lines.add(line)
			line_starts.add(len)
			len += line.length + 1
		end
		s.close
		var source = new SourceFile.from_string(filepath, lines.join("\n"))
		source.line_starts.add_all line_starts
		var mdoc = new MDoc(new Location(source, 1, lines.length, 0, 0))
		mdoc.content.add_all(lines)
		return mdoc
	end

	# Force the identification of all MModule of the group and sub-groups in the file system.
	#
	# When a group is scanned, its sub-groups hierarchy is filled (see `MGroup::in_nesting`)
	# and the potential modules (and nested modules) are identified (see `MGroup::modules`).
	#
	# Basically, this recursively call `identify_group` and `identify_module` on each directory entry.
	#
	# No-op if the group was already scanned (see `MGroup::scanned`).
	fun scan_group(mgroup: MGroup) do
		if mgroup.scanned then return
		mgroup.scanned = true
		var p = mgroup.filepath
		# a virtual group has nothing to scan
		if p == null then return
		var files = p.files
		alpha_comparator.sort(files)
		for f in files do
			if f.first == '.' then continue
			var fp = p/f
			var g = identify_group(fp)
			# Recursively scan for groups of the same package
			if g == null then
				identify_module(fp)
			else if g.mpackage == mgroup.mpackage then
				scan_group(g)
			end
		end
	end

	# Transform relative paths (starting with '../') into absolute paths
	private fun module_absolute_path(path: String): String do
		return path.realpath
	end

	# Try to load a module AST using a path.
	# Display an error if there is a problem (IO / lexer / parser) and return null
	#
	# The AST is loaded as is total independence of the model and its entities.
	#
	# AST are not cached or reused thus a new AST is returned on success.
	fun load_module_ast(filename: String): nullable AModule
	do
		if not filename.has_suffix(".nit") then
			self.toolcontext.error(null, "Error: file `{filename}` is not a valid nit module.")
			return null
		end
		if not filename.file_exists then
			self.toolcontext.error(null, "Error: file `{filename}` not found.")
			return null
		end

		self.toolcontext.info("load module {filename}", 2)

		# Load the file
		var file = new FileReader.open(filename)
		var lexer = new Lexer(new SourceFile(filename, file))
		var parser = new Parser(lexer)
		var tree = parser.parse
		file.close

		# Handle lexer and parser error
		var nmodule = tree.n_base
		if nmodule == null then
			var neof = tree.n_eof
			assert neof isa AError
			error(neof, neof.message)
			return null
		end

		return nmodule
	end

	# Remove Nit source files from a list of arguments.
	#
	# Items of `args` that can be loaded as a nit file will be removed from `args` and returned.
	fun filter_nit_source(args: Array[String]): Array[String]
	do
		var keep = new Array[String]
		var res = new Array[String]
		for a in args do
			var stat = a.to_path.stat
			if stat != null and stat.is_dir then
				res.add a
				continue
			end
			var l = identify_module(a)
			if l == null then
				keep.add a
			else
				res.add a
			end
		end
		args.clear
		args.add_all(keep)
		return res
	end

	# Try to load a module using a path.
	# Display an error if there is a problem (IO / lexer / parser) and return null.
	# Note: usually, you do not need this method, use `get_mmodule_by_name` instead.
	#
	# The MModule is located, created, parsed and the importation is performed.
	fun load_module(filename: String): nullable AModule
	do
		# Look for the module
		var mmodule = identify_module(filename)
		if mmodule == null then
			var le = last_loader_error
			if le != null then
				toolcontext.error(null, le)
			else if filename.file_exists then
				toolcontext.error(null, "Error: `{filename}` is not a Nit source file.")
			else
				toolcontext.error(null, "Error: cannot find module `{filename}`.")
			end
			return null
		end

		# Load it
		return mmodule.load(self)
	end

	# Injection of a new module without source.
	# Used by the interpreter.
	fun load_rt_module(parent: nullable MModule, nmodule: AModule, mod_name: String): nullable MModule
	do
		# Create the module

		var mgroup = null
		if parent != null then mgroup = parent.mgroup
		var mmodule = new MModule(model, mgroup, mod_name, nmodule.location)
		nmodule.mmodule = mmodule
		nmodules.add(nmodule)
		parsed_modules.add mmodule
		self.mmodule2nmodule[mmodule] = nmodule

		if parent!= null then
			var imported_modules = new Array[MModule]
			imported_modules.add(parent)
			mmodule.set_visibility_for(parent, intrude_visibility)
			mmodule.set_imported_mmodules(imported_modules)
		end
		build_module_importation(nmodule)

		return mmodule
	end

	# Visit the AST and create the `MModule` object
	private fun build_a_mmodule(mgroup: nullable MGroup, nmodule: AModule)
	do
		var mmodule = nmodule.mmodule
		assert mmodule != null

		# Check the module name
		var decl = nmodule.n_moduledecl
		if decl != null then
			var decl_name = decl.n_name.n_id.text
			if decl_name != mmodule.name then
				warning(decl.n_name, "module-name-mismatch", "Error: module name mismatch; declared {decl_name} file named {mmodule.name}.")
			end
		end

		# Check for conflicting module names in the package
		if mgroup != null then
			var others = model.get_mmodules_by_name(mmodule.name)
			if others != null then for other in others do
				if other != mmodule and mmodule2nmodule.has_key(mmodule) and other.mgroup!= null and other.mgroup.mpackage == mgroup.mpackage then
					var node: ANode
					if decl == null then node = nmodule else node = decl.n_name
					error(node, "Error: a module named `{other.full_name}` already exists at {other.location}.")
					break
				end
			end
		end

		nmodules.add(nmodule)
		self.mmodule2nmodule[mmodule] = nmodule

		var source = nmodule.location.file
		if source != null then
			assert source.mmodule == null
			source.mmodule = mmodule
		end

		if decl != null then
			# Extract documentation
			var ndoc = decl.n_doc
			if ndoc != null then
				var mdoc = ndoc.to_mdoc
				mmodule.mdoc = mdoc
				mdoc.original_mentity = mmodule
			end
			# Is the module generated?
			mmodule.is_generated = not decl.get_annotations("generated").is_empty
		end
	end

	# Resolve the module identification for a given `AModuleName`.
	#
	# This method handles qualified names as used in `AModuleName`.
	fun search_module_by_amodule_name(n_name: AModuleName, mgroup: nullable MGroup): nullable MModule
	do
		var mod_name = n_name.n_id.text

		# If a quad is given, we ignore the starting group (go from path)
		if n_name.n_quad != null then mgroup = null

		# If name not qualified, just search the name
		if n_name.n_path.is_empty then
			# Fast search if no n_path
			return search_mmodule_by_name(n_name, mgroup, mod_name)
		end

		# If qualified and in a group
		if mgroup != null then
			# First search in the package
			var r = mgroup.mpackage.root
			assert r != null
			scan_group(r)
			# Get all modules with the final name
			var res = r.mmodules_by_name(mod_name)
			# Filter out the name that does not match the qualifiers
			res = [for x in res do if match_amodulename(n_name, x) then x]
			if res.not_empty then
				if res.length > 1 then
					error(n_name, "Error: conflicting module files for `{mod_name}`: `{[for x in res do x.filepath or else x.full_name].join("`, `")}`")
				end
				return res.first
			end
		end

		# If no module yet, then assume that the first element of the path
		# Is to be searched in the path.
		var root_name = n_name.n_path.first.text

		# Search for an alias in required external packages
		if mgroup != null then
			var alias = mgroup.mpackage.import_alias(root_name)
			if alias != null then root_name = alias
		end

		var roots = search_group_in_paths(root_name, paths)
		if roots.is_empty then
			error(n_name, "Error: cannot find `{root_name}`. Tried: {paths.join(", ")}.")
			return null
		end

		var res = new ArraySet[MModule]
		for r in roots do
			# Then, for each root, collect modules that matches the qualifiers
			scan_group(r)
			var root_res = r.mmodules_by_name(mod_name)
			for x in root_res do if match_amodulename(n_name, x) then res.add x
		end
		if res.not_empty then
			if res.length > 1 then
				error(n_name, "Error: conflicting module files for `{mod_name}`: `{[for x in res do x.filepath or else x.full_name].join("`, `")}`")
			end
			return res.first
		end
		# If still nothing, just call a basic search that will fail and will produce an error message
		error(n_name, "Error: cannot find module `{mod_name}` from `{root_name}`. Tried: {paths.join(", ")}.")
		return null
	end

	# Is elements of `n_name` correspond to the group nesting of `m`?
	#
	# Basically it check that `bar::foo` matches `bar/foo.nit` and `bar/baz/foo.nit`
	# but not `baz/foo.nit` nor `foo/bar.nit`
	#
	# Is used by `search_module_by_amodule_name` to validate qualified names.
	private fun match_amodulename(n_name: AModuleName, m: MModule): Bool
	do
		var g: nullable MGroup = m.mgroup
		for grp in n_name.n_path.reverse_iterator do
			while g != null and grp.text != g.name do
				g = g.parent
			end
		end
		return g != null
	end

	# Analyze the module importation and fill the module_importation_hierarchy
	#
	# If the importation was already done (`nmodule.is_importation_done`), this method does a no-op.
	#
	# REQUIRE `nmodule.mmodule != null`
	# ENSURE `nmodule.is_importation_done`
	fun build_module_importation(nmodule: AModule)
	do
		if nmodule.is_importation_done then return
		nmodule.is_importation_done = true
		var mmodule = nmodule.mmodule.as(not null)
		var stdimport = true
		var imported_modules = new Array[MModule]
		for aimport in nmodule.n_imports do
			# Do not imports conditional
			var atconditionals = aimport.get_annotations("conditional")
			if atconditionals.not_empty then continue

			stdimport = false
			if not aimport isa AStdImport then
				continue
			end

			# Load the imported module
			var sup = search_module_by_amodule_name(aimport.n_name, mmodule.mgroup)
			if sup == null then
				mmodule.is_broken = true
				nmodule.mmodule = null # invalidate the module
				continue # Skip error
			end
			var ast = sup.load(self)
			if ast == null then
				mmodule.is_broken = true
				nmodule.mmodule = null # invalidate the module
				continue # Skip error
			end

			aimport.mmodule = sup
			imported_modules.add(sup)
			var mvisibility = aimport.n_visibility.mvisibility
			if mvisibility == protected_visibility then
				mmodule.is_broken = true
				error(aimport.n_visibility, "Error: only properties can be protected.")
				mmodule.is_broken = true
				nmodule.mmodule = null # invalidate the module
				return
			end
			if sup == mmodule then
				error(aimport.n_name, "Error: dependency loop in module {mmodule}.")
				mmodule.is_broken = true
				nmodule.mmodule = null # invalidate the module
			end
			if sup.in_importation < mmodule then
				error(aimport.n_name, "Error: dependency loop between modules {mmodule} and {sup}.")
				mmodule.is_broken = true
				nmodule.mmodule = null # invalidate the module
				return
			end
			mmodule.set_visibility_for(sup, mvisibility)
		end
		if stdimport then
			var mod_name = "core"
			var sup = self.get_mmodule_by_name(nmodule, null, mod_name)
			if sup == null then
				mmodule.is_broken = true
				nmodule.mmodule = null # invalidate the module
			else # Skip error
				imported_modules.add(sup)
				mmodule.set_visibility_for(sup, public_visibility)
			end
		end

		# Declare conditional importation
		for aimport in nmodule.n_imports do
			if not aimport isa AStdImport then continue
			var atconditionals = aimport.get_annotations("conditional")
			if atconditionals.is_empty then continue

			var suppath = search_module_by_amodule_name(aimport.n_name, mmodule.mgroup)
			if suppath == null then continue # skip error

			for atconditional in atconditionals do
				var nargs = atconditional.n_args
				if nargs.is_empty then
					error(atconditional, "Syntax Error: `conditional` expects module identifiers as arguments.")
					continue
				end

				# The rule
				var rule = new Array[MModule]

				# First element is the goal, thus
				rule.add suppath

				# Second element is the first condition, that is to be a client of the current module
				rule.add mmodule

				# Other condition are to be also a client of each modules indicated as arguments of the annotation
				for narg in nargs do
					var id = narg.as_id
					if id == null then
						error(narg, "Syntax Error: `conditional` expects module identifier as arguments.")
						continue
					end

					var mp = search_mmodule_by_name(narg, mmodule.mgroup, id)
					if mp == null then continue

					rule.add mp
				end

				conditional_importations.add rule
			end
		end

		mmodule.set_imported_mmodules(imported_modules)

		apply_conditional_importations(mmodule)

		self.toolcontext.info("{mmodule} imports {mmodule.in_importation.direct_greaters.join(", ")}", 3)

		# Force `core` to be public if imported
		for sup in mmodule.in_importation.greaters do
			if sup.name == "core" then
				mmodule.set_visibility_for(sup, public_visibility)
			end
		end

		# TODO: Correctly check for useless importation
		# It is even doable?
		var directs = mmodule.in_importation.direct_greaters
		for nim in nmodule.n_imports do
			if not nim isa AStdImport then continue
			var im = nim.mmodule
			if im == null then continue
			if directs.has(im) then continue
			# This generates so much noise that it is simpler to just comment it
			#warning(nim, "Warning: possible useless importation of {im}")
		end
	end

	# Global list of conditional importation rules.
	#
	# Each rule is a "Horn clause"-like sequence of modules.
	# It means that the first module is the module to automatically import.
	# The remaining modules are the conditions of the rule.
	#
	# Rules are declared by `build_module_importation` and are applied by `apply_conditional_importations`
	# (and `build_module_importation` that calls it).
	#
	# TODO (when the loader will be rewritten): use a better representation and move up rules in the model.
	var conditional_importations = new Array[SequenceRead[MModule]]

	# Extends the current importations according to imported rules about conditional importation
	fun apply_conditional_importations(mmodule: MModule)
	do
		# Because a conditional importation may cause additional conditional importation, use a fixed point
		# The rules are checked naively because we assume that it does not worth to be optimized
		var check_conditional_importations = true
		while check_conditional_importations do
			check_conditional_importations = false

			for ci in conditional_importations do
				# Check conditions
				for i in [1..ci.length[ do
					var m = ci[i]
					# Is imported?
					if mmodule == m or not mmodule.in_importation.greaters.has(m) then continue label
				end
				# Still here? It means that all conditions modules are loaded and imported

				# Identify the module to automatically import
				var sup = ci.first
				var ast = sup.load(self)
				if ast == null then continue

				# Do nothing if already imported
				if mmodule.in_importation.greaters.has(sup) then continue label

				# Import it
				self.toolcontext.info("{mmodule} conditionally imports {sup}", 3)
				# TODO visibility rules (currently always public)
				mmodule.set_visibility_for(sup, public_visibility)
				# TODO linearization rules (currently added at the end in the order of the rules)
				mmodule.set_imported_mmodules([sup])

				# Prepare to reapply the rules
				check_conditional_importations = true
			end label
		end
	end

	# All the loaded modules
	var nmodules = new Array[AModule]

	# Register the nmodule associated to each mmodule
	#
	# Public clients need to use `mmodule2node` to access stuff.
	private var mmodule2nmodule = new HashMap[MModule, AModule]

	# Retrieve the associated AST node of a mmodule.
	# This method is used to associate model entity with syntactic entities.
	#
	# If the module is not associated with a node, returns null.
	fun mmodule2node(mmodule: MModule): nullable AModule
	do
		return mmodule2nmodule.get_or_null(mmodule)
	end
end

redef class MModule
	# Force the parsing of the module using `modelbuilder`.
	#
	# If the module was already parsed, the existing ASI is returned.
	# Else the source file is loaded, and parsed and some
	#
	# The importation is not done by this
	#
	# REQUIRE: `filepath != null`
	# ENSURE: `modelbuilder.parsed_modules.has(self)`
	fun parse(modelbuilder: ModelBuilder): nullable AModule
	do
		# Already known and loaded? then return it
		var nmodule = modelbuilder.mmodule2nmodule.get_or_null(self)
		if nmodule != null then return nmodule

		var filepath = self.filepath
		assert filepath != null
		# Load it manually
		nmodule = modelbuilder.load_module_ast(filepath)
		if nmodule == null then return null # forward error

		# build the mmodule
		nmodule.mmodule = self
		self.location = nmodule.location
		modelbuilder.build_a_mmodule(mgroup, nmodule)

		modelbuilder.parsed_modules.add self
		return nmodule
	end

	# Parse and process importation of a given MModule.
	#
	# Basically chains `parse` and `build_module_importation`.
	fun load(modelbuilder: ModelBuilder): nullable AModule
	do
		var nmodule = parse(modelbuilder)
		if nmodule == null then return null

		modelbuilder.build_module_importation(nmodule)
		return nmodule
	end
end

redef class MPackage
	# The associated `.ini` file, if any
	#
	# The `ini` file is given as is and might contain invalid or missing information.
	#
	# Some packages, like stand-alone packages or virtual packages have no `ini` file associated.
	var ini: nullable IniFile = null

	# Array of relative source paths excluded according to the `source.exclude` key of the `ini`
	var excludes: nullable Array[String] is lazy do
		var ini = self.ini
		if ini == null then return null
		var exclude = ini["source.exclude"]
		if exclude == null then return null
		var excludes = exclude.split(":")
		return excludes
	end

	# Does the source inclusion/inclusion rules of the package `ini` accept such path?
	fun accept(filepath: String): Bool
	do
		var excludes = self.excludes
		if excludes != null then
			var relpath = root.filepath.relpath(filepath)
			if excludes.has(relpath) then return false
		end
		return true
	end

	# Get the name to search for, for a `root_name` declared as `import` in `ini`
	fun import_alias(root_name: String): nullable String
	do
		var map = import_aliases_parsed
		if map == null then return null

		var val = map.get_or_null(root_name)
		if val == null then return null

		return val.dir_name
	end

	private var import_aliases_parsed: nullable Map[String, ExternalPackage] is lazy do
		var ini = ini
		if ini == null then return null

		var import_line = ini["package.import"]
		if import_line == null then return null

		var map = import_line.parse_import
		if map.is_empty then return null

		return map
	end
end

redef class MGroup
	# Is the group interesting for a final user?
	#
	# Groups are mandatory in the model but for simple packages they are not
	# always interesting.
	#
	# A interesting group has, at least, one of the following true:
	#
	# * it has 2 modules or more
	# * it has a subgroup
	# * it has a documentation
	fun is_interesting: Bool
	do
		return mmodules.length > 1 or
			not in_nesting.direct_smallers.is_empty or
			mdoc != null or
			(mmodules.length == 1 and default_mmodule == null)
	end

	# Are files and directories in self scanned?
	#
	# See `ModelBuilder::scan_group`.
	var scanned = false

	# Return the modules in self and subgroups named `name`.
	#
	# If `self` is not scanned (see `ModelBuilder::scan_group`) the
	# results might be partial.
	fun mmodules_by_name(name: String): Array[MModule]
	do
		var res = new Array[MModule]
		for g in in_nesting.smallers do
			for mp in g.mmodules do
				if mp.name == name then
					res.add mp
				end
			end
		end
		return res
	end
end

redef class SourceFile
	# Associated mmodule, once created
	var mmodule: nullable MModule = null
end

redef class AStdImport
	# The imported module once determined
	var mmodule: nullable MModule = null
end

redef class AModule
	# The associated MModule once build by a `ModelBuilder`
	var mmodule: nullable MModule = null

	# Flag that indicate if the importation is already completed
	var is_importation_done: Bool = false
end
