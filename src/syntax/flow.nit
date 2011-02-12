# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008-2009 Jean Privat <jean@pryen.org>
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

# Analysis control flow and variable visibility in property bodies, statements and expressions
package flow

import syntax_base

#################################################################

# All-in-one context for flow control.
# It features:
# * reachability
# * set/unset variable
# * adaptive type of variable
# FlowContextes are imutables, new contexts are created:
# * as an empty root context
# * as the adaptation of a existing context (see methods sub_*)
# * as the merge of existing contexts
abstract class FlowContext
	# Display an error localised on `n' if the variable `v' is not set
	fun check_is_set(n: ANode, v: Variable)
	do
		if v.must_be_set and not is_set(v) then
			_visitor.error(n, "Error: variable '{v}' is possibly unset.")
		end
	end

	# The effective static type of a given variable
	# May be different from the declaration static type
	fun stype(v: Variable): nullable MMType
	do
		return v.stype
	end

	# Return a context where the variable is marked as set
	fun sub_setvariable(v: Variable): FlowContext
	do
		var ctx = new SubFlowContext.with_prev(self, node)
		ctx._set_variables.add(v)
		return ctx
	end

	# Return a context where unreash == true
	fun sub_unreash(node: ANode): FlowContext
	do
		var ctx = new SubFlowContext.with_prev(self, node)
		ctx._unreash = true
		return ctx
	end

	# Return a context where v is casted as t
	fun sub_with(node: ANode, v: Variable, t: MMType): FlowContext
	do
		return new CastFlowContext(self, node, v, t)
	end

	# Merge various alternative contexts (all must be reashable)
	# Note that self can belong to alternatives
	# Base is self
	fun merge(node: ANode, alternatives: Array[FlowContext]): FlowContext
	do
		for a in alternatives do assert not a.unreash
		if alternatives.length == 1 then return alternatives.first
		return new MergeFlowContext(self, node, alternatives)
	end

	# Merge only context that are reachable
	# Used for if/then/else merges
	# Base is self
	fun merge_reash(node: ANode, alt1, alt2: FlowContext): FlowContext
	do
		if alt1.unreash then
			if alt2.unreash then
				return self.sub_unreash(node)
			else
				var t = alt2
				alt2 = alt1
				alt1 = t
			end
		end

		if alt2.unreash or alt1 == alt2 then
			return alt1
			#if alt1 == self then
			#	return self
			#else
			#	return merge(node, [alt1])
			#end
		else
			return merge(node, [alt1, alt2])
		end
	end

	# The visitor of the context (used to display error)
	var _visitor: AbsSyntaxVisitor

	# The syntax node that introduced the context
	readable var _node: ANode

	init(visitor: AbsSyntaxVisitor, node: ANode)
	do
		_visitor = visitor
		_node = node
	end

	# Is a control flow break met? (return, break, continue)
	readable var _unreash: Bool = false

	# Is a control flow already broken?
	# Used to avoid repeating the same error message
	readable writable var _already_unreash: Bool = false

	# Set of variable that are set (assigned)
	readable var _set_variables: HashSet[Variable] = new HashSet[Variable]

	# Is a variable set?
	fun is_set(v: Variable): Bool
	do
		return _set_variables.has(v)
	end
end

# Root of a variable context hierarchy
class RootFlowContext
	super FlowContext
	init(visitor: AbsSyntaxVisitor, node: ANode)
	do
		super(visitor, node)
	end
end

# Contexts that are an evolution of a single previous context
class SubFlowContext
	super FlowContext
	readable var _prev: FlowContext

	redef fun is_set(v)
	do
		return _set_variables.has(v) or _prev.is_set(v)
	end

	redef fun stype(v)
	do
		return prev.stype(v)
	end

	init with_prev(p: FlowContext, node: ANode)
	do
		init(p._visitor, node)
		_prev = p
	end
end

# A variable context where a variable got a type adptation
class CastFlowContext
	super SubFlowContext
	# The casted variable
	var _variable: Variable

	# The new static type of the variable
	var _stype: nullable MMType

	redef fun stype(v)
	do
		if v == _variable then
			return _stype
		else
			return prev.stype(v)
		end
	end

	init(p: FlowContext, node: ANode, v: Variable, s: nullable MMType)
	do
		with_prev(p, node)
		_variable = v
		_stype = s
	end
end

# Context that resulting from the combinaisons of other contexts.
# Most of the merge computation are done lasily.
class MergeFlowContext
	super FlowContext
	var _base: FlowContext
	var _alts: Array[FlowContext]

	# Updated static type of variables
	var _stypes: Map[Variable, nullable MMType] = new HashMap[Variable, nullable MMType]

	init(base: FlowContext, node: ANode, alts: Array[FlowContext])
	do
		super(base._visitor, node)
		_alts = alts
		_base = base
	end

	redef fun stype(v)
	do
		if _stypes.has_key(v) then
			return _stypes[v]
		else
			var s = merge_stype(v)
			_stypes[v] = s
			return s
		end
	end

	private fun merge_stype(v: Variable): nullable MMType
	do
		var candidate: nullable MMType = null
		var is_nullable = false
		var same_candidate: nullable MMType = _alts.first.stype(v)
		for ctx in _alts do
			var t = ctx.stype(v)
			if t == null then
				return null
			end
			if t != same_candidate then
				same_candidate = null
			end
			if t isa MMTypeNone then
				is_nullable = true
				continue
			end
			if t isa MMNullableType then
				is_nullable = true
				t = t.as_notnull
			end
			if candidate == null or candidate < t then
				candidate = t
			end
		end
		if same_candidate != null then
			return same_candidate
		end
		if is_nullable then
			if candidate == null then
				return _visitor.type_none
			else
				candidate = candidate.as_nullable
			end
		end
		if candidate == null then
			return _base.stype(v)
		else
			for ctx in _alts do
				var t = ctx.stype(v)
				if not t < candidate then
					return _base.stype(v)
				end
			end
		end
		return candidate
	end

	redef fun is_set(v)
	do
		if _set_variables.has(v) then
			return true
		else
			for ctx in _alts do
				if not ctx.is_set(v) then
					return false
				end
			end
			_set_variables.add(v)
			return true
		end
	end
end


redef class Variable
	# Is the variable must be set before being used ?
	fun must_be_set: Bool do return false
end

redef class VarVariable
	redef fun must_be_set do return true
end
