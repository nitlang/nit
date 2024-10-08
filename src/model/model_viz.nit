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

# Visualisation of Nit models
module model_viz

import model
import ordered_tree

# A simple specialisation of OrderedTree to display packages, groups and modules
class MPackageTree
	super OrderedTree[MConcern]

	# The model where to look for information
	var model: Model

	redef fun display(a) do
		if a isa MGroup then
			if a.parent == null then return "{a.mpackage.name} ({a.filepath or else "?"})"
			return a.name + " (group)"
		else if a isa MModule then
			return a.name
		else
			abort
		end
	end

	private var linex_comparator: nullable LinexComparator = null

	# Sort modules and groups with their names
	fun sort_with_alpha
	do
		sort_with(alpha_comparator)
	end

	# Sort modules and groups with a loosely adaptation of the linearization of modules
	fun sort_with_linex
	do
		var c = linex_comparator
		if c == null then
			c = new LinexComparator(self)
			linex_comparator = c
		end
		sort_with(c)
	end
end

# Compare modules and groups using the
private class LinexComparator
	super Comparator

	redef type COMPARED: MConcern

	var mins = new HashMap [MGroup, nullable MModule]
	var maxs = new HashMap [MGroup, nullable MModule]
	fun mini(o: Object): nullable MModule do
		if o isa MModule then return o
		assert o isa MGroup
		if not mins.has_key(o) then computeminmax(o)
		return mins[o]
	end
	fun maxi(o: Object): nullable MModule do
		if o isa MModule then return o
		assert o isa MGroup
		if not maxs.has_key(o) then computeminmax(o)
		return maxs[o]
	end
	fun computeminmax(o: MGroup) do
		if not tree.sub.has_key(o) then
			mins[o] = null
			maxs[o] = null
			return
		end
		var subs = tree.sub[o]
		var minres = mini(subs.first)
		var maxres = maxi(subs.first)
		var order = o.model.mmodule_importation_hierarchy
		for o2 in subs do
			var c = mini(o2)
			if c == null then continue
			if minres == null or order.compare(minres, c) > 0 then minres = c
			c = maxi(o2)
			if c == null then continue
			if maxres == null or order.compare(maxres, c) < 0 then maxres = c
		end
		mins[o] = minres
		maxs[o] = maxres
		#if minres != maxres then print "* {o} {minres}..{maxres}"
	end
	redef fun compare(a,b) do
		var ma = mini(a)
		var mb = mini(b)
		if ma == null then
			if mb == null then return 0 else return -1
		else if mb == null then
			return 1
		end
		var order = ma.model.mmodule_importation_hierarchy
		return order.compare(ma, mb)
	end
	var tree: OrderedTree[MConcern]
end

redef class Model
	# Generate a MPackageTree based on the packages, groups and modules known in the model
	fun to_mpackage_tree: MPackageTree
	do
		var res = new MPackageTree(self)
		for p in mpackages do
			for g in p.mgroups do
				res.add(g.parent, g)
				for m in g.mmodules do
					res.add(g, m)
				end
			end
		end
		return res
	end
end

# Generate graphiz files based on packages, groups and modules
#
# Interesting elements must be selected. See `mmodules`, ``
# Display configuration can be set. See `cluster_group`, `package_group`
class MPackageDot
	super Writable

	# The model where to look for information
	var model: Model

	# Set of packages to expand fully (ie all groups and modules are displayed)
	# Initially empty, packages can be added
	var mpackages = new HashSet[MPackage]

	# Set of modules to display
	# Initially empty, modules can be added
	var mmodules = new HashSet[MModule]

	private fun node_for(mmodule: MModule): String
	do
		return "m_{mmodule.object_id}"
	end

	# Should groups be shown as clusters?
	var cluster_group = true is writable

	# Should packages be shown as clusters?
	var package_group = true is writable

	# Recursively generate node and clusters for a mgroup
	private fun dot_cluster(o: Writer, mgroup: MGroup)
	do
		# Open the cluster, if required
		if mgroup.parent == null then
			# is is a root group, so display the package
			if package_group then
				o.write("subgraph cluster_{mgroup.object_id} \{\nlabel=\"{mgroup.mpackage.name}\\n({mgroup.filepath or else "?"})\"\ncolor=black\nstyle=dotted\n")
			end
		else
			if cluster_group then
				o.write("subgraph cluster_{mgroup.object_id} \{\nlabel=\"{mgroup.name}\"\ncolor=blue\nstyle=dotted\n")
			end
		end

		# outputs the mmodules to show
		for mmodule in mgroup.mmodules do
			if not mmodules.has(mmodule) then continue
			o.write("\t{node_for(mmodule)} [label=\"{mmodule.name}\",color=green]\n")
		end

		# recursively progress on sub-clusters
		for d in mgroup.in_nesting.direct_smallers do
			dot_cluster(o, d)
		end

		# close the cluster if required
		if mgroup.parent == null then
			if package_group then o.write("\}\n")
		else
			if cluster_group then o.write("\}\n")
		end
	end

	# Extends the set of `mmodules` by recursively adding the most specific imported modules of foreign packages
	fun collect_important_importation
	do
		var todo = new List[MModule]
		todo.add_all(mmodules)
		while not todo.is_empty do
			var m = todo.pop

			for psm in m.in_importation.greaters do
				if m.mgroup.mpackage != psm.mgroup.mpackage then continue
				for ssm in psm.in_importation.direct_greaters do
					if psm.mgroup.mpackage == ssm.mgroup.mpackage then continue
					mmodules.add(ssm)
					todo.add(ssm)
				end
			end
		end
	end

	# Generate the dot content with the current configuration
	redef fun write_to(stream)
	do
		# Collect interesting nodes
		for m in model.mmodules do
			# filter out modules outside wanted packages
			if m.mgroup == null then continue
			if not mpackages.has(m.mgroup.mpackage) then continue

			mmodules.add(m)
		end

		collect_important_importation

		# Collect interesting edges
		var sub_hierarchy = new POSet[MModule]
		for m in mmodules do
			sub_hierarchy.add_node(m)
			for sm in m.in_importation.greaters do
				if sm == m then continue
				if not mmodules.has(sm) then continue
				sub_hierarchy.add_edge(m, sm)
			end
		end

		stream.write("digraph g \{\n")
		stream.write("rankdir=BT;node[shape=box];\n")
		# Generate the nodes
		for p in model.mpackages do
			dot_cluster(stream, p.root.as(not null))
		end
		# Generate the edges
		for m in mmodules do
			for sm in sub_hierarchy[m].direct_greaters do
				var nm = node_for(m)
				var nsm = node_for(sm)
				if m.in_importation.direct_greaters.has(sm) then
					stream.write("\t{nm} -> {nsm}[style=bold]\n")
				else
					stream.write("\t{nm} -> {nsm}[style=solid]\n")
				end
			end
		end
		stream.write("\}\n")
	end
end
