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

# Modelisation of a Nit project
module mproject

import model_base
private import more_collections
import poset
import mdoc

# A Nit project, that encompass a product
class MProject
	super MConcern

	# The name of the project
	redef var name: String

	# The model of the project
	redef var model: Model

	# The root of the group tree
	var root: nullable MGroup = null is writable

	# The group tree, as a POSet
	var mgroups = new POSet[MGroup]

	redef fun to_s do return name

	init
	do
		model.mprojects.add(self)
		model.mproject_by_name.add_one(name, self)
	end

	# MProject are always roots of the concerns hierarchy
	redef fun parent_concern do return null

	redef fun mdoc_or_fallback
	do
		if mdoc != null then return mdoc
		return root.mdoc_or_fallback
	end
end

# A group of modules in a project
class MGroup
	super MConcern

	# The name of the group
	# empty name for a default group in a single-module project
	redef var name: String

	# The enclosing project
	var mproject: MProject

	# The parent group if any
	# see `in_nesting` for more
	var parent: nullable MGroup

	# Fully qualified name.
	# It includes each parent group separated by `/`
	redef fun full_name
	do
		var p = parent
		if p == null then return name
		return "{p.full_name}/{name}"
	end

	# The group is the group tree on the project (`mproject.mgroups`)
	# nested groups (children) are smaller
	# nesting group (see `parent`) is bigger
	var in_nesting: POSetElement[MGroup] is noinit

	# Is `self` the root of its project?
	fun is_root: Bool do return mproject.root == self

	# The filepath (usually a directory) of the group, if any
	var filepath: nullable String = null is writable

	init
	do
		var tree = mproject.mgroups
		self.in_nesting = tree.add_node(self)
		var parent = self.parent
		if parent != null then
			tree.add_edge(self, parent)
		end
	end

	redef fun model do return mproject.model

	redef fun parent_concern do
		if not is_root then return parent
		return mproject
	end

	redef fun to_s do return name
end

redef class Model
	# projects of the model
	var mprojects = new Array[MProject]

	# Collections of project grouped by their names
	private var mproject_by_name = new MultiHashMap[String, MProject]

	# Return all project named `name`
	# If such a project is not yet loaded, null is returned (instead of an empty array)
	fun get_mprojects_by_name(name: String): nullable Array[MProject]
	do
		if mproject_by_name.has_key(name) then
			return mproject_by_name[name]
		else
			return null
		end
	end
end
