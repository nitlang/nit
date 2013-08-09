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

# Metrics about the nodes and identifiers in the AST
module ast_metrics
import modelbuilder
private import metrics_base
import frontend

redef class ToolContext
	var ast_metrics_phase = new AstMetricsPhase(self, null)
end

private class AstMetricsPhase
	super Phase
	var node_counter = new Counter[String]
	var id_counter = new Counter[String]

	redef fun process_mainmodule(mainmodule)
	do
		if not toolcontext.opt_ast.value and not toolcontext.opt_all.value then return
		print "--- AST Metrics ---"
		# Visit all the source code to collect data
		var visitor = new AstMetricsVisitor(self)
		for nmodule in toolcontext.modelbuilder.nmodules do
			visitor.enter_visit(nmodule)
		end
		print "## All nodes of the AST"
		node_counter.print_summary
		node_counter.print_elements(10)
		print "## All identifiers of the AST"
		id_counter.print_summary
		id_counter.print_elements(10)
	end
end

private class AstMetricsVisitor
	super Visitor

	var phase: AstMetricsPhase
	init(phase: AstMetricsPhase) do self.phase = phase

	redef fun visit(n)
	do
		n.visit_all(self)
		phase.node_counter.inc(n.class_name)
		if n isa TId or n isa TAttrid or n isa TClassid then
			assert n isa Token
			phase.id_counter.inc(n.text)
		end
	end
end
