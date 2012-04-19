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
# It is quite efficient but the type set is global such pollute each call site.
#
# Heterogenous generics means that each intancied generic class is associated
# to a distinct runtime type.
# Heterogenous generics has the advantage to resolve the the formal generic
# parameters types but increase the number of types.
# More important, heterogenous generics cannot deal with infinite number of runtime
# types since the analyse tries to list them all (so some programs will be badly refused)
#
# Customization means that each method definition is analyzed one per runtime
# type of receiver.
# Customization have the following advantages:
#  * `self' is monomorphic
#  * virtual types are all resolved
#  * live attributes can be determined on each class
# But the big disavantage to explode the number of runtime method: each method
# definition for each runtime type that need it
module runtime_type

import model
import modelbuilder
import typing
import auto_super_init

redef class MModule
	var main_type: nullable MClassType
	var main_init: nullable MMethod
	var main_method: nullable MMethod
end

redef class ModelBuilder
	fun do_runtime_type(mainmodule: MModule): RuntimeTypeAnalysis
	do
		var model = self.model
		var analysis = new RuntimeTypeAnalysis(self, mainmodule)
		var nmodule = self.nmodules.first
		var mainclass = self.try_get_mclass_by_name(nmodule, mainmodule, "Sys")
		assert mainclass != null
		var props = model.get_mproperties_by_name("main")
		assert props.length == 1
		var methods = props.first.lookup_definitions(mainmodule, mainclass.mclass_type)
		assert methods.length == 1 else print methods.join(", ")
		var maintype = mainclass.mclass_type
		analysis.add_type(maintype)
		mainmodule.main_type = maintype
		var initprop = self.try_get_mproperty_by_name2(nmodule, mainmodule, maintype, "init")
		if initprop != null then
			assert initprop isa MMethod
			analysis.add_monomorphic_send(maintype, initprop)
		end
		mainmodule.main_init = initprop
		var mainprop = self.try_get_mproperty_by_name2(nmodule, mainmodule, maintype, "main")
		if mainprop != null then
			assert mainprop isa MMethod
			analysis.add_monomorphic_send(maintype, mainprop)
		end
		mainmodule.main_method = mainprop
		analysis.run_analysis
		return analysis
	end
end

class RuntimeTypeAnalysis
	var modelbuilder: ModelBuilder
	var mainmodule: MModule
	var live_types: HashSet[MClassType] = new HashSet[MClassType]
	var live_cast_types: HashSet[MClassType] = new HashSet[MClassType]
	var polymorphic_methods: HashSet[MMethod] = new HashSet[MMethod]
	var live_methoddefs: HashSet[MMethodDef] = new HashSet[MMethodDef]
	var runtime_methods: HashSet[RuntimeMethod] = new HashSet[RuntimeMethod]
	var live_send_site: HashSet[RuntimeSendSite] = new HashSet[RuntimeSendSite]

	private var todo: List[RuntimeMethod] = new List[RuntimeMethod]

	fun add_type(mtype: MClassType)
	do
		if self.live_types.has(mtype) then return

		assert not mtype.need_anchor
		self.live_types.add(mtype)

		for rss in self.live_send_site do
			if not mtype.is_subtype(self.mainmodule, null, rss.receiver) then continue
			if mtype.has_mproperty(self.mainmodule, rss.mmethod) then
				self.add_monomorphic_send(mtype, rss.mmethod)
			end
		end
	end

	fun add_send(mtype: MClassType, mmethod: MMethod)
	do
		var rss = new RuntimeSendSite(mmethod, mtype)
		if self.live_send_site.has(rss) then return

		self.live_send_site.add(rss)
		self.polymorphic_methods.add(mmethod)

		for mtype2 in self.live_types do
			if not mtype2.is_subtype(self.mainmodule, null, mtype) then continue
			if mtype2.has_mproperty(self.mainmodule, mmethod) then
				self.add_monomorphic_send(mtype2, mmethod)
			end
		end
	end

	fun add_monomorphic_send(mtype: MClassType, mmethod: MMethod)
	do
		assert self.live_types.has(mtype)
		var defs = mmethod.lookup_definitions(self.mainmodule, mtype)
		if defs.is_empty then return
		assert defs.length == 1 else print "conflict on {mtype} for {mmethod}: {defs.join(" ")}"
		self.add_static_call(mtype, defs.first)
	end

	fun add_static_call(mtype: MClassType, mmethoddef: MMethodDef)
	do
		assert self.live_types.has(mtype)
		var rm = new RuntimeMethod(mmethoddef, mtype)
		if self.runtime_methods.has(rm) then return
		self.runtime_methods.add(rm)
		self.todo.add(rm)
		self.live_methoddefs.add(mmethoddef)
	end

	fun add_cast_type(mtype: MClassType)
	do
		if self.live_cast_types.has(mtype) then return

		assert not mtype.need_anchor
		self.live_cast_types.add(mtype)
	end

	fun run_analysis
	do
		while not todo.is_empty do
			var mr = todo.shift
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
				var v = new RuntimeTypeVisitor(self, nclassdef, mmethoddef, mr.receiver)
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

class RuntimeMethod
	var mmethoddef: MMethodDef
	var receiver: MClassType

	redef fun ==(o)
	do
		return o isa RuntimeMethod and o.mmethoddef == self.mmethoddef and o.receiver == self.receiver
	end

	redef fun hash
	do
		return self.mmethoddef.hash + self.receiver.hash
	end
end

class RuntimeSendSite
	var mmethod: MMethod
	var receiver: MClassType

	redef fun ==(o)
	do
		return o isa RuntimeSendSite and o.mmethod == self.mmethod and o.receiver == self.receiver
	end

	redef fun hash
	do
		return self.mmethod.hash + self.receiver.hash
	end
end

private class RuntimeTypeVisitor
	super Visitor

	var analysis: RuntimeTypeAnalysis

	var nclassdef: AClassdef

	var mmethoddef: MMethodDef

	var receiver: MClassType

	init(analysis: RuntimeTypeAnalysis, nclassdef: AClassdef, mmethoddef: MMethodDef, receiver: MClassType)
	do
		self.analysis = analysis
		self.nclassdef = nclassdef
		self.mmethoddef = mmethoddef
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
		var runtimetype = cleanup_type(mtype)
		if runtimetype == null then return # we do not care about null

		self.analysis.add_type(runtimetype)
		#self.current_node.debug("add_type {runtimetype}")
	end

	fun add_send(mtype: MType, mproperty: MMethod)
	do
		var runtimetype = cleanup_type(mtype)
		if runtimetype == null then return # we do not care about null

		analysis.add_send(runtimetype, mproperty)
		#self.current_node.debug("add_send {mproperty}")
	end

	fun add_monomorphic_send(mtype: MType, mproperty: MMethod)
	do
		var runtimetype = cleanup_type(mtype)
		if runtimetype == null then return # we do not care about null

		self.analysis.add_monomorphic_send(runtimetype, mproperty)
		#self.current_node.debug("add_static call {runtimetype} {mproperty}")
	end

	fun add_cast_type(mtype: MType)
	do
		var runtimetype = cleanup_type(mtype)
		if runtimetype == null then return # we do not care about null

		self.analysis.add_cast_type(runtimetype)
		#self.current_node.debug("add_cast_type {runtimetype}")
	end

	redef fun visit(node)
	do
		if node == null then return
		node.accept_runtime_type_vistor(self)
		node.visit_all(self)
	end

	# Force to get the primitive class named `name' or abort
	fun get_class(name: String): MClass
	do
		var cla = analysis.mainmodule.model.get_mclasses_by_name(name)
		if cla == null then
			if name == "Bool" then
				var c = new MClass(analysis.mainmodule, name, 0, enum_kind, public_visibility)
				var cladef = new MClassDef(analysis.mainmodule, c.mclass_type, new Location(null, 0,0,0,0), new Array[String])
				return c
			end
			self.current_node.debug("Fatal Error: no primitive class {name}")
			abort
		end
		assert cla.length == 1 else print cla.join(", ")
		return cla.first
	end

	# Force to get the primitive property named `name' in the instance `recv' or abort
	fun get_method(recv: MType, name: String): MMethod
	do
		var runtimetype = cleanup_type(recv)
		if runtimetype == null then abort

		var props = self.analysis.mainmodule.model.get_mproperties_by_name(name)
		if props == null then
			self.current_node.debug("Fatal Error: no primitive property {name} on {runtimetype}")
			abort
		end
		var res: nullable MMethod = null
		for mprop in props do
			assert mprop isa MMethod
			if not runtimetype.has_mproperty(self.analysis.mainmodule, mprop) then continue
			if mprop.is_init and mprop.intro_mclassdef.mclass != runtimetype.mclass then continue
			if res == null then
				res = mprop
			else
				self.current_node.debug("Fatal Error: ambigous property name '{name}'; conflict between {mprop.full_name} and {res.full_name}")
				abort
			end
		end
		if res == null then
			self.current_node.debug("Fatal Error: no primitive property {name} on {runtimetype}")
			abort
		end
		return res
	end
end

###

redef class ANode
	private fun accept_runtime_type_vistor(v: RuntimeTypeVisitor)
	do
	end
end

redef class AIntExpr
	redef fun accept_runtime_type_vistor(v)
	do
		v.add_type(self.mtype.as(not null))
	end
end

redef class AFloatExpr
	redef fun accept_runtime_type_vistor(v)
	do
		v.add_type(self.mtype.as(not null))
	end
end

redef class ACharExpr
	redef fun accept_runtime_type_vistor(v)
	do
		v.add_type(self.mtype.as(not null))
	end
end

redef class AArrayExpr
	redef fun accept_runtime_type_vistor(v)
	do
		var mtype = self.mtype.as(not null)
		v.add_type(mtype)
		var native = v.get_class("NativeArray").get_mtype([mtype.as(MGenericType).arguments.first])
		v.add_type(native)
		var prop = v.get_method(mtype, "with_native")
		v.add_monomorphic_send(mtype, prop)
	end
end

redef class AStringFormExpr
	redef fun accept_runtime_type_vistor(v)
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
	redef fun accept_runtime_type_vistor(v)
	do
		var arraytype = v.get_class("Array").get_mtype([v.get_class("Object").mclass_type])
		v.add_type(arraytype)
		var prop = v.get_method(arraytype, "join")
		v.add_monomorphic_send(arraytype, prop)
	end
end

redef class ACrangeExpr
	redef fun accept_runtime_type_vistor(v)
	do
		var mtype = self.mtype.as(not null)
		v.add_type(mtype)
		var prop = v.get_method(mtype, "init")
		v.add_monomorphic_send(mtype, prop)
	end
end

redef class AOrangeExpr
	redef fun accept_runtime_type_vistor(v)
	do
		var mtype = self.mtype.as(not null)
		v.add_type(mtype)
		var prop = v.get_method(mtype, "without_last")
		v.add_monomorphic_send(mtype, prop)
	end
end

redef class ATrueExpr
	redef fun accept_runtime_type_vistor(v)
	do
		v.add_type(self.mtype.as(not null))
	end
end

redef class AFalseExpr
	redef fun accept_runtime_type_vistor(v)
	do
		v.add_type(self.mtype.as(not null))
	end
end

redef class AIsaExpr
	redef fun accept_runtime_type_vistor(v)
	do
		v.add_cast_type(self.cast_type.as(not null))
	end
end

redef class AAsCastExpr
	redef fun accept_runtime_type_vistor(v)
	do
		v.add_cast_type(self.mtype.as(not null))
	end
end

#

redef class ASendExpr
	redef fun accept_runtime_type_vistor(v)
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
	redef fun accept_runtime_type_vistor(v)
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
	redef fun accept_runtime_type_vistor(v)
	do
		v.add_send(self.read_type.as(not null), self.reassign_property.mproperty)
	end
end

redef class AAttrReassignExpr
	redef fun accept_runtime_type_vistor(v)
	do
		v.add_send(self.read_type.as(not null), self.reassign_property.mproperty)
	end
end

redef class ASuperExpr
	redef fun accept_runtime_type_vistor(v)
	do
		var mproperty = self.mproperty
		if mproperty != null then
			v.add_monomorphic_send(v.receiver, mproperty)
			return
		end

		#FIXME: we do not want an ugly static call!
		var mpropdef = v.mmethoddef
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
	redef fun accept_runtime_type_vistor(v)
	do
		var recvtype = self.n_expr.mtype.as(not null)
		var colltype = v.get_class("Collection").mclassdefs.first.bound_mtype
		v.add_send(recvtype, v.get_method(colltype, "iterator"))
		var iteratortype = v.get_class("Iterator").mclassdefs.first.bound_mtype
		var objtype = v.get_class("Object").mclass_type
		v.add_send(objtype, v.get_method(iteratortype, "is_ok"))
		v.add_send(objtype, v.get_method(iteratortype, "item"))
		v.add_send(objtype, v.get_method(iteratortype, "next"))
	end
end

redef class ANewExpr
	redef fun accept_runtime_type_vistor(v)
	do
		var recvtype = self.mtype.as(not null)
		v.add_type(recvtype)
		v.add_monomorphic_send(recvtype, mproperty.as(not null))
	end
end
