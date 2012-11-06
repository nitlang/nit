# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Alexandre Terrasa <alexandre@moz-concept.com>
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

# Introduce incremental typing in naive interpreter
# Typing modes are :
# * Legacy: default mode, using request to precomputed metamodel
# * BM: binary matrix
# * CL: coloration
# * PHAND: perfect hashing using binary AND
# * PHMOD: perfect hashing using modulo
module interpretor_type_test

intrude import naive_interpreter

# Add options for incremental typing
redef class ToolContext
	# --ic-typing-mode BM | CL | PHMOD | PHAND
	var opt_ic_typing_mode = new OptionString("Incremental typing method. Possible values are:\n\t\t\t\t - BM: binary matrix\n\t\t\t\t - CL: coloration\n\t\t\t\t - PHAND: perfect hashing whith AND\n\t\t\t\t - PHMOD: perfect hashing whith MOD", "--ic-typing-mode")
	# --ic-load-mode
	var opt_ic_load_mode = new OptionString("Dynamic loading mode. Possible values are:\n\t\t\t\t - type (default): load only the new type\n\t\t\t\t - module: load the module of new type", "--ic-load-mode")
	# --ic-bootstrap
	var opt_ic_bootstrap = new OptionBool("Bootstrap typing with standard library (default is no bootstrap)", "--ic-bootstrap")
	# --ic-recompute-mode always | never | threshold | increment
	var opt_ic_recompute_mode = new OptionString("When to recompute typing. Possible values are:\n\t\t\t\t - always: recompute for each new type\n\t\t\t\t - never (default):  never recompute, use fallback instead\n\t\t\t\t - threshold:  recompute only when the threshold is reached, use fallback before\n\t\t\t\t - increment: try to update structures instead of recompute", "--ic-recompute-mode")
	# --ic-threshold-mode increment | fallback
	var opt_ic_threshold_mode = new OptionString("Threshold mode. Possible values are:\n\t\t\t\t - increment: recompute when the number of new type reach the threshold count\n\t\t\t\t -fallback: recompute when the use number of fallback use reach the threshold count", "--ic-threshold-mode")
	# --ic-threshold-count <int>
	var opt_ic_threshold_count = new OptionInt("Threshold count. Take an integer", 0, "--ic-threshold-count")
	# --ic-cache-size <int>
	var opt_ic_cache_size = new OptionInt("Cache size. Take an integer", 0, "--ic-cache-size")
	# --ic-show-stats
	var opt_ic_show_stats = new OptionBool("Show statistics about typing at the end of the interpretation", "--ic-show-stats")

	redef init
	do
		super
		self.option_context.add_option(self.opt_ic_typing_mode)
		self.option_context.add_option(self.opt_ic_load_mode)
		self.option_context.add_option(self.opt_ic_bootstrap)
		self.option_context.add_option(self.opt_ic_recompute_mode)
		self.option_context.add_option(self.opt_ic_threshold_mode)
		self.option_context.add_option(self.opt_ic_threshold_count)
		self.option_context.add_option(self.opt_ic_cache_size)
		self.option_context.add_option(self.opt_ic_show_stats)
	end
end

redef class ModelBuilder
	# Add statistics display at the end of the interpretation
	redef fun run_naive_interpreter(mainmodule, arguments) do
		var time0 = get_time
		self.toolcontext.info("*** START INTERPRETING ***", 1)

		var interpreter = new NaiveInterpreter(self, mainmodule, arguments)
		init_naive_interpreter(interpreter, mainmodule)

		# stats
		if interpreter.show_stats then
			print "# Interpretation statistics"

			print "## Dynamic loading"
			print " - nb dynamically lodaed types: {interpreter.typing.nb_loads} ({interpreter.typing.nb_gen_loads} were generic)"
			print " - nb dynamically lodaed modules: {interpreter.typing.nb_mod_loads}"

			print "## Typing structures"
			print " - nb increments: {interpreter.typing.nb_increment_loads} ({interpreter.typing.nb_gen_increment_loads} were generic)"
			print " - nb destructive increments: {interpreter.typing.nb_destructive_increments} ({interpreter.typing.nb_gen_destructive_increments} were generic)"
			print " - nb full structure recomputation: {interpreter.typing.nb_recomputes}"
			print " - overall max size table: {interpreter.typing.max_size_tables}"
			print " - total: size needed for tables: {interpreter.typing.sum_size_tables}"

			print "## Type test"
			print " - nb isa: {interpreter.typing.nb_isas} ({interpreter.typing.nb_gen_isas} involving generic types)"
			print " - nb isa using fallback: {interpreter.typing.nb_fallbacks} ({interpreter.typing.nb_gen_fallbacks} involving generic types)"
			print " - nb isa using fallback responded from cache: {interpreter.typing.nb_cache_res}"
		end

		var time1 = get_time
		self.toolcontext.info("*** END INTERPRETING: {time1-time0} ***", 2)
	end
end

# Add gestion handling for incremental typing mecanisms
redef class NaiveInterpreter

	var typing: Typing
	var module_increment: Bool
	var recompute_mode: String
	var threshold_mode: String = "null"
	var threshold_count: Int = 0
	var cache_size: Int = 0
	var show_stats: Bool = false

	# Add option handling
	redef init(modelbuilder, mainmodule, arguments) do
		super(modelbuilder, mainmodule, arguments)

		# choose typing method
		var mode = modelbuilder.toolcontext.opt_ic_typing_mode.value
		if mode == "BM" then
			self.modelbuilder.toolcontext.info("IC-TYPING: Using BM typing", 1)
			typing = new BMTyping(self)
		else if mode == "CL" then
			self.modelbuilder.toolcontext.info("IC-TYPING: Using CL typing", 1)
			typing = new CLTyping(self)
		else if mode == "PHMOD" then
			self.modelbuilder.toolcontext.info("IC-TYPING: Using PH-MOD typing", 1)
			typing = new PHModTyping(self)
		else if mode == "PHAND" then
			self.modelbuilder.toolcontext.info("IC-TYPING: Using PH-AND typing", 1)
			typing = new PHAndTyping(self)
		else
			self.modelbuilder.toolcontext.info("IC-TYPING: Using legacy typing", 1)
			typing = new LegacyTyping(self)
		end

		# load full module or juste the type ?
		mode = modelbuilder.toolcontext.opt_ic_load_mode.value
		if mode == "module" then
			self.modelbuilder.toolcontext.info("IC-TYPING: Using load mode: module", 1)
			module_increment = true
		else
			self.modelbuilder.toolcontext.info("IC-TYPING: Using load mode: type", 1)
			module_increment = false
		end

		# bootstrap type structures with stdlib types
		if modelbuilder.toolcontext.opt_ic_bootstrap.value then
			self.modelbuilder.toolcontext.info("IC-TYPING: Using bootstrap", 1)
			typing.bootstrap
		end

		# typing recomputation mode
		var recompute_mode = modelbuilder.toolcontext.opt_ic_recompute_mode.value
		if recompute_mode != null then
			self.recompute_mode = recompute_mode

			if recompute_mode == "threshold" then
				var threshold_mode = modelbuilder.toolcontext.opt_ic_threshold_mode.value
				if threshold_mode == null then
					print "IC-ERROR : Recompute mode 'threshold' need a threshold mode"
					abort
				else
					self.modelbuilder.toolcontext.info("IC-TYPING: Using threshold mode: {threshold_mode}", 1)
					self.threshold_mode = threshold_mode
					var threshold_count = modelbuilder.toolcontext.opt_ic_threshold_count.value
					if threshold_count == 0 then
						print "IC-ERROR : Recompute mode 'threshold' need a threshold count"
						abort
					else
						self.threshold_count = threshold_count
						self.modelbuilder.toolcontext.info("IC-TYPING: Using threshold value: {threshold_count}", 1)
					end
				end
			end
		else
			self.recompute_mode = "never"
		end
		self.modelbuilder.toolcontext.info("IC-TYPING: Using recompute mode: {self.recompute_mode}", 1)

		# cache size
		cache_size = modelbuilder.toolcontext.opt_ic_cache_size.value
		self.modelbuilder.toolcontext.info("IC-TYPING: Using cache size: {cache_size}", 1)

		# stats
		if modelbuilder.toolcontext.opt_ic_show_stats.value then show_stats = true
	end

	# Handle subtypes tests and redispatch to selected mode
	redef fun is_subtype(sub, sup) do
		self.modelbuilder.toolcontext.info("IC-TYPING[DEBUG]: {sub} ISA {sup}", 2)

		# stats
		typing.nb_isas += 1
		if sup isa MGenericType or sub isa MGenericType then typing.nb_gen_isas += 1

		# special case of nullables types
		if sub isa MNullType and sup isa MNullableType then
			return true
		else if sub isa MNullType and not sup isa MNullableType then
			return false
		end
		if sub isa MNullableType then sub = sub.mtype
		if sup isa MNullableType then sup = sup.mtype

		# std case
		var t1 = typing.load_increment(sub.as(MClassType))
		var t2 = typing.load_increment(sup.as(MClassType))

		var res: Bool
		if typing.is_valid then
			res = t1.is_subtype(t2)
		else
			# recompute mode = thresold
			if recompute_mode == "threshold" then
				if threshold_mode == "fallback" then
					typing.increment_count += 1
					# recompute instead fallback
					if typing.increment_count > threshold_count then
						typing.compute_typing
						typing.increment_count = 0
						return t1.is_subtype(t2)
					end
				end
			end
			res = t1.is_subtype_fallback(t2)
		end
		return res
	end
end

# Incremental typing

# The base of incremental typing
private abstract class Typing
	type T: Type

	# List of already loaded types
	var loaded_types: HashMap[MType, T] = new HashMap[MType, T]
	# List of already loaded modules
	var loaded_modules: HashSet[MModule] = new HashSet[MModule]
	# Last type ID used
	var lastID: Int = -1
	# Is the typing still valid (no destructive increment)
	var is_valid: Bool = false
	# Increment count since the last full recomputation
	var increment_count = 0

	private var interpreter: NaiveInterpreter

	# stats
	var nb_loads = 0
	var nb_gen_loads = 0
	var nb_mod_loads = 0
	var nb_increment_loads = 0
	var nb_gen_increment_loads = 0
	var nb_destructive_increments = 0
	var nb_gen_destructive_increments = 0
	var nb_isas = 0
	var nb_gen_isas = 0
	var nb_recomputes = 0
	var nb_fallbacks = 0
	var nb_gen_fallbacks = 0
	var nb_cache_res = 0
	var max_size_tables = 0
	var sum_size_tables = 0

	private init(interpreter: NaiveInterpreter) do
		self.interpreter = interpreter
	end

	# Load the std lib types and compute typing
	fun bootstrap do
		interpreter.modelbuilder.toolcontext.info("IC-TYPING[DEBUG]: bootstrap start", 2)
		var mods = interpreter.mainmodule.model.get_mmodules_by_name("standard")
		if mods != null then
			var std = mods.first
			for m in std.in_nesting.direct_greaters do
				load_module(m)
			end
		end
		compute_typing
		interpreter.modelbuilder.toolcontext.info("IC-TYPING[DEBUG]: bootstrap end", 2)
	end

	# Load all types contained in a module
	fun load_module(mmodule: MModule) do
		interpreter.modelbuilder.toolcontext.info("IC-TYPING[DEBUG]: load module {mmodule}", 2)
		# import nested module first
		for m in mmodule.in_nesting.greaters do
			if mmodule == m then continue
			load_module(m)
		end

		# load classes in module
		if loaded_modules.has(mmodule) then return

		# stats
		nb_mod_loads += 1

		for c in mmodule.intro_mclasses do
			# skip unanchored types (they will be handled by load_supertypes of anchored types
			if c.mclass_type.need_anchor then continue
			load_type(c.mclass_type)
		end
		loaded_modules.add(mmodule)
	end

	# Load a MType and return its Type representation
	fun load_type(mtype: MClassType): T do
		if is_loaded(mtype) then
			return loaded_types[mtype]
		else
			# stats
			nb_loads += 1
			if mtype isa MGenericType then nb_gen_loads += 1

			var supertypes = load_supertypes(mtype)
			var t = init_type(lastID + 1, mtype, supertypes, self)
			lastID = t.id
			loaded_types[mtype] = t

			# load formal parameter types
			if mtype isa MGenericType then
				for arg in mtype.arguments do
					if arg isa MClassType then load_type(arg)
				end
			end

			return t
		end
	end

	# Load compile time known super-types of a type
	# supertypes are all known super classes at compile time and unresolved generic classes
	fun load_supertypes(child: MClassType): Array[T] do
		var parents = child.mclass.in_hierarchy(interpreter.mainmodule).greaters
		var plist = new Array[T]

		# load each parent
		for p in parents do
			# not a parent but the type itself
			if p.mclass_type.mclass == child.mclass then continue

			if p.mclass_type.need_anchor then
				# the parent need to be anchored to the child (contains a formal type)
				var anchor = p.mclass_type.anchor_to(interpreter.mainmodule, child)
				plist.add(load_type(anchor))
			else
				# already revolved type
				plist.add(load_type(p.mclass_type))
			end
		end
		return plist
	end

	# Increment types structures with the new type
	fun load_increment(mtype: MClassType): Type do
		# old type, no need of recomputation
		if is_loaded(mtype) then
			return load_type(mtype)
		else
			# current structures are expired, a new type appeared
			is_valid = false
		end

		interpreter.modelbuilder.toolcontext.info("IC-TYPING[DEBUG]: load increment {mtype}", 2)

		# load the module
		if interpreter.module_increment then
			load_module(mtype.mclass.intro_mmodule)
		end

		var t = load_type(mtype)

		# stats
		nb_increment_loads += 1
		if mtype isa MGenericType then nb_gen_increment_loads += 1

		# recompute mode = always
		if interpreter.recompute_mode == "always" then
			compute_typing
		end

		# recompute mode = thresold
		if interpreter.recompute_mode == "threshold" then
			if interpreter.threshold_mode == "increment" then
				increment_count += 1

				if increment_count > interpreter.threshold_count then
					compute_typing
					increment_count = 0
				end
			end
		end

		# recompute mode = increment
		if interpreter.recompute_mode == "increment" then
			compute_increment(t)
			if not is_valid then compute_typing
		end

		return t
	end

	# Factory for specializations of Type
	fun init_type(id: Int, mtype: MClassType, supertypes: Array[T], typing: Typing): T is abstract

	# Is the type already loaded ?
	fun is_loaded(mtype: MType): Bool do return loaded_types.has_key(mtype)

	# Run the typing full computation
	# Do nothing, need to be redefined
	fun compute_typing do
		nb_recomputes += 1
		interpreter.modelbuilder.toolcontext.info("IC-TYPING[DEBUG]: compute typing", 1)
		is_valid = true
	end

	# Compute typing with the increment
	# if the increment is destructive, need to recompute the whole typing structure
	# else just compute typing structure for the new type
	fun compute_increment(t: T) is abstract

	# Is the increment destructive ?
	# destructive increment depends on typing method used
	fun is_destructive_increment(t: T): Bool is abstract
end

# An incremental typing type representation
private abstract class Type
	type T: Type

	# The unique type id
	var id: Int
	# all resolved super-types
	var supertypes: Array[T]

	var mtype: MClassType
	var typing: Typing
	var cache: Cache

	init(id: Int, mtype: MClassType, supertypes: Array[T], typing: Typing) do
		self.id = id
		self.mtype = mtype
		self.supertypes = supertypes
		self.typing = typing
		self.cache = new Cache(typing.interpreter.cache_size)
		self.supertypes.add(self)
	end

	# Subtyping using computed representation
	fun is_subtype(sup: T): Bool is abstract

	# Subtyping for uncomputed types
	# unefficient algorithme using linear probing in known super-types
	fun is_subtype_fallback(sup: T): Bool do
		# stats
		typing.nb_fallbacks += 1
		if self.mtype isa MGenericType or sup.mtype isa MGenericType then typing.nb_gen_fallbacks += 1

		# try in cache cache
		if cache.contains(sup) then
			typing.nb_cache_res += 1
			return cache.response(sup)
		end

		# test implies generic typing
		if sup.mtype isa MGenericType then
			for p in supertypes do
				if p == sup then
					# found the same type (ie. p = B[Int] = sup)
					if not cache.contains(sup) then cache.add(sup, true)
					return true
				else if p.mtype.mclass == sup.mtype.mclass then
					# found the same class (ie. p.mclass = B[B#0] = sup.mclass)
					# compare formal types arguments
					for i in [0..p.mtype.arguments.length[ do
						# erase nullable annotation of p arg
						var sarg = p.mtype.arguments[i]
						if sarg isa MNullableType then sarg = sarg.mtype
						var sft = typing.load_type(sarg.as(MClassType))
						# erase nullable annotation of super arg
						var suparg = sup.mtype.arguments[i]
						if suparg isa MNullableType then suparg = suparg.mtype
						var pft = typing.load_type(suparg.as(MClassType))
						if not sft.is_subtype_fallback(pft) then
							if not cache.contains(sup) then cache.add(sup, false)
							return false
						end
					end
					if not cache.contains(sup) then cache.add(sup, true)
					return true
				end
			end
			if not cache.contains(sup) then cache.add(sup, false)
			return false
		end

		# for non generic type: look up in supertypes
		# 0(n) where n = nb supertypes of the current type
		for p in supertypes do
			if p == sup then
				if not cache.contains(sup) then cache.add(sup, true)
				return true
			end
		end
		if not cache.contains(sup) then cache.add(sup, false)
		return false
	end

	redef fun to_s do return "{mtype.to_s} (id: {id})"
end

# Binary Matrix (BM) typing
private class BMTyping
	super Typing

	redef type T: BMType

	init(interpreter: NaiveInterpreter) do super(interpreter)

	redef fun init_type(id, mtype, supertypes, typing) do return new BMType(id, mtype, supertypes, typing)

	# Compute rows in the binary matrix for each loaded type
	redef fun compute_typing do
		super
		for t in loaded_types.values do
			t.compute_row(loaded_types, interpreter.mainmodule)
		end
	end

	# If the increment is destructive, the typing representation is invalidated
	# else add a row to the matrix and compute it
	redef fun compute_increment(t) do
		#print "DEBUG: compute increment {t}: is destructive = {is_destructive_increment(t)}"

		# compute increments of supertypes first
		for st in t.supertypes do
			if t == st then continue
			if st.row == null then compute_increment(st)
		end

		if is_destructive_increment(t) then
			# increment is destructive, need to recompute the whole typing structure
			is_valid = false
		else
			# increment is additive, compute only the type (and newly added parents)
			is_valid = true
			t.compute_row(loaded_types, interpreter.mainmodule)
		end
	end

	# For BM typing, destructive increments are only supertypes of already computed types
	# This appends only when a new generic type on an already computed generic class appears
	# ie. increment is GenericType[Something] and loaded-types already contains GenericType[SomethingElse]
	redef fun is_destructive_increment(t) do
		if t.mtype isa MGenericType then
			for ot in loaded_types.values do
				if ot.mtype.mclass == t.mtype.mclass then
					nb_destructive_increments += 1
					nb_gen_destructive_increments += 1
					return true
				end
			end
		end
		return false
	end
end

private class BMType
	super Type

	redef type T: BMType

	# A row is an array of bits
	var row: nullable Array[Bool]

	# For each other types, fill the cell with 1 if subtype else 0
	fun compute_row(types: HashMap[MType, T], mainmodule: MModule) do
		row = new Array[Bool].filled_with(false, types.length)
		for t in types.values do
			if self.is_subtype_fallback(t) then
				row[t.id] = true
			end
		end

		# stats
		if row.length > typing.max_size_tables then typing.max_size_tables = row.length
		typing.sum_size_tables += row.length
	end

	# O(1)
	# return self.row[t.id]
	redef fun is_subtype(t) do
		if t.id >= self.row.length then return false
		return self.row[t.id]
	end
end

# Perfect Hashing (PH) typing
private abstract class PHTyping
	super Typing

	redef type T: PHType

	init(interpreter: NaiveInterpreter) do
		super(interpreter)
		lastID = 0
	end

	redef fun compute_typing do
		super
		for t in loaded_types.values do
			t.compute_row(loaded_types, interpreter.mainmodule)
		end
	end

	# If the increment is destructive, the typing representation is invalidated
	# else compute the hashmap of the type
	redef fun compute_increment(t) do
		# compute increments of supertypes first
		for st in t.supertypes do
			if t == st then continue
			if st.row == null then compute_increment(st)
		end

		if is_destructive_increment(t) then
			# increment is destructive, need to recompute the whole typing structure
			is_valid = false
		else
			# increment is additive, compute only the type (and newly added parents)
			is_valid = true
			t.compute_row(loaded_types, interpreter.mainmodule)
		end
	end

	# For HP typing, destructive increments are only supertypes of already computed types
	# This appends only when a new generic type on an already computed generic class appears
	# ie. increment is GenericType[Something] and loaded-types already contains GenericType[SomethingElse]
	redef fun is_destructive_increment(t) do
		if t.mtype isa MGenericType then
			for ot in loaded_types.values do
				if ot.mtype.mclass == t.mtype.mclass then
					# stats
					nb_destructive_increments += 1
					nb_gen_destructive_increments += 1
					return true
				end
			end
		end
		return false
	end
end

private abstract class PHType
	super Type

	redef type T: PHType

	# Mask is used to hash an id
	var mask: nullable Int
	# A row is an array of IDs (Int)
	var row: nullable Array[Int]

	# First compute the mask needed to perfectly hash the parents list
	# Then fill the hashmap
	fun compute_row(types: HashMap[MType, T], mainmodule: MModule) do
		# Create super type list
		var stypes = new List[Type]
		for st in types.values do
			if self.is_subtype_fallback(st) then stypes.add(st)
		end

		# Compute the hashing 'mask'
		self.mask = compute_mask(stypes)

		# Fill the row
		row = new Array[Int]
		for st in stypes do
			var idx = phash(st.id)
			if idx > row.length then for i in [row.length .. idx[ do row[i] = 0
			row[idx] = st.id
		end

		# stats
		if row.length > typing.max_size_tables then typing.max_size_tables = row.length
		typing.sum_size_tables += row.length
	end

	# Hash IDs
	fun phash(id: Int): Int is abstract

	# O(1)
	# return self.row[phash(t.id)] == t.id
	redef fun is_subtype(t) do
		if self.row.length <= phash(t.id) then return false
		return self.row[phash(t.id)] == t.id
	end

	fun compute_mask(stypes: List[Type]): Int is abstract
end

private class PHModTyping
	super PHTyping
	redef type T: PHModType
	redef fun init_type(id, mtype, supertypes, typing) do return new PHModType(id, mtype, supertypes, typing)
end

private class PHModType
	super PHType

	redef type T: PHModType

	# Hash using modulo
	# return mask % id
	redef fun phash(id: Int): Int do return mask.as(not null) % id

	# Look for the first mask allowing perfect hashing for stypes ids
	# TODO: Look for a more efficien way to do this
	redef fun compute_mask(stypes: List[Type]): Int do
		var mask = 0
		loop
			var used = new List[Int]
			for st in stypes do
				var res = (mask % st.id)
				if used.has(res) then
					break
				else
					used.add(res)
				end
			end
			if used.length == stypes.length then break
			mask += 1
		end
		return mask
	end
end

private class PHAndTyping
	super PHTyping
	redef type T: PHAndType
	redef fun init_type(id, mtype, supertypes, typing) do return new PHAndType(id, mtype, supertypes, typing)
end

private class PHAndType
	super PHType

	redef type T: PHAndType

	# Hash using binary and
	# return mask & id
	redef fun phash(id: Int): Int do return mask.as(not null).bin_and(id)

	# Look for the first mask allowing perfect hashing for stypes ids
	# TODO: Look for a more efficien way to do this
	redef fun compute_mask(stypes: List[Type]): Int do
		var mask = 0
		loop
			var used = new List[Int]
			for st in stypes do
				var res = (mask.bin_and(st.id))
				if used.has(res) then
					break
				else
					used.add(res)
				end
			end
			if used.length == stypes.length then break
			mask += 1
		end
		return mask
	end
end

# Coloration (CL) typing
private class CLTyping
	super Typing

	redef type T: CLType

	# Core of type hierarchy (types with at least two supertypes and their indirect supertypes)
	var core: Array[T] = new Array[T]
	# All types in single inheritance that are not part of core
	var crown: Array[T] = new Array[T]
	# All minimal classes of core
	var border: Array[T] = new Array[T]

	# Conflicts graph of hierarchy
	var conflict_graph: HashMap[T, HashSet[T]] = new HashMap[T, HashSet[T]]

	# Max color used
	# Increments are colored with injective colors
	var max_color = 0

	var sorter: TypeSorter = new TypeSorter

	init(interpreter: NaiveInterpreter) do
		super(interpreter)
		lastID = 0
	end

	redef fun init_type(id, mtype, supertypes, typing) do return new CLType(id, mtype, supertypes, typing)

	# Colorize all known types and fill the type tables
	redef fun compute_typing do
		super
		compute_init
		compute_conflicts
		colorize(core)
		colorize(border)
		colorize(crown)
		fill_tables
	end

	# Compute a linear extension of parents of each types and tag each type as core, border or crown
	fun compute_init do
		core.clear
		crown.clear
		border.clear

		# clear already build tables
		for t in loaded_types.values do
			#t.parents = new HashSet[T]
			t.nb_parents = 0
			t.sub_types = new HashSet[T]
		end

		# compute linear ext of each type type
		for t in loaded_types.values do compute_linear_ext(t)

		# tag each type as core, crown or border
		for t in loaded_types.values do tag_type(t)

		# sort by reverse linearization order
		sorter.sort(core)
		sorter.sort(crown)
		sorter.sort(border)
	end

	# Compute linear extension of the type
	fun compute_linear_ext(t: T) do
		var lin = new Array[T]
		for st in loaded_types.values do
			if t.is_subtype_fallback(st) then
				lin.add(st)
				t.nb_parents = t.mtype.mclass.in_hierarchy(interpreter.mainmodule).direct_greaters.length
				if t != st then st.sub_types.add(t)
			end
		end
		sorter.sort(lin)
		t.lin = lin
	end

	# Tag type as core, crown or border
	fun tag_type(t: T) do
		if t.nb_parents > 1 then
			if t.sub_types.length <= 1 then
				# border
				border.add(t)
			else
				# core
				core.add(t)
			end
			for st in t.lin do if t != st and not core.has(st) then core.add(st)
		else
			# crown
			var subtypes_are_si = true
			for sub in t.sub_types do if sub.nb_parents > 1 then subtypes_are_si = false
			if subtypes_are_si then crown.add(t)
		end
	end

	# Compute related classes to detect coloring conflicts
	fun compute_conflicts do
		conflict_graph.clear
		var mi_types = new Array[T]
		mi_types.add_all(core)
		mi_types.add_all(border)
		sorter.sort(mi_types)

		for t in mi_types do
			for i in t.lin do
				if i == t then continue
				var lin_i = i.lin

				for j in t.lin do
					if i == j or j == t then continue
					var lin_j = j.lin

					var d_ij = lin_i - lin_j
					var d_ji = lin_j - lin_i

					for ed1 in d_ij do
						if not conflict_graph.has_key(ed1) then conflict_graph[ed1] = new HashSet[T]
						# add ed1 x ed2 to conflicts graph
						for ed2 in d_ji do conflict_graph[ed1].add(ed2)
					end
					for ed1 in d_ij do
						if not conflict_graph.has_key(ed1) then conflict_graph[ed1] = new HashSet[T]
						# add ed1 x ed2 to conflicts graph
						for ed2 in d_ji do conflict_graph[ed1].add(ed2)
					end
				end
			end
		end
		self.conflict_graph = conflict_graph
	end

	# Colorize an array of types
	fun colorize(elts: Array[T]) do
		var min_color = 0

		for t in elts do
			var color = min_color
			while not color_free(t, color) do
				color += 1
			end
			t.color = color
			if color > max_color then max_color = color
			color = min_color
		end
	end

	# Check if a related type to t already use the color
	fun color_free(t: T, color: Int): Bool do
		if conflict_graph.has_key(t) then
			for st in conflict_graph[t] do if st.color == color then return false
		end
		for st in t.lin do
			if st == t then continue
			if st.color == color then return false
		end
		return true
	end

	# Fill de colored tables
	fun fill_tables do for t in loaded_types.values do fill_table(t)

	fun fill_table(t: T) do
		t.row = new Array[Int]
		for st in t.lin do
			if t.row.length <= st.color.as(not null) then
				for i in [t.row.length..st.color.as(not null)[ do t.row.add(0)
			end
			t.row[st.color.as(not null)] = st.id
		end

		# stats
		if t.row.length > max_size_tables then max_size_tables = t.row.length
		sum_size_tables += t.row.length
	end

	# Compute table for a type increment: compute linearization of parents and fill the table
	fun compute_table_increment(t: T) do
		compute_linear_ext(t)
		fill_table(t)
	end

	redef fun compute_increment(t) do
		#print "DEBUG: compute increment {t}: is destructive = {is_destructive_increment(t)}"

		# injective color
		max_color += 1
		t.color = max_color

		# parents first
		for st in t.supertypes do
			if t == st then continue
			if st.row == null then compute_increment(st)
		end

		if is_destructive_increment(t) then
			is_valid = false
		else
			# increment is additive, compute only the type (and newly added parents)
			is_valid = true
			compute_table_increment(t)
		end
	end

	# For CL typing, destructive increments are supertypes of already computed types and common types of two already computed types
	redef fun is_destructive_increment(t) do
		if t.mtype isa MGenericType then
			for ot in loaded_types.values do
				if ot.mtype.mclass == t.mtype.mclass then
					# stats
					nb_destructive_increments += 1
					nb_gen_destructive_increments += 1
					return true
				end
			end
		end

		compute_linear_ext(t)
		if t.nb_parents > 1 then
			# stats
			nb_destructive_increments += 1
			if t.mtype isa MGenericType then nb_gen_destructive_increments = 0
			return true
		end

		return false
	end
end

private class CLType
	super Type

	redef type T: CLType

	# Linearization of super-types including the type itself
	var lin: Array[T] = new Array[T]
	# The color assignated to the type
	var color: nullable Int
	# Number of direct super-types
	var nb_parents: Int = 0
	# All sub types
	var sub_types: HashSet[T] = new HashSet[T]

	# A row is the an array of IDs
	var row: nullable Array[Int]

	# O(1)
	# return row[t.color] == t.id
	redef fun is_subtype(t) do
		if t.color >= row.length then return false
		return row[t.color.as(not null)] == t.id
	end
end

# Wrapper for interpretor legacy typing based on precomputed metalmodel
private class LegacyTyping
	super Typing
	redef type T: LegacyType
	init(interpreter: NaiveInterpreter) do super(interpreter)
	redef fun init_type(id, mtype, supertypes, typing) do return new LegacyType(id, mtype, supertypes, typing)
end

# Wrapper for interpretor legacy typing based on precomputed metalmodel
private class LegacyType
	super Type
	redef type T: LegacyType
	redef fun is_subtype(t) do return self.mtype.is_subtype(typing.interpreter.mainmodule, typing.interpreter.frame.arguments.first.mtype.as(MClassType), t.mtype)
end

# Tools

private class Cache

	var elements: Array[CachePair]
	var size: Int
	var cache: nullable CachePair

	init(size: Int) do
		self.size = size
		self.elements = new Array[CachePair].with_capacity(size)
	end

	# Add a response to the cache
	fun add(t: Type, res: Bool) do
		var pair = new CachePair(t, res)
		elements.insert(pair, 0)
		if elements.length > size then elements.pop
	end

	# Check if the cache contains the subtype test response
	fun contains(t: Type): Bool do
		for e in elements do
			if e.t == t then
				cache = e
				return true
			end
		end
		return false
	end

	# Get a subtype test response from the cache
	# ensure contains before
	fun response(t: Type): Bool do
		if cache != null and cache.t == t then return cache.res

		for e in elements do if e.t == t then return e.res

		print "IC-ERROR: Cache fault"
		abort
	end
end

private class CachePair
	var t: Type
	var res: Bool
end

# Add operator - to Array
redef class Array[T]
	# Return a new array with the elements only contened in 'self' and not in 'o'
	fun -(o: Array[T]): Array[T] do
		var res = new Array[T]
		for e in self do if not o.has(e) then res.add(e)
		return res
	end
end

# A sorter for reversed linearization of types
private class TypeSorter
	super AbstractSorter[Type]

	redef fun compare(a, b) do
		if a == b then
			return 0
		else if a.is_subtype_fallback(b) then
			return 1
		end
		return -1
	end
end
