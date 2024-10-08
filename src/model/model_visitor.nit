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

# Simple visitor framework for Nit models.
#
# This module provides the `ModelVisitor` abstract class and
# refines the classes of the `MEntity` hierarchy to add visiting related methods.
#
# A standard approach on complex visitor is to dispatch the `ModelVisitor::visit` on the
# entities to do specific things.
#
# ~~~nitish
# class FooVisitor
#   super ModelVisitor
#   redef fun visit(e) do e.foo_visit(self)
# end
#
# redef class MEntity
# do
#   fun foo_vist(v: FooVisitor) do visit_all(v)
# end
#
# redef class MClass
# do
#   redef fun foo_visit(v) do
#      print self
#      super
#   end
# end
# ~~~
module model_visitor

import model_filters

# The abstract model visitor template.
#
# Specific visitor must implement the `visit` method to perform the work.
abstract class ModelVisitor

	# Visit the entity `e`.
	#
	# This method setups `current_entity` and call `visit`.
	# If `e` is null, nothing is done.
	fun enter_visit(e: nullable MEntity) do
		if e == null then return
		if not accept_mentity(e) then return
		var old_entity = current_entity
		current_entity = e
		visit(e)
		current_entity = old_entity
	end

	# The current visited entity
	var current_entity: nullable MEntity = null

	# Method to define in specific visitor.
	#
	# It should not be called directly but used by `enter_visit`
	protected fun visit(e: MEntity) is abstract

	# Filters to apply when visiting the model.
	#
	# See ModelFilters for configuration.
	var filter: ModelFilter is lazy, writable, optional do
		return new ModelFilter(
			min_visibility = protected_visibility,
			accept_fictive = false,
			accept_test = false,
			accept_example = false,
			accept_redef = true,
			accept_extern = true,
			accept_attribute = true,
			accept_empty_doc = true
		)
	end

	# Should we accept this `mentity` from the view?
	#
	# If no `override_filter` is passed then use `self.filter`.
	fun accept_mentity(mentity: MEntity, override_filter: nullable ModelFilter): Bool do
		if override_filter != null then
			return override_filter.accept_mentity(mentity)
		end
		return filter.accept_mentity(mentity)
	end
end

redef class MEntity
	# Call `v.enter_visit` on all nested entities.
	#
	# See the specific implementation in the subclasses.
	fun visit_all(v: ModelVisitor) do end
end

redef class Model
	# Visit all the packages of the model.
	redef fun visit_all(v) do
		for x in mpackages do v.enter_visit(x)
	end
end

redef class MPackage
	# Visit the root group of the package.
	redef fun visit_all(v) do
		v.enter_visit(root)
	end
end

redef class MGroup
	# Visit all the subgroups and modules of the group.
	redef fun visit_all(v) do
		for x in in_nesting.direct_smallers do v.enter_visit(x)
		for x in mmodules do v.enter_visit(x)
	end
end

redef class MModule
	# Visit all the classes and class definitions of the module.
	#
	# On class introduction, the `MClass` then the `MClassDef` are visited.
	# On class refinement, only the `MClassDef` is visited (the `MClass` is visited in an imported module).
	# On class importation, nothing is visited (the `MClass` and the `MClassDef` are visited in imported modules).
	redef fun visit_all(v) do
		for x in mclassdefs do
			if x.is_intro then v.enter_visit(x.mclass)
			v.enter_visit(x)
		end
	end
end

redef class MClassDef
	# Visit all the classes and class definitions of the module.
	#
	# On property introduction, the `MProperty` then the `MPropDef` are visited.
	# On property redefinition, only the `MPropDef` is visited (the `MProperty` is visited in an inherited class).
	# On property inheritance, nothing is visited (the `MProperty` and the `MPropDef` are visited in inherited classes).
	redef fun visit_all(v) do
		for x in mpropdefs do
			if x.is_intro then v.enter_visit(x.mproperty)
			v.enter_visit(x)
		end
	end
end
