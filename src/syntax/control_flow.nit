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
	meth [](s: Symbol): nullable Variable
	do
		if _dico.has_key(s) then
			return _dico[s]
		else
			return null
		end
	end

	# Register a new variable with its name
	meth add(v: Variable)
	do
		_dico[v.name] = v
		_all_variables.add(v)
	end

	meth mark_is_set(v: Variable)
	do
		_set_variables.add(v)
	end

	meth check_is_set(n: PNode, v: Variable)
	do
		if v.must_be_set and not is_set(v) then
			_visitor.error(n, "Error: variable '{v}' is possibly unset.")
			var x = self
			while true do
				print "  {x.node.locate}: {x._set_variables.join(", ")} ; {x._dico.join(", ")}"
				var x0 = x
				if x0 isa SubVariableContext then
					x = x0.prev
				else
					break
				end
			end
		end
	end

	# The effective static type of a given variable
	# May be different from the declaration static type
	meth stype(v: Variable): nullable MMType
	do
		if _stypes.has_key(v) then
			return _stypes[v]
		else
			return v.stype
		end
	end

	# Set effective static type of a given variable
	# May be different from the declaration static type
	meth stype=(v: Variable, t: nullable MMType)
	do
		_stypes[v] = t
	end

	# Variables by name (in the current context only)
	attr _dico: Map[Symbol, Variable]

	# All variables in all contextes
	attr _all_variables: Set[Variable]

	# Updated static type of variables
	attr _stypes: Map[Variable, nullable MMType] = new HashMap[Variable, nullable MMType]

	# Build a new VariableContext
	meth sub(node: PNode): SubVariableContext
	do
		return new SubVariableContext.with_prev(self, node)
	end

	# Build a nested VariableContext with new variable information
	meth sub_with(node: PNode, v: Variable, t: MMType): SubVariableContext
	do
		var ctx = sub(node)
		ctx.stype(v) = t
		return ctx
	end

	# The visitor of the context (used to display error)
	attr _visitor: AbsSyntaxVisitor

	# The syntax node that introduced the context
	readable attr _node: PNode

	init(visitor: AbsSyntaxVisitor, node: PNode)
	do
		_visitor = visitor
		_node = node
		_dico = new HashMap[Symbol, Variable]
	end

	# Is a control flow break met? (return, break, continue)
	readable writable attr _unreash: Bool = false

	# Is a control flow already broken?
	# Used to avoid repeating the same error message
	readable writable attr _already_unreash: Bool = false

	# Set of variable that are set (assigned)
	readable attr _set_variables: HashSet[Variable] = new HashSet[Variable]

	# Is a variable set?
	meth is_set(v: Variable): Bool
	do
		return _set_variables.has(v)
	end

	# Merge back one flow context information
	meth merge(ctx: VariableContext)
	do
		if ctx.unreash then
			unreash = true
			if ctx.already_unreash then already_unreash = true
			return
		end
		for v in _all_variables do
			if not is_set(v) and ctx.is_set(v) then
				mark_is_set(v)
			end
			var s = stype(v)
			var s1 = ctx.stype(v)
			if s1 != s then stype(v) = s1
		end
	end

	# Merge back two alternative flow context informations
	meth merge2(ctx1, ctx2, basectx: VariableContext)
	do
		if ctx1.unreash then
			merge(ctx2)
		else if ctx2.unreash then
			merge(ctx1)
		end
		for v in _all_variables do
			if not is_set(v) and ctx1.is_set(v) and ctx2.is_set(v) then
				mark_is_set(v)
			end

			var s = stype(v)
			var s1 = ctx1.stype(v)
			var s2 = ctx2.stype(v)
			if s1 == s and s2 == s then
				# NOP
			else if s1 == s2 then
				stype(v) = s1
			else if s2 == null or s1 < s2 then
				stype(v) = s2
			else if s1 == null or s2 < s1 then
				stype(v) = s1
			else
				stype(v) = basectx.stype(v)
			end
		end
	end

	redef meth to_s
	do
		var s = new Buffer
		s.append(node.locate)
		for v in _all_variables do
			var t = stype(v)
			if t == null then continue
			s.append(" {v}:{t}")
		end
		return s.to_s
	end
end

class RootVariableContext
special VariableContext
	init(visitor: AbsSyntaxVisitor, node: PNode)
	do
		super(visitor, node)
		_all_variables = new HashSet[Variable]
	end
end

class SubVariableContext
special VariableContext
	readable attr _prev: VariableContext

	redef meth [](s)
	do
		if _dico.has_key(s) then
			return _dico[s]
		else
			return prev[s]
		end
	end

	redef meth stype(v)
	do
		if _stypes.has_key(v) then
			return _stypes[v]
		else
			return prev.stype(v)
		end
	end

	init with_prev(p: VariableContext, node: PNode)
	do
		init(p._visitor, node)
		_prev = p
		_all_variables = p._all_variables
	end

	redef meth is_set(v)
	do
		return _set_variables.has(v) or _prev.is_set(v)
	end
end

redef class Variable
	# Is the variable must be set before being used ?
	meth must_be_set: Bool do return false
end

redef class VarVariable
	redef meth must_be_set do return true
end
