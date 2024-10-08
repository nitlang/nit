# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Library used to pretty print Nit code.
#
# Usage:
#
#     import parser_util
#     var tc = new ToolContext
#     var nmodule = tc.parse_something("class A\nfun   toto :  Int  do   return   5\nend")
#     var ppv = new PrettyPrinterVisitor
#     var pmodule = ppv.pretty(nmodule)
#     assert pmodule.write_to_string == """
#     class A
#     \tfun toto: Int do return 5
#     end"""
#
# See `nitpretty` tool for more documentation.
module pretty

import template
import toolcontext
import modelbuilder
import astutil

# The `PrettyPrinterVisitor` is used to visit a node and pretty print it.
#
# The main method here is `visit` that performs the pretty printing of a `ANode`.
#
# Because some tokens like `TComment` are not stored in the AST,
# we visit the AST like traditionnal visitor and also maintain a
# pointer to the `current_token` (actually the next one to be printed).
#
# Visited productions are in charges to move the token pointer using methods such as:
#
# * `consume`: print `current_token` and move to the next one
# * `skip`: move to the next token without printing the current one
# * `skip_to`: move to a specified token skipping all the tokens before
# * `catch_up`: consume all the tokens between `current_token` and a specified token
# * `finish_line`: consume all the tokens between `current_token` and the end of line
class PrettyPrinterVisitor
	# Pretty print `n`.
	fun pretty(n: ANode): Template do
		clear
		n.parentize_tokens

		if n isa Prod then
			current_token = n.first_token
			visit n
		else if n isa Token then
			var p = n.parent

			while p != null and not p isa Prod do
				p = p.parent
			end

			current_token = p.first_token
			visit p
		end

		return tpl.as(not null)
	end

	# Pretty print the whole `nmodule` with comments before and after.
	fun pretty_nmodule(nmodule: AModule): Template do
		clear
		nmodule.parentize_tokens
		current_token = nmodule.location.file.first_token
		visit nmodule
		catch_up nmodule.location.file.last_token
		if skip_empty then tpl.add "\n"
		return tpl.as(not null)
	end

	# Prepare `self` for a new visit.
	private fun clear do
		tpl = new Template
		current_token = null
		indent = 0
		current_length = 0
		previous_length = 0
		wait_addn = 0
	end

	# Visit `n` if not null.
	fun visit(n: nullable ANode) do
		if n == null then return
		n.accept_pretty_printer self
	end

	# Visit a list of arguments `ANode` with optional parentheses
	fun visit_args(n: nullable ANodes[ANode]) do
		if n == null or n.is_empty then return
		if current_token isa TOpar then
			consume "("
		else
			adds
		end

		visit_list n
		if current_token isa TCpar then consume ")"
	end

	# Visit a list of `ANode`.
	fun visit_list(n: nullable ANodes[ANode]) do
		if n == null then return
		n.accept_pretty_printer self
	end

	# Is the node inlinable and can fit on the line.
	fun can_inline(n: nullable ANode): Bool do
		if n == null then return true
		if no_inline and n.location.line_start != n.location.line_end then return false
		if n.must_be_inline then return true
		if n.must_be_block then return false
		# check length
		if max_size > 0 and n.collect_length + current_length > max_size then return false
		# check block is inlinable
		return n.is_inlinable
	end

	# Collect all `TComment` between `from` and `to`.
	fun collect_comments(from: nullable ANode, to: nullable ANode): Array[TComment] do
		var res = new Array[TComment]
		if from isa Prod then from = from.first_token
		if to isa Prod then to = to.first_token
		if from == null or to == null then return res

		while from != to do
			if from isa TComment then res.add from
			from = from.as(Token).next_token
		end

		return res
	end

	# Token under cursor.
	#
	# This is the next token to visit.
	var current_token: nullable Token = null

	# Skip the `current_token`.
	fun skip do current_token = current_token.next_token

	# Skip `current_token` until the end of line.
	fun skip_line do current_token = current_token.last_real_token_in_line

	# Skip `current_token` until `target` is reached.
	fun skip_to(target: nullable Token) do
		if target == null then return
		while current_token != null and current_token != target do skip
		if current_token == null then
			target.debug("Looked for, but not found :(")
			abort
		end
	end

	# Consume comments and end of lines if any
	fun consume_comments do
		while current_token isa TEol or current_token isa TComment do visit current_token
	end

	# Visit `current_token`.
	fun consume(token: String) do
		consume_comments
		if current_token.text == token then else current_token.debug("Got `{current_token.text}`; expected `{token}`.")
		visit current_token
	end

	# Is there token to visit between `current_token` and `target`?
	fun need_catch_up(target: nullable Token): Bool do
		if target == null then return false
		return current_token != target
	end

	# Visit all tokens between `current_token` and `target`.
	fun catch_up(target: nullable ANode) do
		if target == null then return
		if current_token == null then return
		var token: Token
		if target isa Token then
			token = target
		else if target isa Prod then
			token = target.first_token.as(not null)
		else
			abort
		end
		if current_token.location > token.location then return
		while current_token != token do visit current_token
	end

	# Visit all tokens between `current_token` and the end of line.
	fun finish_line do
		if current_token isa TComment then
			adds
			visit current_token
		end

		while current_token isa TEol do visit(current_token)
	end

	# The template under construction.
	private var tpl: nullable Template = null

	# Current indent level.
	var indent = 0

	# Size of a tabulation in spaces.
	var tab_size = 8

	# Max line size.
	# 0 (or negative) to disable.
	var max_size = 80 is writable

	# Length of the current line.
	var current_length = 0

	# Length of the previous line.
	var previous_length = 0

	# Is the last line a blank line?
	fun last_line_is_blank: Bool do return previous_length == 0

	# Add `t` to current template.
	fun add(t: String) do
		if t.is_empty then return
		while wait_addn > 0 do
			tpl.add "\n"
			wait_addn -= 1
		end
		tpl.add t
		current_length += t.length
	end

	# Add a `'\n'`.
	fun addn do
		if current_length == 0 and last_line_is_blank then return
		previous_length = current_length
		current_length = 0
		if skip_empty then wait_addn += 1
	end

	# Perform `addn` even if not `skip_empty`.
	fun forcen do
		if current_length == 0 and last_line_is_blank then return
		previous_length = current_length
		current_length = 0
		wait_addn += 1
	end

	# End of line chars are stored until another char is added.
	# This avoid empty files with only a '`\n`'.
	private var wait_addn = 0

	# Add `'\t' * indent`.
	fun addt do add "\t" * indent

	# Add a space.
	fun adds do add " "

	# Visit explicit receiver, implicit self will be ignored.
	fun visit_recv(n_expr: AExpr) do
		if not n_expr isa AImplicitSelfExpr then
			visit n_expr
			consume "."
		end
	end

	# Do we break string literals that are too long?
	var break_strings = false is public writable

	# Do we force `do` to be on the same line as the method signature?
	var inline_do = false is public writable

	# Do we force the deletion of empty lines?
	var skip_empty = false is public writable

	# Disable automatic inlining.
	var no_inline = false is writable
end

# Base framework redefs

redef class ANodes[E]
	private fun accept_pretty_printer(v: PrettyPrinterVisitor) do
		for e in self do
			var e_can_inline = v.can_inline(e)

			if v.current_token isa TComma then v.skip

			if e != first then
				if not e_can_inline then
					v.add ","
					v.forcen
					v.indent += 1
					v.addt
					v.indent -= 1
				else
					v.add ", "
				end
			end

			v.visit e
		end
	end
end

redef class ANode
	# Start visit of `self` using a `PrettyPrinterVisitor`
	private fun accept_pretty_printer(v: PrettyPrinterVisitor) is abstract

	# Collect the length (in `Char`) of the node.
	private fun collect_length: Int is abstract

	# Is `self` printable in one line?
	private fun is_inlinable: Bool do return true

	# Force `self` to be rendered as a block.
	private var force_block = false

	# Does `self` have to be rendered as a block?
	private fun must_be_block: Bool do return force_block

	# Force `self` to be rendered as a line.
	private var force_inline = false

	# Does `self` have be rendered as a line?
	private fun must_be_inline: Bool do
		if parent != null and parent.must_be_inline then return true
		return force_inline
	end

	# Does `self` was written in one line before transformation?
	private fun was_inline: Bool is abstract
end

redef class Token
	redef fun accept_pretty_printer(v) do
		v.add text.trim
		v.current_token = next_token
	end

	redef fun collect_length do return text.length
	redef fun is_inlinable do return true
	redef fun was_inline do return true
end

redef class TEol
	redef fun accept_pretty_printer(v) do
		if v.skip_empty then
			super
		else
			v.add text
			v.current_token = next_token
		end
	end
end

redef class Prod
	redef fun accept_pretty_printer(v) do v.visit first_token

	# The token where the production really start (skipping ADoc).
	private fun start_token: nullable Token do return first_token

	# Collect all `TComment` contained in the production
	# (between `start_token` and `end_token`).
	private fun collect_comments: Array[TComment] do
		var res = new Array[TComment]
		if start_token == null or last_token == null then return res
		var token = start_token

		while token != last_token do
			if token isa TComment then res.add token
			token = token.next_token
		end

		return res
	end

	redef fun collect_length do
		var res = 0
		if start_token == null or last_token == null then return res
		var token = start_token

		while token != last_token do
			res += token.text.length
			token = token.next_token
		end

		res += token.text.length
		return res
	end

	redef fun was_inline do
		return start_token.location.line_start == last_token.location.line_end
	end
end

# Comments

redef class TComment
	redef fun accept_pretty_printer(v) do
		if is_adoc then
			v.addt
			super
			v.forcen
			return
		end

		if is_licence then
			super
			v.forcen
			if is_last_in_group then v.addn
			return
		end

		if is_orphan then
			v.addn
			v.addt
			super
			v.forcen
			v.addn
			return
		end

		if is_inline then
			if next_token isa TComment and is_first_in_group then v.addn
			v.addt
			super
			v.forcen
			var prev_token = self.prev_token
			if prev_token isa TComment and prev_token.is_inline and is_last_in_group then v.addn
			return
		end

		super
		if not v.skip_empty then v.forcen
	end

	# Is `self` part of an `ADoc`?
	private fun is_adoc: Bool do return parent isa ADoc and parent.parent != null

	# Is `self` part of a licence?
	private fun is_licence: Bool do
		var prev_token = self.prev_token

		if prev_token == null then
			return true
		else if prev_token isa TComment then
			return prev_token.is_licence
		else
			return false
		end
	end

	# Is `self` starts and ends its line?
	private fun is_inline: Bool do
		return self == first_real_token_in_line and self == last_real_token_in_line
	end

	# Is `self` an orphan line (blank before and after)?
	private fun is_orphan: Bool do
		return prev_token isa TEol and
		   (prev_token.prev_token isa TEol or prev_token.prev_token isa TComment) and
		   next_token isa TEol
	end

	# Is `self` the first comment of a group of comment?
	private fun is_first_in_group: Bool do return not prev_token isa TComment

	# Is `self` the last comment of a group of comments?
	private fun is_last_in_group: Bool do return not next_token isa TComment
end

redef class ADoc
	redef fun accept_pretty_printer(v) do for comment in n_comment do v.visit comment
	redef fun is_inlinable do return n_comment.length <= 1
end

# Annotations

redef class AAnnotations
	redef fun accept_pretty_printer(v) do
		v.adds
		v.consume "is"
		if v.can_inline(self) then
			v.adds
			for n_item in n_items do
				v.visit n_item
				if n_item != n_items.last then
					v.add ", "
				end
			end
			if not was_inline then
				v.finish_line
				if v.current_token isa TKwend then v.skip
			end
		else
			v.forcen
			v.indent += 1
			for n_item in n_items do
				v.addt
				v.visit n_item
				v.finish_line
				if n_item != n_items.last then
					if was_inline then
						v.forcen
					else
						v.addn
					end
				end
			end
			v.indent -= 1
		end
	end

	redef fun is_inlinable do
		if not super then return false
		for annot in n_items do if not annot.is_inlinable then return false
		return true
	end
end

redef class AAnnotation
	redef fun accept_pretty_printer(v) do
		if n_visibility != null and not n_visibility isa APublicVisibility then
			v.visit n_visibility
			v.adds
		end
		v.visit n_atid
		v.visit_args n_args
	end
end

redef class ATypeExpr
	redef fun accept_pretty_printer(v) do v.visit n_type
end

# Modules

redef class AModule
	redef fun accept_pretty_printer(v) do
		v.catch_up start_token
		v.visit n_moduledecl

		if not n_imports.is_empty then
			if v.skip_empty then v.addn

			for n_import in n_imports do
				v.catch_up n_import
				v.visit n_import
			end
		end

		if not n_extern_code_blocks.is_empty then
			v.addn

			for n_extern_block in n_extern_code_blocks do
				v.catch_up n_extern_block
				v.visit n_extern_block
				v.addn
				if n_extern_block != n_extern_code_blocks.last then v.addn
			end

			if not n_classdefs.is_empty then v.addn
		end

		if not n_classdefs.is_empty then
			if v.skip_empty then v.addn

			for n_classdef in n_classdefs do
				v.catch_up n_classdef
				v.visit n_classdef
				if n_classdef != n_classdefs.last then v.addn
			end
		end

		assert v.indent == 0
	end

	# Skip doc if any.
	redef fun start_token do
		if n_moduledecl != null then return n_moduledecl.first_token
		if not n_imports.is_empty then return n_imports.first.first_token
		if not n_classdefs.is_empty then return n_classdefs.first.first_token
		return first_token
	end

	redef fun is_inlinable do return false
end

redef class AModuledecl
	redef fun accept_pretty_printer(v) do
		v.visit n_doc
		v.visit n_kwmodule
		v.adds
		v.visit n_name

		if n_annotations != null then
			var annot_inline = v.can_inline(n_annotations)
			v.visit n_annotations

			if not annot_inline then
				if v.current_token isa TKwend then
					v.consume "end"
					v.finish_line
				else
					v.add "end"
				end
			end
		end

		v.finish_line
		if v.skip_empty then v.addn
	end
end

redef class AModuleName
	redef fun accept_pretty_printer(v) do
		for path in n_path do
			v.visit path
			v.add "::"
		end

		v.visit n_id
	end
end

redef class ANoImport
	redef fun accept_pretty_printer(v) do
		v.visit n_kwimport
		v.adds
		v.visit n_kwend
		v.finish_line
		if v.skip_empty then v.addn
	end
end

redef class AStdImport
	redef fun accept_pretty_printer(v) do
		if not n_visibility isa APublicVisibility then
			v.visit n_visibility
			v.adds
		end

		v.visit n_kwimport
		v.adds
		v.visit n_name
		v.finish_line
		if v.skip_empty then v.addn
	end
end

# Classes

redef class AClassdef
	redef fun accept_pretty_printer(v) do
		for n_propdef in n_propdefs do
			v.catch_up n_propdef

			if n_propdef.n_doc != null or not v.can_inline(n_propdef) then
				if v.skip_empty and n_propdef != n_propdefs.first then v.addn
				v.visit n_propdef
				if v.skip_empty and n_propdef != n_propdefs.last then v.addn
			else
				v.visit n_propdef
			end
		end
	end
end

redef class AStdClassdef
	redef fun accept_pretty_printer(v) do
		v.visit n_doc
		var can_inline = v.can_inline(self)

		if not n_visibility isa APublicVisibility then
			v.visit n_visibility
			v.adds
		end

		if n_kwredef != null then
			v.visit n_kwredef
			v.adds
		end

		v.visit n_classkind
		v.adds
		v.visit n_qid

		if not n_formaldefs.is_empty then
			v.consume "["
			v.visit_list n_formaldefs
			v.consume "]"
		end

		if n_extern_code_block != null then
			v.adds
			v.visit n_extern_code_block
		end

		if can_inline then
			v.adds

			if not n_propdefs.is_empty then
				for n_superclass in n_propdefs do
					v.visit n_superclass
					v.adds
				end
			end
		else
			v.finish_line
			if v.skip_empty then v.addn
			v.indent += 1

			super
			v.catch_up n_kwend
			v.indent -= 1
		end

		v.visit n_kwend
		v.finish_line
		if v.skip_empty then v.addn
		assert v.indent == 0
	end

	redef fun is_inlinable do
		if not super then return false
		# FIXME: repair pretty-printing one-liner classes
		if n_propdefs.length > 0 then return false
		#if n_propdefs.length == 1 and not n_propdefs.first isa ASuperPropdef then return false
		if not collect_comments.is_empty then return false
		return true
	end

	redef fun start_token do
		if not n_visibility isa APublicVisibility then return n_visibility.first_token
		if n_kwredef != null then return n_kwredef
		return n_classkind.first_token
	end
end

redef class AAbstractClasskind
	redef fun accept_pretty_printer(v) do
		v.visit n_kwabstract
		v.adds
		v.visit n_kwclass
	end
end

redef class AExternClasskind
	redef fun accept_pretty_printer(v) do
		v.visit n_kwextern
		v.adds
		v.visit n_kwclass
	end
end

redef class AFormaldef
	redef fun accept_pretty_printer(v) do
		v.visit n_id

		if n_type != null then
			v.consume ":"
			v.adds
			v.visit n_type
		end
	end
end

redef class AType
	redef fun accept_pretty_printer(v) do
		if n_kwnullable != null then
			v.visit n_kwnullable
			v.adds
		end

		v.visit n_qid

		if not n_types.is_empty then
			v.consume "["
			v.visit_list n_types
			v.consume "]"
		end
	end
end

# Properties

redef class APropdef
	redef fun accept_pretty_printer(v) do
		v.visit n_doc
		v.addt

		if not n_visibility isa nullable APublicVisibility then
			v.visit n_visibility
			v.adds
		end

		if n_kwredef != null then
			v.visit n_kwredef
			v.adds
		end
	end

	# Factorize annotations visit for all APropdef.
	#
	# Return true if annotations were inlined.
	fun visit_annotations(v: PrettyPrinterVisitor, n_annotations: nullable AAnnotations): Bool do
		var res = v.can_inline(n_annotations)
		if n_annotations != null then v.visit n_annotations
		return res
	end

	# Factorize block visit for APropdefs.
	#
	# Were annotations printed inline? If so, we need to print the block differently.
	fun visit_block(v: PrettyPrinterVisitor, n_block: nullable AExpr, annot_inline: Bool) do
		# var can_inline = v.can_inline(n_block)
		if n_block == null then return
		if n_annotations != null and not annot_inline then
			v.forcen
			v.addt
		end
		if v.inline_do then
			while not v.current_token isa TKwdo do v.skip
		end
		var token = v.current_token
		var do_inline = true
		loop
			if token isa TEol then
				v.skip
				if not v.can_inline(n_block) then
					v.forcen
					v.addt
					do_inline = false
				end
			end
			token = v.current_token
			if token isa TKwdo then break
		end
		if annot_inline and do_inline then v.adds
		v.consume "do"

		if v.can_inline(n_block) and do_inline then
			v.adds

			if n_block isa ABlockExpr then
				if n_block.n_expr.is_empty then
					v.visit n_block.n_kwend
				else
					v.visit n_block.n_expr.first
					v.current_token = n_block.n_kwend
					v.skip
				end
			else
				v.visit n_block
				if v.current_token isa TKwend then v.skip
			end
		else
			v.finish_line
			if was_inline then
				v.forcen
			else
				v.addn
			end
			v.indent += 1

			if n_block isa ABlockExpr then
				n_block.force_block = true
				v.visit n_block
				v.catch_up n_block.n_kwend
			else
				v.addt
				v.visit n_block
				v.forcen
			end

			v.indent -= 1
			v.addt
			if n_block isa ABlockExpr then
				v.visit n_block.n_kwend
			else
				v.add "end"
			end
		end
		v.finish_line
	end

	redef fun start_token do
		if n_doc == null then return super
		return n_doc.last_token.next_token
	end
end

redef class AAttrPropdef
	redef fun accept_pretty_printer(v) do
		super
		v.visit n_kwvar
		v.adds
		v.visit n_id2

		if n_type != null then
			v.consume ":"
			v.adds
			v.visit n_type
		end

		if n_expr != null then
			v.adds
			v.consume "="
			v.adds
			v.visit n_expr
		end

		var annot_inline = visit_annotations(v, n_annotations)
		visit_block(v, n_block, annot_inline)
		v.finish_line
		v.addn
	end

	redef fun first_token do
		if n_doc != null then return n_doc.first_token
		if not n_visibility isa APublicVisibility then return n_visibility.first_token
		if n_kwredef != null then return n_kwredef
		return n_kwvar
	end

	redef fun is_inlinable do return true
end

redef class ATypePropdef
	redef fun accept_pretty_printer(v) do
		super
		v.visit n_kwtype
		v.adds
		v.visit n_qid
		v.consume ":"
		v.adds
		v.visit n_type
		visit_annotations(v, n_annotations)
		v.finish_line
		v.addn
	end

	redef fun is_inlinable do return true
end

redef class AMethPropdef
	redef fun accept_pretty_printer(v) do
		#  TODO: Handle extern annotations

		var before = v.indent
		super
		if n_kwinit != null then v.visit n_kwinit
		if n_kwmeth != null then v.visit n_kwmeth
		if n_kwnew != null then v.visit n_kwnew

		if not n_methid == null then
			v.adds
			v.visit n_methid
		end

		v.visit n_signature

		var annot_inline = visit_annotations(v, n_annotations)

		if n_extern_calls != null or n_extern_code_block != null then
			v.adds
			if n_extern_calls != null then v.visit n_extern_calls
			if n_extern_code_block != null then v.visit n_extern_code_block
		end

		visit_block(v, n_block, annot_inline)
		v.addn
		assert v.indent == before
	end

	# Can be inlined if:
	# * block is empty or can be inlined
	# * contains no comments
	redef fun is_inlinable do
		if not super then return false
		if n_annotations != null and not n_annotations.is_inlinable then return false
		if n_block != null and not n_block.is_inlinable then return false
		if n_extern_calls != null and not n_extern_calls.is_inlinable then return false
		if n_extern_code_block != null and not n_extern_code_block.is_inlinable then return false
		if not collect_comments.is_empty then return false
		return true
	end
end

redef class AMainMethPropdef
	redef fun accept_pretty_printer(v) do
		v.visit n_block
		if v.skip_empty then v.addn
	end
end

redef class ASuperPropdef
	redef fun accept_pretty_printer(v) do
		super
		v.visit n_kwsuper
		v.adds
		v.visit n_type
		visit_annotations(v, n_annotations)
		v.finish_line
		v.addn
	end

	redef fun is_inlinable do return true
end

redef class ASignature
	redef fun accept_pretty_printer(v) do
		if not n_params.is_empty then
			v.consume "("
			v.visit_list n_params
			v.consume ")"
		end

		if n_type != null then
			v.consume ":"
			v.adds
			v.visit n_type
		end
	end
end

redef class AParam
	redef fun accept_pretty_printer(v) do
		v.visit n_id

		if n_type != null then
			v.consume ":"
			v.adds
			v.visit n_type
		end

		if n_dotdotdot != null then v.visit n_dotdotdot
	end
end

# Extern

redef class AExternCalls
	redef fun accept_pretty_printer(v) do
		var can_inline = v.can_inline(self)
		v.visit n_kwimport

		if can_inline then
			v.adds
			v.visit_list n_extern_calls
		else
			v.forcen
			v.indent += 1
			v.addt
			v.indent -= 1
			v.visit_list n_extern_calls
		end

		v.adds
	end
end

redef class AFullPropExternCall
	redef fun accept_pretty_printer(v) do
		v.visit n_type
		v.visit n_dot
		v.visit n_methid
	end
end

redef class ALocalPropExternCall
	redef fun accept_pretty_printer(v) do v.visit n_methid
end

redef class AInitPropExternCall
	redef fun accept_pretty_printer(v) do v.visit n_type
end

redef class ACastAsExternCall
	redef fun accept_pretty_printer(v) do
		v.visit n_from_type
		v.visit n_dot
		v.visit n_kwas
		v.consume "("
		v.visit n_to_type
		v.consume ")"
	end
end

redef class AAsNullableExternCall
	redef fun accept_pretty_printer(v) do
		v.visit n_type
		v.consume "."
		v.visit n_kwas
		v.adds
		v.visit n_kwnullable
	end
end

redef class AAsNotNullableExternCall
	redef fun accept_pretty_printer(v) do
		v.visit n_type
		v.consume "."
		v.visit n_kwas
		v.adds
		v.visit n_kwnot
		v.adds
		v.visit n_kwnullable
	end
end

redef class AExternCodeBlock
	redef fun accept_pretty_printer(v) do
		if n_in_language != null then
			v.visit n_in_language
			v.adds
		end

		v.visit n_extern_code_segment
	end

	redef fun is_inlinable do
		if not super then return false
		return n_extern_code_segment.is_inlinable
	end
end

redef class AInLanguage
	redef fun accept_pretty_printer(v) do
		v.visit n_kwin
		v.adds
		v.visit n_string
	end
end

redef class TExternCodeSegment
	redef fun accept_pretty_printer(v) do
		var can_inline = v.can_inline(self)

		if can_inline then
			super
		else
			var text = text.substring(2, text.length - 4)
			var lines = text.r_trim.split("\n")

			if text.is_empty then
				v.add "`\{`\}"
			else
				v.add "`\{"

				if not lines.first.trim.is_empty then
					v.forcen
					lines.first.l_trim
					v.indent += 1
					v.addt
					v.indent -= 1
				end

				for line in lines do
					v.add line.r_trim
					v.forcen
				end

				v.addt
				v.add "`\}"
			end

			v.current_token = next_token
		end
	end

	redef fun is_inlinable do
		if not super then return false
		return location.line_start == location.line_end
	end
end

# Blocks

redef class ABlockExpr
	redef fun accept_pretty_printer(v) do
		var before = v.indent
		var can_inline = v.can_inline(self)

		if can_inline and not n_expr.is_empty then
			v.visit n_expr.first
			v.finish_line
		else
			for nexpr in n_expr do
				var expr_inline = v.can_inline(nexpr)
				if not expr_inline and nexpr != n_expr.first then v.addn
				v.catch_up nexpr
				v.addt
				v.visit nexpr
				v.finish_line
				v.addn
				if not expr_inline and nexpr != n_expr.last then v.addn
			end
		end

		assert v.indent == before
	end

	redef fun is_inlinable do
		if not super then return false
		if not collect_comments.is_empty then return false

		if not n_expr.is_empty then
			if n_expr.length > 1 then return false
			if not n_expr.first.is_inlinable then return false
		end

		return true
	end
end

redef class AIfExpr
	redef fun accept_pretty_printer(v) do
		var before = v.indent
		var can_inline = v.can_inline(self)
		v.visit n_kwif
		v.adds

		if v.can_inline(n_expr) then
			v.visit n_expr
			v.adds
		else
			v.visit n_expr
			v.forcen
			v.addt
		end

		# skip comments before `then` token
		while not v.current_token isa TKwthen do v.skip
		v.consume "then"
		var n_else = self.n_else

		if can_inline then
			v.adds
			if n_then != null then v.visit n_then

			if has_else(v) then
				n_else.force_inline = true
				v.adds
				v.consume "else"
				v.adds
				v.visit n_else
			else if n_then == null then
				v.add "end"
			end
			v.skip_to last_token.last_real_token_in_line
		else
			v.finish_line
			if was_inline then
				v.forcen
			else if not v.skip_empty and n_then != null and
				n_then.was_inline and
				n_then.location.line_end == location.line_start then
				v.forcen # Xymus fucking syntax
			else
				v.addn
			end
			v.indent += 1

			if n_then != null then
				if n_then isa ABlockExpr then
					n_then.force_block = true
					v.visit n_then
				else
					v.addt
					v.visit n_then
					if n_then.was_inline then
						v.forcen
					else
						v.addn
					end
				end
			end

			v.consume_comments

			# FIXME: for some unknown reasons, has_else can be true even if
			# there is no `else` keyword but a `end` instead.
			if has_else(v) and v.current_token isa TKwelse then

				v.indent -= 1
				v.addt
				v.consume "else"

				if n_else isa AIfExpr then
					n_else.force_block = true
					v.adds
					v.visit n_else
				else
					v.finish_line
					if was_inline then
						v.forcen
					else
						v.addn
					end
					v.indent += 1

					if n_else isa ABlockExpr then
						n_else.force_block = true
						v.visit n_else
					else
						v.addt
						v.visit n_else
						if n_else.was_inline then
							v.forcen
						else
							v.addn
						end
					end

					if last_token isa TKwend then
						v.catch_up last_token
						v.indent -= 1
						v.addt
						v.consume "end"
					else
						v.indent -= 1
						v.addt
						v.add "end"
					end
				end
			else
				if last_token.location >= v.current_token.location then v.catch_up last_token
				v.indent -= 1
				v.addt
				v.add "end"
				if v.current_token isa TKwend then v.skip
			end
		end

		assert v.indent == before
	end

	redef fun is_inlinable do
		if not super then return false
		if n_then != null and not n_then.is_inlinable then return false
		var n_else = self.n_else
		if (n_else isa ABlockExpr and not n_else.n_expr.is_empty) or
		   (not n_else isa ABlockExpr and n_else != null) then
			return false
		end
		if not collect_comments.is_empty then return false
		return true
	end

	# Does this `if` statement contains a `else` part?
	private fun has_else(v: PrettyPrinterVisitor): Bool do
		var n_else = n_else
		if n_else == null then return false
		var n_kwelse = collect_kwelse
		if n_kwelse == null then return false

		if n_else isa ABlockExpr then
			var comments: Array[TComment]

			if n_then == null then
				comments = v.collect_comments(n_expr.last_token, n_else.last_token)
			else
				comments = v.collect_comments(n_then.last_token, n_else.last_token)
			end

			if not comments.is_empty then return true
			return not n_else.n_expr.is_empty
		end

		return true
	end

	# Lookup for `else` token in `self`.
	private fun collect_kwelse: nullable TKwelse do
		var token = first_token

		while token != last_token do
			if token isa TKwelse then return token
			token = token.next_token
		end

		return null
	end
end

# Used to factorize work on loops.
private class ALoopHelper
	super AExpr

	fun loop_block: nullable ANode is abstract
	fun loop_label: nullable ANode is abstract

	fun visit_loop_block(v: PrettyPrinterVisitor) do
		var n_block = loop_block
		v.finish_line
		v.addn
		v.indent += 1

		if n_block isa ABlockExpr then
			n_block.force_block = true
			v.visit n_block
			v.catch_up n_block.n_kwend
			v.indent -= 1
			v.addt
			v.visit n_block.n_kwend
		else
			v.addt
			v.visit n_block
			v.addn
			v.indent -= 1
			v.addt
			v.add "end"
		end

		if loop_label != null then
			v.adds
			v.visit loop_label
		end
	end

	fun visit_loop_inline(v: PrettyPrinterVisitor) do
		var n_block = loop_block
		v.adds

		if n_block isa ABlockExpr then
			if n_block.n_expr.is_empty then
				v.visit n_block.n_kwend
			else
				v.visit n_block.n_expr.first
				v.current_token = n_block.n_kwend
				v.skip
			end
		else
			v.visit n_block
			if v.current_token isa TKwend then v.skip
		end

		if loop_label != null then
			v.adds
			v.visit loop_label
		end
	end

	redef fun is_inlinable do
		var n_block = loop_block
		if not super then return false
		if n_block isa ABlockExpr and not n_block.is_inlinable then return false
		if not collect_comments.is_empty then return false
		return true
	end
end

redef class ALoopExpr
	super ALoopHelper

	redef fun loop_block do return n_block
	redef fun loop_label do return n_label

	redef fun accept_pretty_printer(v) do
		var can_inline = v.can_inline(self)
		v.visit n_kwloop
		if can_inline then visit_loop_inline v else visit_loop_block v
	end
end

redef class AWhileExpr
	super ALoopHelper

	redef fun loop_block do return n_block
	redef fun loop_label do return n_label

	redef fun accept_pretty_printer(v) do
		var can_inline = v.can_inline(self)
		v.visit n_kwwhile
		v.adds
		v.visit n_expr
		v.adds
		v.visit n_kwdo
		if can_inline then visit_loop_inline v else visit_loop_block v
	end
end

redef class ADoExpr
	super ALoopHelper

	redef fun loop_block do return n_block
	redef fun loop_label do return n_label

	redef fun accept_pretty_printer(v) do
		var can_inline = v.can_inline(self)
		v.visit n_kwdo
		if can_inline then visit_loop_inline v else visit_loop_block v
	end
end

redef class AForExpr
	super ALoopHelper

	redef fun loop_block do return n_block
	redef fun loop_label do return n_label

	redef fun accept_pretty_printer(v) do
		var can_inline = v.can_inline(self)
		v.visit n_kwfor
		v.adds

		for n_group in n_groups do
			v.visit n_group
			if n_group != n_groups.last then v.add ", "

		end

		v.adds
		v.visit n_kwdo
		if can_inline then visit_loop_inline v else visit_loop_block v
	end
end

redef class AForGroup
	redef fun accept_pretty_printer(v) do
		for n_id in n_ids do
			v.visit n_id
			if n_id != n_ids.last then v.add ", "
		end

		v.adds
		v.consume "in"
		v.adds
		v.visit n_expr
	end
end

redef class ABreakExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_kwbreak

		if n_expr != null then
			v.adds
			v.visit n_expr
		end

		if n_label != null then
			v.adds
			v.visit n_label
		end
	end

	redef fun is_inlinable do return true
end

redef class AContinueExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_kwcontinue

		if n_expr != null then
			v.adds
			v.visit n_expr
		end

		if n_label != null then
			v.adds
			v.visit n_label
		end
	end

	redef fun is_inlinable do return true
end

# Calls

redef class ASendExpr
	redef fun is_inlinable do return true
end

redef class ACallExpr
	redef fun accept_pretty_printer(v) do
		var can_inline = v.can_inline(self)
		v.visit_recv n_expr

		if not n_expr isa AImplicitSelfExpr and not can_inline then
			v.forcen
			v.addt
		end

		v.visit n_qid

		if not n_args.n_exprs.is_empty then
			if is_stmt and n_args.n_exprs.length == 1 then
				v.adds
				if v.current_token isa TOpar then v.skip
				v.visit n_args.n_exprs.first
				if v.current_token isa TCpar then v.skip
			else
				v.visit_args n_args.n_exprs
			end
		end
	end

	# Is the call alone on its line?
	fun is_stmt: Bool do return parent isa ABlockExpr
end

redef class ACallAssignExpr
	redef fun accept_pretty_printer(v) do
		v.visit_recv n_expr
		v.visit n_qid

		if not n_args.n_exprs.is_empty then
			v.consume "("
			v.visit_list n_args.n_exprs
			v.consume ")"
		end

		v.adds
		v.consume "="
		v.adds
		v.visit n_value
	end
end

redef class ACallReassignExpr
	redef fun accept_pretty_printer(v) do
		v.visit_recv n_expr
		v.visit n_qid

		if not n_args.n_exprs.is_empty then
			v.consume "("
			v.visit_list n_args.n_exprs
			v.consume ")"
		end

		v.adds
		v.visit n_assign_op
		v.adds
		v.visit n_value
	end
end

redef class ABraExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr

		if not n_args.n_exprs.is_empty then
			v.consume "["
			v.visit_list n_args.n_exprs
			v.consume "]"
		end
	end
end

redef class ABraAssignExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr

		if not n_args.n_exprs.is_empty then
			v.consume "["
			v.visit_list n_args.n_exprs
			v.consume "]"
		end

		v.adds
		v.visit n_assign
		v.adds
		v.visit n_value
	end
end

redef class ABraReassignExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr

		if not n_args.n_exprs.is_empty then
			v.consume "["
			v.visit_list n_args.n_exprs
			v.consume "]"
		end

		v.adds
		v.visit n_assign_op
		v.adds
		v.visit n_value
	end
end

redef class AAssignMethid
	redef fun accept_pretty_printer(v) do
		v.visit n_id
		v.visit n_assign
	end
end

redef class ABraMethid
	redef fun accept_pretty_printer(v) do
		v.visit n_obra
		v.visit n_cbra
	end
end

redef class ABraassignMethid
	redef fun accept_pretty_printer(v) do
		v.visit n_obra
		v.visit n_cbra
		v.visit n_assign
	end
end

redef class AInitExpr
	redef fun accept_pretty_printer(v) do
		if not n_expr isa AImplicitSelfExpr then
			v.visit n_expr
			v.consume "."
		end

		v.visit n_kwinit
		v.visit_args n_args.n_exprs
	end
end

redef class ANewExpr
	redef fun accept_pretty_printer(v) do
		var can_inline = v.can_inline(self)
		v.visit n_kwnew
		v.adds
		v.visit n_type

		if n_qid != null then
			v.consume "."

			if not can_inline then
				v.forcen
				v.indent += 1
				v.addt
				v.indent -= 1
			end

			v.visit n_qid
		end

		v.visit_args n_args.n_exprs
	end

	redef fun is_inlinable do return true
end

# Attributes

redef class AAttrExpr
	redef fun accept_pretty_printer(v) do
		v.visit_recv n_expr
		v.visit n_id
	end

	redef fun is_inlinable do return true
end

redef class AAttrAssignExpr
	redef fun accept_pretty_printer(v) do
		v.visit_recv n_expr
		v.visit n_id
		v.adds
		v.visit n_assign
		v.adds
		v.visit n_value
	end
end

redef class AAttrReassignExpr
	redef fun accept_pretty_printer(v) do
		v.visit_recv n_expr
		v.visit n_id
		v.adds
		v.visit n_assign_op
		v.adds
		v.visit n_value
	end
end

# Exprs

redef class AVardeclExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_kwvar
		v.adds
		v.visit n_id

		if n_type != null then
			v.consume ":"
			v.adds
			v.visit n_type
		end

		if n_expr != null then
			v.adds
			v.consume "="
			v.adds
			v.visit n_expr
		end
	end

	redef fun is_inlinable do return true
end

redef class AVarAssignExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_id
		v.adds
		v.visit n_assign
		v.adds
		v.visit n_value
	end
end

redef class AAssertExpr
	redef fun accept_pretty_printer(v) do
		var can_inline = v.can_inline(self)
		v.visit n_kwassert

		if n_id != null then
			v.adds
			v.visit n_id
			v.consume ":"
		end

		v.adds
		v.visit n_expr
		var n_else = self.n_else

		if n_else != null then
			v.adds
			v.consume "else"

			if can_inline then
				v.adds
				v.visit n_else
			else
				v.addn
				v.indent += 1

				if n_else isa ABlockExpr then
					n_else.force_block = true
					v.visit n_else
					v.indent -= 1
					v.addt
					v.visit n_else.n_kwend
				else
					v.addt
					v.visit n_else
					v.forcen
					v.indent -= 1
					v.addt
					v.add "end"
				end
			end
		end
	end

	redef fun is_inlinable do
		if not super then return false
		if n_else != null and not n_else.is_inlinable then return false
		return true
	end
end

redef class AReturnExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_kwreturn

		if n_expr != null then
			v.adds
			v.visit n_expr
		end
	end
end

redef class ASuperExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_kwsuper

		if not n_args.n_exprs.is_empty then
			if is_stmt and n_args.n_exprs.length == 1 then
				v.adds
				if v.current_token isa TOpar then v.skip
				v.visit n_args.n_exprs.first
				if v.current_token isa TCpar then v.skip
			else
				v.visit_args n_args.n_exprs
			end
		end
	end

	# Is the call alone on its line?
	fun is_stmt: Bool do return self.first_token.is_starting_line

	redef fun is_inlinable do return true
end

redef class AOnceExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_kwonce
		v.adds
		v.visit n_expr
	end

	redef fun is_inlinable do return true
end

redef class AAbortExpr
	redef fun accept_pretty_printer(v) do v.visit n_kwabort
	redef fun is_inlinable do return true
end

redef class ANotExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_kwnot
		v.adds
		v.visit n_expr
	end
end

redef class AAsCastExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.consume "."
		v.visit n_kwas
		v.visit n_opar
		v.visit n_type
		v.visit n_cpar
	end
end

redef class AAsNotnullExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.consume "."
		v.visit n_kwas
		v.visit n_opar
		v.visit n_kwnot
		v.adds
		v.visit n_kwnull
		v.visit n_cpar
	end
end

# Binops

# Used to factorize work on Or, And, Implies and Binop expressions.
private class ABinOpHelper
	super AExpr

	fun bin_expr1: AExpr is abstract
	fun bin_expr2: AExpr is abstract

	# Operator string
	fun bin_op: String is abstract

	redef fun accept_pretty_printer(v) do
		var can_inline = v.can_inline(self)

		if not can_inline then
			if (self isa ABinopExpr and bin_expr1 isa ABinopExpr) or
			   (self isa AAndExpr and (bin_expr1 isa AAndExpr or bin_expr1 isa AOrExpr)) or
			   (self isa AOrExpr and (bin_expr1 isa AAndExpr or bin_expr1 isa AOrExpr))
			then
				bin_expr1.force_block = true
			end
		end

		v.visit bin_expr1
		v.adds
		v.consume bin_op

		if can_inline then
			v.adds
			v.visit bin_expr2
		else
			v.forcen
			v.indent += 1
			v.addt
			v.indent -= 1
			v.visit bin_expr2
		end
	end
end

redef class AAndExpr
	super ABinOpHelper

	redef fun bin_expr1 do return n_expr
	redef fun bin_expr2 do return n_expr2
	redef fun bin_op do return "and"
end

redef class AOrExpr
	super ABinOpHelper

	redef fun bin_expr1 do return n_expr
	redef fun bin_expr2 do return n_expr2
	redef fun bin_op do return "or"
end

redef class AImpliesExpr
	super ABinOpHelper

	redef fun bin_expr1 do return n_expr
	redef fun bin_expr2 do return n_expr2
	redef fun bin_op do return "implies"
end

redef class ABinopExpr
	super ABinOpHelper

	redef fun bin_expr1 do return n_expr
	redef fun bin_expr2 do return n_expr2
	redef fun bin_op do return operator
end

redef class AIsaExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.adds
		v.consume "isa"
		v.adds
		v.visit n_type
	end
end

redef class AOrElseExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.adds
		v.consume "or"
		v.adds
		v.consume "else"
		v.adds
		v.visit n_expr2
	end

	redef fun is_inlinable do return true
end

# Syntax

redef class AUnaryopExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_op
		v.visit n_expr
	end
end

redef class ANullExpr
	redef fun accept_pretty_printer(v) do v.visit n_kwnull
	redef fun is_inlinable do return true
end

redef class AParExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_opar
		v.visit n_expr
		v.visit n_cpar
	end
end

redef class AArrayExpr
	redef fun accept_pretty_printer(v) do
		v.consume "["
		v.visit_list n_exprs
		if n_type != null then
			v.consume ":"
			v.adds
			v.visit n_type
		end
		v.consume "]"
	end
end

redef class ACrangeExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_obra
		v.visit n_expr
		v.consume ".."
		v.visit n_expr2
		v.visit n_cbra
	end
end

redef class AOrangeExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_obra
		v.visit n_expr
		v.consume ".."
		v.visit n_expr2
		v.visit n_cbra
	end
end

# Strings

redef class AStringFormExpr
	redef fun accept_pretty_printer(v) do
		if not v.break_strings then
			# n_string.force_inline = true
			v.visit n_string
			return
		end
		if v.can_inline(self) then
			n_string.force_inline = true
			v.visit n_string
		else
			var text = n_string.text
			var i = 0

			while i < text.length do
				v.add text[i].to_s

				if v.max_size > 0 and v.current_length >= v.max_size and i <= text.length - 3 then
					v.add "\" +"
					if was_inline then
						v.forcen
					else
						v.addn
					end
					v.indent += 1
					v.addt
					v.indent -= 1
					v.add "\""
				end

				i += 1
			end

			v.current_token = n_string.next_token
		end
	end
end

redef class ASuperstringExpr
	redef fun accept_pretty_printer(v) do
		for n_expr in n_exprs do
			if not v.break_strings then
				n_expr.force_inline = true
			end
			v.visit n_expr
		end
	end

	redef fun must_be_inline do
		if super then return true

		if not n_exprs.is_empty then
			var first = n_exprs.first
			return first isa AStringFormExpr and first.n_string.text.has_prefix("\"\"\"")
		end

		return false
	end
end
