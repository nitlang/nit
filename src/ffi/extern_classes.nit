# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# Manages all extern classes and their associated foreign type.
module extern_classes

import ffi_base

redef class ToolContext
	var extern_classes_typing_phase_ast: Phase = new ExternClassesTypingPhaseAst(self, [ffi_language_assignation_phase])

	var extern_classes_typing_phase_model: Phase = new ExternClassesTypingPhaseModel(self,
		[extern_classes_typing_phase_ast, modelize_class_phase, modelize_property_phase])
end

# Assigns the `ftype` to class definitions, work on the AST only
private class ExternClassesTypingPhaseAst
	super Phase

	redef fun process_nclassdef(nclassdef)
	do
		if not nclassdef isa AStdClassdef then return

		var code_block = nclassdef.n_extern_code_block
		if code_block == null then return

		if nclassdef.n_kwredef != null then
			# A redef cannot specifiy a different extern type
			toolcontext.error(nclassdef.location, "Only the introduction of a class can specify an extern type.")
			return
		end

		var ftype = code_block.language.get_ftype(code_block, nclassdef)
		nclassdef.ftype_cache = ftype
		nclassdef.ftype_computed = true
	end
end

redef class AClassdef
	private var ftype_cache: nullable ForeignType = null
	private var ftype_computed = false

	# Associated extern type when defined on this classdef
	fun ftype: nullable ForeignType
	do
		return ftype_cache
	end
end

private class ExternClassesTypingPhaseModel
	super Phase

	redef fun process_nclassdef(nclassdef)
	do
		if not nclassdef isa AStdClassdef then return

		var mclassdef = nclassdef.mclassdef
		var mclass = nclassdef.mclass

		# We only need to do this once per class
		if mclass.intro != mclassdef then return

		if mclass.kind != extern_kind then return

		mclass.compute_ftype(self)
	end
end

redef class MClass
	private var ftype_cache: nullable ForeignType = null
	private var ftype_computed = false

	# Extern type associated to this class according to specialisation
	fun ftype: nullable ForeignType do return ftype_cache

	redef fun ctype do return ftype_cache.ctype

	# Type in C of the extern class
	# If not defined in the intro of this class will look in super-classes
	# FIXME this only supports type definition at intro, extend to superclasses by redef
	private fun compute_ftype(v: ExternClassesTypingPhaseModel): nullable ForeignType
	do
		if ftype_computed then return ftype_cache
		if kind != extern_kind then return null

		# base case
		if name == "Pointer" then
			ftype_cache = new ForeignType
			ftype_computed = true
			return ftype_cache
		end

		var intro_nclassdef = v.toolcontext.modelbuilder.mclassdef2nclassdef[intro]
		var ftype = intro_nclassdef.ftype
		if ftype == null then
			var ftype_b: nullable ForeignType = null # FIXME hack to circumvent bug where ftype is typed null

			# look in super classes
			for s in in_hierarchy(intro.mmodule).direct_greaters do
				var super_ftype = s.compute_ftype(v)
				if super_ftype != null then
					if ftype_b == null then
						ftype_b = super_ftype
						continue
					else
						# detect conflict
						if super_ftype != ftype_b then
							v.toolcontext.error(null, "Extern type conflict in {self}")
							return null
						end
					end
				end
			end

			ftype = ftype_b
		end

		ftype_cache = ftype
		ftype_computed = true
		return ftype
	end
end
