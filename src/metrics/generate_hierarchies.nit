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

# Create dot files for various hierarchies of a model.
# See graphviz http://www.graphviz.org/
module generate_hierarchies

import model
private import metrics_base
import frontend

redef class ToolContext
	var generate_hierarchies_phase: Phase = new GenerateHierarchyPhase(self, null)
end

private class GenerateHierarchyPhase
	super Phase

	redef fun process_mainmodule(mainmodule)
	do
		if not toolcontext.opt_generate_hyperdoc.value and not toolcontext.opt_all.value then return
		var model = toolcontext.modelbuilder.model
		generate_module_hierarchy(toolcontext, model)
		generate_classdef_hierarchy(toolcontext, model)
		generate_class_hierarchy(toolcontext, mainmodule)
	end
end

# Create a dot file representing the module hierarchy of a model.
# Importation relation is represented with arrow
# Nesting relation is represented with nested boxes
fun generate_module_hierarchy(toolcontext: ToolContext, model: Model)
do
	var buf = new FlatBuffer
	buf.append("digraph \{\n")
	buf.append("node [shape=box];\n")
	buf.append("rankdir=BT;\n")
	for mmodule in model.mmodules do
		if mmodule.direct_owner == null then
			generate_module_hierarchy_for(mmodule, buf)
		end
	end
	for mmodule in model.mmodules do
		for s in mmodule.in_importation.direct_greaters do
			buf.append("\"{mmodule}\" -> \"{s}\";\n")
		end
	end
	buf.append("\}\n")
	var f = new OFStream.open(toolcontext.output_dir.join_path("module_hierarchy.dot"))
	f.write(buf.to_s)
	f.close
end

# Helper function for `generate_module_hierarchy`.
# Create graphviz nodes for the module and recusrively for its nested modules
private fun generate_module_hierarchy_for(mmodule: MModule, buf: Buffer)
do
	if mmodule.in_nesting.direct_greaters.is_empty then
		buf.append("\"{mmodule.name}\";\n")
	else
		buf.append("subgraph \"cluster_{mmodule.name}\" \{label=\"\"\n")
		buf.append("\"{mmodule.name}\";\n")
		for s in mmodule.in_nesting.direct_greaters do
			generate_module_hierarchy_for(s, buf)
		end
		buf.append("\}\n")
	end
end

# Create a dot file representing the class hierarchy of a model.
fun generate_class_hierarchy(toolcontext: ToolContext, mmodule: MModule)
do
	var buf = new FlatBuffer
	buf.append("digraph \{\n")
	buf.append("node [shape=box];\n")
	buf.append("rankdir=BT;\n")
	var hierarchy = mmodule.flatten_mclass_hierarchy
	for mclass in hierarchy do
		buf.append("\"{mclass}\" [label=\"{mclass}\"];\n")
		for s in hierarchy[mclass].direct_greaters do
			buf.append("\"{mclass}\" -> \"{s}\";\n")
		end
	end
	buf.append("\}\n")
	var f = new OFStream.open(toolcontext.output_dir.join_path("class_hierarchy.dot"))
	f.write(buf.to_s)
	f.close
end

# Create a dot file representing the classdef hierarchy of a model.
# For a simple user of the model, the classdef hierarchy is not really usefull, it is more an internal thing.
fun generate_classdef_hierarchy(toolcontext: ToolContext, model: Model)
do
	var buf = new FlatBuffer
	buf.append("digraph \{\n")
	buf.append("node [shape=box];\n")
	buf.append("rankdir=BT;\n")
	for mmodule in model.mmodules do
		for mclassdef in mmodule.mclassdefs do
			buf.append("\"{mclassdef} {mclassdef.bound_mtype}\" [label=\"{mclassdef.mmodule}\\n{mclassdef.bound_mtype}\"];\n")
			for s in mclassdef.in_hierarchy.direct_greaters do
				buf.append("\"{mclassdef} {mclassdef.bound_mtype}\" -> \"{s} {s.bound_mtype}\";\n")
			end
		end
	end
	buf.append("\}\n")
	var f = new OFStream.open(toolcontext.output_dir.join_path("classdef_hierarchy.dot"))
	f.write(buf.to_s)
	f.close
end
