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

# General statistics on a model
module model_stats

import model
private import stats_base

# Print general statistics on a model
fun compute_statistics(model: Model)
do
	print "--- Statistics of the model ---"
	var nbmod = model.mmodules.length
	print "Number of modules: {nbmod}"

	print ""

	var nbcla = model.mclasses.length
	var nbcladef = model.mclassdef_hierarchy.length
	print "Number of classes: {nbcla}"

	# determine the distribution of:
	#  * class kinds (interface, abstract class, etc.)
	#  * refinex classes (vs. unrefined ones)
	var kinds = new Counter[MClassKind]
	var refined = 0
	for c in model.mclasses do
		kinds.inc(c.kind)
		if c.mclassdefs.length > 1 then
			refined += 1
		end
	end
	for k in kinds.sort do
		var v = kinds[k]
		print "  Number of {k} kind: {v} ({div(v*100,nbcla)}%)"
	end


	print ""

	print "Number of class definitions: {nbcladef}"
	print "Number of refined classes: {refined} ({div(refined*100,nbcla)}%)"
	print "Average number of class refinments by classes: {div(nbcladef-nbcla,nbcla)}"
	print "Average number of class refinments by refined classes: {div(nbcladef-nbcla,refined)}"

	print ""

	var nbprop = model.mproperties.length
	var nbpropdef = 0
	var redefined = 0
	print "Number of properties: {model.mproperties.length}"
	var pkinds = new Counter[String]
	for p in model.mproperties do
		nbpropdef += p.mpropdefs.length
		if p.mpropdefs.length > 1 then
			redefined += 1
		end
		pkinds.inc(p.class_name)
	end
	for k in pkinds.sort do
		var v = pkinds[k]
		print "  Number of {k}: {v} ({div(v*100,nbprop)}%)"
	end

	print ""

	print "Number of property definitions: {nbpropdef}"
	print "Number of redefined properties: {redefined} ({div(redefined*100,nbprop)}%)"
	print "Average number of property redefinitions by property: {div(nbpropdef-nbprop,nbprop)}"
	print "Average number of property redefinitions by redefined property: {div(nbpropdef-nbprop,redefined)}"
end

# Print class tables statistics for the classes of the program main
fun compute_tables(main: MModule)
do
	var model = main.model

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
