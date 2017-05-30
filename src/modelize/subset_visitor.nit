# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Visitor of classes with the `subset` annotation.
#
# TODO: Will become useless (and wrong) once the `subset` annotation is replaced
# by a keyword.
module subset_visitor

import parser_nodes

# Visitor of classes with the `subset` annotation.
abstract class SubsetVisitor
	super Visitor

	redef fun visit(node) do
		node.accept_subset_visitor(self)
	end

	# Process a class subset.
	#
	# `annotation` corresponds to the `subset` annotation.
	protected fun visit_subset(n_classdef: AStdClassdef, annotation: AAnnotPropdef) is abstract
end

redef class ANode
	private fun accept_subset_visitor(v: SubsetVisitor) do end
end

redef class AAnnotPropdef
	redef fun accept_subset_visitor(v) do
		if n_atid.n_id.text == "subset" then
			v.visit_subset(self.parent.as(AStdClassdef), self)
		end
	end
end
