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

# Example of model_visitor
module test_model_visitor

import test_phase
import frontend
import model_visitor
import counter

# Example visitor that just count kind of entities.
class TestModelVisitor
	super ModelVisitor

	redef fun visit(e) do
		if not doc_only or e.mdoc != null then
			cpt.inc(e.class_name)
		end
		e.visit_all(self)
	end

	# Counter of visited entities (by classnames)
	var cpt = new Counter[String]

	# Do the visitor only count entities with a documentation?
	var doc_only = false
end

# The body of the specific work.
# The main entry point is provided by `test_phase`,
# This function is then automatically (unless errors where found).
redef fun do_work(mainmodule, given_mmodules, modelbuilder)
do
	var model = modelbuilder.model

	print "All entities, including fictive ones:"
	var v = new TestModelVisitor
	v.include_fictive = true
	v.enter_visit(model)
	v.cpt.print_elements(10)

	print "All entities:"
	v = new TestModelVisitor
	v.enter_visit(model)
	v.cpt.print_elements(10)

	print "\nAll non-private entities:"
	v = new TestModelVisitor
	v.min_visibility = protected_visibility
	v.enter_visit(model)
	v.cpt.print_elements(10)

	print "\nAll documented non-private entities:"
	v = new TestModelVisitor
	v.min_visibility = protected_visibility
	v.doc_only = true
	v.enter_visit(model)
	v.cpt.print_elements(10)
end
