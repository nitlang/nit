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

# Load nit source files and build the associated model
#
# FIXME better doc
#
# FIXME split this module into submodules
# FIXME add missing error checks
module modelbuilder

import parser
import model
import poset
import opts
import toolcontext
import phase

###

redef class ToolContext
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

	fun modelbuilder: ModelBuilder do return modelbuilder_real.as(not null)
	private var modelbuilder_real: nullable ModelBuilder = null

	var modelize_class_phase: Phase = new ModelizeClassPhase(self, null)
end

private class ModelizeClassPhase
	super Phase

	redef fun process_nmodule(nmodule)
	do
		toolcontext.modelbuilder.build_classes(nmodule)
	end
end

# A model builder knows how to load nit source files and build the associated model
class ModelBuilder
	# The model where new modules, classes and properties are added
	var model: Model

	# The toolcontext used to control the interaction with the user (getting options and displaying messages)
	var toolcontext: ToolContext

	# Run phases on all loaded modules
	fun run_phases
	do
		var mmodules = model.mmodules.to_a
		model.mmodule_importation_hierarchy.sort(mmodules)
		var nmodules = new Array[AModule]
		for mm in mmodules do
			nmodules.add(mmodule2nmodule[mm])
		end
		toolcontext.run_phases(nmodules)
	end

	# Instantiate a modelbuilder for a model and a toolcontext
	# Important, the options of the toolcontext must be correctly set (parse_option already called)
	init(model: Model, toolcontext: ToolContext)
	do
		self.model = model
		self.toolcontext = toolcontext
		assert toolcontext.modelbuilder_real == null
		toolcontext.modelbuilder_real = self

		# Setup the paths value
		paths.append(toolcontext.opt_path.value)

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

	# Load a bunch of modules.
	# `modules' can contains filenames or module names.
	# Imported modules are automatically loaded and modelized.
	# The result is the corresponding model elements.
	# Errors and warnings are printed with the toolcontext.
	#
	# Note: class and property model element are not analysed.
	fun parse(modules: Sequence[String]): Array[MModule]
	do
		var time0 = get_time
		# Parse and recursively load
		self.toolcontext.info("*** PARSE ***", 1)
		var mmodules = new Array[MModule]
		for a in modules do
			var nmodule = self.load_module(null, a)
			if nmodule == null then continue # Skip error
			mmodules.add(nmodule.mmodule.as(not null))
		end
		var time1 = get_time
		self.toolcontext.info("*** END PARSE: {time1-time0} ***", 2)

		self.toolcontext.check_errors
		return mmodules
	end

	# Return a class named `name' visible by the module `mmodule'.
	# Visibility in modules is correctly handled.
	# If no such a class exists, then null is returned.
	# If more than one class exists, then an error on `anode' is displayed and null is returned.
	# FIXME: add a way to handle class name conflict
	fun try_get_mclass_by_name(anode: ANode, mmodule: MModule, name: String): nullable MClass
	do
		var classes = model.get_mclasses_by_name(name)
		if classes == null then
			return null
		end

		var res: nullable MClass = null
		for mclass in classes do
			if not mmodule.in_importation <= mclass.intro_mmodule then continue
			if not mmodule.is_visible(mclass.intro_mmodule, mclass.visibility) then continue
			if res == null then
				res = mclass
			else
				error(anode, "Ambigous class name '{name}'; conflict between {mclass.full_name} and {res.full_name}")
				return null
			end
		end
		return res
	end

	# Return a property named `name' on the type `mtype' visible in the module `mmodule'.
	# Visibility in modules is correctly handled.
	# Protected properties are returned (it is up to the caller to check and reject protected properties).
	# If no such a property exists, then null is returned.
	# If more than one property exists, then an error on `anode' is displayed and null is returned.
	# FIXME: add a way to handle property name conflict
	fun try_get_mproperty_by_name2(anode: ANode, mmodule: MModule, mtype: MType, name: String): nullable MProperty
	do
		var props = self.model.get_mproperties_by_name(name)
		if props == null then
			return null
		end

		var cache = self.try_get_mproperty_by_name2_cache[mmodule, mtype, name]
		if cache != null then return cache

		var res: nullable MProperty = null
		var ress: nullable Array[MProperty] = null
		for mprop in props do
			if not mtype.has_mproperty(mmodule, mprop) then continue
			if not mmodule.is_visible(mprop.intro_mclassdef.mmodule, mprop.visibility) then continue
			if res == null then
				res = mprop
			else
				var restype = res.intro_mclassdef.bound_mtype
				var mproptype = mprop.intro_mclassdef.bound_mtype
				if restype.is_subtype(mmodule, null, mproptype) then
					# we keep res
				else if mproptype.is_subtype(mmodule, null, restype) then
					res = mprop
				else
					if ress == null then ress = new Array[MProperty]
					ress.add(mprop)
				end
			end
		end
		if ress != null then
			var restype = res.intro_mclassdef.bound_mtype
			for mprop in ress do
				var mproptype = mprop.intro_mclassdef.bound_mtype
				if not restype.is_subtype(mmodule, null, mproptype) then
					self.error(anode, "Ambigous property name '{name}' for {mtype}; conflict between {mprop.full_name} and {res.full_name}")
					return null
				end
			end
		end

		self.try_get_mproperty_by_name2_cache[mmodule, mtype, name] = res
		return res
	end

	private var try_get_mproperty_by_name2_cache: HashMap3[MModule, MType, String, nullable MProperty] = new HashMap3[MModule, MType, String, nullable MProperty]


	# Alias for try_get_mproperty_by_name2(anode, mclassdef.mmodule, mclassdef.mtype, name)
	fun try_get_mproperty_by_name(anode: ANode, mclassdef: MClassDef, name: String): nullable MProperty
	do
		return try_get_mproperty_by_name2(anode, mclassdef.mmodule, mclassdef.bound_mtype, name)
	end

	# The list of directories to search for top level modules
	# The list is initially set with :
	#   * the toolcontext --path option
	#   * the NIT_PATH environment variable
	#   * some heuristics including the NIT_DIR environment variable and the progname of the process
	# Path can be added (or removed) by the client
	var paths: Array[String] = new Array[String]

	# Get a module by its short name; if required, the module is loaded, parsed and its hierarchies computed.
	# If `mmodule' is set, then the module search starts from it up to the top level (see `paths');
	# if `mmodule' is null then the module is searched in the top level only.
	# If no module exists or there is a name conflict, then an error on `anode' is displayed and null is returned.
	# FIXME: add a way to handle module name conflict
	fun get_mmodule_by_name(anode: ANode, mmodule: nullable MModule, name: String): nullable MModule
	do
		var origmmodule = mmodule
		var modules = model.get_mmodules_by_name(name)

		var tries = new Array[String]

		var lastmodule = mmodule
		while mmodule != null do
			var dirname = mmodule.location.file.filename.dirname

			# Determine the owner
			var owner: nullable MModule
			if dirname.basename("") != mmodule.name then
				owner = mmodule.direct_owner
			else
				owner = mmodule
			end

			# First, try the already known nested modules
			if modules != null then
				for candidate in modules do
					if candidate.direct_owner == owner then
						return candidate
					end
				end
			end

			# Second, try the directory to find a file
			var try_file = dirname + "/" + name + ".nit"
			tries.add try_file
			if try_file.file_exists then
				var res = self.load_module(owner, try_file.simplify_path)
				if res == null then return null # Forward error
				return res.mmodule.as(not null)
			end

			# Third, try if the requested module is itself an owner
			try_file = dirname + "/" + name + "/" + name + ".nit"
			if try_file.file_exists then
				var res = self.load_module(owner, try_file.simplify_path)
				if res == null then return null # Forward error
				return res.mmodule.as(not null)
			end

			lastmodule = mmodule
			mmodule = mmodule.direct_owner
		end

		if modules != null then
			for candidate in modules do
				if candidate.direct_owner == null then
					return candidate
				end
			end
		end

		# Look at some known directories
		var lookpaths = self.paths

		# Look in the directory of the last module also (event if not in the path)
		if lastmodule != null then
			var dirname = lastmodule.location.file.filename.dirname
			if dirname.basename("") == lastmodule.name then
				dirname = dirname.dirname
			end
			if not lookpaths.has(dirname) then
				lookpaths = lookpaths.to_a
				lookpaths.add(dirname)
			end
		end

		var candidate: nullable String = null
		for dirname in lookpaths do
			var try_file = (dirname + "/" + name + ".nit").simplify_path
			tries.add try_file
			if try_file.file_exists then
				if candidate == null then
					candidate = try_file
				else if candidate != try_file then
					error(anode, "Error: conflicting module file for {name}: {candidate} {try_file}")
				end
			end
			try_file = (dirname + "/" + name + "/" + name + ".nit").simplify_path
			if try_file.file_exists then
				if candidate == null then
					candidate = try_file
				else if candidate != try_file then
					error(anode, "Error: conflicting module file for {name}: {candidate} {try_file}")
				end
			end
		end
		if candidate == null then
			if origmmodule != null then
				error(anode, "Error: cannot find module {name} from {origmmodule}. tried {tries.join(", ")}")
			else
				error(anode, "Error: cannot find module {name}. tried {tries.join(", ")}")
			end
			return null
		end
		var res = self.load_module(mmodule, candidate)
		if res == null then return null # Forward error
		return res.mmodule.as(not null)
	end

	# Try to load a module using a path.
	# Display an error if there is a problem (IO / lexer / parser) and return null
	# Note: usually, you do not need this method, use `get_mmodule_by_name` instead.
	fun load_module(owner: nullable MModule, filename: String): nullable AModule
	do
		if not filename.file_exists then
			self.toolcontext.error(null, "Error: file {filename} not found.")
			return null
		end

		var x = if owner != null then owner.to_s else "."
		self.toolcontext.info("load module {filename} in {x}", 2)

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

		# Check the module name
		var mod_name = filename.basename(".nit")
		var decl = nmodule.n_moduledecl
		if decl == null then
			#warning(nmodule, "Warning: Missing 'module' keyword") #FIXME: NOT YET FOR COMPATIBILITY
		else
			var decl_name = decl.n_name.n_id.text
			if decl_name != mod_name then
				error(decl.n_name, "Error: module name missmatch; declared {decl_name} file named {mod_name}")
			end
		end

		# Create the module
		var mmodule = new MModule(model, owner, mod_name, nmodule.location)
		nmodule.mmodule = mmodule
		nmodules.add(nmodule)
		self.mmodule2nmodule[mmodule] = nmodule

		build_module_importation(nmodule)

		return nmodule
	end

	# Analysis the module importation and fill the module_importation_hierarchy
	private fun build_module_importation(nmodule: AModule)
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
			var mod_name = aimport.n_name.n_id.text
			var sup = self.get_mmodule_by_name(aimport.n_name, mmodule, mod_name)
			if sup == null then continue # Skip error
			imported_modules.add(sup)
			var mvisibility = aimport.n_visibility.mvisibility
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
	end

	# All the loaded modules
	var nmodules: Array[AModule] = new Array[AModule]

	# Visit the AST and create the MClass objects
	private fun build_a_mclass(nmodule: AModule, nclassdef: AClassdef)
	do
		var mmodule = nmodule.mmodule.as(not null)

		var name: String
		var nkind: nullable AClasskind
		var mkind: MClassKind
		var nvisibility: nullable AVisibility
		var mvisibility: nullable MVisibility
		var arity = 0
		if nclassdef isa AStdClassdef then
			name = nclassdef.n_id.text
			nkind = nclassdef.n_classkind
			mkind = nkind.mkind
			nvisibility = nclassdef.n_visibility
			mvisibility = nvisibility.mvisibility
			arity = nclassdef.n_formaldefs.length
		else if nclassdef isa ATopClassdef then
			name = "Object"
			nkind = null
			mkind = interface_kind
			nvisibility = null
			mvisibility = public_visibility
		else if nclassdef isa AMainClassdef then
			name = "Sys"
			nkind = null
			mkind = concrete_kind
			nvisibility = null
			mvisibility = public_visibility
		else
			abort
		end

		var mclass = try_get_mclass_by_name(nclassdef, mmodule, name)
		if mclass == null then
			mclass = new MClass(mmodule, name, arity, mkind, mvisibility)
			#print "new class {mclass}"
		else if nclassdef isa AStdClassdef and nmodule.mclass2nclassdef.has_key(mclass) then
			error(nclassdef, "Error: A class {name} is already defined at line {nmodule.mclass2nclassdef[mclass].location.line_start}.")
			return
		else if nclassdef isa AStdClassdef and nclassdef.n_kwredef == null then
			error(nclassdef, "Redef error: {name} is an imported class. Add the redef keyword to refine it.")
			return
		else if mclass.arity != arity then
			error(nclassdef, "Redef error: Formal parameter arity missmatch; got {arity}, expected {mclass.arity}.")
			return
		else if nkind != null and mkind != concrete_kind and mclass.kind != mkind then
			error(nkind, "Error: refinement changed the kind from a {mclass.kind} to a {mkind}")
		else if nvisibility != null and mvisibility != public_visibility and mclass.visibility != mvisibility then
			error(nvisibility, "Error: refinement changed the visibility from a {mclass.visibility} to a {mvisibility}")
		end
		nclassdef.mclass = mclass
		nmodule.mclass2nclassdef[mclass] = nclassdef
	end

	# Visit the AST and create the MClassDef objects
	private fun build_a_mclassdef(nmodule: AModule, nclassdef: AClassdef)
	do
		var mmodule = nmodule.mmodule.as(not null)
		var objectclass = try_get_mclass_by_name(nmodule, mmodule, "Object")
		var mclass = nclassdef.mclass
		if mclass == null then return # Skip error
		#var mclassdef = nclassdef.mclassdef.as(not null)

		var names = new Array[String]
		var bounds = new Array[MType]
		if nclassdef isa AStdClassdef and mclass.arity > 0 then
			# Collect formal parameter names
			for i in [0..mclass.arity[ do
				var nfd = nclassdef.n_formaldefs[i]
				var ptname = nfd.n_id.text
				if names.has(ptname) then
					error(nfd, "Error: A formal parameter type `{ptname}' already exists")
					return
				end
				names.add(ptname)
			end

			# Revolve bound for formal parameter names
			for i in [0..mclass.arity[ do
				var nfd = nclassdef.n_formaldefs[i]
				var nfdt = nfd.n_type
				if nfdt != null then
					var bound = resolve_mtype_unchecked(nclassdef, nfdt, false)
					if bound == null then return # Forward error
					if bound.need_anchor then
						# No F-bounds!
						error(nfd, "Error: Formal parameter type `{names[i]}' bounded with a formal parameter type")
					else
						bounds.add(bound)
					end
				else if mclass.mclassdefs.is_empty then
					# No bound, then implicitely bound by nullable Object
					bounds.add(objectclass.mclass_type.as_nullable)
				else
					# Inherit the bound
					bounds.add(mclass.intro.bound_mtype.arguments[i])
				end
			end
		end

		var bound_mtype = mclass.get_mtype(bounds)
		var mclassdef = new MClassDef(mmodule, bound_mtype, nclassdef.location, names)
		nclassdef.mclassdef = mclassdef
		self.mclassdef2nclassdef[mclassdef] = nclassdef

		if mclassdef.is_intro then
			self.toolcontext.info("{mclassdef} introduces new {mclass.kind} {mclass.full_name}", 3)
		else
			self.toolcontext.info("{mclassdef} refine {mclass.kind} {mclass.full_name}", 3)
		end
	end

	# Visit the AST and set the super-types of the MClassdef objects
	private fun collect_a_mclassdef_inheritance(nmodule: AModule, nclassdef: AClassdef)
	do
		var mmodule = nmodule.mmodule.as(not null)
		var objectclass = try_get_mclass_by_name(nmodule, mmodule, "Object")
		var mclass = nclassdef.mclass.as(not null)
		var mclassdef = nclassdef.mclassdef.as(not null)

		var specobject = true
		var supertypes = new Array[MClassType]
		if nclassdef isa AStdClassdef then
			for nsc in nclassdef.n_superclasses do
				specobject = false
				var ntype = nsc.n_type
				var mtype = resolve_mtype_unchecked(nclassdef, ntype, false)
				if mtype == null then continue # Skip because of error
				if not mtype isa MClassType then
					error(ntype, "Error: supertypes cannot be a formal type")
					return
				end
				supertypes.add mtype
				#print "new super : {mclass} < {mtype}"
			end
		end
		if specobject and mclass.name != "Object" and objectclass != null and mclassdef.is_intro then
			supertypes.add objectclass.mclass_type
		end

		mclassdef.set_supertypes(supertypes)
		if not supertypes.is_empty then self.toolcontext.info("{mclassdef} new super-types: {supertypes.join(", ")}", 3)
	end

	# Check the validity of the specialization heirarchy
	private fun check_supertypes(nmodule: AModule, nclassdef: AClassdef)
	do
		var mmodule = nmodule.mmodule.as(not null)
		var objectclass = try_get_mclass_by_name(nmodule, mmodule, "Object")
		var mclass = nclassdef.mclass.as(not null)
		var mclassdef = nclassdef.mclassdef.as(not null)

		for s in mclassdef.supertypes do
			if s.is_subtype(mmodule, mclassdef.bound_mtype, mclassdef.bound_mtype) then
				error(nclassdef, "Error: Inheritance loop for class {mclass} with type {s}")
			end
		end
	end

	# Build the classes of the module `nmodule'.
	# REQUIRE: classes of imported modules are already build. (let `phase' do the job)
	private fun build_classes(nmodule: AModule)
	do
		# Force building recursively
		if nmodule.build_classes_is_done then return
		nmodule.build_classes_is_done = true
		var mmodule = nmodule.mmodule.as(not null)
		for imp in mmodule.in_importation.direct_greaters do

			build_classes(mmodule2nmodule[imp])
		end

		# Create all classes
		for nclassdef in nmodule.n_classdefs do
			self.build_a_mclass(nmodule, nclassdef)
		end

		# Create all classdefs
		for nclassdef in nmodule.n_classdefs do
			self.build_a_mclassdef(nmodule, nclassdef)
		end

		for nclassdef in nmodule.n_classdefs do
			if nclassdef.mclassdef == null then return # forward error
		end

		# Create inheritance on all classdefs
		for nclassdef in nmodule.n_classdefs do
			self.collect_a_mclassdef_inheritance(nmodule, nclassdef)
		end

		# Create the mclassdef hierarchy
		for nclassdef in nmodule.n_classdefs do
			var mclassdef = nclassdef.mclassdef.as(not null)
			mclassdef.add_in_hierarchy
		end

		# Check inheritance
		for nclassdef in nmodule.n_classdefs do
			self.check_supertypes(nmodule, nclassdef)
		end

		# Check unchecked ntypes
		for nclassdef in nmodule.n_classdefs do
			if nclassdef isa AStdClassdef then
				# check bound of formal parameter
				for nfd in  nclassdef.n_formaldefs do
					var nfdt = nfd.n_type
					if nfdt != null and nfdt.mtype != null then
						var bound = resolve_mtype(nclassdef, nfdt)
						if bound == null then return # Forward error
					end
				end
				# check declared super types
				for nsc in nclassdef.n_superclasses do
					var ntype = nsc.n_type
					if ntype.mtype != null then
						var mtype = resolve_mtype(nclassdef, ntype)
						if mtype == null then return # Forward error
					end
				end
			end

		end

		# TODO: Check that the super-class is not intrusive

		# TODO: Check that the super-class is not already known (by transitivity)
	end

	# Register the nmodule associated to each mmodule
	# FIXME: why not refine the MModule class with a nullable attribute?
	var mmodule2nmodule: HashMap[MModule, AModule] = new HashMap[MModule, AModule]
	# Register the nclassdef associated to each mclassdef
	# FIXME: why not refine the MClassDef class with a nullable attribute?
	var mclassdef2nclassdef: HashMap[MClassDef, AClassdef] = new HashMap[MClassDef, AClassdef]

	# Return the static type associated to the node `ntype'.
	# `classdef' is the context where the call is made (used to understand formal types)
	# The mmodule used as context is `nclassdef.mmodule'
	# In case of problem, an error is displayed on `ntype' and null is returned.
	# FIXME: the name "resolve_mtype" is awful
	fun resolve_mtype_unchecked(nclassdef: AClassdef, ntype: AType, with_virtual: Bool): nullable MType
	do
		var name = ntype.n_id.text
		var mclassdef = nclassdef.mclassdef
		var mmodule = nclassdef.parent.as(AModule).mmodule.as(not null)
		var res: MType

		# Check virtual type
		if mclassdef != null and with_virtual then
			var prop = try_get_mproperty_by_name(ntype, mclassdef, name).as(nullable MVirtualTypeProp)
			if prop != null then
				if not ntype.n_types.is_empty then
					error(ntype, "Type error: formal type {name} cannot have formal parameters.")
				end
				res = prop.mvirtualtype
				if ntype.n_kwnullable != null then res = res.as_nullable
				ntype.mtype = res
				return res
			end
		end

		# Check parameter type
		if mclassdef != null and mclassdef.parameter_names.has(name) then
			if not ntype.n_types.is_empty then
				error(ntype, "Type error: formal type {name} cannot have formal parameters.")
			end
			for i in [0..mclassdef.parameter_names.length[ do
				if mclassdef.parameter_names[i] == name then
					res = mclassdef.mclass.mclass_type.arguments[i]
					if ntype.n_kwnullable != null then res = res.as_nullable
					ntype.mtype = res
					return res
				end
			end
			abort
		end

		# Check class
		var mclass = try_get_mclass_by_name(ntype, mmodule, name)
		if mclass != null then
			var arity = ntype.n_types.length
			if arity != mclass.arity then
				if arity == 0 then
					error(ntype, "Type error: '{name}' is a generic class.")
				else if mclass.arity == 0 then
					error(ntype, "Type error: '{name}' is not a generic class.")
				else
					error(ntype, "Type error: '{name}' has {mclass.arity} parameters ({arity} are provided).")
				end
				return null
			end
			if arity == 0 then
				res = mclass.mclass_type
				if ntype.n_kwnullable != null then res = res.as_nullable
				ntype.mtype = res
				return res
			else
				var mtypes = new Array[MType]
				for nt in ntype.n_types do
					var mt = resolve_mtype_unchecked(nclassdef, nt, with_virtual)
					if mt == null then return null # Forward error
					mtypes.add(mt)
				end
				res = mclass.get_mtype(mtypes)
				if ntype.n_kwnullable != null then res = res.as_nullable
				ntype.mtype = res
				return res
			end
		end

		# If everything fail, then give up :(
		error(ntype, "Type error: class {name} not found in module {mmodule}.")
		return null
	end

	# Return the static type associated to the node `ntype'.
	# `classdef' is the context where the call is made (used to understand formal types)
	# The mmodule used as context is `nclassdef.mmodule'
	# In case of problem, an error is displayed on `ntype' and null is returned.
	# FIXME: the name "resolve_mtype" is awful
	fun resolve_mtype(nclassdef: AClassdef, ntype: AType): nullable MType
	do
		var mtype = ntype.mtype
		if mtype == null then mtype = resolve_mtype_unchecked(nclassdef, ntype, true)
		if mtype == null then return null # Forward error

		if ntype.checked_mtype then return mtype
		if mtype isa MGenericType then
			var mmodule = nclassdef.parent.as(AModule).mmodule.as(not null)
			var mclassdef = nclassdef.mclassdef
			var mclass = mtype.mclass
			for i in [0..mclass.arity[ do
				var bound = mclass.intro.bound_mtype.arguments[i]
				var nt = ntype.n_types[i]
				var mt = resolve_mtype(nclassdef, nt)
				if mt == null then return null # forward error
				if not mt.is_subtype(mmodule, mclassdef.bound_mtype, bound) then
					error(nt, "Type error: expected {bound}, got {mt}")
					return null
				end
			end
		end
		ntype.checked_mtype = true
		return mtype
	end

	# Helper function to display an error on a node.
	# Alias for `self.toolcontext.error(n.hot_location, text)'
	fun error(n: ANode, text: String)
	do
		self.toolcontext.error(n.hot_location, text)
	end

	# Helper function to display a warning on a node.
	# Alias for: `self.toolcontext.warning(n.hot_location, text)'
	fun warning(n: ANode, text: String)
	do
		self.toolcontext.warning(n.hot_location, text)
	end

	# Force to get the primitive method named `name' on the type `recv' or do a fatal error on `n'
	fun force_get_primitive_method(n: ANode, name: String, recv: MType, mmodule: MModule): MMethod
	do
		var res = mmodule.try_get_primitive_method(name, recv)
		if res == null then
			self.toolcontext.fatal_error(n.hot_location, "Fatal Error: {recv} must have a property named {name}.")
			abort
		end
		return res
	end
end

redef class AModule
	# The associated MModule once build by a `ModelBuilder'
	var mmodule: nullable MModule
	# Flag that indicate if the importation is already completed
	var is_importation_done: Bool = false
	# Flag that indicate if the class and prop building is already completed
	var build_classes_is_done: Bool = false
	# What is the AClassdef associated to a MClass?
	# Used to check multiple definition of a class.
	var mclass2nclassdef: Map[MClass, AClassdef] = new HashMap[MClass, AClassdef]

end

redef class AClassdef
	# The associated MClass once build by a `ModelBuilder'
	var mclass: nullable MClass
	# The associated MClassDef once build by a `ModelBuilder'
	var mclassdef: nullable MClassDef
end

redef class AClasskind
	# The class kind associated with the AST node class
	private fun mkind: MClassKind is abstract
end
redef class AConcreteClasskind
	redef fun mkind do return concrete_kind
end
redef class AAbstractClasskind
	redef fun mkind do return abstract_kind
end
redef class AInterfaceClasskind
	redef fun mkind do return interface_kind
end
redef class AEnumClasskind
	redef fun mkind do return enum_kind
end
redef class AExternClasskind
	redef fun mkind do return extern_kind
end

redef class AVisibility
	# The visibility level associated with the AST node class
	fun mvisibility: MVisibility is abstract
end
redef class AIntrudeVisibility
	redef fun mvisibility do return intrude_visibility
end
redef class APublicVisibility
	redef fun mvisibility do return public_visibility
end
redef class AProtectedVisibility
	redef fun mvisibility do return protected_visibility
end
redef class APrivateVisibility
	redef fun mvisibility do return private_visibility
end

redef class AType
	# The mtype associated to the node
	var mtype: nullable MType = null

	# Is the mtype a valid one?
	var checked_mtype: Bool = false
end