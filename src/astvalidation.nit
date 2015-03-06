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

# Check the consitency of AST
module astvalidation

intrude import parser
import astbuilder

class ASTValidationVisitor
	super Visitor
	redef fun visit(node)
	do
		node.accept_ast_validation(self)
	end
	private var path = new List[ANode]
	private var seen = new HashSet[ANode]
end

redef class ANode
	private fun accept_ast_validation(v: ASTValidationVisitor)
	do
		var parent = self.parent
		var path = v.path

		if path.length > 0 then
			var path_parent = v.path.first
			if parent == null then
				self.parent = path_parent
				#debug "PARENT: expected parent: {path_parent}"
				v.seen.add(self)
			else if parent != path_parent then
				self.parent = path_parent
				if v.seen.has(self) then
					debug "DUPLICATE (NOTATREE): already seen node with parent {parent} now with {path_parent}."
				else
					v.seen.add(self)
					debug "PARENT: expected parent: {path_parent}, got {parent}"
				end
			end
		end

		if not isset _location then
			#debug "LOCATION: unlocated node {v.path.join(", ")}"
			_location = self.parent.location
		end

		path.unshift(self)
		visit_all(v)
		path.shift
	end
end

redef class AAnnotation
	redef fun accept_ast_validation(v)
	do
		# Do not enter in annotations
	end
end

redef class AExpr
	redef fun accept_ast_validation(v)
	do
		super
		if mtype == null and not is_typed then
			debug "TYPING: untyped expression"
		end
	end
end

redef class APlaceholderExpr
	redef fun accept_ast_validation(v)
	do
		super
		debug "PARENT: remaining placeholder"
	end
end
