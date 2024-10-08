# This file is part of NIT ( https://nitlanguage.org ).
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

# Detect the static usage of covariance in the code.
#
# The module works by refining various methods of the modelize and semantize
# phases to intercept type tests, then discriminate and count the cases.
#
# At the end, the statistics are displayed on the screen.
module detect_covariance

import metrics_base
intrude import semantize::typing
private import counter

redef class ToolContext
	# --detect-variance-constraints
	var opt_detect_covariance = new OptionBool("Detect the static covariance usages", "--detect-covariance")

	# Phase that intercepts static type tests then display statistics about covariance
	private var detect_covariance_phase = new DetectCovariancePhase(self, null)
end

private class DetectCovariancePhase
	super Phase

	init
	do
		toolcontext.option_context.add_option(toolcontext.opt_detect_covariance)
	end

	fun is_disabled: Bool
	do
		return not toolcontext.opt_detect_covariance.value and not toolcontext.opt_all.value
	end

	fun cpt_subtype_kinds: Counter[String] do return once new Counter[String]
	fun cpt_total_variance: Counter[String] do return once new Counter[String]
	fun cpt_total_classes: Counter[String] do return once new Counter[String]

	fun cpt_explanations: Counter[String] do return once new Counter[String]
	fun cpt_classes: Counter[MClass] do return once new Counter[MClass]
	fun cpt_pattern: Counter[String] do return once new Counter[String]
	fun cpt_nodes: Counter[String] do return once new Counter[String]
	fun cpt_modules: Counter[String] do return once new Counter[String]
	fun cpt_expression: Counter[String] do return once new Counter[String]

	fun cpt_cast_kind: Counter[String] do return once new Counter[String]
	fun cpt_cast_classes: Counter[String] do return once new Counter[String]
	fun cpt_cast_pattern: Counter[String] do return once new Counter[String]
	fun cpt_autocast: Counter[String] do return once new Counter[String]

	# Display collected statistics
	redef fun process_mainmodule(mainmodule, given_mmodules)
	do
		if is_disabled then return

		print "--- Detection of the usage of covariance static type conformance ---"

		print "-- Total --"
		print "- Kinds of the subtype -"
		cpt_subtype_kinds.print_elements(10)
		print "  total: {cpt_subtype_kinds.sum}"

		print "- Variance -"
		cpt_total_variance.print_elements(10)
		print "  total: {cpt_total_variance.sum}"

		print "- Classes of the subtype -"
		cpt_total_classes.print_elements(10)
		print "  total: {cpt_total_classes.sum}"

		print "-- On covariance only --"

		print "- Specific covariance case explanations -"
		cpt_explanations.print_elements(10)
		print "  total: {cpt_explanations.sum}"

		print "- Classes of the subtype, when covariance -"
		cpt_classes.print_elements(10)
		print "  total: {cpt_classes.sum}"

		print "- Patterns of the covariant cases -"
		cpt_pattern.print_elements(10)
		print "  total: {cpt_pattern.sum}"

		print "- Nodes of the covariance cases -"
		cpt_nodes.print_elements(10)
		print "  total: {cpt_nodes.sum}"

		print "- Modules of the covariance cases -"
		cpt_modules.print_elements(10)
		print "  total: {cpt_modules.sum}"

		print "- Kind of the expression node (when it make sense) -"
		cpt_expression.print_elements(10)
		print "  total: {cpt_expression.sum}"

		print "-- Casts --"

		print "- Kind of cast target -"
		cpt_cast_kind.print_elements(10)
		print "  total: {cpt_cast_kind.sum}"

		print "- Classes of the cast -"
		cpt_cast_classes.print_elements(10)
		print "  total: {cpt_cast_classes.sum}"

		print "- Cast pattern -"
		cpt_cast_pattern.print_elements(10)
		print "  total: {cpt_cast_pattern.sum}"

		print "- Autocasts -"
		cpt_autocast.print_elements(10)
		print "  total: {cpt_autocast.sum}"
	end

	# Common method used when static subtype test is performed by a phase
	# Returns true if the test concern real generic covariance
	fun count_types(node, elem: ANode, sub, sup: MType, mmodule: MModule, anchor: nullable MClassType): Bool
	do
		sub = sub.undecorate
		sup = sup.undecorate

		# Category of the target type
		if sub isa MGenericType then
			cpt_subtype_kinds.inc("generic type")
		else if not sub isa MClassType then
			cpt_subtype_kinds.inc("formal type")
		else if sub.mclass.kind == enum_kind then
			cpt_subtype_kinds.inc("primitive type")
		else if sub.mclass.name == "Object" then
			cpt_subtype_kinds.inc("object")
		else
			cpt_subtype_kinds.inc("non-generic type")
		end

		# Class of the subtype
		if sub isa MClassType then
			cpt_total_classes.inc(sub.mclass.to_s)
		else
			cpt_total_classes.inc(sub.to_s)
		end

		# Equal monomorph case
		if sub == sup then
			cpt_total_variance.inc("monomorph")
			return false
		end

		# Equivalent monomorph case
		if sub.is_subtype_invar(mmodule, anchor, sup) and sup.is_subtype_invar(mmodule, anchor, sub) then
			cpt_total_variance.inc("monomorph equiv")
			return false
		end

		# Formal case
		if not sub isa MClassType then
			cpt_total_variance.inc("polymorph & formal")
			return false
		end

		# Non generic case
		if not sub isa MGenericType then
			cpt_total_variance.inc("polymorph & non-generic")
			return false
		end

		# Invariant case
		if sub.is_subtype_invar(mmodule, anchor, sup) then
			cpt_total_variance.inc("polymorph & generic & invariant")
			return false
		end

		if sub.is_subtype(mmodule, anchor, sup) then
			# Covariant
			cpt_total_variance.inc("polymorph & generic & covariant")
		else
			# Cast (explicit or autocast)
			if sup.is_subtype(mmodule, anchor, sub) then
				cpt_total_variance.inc("polymorph & generic & upcast!?")
				cpt_pattern.inc("7.upcast")
				return false
			end

			if not sup isa MGenericType then
				cpt_total_variance.inc("polymorph & generic & lateral-cast from non-gen")
				return false
			end

			cpt_total_variance.inc("polymorph & generic & lateral-cast from gen")
		end

		## ONLY covariance remains here

		cpt_modules.inc(mmodule.mgroup.mpackage.name)
		cpt_classes.inc(sub.mclass)

		# Track if `cpt_explanations` is already decided (used to fallback on unknown)
		var caseknown = false

		# Detect the pattern
		var n = node
		while n isa AType or n isa AExprs do n = n.parent.as(not null)
		cpt_nodes.inc(n.class_name)
		if n isa AVarAssignExpr or n isa AAttrPropdef and elem isa AExpr then
			cpt_pattern.inc("1.assign")
		else if n isa ASendExpr or n isa ANewExpr then
			cpt_pattern.inc("2.param")
		else if n isa AReturnExpr then
			cpt_pattern.inc("3.return")
		else if n isa APropdef or n isa ASignature then
			cpt_pattern.inc("4.redef")
		else if n isa AAsCastExpr or n isa AIsaExpr then
			cpt_pattern.inc("6.downcast")
			if n isa AIsaExpr and n.n_expr isa ASelfExpr then
				cpt_explanations.inc("downcast on self")
				caseknown = true
			else
				node.debug("6.downcast {sup} to {sub}")
			end
		else if n isa ASuperPropdef then
			cpt_pattern.inc("8.subclass")
		else if n isa AArrayExpr then
			cpt_pattern.inc("9.array element")
		else
			n.debug("Unknown pattern")
			cpt_pattern.inc("X.unknown")
		end

		if not caseknown then
			if false then
				cpt_explanations.inc("covariant class")
			else
				cpt_explanations.inc("other covariance")
			end
		end

		return true
	end

	# Common method used when static cast test is seen by a phase
	fun count_cast(node: ANode, sub, sup: MType, mmodule: MModule, anchor: nullable MClassType)
	do
		var nsup = sup
		sup = sup.undecorate
		sub = sub.undecorate

		if sub == nsup then
			cpt_cast_pattern.inc("monomorphic cast!?!")
			node.debug("monomorphic cast {sup} to {sub}")
		else if not sub isa MClassType then
			cpt_cast_pattern.inc("cast to formal")
		else if not sub isa MGenericType then
			cpt_cast_pattern.inc("cast to non-generic")
		else if sub == sup then
			cpt_cast_pattern.inc("nonullable monomorphic cast")
		else if sup.is_subtype(mmodule, anchor, sub) then
			cpt_cast_pattern.inc("upcast to generic")
		else if not sub.is_subtype(mmodule, anchor, sup) then
			cpt_cast_pattern.inc("lateral cast to generic")
		else if not sub.is_subtype_invar(mmodule, anchor, sup) then
			assert sup isa MGenericType
			if sup.mclass != sub.mclass then
				cpt_cast_pattern.inc("covariant downcast to a generic (distinct classes)")
			else
				cpt_cast_pattern.inc("covariant downcast to a generic (same classes)")
			end
		else if not sup isa MGenericType then
			cpt_cast_pattern.inc("invariant downcast from non-generic to a generic")
		else
			assert sup.mclass != sub.mclass
			cpt_cast_pattern.inc("invariant downcast from generic to generic")
		end

		cpt_cast_kind.inc(sub.class_name.to_s)

		if sub isa MGenericType then
			cpt_cast_classes.inc(sub.mclass.to_s)
		else if sub isa MClassType then
			# No generic class, so no covariance at runtime
		else
			cpt_cast_classes.inc(sub.to_s)
		end
	end
end

redef class ModelBuilder
	redef fun check_subtype(node, mmodule, anchor, sub, sup)
	do
		var res = super
		var dcp = toolcontext.detect_covariance_phase

		if dcp.is_disabled then return res

		if res then
			dcp.count_types(node, node, sub, sup, mmodule, anchor)
		else
			dcp.cpt_total_variance.inc("bad mb subtype")
		end

		return res
	end
end

redef class TypeVisitor

	fun dcp: DetectCovariancePhase do return modelbuilder.toolcontext.detect_covariance_phase

	redef fun check_expr_cast(node, nexpr, ntype)
	do
		var sub = super

		if dcp.is_disabled then return sub

		# In case of error, just forward
		if sub == null then
			dcp.cpt_total_variance.inc("bad cast")
			return null
		end

		var sup = nexpr.mtype.as(not null)

		if sub != ntype.mtype.as(not null) then
			node.debug("fishy cast: res={sub} ntype={ntype.mtype.as(not null)}")
		end

		dcp.count_types(node, nexpr, sub, sup, mmodule, anchor)

		dcp.count_cast(node, sub, sup, mmodule, anchor)

		return sub
	end

	redef fun check_subtype(node: ANode, sub, sup: MType, autocast: Bool): nullable MType
	do
		var res = super

		if dcp.is_disabled then return res

		var anchor = self.anchor
		var supx = sup
		var subx = sub
		var p = node.parent.as(not null)
		if p isa AExprs then p = p.parent.as(not null)

		# Case of autocast
		if not self.is_subtype(sub, sup) then
			if node isa AAsCastExpr then
				return res
			end
			if not autocast then
				return res
			end
			sup = supx.resolve_for(anchor.mclass.mclass_type, anchor, mmodule, true)
			if self.is_subtype(sub, sup) then
				dcp.cpt_autocast.inc("vt")
				dcp.count_cast(node, supx, sub, mmodule, anchor)
			else
				sup = supx.resolve_for(anchor, null, mmodule, false)
				if self.is_subtype(sub, sup) then
					dcp.cpt_autocast.inc("vt+pt")
					dcp.count_cast(node, supx, sub, mmodule, anchor)
				else
					self.modelbuilder.error(node, "Type Error: expected `{sup}`, got `{sub}`")
					return null
				end
			end
			dcp.count_types(p, node, supx, subx, mmodule, anchor)
			return res
		end

		# Count case
		if not dcp.count_types(p, node, sub, sup, mmodule, anchor) then return sub

		# Unknown explanation of covariance, go further
		dcp.cpt_explanations["other covariance"] -= 1

		var n = node
		if n isa AOnceExpr then n = n.n_expr
		dcp.cpt_expression.inc(n.class_name)

		if node isa AArrayExpr then
			dcp.cpt_explanations.inc("lit-array")
		else if p isa ACallExpr then
			var name = p.n_qid.n_id.text
			if name == "sort" or name == "linearize_mpropdefs" then
				dcp.cpt_explanations.inc("generic methods (sort-method)")
			else if name == "visit_list" then
				dcp.cpt_explanations.inc("use-site covariance (visit_list-method)")
			else
				dcp.cpt_explanations.inc("other covariance")
			end
		else
			dcp.cpt_explanations.inc("other covariance")
		end
		return res
	end
end

redef class MType
	# Return true if `self` is a invariant subtype of `sup`.
	# This is just a copy of the original `is_subtype` method with only two new lines
	fun is_subtype_invar(mmodule: MModule, anchor: nullable MClassType, sup: MType): Bool
	do
		var sub = self
		if sub == sup then return true

		#print "1.is {sub} a {sup}? ===="

		if anchor == null then
			assert not sub.need_anchor
			assert not sup.need_anchor
		else
			# First, resolve the formal types to the simplest equivalent forms in the receiver
			assert sub.can_resolve_for(anchor, null, mmodule)
			sub = sub.lookup_fixed(mmodule, anchor)
			assert sup.can_resolve_for(anchor, null, mmodule)
			sup = sup.lookup_fixed(mmodule, anchor)
		end

		# Does `sup` accept null or not?
		# Discard the nullable marker if it exists
		var sup_accept_null = false
		if sup isa MNullableType then
			sup_accept_null = true
			sup = sup.mtype
		else if sup isa MNullType then
			sup_accept_null = true
		end

		# Can `sub` provide null or not?
		# Thus we can match with `sup_accept_null`
		# Also discard the nullable marker if it exists
		if sub isa MNullableType then
			if not sup_accept_null then return false
			sub = sub.mtype
		else if sub isa MNullType then
			return sup_accept_null
		end
		# Now the case of direct null and nullable is over.

		# If `sub` is a formal type, then it is accepted if its bound is accepted
		while sub isa MFormalType do
			#print "3.is {sub} a {sup}?"

			# A unfixed formal type can only accept itself
			if sub == sup then return true

			assert anchor != null
			sub = sub.lookup_bound(mmodule, anchor)

			#print "3.is {sub} a {sup}?"

			# Manage the second layer of null/nullable
			if sub isa MNullableType then
				if not sup_accept_null then return false
				sub = sub.mtype
			else if sub isa MNullType then
				return sup_accept_null
			end
		end
		#print "4.is {sub} a {sup}? <- no more resolution"

		if sub isa MBottomType or sub isa MErrorType then
			return true
		end

		assert sub isa MClassType else print_error "{sub} <? {sup}" # It is the only remaining type

		# Handle sup-type when the sub-type is class-based (other cases must have be identified before).
		if sup isa MFormalType or sup isa MNullType or sup isa MBottomType or sup isa MErrorType then
			# These types are not super-types of Class-based types.
			return false
		end

		assert sup isa MClassType else print_error "got {sup} {sub.inspect}" # It is the only remaining type

		# Now both are MClassType, we need to dig

		if sub == sup then return true

		if anchor == null then anchor = sub # UGLY: any anchor will work
		var resolved_sub = sub.anchor_to(mmodule, anchor)
		var res = resolved_sub.collect_mclasses(mmodule).has(sup.mclass)
		if not res then return false
		if not sup isa MGenericType then return true
		var sub2 = sub.supertype_to(mmodule, anchor, sup.mclass)
		assert sub2.mclass == sup.mclass
		for i in [0..sup.mclass.arity[ do
			var sub_arg = sub2.arguments[i]
			var sup_arg = sup.arguments[i]
			res = sub_arg.is_subtype(mmodule, anchor, sup_arg)
			if not res then return false
			# The two new lines
			res = sup_arg.is_subtype(mmodule, anchor, sub_arg)
			if not res then return false
			# End of the two new lines
		end
		return true
	end
end
