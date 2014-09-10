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

# Visualisation of Nit models
module model_viz

import model
import ordered_tree

# A simple specialisation of OrderedTree to display projects, groups and modules
# FIXME do not use Object, but a better common interface of MModule and MGroup
class MProjectTree
	super OrderedTree[Object]

	# The model where to look for information
	var model: Model

	init(model: Model) do self.model = model

	redef fun display(a) do
		if a isa MGroup then
			if a.parent == null then return "{a.mproject.name} ({a.filepath.to_s})"
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

	# Sort modules and groups with a loosly adaptation of the linerarisation of modules
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
# FIXME do not use Object, but a better common interface of MModule and MGroup
private class LinexComparator
	super Comparator[Object]
	var mins = new HashMap [MGroup, nullable MModule]
	var maxs = new HashMap [MGroup, nullable MModule]
	fun min(o: Object): nullable MModule do
		if o isa MModule then return o
		assert o isa MGroup
		if not mins.has_key(o) then computeminmax(o)
		return mins[o]
	end
	fun max(o: Object): nullable MModule do
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
		var minres = min(subs.first)
		var maxres = max(subs.first)
		var order = minres.model.mmodule_importation_hierarchy
		for o2 in subs do
			var c = min(o2)
			if c == null then continue
			if minres == null or order.compare(minres, c) > 0 then minres = c
			c = max(o2)
			if c == null then continue
			if maxres == null or order.compare(maxres, c) < 0 then maxres = c
		end
		mins[o] = minres
		maxs[o] = maxres
		#if minres != maxres then print "* {o} {minres}..{maxres}"
	end
	redef fun compare(a,b) do
		var ma = min(a)
		var mb = min(b)
		if ma == null then
			if mb == null then return 0 else return -1
		else if mb == null then
			return 1
		end
		var order = ma.model.mmodule_importation_hierarchy
		return order.compare(ma, mb)
	end
	var tree: OrderedTree[Object]
end

redef class Model
	# Generate a MProjectTree based on the projects, groups and modules known in the model
	fun to_mproject_tree: MProjectTree
	do
		var res = new MProjectTree(self)
		for p in mprojects do
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

# Generate graphiz files based on projects, groups and modules
#
# Interessing elements must be selected. See `mmodules`, ``
# Display configuration can be set. See `cluster_group`, `project_group`
class MProjectDot
	super Streamable

	# The model where to look for information
	var model: Model

	# Set of projects to expand fully (ie all groups and modules are displayed)
	# Initially empty, projects can be added
	var mprojects = new HashSet[MProject]

	# Set of modules to display
	# Initially empty, modules can be added
	var mmodules = new HashSet[MModule]

	private fun node_for(mmodule: MModule): String
	do
		return "m_{mmodule.object_id}"
	end

	# Should groups be shown as clusters?
	var cluster_group = true is writable

	# Should projects be shown as clusters?
	var project_group = true is writable

	# Recursively generate noed ans clusters for a mroup
	private fun dot_cluster(o: OStream, mgroup: MGroup)
	do
		# Open the cluster, if required
		if mgroup.parent == null then
			# is is a root group, so display the project
			if project_group then
				o.write("subgraph cluster_{mgroup.object_id} \{\nlabel=\"{mgroup.mproject.name}\\n({mgroup.filepath.to_s})\"\ncolor=black\nstyle=dotted\n")
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

		# recusively progress on sub-clusters
		for d in mgroup.in_nesting.direct_smallers do
			dot_cluster(o, d)
		end

		# close the cluster if required
		if mgroup.parent == null then
			if project_group then o.write("\}\n")
		else
			if cluster_group then o.write("\}\n")
		end
	end

	# Extends the set of `mmodules` by recurdively adding the most specific imported modules of foreign projects
	fun collect_important_importation
	do
		var todo = new List[MModule]
		todo.add_all(mmodules)
		while not todo.is_empty do
			var m = todo.pop

			for psm in m.in_importation.greaters do
				if m.mgroup.mproject != psm.mgroup.mproject then continue
				for ssm in psm.in_importation.direct_greaters do
					if psm.mgroup.mproject == ssm.mgroup.mproject then continue
					mmodules.add(ssm)
					todo.add(ssm)
				end
			end
		end
	end

	# Generate the dot content with the current configuration
	redef fun write_to(stream)
	do
		# Collect interessing nodes
		for m in model.mmodules do
			# filter out modules outside wanted projects
			if m.mgroup == null then continue
			if not mprojects.has(m.mgroup.mproject) then continue

			mmodules.add(m)
		end

		collect_important_importation

		# Collect interessing edges
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
		for p in model.mprojects do
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
