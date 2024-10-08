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

# Collect metrics about detected variances constraints on formal types.
#
# In some OO-language that feature safe invariant generics by default,
# formal parameter types can annotated to be usable in covariant and contravariant positions.
# The price to pay is that the usage of formal parameter types in the class has constraints:
#
# * covariant-annotated formal types cannot be used in parameters or in attributes
# * contravariant-annotated formal types cannot be used in return or in attributes
#
# This module provide a backward analysis that infers the possible variance annotations
# of formal types in Nit programs by identifying the existing constraints on the usage of those formal type.
#
# It collects the types used in the signatures of properties then propagates constraints between types.
module detect_variance_constraints

import model
import metrics_base

redef class ToolContext
	# --detect-variance-constraints
	var opt_detect_variance_constraints = new OptionBool("Detect the definition-site variance constraints on formal parameters", "--detect-variance-constraints")

	# The DetectVarianceConstraints phase
	var detect_variance_constraints_phase: Phase = new DetectVarianceConstraintsPhase(self, null)
end

private class DetectVarianceConstraintsPhase
	super Phase

	init
	do
		toolcontext.option_context.add_option(toolcontext.opt_detect_variance_constraints)
	end

	redef fun process_mainmodule(mainmodule, given_mmodules)
	do
		if not toolcontext.opt_detect_variance_constraints.value and not toolcontext.opt_all.value then return

		print "--- Detection of variance constraints on formal parameter types ---"

		var k = new DetectVarianceConstraints
		k.collect(mainmodule)

		print "-- Generic classes --"
		k.cpt_class.print_elements(10)
		print "  total classes: {k.cpt_class.sum}"
		print "  total formal parameters: {k.pts.length}"

		k.propagate

		print "-- Including `private` properties --"
		k.print_stats

		k = new DetectVarianceConstraints
		k.exclude_private = true
		k.collect(mainmodule)

		k.propagate

		print "-- Excluding `private` properties --"
		k.print_stats
	end
end

# A specific analysis that detects the variance constraints of formal parameters.
#
# The client has 3 steps to do:
#
#  * call `collect` to initialize the attributes.
#  * call `propagate` to propagate the variance constraints.
#  * call `print_stats` to print the results.
class DetectVarianceConstraints
	# Collect all types used in covariant and contravariant positions.
	#
	# The collect visits all classes and properties of `mainmodule` and its imported modules.
	#
	# After the visit, the attributes of `self` are filled.
	fun collect(mainmodule: MModule)
	do
		for m in mainmodule.in_importation.greaters do
			for cd in m.mclassdefs do
				if cd.is_intro then
					pts.add_all(cd.mclass.mparameters)
					var a = cd.mclass.arity
					if a == 0 then
						cpt_class.inc("non generic")
					else if a == 1 then
						cpt_class.inc("with 1 formal type parameter")
					else
						cpt_class.inc("with {a} formal type parameters")
					end
				end
				for t in cd.supertypes do
					# Supertype (covariant)
					if t.need_anchor then covar_classes.add(t)
				end
				for pd in cd.mpropdefs do
					if exclude_private and pd.mproperty.visibility <= private_visibility then continue
					if pd isa MMethodDef then
						# Parameters (contravariant)
						for p in pd.msignature.mparameters do
							var t = p.mtype.undecorate
							if not t.need_anchor then
								# OK
							else if t isa MParameterType then
								contravar_pt.add(t)
							else if t isa MVirtualType then
								# TODO?
							else if t isa MClassType then
								contravar_classes.add(t)
							else
								abort
							end
						end
						# Return (covariant)
						var t = pd.msignature.return_mtype
						if t != null and t.need_anchor then
							t = t.undecorate
							if t isa MParameterType then
								covar_pt.add(t)
							else if t isa MVirtualType then
								# TODO?
							else if t isa MClassType then
								covar_classes.add(t)
							else
								abort
							end
						end
					else if pd isa MAttributeDef then
						# Attribute (invariant)
						var t = pd.static_mtype
						if t != null and t.need_anchor then
							t = t.undecorate
							if t isa MParameterType then
								covar_pt.add t
								contravar_pt.add t
							else if t isa MVirtualType then
								# TODO?
							else if t isa MClassType then
								covar_classes.add(t)
								contravar_classes.add(t)
							else
								abort
							end
						end
					else if pd isa MVirtualTypeDef then
						# Virtual type bound (covariant)
						var t = pd.bound
						if t != null and t.need_anchor then
							t = t.undecorate
							if t isa MParameterType then
								covar_pt.add t
							else if t isa MVirtualType then
								# TODO?
							else if t isa MClassType then
								covar_classes.add(t)
							else
								abort
							end
						end
					end
				end
			end
		end
	end

	# The set of all collected formal parameters
	var pts = new HashSet[MParameterType]

	# The set of generic types found in a covariant (and invariant) position
	var covar_classes = new HashSet[MClassType]

	# The set of formal parameters found in a covariant (and invariant) position
	var covar_pt = new HashSet[MParameterType]

	# The set of generic types found in a contravariant (and invariant) position
	var contravar_classes = new HashSet[MClassType]

	# The set of formal parameters found in a contravariant (and invariant) position
	var contravar_pt = new HashSet[MParameterType]

	# Classes by number of formal parameters
	var cpt_class = new Counter[String]

	# Does the collect exclude private properties?
	# Default is `false`
	var exclude_private = false

	# Propagate the variance constraints on `covar_classes`, `covar_pt`, `contravar_classes` and `contravar_pt`
	#
	# The algorithm uses a fixed-point approach on the covariance/contravariance rules.
	fun propagate
	do
		# Classes to add to the `covar_classes` set at the end of an iteration
		var new_covar = new Array[MClassType]
		# Classes to add to the `contravar_classes` set at the end of an iteration
		var new_contravar = new Array[MClassType]
		# Does a modification occurred, so that another iteration is needed?
		var dirty = true
		# Total number of iterations
		var cpt = 0

		while dirty do
			cpt += 1
			dirty = false
			new_covar.clear
			new_contravar.clear

			# Process the generic types in a covariant position
			for c in covar_classes do for i in [0..c.mclass.arity[ do
				# The type used in the argument
				var ta = c.arguments[i].undecorate
				# The associated formal parameter
				var tp = c.mclass.mparameters[i]

				if not ta.need_anchor then
					# Nothing to do
				else if ta isa MParameterType then
					# COVAR * COVAR = COVAR
					if covar_pt.has(tp) and not covar_pt.has(ta) then
						covar_pt.add(ta)
						dirty = true
					end
					# COVAR * CONTRAVAR = CONTRAVAR
					if contravar_pt.has(tp) and not contravar_pt.has(ta) then
						contravar_pt.add(ta)
						dirty = true
					end
				else if ta isa MVirtualType then
					# TODO?
				else if ta isa MClassType then
					# COVAR * COVAR = COVAR
					if covar_pt.has(tp) and not covar_classes.has(ta) then
						new_covar.add ta
						dirty = true
					end
					# COVAR * CONTRAVAR = CONTRAVAR
					if contravar_pt.has(tp) and not contravar_classes.has(ta) then
						new_contravar.add ta
						dirty = true
					end
				end
			end

			# Process the generic types in a contravariant position
			for c in contravar_classes do for i in [0..c.mclass.arity[ do
				# The type used in the argument
				var ta = c.arguments[i].undecorate
				# The associated formal parameter
				var tp = c.mclass.mparameters[i]

				if not ta.need_anchor then
					# Nothing to do
				else if ta isa MParameterType then
					# CONTRAVAR * CONTRAVAR = COVAR
					if contravar_pt.has(tp) and not covar_pt.has(ta) then
						covar_pt.add(ta)
						dirty = true
					end
					# CONTRAVAR * COVAR = CONTRAVAR
					if covar_pt.has(tp) and not contravar_pt.has(ta) then
						contravar_pt.add(ta)
						dirty = true
					end
				else if ta isa MVirtualType then
					# TODO?
				else if ta isa MClassType then
					# CONTRAVAR * CONTRAVAR = COVAR
					if contravar_pt.has(tp) and not covar_classes.has(ta) then
						new_covar.add ta
						dirty = true
					end
					# CONTRAVAR * COVAR = CONTRAVAR
					if covar_pt.has(tp) and not contravar_classes.has(ta) then
						new_contravar.add ta
						dirty = true
					end
				end
			end

			covar_classes.add_all(new_covar)
			contravar_classes.add_all(new_contravar)
		end
	end

	# Print the final stats on the screen
	fun print_stats
	do
		var nb_cov = 0
		var nb_con = 0
		var nb_inv = 0
		var nb_biv = 0

		for pt in pts do
			if covar_pt.has(pt) then
				if contravar_pt.has(pt) then
					nb_inv += 1
				else
					nb_cov += 1
					#print "covar: {pt.full_name}"
				end
			else
				if contravar_pt.has(pt) then
					nb_con += 1
					#print "contravar: {pt.full_name}"
				else
					nb_biv += 1
					#print "bivar: {pt.full_name}"
				end
			end
		end

		print "  covariants: {nb_cov} ({div(nb_cov*100, pts.length)}%)"
		print "  contravariants: {nb_con} ({div(nb_con*100, pts.length)}%)"
		print "  bivariants: {nb_biv} ({div(nb_biv*100, pts.length)}%)"
		print "  invariants: {nb_inv} ({div(nb_inv*100, pts.length)}%)"
		print "  total: {pts.length}"
	end
end
