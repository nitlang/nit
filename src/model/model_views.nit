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

module model_views

import model_visitor

# Provide a configurable view to a model.
#
# This can be useful when you need to filter some mentities from a model
# like private or fictive.
#
# TODO doc usage
class ModelView
	super ModelVisitor

	# The model to view through `self`.
	var model: Model

	# MModule used to flatten mclass hierarchy
	var mainmodule: MModule

	# MPackages visible through `self`.
	var mpackages: Set[MPackage] is lazy do
		var mpackages = new HashSet[MPackage]
		for mpackage in model.mpackages do
			if not accept_mentity(mpackage) then continue
			mpackages.add mpackage
		end
		return mpackages
	end

	# MGroups visible through `self`.
	var mgroups: Set[MGroup] is lazy do
		var mgroups = new HashSet[MGroup]
		for mpackage in mpackages do
			for mgroup in mpackage.mgroups do
				if not accept_mentity(mgroup) then continue
				mgroups.add mgroup
			end
		end
		return mgroups
	end

	# MModules visible through `self`.
	var mmodules: Set[MModule] is lazy do
		var mmodules = new HashSet[MModule]
		for mmodule in model.mmodules do
			if not accept_mentity(mmodule) then continue
			mmodules.add mmodule
		end
		return mmodules
	end

	# MClasses visible through `self`.
	var mclasses: Set[MClass] is lazy do
		var mclasses = new HashSet[MClass]
		for mclass in model.mclasses do
			if not accept_mentity(mclass) then continue
			mclasses.add mclass
		end
		return mclasses
	end

	# MClassDefs visible through `self`.
	var mclassdefs: Set[MClassDef] is lazy do
		var mclassdefs = new HashSet[MClassDef]
		for mclass in mclasses do
			for mclassdef in mclass.mclassdefs do
				if not accept_mentity(mclassdef) then continue
				mclassdefs.add mclassdef
			end
		end
		return mclassdefs
	end

	# MProperties visible through `self`.
	var mproperties: Set[MProperty] is lazy do
		var mproperties = new HashSet[MProperty]
		for mproperty in model.mproperties do
			if not accept_mentity(mproperty) then continue
			mproperties.add mproperty
		end
		return mproperties
	end

	# MPropdefs visible through `self`.
	var mpropdefs: Set[MPropDef] is lazy do
		var mpropdefs = new HashSet[MPropDef]
		for mproperty in mproperties do
			for mpropdef in mproperty.mpropdefs do
				if not accept_mentity(mpropdef) then continue
				mpropdefs.add mpropdef
			end
		end
		return mpropdefs
	end

	# Lists all MEntities visible through `self`.
	var mentities: Set[MEntity] is lazy do
		var res = new HashSet[MEntity]
		res.add_all mpackages
		res.add_all mgroups
		res.add_all mmodules
		res.add_all mclasses
		res.add_all mclassdefs
		res.add_all mproperties
		res.add_all mpropdefs
		return res
	end

	private fun init_visitor(v: ModelVisitor) do
		v.min_visibility = self.min_visibility
		v.include_fictive = self.include_fictive
		v.include_empty_doc = self.include_empty_doc
		v.include_attribute = self.include_attribute
		v.include_test = self.include_test
	end

	# Searches the MEntity that matches `full_name`.
	fun mentity_by_full_name(full_name: String): nullable MEntity do
		for mentity in mentities do
			if mentity.full_name == full_name then return mentity
		end
		return null
	end

	# Build an concerns tree with from `self`
	fun to_tree: MEntityTree do
		var v = new ModelTreeVisitor
		init_visitor(v)
		for mpackage in mpackages do
			v.enter_visit(mpackage)
		end
		return v.tree
	end

	# Build the POSet of `mmodules` importation.
	fun mmodules_poset(mmodules: Set[MModule]): POSet[MModule] do
		return model.mmodule_importation_hierarchy.sub(mmodules)
	end

	# Build the POSet of `mclasses` hierarchy.
	fun mclasses_poset(mainmodule: MModule, mclasses: Set[MClass]): POSet[MClass] do
		return mainmodule.flatten_mclass_hierarchy.sub(mclasses)
	end
end

class LookupNamespaceVisitor
	super ModelVisitor

	var namespace: String

	private var parts: Array[String] is lazy do return namespace.split_with("::")

	var results = new Array[MEntity]

	redef fun visit(mentity) do mentity.accept_namespace_visitor(self)
end

class ModelTreeVisitor
	super ModelVisitor

	var tree = new MEntityTree

	redef fun visit(mentity) do mentity.accept_tree_visitor(self)
end

redef class MEntity

	private fun accept_namespace_visitor(v: LookupNamespaceVisitor) do
		if v.parts.is_empty then return
		if name != v.parts.first then return
		v.parts.shift
		if v.parts.is_empty then
			v.results.add self
			return
		end
		visit_all(v)
	end

	private fun accept_tree_visitor(v: ModelTreeVisitor) do end
end

redef class MPackage
	redef fun accept_tree_visitor(v) do
		v.tree.add(null, self)
		visit_all(v)
	end
end

redef class MGroup
	redef fun accept_tree_visitor(v) do
		var parent = self.parent
		if parent != null then
			v.tree.add(parent, self)
		else
			v.tree.add(mpackage, self)
		end
		visit_all(v)
	end
end

redef class MModule
	redef fun accept_tree_visitor(v) do
		v.tree.add(mgroup, self)
		visit_all(v)
	end
end

redef class MClass
	# We don't want to collect classes from full namespace.
	redef fun accept_namespace_visitor(v) do end
end

redef class MClassDef
	redef fun accept_tree_visitor(v) do
		v.tree.add(mmodule, self)
		visit_all(v)
	end
end

redef class MProperty
	# We don't want to collect properties from full namespace.
	redef fun accept_namespace_visitor(v) do end
end

redef class MPropDef
	redef fun accept_tree_visitor(v) do
		v.tree.add(mclassdef, self)
		visit_all(v)
	end
end
