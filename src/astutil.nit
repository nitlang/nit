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

# Additional features on Nit AST
#
# Most of these feature require that the precomputation `parentize_tokens`
# is run on the root node of a AST.
#
# These aditionnal features are used either to have a better association between tokens and productions
# But also to query how productions and tokens are placed in the lines of code.
module astutil

intrude import parser
import html

redef class ANode
	# Visit the AST and computes advanced AST attributes on Tokens and Prod
	# This also force a parent on the detashed tokens
	fun parentize_tokens
	do
		var v = new PTokenVisitor
		v.work(self)
	end
end

redef class Prod
	# The first token of the production in the AST
	# Computed by `parentize_tokens`
	var first_token: nullable Token = null

	# The last token of the production in the AST
	# Computed by `parentize_tokens`
	var last_token: nullable Token = null

	# Is the production contained in full block of line?
	# Computed by `parentize_tokens`
	fun is_block: Bool
	do
		if first_token == null or last_token == null then return false
		#sys.stderr.write "{self}@{location}: start={first_token.is_starting_line} {first_token.inspect}@{first_token.location} ; end={last_token.is_ending_line} {last_token.inspect}@{last_token.location}\n"
		return first_token.is_starting_line and last_token.is_ending_line
	end

	# Is the production a part of a single line (without being a block)
	# Computed by `parentize_tokens`
	fun is_span: Bool
	do
		if first_token == null or last_token == null then return false
		return not is_block and location.line_start == location.line_end
	end

	# A XML representation of the AST
	# Productions and token become elements
	# 
	# detached tokens and whitespaces are preserved in the XML
	# 
	# ~~~
	# import parser_util
	# var text = "y += foo"
	# var ast = (new ToolContext).parse_something(text)
	# assert ast isa AExpr
	# ast.parentize_tokens
	# assert ast.to_xml.write_to_string == """<ACallReassignExpr><AQid><TId>y</TId></AQid> <APlusAssignOp><TPluseq>+=</TPluseq></APlusAssignOp> <ACallExpr><AQid><TId>foo</TId></AQid></ACallExpr></ACallReassignExpr>"""
	# ~~~
	fun to_xml: HTMLTag
	do
		var res = new HTMLTag("AST")
		var stack = new Array[HTMLTag]
		var c = first_token
		while c != null do
			if c != first_token then res.append(c.blank_before)
			var sp = c.starting_prods
			if sp != null then for p in sp do
				var tag = new HTMLTag(p.class_name)
				res.add tag
				stack.add res
				res = tag
			end
			var tag = new HTMLTag(c.class_name)
			res.add tag
			tag.append c.text
			var ep = c.ending_prods
			if ep != null then for p in ep do
				res = stack.pop
			end

			if c == last_token then
				c = null
			else
				c = c.next_token
			end
		end
		assert stack.is_empty
		return res.children.first
	end
end

redef class Token
	# Is self the first AST token on its line in the source
	# Computed by `parentize_tokens`
	#
	# Note, some tokens detached from the AST
	# may precede `self` even if `is_starting_line` is true
	# One can use `first_real_token_in_line` to get the real starting token
	var is_starting_line = false

	# Is self the last AST token on its line in the source
	# Computed by `parentize_tokens`
	#
	# Note, some tokens detached from the AST (like comments)
	# may follow `self` even if `is_ending_line` is true.
	# One can use `last_real_token_in_line` to get the real ending token
	var is_ending_line = false

	# The first real token that starts the line of `self`
	#
	# This could return a token that is detached from the AST.
	# See `first_token_in_line` if a AST token is required.
	fun first_real_token_in_line: Token
	do
		var line = location.line_start
		var t = self
		loop
			var p = t.prev_token
			if p == null or p.location.line_start != line then
				return t
			end
			t = p
		end
	end

	# The first AST token that starts the line of `self`.
	# May be null is the line contains only detached tokens (only comment)
	#
	# Computed by `parentize_tokens`
	#
	# ENSURE `result != null implies result.is_starting_line`
	fun first_token_in_line: nullable Token
	do
		return first_real_token_in_line.first_ast_token
	end

	# The first AST token.
	# This only work on the `first_real_token_in_line`
	private var first_ast_token: nullable Token

	# The last read token that ends the line of `self`
	#
	# This usually return a detached token lake a TEol or a comment.
	# See `last_token_in_line` if a AST token is required.
	fun last_real_token_in_line: Token
	do
		var line = location.line_start
		var t = self
		loop
			var p = t.next_token
			if p == null or p.location.line_start != line then
				return t
			end
			t = p
		end
	end

	# The last AST token that starts the line of `self`
	# May be null is the line contains only detached tokens (only comment)
	#
	# Computed by `parentize_tokens`
	#
	# ENSURE `result.is_ending_line`
	fun last_token_in_line: nullable Token
	do
		return last_real_token_in_line.last_ast_token
	end

	# The last AST token.
	# This only work on the `last_real_token_in_line`
	private var last_ast_token: nullable Token

	# The productions that starts with `self`, if any
	# Productions goes from the most general to the most specific
	#
	# Computed by `parentize_tokens`
	var starting_prods: nullable Array[Prod]

	# The productions that ends with `self`, if any
	# Productions goes from the most specific to the most general
	#
	# Computed by `parentize_tokens`
	var ending_prods: nullable Array[Prod]
end


private class PTokenVisitor
	super Visitor

	var last_token: nullable Token = null

	# productions that need a fisrt token
	var stack = new Array[Prod]

	fun work(n: ANode)
	do
		enter_visit(n)
		# process remaining detashed tokens
		var c = last_token
		if c != null then
			c.is_ending_line = true
			c.last_real_token_in_line.last_ast_token = c
			c = c.next_token
		end
		var r = n.root
		while c != null and c.parent == null do
			c.parent = r
			c = c.next_token
		end
	end

	redef fun visit(n)
	do
		if not n isa Token then
			assert n isa Prod
			stack.push(n)
			n.visit_all(self)
			if n.first_token == null then
				# epsilon production, just discard
				assert stack.pop == n
			else
				var t = last_token
				if t != null then
					# last token ends the production
					n.last_token = t
					if t.ending_prods == null then t.ending_prods = new Array[Prod]
					t.ending_prods.add n
				end
			end
			return
		end

		# We have a token, give it to prods that need one
		if not stack.is_empty then
			n.starting_prods = new Array[Prod]
			for p in stack do
				p.first_token = n
				n.starting_prods.add p
			end
			stack.clear
		end

		var last_token = last_token

		# n starts a new line
		if last_token == null or last_token.location.line_start != n.location.line_start then
			n.is_starting_line = true
			n.first_real_token_in_line.first_ast_token = n

		end
		# last_token ended a line
		if last_token != null and last_token.location.line_start != n.location.line_start then
			last_token.is_ending_line = true
			last_token.last_real_token_in_line.last_ast_token = last_token
		end

		# Get the common parent
		var p
		if last_token == null then
			p = n.root
		else
			p = last_token.common_parent(n)
		end
		if p isa Prod then
			# And apply it to detached tokens between `last_token` and `n`
			var c = n.prev_token
			while c != null and c.parent == null do
				c.parent = p
				c = c.prev_token
			end
		end

		self.last_token = n
	end
end
