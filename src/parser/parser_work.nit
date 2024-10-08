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

# Internal algorithm and data structures for the Nit parser
module parser_work

intrude import parser_prod

# State of the parser automata as stored in the parser stack.
private class State
	# The internal state number
	var state: Int

	# The node stored with the state in the stack
	var nodes: nullable Object
end

# The parser of the Nit language.
class Parser
	super TablesCapable
	# Associated lexer
	var lexer: Lexer

	# Stack of pushed states and productions
	private var stack = new Array[State]

	# Position in the stack
	private var stack_pos: Int = -1

	init
	do
		self.reduce_table = once build_reduce_table
	end

	# Do a transition in the automata
	private fun go_to(index: Int): Int
	do
		var state = state
		var low = 1
		var high = parser_goto(index, 0) - 1

		while low <= high do
			var middle = (low + high) / 2
			var subindex = middle * 2 + 1 # +1 because parser_goto(index, 0) is the length

			var goal = parser_goto(index, subindex)
			if state < goal then
				high = middle - 1
			else if state > goal then
				low = middle + 1
			else
				return parser_goto(index, subindex+1)
			end
		end

		return parser_goto(index, 2) # Default value
	end

	# Push someting in the state stack
	private fun push(numstate: Int, list_node: nullable Object)
	do
		var pos = _stack_pos + 1
		_stack_pos = pos
		if pos < _stack.length then
			var state = _stack[pos]
			state._state = numstate
			state._nodes = list_node
		else
			_stack.push(new State(numstate, list_node))
		end
	end

	# The current state
	private fun state: Int
	do
		return _stack[_stack_pos]._state
	end

	# Pop something from the stack state
	private fun pop: nullable Object
	do
		var res = _stack[_stack_pos]._nodes
		_stack_pos = _stack_pos -1
		return res
	end

	# Build and return a full AST.
	fun parse: Start
	do
		push(0, null)

		var lexer = _lexer
		loop
			var token = lexer.peek
			if token isa AError then
				return new Start(null, token)
			end

			var state = self.state
			var index = token.parser_index
			var action_type = parser_action(state, 2)
			var action_value = parser_action(state, 3)

			var low = 1
			var high = parser_action(state, 0) - 1

			while low <= high do
				var middle = (low + high) / 2
				var subindex = middle * 3 + 1 # +1 because parser_action(state, 0) is the length

				var goal = parser_action(state, subindex)
				if index < goal then
					high = middle - 1
				else if index > goal then
					low = middle + 1
				else
					action_type = parser_action(state, subindex+1)
					action_value = parser_action(state, subindex+2)
					break
				end
			end

			if action_type == 0 then # SHIFT
				push(action_value, lexer.next)
			else if action_type == 1 then # REDUCE
				_reduce_table[action_value].action(self)
			else if action_type == 2 then # ACCEPT
				var node2 = lexer.next
				assert node2 isa EOF
				var node1 = pop
				assert node1 isa AModule
				var node = new Start(node1, node2)
				node2.parent = node
				(new ComputeProdLocationVisitor(lexer.file.first_token)).enter_visit(node)
				return node
			else if action_type == 3 then # ERROR
				# skip injected tokens
				while not isset token._location do token = lexer.next
				var node2 = new AParserError.init_parser_error("Syntax Error: unexpected {token}.", token.location, token)
				var node = new Start(null, node2)
				return node
			end
		end
	end

	private var reduce_table: Array[ReduceAction] is noinit
	private fun build_reduce_table: Array[ReduceAction] is abstract
end

redef class Prod
	# Location on the first token after the start of a production
	# So outside the production for epsilon production
	var first_location: nullable Location

	# Join the text of all visited tokens
	fun collect_text: String
	do
		var v = new TextCollectorVisitor
		v.enter_visit(self)
		assert v.text != ""
		return v.text
	end
end

# Find location of production nodes
# Uses existing token locations to infer location of productions.
private class ComputeProdLocationVisitor
	super Visitor

	# The current (or starting) cursor on the token sequence used to collect loose tokens
	var token: nullable Token

	# Currently visited productions that need a first token
	var need_first_prods = new Array[Prod]

	# Already visited epsilon productions that waits something after them
	var need_after_epsilons = new Array[Prod]

	# The last visited token in the current production
	var last_token: nullable Token = null

	redef fun visit(n: ANode)
	do
		if n isa Token then
			# Skip injected tokens
			if not isset n._location then return

			# Collect loose tokens (not in the AST) and attach them to token in the AST
			var cursor = token
			if n != cursor then
				var lt = last_token
				# In order, we have the tokens:
				# * `lt` the previous visited token in the AST (if any)
				# * then `cursor` the loose tokens to attach
				# * then `n` the current visited token in the AST

				# In the following, we advance `cursor` to add them to `lt.next_looses` or to `n.prev_looses`.
				if lt != null then
					var ltl = lt.location.line_end
					# floating tokens on the same line of a AST-token follows it
					while cursor != null and cursor != n and ltl == cursor.location.line_start do
						cursor.is_loose = true
						lt.next_looses.add cursor
						cursor = cursor.next_token
					end
				end
				# other loose tokens precede the next AST-token
				while cursor != null and cursor != n do
					cursor.is_loose = true
					n.prev_looses.add cursor
					cursor = cursor.next_token
				end
			end
			token = n.next_token

			var loc = n._location
			_last_token = n

			# Add a first token to productions that need one
			if not _need_first_prods.is_empty then
				for no in _need_first_prods do
					no._first_location = loc
				end
				_need_first_prods.clear
			end

			# Find location for already visited epsilon production that need one
			if not _need_after_epsilons.is_empty then
				var loco = new Location(loc.file, loc.line_start, loc.line_start, loc.column_start, loc.column_start) 
				for no in _need_after_epsilons do
					no.location = loco
				end
				_need_after_epsilons.clear
			end
		else
			assert n isa Prod
			_need_first_prods.add(n)

			n.visit_all(self)

			var startl = n._first_location
			if startl != null then
				# Non-epsilon production
				var endl = _last_token.location

				if startl == endl then
					n.location = startl
				else
					n.location = new Location(startl.file, startl.line_start, endl.line_end, startl.column_start, endl.column_end)
				end

				if not _need_after_epsilons.is_empty then
					var loc = new Location(endl.file, endl.line_end, endl.line_end, endl.column_end, endl.column_end)
					for no in _need_after_epsilons do
						# Epsilon production that finishes the current non-epsilon production
						no.location = loc
					end
					_need_after_epsilons.clear
				end
			else
				# Epsilon production in the middle or that finishes a parent non-epsilon production
				_need_after_epsilons.add(n)
			end
		end
	end
end

private class TextCollectorVisitor
	super Visitor
	var text: String = ""
	redef fun visit(n)
	do
		if n isa Token then text += n.text
		n.visit_all(self)
	end
end


# Each reduce action has its own class, this one is the root of the hierarchy.
private abstract class ReduceAction
	fun action(p: Parser) is abstract
	fun concat(l1, l2 : Array[Object]): Array[Object]
	do
		if l1.is_empty then return l2
		l1.append(l2)
		return l1
	end
	var goto: Int
end

redef class AExpr

	# Get `self` as a single identifier.
	# Return null if not a single identifier.
	fun as_id: nullable String
	do
		if self isa AMethidExpr then
			return self.collect_text
		end
		if not self isa ACallExpr then return null
		if not self.n_expr isa AImplicitSelfExpr then return null
		if not self.n_args.n_exprs.is_empty then return null
		return self.n_qid.n_id.text
	end
end
