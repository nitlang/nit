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
	var live_cast_types = new HashSet[MClassType]

	# The pool of undesolved types used to perform type checks (isa and as).
	# They are globally resolved at the end of the analaysis
	var live_open_cast_types = new HashSet[MType]

	# Live method definitions.
	var live_methoddefs = new HashSet[MMethodDef]

	# Live methods.
	var live_methods = new HashSet[MMethod]

	# Live call-to-super.
	var live_super_sends = new HashSet[MMethodDef]

	# Methods that are are still candidate to the try_send
	private var totry_methods = new HashSet[MMethod]

	# The method definitions that remain to visit
	private var todo = new List[MMethodDef]

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

		# Force Bool
		var classes = self.modelbuilder.model.get_mclasses_by_name("Bool")
		if classes != null then for c in classes do self.add_new(c.mclass_type, c.mclass_type)

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
				v.add_monomorphic_send(vararg, self.modelbuilder.force_get_primitive_method(node, "with_native", vararg.mclass, self.mainmodule))
				var native = self.mainmodule.get_primitive_class("NativeArray").get_mtype([elttype])
				v.add_type(native)
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
						v.add_monomorphic_send(v.receiver, auto_super_init)
					end
				end
			else if npropdef isa AInternMethPropdef or npropdef isa AExternMethPropdef then
				# UGLY: We force the "instantation" of the concrete return type if any
				var ret = mmethoddef.msignature.return_mtype
				if ret != null and ret isa MClassType and ret.mclass.kind != abstract_kind and ret.mclass.kind != interface_kind then
					v.add_type(ret)
				end
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
				if rt isa MNullableType then rt = rt.mtype
				assert rt isa MClassType
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
		if mtype isa MNullableType then mtype = mtype.mtype
		if mtype.need_anchor then
			live_open_cast_types.add(mtype)
		else
			assert mtype isa MClassType
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
		if live_methods.has(mproperty) then return
		#print "new prop: {mproperty}"
		live_methods.add(mproperty)
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
		var mtype = self.mtype.as(MClassType)
		v.add_type(mtype)
		var native = v.get_class("NativeString").mclass_type
		v.add_type(native)
		var prop = v.get_method(mtype, "from_cstring")
		v.add_monomorphic_send(mtype, prop)
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
		var prop = v.get_method(mtype, "init")
		v.add_monomorphic_send(mtype, prop)
	end
end

redef class AOrangeExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var mtype = self.mtype.as(MClassType)
		v.add_type(mtype)
		var prop = v.get_method(mtype, "without_last")
		v.add_monomorphic_send(mtype, prop)
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
		var mproperty = self.mproperty.as(not null)
		var recvtype = self.n_expr.mtype.as(not null)
		v.add_send(recvtype, mproperty)
	end
end


redef class ASendReassignFormExpr
	redef fun accept_rapid_type_visitor(v)
	do
		v.add_send(self.read_type.as(not null), self.reassign_property.mproperty)
		var mproperty = self.mproperty.as(not null)
		var write_mproperty = self.write_mproperty.as(not null)
		if n_expr isa ASelfExpr then
			v.add_monomorphic_send(v.receiver, mproperty)
			v.add_monomorphic_send(v.receiver, write_mproperty)
		else
			var recvtype = self.n_expr.mtype.as(not null)
			v.add_send(recvtype, mproperty)
			v.add_send(recvtype, write_mproperty)
		end
	end
end

redef class AVarReassignExpr
	redef fun accept_rapid_type_visitor(v)
	do
		v.add_send(self.read_type.as(not null), self.reassign_property.mproperty)
	end
end

redef class AAttrReassignExpr
	redef fun accept_rapid_type_visitor(v)
	do
		v.add_send(self.read_type.as(not null), self.reassign_property.mproperty)
	end
end

redef class ASuperExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var mproperty = self.mproperty
		if mproperty != null then
			v.add_monomorphic_send(v.receiver, mproperty)
			return
		end

		v.analysis.add_super_send(v.receiver, v.mpropdef.as(MMethodDef))
	end
end

redef class AForExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var recvtype = self.n_expr.mtype.as(not null)
		var colltype = self.coltype.as(not null)
		var itmeth = v.get_method(colltype, "iterator")
		v.add_send(recvtype, itmeth)
		var iteratortype = itmeth.intro.msignature.return_mtype.as(MClassType).mclass.intro.bound_mtype
		var objtype = v.get_class("Object").mclass_type
		v.add_send(objtype, v.get_method(iteratortype, "is_ok"))
		if self.variables.length == 1 then
			v.add_send(objtype, v.get_method(iteratortype, "item"))
		else if self.variables.length == 2 then
			v.add_send(objtype, v.get_method(iteratortype, "key"))
			v.add_send(objtype, v.get_method(iteratortype, "item"))
		else
			abort
		end
		v.add_send(objtype, v.get_method(iteratortype, "next"))
	end
end

redef class ANewExpr
	redef fun accept_rapid_type_visitor(v)
	do
		var mtype = self.mtype.as(MClassType)
		v.add_type(mtype)
		var mproperty = self.mproperty.as(not null)
		v.add_monomorphic_send(mtype, mproperty)
	end
end
