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
		cpt.inc(e.class_name)

		if not e isa Model then
			var name = e.full_name
			var old = names.get_or_null(name)
			if old != null then
				names[name + "!CONFLICT!" + old.class_name] = old
				name = name + "!CONFLICT!" + e.class_name
			end
			names[name] = e
		end

		e.visit_all(self)
	end

	# Counter of visited entities (by classnames)
	var cpt = new Counter[String]

	# Dictionary of full_names
	var names = new Map[String, MEntity]
end

# The body of the specific work.
# The main entry point is provided by `test_phase`,
# This function is then automatically (unless errors where found).
redef fun do_work(mainmodule, given_mmodules, modelbuilder)
do
	var model = modelbuilder.model

	print "All entities, including fictive ones:"
	var filters = new ModelFilter(private_visibility, accept_fictive = true)
	var v = new TestModelVisitor(filters)
	v.enter_visit(model)
	v.cpt.print_elements(10)
	var names = v.names

	print "All entities:"
	filters = new ModelFilter(private_visibility)
	v = new TestModelVisitor(filters)
	v.enter_visit(model)
	v.cpt.print_elements(10)

	print "\nAll non-private entities:"
	filters = new ModelFilter(protected_visibility)
	v = new TestModelVisitor(filters)
	v.enter_visit(model)
	v.cpt.print_elements(10)

	print "\nAll documented non-private entities:"
	filters = new ModelFilter(protected_visibility, accept_empty_doc = false)
	v = new TestModelVisitor(filters)
	v.enter_visit(model)
	v.cpt.print_elements(10)

	print "\nAll public entities:"
	filters = new ModelFilter(public_visibility)
	v = new TestModelVisitor(filters)
	v.enter_visit(model)
	v.cpt.print_elements(10)

	print "\nAll documented public entities:"
	filters = new ModelFilter(public_visibility, accept_empty_doc = false)
	v = new TestModelVisitor(filters)
	v.enter_visit(model)
	v.cpt.print_elements(10)

	print "\nNames:"
	print "\n# Classes of entities"
	var cpt
	cpt = new Counter[String]
	for n, e in names do
		cpt.inc(e.class_name)
	end
	cpt.print_summary
	cpt.print_elements(10)

	print "\n# Name length of entities"
	cpt = new Counter[String]
	for n, e in names do
		cpt[n] = n.length
	end
	cpt.print_summary
	cpt.print_elements(10)

	print "\n# All entities"
	for n, e in names do
		var c = ""
		var d = e.mdoc_or_fallback
		if d != null and d.content.not_empty then c = d.content.first
		print "{n}\t{e.class_name}\t{e.location}\t{c}"
	end
end
