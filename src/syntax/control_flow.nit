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
package control_flow

import syntax_base

# Associate symbols to variable and variables to type
# Can be nested
abstract class VariableContext
	# Look for the variable from its name
	# Return null if nothing found
	fun [](s: Symbol): nullable Variable
	do
		if _dico.has_key(s) then
			return _dico[s]
		else
			return null
		end
	end

	# Register a new variable with its name
	fun add(v: Variable)
	do
		var old_var = self[v.name]
		if old_var != null then
			_visitor.error(v.decl, "Error: '{v}' already defined at {old_var.decl.location.relative_to(v.decl.location)}.")
		end
		_dico[v.name] = v
		_all_variables.add(v)
	end

	fun mark_is_set(v: Variable)
	do
		_set_variables.add(v)
	end

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

	# Variables by name (in the current context only)
	var _dico: Map[Symbol, Variable]

	# All variables in all contextes
	var _all_variables: Set[Variable]

	# Build a new VariableContext
	fun sub(node: ANode): VariableContext
	do
		return new SubVariableContext.with_prev(self, node)
	end

	# Build a nested VariableContext with new variable information
	fun sub_with(node: ANode, v: Variable, t: MMType): VariableContext
	do
		return new CastVariableContext(self, node, v, t)
	end

	# Merge various alternative contexts
	# Note that self can belong to alternatives
	fun merge(node: ANode, alternatives: Array[VariableContext], base: VariableContext): VariableContext
	do
		return new MergeVariableContext(self, node, alternatives, base)
	end

	# Merge only context that are reachable
	# Used for if/then/else merges
	# Base is self
	fun merge_reash(node: ANode, alt1, alt2: VariableContext, base: VariableContext): VariableContext
	do
		if alt1.unreash then
			if alt2.unreash then
				unreash = true
				return self
			else
				var t = alt2
				alt2 = alt1
				alt1 = t
			end
		end

		if alt2.unreash or alt1 == alt2 then
			if alt1 == self then
				return self
			else
				return merge(node, [alt1], base)
			end
		else
			return merge(node, [alt1, alt2], base)
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
		_dico = new HashMap[Symbol, Variable]
	end

	# Is a control flow break met? (return, break, continue)
	readable writable var _unreash: Bool = false

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

	redef fun to_s
	do
		var s = new Buffer
		s.append(node.location.to_s)
		for v in _all_variables do
			var t = stype(v)
			if t == null then continue
			s.append(" {v}:{t}")
		end
		return s.to_s
	end

	private fun is_in(ctx: VariableContext): Bool = self == ctx
end

# Root of a variable context hierarchy
class RootVariableContext
special VariableContext
	init(visitor: AbsSyntaxVisitor, node: ANode)
	do
		super(visitor, node)
		_all_variables = new HashSet[Variable]
	end
end

# Contexts that can see local variables of a prevous context
# Local variables added to this context are not shared with the previous context
class SubVariableContext
special VariableContext
	readable var _prev: VariableContext

	redef fun is_in(ctx)
	do
		return ctx == self or _prev.is_in(ctx)
	end

	redef fun [](s)
	do
		if _dico.has_key(s) then
			return _dico[s]
		else
			return prev[s]
		end
	end

	redef fun is_set(v)
	do
		return _set_variables.has(v) or _prev.is_set(v)
	end

	redef fun stype(v)
	do
		return prev.stype(v)
	end

	init with_prev(p: VariableContext, node: ANode)
	do
		init(p._visitor, node)
		_prev = p
		_all_variables = p._all_variables
	end
end

# A variable context where a variable got a type evolution
class CastVariableContext
special SubVariableContext
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

	init(p: VariableContext, node: ANode, v: Variable, s: nullable MMType)
	do
		with_prev(p, node)
		_variable = v
		_stype = s
	end
end

# Context that follows a previous context but where
# Variable current static type and variable is_set depends on the combinaison of other contexts
class MergeVariableContext
special SubVariableContext
	var _base: VariableContext
	var _alts: Array[VariableContext]

	# Updated static type of variables
	var _stypes: Map[Variable, nullable MMType] = new HashMap[Variable, nullable MMType]

	init(prev: VariableContext, node: ANode, alts: Array[VariableContext], base: VariableContext)
	do
		assert prev.is_in(base) else print "{node.location}: Error: prev {prev.node.location} is not in base {base.node.location}"
		for a in alts do assert a.is_in(prev) else print "{node.location}: Error: alternative {a.node.location} is not in prev {prev.node.location}"
		with_prev(prev, node)
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
					print "{node.location}: is_set({v}) ? false : because not set in {ctx.node.location}"
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
