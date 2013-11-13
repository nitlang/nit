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

# Computing of super-constructors that must be implicitely called at the begin of constructors.
# The current rules are a bit crazy but whatever.
module auto_super_init

import typing
import modelbuilder
import phase

redef class ToolContext
	var auto_super_init_phase: Phase = new AutoSuperInitPhase(self, [typing_phase])
end

private class AutoSuperInitPhase
	super Phase
	redef fun process_npropdef(npropdef) do if npropdef isa AConcreteMethPropdef then npropdef.do_auto_super_init(toolcontext.modelbuilder)
end

private class AutoSuperInitVisitor
	super Visitor
	init
	do
	end

	redef fun visit(n)
	do
		n.accept_auto_super_init(self)
		n.visit_all(self)
	end

	var has_explicit_super_init: Bool = false
end


redef class AConcreteMethPropdef
	# In case of constructor, the list of implicit auto super init constructors invoked (if needed)
	var auto_super_inits: nullable Array[MMethod] = null

	fun do_auto_super_init(modelbuilder: ModelBuilder)
	do
		var mclassdef = self.parent.as(AClassdef).mclassdef.as(not null)
		var mpropdef = self.mpropdef.as(not null)
		var mmodule = mpropdef.mclassdef.mmodule

		# Collect only for constructors
		if not mpropdef.mproperty.is_init then return

		# FIXME: THIS IS STUPID (be here to keep the old code working)
		if not mpropdef.mclassdef.is_intro then return

		# Do we inherit for a constructor?
		var skip = true
		for cd in mclassdef.in_hierarchy.direct_greaters do
			if cd.mclass.kind.need_init then skip = false
		end
		if skip then return

		# Now we search for the absence of any explicit super-init invocation
		#  * via a "super"
		#  * via a call of an other init
		var nblock = self.n_block
		if nblock != null then
			var v = new AutoSuperInitVisitor
			v.enter_visit(nblock)
			if v.has_explicit_super_init then return
		end

		# Still here? So it means that we must determine what super inits need to be automatically invoked

		var auto_super_inits = new Array[MMethod]
		for msupertype in mclassdef.supertypes do
			# FIXME: the order is quite arbitrary
			if not msupertype.mclass.kind.need_init then continue
			msupertype = msupertype.anchor_to(mmodule, mclassdef.bound_mtype)
			var candidate = modelbuilder.try_get_mproperty_by_name2(self, mmodule, msupertype, mpropdef.mproperty.name)
			if candidate == null then
				candidate = modelbuilder.try_get_mproperty_by_name2(self, mmodule, msupertype, "init")
			end
			if candidate == null then
				modelbuilder.error(self, "Cannot do an implicit constructor call for {mpropdef}: there is no costructor named {mpropdef.mproperty.name} in {msupertype}.")
				return
			end
			assert candidate isa MMethod
			auto_super_inits.add(candidate)
		end
		if auto_super_inits.is_empty then
			modelbuilder.error(self, "No constructors to call implicitely. Call one explicitely.")
			return
		end
		for auto_super_init in auto_super_inits do
			var auto_super_init_def = auto_super_init.intro
			var msig = mpropdef.msignature.as(not null)
			var supermsig = auto_super_init_def.msignature.as(not null)
			if auto_super_init_def.msignature.arity != 0 and auto_super_init_def.msignature.arity != mpropdef.msignature.arity then
				# TODO: Better check of the signature
				modelbuilder.error(self, "Problem with signature of constructor {auto_super_init_def}{supermsig}. Expected {msig}")
			end
		end
		self.auto_super_inits = auto_super_inits
	end

end

redef class ANode
	private fun accept_auto_super_init(v: AutoSuperInitVisitor) do end
end


redef class ASendExpr
	redef fun accept_auto_super_init(v)
	do
		var mproperty = self.mproperty
		if mproperty == null then return
		if mproperty.is_init then
			v.has_explicit_super_init = true
		end
	end
end

redef class ASuperExpr
	redef fun accept_auto_super_init(v)
	do
		# If the super is a standard call-next-method then there it is considered am explicit super init call
		# The the super is a "super int" then it is also an explicit super init call
		v.has_explicit_super_init = true
	end
end
