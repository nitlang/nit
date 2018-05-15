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

module model_filters

import model_examples
import parse_annotations

# A list of filters that can be applied on a MEntity
#
#
# By default ModelFilter accepts all mentity.
#
# ~~~nitish
# var filter = new ModelFilter
# assert filter.accept_mentity(my_mentity) == true
# ~~~
#
# To quickly configure the filters, options can be passed to the constructor:
# ~~~
# var filter = new ModelFilter(
#	min_visibility = protected_visibility,
#	accept_fictive = false,
#	accept_test = false,
#	accept_redef = false,
#	accept_extern = false,
#	accept_attribute = false,
#	accept_empty_doc = false
# )
# ~~~
class ModelFilter

	# Initialize `self` by copying the options from another `filter`
	init from(filter: ModelFilter) do
		init(
			min_visibility = filter.min_visibility,
			accept_fictive = filter.accept_fictive,
			accept_test = filter.accept_test,
			accept_redef = filter.accept_redef,
			accept_extern = filter.accept_extern,
			accept_example = filter.accept_example,
			accept_attribute = filter.accept_attribute,
			accept_empty_doc = filter.accept_empty_doc,
			accept_inherited = filter.accept_inherited,
			accept_full_name = filter.accept_full_name
		)
	end

	# Accept `mentity` based on all the options from `self`?
	#
	# If one of the filter returns `false` then the `mentity` is not accepted.
	fun accept_mentity(mentity: MEntity): Bool do
		if not accept_mentity_broken(mentity) then return false
		if not accept_mentity_visibility(mentity) then return false
		if not accept_mentity_fictive(mentity) then return false
		if not accept_mentity_generated(mentity) then return false
		if not accept_mentity_test(mentity) then return false
		if not accept_mentity_redef(mentity) then return false
		if not accept_mentity_extern(mentity) then return false
		if not accept_mentity_example(mentity) then return false
		if not accept_mentity_attribute(mentity) then return false
		if not accept_mentity_empty_doc(mentity) then return false
		if not accept_mentity_inherited(mentity) then return false
		if not accept_mentity_full_name(mentity) then return false
		return true
	end

	# Minimum visibility an entity must have to be accepted
	#
	# Default is `private_visibility`.
	var min_visibility: MVisibility = private_visibility is optional, writable

	# Accept `mentity` if its visibility is above `min_visibility`
	fun accept_mentity_visibility(mentity: MEntity): Bool do
		return mentity.visibility >= min_visibility
	end

	# Accept fictive entities?
	#
	# Default is `true`.
	var accept_fictive = true is optional, writable

	# Accept only non-fictive entities
	#
	# See `MEntity::is_fictive`.
	fun accept_mentity_fictive(mentity: MEntity): Bool do
		if accept_fictive then return true
		return not mentity.is_fictive
	end

	# Accept generated entities?
	#
	# Default is `true`.
	var accept_generated = true is optional, writable

	# Accept only non-generated entities
	#
	# See `MEntity::is_generated`.
	fun accept_mentity_generated(mentity: MEntity): Bool do
		if accept_generated then return true
		if mentity isa MClass then mentity = mentity.intro
		if mentity isa MProperty then mentity = mentity.intro
		if mentity isa MModule then
			return not mentity.has_annotation("generated")
		else if mentity isa MClassDef then
			return not mentity.has_annotation("generated")
		else if mentity isa MPropDef then
			return not mentity.has_annotation("generated")
		end
		return true
	end

	# Accept nitunit test suites?
	#
	# Default is `true`.
	var accept_test = true is optional, writable

	# Accept only entities that are not `nitunit` related
	fun accept_mentity_test(mentity: MEntity): Bool do
		if accept_test then return true
		if mentity isa MProperty then return accept_mentity(mentity.intro)
		if mentity isa MMethodDef then
			if mentity.is_before then return false
			if mentity.is_before_all then return false
			if mentity.is_after then return false
			if mentity.is_after_all then return false
		end
		return not mentity.is_test
	end

	# Accept redef classdefs and propdefs?
	#
	# Default is `true`.
	var accept_redef = true is optional, writable

	# Accept a MClassDefs and MPropeDefs onyl if they are an introduction
	#
	# See `MClassDef::is_intro` and `MPropDef::is_intro`.
	fun accept_mentity_redef(mentity: MEntity): Bool do
		if accept_redef then return true
		if mentity isa MClassDef then
			return mentity.is_intro
		else if mentity isa MPropDef then
			return mentity.is_intro
		end
		return true
	end

	# Accept extern entities?
	#
	# Default is `true`.
	var accept_extern = true is optional, writable

	# Accept only non- extern entities
	#
	# See `MEntity::is_extern`.
	fun accept_mentity_extern(mentity: MEntity): Bool do
		if accept_extern then return true
		if mentity isa MMethodDef then
			return not mentity.is_extern
		end
		return true
	end

	# Accept `MAttribute` and `MAttributeDef` instances?
	#
	# Default is `true`.
	var accept_attribute = true is optional, writable

	# Accept only entities that are not a `MAttribute` or `MAttributeDef`
	fun accept_mentity_attribute(mentity: MEntity): Bool do
		if accept_attribute then return true
		if mentity isa MAttribute then return false
		if mentity isa MAttributeDef then return false
		return true
	end

	# Accept entities with empty documentation?
	#
	# Default is `true`.
	var accept_empty_doc = true is optional, writable

	# Accept only entities with documentation
	fun accept_mentity_empty_doc(mentity: MEntity): Bool do
		if accept_empty_doc then return true
		return mentity.mdoc_or_fallback != null
	end

	# Accept examples?
	#
	# Default is `true`.
	var accept_example = true is optional, writable

	# Accept only entities that are not example related
	fun accept_mentity_example(mentity: MEntity): Bool do
		if accept_example then return true
		return not mentity.is_example
	end

	# If set, accept only entities local to `accept_inherited`
	var accept_inherited: nullable MEntity = null is optional, writable

	# Accept only entities local to `accept_inherited`
	#
	# This means no imported or inherited entities.
	fun accept_mentity_inherited(mentity: MEntity): Bool do
		var context = accept_inherited
		if context == null then return true
		if context isa MPackage then
			if mentity isa MGroup then return mentity.mpackage == context
			if mentity isa MModule then return mentity.mpackage == context
		end
		if context isa MGroup then
			if mentity isa MModule then return mentity.mgroup == context
		end
		if context isa MModule then
			if mentity isa MClass then return mentity.intro.mmodule == context
			if mentity isa MClassDef then return mentity.mmodule == context
		end
		if context isa MClass then
			if mentity isa MProperty then return mentity.intro_mclassdef.mclass == context
			if mentity isa MPropDef then return mentity.mclassdef.mclass == context
		end
		if context isa MClassDef then
			if mentity isa MProperty then return mentity.intro_mclassdef == context
			if mentity isa MPropDef then return mentity.mclassdef == context
		end
		return true
	end

	# If set, accept only entities where `MEntity::full_name` contains `string`
	var accept_full_name: nullable String = null is optional, writable

	# Accept only entities where `MEntity::full_name` contains `string`
	fun accept_mentity_full_name(mentity: MEntity): Bool do
		var string = accept_full_name
		if string == null then return true
		return mentity.full_name.has(string)
	end

	# Accept broken classes and properties?
	#
	# Default is `false`.
	var accept_broken = false is optional, writable

	# Accept only non broken entities
	fun accept_mentity_broken(mentity: MEntity): Bool do
		if accept_broken then return true
		return not mentity.is_broken
	end
end
