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

# Static Analysis Framework base
#
# A lot of TODOs still missing:
# * flow breaks (AReturnExpr, AEscapeExpr, AAbortExpr)
# * other conditionnals (AIfexprExpr, AAssertExpr, ABonBoolExpr)
# * flow through AAttrPropDef
module saf_base

import modelbuilder

# The base of all analysis performed statically.
abstract class StaticAnalysis
	super Visitor

	# Type of FlowSet representation used by the StaticAnalysis.
	type FLOW: FlowSet

	# "in" set for the currently visited node.
	var current_inset: FLOW is noinit, writable

	# 'out' set for the currently visited node.
	var current_outset: FLOW is noinit, writable

	# Sets at the entry of each node.
	#
	# Each node is associated with the `current_inset` it got.
	var insets = new HashMap[ANode, FLOW]

	# Sets at the exit of each node.
	#
	# Each node is associated with the `current_outset` it got.
	var outsets = new HashMap[ANode, FLOW]

	init do
		current_inset = new_initial_flow
		current_outset = new_initial_flow
	end

	# Initial flow set to use.
	#
	# Because the initial flow set depends on the analysis performed, the
	# implementation of this method is the responsability the subclass.
	fun new_initial_flow: FLOW is abstract

	# Initial flow set to use within methods.
	#
	# Returns `new_initial_flow` by default.
	# Redefine this method to inject things in the inset like parameters from
	# the signature.
	fun new_initial_method_flow(v: AMethPropdef): FLOW do return new_initial_flow

	# The merge operation on sets for confluence.
	#
	# Depends on the analysis performed.
	fun merge(s1, s2: FLOW): FLOW is abstract

	# ModelBuilder used to lookup AST nodes.
	var modelbuilder: ModelBuilder

	# Run `self` on an AST `node`.
	fun start_analysis(node: ANode) do visit(node)

	# Pretty print the outsets of this analysis.
	#
	# Mainly used for debug and testing.
	fun pretty_print is abstract
end

# An analysis go forward from the entry point to the exit point.
#
# With a forward analysis, output properties are determined by the inputs.
class ForwardAnalysis
	super StaticAnalysis

	redef fun visit(n) do n.accept_forward_analysis(self)
end

# FlowSet are used to represent data at the entry and exit of a statement.
interface FlowSet
	super Cloneable

	# Merge `self` with another flow set.
	fun flow_union(o: SELF): SELF is abstract
end

# A FlowSet based on a HashMap.
class FlowHashMap[K, V]
	super FlowSet
	super HashMap[K, V]

	# Init `self` with the content of `map`.
	init from(map: Map[K, V]) do
		init
		for k, v in map do self[k] = v
	end

	# Not a deep copy.
	redef fun clone do return new FlowHashMap[K, V].from(self)
end

# A FlowSet based on a HashSet.
class FlowHashSet[E]
	super FlowSet
	super HashSet[E]

	redef fun clone do return new FlowHashSet[E].from(self)

	# Remove all items found in `other` from `self`.
	fun remove_from(other: Collection[E]) do
		for e in other do remove(e)
	end

	redef fun flow_union(o) do return new FlowHashSet[E].from(union(o))
end

redef class ANode

	# Apply the forward analysis `v` to `self`.
	fun accept_forward_analysis(v: ForwardAnalysis) do
		v.current_inset = v.current_outset.clone
		v.current_outset = v.current_inset.clone
		v.insets[self] = v.current_inset
		visit_all(v)
		v.outsets[self] = v.current_outset
	end
end

redef class AIfExpr

	# Merge flow on if .. else constructs.
	redef fun accept_forward_analysis(v) do
		v.enter_visit(n_expr)
		var inset = v.current_inset
		var outset = v.current_outset

		if n_then != null then v.enter_visit(n_then)
		var then_outset = v.current_outset

		v.current_inset = inset
		v.current_outset = outset

		if n_else != null then
			v.enter_visit(n_else)
			outset = v.merge(then_outset, v.current_outset)
		else
			outset = v.merge(then_outset, v.current_inset)
		end
		v.current_inset = inset
		v.current_outset = outset
	end
end

# Represent all kind of `do .. end` blocks.
#
# Used to factorize implementations across do blocks, whiles, fors and loops.
#
# This factorization makes sense since all these contructs can be flow managed
# through contine and breack statements.
#
# TODO move this up in the module hierarchy
interface ADoBlockHelper
	# Lookup fix point for this loop.
	fun loop_fix_point(v: StaticAnalysis, node: ANode) do
		var inset = v.current_inset.clone
		var last: nullable FlowSet = null
		while v.current_outset != last do
			v.enter_visit(node)
			v.current_inset = v.merge(inset, v.current_outset)
			v.current_outset = v.current_inset.clone
			last = v.current_outset.clone
		end
		v.current_inset = inset
		v.current_outset = v.merge(inset, v.current_outset)
	end

	# Factorize loop forward analysis.
	fun accept_loop_forward_analysis(v: StaticAnalysis) do
		var n_block = loop_block
		if not n_block == null then loop_fix_point(v, n_block)
	end

	# The block contained by this loop.
	fun loop_block: nullable ANode is abstract
end

redef class ADoExpr
	super ADoBlockHelper

	redef fun loop_block do return self.n_block
	redef fun accept_forward_analysis(v) do accept_loop_forward_analysis(v)
end

redef class ALoopExpr
	super ADoBlockHelper

	redef fun loop_block do return self.n_block
	redef fun accept_forward_analysis(v) do accept_loop_forward_analysis(v)
end

redef class AWhileExpr
	super ADoBlockHelper

	redef fun loop_block do return self.n_block

	redef fun accept_forward_analysis(v) do
		v.enter_visit(n_expr)
		accept_loop_forward_analysis(v)
	end
end

redef class AForExpr
	super ADoBlockHelper

	redef fun loop_block do return self.n_block

	redef fun accept_forward_analysis(v) do
		for n_group in n_groups do
			v.enter_visit(n_group.n_expr)
		end
		accept_loop_forward_analysis(v)
	end
end

redef class AMethPropdef
	redef fun accept_forward_analysis(v) do
		v.current_inset = v.new_initial_method_flow(self)
		v.current_outset = v.current_inset.clone
		v.insets[self] = v.current_inset
		visit_all(v)
		v.outsets[self] = v.current_outset
	end
end
