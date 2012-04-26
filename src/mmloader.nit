# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006-2008 Floréal Morandat <morandat@lirmm.fr>
# Copyright 2008 Jean Privat <jean@pryen.org>
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
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

# This module is used to load a metamodel
package mmloader

import metamodel
import opts
import toolcontext

redef class ToolContext
	super MMContext

	# Paths where to locate modules files
	readable var _paths: Array[String] = new Array[String]

	# List of module loaders
	var _loaders: Array[ModuleLoader] = new Array[ModuleLoader]

	# Option --path
	readable var _opt_path: OptionArray = new OptionArray("Set include path for loaders (may be used more than once)", "-I", "--path")

	# Option --only-metamodel
	readable var _opt_only_metamodel: OptionBool = new OptionBool("Stop after meta-model processing", "--only-metamodel")

	# Option --only-parse
	readable var _opt_only_parse: OptionBool = new OptionBool("Only proceed to parse step of loaders", "--only-parse")

	redef init
	do
		super
		option_context.add_option(opt_path, opt_only_parse, opt_only_metamodel)
	end

	# Parse and process the options given on the command line
	redef fun process_options
	do
		super

		# Setup the paths value
		paths.append(opt_path.value)

		var path_env = "NIT_PATH".environ
		if not path_env.is_empty then
			paths.append(path_env.split_with(':'))
		end

		path_env = "NIT_DIR".environ
		if not path_env.is_empty then
			var libname = "{path_env}/lib"
			if libname.file_exists then paths.add(libname)
		end

		var libname = "{sys.program_name.dirname}/../lib"
		if libname.file_exists then paths.add(libname.simplify_path)
	end

	# Load and process a module in a directory (or a parent directory).
	# If the module is already loaded, just return it without further processing.
	# If no module is found, just return null without complaining.
	private fun try_to_load(module_name: Symbol, dir: MMDirectory): nullable MMModule
	do
		# Look in the module directory
		for m in dir.modules.values do
			if m.name == module_name then return m
		end

		# print "try to load {module_name} in {dir.name} {_loaders.length}"

		for l in _loaders do
			var dir2 = l.try_to_load_dir(module_name, dir)
			if dir2 != null then
				var m = try_to_load(module_name, dir2)
				if m != null then
					dir2.owner = m
					dir.add_module(m)
					return m
				end
			end

			if l.can_handle(module_name, dir) then
				var full_name = dir.full_name_for(module_name)
				if _processing_modules.has(full_name) then
					# FIXME: Generate better error
					fatal_error(null, "Error: Dependency loop for module {full_name}")
				end
				_processing_modules.add(full_name)
				var m = l.load_and_process_module(self, module_name, dir)
				_processing_modules.remove(full_name)
				#if m != null then print "loaded {m.name} in {m.directory.name} -> {m.full_name} ({m.full_name.object_id.to_hex})"
				dir.add_module(m)
				return m
			end
		end
		return null
	end

	# List of module currently processed.
	# Used to prevent dependence loops.
	var _processing_modules: HashSet[Symbol] = new HashSet[Symbol]

	# Locate, load and analysis a module (and its supermodules) from its file name.
	# If the module is already loaded, just return it without further processing.
	# Beware, the files are automatically considered root of their directory.
	fun get_module_from_filename(filename: String): MMModule
	do
		var path = filename.dirname
		var module_name = filename.basename(".nit").to_symbol

		var dir = directory_for(path)

		if module_name.to_s == filename then
			# It's just a modulename
			# look for it in the path directory "."
			var m = try_to_load(module_name, dir)
			if m != null then return m

			# Else look for it in the path
			return get_module(module_name, null)
		end

		if not filename.file_exists then
			fatal_error(null, "Error: File {filename} not found.")
			abort
		end

		# Try to load the module where mentionned
		var m = try_to_load(module_name, dir)
		if m != null then return m

		fatal_error(null, "Error: {filename} is not a NIT source module.")
		abort
	end

	# Locate, load and analysis a module (and its supermodules).
	# If the module is already loaded, just return it without further processing.
	fun get_module(module_name: Symbol, from: nullable MMModule): MMModule
	do
		if from != null then
			var dir: nullable MMDirectory = from.directory
			while dir != null do
				var m = try_to_load(module_name, dir)
				if m != null then return m
				dir = dir.parent
			end
		end

		for p in paths do
			var m = try_to_load(module_name, directory_for(p))
			if m != null then return m
		end
		# FIXME: Generate better error
		fatal_error(null, "Error: No ressource found for module {module_name}.")
		abort
	end

	# Return the module directory associated with a given path
	private fun directory_for(path: String): MMDirectory
	do
		if _path_dirs.has_key(path) then return _path_dirs[path]
		var dir = new MMDirectory(path.to_symbol, path, null) 
		_path_dirs[path] = dir
		return dir
	end

	# Association bwtween plain path and module directories
	var _path_dirs: Map[String, MMDirectory] = new HashMap[String, MMDirectory]

	# Register a new module loader
	fun register_loader(ml: ModuleLoader) do _loaders.add(ml)
end

# A load handler know how to load a specific module type
interface ModuleLoader
	# Type of module loaded by the loader
	type MODULE: MMModule

	# Extension that the loadhandler accepts
	fun file_type: String is abstract

	# Try to load a new module directory
	fun try_to_load_dir(dirname: Symbol, parent_dir: MMDirectory): nullable MMDirectory
	do
		var fname = "{parent_dir.path}/{dirname}"
		if not fname.file_exists then return null

		var dir = new MMDirectory(parent_dir.full_name_for(dirname), fname, parent_dir)
		return dir
	end

	# Can the loadhandler load a given module?
	# Return the file found
	fun can_handle(module_name: Symbol, dir: MMDirectory): Bool
	do
		var fname = "{dir.path}/{module_name}.{file_type}"
		if fname.file_exists then return true
		return false
	end

	# Load the module and process it
	# filename is the result of can_handle
	fun load_and_process_module(context: ToolContext, module_name: Symbol, dir: MMDirectory): MODULE
	do
		var filename = "{dir.path}/{module_name}.{file_type}".simplify_path
		var m = load_module(context, module_name, dir, filename)
		if not context.opt_only_parse.value then process_metamodel(context, m)
		return m
	end

	# Load an parse the module
	private fun load_module(context: ToolContext, module_name: Symbol, dir: MMDirectory, filename: String): MODULE
	do
		var file: IFStream
		if filename == "-" then
			file = stdin
		else
			file = new IFStream.open(filename.to_s)
		end

		if file.eof then
			context.fatal_error(null, "Error: Problem in opening file {filename}")
		end
		var m = parse_file(context, file, filename, module_name, dir)
		if file != stdin then file.close
		return m
	end

	# Parse the file to load a module
	protected fun parse_file(context: ToolContext, file: IFStream, filename: String, module_name: Symbol, dir: MMDirectory): MODULE is abstract

	# Process a parsed module
	protected fun process_metamodel(context: ToolContext, mod: MODULE) is abstract
end
