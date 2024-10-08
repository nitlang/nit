# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# nitni services related to callbacks (used underneath the FFI)
module nitni_callbacks

import modelbuilder
intrude import rapid_type_analysis

import nitni_base

redef class ToolContext
	var verify_nitni_callback_phase: Phase = new VerifyNitniCallbacksPhase(self, [typing_phase])
end

# * checks for the validity of callbacks
# * store the callbacks on each method
class VerifyNitniCallbacksPhase
	super Phase

	redef fun process_npropdef(npropdef)
	do
		if not npropdef isa AMethPropdef then return
		var mpropdef = npropdef.mpropdef
		if mpropdef == null then return
		if not mpropdef.is_extern then return

		npropdef.verify_nitni_callbacks(toolcontext)
	end
end

# Provides a better API but mainly the same content as AExternCalls
class ForeignCallbackSet
	# set of imported functions, cached to avoid repetitions
	var callbacks: Set[ MExplicitCall ] = new HashSet[ MExplicitCall ]

	# set of imported functions, cached to avoid repetitions
	var supers: Set[ MExplicitSuper ] = new HashSet[ MExplicitSuper ]

	# set of relevant types, cached to avoid repetitions
	var types: Set[ MType ] = new HashSet[ MType ]

	# set of imported casts and as, cached to avoid repetitions
	var casts: Set[ MExplicitCast ] = new HashSet[ MExplicitCast ]

	# Utility function, must be called only when all other maps are filled
	private var all_cached: nullable Set[NitniCallback] = null
	fun all: Set[NitniCallback]
	do
		var cached = all_cached
		if cached != null then return cached

		var set = new HashSet[NitniCallback]
		set.add_all(callbacks)
		set.add_all(supers)
		set.add_all(types)
		set.add_all(casts)
		
		self.all_cached = set
		return set
	end

	# Integrate content from the `other` set into this one
	fun join(other: ForeignCallbackSet)
	do
		callbacks.add_all( other.callbacks )
		supers.add_all( other.supers )
		types.add_all( other.types )
		casts.add_all( other.casts )
	end
end

redef class AMethPropdef
	private var foreign_callbacks_cache: nullable ForeignCallbackSet = null

	# All foreign callbacks from this method
	fun foreign_callbacks: ForeignCallbackSet
	do
		var fcs = foreign_callbacks_cache
		assert fcs != null else print "Error: attempting to access nitni callbacks before phase 'verify_nitni_callback_phase'."
		return fcs
	end

	# Verifiy the validity of the explicit callbacks to Nit
	# also fills the set returned by foreign_callbacks
	fun verify_nitni_callbacks(toolcontext: ToolContext)
	do
		if foreign_callbacks_cache != null then return

		var fcs = new ForeignCallbackSet

		var mmodule = mpropdef.mclassdef.mmodule

		# receiver
		var recv_type = mpropdef.mclassdef.bound_mtype
		fcs.types.add(recv_type)

		# return type
		var rmt = mpropdef.msignature.return_mtype
		if rmt != null then
			if rmt isa MFormalType then
				var mclass_type = mpropdef.mclassdef.bound_mtype
				rmt = rmt.anchor_to(mmodule, mclass_type)
			end
			var mtype = rmt.resolve_for(recv_type, recv_type, mmodule, true)
			fcs.types.add(mtype)
		end

		# params
		for p in mpropdef.msignature.mparameters do
			var mtype = p.mtype.resolve_for(recv_type, recv_type, mmodule, true)
			if mtype isa MFormalType then
				var mclass_type = mpropdef.mclassdef.bound_mtype
				mtype = mtype.anchor_to(mmodule, mclass_type)
			end
			fcs.types.add( mtype )
		end

		# explicit callbacks
		if n_extern_calls != null then
			for ec in n_extern_calls.n_extern_calls do
				ec.verify_and_collect(self, fcs, toolcontext)
			end
		end

		# store result
		foreign_callbacks_cache = fcs
	end

	redef fun accept_rapid_type_visitor(v)
	do
		if foreign_callbacks_cache == null then return

		for cb in foreign_callbacks.callbacks do v.add_send(cb.recv_mtype, cb.mproperty.as(MMethod))
		for cast in foreign_callbacks.casts do v.add_cast_type(cast.to)
		for sup in foreign_callbacks.supers do
			v.analysis.add_super_send(sup.from.mclassdef.mclass.mclass_type, sup.from.as(MMethodDef))
		end
		for t in foreign_callbacks.types do if t isa MClassType then v.add_type t
	end
end

# Classification for all nitni callbacks
interface NitniCallback
end

redef class MType
	super NitniCallback
end

# A prossible call from C, declared explictly after the `import` keyword
class MExplicitCall
	super NitniCallback

	# Previously resolved mtype
	var recv_mtype: MClassType
	var mproperty: MProperty
	var from_mmodule: MModule

	fun fill_type_for( callback_set: ForeignCallbackSet, from: MModule )
	do
		var first = mproperty.lookup_first_definition( from, recv_mtype )
		var mclassdef = first.mclassdef
		var bound_mtype = mclassdef.bound_mtype

		# receiver / constructor return
		recv_mtype = recv_mtype.resolve_for(bound_mtype, bound_mtype, from, true)
		recv_mtype = recv_mtype.anchor_to(from, bound_mtype)
		callback_set.types.add( recv_mtype )

		if first isa MMethodDef then
			var rmt = first.msignature.return_mtype
			if rmt != null then
				rmt = rmt.resolve_for(bound_mtype, bound_mtype, from, true)
				rmt = rmt.anchor_to(from, bound_mtype)
				callback_set.types.add( rmt )
			end

			for p in first.msignature.mparameters do
				var param_mtype = p.mtype.resolve_for(recv_mtype, recv_mtype, from, true)
				param_mtype = param_mtype.resolve_for(bound_mtype, bound_mtype, from, true)
				param_mtype = param_mtype.anchor_to(from, bound_mtype)
				callback_set.types.add( param_mtype )
			end
		end
	end

	# Signature of this call in C as seen by user
	fun csignature: String
	do
		var mproperty = self.mproperty
		if mproperty isa MMethod then
			var signature = mproperty.intro.msignature
			assert signature != null

			var creturn_type
			if mproperty.is_init then
				creturn_type = recv_mtype.cname
			else if signature.return_mtype != null then
				var ret_mtype = signature.return_mtype
				ret_mtype = ret_mtype.resolve_for(recv_mtype, recv_mtype, from_mmodule, true)
				creturn_type = ret_mtype.cname
			else
				creturn_type = "void"
			end

			var cname
			if mproperty.is_init then
				if mproperty.name == "init" or mproperty.name == "new" or mproperty.name == "defaultinit" then
					cname = "new_{recv_mtype.mangled_cname}"
				else
					cname = "new_{recv_mtype.mangled_cname}_{mproperty.short_cname}"
				end
			else
				cname = "{recv_mtype.mangled_cname}_{mproperty.short_cname}"
			end

			var cparams = new List[String]
			if not mproperty.is_init then
				cparams.add( "{recv_mtype.cname} self" )
			end
			for p in signature.mparameters do
				var param_mtype = p.mtype.resolve_for(recv_mtype, recv_mtype, from_mmodule, true)
				cparams.add( "{param_mtype.cname} {p.name}" )
			end

			return "{creturn_type} {cname}( {cparams.join(", ")} )"
		else
			print "Type of callback from foreign code not yet supported."
			abort
		end
	end

	redef fun hash do return recv_mtype.hash + 1024 * mproperty.hash
	redef fun ==(o) do return o isa MExplicitCall and recv_mtype == o.recv_mtype and mproperty == o.mproperty
end

class MExplicitSuper
	super NitniCallback

	var from: MPropDef

	redef fun hash do return from.hash
	redef fun ==(o) do return o isa MExplicitSuper and from == o.from
end

class MExplicitCast
	super NitniCallback

	var from: MType
	var to: MType

	fun check_cname: String do return "{from.mangled_cname}_is_a_{to.mangled_cname}"

	fun cast_cname: String do return "{from.mangled_cname}_as_{to.mangled_cname}"

	redef fun hash do return from.hash + 1024 * to.hash
	redef fun ==(o) do return o isa MExplicitCast and from == o.from and to == o.to
end

redef class AExternCall
	# Verify this explicit declaration of call from C and collect all relevant callbacks
	fun verify_and_collect(npropdef: AMethPropdef, callback_set: ForeignCallbackSet,
		toolcontext: ToolContext) is abstract
end

redef class ALocalPropExternCall
	redef fun verify_and_collect(npropdef, callback_set, toolcontext)
	do
		var mmodule = npropdef.mpropdef.mclassdef.mmodule
		var mclass_type = npropdef.mpropdef.mclassdef.bound_mtype
		var m_name = n_methid.collect_text
		var method = toolcontext.modelbuilder.try_get_mproperty_by_name2( self,
			mmodule, mclass_type, m_name )

		if method == null then
			toolcontext.error(location, "Error: local method `{m_name}` not found.")
			return
		end

		var explicit_call = new MExplicitCall(mclass_type, method, mmodule)
		callback_set.callbacks.add(explicit_call)

		explicit_call.fill_type_for(callback_set, mmodule)
	end
end

redef class AFullPropExternCall
	redef fun verify_and_collect(npropdef, callback_set, toolcontext)
	do
		var mmodule = npropdef.mpropdef.mclassdef.mmodule
		var mclassdef = npropdef.mpropdef.mclassdef
		var mclass_type = mclassdef.bound_mtype
		var mtype = toolcontext.modelbuilder.resolve_mtype(mclassdef, n_type)

		if mtype == null then return

		if mtype isa MFormalType then
			mtype = mtype.anchor_to(mmodule, mclass_type)
		end

		if mtype isa MNullableType then
			toolcontext.error(location, "Error: type `{n_type.collect_text}` is nullable and thus cannot be the receiver." )
			return
		end

		var m_name = n_methid.collect_text
		var method = toolcontext.modelbuilder.try_get_mproperty_by_name2( self,
			mmodule, mtype, m_name )

		if method == null then
			toolcontext.error(location, "Error: method `{m_name}` not found in `{n_type.collect_text}`." )
			return
		end

		var explicit_call = new MExplicitCall(mtype.as(MClassType), method, mmodule)
		callback_set.callbacks.add(explicit_call)
		explicit_call.fill_type_for(callback_set, mmodule)
	end
end

redef class AInitPropExternCall
	redef fun verify_and_collect(npropdef, callback_set, toolcontext)
	do
		var mmodule = npropdef.mpropdef.mclassdef.mmodule
		var mclassdef = npropdef.mpropdef.mclassdef
		var mtype = toolcontext.modelbuilder.resolve_mtype(mclassdef, n_type)
		if mtype == null then return

		if not mtype isa MClassType then
			toolcontext.error(location, "Error: type `{n_type.collect_text}` is not a class and thus cannot be used to instantiate a new instance." )
			return
		end

		var meth_name = "new"
		var meth = toolcontext.modelbuilder.try_get_mproperty_by_name2( self,
			mmodule, mtype, meth_name )

		if meth == null then
			meth_name = "defaultinit"
			meth = toolcontext.modelbuilder.try_get_mproperty_by_name2( self,
				mmodule, mtype, meth_name )
		end

		if meth == null then
			toolcontext.error(location, "Error: method `{meth_name}` not found in `{n_type.collect_text}`." )
			return
		end

		var explicit_call = new MExplicitCall(mtype, meth, mmodule)
		callback_set.callbacks.add(explicit_call)
		explicit_call.fill_type_for(callback_set, mmodule)
	end
end

redef class ASuperExternCall
	redef fun verify_and_collect(npropdef, callback_set, toolcontext)
	do
		callback_set.supers.add( new MExplicitSuper( npropdef.mpropdef.as(not null) ) )
		callback_set.types.add( npropdef.mpropdef.mclassdef.mclass.mclass_type )
		npropdef.mpropdef.has_supercall = true
	end
end

redef class ACastExternCall
	fun from_mtype: MType is abstract
	fun to_mtype: MType is abstract

	redef fun verify_and_collect(npropdef, callback_set, toolcontext)
	do
		var from = from_mtype
		var to = to_mtype

		callback_set.types.add(from)
		callback_set.types.add(to)

		callback_set.casts.add(new MExplicitCast(from, to))
	end
end

redef class ACastAsExternCall
	redef fun from_mtype do return n_from_type.mtype.as(not null)
	redef fun to_mtype do return n_to_type.mtype.as(not null)

	redef fun verify_and_collect(npropdef, callback_set, toolcontext)
	do
		var mclassdef = npropdef.mpropdef.mclassdef
		toolcontext.modelbuilder.resolve_mtype_unchecked(mclassdef, n_from_type, true)
		toolcontext.modelbuilder.resolve_mtype_unchecked(mclassdef, n_to_type, true)
		super
	end
end

redef class AAsNullableExternCall
	redef fun from_mtype do return n_type.mtype.as(not null)
	redef fun to_mtype do return n_type.mtype.as_nullable

	redef fun verify_and_collect(npropdef, callback_set, toolcontext)
	do
		var mclassdef = npropdef.mpropdef.mclassdef
		toolcontext.modelbuilder.resolve_mtype_unchecked(mclassdef, n_type, true)
		super
	end
end

redef class AAsNotNullableExternCall
	redef fun from_mtype do return n_type.mtype.as_nullable
	redef fun to_mtype do
		var mtype = n_type.mtype.as(not null)
		mtype = mtype.undecorate
		return mtype
	end

	redef fun verify_and_collect(npropdef, callback_set, toolcontext)
	do
		var mclassdef = npropdef.mpropdef.mclassdef
		toolcontext.modelbuilder.resolve_mtype_unchecked(mclassdef, n_type, true)
		super
	end
end
