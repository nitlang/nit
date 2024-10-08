# This file is part of NIT ( https://nitlanguage.org ).
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

# Metrics on table generation
module tables_metrics

import metrics_base

redef class ToolContext
	var tables_metrics_phase: Phase = new TablesMetricsPhase(self, null)
end

private class TablesMetricsPhase
	super Phase
	redef fun process_mainmodule(mainmodule, given_mmodules)
	do
		if not toolcontext.opt_tables.value and not toolcontext.opt_all.value then return
		compute_tables_metrics(mainmodule)
	end
end

# Print class tables metrics for the classes of the program main
fun compute_tables_metrics(main: MModule)
do
	var nc = 0 # Number of runtime classes
	var nl = 0 # Number of usages of class definitions (a class definition can be used more than once)
	var nhp = 0 # Number of usages of properties (a property can be used more than once)
	var npas = 0 # Number of usages of properties without lookup (easy easy case, easier that CHA)

	# Collect the full class hierarchy
	var hier = main.flatten_mclass_hierarchy
	for c in hier do
		# Skip classes without direct instances
		if c.kind == interface_kind or c.kind == abstract_kind then continue

		nc += 1

		# Now, we need to collect all properties defined/inherited/imported
		# So, visit all definitions of all super-classes
		for sup in hier[c].greaters do
			for cd in sup.mclassdefs do
				nl += 1

				# Now, search properties introduced
				for p in cd.intro_mproperties do

					nhp += 1
					# Select property definition
					if p.mpropdefs.length == 1 then
						npas += 1
					else
						var sels = p.lookup_definitions(main, c.intro.bound_mtype)
						if sels.length > 1 then
							print "conflict for {p.full_name} in class {c.full_name}: {sels.join(", ")}"
						else if sels.is_empty then
							print "ERROR: no property for {p.full_name} in class {c.full_name}!"
						end
					end
				end
			end
		end
	end

	print "--- Construction of tables ---"
	print "Number of runtime classes: {nc} (excluding interfaces and abstract classes)"
	print "Average number of composing class definition by runtime class: {div(nl,nc)}"
	print "Total size of tables (classes and instances): {nhp} (not including stuff like info for subtyping or call-next-method)"
	print "Average size of table by runtime class: {div(nhp,nc)}"
	print "Values never redefined: {npas} ({div(npas*100,nhp)}%)"
end
