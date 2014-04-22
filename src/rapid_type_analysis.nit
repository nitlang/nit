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

import model
import modelbuilder
import typing
import auto_super_init

import csv # for live_types_to_csv
import ordered_tree # for live_methods_to_tree

private import more_collections

redef class ModelBuilder
	fun do_rapid_type_analysis(mainmodule: MModule): RapidTypeAnalysis
	do
		var analysis = new RapidTypeAnalysis(self, mainmodule)
		analysis.run_analysis
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

	# The pool of undesolved live types
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

	# Live callsites.
	var live_callsites = new HashSet[CallSite]

	private var live_targets_cache = new HashMap2[MType, MProperty, Set[MMethodDef]]

	# The live targets of a specific callsite.
	fun live_targets(callsite: CallSite): Set[MMethodDef]
	do
		var mtype = callsite.recv
		var anchor = callsite.anchor
		if anchor != null then mtype = mtype.anchor_to(callsite.mmodule, anchor)
		if mtype isa MNullableType then mtype = mtype.mtype
		assert mtype isa MClassType
		mtype = mtype.mclass.intro.bound_mtype
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
	fun live_types_to_csv: CSVDocument
	do
		# Gather all kind of type
		var typeset = new HashSet[MType]
		typeset.add_all(live_types)
		typeset.add_all(live_open_types)
		typeset.add_all(live_cast_types)
		typeset.add_all(live_open_cast_types)
		var types = typeset.to_a
		(new CachedAlphaComparator).sort(types)
		var res = new CSVDocument
		res.header = ["Type", "Resolution", "Liveness", "Cast-liveness"]
		for t in types do
			var reso
			if t.need_anchor then reso = "OPEN " else reso = "CLOSED"
			var live
			if t isa MClassType and (live_types.has(t) or live_open_types.has(t)) then live = "LIVE" else live = "DEAD"
			var cast
			if live_cast_types.has(t) or live_open_cast_types.has(t) then cast = "CAST LIVE" else cast = "CAST DEAD"
			res.add_line(t, reso, live, cast)
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
		var mainprop = mainmodule.try_get_primitive_method("main", maintype.mclass)
		if mainprop != null then
			add_send(maintype, mainprop)
		end

		# Force primitive types
		force_alive("Bool")
		force_alive("Int")
		force_alive("Float")
		force_alive("Char")

		while not todo.is_empty do
			var mmethoddef = todo.shift
			#print "# visit {mmethoddef}"
			var v = new RapidTypeVisitor(self, mmethoddef.mclassdef.bound_mtype, mmethoddef)

			var vararg_rank = mmethoddef.msignature.vararg_rank
			if vararg_rank > -1 then
				var node = self.modelbuilder.mpropdef2npropdef[mmethoddef]
				var elttype = mmethoddef.msignature.mparameters[vararg_rank].mtype
				#elttype = elttype.anchor_to(self.mainmodule, v.receiver)
				var vararg = self.mainmodule.get_primitive_class("Array").get_mtype([elttype])
				v.add_type(vararg)
				var native = self.mainmodule.get_primitive_class("NativeArray").get_mtype([elttype])
				v.add_type(native)
				v.add_monomorphic_send(vararg, self.modelbuilder.force_get_primitive_method(node, "with_native", vararg.mclass, self.mainmodule))
			end


			for i in [0..mmethoddef.msignature.arity[ do
				var origtype = mmethoddef.mproperty.intro.msignature.mparameters[i].mtype
				if not origtype.need_anchor then continue # skip non covariant stuff
				var paramtype = mmethoddef.msignature.mparameters[i].mtype
				#paramtype = v.cleanup_type(paramtype).as(not null)
				add_cast(paramtype)
			end

			if not modelbuilder.mpropdef2npropdef.has_key(mmethoddef) then
				# It is an init for a class?
				if mmethoddef.mproperty.name == "init" then
					var nclassdef = self.modelbuilder.mclassdef2nclassdef[mmethoddef.mclassdef]
					var super_inits = nclassdef.super_inits
					if super_inits != null then
						#assert args.length == 1
						for su in super_inits do
							v.add_monomorphic_send(v.receiver, su)
						end
					end

				else
					abort
				end
				continue
			end

			var npropdef = modelbuilder.mpropdef2npropdef[mmethoddef]

			if npropdef isa AConcreteMethPropdef then
				var auto_super_inits = npropdef.auto_super_inits
				if auto_super_inits != null then
					for auto_super_init in auto_super_inits do
						v.add_callsite(auto_super_init)
					end
				end
			else if npropdef isa AInternMethPropdef or
			  (npropdef isa AExternMethPropdef and npropdef.n_extern != null) then
				# UGLY: We force the "instantation" of the concrete return type if any
				var ret = mmethoddef.msignature.return_mtype
				if ret != null and ret isa MClassType and ret.mclass.kind != abstract_kind and ret.mclass.kind != interface_kind then
					v.add_type(ret)
				end
			else if npropdef isa AExternMethPropdef then
				var nclassdef = npropdef.parent.as(AClassdef)
				v.enter_visit(npropdef)
			else if npropdef isa AExternInitPropdef then
				v.add_type(v.receiver)
			else

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
				#print "{ot}/{t} -> {rt}"
				live_types.add(rt)
				todo_types.add(rt)
				check_depth(rt)
			end
		end
		#print "MType {live_types.length}: {live_types.join(", ")}"

		#print "open cast MType {live_open_cast_types.length}: {live_open_cast_types.join(", ")}"
		for ot in live_open_cast_types do
			#print "live_open_cast_type: {ot}"
			for t in live_types do
				if not ot.can_resolve_for(t, t, mainmodule) then continue
				var rt = ot.anchor_to(mainmodule, t)
				live_cast_types.add(rt)
				#print "  {ot}/{t} -> {rt}"
			end
		end
		#print "cast MType {live_cast_types.length}: {live_cast_types.join(", ")}"
	end

	private fun check_depth(mtype: MClassType)
	do
		var d = mtype.length
		if d > 255 then
			self.modelbuilder.toolcontext.fatal_error(null, "Fatal error: limitation in the rapidtype analysis engine: a type depth of {d} is too important, the problematic type is {mtype}.")
		end
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

		var bound_mtype = mtype.anchor_to(mainmodule, recv)
		for cd in bound_mtype.collect_mclassdefs(mainmodule)
		do
			if not self.modelbuilder.mclassdef2nclassdef.has_key(cd) then continue
			var nclassdef = self.modelbuilder.mclassdef2nclassdef[cd]
			for npropdef in nclassdef.n_propdefs do
				if not npropdef isa AAttrPropdef then continue
				var nexpr = npropdef.n_expr
				if nexpr == null then continue
				var mpropdef = npropdef.mpropdef.as(not null)
				var v = new RapidTypeVisitor(self, bound_mtype, mpropdef)
				v.enter_visit(nexpr)
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
		todo.add(mpropdef)

		var mproperty = mpropdef.mproperty
		if mproperty.mpropdefs.length <= 1 then return
		# If all definitions of a method are live, we can remove the definition of the totry set
		for d in mproperty.mpropdefs do
			if d.is_abstract then continue
			if not live_methoddefs.has(d) then return
		end
		#print "full property: {mpropdef.mproperty} for {mpropdef.mproperty.mpropdefs.length} definitions"
		totry_methods.remove(mpropdef.mproperty)
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
		if live_super_sends.has(mpropdef) then return
		#print "new super prop: {mpropdef}"
		live_super_sends.add(mpropdef)
		for t in live_types do
			try_super_send(t, mpropdef)
		end
	end
end

class RapidTypeVisitor
	super Visitor

	var analysis: RapidTypeAnalysis
	var receiver: MClassType
	var mpropdef: MPropDef

	init(analysis: RapidTypeAnalysis, receiver: MClassType, mpropdef: MPropDef)
	do
		self.analysis = analysis
		self.receiver = receiver
		self.mpropdef = mpropdef
		assert not receiver.need_anchor
	end

	redef fun visit(n)
	do
		n.accept_rapid_type_visitor(self)
		if n isa AExpr then
			var implicit_cast_to = n.implicit_cast_to
			if implicit_cast_to != null then self.add_cast_type(implicit_cast_to)
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
		if mtype isa MNullableType then mtype = mtype.mtype
		assert mtype isa MClassType
		assert not mtype.need_anchor
		return mtype
	end

	fun get_class(name: String): MClass
	do
		return analysis.mainmodule.get_primitive_class(name)
	end

	fun get_method(recv: MType, name: String): MMethod
	do
		var mtype = cleanup_type(recv)
		assert mtype != null
		return self.analysis.modelbuilder.force_get_primitive_method(self.current_node.as(not null), name, mtype.mclass, self.analysis.mainmodule)
	end

	fun add_type(mtype: MClassType) do analysis.add_new(receiver, mtype)

	fun add_monomorphic_send(mtype: MType, mproperty: MMethod) do analysis.try_send(mtype.as(MClassType), mproperty)

	fun add_send(mtype: MType, mproperty: MMethod) do analysis.add_send(mtype, mproperty)

	fun add_cast_type(mtype: MType) do analysis.add_cast(mtype)

	fun add_callsite(callsite: nullable CallSite) do if callsite != null then
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

redef class AIntExpr
	redef fun accept_rapid_type_visitor(v)
	do
		v.add_type(self.mtype.as(MClassType))
	end
end

redef class AFloatExpr
	redef fun accept_rapid_type_visitor(v)
	do
		v.add_type(self.mtype.as(MClassType))
	end
end

redef class ACharExpr
	redef fun accept_rapid_type_visitor(v)
	do
		v.add_type(self.mtype.as(MClassType))
	end
end

redef class AArrayExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var mtype = self.mtype.as(MClassType)
		v.add_type(mtype)
		var native = v.analysis.mainmodule.get_primitive_class("NativeArray").get_mtype([mtype.arguments.first])
		v.add_type(native)
		mtype = v.cleanup_type(mtype).as(not null)
		var prop = v.get_method(mtype, "with_native")
		v.add_monomorphic_send(mtype, prop)
	end
end

redef class AStringFormExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var native = v.get_class("NativeString").mclass_type
		v.add_type(native)
		var prop = v.get_method(native, "to_s_with_length")
		v.add_monomorphic_send(native, prop)
	end
end

redef class ASuperstringExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var arraytype = v.get_class("Array").get_mtype([v.get_class("Object").mclass_type])
		v.add_type(arraytype)
		v.add_type(v.get_class("NativeArray").get_mtype([v.get_class("Object").mclass_type]))
		var prop = v.get_method(arraytype, "join")
		v.add_monomorphic_send(arraytype, prop)
		var prop2 = v.get_method(arraytype, "with_native")
		v.add_monomorphic_send(arraytype, prop2)
	end
end

redef class ACrangeExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var mtype = self.mtype.as(MClassType)
		v.add_type(mtype)
		v.add_callsite(init_callsite)
	end
end

redef class AOrangeExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var mtype = self.mtype.as(MClassType)
		v.add_type(mtype)
		v.add_callsite(init_callsite)
	end
end

redef class ATrueExpr
	redef fun accept_rapid_type_visitor(v)
	do
		v.add_type(self.mtype.as(MClassType))
	end
end

redef class AFalseExpr
	redef fun accept_rapid_type_visitor(v)
	do
		v.add_type(self.mtype.as(MClassType))
	end
end

redef class AIsaExpr
	redef fun accept_rapid_type_visitor(v)
	do
		v.add_cast_type(self.cast_type.as(not null))
	end
end

redef class AAsCastExpr
	redef fun accept_rapid_type_visitor(v)
	do
		v.add_cast_type(self.mtype.as(not null))
	end
end

redef class ASendExpr
	redef fun accept_rapid_type_visitor(v)
	do
		v.add_callsite(callsite)
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

redef class AForExpr
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
	end
end

redef class ANewExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var mtype = self.mtype.as(MClassType)
		v.add_type(mtype)
		v.add_callsite(callsite)
	end
end
