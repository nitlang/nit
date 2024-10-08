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

# Modelisation of a Nit package
module mpackage

import model_base
private import more_collections
import poset
import mdoc
import graph::digraph

# A Nit package, that encompass a product
class MPackage
	super MConcern

	# The name of the package
	redef var name

	redef fun full_name do return name

	redef var c_name = name.to_cmangle is lazy

	# The model of the package
	redef var model

	redef var location

	# The root of the group tree
	var root: nullable MGroup = null is writable

	# The group tree, as a POSet
	var mgroups = new POSet[MGroup]

	redef fun to_s do return name

	init
	do
		model.mpackages.add(self)
		# Add `self` to the importation graph
		model.mpackage_importation_graph.add_vertex(self)
		model.mpackage_by_name.add_one(name, self)
	end

	# MPackage are always roots of the concerns hierarchy
	redef fun parent_concern do return null

	redef fun mdoc_or_fallback
	do
		var mdoc = self.mdoc
		if mdoc != null then return mdoc
		var root = self.root
		if root != null then return root.mdoc_or_fallback
		return null
	end

	# Does `self` have a source file?
	fun has_source: Bool do return location.file != null

	# The path to `self`
	fun package_path: nullable String do
		if not has_source then return null
		return location.file.as(not null).filename
	end

	# Is `self` in its own directory?
	fun is_expanded: Bool do
		var path = package_path
		if path == null then return false
		return not path.has_suffix(".nit")
	end

	# The path to `self` ini file
	fun ini_path: nullable String do
		var path = package_path
		if path == null then return null
		if is_expanded then return path / "package.ini"
		return path.dirname / "{name}.ini"
	end

	# Does `self` have a ini file?
	fun has_ini: Bool do
		var ini_path = self.ini_path
		if ini_path == null then return false
		return ini_path.file_exists
	end

	# The path to `self` README.md
	fun readme_path: nullable String do
		var path = package_path
		if path == null then return null
		if not is_expanded then return null
		return path / "README.md"
	end

	# Does `self` have a README.md file?
	fun has_readme: Bool do
		var readme_path = self.readme_path
		if readme_path == null then return false
		return readme_path.file_exists
	end
end

# A group of modules in a package
class MGroup
	super MConcern

	# The name of the group
	# empty name for a default group in a single-module package
	redef var name

	redef var location

	# The enclosing package
	var mpackage: MPackage

	# The parent group if any
	# see `in_nesting` for more
	var parent: nullable MGroup

	# Fully qualified name.
	# It includes each parent group separated by `>`.
	# The full_name is terminated by `>` to avoid collision with other entities.
	#
	# E.g. `core>` and `core>collection>`
	redef fun full_name
	do
		var p = parent
		if p == null then return "{name}>"
		return "{p.full_name}{name}>"
	end

	# The group is the group tree on the package (`mpackage.mgroups`)
	# nested groups (children) are smaller
	# nesting group (see `parent`) is bigger
	var in_nesting: POSetElement[MGroup] is noinit

	# Is `self` the root of its package?
	fun is_root: Bool do return mpackage.root == self

	# The filepath (usually a directory) of the group, if any
	#
	# safe alias to `location.file.filename`
	fun filepath: nullable String do
		var res
		res = self.location.file
		if res == null then return null
		return res.filename
	end

	init
	do
		var tree = mpackage.mgroups
		self.in_nesting = tree.add_node(self)
		var parent = self.parent
		if parent != null then
			tree.add_edge(self, parent)
		end
	end

	redef fun model do return mpackage.model

	redef fun parent_concern do
		if not is_root then return parent
		return mpackage
	end

	redef fun to_s do return name
end

redef class Model

	# Full package importation graph
	# Each package is in relation with itself
	var mpackage_importation_graph = new HashDigraph[MPackage]

	# packages of the model
	var mpackages = new Array[MPackage]

	# Collections of package grouped by their names
	private var mpackage_by_name = new MultiHashMap[String, MPackage]

	# Return all package named `name`
	# If such a package is not yet loaded, null is returned (instead of an empty array)
	fun get_mpackages_by_name(name: String): nullable Array[MPackage]
	do
		if mpackage_by_name.has_key(name) then
			return mpackage_by_name[name]
		else
			return null
		end
	end
end
