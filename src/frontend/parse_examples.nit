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

# Example parsing
#
# This module parses example from mentities annotated with `is example`.
#
# TODO rank examples
module parse_examples

import counter
import typing
import parse_annotations
import model::model_examples

redef class ToolContext

	# Examples parsing phase
	var examples_phase: Phase = new ExamplesPhase(self,
		[typing_phase, parse_annotations_phase])
end

# Parse examples from modules, classdefs and propdefs
#
# For each node annotated with `is example` we parse the example and associate
# it with existing model entities.
#
# Association between examples and mentities is based on:
# `MModule`: Used in `import`
# `MClassDef`: Used in `super`, redefined class, init or other method called
# `MPropDef`: Used in `super`, redefined property, called
private class ExamplesPhase
	super Phase

	redef fun process_nmodule(nmodule) do
		var mmodule = nmodule.mmodule
		if mmodule == null then return

		if not mmodule.has_annotation("example") then return

		process_example(mmodule, nmodule)
	end

	redef fun process_nclassdef(nclassdef) do
		var mclassdef = nclassdef.mclassdef
		if mclassdef == null then return

		if not mclassdef.has_annotation("example") and not mclassdef.mmodule.is_example then return

		process_example(mclassdef, nclassdef)
	end

	redef fun process_npropdef(npropdef) do
		var mpropdef = npropdef.mpropdef
		if mpropdef == null then return

		if not mpropdef.has_annotation("example") and not mpropdef.mclassdef.is_example then return

		process_example(mpropdef, npropdef)
	end

	# Process an mentity as an MExample
	#
	# This method parses the mentity node and link the mentity to possible
	# examplified entities.
	fun process_example(example_mentity: MEntity, node: ANode) do
		var visitor = new ExampleVisitor(toolcontext)
		visitor.enter_visit(node)
		var sorted = visitor.counter.sort.reversed

		var example = new MExample(example_mentity)
		example.node = node
		for mentity in sorted do
			example.example_for[mentity] = visitor.counter[mentity]
			if not mentity.examples.has(example) then mentity.examples.add example
		end
	end
end

redef class MExample
	# AST node containing the example code
	var node: nullable ANode = null is writable
end

# Example parsing

# Visit examples to find what they are an example for.
private class ExampleVisitor
	super Visitor

	var counter = new Counter[MEntity]

	# The toolcontext is our entree point to most services
	var toolcontext: ToolContext

	redef fun visit(node) do
		node.accept_example_visitor(self)
	end
end

redef class ANode
	private fun accept_example_visitor(v: ExampleVisitor) do visit_all(v)
end

redef class ANewExpr
	redef fun accept_example_visitor(v) do
		var recvtype = self.recvtype
		if recvtype != null then
			v.counter.inc recvtype.mclass
			v.counter.inc recvtype.mclass.intro
		end
		visit_all(v)
	end
end

redef class AStdImport
	redef fun accept_example_visitor(v) do
		var mmodule = self.mmodule
		if mmodule != null then
			v.counter.inc mmodule

			var mgroup = mmodule.mgroup
			if mgroup != null then
				v.counter.inc mgroup
				v.counter.inc mgroup.mpackage
			end
		end
	end
end

redef class AStdClassdef
	redef fun accept_example_visitor(v) do
		var mclassdef = self.mclassdef
		if mclassdef == null then return

		if not mclassdef.is_intro then
			v.counter.inc mclassdef.mclass.intro
		end
		visit_all(v)
	end
end

redef class APropdef
	redef fun accept_example_visitor(v) do
		var mpropdef = self.mpropdef
		if mpropdef == null then return

		if not mpropdef.is_intro then
			v.counter.inc mpropdef.mproperty.intro.mclassdef.mclass
			v.counter.inc mpropdef.mproperty.intro.mclassdef
			v.counter.inc mpropdef.mproperty.intro
		end
		visit_all(v)
	end
end

redef class ASuperPropdef
	redef fun accept_example_visitor(v) do
		var mtype = self.n_type.mtype
		if mtype isa MClassType then
			v.counter.inc mtype.mclass
			v.counter.inc mtype.mclass.intro
		end
		visit_all(v)
	end
end

redef class ASendExpr
	redef fun accept_example_visitor(v) do
		var callsite = self.callsite
		if callsite == null then return
		v.counter.inc callsite.mpropdef
		v.counter.inc callsite.mpropdef.mproperty
		v.counter.inc callsite.mpropdef.mclassdef
		v.counter.inc callsite.mpropdef.mclassdef.mclass
		visit_all(v)
	end
end
