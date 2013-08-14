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

private import typing
intrude import parser
import astbuilder

class ASTValidationVisitor
	super Visitor
	redef fun visit(node)
	do
		path.unshift(node)
		node.accept_ast_validation(self)
		path.shift
	end
	private var path = new List[ANode]
	private var seen = new HashSet[ANode]
end

redef class ANode
	private fun accept_ast_validation(v: ASTValidationVisitor)
	do
		var parent = self.parent

		if v.path.length > 1 then
			var path_parent = v.path[1]
			if parent == null then
				self.parent = path_parent
				#debug "PARENT: expected parent: {path_parent}"
			else if parent != path_parent then
				self.parent = path_parent
				debug "PARENT: expected parent: {path_parent}, got {parent}"
			end
		end

		if v.seen.has(self) then
			debug "DUPLICATE: already seen node. NOTATREE"
		end
		v.seen.add(self)

		if _location == null then
			#debug "LOCATION: unlocated node {v.path.join(", ")}"
			_location = self.parent.location
		end

		visit_all(v)
	end
end

redef class AAnnotations
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
