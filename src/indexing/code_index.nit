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

# An index that contains Nit code
#
# Model entities are indexed by their ANode.
#
# Vectorization is based on model usage such as:
# * modules importation
# * classes spcialization and refinement
# * methods calls and refinements
#
# Example:
# ~~~nitish
# # Create the index
# var index = new CodeIndex(toolcontext)
# for mentity in mentities do
#	index.index_mentity(mentity)
# end
#
# # Match a piece of code
# var matches = index.match_code("print \"Hello, World!\"")
# for match in matches do
#	print match
# end
# ~~~
module code_index

import vsm
import semantize
import parser_util

# Index for Nit doc
class CodeIndex
	super VSMIndex

	redef type DOC: CodeDocument

	# ToolContext used to parse pieces of code
	var toolcontext: ToolContext

	# Index `mentity`
	fun index_mentity(mentity: MEntity) do
		var terms = vectorize_mentity(mentity)
		var doc = new CodeDocument(mentity, terms)
		index_document(doc, false)
	end

	# Match `code` with the index
	fun match_code(code: String): Array[IndexMatch[DOC]] do
		var node = parse_code(code)
		if node == null then return new Array[IndexMatch[DOC]]
		return match_node(node)
	end

	# Match `node` with the index
	fun match_node(node: ANode): Array[IndexMatch[DOC]] do
		var vector = vectorize_node(node)
		return match_vector(vector)
	end

	# Parse a piece of code
	private fun parse_code(code: String): nullable AModule do
		# Try to parse code
		var node = toolcontext.parse_something(code)
		if not node isa AModule then return null

		# Load code into model
		var mbuilder = toolcontext.modelbuilder
		mbuilder.load_rt_module(null, node, "tmp")
		mbuilder.run_phases
		return node
	end

	# Transform `node` in a Vector
	private fun vectorize_node(node: ANode): Vector do
		var visitor = new CodeIndexVisitor
		visitor.enter_visit(node)
		return visitor.vector
	end

	# Transform `mentity` in a Vector
	private fun vectorize_mentity(mentity: MEntity): Vector do
		var node = toolcontext.modelbuilder.mentity2node(mentity)
		if node == null then return new Vector
		return vectorize_node(node)
	end
end

# A specific document for mentities code
class CodeDocument
	super Document
	autoinit(mentity, terms_count)

	# MEntity related to this document
	var mentity: MEntity

	redef var title = mentity.full_name is lazy

	redef var uri = mentity.location.to_s is lazy
end

# Code index visitor
#
# Used to build a VSM Vector from a Nit ANode.
private class CodeIndexVisitor
	super Visitor

	var vector = new Vector

	redef fun visit(node) do
		node.accept_code_index_visitor(self)
	end
end

redef class ANode
	private fun accept_code_index_visitor(v: CodeIndexVisitor) do
		visit_all(v)
	end
end

redef class AStdImport
	redef fun accept_code_index_visitor(v) do
		var mmodule = self.mmodule
		if mmodule != null then
			v.vector.inc "import#{mmodule.full_name}"
		end
	end
end

redef class AStdClassdef
	redef fun accept_code_index_visitor(v) do
		var mclassdef = self.mclassdef
		if mclassdef != null then
			if not mclassdef.is_intro then
				v.vector.inc "redef#{mclassdef.full_name}"
				v.vector.inc "redef#{mclassdef.mclass.full_name}"
			end
		end
		visit_all(v)
	end
end

redef class ASuperPropdef
	redef fun accept_code_index_visitor(v) do
		var mtype = self.n_type.mtype
		if mtype isa MClassType then
			v.vector.inc "super#{mtype.mclass.intro.full_name}"
			v.vector.inc "super#{mtype.mclass.full_name}"
		end
	end
end

redef class APropdef
	redef fun accept_code_index_visitor(v) do
		var mpropdef = self.mpropdef
		if mpropdef != null then
			if not mpropdef.is_intro then
				v.vector.inc "redef#{mpropdef.mproperty.intro.full_name}"
				v.vector.inc "redef#{mpropdef.mproperty.full_name}"
			end
		end
		visit_all(v)
	end
end

redef class ASendExpr
	redef fun accept_code_index_visitor(v) do
		var callsite = self.callsite
		if callsite != null then
			var args = callsite.signaturemap.as(not null).map.length
			v.vector.inc "call#{callsite.mpropdef.full_name}({args})"
			v.vector.inc "call#{callsite.mpropdef.mproperty.full_name}({args})"
			v.vector.inc "call#{callsite.mpropdef.mclassdef.full_name}({args})"
			v.vector.inc "call#{callsite.mpropdef.mclassdef.mclass.full_name}({args})"
		end
		visit_all(v)
	end
end

redef class ANewExpr
	redef fun accept_code_index_visitor(v) do
		var callsite = self.callsite
		if callsite != null then
			var args = callsite.signaturemap.as(not null).map.length
			v.vector.inc "call#{callsite.mpropdef.full_name}({args})"
			v.vector.inc "call#{callsite.mpropdef.mproperty.full_name}({args})"
			v.vector.inc "new#{callsite.mpropdef.mclassdef.full_name}({args})"
			v.vector.inc "new#{callsite.mpropdef.mclassdef.mclass.full_name}({args})"
		end
		visit_all(v)
	end
end
