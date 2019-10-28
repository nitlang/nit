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

# Program used to test the `clone` method of the astbuilder tool
# Program use the nit interpreter to do his job. It take a nit file into parameter and replace the ast nodes by a clone.
# After replace it run a basic interpretation.
# When a new method `clone` is implemented you need to add a redefinition to test it.
# When the number of method `clone` will increase its more practical to define the nodes to not clone.
module test_astbuilder

import nit
import astbuilder

redef fun build_interpreter(is_vm, mb, mmodule, args)
do

	var clone_visitor = new CloneVisitor
	for nmodule in mb.nmodules do
		clone_visitor.enter_visit(nmodule)
	end
	return super
end

private class CloneVisitor
	super Visitor

	redef fun visit(node)
	do
		# return when the node is an annotation to avoid the clonage
		if node isa AAnnotations then return
		node.do_cloneable(self)
		node.visit_all(self)
	end
end

redef class ANode
	private fun do_cloneable(v: CloneVisitor)do end

	# Create a new clone of `self`
	fun replace_clone
	do
		var self_clone = self.clone
		replace_with(self.clone)
		self_clone.location = location
		#Call the `validate` method to set correctly the parents and the location
		self_clone.validate
	end
end

# Implement the `do_cloeable` method for each Node were the method `clone` is defined in the astbuilder module

redef class ASignature
	redef fun do_cloneable(v)
	do
		replace_clone
	end
end

redef class AImplicitSelfExpr
	redef fun do_cloneable(v)
	do
		replace_clone
	end
end

redef class ASelfExpr
	redef fun do_cloneable(v)
	do
		replace_clone
	end
end

redef class AIntegerExpr
	redef fun do_cloneable(v)
	do
		replace_clone
	end
end

redef class ATrueExpr
	redef fun do_cloneable(v)
	do
		replace_clone
	end
end

redef class AFloatExpr
	redef fun do_cloneable(v)
	do
		replace_clone
	end
end

redef class AFalseExpr
	redef fun do_cloneable(v)
	do
		replace_clone
	end
end

redef class ACharExpr
	redef fun do_cloneable(v)
	do
		replace_clone
	end
end
