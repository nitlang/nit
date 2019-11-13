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

# Rapid type analysis on the AST
#
# Rapid type analysis is an analyse that aproximates the set of live classes
# and the set of live methods starting from the entry point of the program.
# These two sets are interdependant and computed together.
# It is quite efficient but the type set is global and pollutes each call site.
module rapid_type_analysis

import semantize
private import explain_assert_api

import csv # for live_types_to_csv
private import ordered_tree # for live_methods_to_tree

private import more_collections

redef class ModelBuilder
	# Performs a rapid-type-analysis on the program associated with `mainmodule`.
	fun do_rapid_type_analysis(mainmodule: MModule): RapidTypeAnalysis
	do
		var analysis = new RapidTypeAnalysis(self, mainmodule)
		analysis.run_analysis

		if toolcontext.opt_log.value then
			var basename = toolcontext.log_directory / mainmodule.name
			analysis.live_methods_to_tree.write_to_file(basename + ".rta_methods.txt")
			analysis.live_types_to_csv.write_to_file(basename + ".rta_types.csv")
		end

		return analysis
	end
end

# RapidTypeAnalysis looks for alive rapid types in application.
# The entry point of the analysis is the mainmodule of the application.
class RapidTypeAnalysis
	# The modelbuilder used to get the AST.
	var modelbuilder: ModelBuilder

	# The main module of the analysis.
	# Used to perform types operations.
	var mainmodule: MModule

	# The pool to live types.
	# During the analysis, new types are added and combined with
	# live_methods to determine new methoddefs to visit
	var live_types = new HashSet[MClassType]

	# The pool of unresolved live types
	# They are globally resolved at the end of the analaysis
	var live_open_types = new HashSet[MClassType]

	# Live (instantiated) classes.
	var live_classes = new HashSet[MClass]

	# The pool of types used to perform type checks (isa and as).
	var live_cast_types = new HashSet[MType]

	# The pool of undesolved types used to perform type checks (isa and as).
	# They are globally resolved at the end of the analaysis
	var live_open_cast_types = new HashSet[MType]

	# Live method definitions.
	var live_methoddefs = new HashSet[MMethodDef]

	# Live methods.
	var live_methods = new HashSet[MMethod]

	# Live mmodules.
	# Those with a live method definitions (see `live_methoddefs`)
	var live_mmodules = new HashSet[MModule]

	# Live callsites.
	var live_callsites = new HashSet[CallSite]

	private var live_targets_cache = new HashMap2[MType, MProperty, Set[MMethodDef]]

	# The live targets of a specific callsite.
	fun live_targets(callsite: CallSite): Set[MMethodDef]
	do
		var mtype = callsite.recv
		var anchor = callsite.anchor
		if anchor != null then mtype = mtype.anchor_to(callsite.mmodule, anchor)
		mtype = mtype.undecorate
		if mtype isa MClassType then mtype = mtype.mclass.intro.bound_mtype
		var mproperty = callsite.mproperty
		var res = live_targets_cache[mtype, mproperty]
		if res != null then return res
		res = new ArraySet[MMethodDef]
		live_targets_cache[mtype, mproperty] = res

		for c in live_classes do
			var tc = c.intro.bound_mtype
			if not tc.is_subtype(mainmodule, null, mtype) then continue
			var d = mproperty.lookup_first_definition(mainmodule, tc)
			res.add d
		end

		return res
	end

	# Live call-to-super.
	var live_super_sends = new HashSet[MMethodDef]

	# Return a ready-to-save CSV document objet that agregates informations about live types.
	# Each discovered type is listed in a line, with its status: resolution, liveness, cast-liveness.
	# Note: types are listed in an alphanumeric order to improve human reading.
	fun live_types_to_csv: CsvDocument
	do
		# Gather all kind of type
		var typeset = new HashSet[MType]
		typeset.add_all(live_types)
		typeset.add_all(live_open_types)
		typeset.add_all(live_cast_types)
		typeset.add_all(live_open_cast_types)
		var types = typeset.to_a
		(new CachedAlphaComparator).sort(types)
		var res = new CsvDocument
		res.separator = ';'
		res.header = ["Type", "Resolution", "Liveness", "Cast-liveness"]
		for t in types do
			var reso
			if t.need_anchor then reso = "OPEN " else reso = "CLOSED"
			var live
			if t isa MClassType and (live_types.has(t) or live_open_types.has(t)) then live = "LIVE" else live = "DEAD"
			var cast
			if live_cast_types.has(t) or live_open_cast_types.has(t) then cast = "CAST LIVE" else cast = "CAST DEAD"
			res.add_record(t, reso, live, cast)
		end
		return res
	end

	# Return a ready-to-save OrderedTree object that agregates infomration about live methods.
	# Note: methods are listed in an alphanumeric order to improve human reading.
	fun live_methods_to_tree: OrderedTree[Object]
	do
		var tree = new OrderedTree[Object]
		for x in live_methods do
			var xn = x.full_name
			tree.add(null, xn)
			for z in x.mpropdefs do
				var zn = z.to_s
				if live_methoddefs.has(z) then
					tree.add(xn, zn)
					if live_super_sends.has(z) then
						tree.add(zn, zn + "(super)")
					end
				else if live_super_sends.has(z) then
					tree.add(xn, zn + "(super)")
				end
			end
		end
		tree.sort_with(alpha_comparator)
		return tree
	end

	# Methods that are still candidate to the try_send
	private var totry_methods = new HashSet[MMethod]

	# Methods that are are no more candidate to the try_send
	private var totry_methods_to_remove = new Array[MMethod]

	# Methods that are or were candidate to the try_send
	# Used to ensure that try_send is only used once
	private var try_methods = new HashSet[MMethod]

	# The method definitions that remain to visit
	private var todo = new List[MMethodDef]

	private fun force_alive(classname: String)
	do
		var classes = self.modelbuilder.model.get_mclasses_by_name(classname)
		if classes != null then for c in classes do self.add_new(c.mclass_type, c.mclass_type)
	end

	# Run the analysis until all visitable method definitions are visited.
	fun run_analysis
	do
		var maintype = mainmodule.sys_type
		if maintype == null then return # No entry point
		add_new(maintype, maintype)
		var initprop = mainmodule.try_get_primitive_method("init", maintype.mclass)
		if initprop != null then
			add_send(maintype, initprop)
		end
		var mainprop = mainmodule.try_get_primitive_method("run", maintype.mclass) or else
			mainmodule.try_get_primitive_method("main", maintype.mclass)
		if mainprop != null then
			add_send(maintype, mainprop)
		end

		var finalizable_type = mainmodule.finalizable_type
		if finalizable_type != null then
			var finalize_meth = mainmodule.try_get_primitive_method("finalize", finalizable_type.mclass)
			if finalize_meth != null then add_send(finalizable_type, finalize_meth)
		end

		# Force primitive types
		force_alive("Bool")
		force_alive("Float")
		force_alive("Char")
		force_alive("Pointer")
		force_alive("Byte")
		force_alive("Int")
		force_alive("Int8")
		force_alive("Int16")
		force_alive("UInt16")
		force_alive("Int32")
		force_alive("UInt32")

		while not todo.is_empty do
			var mmethoddef = todo.shift
			var mmeth = mmethoddef.mproperty
			var msignature = mmethoddef.msignature
			if msignature == null then continue # Skip broken method

			#print "# visit {mmethoddef}"
			var v = new RapidTypeVisitor(self, mmethoddef.mclassdef.bound_mtype, mmethoddef)

			var vararg_rank = msignature.vararg_rank
			if vararg_rank > -1 then
				var node = self.modelbuilder.mpropdef2node(mmethoddef)
				var elttype = msignature.mparameters[vararg_rank].mtype
				#elttype = elttype.anchor_to(self.mainmodule, v.receiver)
				var vararg = self.mainmodule.array_type(elttype)
				v.add_type(vararg)
				var native = self.mainmodule.native_array_type(elttype)
				v.add_type(native)
				v.add_monomorphic_send(vararg, self.modelbuilder.force_get_primitive_method(node, "with_native", vararg.mclass, self.mainmodule))
			end

			var sig = msignature
			var osig = mmeth.intro.msignature.as(not null)
			for i in [0..sig.arity[ do
				var origtype = osig.mparameters[i].mtype
				if not origtype.need_anchor then continue # skip non covariant stuff
				var paramtype = sig.mparameters[i].mtype
				add_cast(paramtype)
			end

			if mmethoddef.is_abstract then continue

			var npropdef = modelbuilder.mpropdef2node(mmethoddef)

			if npropdef isa AClassdef then
				if mmethoddef.mproperty.is_root_init then
					# Final init call
					if not mmethoddef.is_intro then
						self.add_super_send(v.receiver, mmethoddef)
					end
				else if mmethoddef.mclassdef.default_init == mmethoddef then
					# default_init call
					for i in mmethoddef.initializers do
						if i isa MMethod then self.add_send(v.receiver, i)
					end
				else
					npropdef.debug "cannot RTA {mmethoddef}"
					abort
				end
				continue
			else if mmethoddef.constant_value != null then
				# Make the return type live
				v.add_type(msignature.return_mtype.as(MClassType))
				continue
			else if npropdef == null then
				abort
			end

			if npropdef isa AMethPropdef then
				var auto_super_inits = npropdef.auto_super_inits
				if auto_super_inits != null then
					for auto_super_init in auto_super_inits do
						v.add_callsite(auto_super_init)
					end
				end
				if npropdef.auto_super_call then
					self.add_super_send(v.receiver, mmethoddef)
				end
			end

			if mmethoddef.is_intern or mmethoddef.is_extern then
				# UGLY: We force the "instantation" of the concrete return type if any
				var ret = msignature.return_mtype
				if ret != null and ret isa MClassType and ret.mclass.kind != abstract_kind and ret.mclass.kind != interface_kind then
					v.add_type(ret)
				end
			end

			v.enter_visit(npropdef)
		end

		#print "MMethod {live_methods.length}: {live_methods.join(", ")}"
		#print "MMethodDef {live_methoddefs.length}: {live_methoddefs.join(", ")}"

		#print "open MType {live_open_types.length}: {live_open_types.join(", ")}"
		var todo_types = new List[MClassType]
		todo_types.add_all(live_types)
		while not todo_types.is_empty do
			var t = todo_types.shift
			for ot in live_open_types do
				#print "{ot}/{t} ?"
				if not ot.can_resolve_for(t, t, mainmodule) then continue
				var rt = ot.anchor_to(mainmodule, t)
				if live_types.has(rt) then continue
				if not rt.is_legal_in(mainmodule) then continue
				if not check_depth(rt) then continue
				#print "{ot}/{t} -> {rt}"
				live_types.add(rt)
				# unshift means a deep-first visit.
				# So that the `check_depth` limit is reached sooner.
				todo_types.unshift(rt)
			end
		end
		#print "MType {live_types.length}: {live_types.join(", ")}"

		#print "open cast MType {live_open_cast_types.length}: {live_open_cast_types.join(", ")}"
		for ot in live_open_cast_types do
			#print "live_open_cast_type: {ot}"
			for t in live_types do
				if not ot.can_resolve_for(t, t, mainmodule) then continue
				var rt = ot.anchor_to(mainmodule, t)
				if not rt.is_legal_in(mainmodule) then continue
				live_cast_types.add(rt)
				#print "  {ot}/{t} -> {rt}"
			end
		end
		#print "cast MType {live_cast_types.length}: {live_cast_types.join(", ")}"
	end

	private fun check_depth(mtype: MClassType): Bool
	do
		var d = mtype.length
		if d > 255 then
			self.modelbuilder.toolcontext.fatal_error(null, "Fatal Error: limitation in the rapidtype analysis engine: a type depth of {d} is too important, the problematic type is `{mtype}`.")
			return false
		end
		return true
	end

	fun add_new(recv: MClassType, mtype: MClassType)
	do
		assert not recv.need_anchor
		if mtype.need_anchor then
			if live_open_types.has(mtype) then return
			live_open_types.add(mtype)
		else
			if live_types.has(mtype) then return
			live_types.add(mtype)
		end

		var mclass = mtype.mclass
		if live_classes.has(mclass) then return
		live_classes.add(mclass)

		for p in totry_methods do try_send(mtype, p)
		for p in live_super_sends do try_super_send(mtype, p)

		# Remove cleared ones
		for p in totry_methods_to_remove do totry_methods.remove(p)
		totry_methods_to_remove.clear

		var bound_mtype = mtype.anchor_to(mainmodule, recv)
		for cd in bound_mtype.collect_mclassdefs(mainmodule)
		do
			for npropdef in modelbuilder.collect_attr_propdef(cd) do
				if not npropdef.has_value then continue

				var mpropdef = npropdef.mreadpropdef.as(not null)
				var v = new RapidTypeVisitor(self, bound_mtype, mpropdef)
				v.enter_visit(npropdef.n_expr)
				v.enter_visit(npropdef.n_block)
			end
		end

	end

	fun add_cast(mtype: MType)
	do
		if mtype.need_anchor then
			live_open_cast_types.add(mtype)
		else
			live_cast_types.add(mtype)
		end
	end

	fun try_send(recv: MClassType, mproperty: MMethod)
	do
		recv = recv.mclass.intro.bound_mtype
		if not recv.has_mproperty(mainmodule, mproperty) then return
		var d = mproperty.lookup_first_definition(mainmodule, recv)
		add_call(d)
	end

	fun add_call(mpropdef: MMethodDef)
	do
		if live_methoddefs.has(mpropdef) then return
		live_methoddefs.add(mpropdef)
		live_mmodules.add(mpropdef.mclassdef.mmodule)
		todo.add(mpropdef)

		var mproperty = mpropdef.mproperty
		if mproperty.mpropdefs.length <= 1 then return
		# If all definitions of a method are live, we can remove the definition of the totry set
		for d in mproperty.mpropdefs do
			if not live_methoddefs.has(d) then return
		end
		#print "full property: {mpropdef.mproperty} for {mpropdef.mproperty.mpropdefs.length} definitions"
		totry_methods_to_remove.add(mpropdef.mproperty)
	end

	fun add_send(recv: MType, mproperty: MMethod)
	do
		if try_methods.has(mproperty) then return
		#print "new prop: {mproperty}"
		live_methods.add(mproperty)
		try_methods.add(mproperty)
		if mproperty.mpropdefs.length == 1 then
			# If there is only one definition, just add the definition and do not try again the property
			var d = mproperty.mpropdefs.first
			add_call(d)
			return
		end
		# Else, the property is potentially called with various reciever
		# So just try the methods with existing receiver and register it for future receiver
		totry_methods.add(mproperty)
		for c in live_classes do
			try_send(c.intro.bound_mtype, mproperty)
		end
	end

	fun try_super_send(recv: MClassType, mpropdef: MMethodDef)
	do
		recv = recv.mclass.intro.bound_mtype
		if not recv.collect_mclassdefs(mainmodule).has(mpropdef.mclassdef) then return
		var d = mpropdef.lookup_next_definition(mainmodule, recv)
		add_call(d)
	end

	fun add_super_send(recv: MType, mpropdef: MMethodDef)
	do
		assert mpropdef.has_supercall
		if live_super_sends.has(mpropdef) then return
		#print "new super prop: {mpropdef}"
		live_super_sends.add(mpropdef)
		for c in live_classes do
			try_super_send(c.intro.bound_mtype, mpropdef)
		end
	end
end

class RapidTypeVisitor
	super Visitor

	var analysis: RapidTypeAnalysis
	var receiver: MClassType
	var mpropdef: MPropDef

	init
	do
		assert not receiver.need_anchor
	end

	redef fun visit(n)
	do
		if n isa AExpr then
			if n.mtype != null or n.is_typed then
				n.accept_rapid_type_visitor(self)
				var implicit_cast_to = n.implicit_cast_to
				if implicit_cast_to != null then self.add_cast_type(implicit_cast_to)
			end
		else
			n.accept_rapid_type_visitor(self)
		end

		# RTA does not enter in AAnnotations
		if not n isa AAnnotations then
			n.visit_all(self)
		end
	end

	fun cleanup_type(mtype: MType): nullable MClassType
	do
		mtype = mtype.anchor_to(self.analysis.mainmodule, self.receiver)
		if mtype isa MNullType then return null
		mtype = mtype.undecorate
		assert mtype isa MClassType
		assert not mtype.need_anchor
		return mtype
	end

	fun get_method(recv: MType, name: String): MMethod
	do
		var mtype = cleanup_type(recv)
		assert mtype != null
		return self.analysis.modelbuilder.force_get_primitive_method(self.current_node.as(not null), name, mtype.mclass, self.analysis.mainmodule)
	end

	fun add_type(mtype: MClassType) do analysis.add_new(receiver, mtype)

	fun add_monomorphic_send(mtype: MType, mproperty: MMethod)
	do
		analysis.live_methods.add(mproperty)
		analysis.try_send(mtype.as(MClassType), mproperty)
	end

	fun add_send(mtype: MType, mproperty: MMethod) do analysis.add_send(mtype, mproperty)

	fun add_cast_type(mtype: MType) do analysis.add_cast(mtype)

	fun add_callsite(callsite: nullable CallSite) do if callsite != null then
		for m in callsite.mpropdef.initializers do
			if m isa MMethod then
				analysis.add_send(callsite.recv, m)
			end
		end
		analysis.add_send(callsite.recv, callsite.mproperty)
		analysis.live_callsites.add(callsite)
	end
end

###

redef class ANode
	private fun accept_rapid_type_visitor(v: RapidTypeVisitor)
	do
	end
end

redef class AExpr
	# Make the `mtype` of the expression live
	# Used by literals and instantiations
	fun allocate_mtype(v: RapidTypeVisitor)
	do
		var mtype = self.mtype
		if not mtype isa MClassType then return
		v.add_type(self.mtype.as(MClassType))
	end
end

redef class AIntegerExpr
	redef fun accept_rapid_type_visitor(v)
	do
		allocate_mtype(v)
	end
end

redef class AFloatExpr
	redef fun accept_rapid_type_visitor(v)
	do
		allocate_mtype(v)
	end
end

redef class ACharExpr
	redef fun accept_rapid_type_visitor(v)
	do
		allocate_mtype(v)
	end
end

redef class AArrayExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var mtype = self.mtype.as(MClassType)
		v.add_type(mtype)
		var native = v.analysis.mainmodule.native_array_type(mtype.arguments.first)
		v.add_type(native)
		mtype = v.cleanup_type(mtype).as(not null)
		var prop = v.get_method(mtype, "with_native")
		v.add_monomorphic_send(mtype, prop)
		v.add_callsite(with_capacity_callsite)
		v.add_callsite(push_callsite)
	end
end

redef class AStringFormExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var native = v.analysis.mainmodule.c_string_type
		v.add_type(native)
		var prop = v.get_method(native, "to_s_unsafe")
		v.add_monomorphic_send(native, prop)
		v.add_callsite(to_re)
		v.add_callsite(ignore_case)
		v.add_callsite(newline)
		v.add_callsite(extended)
		v.add_callsite(to_bytes_with_copy)
	end
end

redef class ASuperstringExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var mmodule = v.analysis.mainmodule
		var object_type = mmodule.string_type
		var arraytype = mmodule.array_type(object_type)
		v.add_type(arraytype)
		var nattype = mmodule.native_array_type(object_type)
		v.add_type(nattype)
		var prop = v.get_method(arraytype, "join")
		v.add_monomorphic_send(arraytype, prop)
		var prop2 = v.get_method(arraytype, "with_native")
		v.add_monomorphic_send(arraytype, prop2)
		v.add_monomorphic_send(nattype, v.get_method(nattype, "native_to_s"))
	end
end

redef class ACrangeExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var mtype = self.mtype
		if not mtype isa MClassType then return
		v.add_type(mtype)
		v.add_callsite(init_callsite)
	end
end

redef class AOrangeExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var mtype = self.mtype
		if not mtype isa MClassType then return
		v.add_type(mtype)
		v.add_callsite(init_callsite)
	end
end

redef class ATrueExpr
	redef fun accept_rapid_type_visitor(v)
	do
		allocate_mtype(v)
	end
end

redef class AFalseExpr
	redef fun accept_rapid_type_visitor(v)
	do
		allocate_mtype(v)
	end
end

redef class AIsaExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var cast_type = self.cast_type
		if cast_type == null then return
		v.add_cast_type(cast_type)
	end
end

redef class AAsCastExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var mtype = self.mtype
		if mtype == null then return
		v.add_cast_type(mtype)
	end
end

redef class AAssertExpr
	redef fun accept_rapid_type_visitor(v)
	do
		if can_explain_assert(v.analysis.modelbuilder) then
			var str = explain_assert_str
			if str != null then str.accept_rapid_type_visitor(v)
		end
	end

	# Does `modelbuilder` know the classes to build a superstring to explain a failed assert?
	private fun can_explain_assert(modelbuilder: ModelBuilder): Bool
	do
		var nas = modelbuilder.model.get_mclasses_by_name("NativeArray")
		if nas == null then return false

		nas = modelbuilder.model.get_mclasses_by_name("Array")
		if nas == null or nas.is_empty then return false

		nas = modelbuilder.model.get_mclasses_by_name("String")
		if nas == null or nas.is_empty then return false

		return true
	end
end

redef class ASendExpr
	redef fun accept_rapid_type_visitor(v)
	do
		v.add_callsite(callsite)
	end
end

redef class ACallrefExpr
        redef fun accept_rapid_type_visitor(v)
        do
                super
                v.add_type(mtype.as(MClassType))
        end
end

redef class ASendReassignFormExpr
	redef fun accept_rapid_type_visitor(v)
	do
		v.add_callsite(callsite)
		v.add_callsite(reassign_callsite)
		v.add_callsite(write_callsite)
	end
end

redef class AVarReassignExpr
	redef fun accept_rapid_type_visitor(v)
	do
		v.add_callsite(reassign_callsite)
	end
end

redef class AAttrReassignExpr
	redef fun accept_rapid_type_visitor(v)
	do
		v.add_callsite(reassign_callsite)
	end
end

redef class ASuperExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var callsite = self.callsite
		if callsite != null then
			v.add_callsite(callsite)
			return
		end

		v.analysis.add_super_send(v.receiver, mpropdef.as(not null))
	end
end

redef class AForGroup
	redef fun accept_rapid_type_visitor(v)
	do
		v.add_callsite(self.method_iterator)
		v.add_callsite(self.method_is_ok)
		if self.variables.length == 1 then
			v.add_callsite(self.method_item)
		else if self.variables.length == 2 then
			v.add_callsite(self.method_key)
			v.add_callsite(self.method_item)
		else
			abort
		end
		v.add_callsite(self.method_next)
		var mf = self.method_finish
		if mf != null then v.add_callsite(mf)
	end
end

redef class ANewExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var mtype = self.recvtype.as(not null)
		v.add_type(mtype)
		v.add_callsite(callsite)
	end
end
