# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# Intraprocedural static flow.
module flow

import parser
import toolcontext
import scope
import phase

redef class ToolContext
	var flow_phase: Phase = new FlowPhase(self, [scope_phase])
end

private class FlowPhase
	super Phase

	redef fun process_npropdef(npropdef) do npropdef.do_flow(toolcontext)
end

# The visitor that derermine flowcontext for nodes
private class FlowVisitor
	super Visitor

	var current_flow_context: FlowContext

	var toolcontext: ToolContext

	init(toolcontext: ToolContext)
	do
		self.toolcontext = toolcontext
		current_flow_context = new FlowContext
		flows.add(current_flow_context)
		current_flow_context.is_start = true
	end

	var first: nullable ANode

	redef fun visit(node)
	do
		if first == null then first = node

		if current_flow_context.node == null then current_flow_context.node = node
		node.accept_flow_visitor(self)
		if node isa AExpr then
			var flow = self.current_flow_context
			node.after_flow_context = flow
			# Force the creation of a specific merge after the analysis of the node.
			if flow.when_true != flow or flow.when_false != flow then
				self.make_sub_flow
				self.current_flow_context.name = "AUTOSUB"
			end
		end

		if first == node then
			#self.printflow
		end
	end

	fun visit_expr(node: AExpr): FlowContext
	do
		self.enter_visit(node)
		return node.after_flow_context.as(not null)
	end

	var flows: Array[FlowContext] = new Array[FlowContext]

	fun printflow
	do
		var file = new OFStream.open("flow.dot")
		file.write("digraph \{\n")
		for f in flows do
			var s = ""
			if f.node isa AExpr then
				s = "\\nmain={f.node.as(AExpr).after_flow_context.object_id}"
			end
			file.write "F{f.object_id} [label=\"{f.object_id}\\n{f.node.location}\\n{f.node.class_name}\\n{f.name}{s}\"];\n"
			for p in f.previous do
				file.write "F{p.object_id} -> F{f.object_id};\n"
			end
			if f.when_true != f then
				file.write "F{f.object_id} -> F{f.when_true.object_id}[label=TRUE, style=dotted];\n"
			end
			if f.when_false != f then
				file.write "F{f.object_id} -> F{f.when_false.object_id}[label=FALSE,style=dotted];\n"
			end
		end
		file.write("\}\n")
		file.close
	end


	fun make_sub_flow: FlowContext
	do
		var flow = new FlowContext
		flows.add(flow)
		flow.node = current_node
		flow.add_previous(self.current_flow_context)
		self.current_flow_context = flow
		return flow
	end

	fun make_merge_flow(flow1, flow2: FlowContext): FlowContext
	do
		var flow = new FlowContext
		flows.add(flow)
		flow.node = current_node
		flow.add_previous(flow1)
		flow.add_previous(flow2)
		self.current_flow_context = flow
		return flow
	end

	fun make_true_false_flow(true_flow, false_flow: FlowContext): FlowContext
	do
		var flow = new FlowContext
		flows.add(flow)
		flow.node = current_node
		flow.add_previous(true_flow)
		flow.add_previous(false_flow)
		flow.when_true = true_flow
		flow.when_false = false_flow
		self.current_flow_context = flow
		return flow
	end

	fun make_sub_true_false_flow: FlowContext
	do
		var orig_flow = self.current_flow_context
		var true_flow = new FlowContext
		flows.add(true_flow)
		true_flow.node = current_node
		true_flow.add_previous(orig_flow)
		true_flow.name = "TRUE"
		var false_flow = new FlowContext
		flows.add(false_flow)
		false_flow.node = current_node
		false_flow.add_previous(orig_flow)
		false_flow.name = "FALSE"
		return make_true_false_flow(true_flow, false_flow)
	end

	fun make_unreachable_flow: FlowContext
	do
		var flow = new FlowContext
		flows.add(flow)
		flow.node = current_node
		flow.add_previous(self.current_flow_context)
		flow.is_marked_unreachable = true
		self.current_flow_context = flow
		return flow
	end

	fun merge_continues_to(before_loop: FlowContext, escapemark: nullable EscapeMark)
	do
		if escapemark == null then return
		for b in escapemark.continues do
			var before = b.before_flow_context
			if before == null then continue # Forward error
			before_loop.add_loop(before)
		end
	end

	fun merge_breaks(escapemark: nullable EscapeMark)
	do
		if escapemark == null then return
		for b in escapemark.breaks do
			var before = b.before_flow_context
			if before == null then continue # Forward error
			self.make_merge_flow(self.current_flow_context, before)
		end
	end
end

# A Node in the static flow graph.
# A same FlowContext can be shared by more than one ANode.
class FlowContext
	# The reachable previous flow
	var previous: Array[FlowContext] = new Array[FlowContext]

	# Additional reachable flow that loop up to self.
	# Loops apears in 'loop', 'while', 'for', closure and with 'continue'
	var loops: Array[FlowContext] = new Array[FlowContext]

	private var is_marked_unreachable: Bool = false

	# Is the flow dead?
	fun is_unreachable: Bool
	do
		# Are we explicitely marked unreachable?
		if self.is_marked_unreachable then return true

		# Are we the starting flow context?
		if is_start then return false

		# De we have a reachable previous?
		if previous.length == 0 then return true
		return false
	end

	# Flag to avoid repeaed errors
	var is_already_unreachable: Bool = false

	# Mark that self is the starting flow context.
	# Such a context is reachable even if there is no previous flow
	var is_start: Bool = false

	# The node that introduce the flow (for debuging)
	var node: nullable ANode = null

	# Additional information for the flor (for debuging)
	var name: String = ""

	# The sub-flow to use if the associated expr is true
	var when_true: FlowContext = self

	# The sub-flow to use if the associated expr is true
	var when_false: FlowContext = self

	# Add a previous flow (iff it is reachable)
	private fun add_previous(flow: FlowContext)
	do
		if not flow.is_unreachable and not previous.has(flow) then
			previous.add(flow)
		end
	end

	# Add a previous loop flow (iff it is reachable)
	private fun add_loop(flow: FlowContext)
	do
		if not flow.is_unreachable and not previous.has(flow) then
			loops.add(flow)
		end
	end

end

redef class ANode
	private fun accept_flow_visitor(v: FlowVisitor)
	do
		self.visit_all(v)
	end
end

redef class APropdef
	# The entry point of the whole flow analysis
	fun do_flow(toolcontext: ToolContext)
	do
		var v = new FlowVisitor(toolcontext)
		v.enter_visit(self)
	end


	# The starting flow
	var before_flow_context: nullable FlowContext

	# The ending flow
	var after_flow_context: nullable FlowContext

	redef fun accept_flow_visitor(v)
	do
		self.before_flow_context = v.current_flow_context
		super
		self.after_flow_context = v.current_flow_context
	end
end

redef class AExpr
	# The flow after the full evaluation of the expression/statement
	var after_flow_context: nullable FlowContext
end

redef class AVarAssignExpr
	redef fun accept_flow_visitor(v)
	do
		super
		self.after_flow_context = v.make_sub_flow
	end
end

redef class AReassignFormExpr
	redef fun accept_flow_visitor(v)
	do
		super
		self.after_flow_context = v.make_sub_flow
	end
end

redef class ABlockExpr
	redef fun accept_flow_visitor(v)
	do
		for e in n_expr do
			if not v.current_flow_context.is_unreachable then
				v.enter_visit(e)
			else if not v.current_flow_context.is_already_unreachable then
				v.current_flow_context.is_already_unreachable = true
				v.toolcontext.error(e.hot_location, "Error: unreachable statement.")
			end
		end
	end
end

redef class AReturnExpr
	redef fun accept_flow_visitor(v)
	do
		super
		v.make_unreachable_flow
	end
end

redef class AContinueExpr
	# The flow just before it become unreachable
	fun before_flow_context: nullable FlowContext
	do
		var after = self.after_flow_context
		if after == null then return null
		return after.previous.first
	end
	redef fun accept_flow_visitor(v)
	do
		super
		v.make_unreachable_flow
	end
end

redef class ABreakExpr
	# The flow just before it become unreachable
	fun before_flow_context: nullable FlowContext
	do
		var after = self.after_flow_context
		if after == null then return null
		return after.previous.first
	end
	redef fun accept_flow_visitor(v)
	do
		super
		v.make_unreachable_flow
	end
end

redef class AAbortExpr
	redef fun accept_flow_visitor(v)
	do
		super
		v.make_unreachable_flow
	end
end

redef class ADoExpr
	redef fun accept_flow_visitor(v)
	do
		super
		v.merge_breaks(self.escapemark)
	end
end

redef class AIfExpr
	redef fun accept_flow_visitor(v)
	do
		var after_expr = v.visit_expr(self.n_expr)

		v.current_flow_context = after_expr.when_true
		v.enter_visit(self.n_then)
		var after_then = v.current_flow_context

		v.current_flow_context = after_expr.when_false
		v.enter_visit(self.n_else)
		var after_else = v.current_flow_context

		v.make_merge_flow(after_then, after_else)
	end
end

redef class AIfexprExpr
	redef fun accept_flow_visitor(v)
	do
		var after_expr = v.visit_expr(self.n_expr)

		v.current_flow_context = after_expr.when_true
		v.enter_visit(self.n_then)
		var after_then = v.current_flow_context

		v.current_flow_context = after_expr.when_false
		v.enter_visit(self.n_else)
		var after_else = v.current_flow_context

		v.make_merge_flow(after_then, after_else)
	end
end

redef class AWhileExpr
	redef fun accept_flow_visitor(v)
	do
		var before_loop = v.make_sub_flow

		var after_expr = v.visit_expr(self.n_expr)

		v.current_flow_context = after_expr.when_true
		v.enter_visit(self.n_block)
		var after_block = v.current_flow_context

		before_loop.add_loop(after_block)
		v.merge_continues_to(after_block, self.escapemark)

		v.current_flow_context = after_expr.when_false
		v.merge_breaks(self.escapemark)
	end
end

redef class ALoopExpr
	redef fun accept_flow_visitor(v)
	do
		var before_loop = v.make_sub_flow

		v.enter_visit(self.n_block)

		var after_block = v.current_flow_context

		before_loop.add_loop(after_block)
		v.merge_continues_to(after_block, self.escapemark)

		v.make_unreachable_flow
		v.merge_breaks(self.escapemark)
	end
end

redef class AForExpr
	redef fun accept_flow_visitor(v)
	do
		v.enter_visit(self.n_expr)

		var before_loop = v.make_sub_flow

		v.enter_visit(self.n_block)

		var after_block = v.current_flow_context

		before_loop.add_loop(after_block)
		v.merge_continues_to(after_block, self.escapemark)

		v.make_merge_flow(v.current_flow_context, before_loop)
		v.merge_breaks(self.escapemark)
	end
end

redef class AAssertExpr
	redef fun accept_flow_visitor(v)
	do
		var after_expr = v.visit_expr(self.n_expr)

		v.current_flow_context = after_expr.when_false
		v.enter_visit(n_else)
		# the after context of n_else is a dead end, so we do not care

		v.current_flow_context = after_expr.when_true
	end
end

redef class AOrExpr
	redef fun accept_flow_visitor(v)
	do
		var after_expr = v.visit_expr(self.n_expr)

		v.current_flow_context = after_expr.when_false
		var after_expr2 = v.visit_expr(self.n_expr2)

		var merge_true = v.make_merge_flow(after_expr.when_true, after_expr2.when_true)
		merge_true.name = "OR TRUE"

		v.make_true_false_flow(merge_true, after_expr2.when_false)
	end
end

redef class AAndExpr
	redef fun accept_flow_visitor(v)
	do
		var after_expr = v.visit_expr(self.n_expr)

		v.current_flow_context = after_expr.when_true
		var after_expr2 = v.visit_expr(self.n_expr2)

		var merge_false = v.make_merge_flow(after_expr.when_false, after_expr2.when_false)
		merge_false.name = "AND FALSE"

		v.make_true_false_flow(after_expr2.when_true, merge_false)
	end
end

redef class ANotExpr
	redef fun accept_flow_visitor(v)
	do
		var after_expr = v.visit_expr(self.n_expr)

		v.make_true_false_flow(after_expr.when_false, after_expr.when_true)
	end
end

redef class AOrElseExpr
	redef fun accept_flow_visitor(v)
	do
		super
	end
end

redef class AEqExpr
	redef fun accept_flow_visitor(v)
	do
		super
		v.make_sub_true_false_flow
	end
end


redef class ANeExpr
	redef fun accept_flow_visitor(v)
	do
		super
		v.make_sub_true_false_flow
	end
end

redef class AClosureCallExpr
	redef fun accept_flow_visitor(v)
	do
		super
		# FIXME: break closure call?
		# v.make_unreachable_flow
	end
end

redef class AClosureDef
	redef fun accept_flow_visitor(v)
	do
		var before_loop = v.make_sub_flow

		v.enter_visit(self.n_expr)

		var after_block = v.current_flow_context
		before_loop.add_loop(after_block)

		v.make_merge_flow(v.current_flow_context, before_loop)
	end
end

redef class AIsaExpr
	redef fun accept_flow_visitor(v)
	do
		super
		v.make_sub_true_false_flow
	end
end

redef class AProxyExpr
	redef fun accept_flow_visitor(v)
	do
		var after_expr = v.visit_expr(self.n_expr)
		v.current_flow_context = after_expr
	end
end
