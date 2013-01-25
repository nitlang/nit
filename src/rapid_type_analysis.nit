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


# Rapid type analysis on the AST with heterogenous generics and customization
#
# Rapid type analysis is an analyse that aproximates the set of live classes
# and the set of live methods starting from the entry point of the program.
# These two sets are interdependant and computed together.
# It is quite efficient but the type set is global and pollutes each call site.
#
# Heterogenous generics means that each intancied generic class is associated
# to a distinct rapid type.
# Heterogenous generics has the advantage to resolve the formal generic
# parameters types but increase the number of types.
# More important, heterogenous generics cannot deal with infinite number of rapid
# types since the analyse tries to list them all (so some programs will be badly refused)
#
# Customization means that each method definition is analyzed one per rapid
# type of receiver.
# Customization have the following advantages:
#  * `self' is monomorphic
#  * virtual types are all resolved
#  * live attributes can be determined on each class
# But has the disadvantage to explode the number of rapid method: each method
# definition for each rapid type that need it
module rapid_type_analysis

import model
import modelbuilder
import typing
import auto_super_init

redef class ModelBuilder
	fun do_rapid_type_analysis(mainmodule: MModule): RapidTypeAnalysis
	do
		var model = self.model
		var analysis = new RapidTypeAnalysis(self, mainmodule)
		var nmodule = self.nmodules.first
		var maintype = mainmodule.sys_type
		if maintype == null then return analysis # No entry point
		analysis.add_type(maintype)
		var initprop = mainmodule.try_get_primitive_method("init", maintype)
		if initprop != null then
			analysis.add_monomorphic_send(maintype, initprop)
		end
		var mainprop = mainmodule.try_get_primitive_method("main", maintype)
		if mainprop != null then
			analysis.add_monomorphic_send(maintype, mainprop)
		end
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
	# live_send_sites to determine new customized_methoddefs to visit
	var live_types: HashSet[MClassType] = new HashSet[MClassType]

	# The pool of types used to perform type checks (isa and as).
	var live_cast_types: HashSet[MClassType] = new HashSet[MClassType]

	# Live method definitions.
	# These method definitions are:
	#  * visited trough a add_send on an already known live_type
	#  * visited trough a add_type for an already known live_send_sites
	#  * visided by a add_monomorphic_send or a add_static_call
	var live_methoddefs: HashSet[MMethodDef] = new HashSet[MMethodDef]

	# The pool of live customized method definitions
	var live_customized_methoddefs: HashSet[CustomizedMethodDef] = new HashSet[CustomizedMethodDef]

	# The pool of live RTA send site
	# During the analysis, new live_send_sites are added and combined with
	# live_types to determine new live_customized_methoddefs to visit
	var live_send_sites: HashSet[RTASendSite] = new HashSet[RTASendSite]

	# The customized method definitions that remain to visit
	private var todo: List[CustomizedMethodDef] = new List[CustomizedMethodDef]

	# Adapt and remove nullable
	# return null if we got the null type
	fun cleanup_type(mtype: MType, recvtype: MClassType): nullable MClassType
	do
		mtype = mtype.anchor_to(self.mainmodule, recvtype)
		if mtype isa MNullType then return null
		if mtype isa MNullableType then mtype = mtype.mtype
		assert mtype isa MClassType
		assert not mtype.need_anchor
		return mtype
	end

	# Add a live type to the pool
	#
	# If the types is already live, then do nothing.
	#
	# REQUIRE: not mtype.need_anchor
	fun add_type(mtype: MClassType)
	do
		if self.live_types.has(mtype) then return

		assert not mtype.need_anchor
		self.live_types.add(mtype)
		self.check_depth(mtype)

		# Collect default attributes
		for cd in mtype.collect_mclassdefs(self.mainmodule)
		do
			var nclassdef = self.modelbuilder.mclassdef2nclassdef[cd]
			for npropdef in nclassdef.n_propdefs do
				if not npropdef isa AAttrPropdef then continue
				var nexpr = npropdef.n_expr
				if nexpr == null then continue
				var v = new RapidTypeVisitor(self, nclassdef, npropdef.mpropdef.as(not null), mtype)
				v.enter_visit(nexpr)
			end
		end

		for rss in self.live_send_sites do
			if not mtype.is_subtype(self.mainmodule, null, rss.receiver) then continue
			if mtype.has_mproperty(self.mainmodule, rss.mmethod) then
				self.add_monomorphic_send(mtype, rss.mmethod)
			end
		end
	end

	# Add a send site to the pool
	#
	# If the send site is already live, then do nothing.
	fun add_send(mtype: MClassType, mmethod: MMethod)
	do
		var rss = new RTASendSite(mmethod, mtype)
		if self.live_send_sites.has(rss) then return

		self.live_send_sites.add(rss)

		for mtype2 in self.live_types do
			if not mtype2.is_subtype(self.mainmodule, null, mtype) then continue
			if mtype2.has_mproperty(self.mainmodule, mmethod) then
				self.add_monomorphic_send(mtype2, mmethod)
			end
		end
	end

	# Add a monomoprhic send.
	# The send site is not added to the pool.
	# The method just determine the associated method definition then
	# performs a static_call
	fun add_monomorphic_send(mtype: MClassType, mmethod: MMethod)
	do
		assert self.live_types.has(mtype)
		if not mtype.has_mproperty(self.mainmodule, mmethod) then return
		var def = mmethod.lookup_first_definition(self.mainmodule, mtype)
		self.add_static_call(mtype, def)
	end

	# Add a customized_methoddefs to the pool
	# Is the customized_methoddefs is already live, then do nothing
	fun add_static_call(mtype: MClassType, mmethoddef: MMethodDef)
	do
		assert self.live_types.has(mtype)
		var rm = new CustomizedMethodDef(mmethoddef, mtype)
		if self.live_customized_methoddefs.has(rm) then return
		self.live_customized_methoddefs.add(rm)
		self.todo.add(rm)
		self.live_methoddefs.add(mmethoddef)
	end

	# Add mtype to the cast pool.
	fun add_cast_type(mtype: MClassType)
	do
		if self.live_cast_types.has(mtype) then return

		assert not mtype.need_anchor
		self.live_cast_types.add(mtype)
		self.check_depth(mtype)
	end

	fun check_depth(mtype: MClassType)
	do
		var d = mtype.depth
		if d > 255 then
			self.modelbuilder.toolcontext.fatal_error(null, "Fatal error: limitation in the rapidtype analysis engine: a type depth of {d} is too important, the problematic type is {mtype}.")
		end
	end

	# Run the analysis until all visitable method definitions are visited.
	fun run_analysis
	do
		# Force Bool
		var classes = self.modelbuilder.model.get_mclasses_by_name("Bool")
		if classes != null then for c in classes do self.add_type(c.mclass_type)

		while not todo.is_empty do
			var mr = todo.shift

			var vararg_rank = mr.mmethoddef.msignature.vararg_rank
			if vararg_rank > -1 then
				var node = self.modelbuilder.mpropdef2npropdef[mr.mmethoddef]
				var elttype = mr.mmethoddef.msignature.mparameters[vararg_rank].mtype
				elttype = elttype.anchor_to(self.mainmodule, mr.receiver)
				var vararg = self.mainmodule.get_primitive_class("Array").get_mtype([elttype])
				self.add_type(vararg)
				self.add_monomorphic_send(vararg, self.modelbuilder.force_get_primitive_method(node, "with_native", vararg, self.mainmodule))
				var native = self.mainmodule.get_primitive_class("NativeArray").get_mtype([elttype])
				self.add_type(native)
			end

			for i in [0..mr.mmethoddef.msignature.arity[ do
				var origtype = mr.mmethoddef.mproperty.intro.msignature.mparameters[i].mtype
				if not origtype.need_anchor then continue # skip non covariant stuff
				var paramtype = mr.mmethoddef.msignature.mparameters[i].mtype
				paramtype = self.cleanup_type(paramtype, mr.receiver).as(not null)
				self.add_cast_type(paramtype)
			end

			if not self.modelbuilder.mpropdef2npropdef.has_key(mr.mmethoddef) then
				# It is an init for a class?
				if mr.mmethoddef.mproperty.name == "init" then
					var nclassdef = self.modelbuilder.mclassdef2nclassdef[mr.mmethoddef.mclassdef]
					var super_inits = nclassdef.super_inits
					if super_inits != null then
						#assert args.length == 1
						for su in super_inits do
							self.add_monomorphic_send(mr.receiver, su)
						end
					end

				else
					abort
				end
				continue
			end
			var npropdef = self.modelbuilder.mpropdef2npropdef[mr.mmethoddef]
			if npropdef isa AConcreteMethPropdef then
				#npropdef.debug("Visit {mr.mmethoddef} for {mr.receiver}")
				var nclassdef = npropdef.parent.as(AClassdef)
				var mmethoddef = npropdef.mpropdef.as(not null)
				var auto_super_inits = npropdef.auto_super_inits
				if auto_super_inits != null then
					for auto_super_init in auto_super_inits do
						self.add_monomorphic_send(mr.receiver, auto_super_init)
					end
				end
				var v = new RapidTypeVisitor(self, nclassdef, mmethoddef, mr.receiver)
				v.enter_visit(npropdef.n_block)
			else if npropdef isa ADeferredMethPropdef then
				# nothing to do (maybe add a waring?)
			else if npropdef isa AAttrPropdef then
				# nothing to do
			else if npropdef isa AInternMethPropdef or npropdef isa AExternMethPropdef then
				# UGLY: We force the "instantation" of the concrete return type if any
				var ret = mr.mmethoddef.msignature.return_mtype
				if ret != null and ret isa MClassType and ret.mclass.kind != abstract_kind and ret.mclass.kind != interface_kind then
					ret = ret.anchor_to(self.mainmodule, mr.receiver)
					self.add_type(ret)
				end
			else if npropdef isa AExternInitPropdef then
				self.add_type(mr.receiver)
			else
				npropdef.debug("Not yet implemented")
				abort
			end
		end
	end
end

# A method definitions customized to a specific receiver
class CustomizedMethodDef
	var mmethoddef: MMethodDef
	var receiver: MClassType

	redef fun to_s
	do
		return "{self.mmethoddef}({receiver})"
	end

	redef fun ==(o)
	do
		return o isa CustomizedMethodDef and o.mmethoddef == self.mmethoddef and o.receiver == self.receiver
	end

	redef fun hash
	do
		return self.mmethoddef.hash + self.receiver.hash
	end
end

# A method invokation site bounded by a specific receiver
class RTASendSite
	var mmethod: MMethod
	var receiver: MClassType

	redef fun ==(o)
	do
		return o isa RTASendSite and o.mmethod == self.mmethod and o.receiver == self.receiver
	end

	redef fun hash
	do
		return self.mmethod.hash + self.receiver.hash
	end
end

private class RapidTypeVisitor
	super Visitor

	var analysis: RapidTypeAnalysis

	var nclassdef: AClassdef

	var mpropdef: MPropDef

	var receiver: MClassType

	init(analysis: RapidTypeAnalysis, nclassdef: AClassdef, mpropdef: MPropDef, receiver: MClassType)
	do
		self.analysis = analysis
		self.nclassdef = nclassdef
		self.mpropdef = mpropdef
		self.receiver = receiver
	end

	# Adapt and remove nullable
	# return null if we got the null type
	fun cleanup_type(mtype: MType): nullable MClassType
	do
		mtype = mtype.anchor_to(self.analysis.mainmodule, self.receiver)
		if mtype isa MNullType then return null
		if mtype isa MNullableType then mtype = mtype.mtype
		assert mtype isa MClassType
		assert not mtype.need_anchor
		return mtype
	end

	fun add_type(mtype: MType)
	do
		var rapidtype = cleanup_type(mtype)
		if rapidtype == null then return # we do not care about null

		self.analysis.add_type(rapidtype)
		#self.current_node.debug("add_type {rapidtype}")
	end

	fun add_send(mtype: MType, mproperty: MMethod)
	do
		var rapidtype = cleanup_type(mtype)
		if rapidtype == null then return # we do not care about null

		analysis.add_send(rapidtype, mproperty)
		#self.current_node.debug("add_send {mproperty}")
	end

	fun add_monomorphic_send(mtype: MType, mproperty: MMethod)
	do
		var rapidtype = cleanup_type(mtype)
		if rapidtype == null then return # we do not care about null

		self.analysis.add_monomorphic_send(rapidtype, mproperty)
		#self.current_node.debug("add_monomorphic_send {rapidtype} {mproperty}")
	end

	fun add_cast_type(mtype: MType)
	do
		var rapidtype = cleanup_type(mtype)
		if rapidtype == null then return # we do not care about null

		self.analysis.add_cast_type(rapidtype)
		#self.current_node.debug("add_cast_type {rapidtype}")
	end

	redef fun visit(node)
	do
		if node == null then return
		node.accept_rapid_type_vistor(self)
		if node isa AExpr then
			var implicit_cast_to = node.implicit_cast_to
			if implicit_cast_to != null then self.add_cast_type(implicit_cast_to)
		end
		node.visit_all(self)
	end

	# Force to get the primitive class named `name' or abort
	fun get_class(name: String): MClass
	do
		return self.analysis.mainmodule.get_primitive_class(name)
	end

	# Force to get the primitive property named `name' in the instance `recv' or abort
	fun get_method(recv: MType, name: String): MMethod
	do
		var rapidtype = cleanup_type(recv)
		if rapidtype == null then abort

		return self.analysis.modelbuilder.force_get_primitive_method(self.current_node.as(not null), name, rapidtype, self.analysis.mainmodule)
	end
end

###

redef class ANode
	private fun accept_rapid_type_vistor(v: RapidTypeVisitor)
	do
	end
end

redef class AIntExpr
	redef fun accept_rapid_type_vistor(v)
	do
		v.add_type(self.mtype.as(not null))
	end
end

redef class AFloatExpr
	redef fun accept_rapid_type_vistor(v)
	do
		v.add_type(self.mtype.as(not null))
	end
end

redef class ACharExpr
	redef fun accept_rapid_type_vistor(v)
	do
		v.add_type(self.mtype.as(not null))
	end
end

redef class AArrayExpr
	redef fun accept_rapid_type_vistor(v)
	do
		var mtype = self.mtype.as(MClassType)
		v.add_type(mtype)
		var native = v.get_class("NativeArray").get_mtype([mtype.arguments.first])
		v.add_type(native)
		var prop = v.get_method(mtype, "with_native")
		v.add_monomorphic_send(mtype, prop)
	end
end

redef class AStringFormExpr
	redef fun accept_rapid_type_vistor(v)
	do
		var mtype = self.mtype.as(not null)
		v.add_type(mtype)
		var native = v.get_class("NativeString").mclass_type
		v.add_type(native)
		var prop = v.get_method(mtype, "from_cstring")
		v.add_monomorphic_send(mtype, prop)
	end
end

redef class ASuperstringExpr
	redef fun accept_rapid_type_vistor(v)
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
	redef fun accept_rapid_type_vistor(v)
	do
		var mtype = self.mtype.as(not null)
		v.add_type(mtype)
		var prop = v.get_method(mtype, "init")
		v.add_monomorphic_send(mtype, prop)
	end
end

redef class AOrangeExpr
	redef fun accept_rapid_type_vistor(v)
	do
		var mtype = self.mtype.as(not null)
		v.add_type(mtype)
		var prop = v.get_method(mtype, "without_last")
		v.add_monomorphic_send(mtype, prop)
	end
end

redef class ATrueExpr
	redef fun accept_rapid_type_vistor(v)
	do
		v.add_type(self.mtype.as(not null))
	end
end

redef class AFalseExpr
	redef fun accept_rapid_type_vistor(v)
	do
		v.add_type(self.mtype.as(not null))
	end
end

redef class AIsaExpr
	redef fun accept_rapid_type_vistor(v)
	do
		v.add_cast_type(self.cast_type.as(not null))
	end
end

redef class AAsCastExpr
	redef fun accept_rapid_type_vistor(v)
	do
		v.add_cast_type(self.mtype.as(not null))
	end
end

#

redef class ASendExpr
	redef fun accept_rapid_type_vistor(v)
	do
		var mproperty = self.mproperty.as(not null)
		if n_expr isa ASelfExpr then
			v.add_monomorphic_send(v.receiver, mproperty)
		else
			var recvtype = self.n_expr.mtype.as(not null)
			v.add_send(recvtype, mproperty)
		end
	end
end

redef class ASendReassignFormExpr
	redef fun accept_rapid_type_vistor(v)
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
	redef fun accept_rapid_type_vistor(v)
	do
		v.add_send(self.read_type.as(not null), self.reassign_property.mproperty)
	end
end

redef class AAttrReassignExpr
	redef fun accept_rapid_type_vistor(v)
	do
		v.add_send(self.read_type.as(not null), self.reassign_property.mproperty)
	end
end

redef class ASuperExpr
	redef fun accept_rapid_type_vistor(v)
	do
		var mproperty = self.mproperty
		if mproperty != null then
			v.add_monomorphic_send(v.receiver, mproperty)
			return
		end

		#FIXME: we do not want an ugly static call!
		var mpropdef = v.mpropdef
		var mpropdefs = mpropdef.mproperty.lookup_super_definitions(mpropdef.mclassdef.mmodule, mpropdef.mclassdef.bound_mtype)
		if mpropdefs.length != 1 then
			debug("MPRODFEFS for super {mpropdef} for {v.receiver}: {mpropdefs.join(", ")}")
		end
		var msuperpropdef = mpropdefs.first
		assert msuperpropdef isa MMethodDef
		v.analysis.add_static_call(v.receiver, msuperpropdef)
	end
end

redef class AForExpr
	redef fun accept_rapid_type_vistor(v)
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
	redef fun accept_rapid_type_vistor(v)
	do
		var recvtype = self.mtype.as(not null)
		v.add_type(recvtype)
		v.add_monomorphic_send(recvtype, mproperty.as(not null))
	end
end
