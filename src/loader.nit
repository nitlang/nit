# This file is part of NIT ( http://www.nitlanguage.org ).
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
module loader

import modelbuilder_base

redef class ToolContext
	# Option --path
	var opt_path = new OptionArray("Set include path for loaders (may be used more than once)", "-I", "--path")

	# Option --only-metamodel
	var opt_only_metamodel = new OptionBool("Stop after meta-model processing", "--only-metamodel")

	# Option --only-parse
	var opt_only_parse = new OptionBool("Only proceed to parse step of loaders", "--only-parse")

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

		var path_env = "NIT_PATH".environ
		if not path_env.is_empty then
			paths.append(path_env.split_with(':'))
		end

		var nit_dir = toolcontext.nit_dir
		var libname = "{nit_dir}/lib"
		if libname.file_exists then paths.add(libname)
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
			# Load imported module
			build_module_importation(nmodule)

			mmodules.add(nmodule.mmodule.as(not null))
		end
		var time1 = get_time
		self.toolcontext.info("*** END PARSE: {time1-time0} ***", 2)

		self.toolcontext.check_errors

		if toolcontext.opt_only_parse.value then
			self.toolcontext.info("*** ONLY PARSE...", 1)
			exit(0)
		end

		return mmodules.to_a
	end

	# Load recursively all modules of the group `mgroup`.
	# See `parse` for details.
	fun parse_group(mgroup: MGroup): Array[MModule]
	do
		var res = new Array[MModule]
		visit_group(mgroup)
		for mg in mgroup.in_nesting.smallers do
			for mp in mg.module_paths do
				var nmodule = self.load_module(mp.filepath)
				if nmodule == null then continue # Skip error
				# Load imported module
				build_module_importation(nmodule)

				res.add(nmodule.mmodule.as(not null))
			end
		end
		return res
	end

	# Load a bunch of modules and groups.
	# Each name can be a module or a group.
	# If it is a group then recursively all its modules are parsed.
	# See `parse` for details.
	fun parse_full(names: Sequence[String]): Array[MModule]
	do
		var time0 = get_time
		# Parse and recursively load
		self.toolcontext.info("*** PARSE ***", 1)
		var mmodules = new ArraySet[MModule]
		for a in names do
			var mgroup = self.get_mgroup(a)
			if mgroup != null then
				mmodules.add_all parse_group(mgroup)
				continue
			end
			var nmodule = self.load_module(a)
			if nmodule == null then continue # Skip error
			# Load imported module
			build_module_importation(nmodule)

			mmodules.add(nmodule.mmodule.as(not null))
		end
		var time1 = get_time
		self.toolcontext.info("*** END PARSE: {time1-time0} ***", 2)

		self.toolcontext.check_errors

		if toolcontext.opt_only_parse.value then
			self.toolcontext.info("*** ONLY PARSE...", 1)
			exit(0)
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

	# Like (and used by) `get_mmodule_by_name` but just return the ModulePath
	fun search_mmodule_by_name(anode: nullable ANode, mgroup: nullable MGroup, name: String): nullable ModulePath
	do
		# First, look in groups
		var c = mgroup
		while c != null do
			var dirname = c.filepath
			if dirname == null then break # virtual group
			if dirname.has_suffix(".nit") then break # singleton project

			# Second, try the directory to find a file
			var try_file = dirname + "/" + name + ".nit"
			if try_file.file_exists then
				var res = self.identify_file(try_file.simplify_path)
				assert res != null
				return res
			end

			# Third, try if the requested module is itself a group
			try_file = dirname + "/" + name + "/" + name + ".nit"
			if try_file.file_exists then
				var res = self.identify_file(try_file.simplify_path)
				assert res != null
				return res
			end

			c = c.parent
		end

		# Look at some known directories
		var lookpaths = self.paths

		# Look in the directory of the group project also (even if not explicitly in the path)
		if mgroup != null then
			# path of the root group
			var dirname = mgroup.mproject.root.filepath
			if dirname != null then
				dirname = dirname.join_path("..").simplify_path
				if not lookpaths.has(dirname) and dirname.file_exists then
					lookpaths = lookpaths.to_a
					lookpaths.add(dirname)
				end
			end
		end

		var candidate = search_module_in_paths(anode.hot_location, name, lookpaths)

		if candidate == null then
			if mgroup != null then
				error(anode, "Error: cannot find module {name} from {mgroup.name}. tried {lookpaths.join(", ")}")
			else
				error(anode, "Error: cannot find module {name}. tried {lookpaths.join(", ")}")
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
		var path = search_mmodule_by_name(anode, mgroup, name)
		if path == null then return null # Forward error
		var res = self.load_module(path.filepath)
		if res == null then return null # Forward error
		# Load imported module
		build_module_importation(res)
		return res.mmodule.as(not null)
	end

	# Search a module `name` from path `lookpaths`.
	# If found, the path of the file is returned
	private fun search_module_in_paths(location: nullable Location, name: String, lookpaths: Collection[String]): nullable ModulePath
	do
		var candidate: nullable String = null
		for dirname in lookpaths do
			var try_file = (dirname + "/" + name + ".nit").simplify_path
			if try_file.file_exists then
				if candidate == null then
					candidate = try_file
				else if candidate != try_file then
					# try to disambiguate conflicting modules
					var abs_candidate = module_absolute_path(candidate)
					var abs_try_file = module_absolute_path(try_file)
					if abs_candidate != abs_try_file then
						toolcontext.error(location, "Error: conflicting module file for {name}: {candidate} {try_file}")
					end
				end
			end
			try_file = (dirname + "/" + name + "/" + name + ".nit").simplify_path
			if try_file.file_exists then
				if candidate == null then
					candidate = try_file
				else if candidate != try_file then
					# try to disambiguate conflicting modules
					var abs_candidate = module_absolute_path(candidate)
					var abs_try_file = module_absolute_path(try_file)
					if abs_candidate != abs_try_file then
						toolcontext.error(location, "Error: conflicting module file for {name}: {candidate} {try_file}")
					end
				end
			end
		end
		if candidate == null then return null
		return identify_file(candidate)
	end

	# Cache for `identify_file` by realpath
	private var identified_files_by_path = new HashMap[String, nullable ModulePath]

	# All the currently identified modules.
	# See `identify_file`.
	var identified_files = new Array[ModulePath]

	# Identify a source file
	# Load the associated project and groups if required
	#
	# Silently return `null` if `path` is not a valid module path.
	fun identify_file(path: String): nullable ModulePath
	do
		# special case for not a nit file
		if path.file_extension != "nit" then
			# search dirless files in known -I paths
			if path.dirname == "" then
				var res = search_module_in_paths(null, path, self.paths)
				if res != null then return res
			end

			# Found nothing? maybe it is a group...
			var candidate = null
			if path.file_exists then
				var mgroup = get_mgroup(path)
				if mgroup != null then
					var owner_path = mgroup.filepath.join_path(mgroup.name + ".nit")
					if owner_path.file_exists then candidate = owner_path
				end
			end

			if candidate == null then
				return null
			end
			path = candidate
		end

		# Fast track, the path is already known
		var pn = path.basename(".nit")
		var rp = module_absolute_path(path)
		if identified_files_by_path.has_key(rp) then return identified_files_by_path[rp]

		# Search for a group
		var mgrouppath = path.join_path("..").simplify_path
		var mgroup = get_mgroup(mgrouppath)

		if mgroup == null then
			# singleton project
			var mproject = new MProject(pn, model)
			mgroup = new MGroup(pn, mproject, null) # same name for the root group
			mgroup.filepath = path
			mproject.root = mgroup
			toolcontext.info("found project `{pn}` at {path}", 2)
		end

		var res = new ModulePath(pn, path, mgroup)
		mgroup.module_paths.add(res)

		identified_files_by_path[rp] = res
		identified_files.add(res)
		return res
	end

	# Groups by path
	private var mgroups = new HashMap[String, nullable MGroup]

	# Return the mgroup associated to a directory path.
	# If the directory is not a group null is returned.
	#
	# Note: `paths` is also used to look for mgroups
	fun get_mgroup(dirpath: String): nullable MGroup
	do
		if not dirpath.file_exists then do
			for p in paths do
				var try = p / dirpath
				if try.file_exists then
					dirpath = try
					break label
				end
			end
			return null
		end label

		var rdp = module_absolute_path(dirpath)
		if mgroups.has_key(rdp) then
			return mgroups[rdp]
		end

		# Hack, a group is determined by:
		# * the presence of a honomymous nit file
		# * the fact that the directory is named `src`
		var pn = rdp.basename(".nit")
		var mp = dirpath.join_path(pn + ".nit").simplify_path

		var dirpath2 = dirpath
		if not mp.file_exists then
			if pn == "src" then
				# With a src directory, the group name is the name of the parent directory
				dirpath2 = rdp.dirname
				pn = dirpath2.basename("")
			else
				return null
			end
		end

		# check parent directory
		var parentpath = dirpath.join_path("..").simplify_path
		var parent = get_mgroup(parentpath)

		var mgroup
		if parent == null then
			# no parent, thus new project
			var mproject = new MProject(pn, model)
			mgroup = new MGroup(pn, mproject, null) # same name for the root group
			mproject.root = mgroup
			toolcontext.info("found project `{mproject}` at {dirpath}", 2)
		else
			mgroup = new MGroup(pn, parent.mproject, parent)
			toolcontext.info("found sub group `{mgroup.full_name}` at {dirpath}", 2)
		end
		var readme = dirpath2.join_path("README.md")
		if not readme.file_exists then readme = dirpath2.join_path("README")
		if readme.file_exists then
			var mdoc = new MDoc
			var s = new IFStream.open(readme)
			while not s.eof do
				mdoc.content.add(s.read_line)
			end
			mgroup.mdoc = mdoc
			mdoc.original_mentity = mgroup
		end
		mgroup.filepath = dirpath
		mgroups[rdp] = mgroup
		return mgroup
	end

	# Force the identification of all ModulePath of the group and sub-groups.
	fun visit_group(mgroup: MGroup) do
		var p = mgroup.filepath
		for f in p.files do
			var fp = p/f
			var g = get_mgroup(fp)
			if g != null then visit_group(g)
			identify_file(fp)
		end
	end

	# Transform relative paths (starting with '../') into absolute paths
	private fun module_absolute_path(path: String): String do
		return getcwd.join_path(path).simplify_path
	end

	# Try to load a module AST using a path.
	# Display an error if there is a problem (IO / lexer / parser) and return null
	fun load_module_ast(filename: String): nullable AModule
	do
		if filename.file_extension != "nit" then
			self.toolcontext.error(null, "Error: file {filename} is not a valid nit module.")
			return null
		end
		if not filename.file_exists then
			self.toolcontext.error(null, "Error: file {filename} not found.")
			return null
		end

		self.toolcontext.info("load module {filename}", 2)

		# Load the file
		var file = new IFStream.open(filename)
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

	# Try to load a module using a path.
	# Display an error if there is a problem (IO / lexer / parser) and return null.
	# Note: usually, you do not need this method, use `get_mmodule_by_name` instead.
	#
	# The MModule is created however, the importation is not performed,
	# therefore you should call `build_module_importation`.
	fun load_module(filename: String): nullable AModule
	do
		# Look for the module
		var file = identify_file(filename)
		if file == null then
			toolcontext.error(null, "Error: cannot find module `{filename}`.")
			return null
		end

		# Already known and loaded? then return it
		var mmodule = file.mmodule
		if mmodule != null then
			return mmodule2nmodule[mmodule]
		end

		# Load it manually
		var nmodule = load_module_ast(file.filepath)
		if nmodule == null then return null # forward error

		# build the mmodule and load imported modules
		mmodule = build_a_mmodule(file.mgroup, file.name, nmodule)

		if mmodule == null then return null # forward error

		# Update the file information
		file.mmodule = mmodule

		return nmodule
	end

	# Injection of a new module without source.
	# Used by the interpreter.
	fun load_rt_module(parent: nullable MModule, nmodule: AModule, mod_name: String): nullable AModule
	do
		# Create the module

		var mgroup = null
		if parent != null then mgroup = parent.mgroup
		var mmodule = new MModule(model, mgroup, mod_name, nmodule.location)
		nmodule.mmodule = mmodule
		nmodules.add(nmodule)
		self.mmodule2nmodule[mmodule] = nmodule

		if parent!= null then
			var imported_modules = new Array[MModule]
			imported_modules.add(parent)
			mmodule.set_visibility_for(parent, intrude_visibility)
			mmodule.set_imported_mmodules(imported_modules)
		else
			build_module_importation(nmodule)
		end

		return nmodule
	end

	# Visit the AST and create the `MModule` object
	private fun build_a_mmodule(mgroup: nullable MGroup, mod_name: String, nmodule: AModule): nullable MModule
	do
		# Check the module name
		var decl = nmodule.n_moduledecl
		if decl != null then
			var decl_name = decl.n_name.n_id.text
			if decl_name != mod_name then
				error(decl.n_name, "Error: module name missmatch; declared {decl_name} file named {mod_name}")
			end
		end

		# Check for conflicting module names in the project
		if mgroup != null then
			var others = model.get_mmodules_by_name(mod_name)
			if others != null then for other in others do
				if other.mgroup!= null and other.mgroup.mproject == mgroup.mproject then
					var node: ANode
					if decl == null then node = nmodule else node = decl.n_name
					error(node, "Error: A module named `{other.full_name}` already exists at {other.location}")
					break
				end
			end
		end

		# Create the module
		var mmodule = new MModule(model, mgroup, mod_name, nmodule.location)
		nmodule.mmodule = mmodule
		nmodules.add(nmodule)
		self.mmodule2nmodule[mmodule] = nmodule

		if decl != null then
			# Extract documentation
			var ndoc = decl.n_doc
			if ndoc != null then
				var mdoc = ndoc.to_mdoc
				mmodule.mdoc = mdoc
				mdoc.original_mentity = mmodule
			else
				advice(decl, "missing-doc", "Documentation warning: Undocumented module `{mmodule}`")
			end
			# Is the module a test suite?
			mmodule.is_test_suite = not decl.get_annotations("test_suite").is_empty
		end

		return mmodule
	end

	# Analyze the module importation and fill the module_importation_hierarchy
	#
	# Unless you used `load_module`, the importation is already done and this method does a no-op.
	fun build_module_importation(nmodule: AModule)
	do
		if nmodule.is_importation_done then return
		nmodule.is_importation_done = true
		var mmodule = nmodule.mmodule.as(not null)
		var stdimport = true
		var imported_modules = new Array[MModule]
		for aimport in nmodule.n_imports do
			stdimport = false
			if not aimport isa AStdImport then
				continue
			end
			var mgroup = mmodule.mgroup
			if aimport.n_name.n_quad != null then mgroup = null # Start from top level
			for grp in aimport.n_name.n_path do
				var path = search_mmodule_by_name(grp, mgroup, grp.text)
				if path == null then return # Skip error
				mgroup = path.mgroup
			end
			var mod_name = aimport.n_name.n_id.text
			var sup = self.get_mmodule_by_name(aimport.n_name, mgroup, mod_name)
			if sup == null then continue # Skip error
			aimport.mmodule = sup
			imported_modules.add(sup)
			var mvisibility = aimport.n_visibility.mvisibility
			if mvisibility == protected_visibility then
				error(aimport.n_visibility, "Error: only properties can be protected.")
				return
			end
			if sup == mmodule then
				error(aimport.n_name, "Error: Dependency loop in module {mmodule}.")
			end
			if sup.in_importation < mmodule then
				error(aimport.n_name, "Error: Dependency loop between modules {mmodule} and {sup}.")
				return
			end
			mmodule.set_visibility_for(sup, mvisibility)
		end
		if stdimport then
			var mod_name = "standard"
			var sup = self.get_mmodule_by_name(nmodule, null, mod_name)
			if sup != null then # Skip error
				imported_modules.add(sup)
				mmodule.set_visibility_for(sup, public_visibility)
			end
		end
		self.toolcontext.info("{mmodule} imports {imported_modules.join(", ")}", 3)
		mmodule.set_imported_mmodules(imported_modules)

		# Force standard to be public if imported
		for sup in mmodule.in_importation.greaters do
			if sup.name == "standard" then
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

# File-system location of a module (file) that is identified but not always loaded.
class ModulePath
	# The name of the module
	# (it's the basename of the filepath)
	var name: String

	# The human path of the module
	var filepath: String

	# The group (and the project) of the possible module
	var mgroup: MGroup

	# The loaded module (if any)
	var mmodule: nullable MModule = null

	redef fun to_s do return filepath
end

redef class MGroup
	# Modules paths associated with the group
	var module_paths = new Array[ModulePath]

	# Is the group interesting for a final user?
	#
	# Groups are mandatory in the model but for simple projects they are not
	# always interesting.
	#
	# A interesting group has, at least, one of the following true:
	#
	# * it has 2 modules or more
	# * it has a subgroup
	# * it has a documentation
	fun is_interesting: Bool
	do
		return module_paths.length > 1 or mmodules.length > 1 or not in_nesting.direct_smallers.is_empty or mdoc != null
	end

end

redef class AStdImport
	# The imported module once determined
	var mmodule: nullable MModule = null
end

redef class AModule
	# The associated MModule once build by a `ModelBuilder`
	var mmodule: nullable MModule
	# Flag that indicate if the importation is already completed
	var is_importation_done: Bool = false
end
