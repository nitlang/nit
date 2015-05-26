# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Extract data mentities of Model that will be documented.
#
# ExtractionPhase populates the DocModel that is the base for all other phases.
# No DocPages are created at this level.
#
# TODO build a model instead?
module doc_extract

import doc_base

redef class ToolContext

	# Do not generate documentation for attributes.
	var opt_no_attributes = new OptionBool("ignore the attributes", "--no-attributes")

	# Do not generate documentation for private properties.
	var opt_private = new OptionBool("also generate private API", "--private")

	redef init do
		super
		option_context.add_option(opt_no_attributes, opt_private)
	end

	# Minimum visibility displayed.
	#
	# See `opt_private`.
	var min_visibility: MVisibility is lazy do
		if opt_private.value then return none_visibility
		return protected_visibility
	end
end

# ExtractionPhase populates the DocModel.
class ExtractionPhase
	super DocPhase

	private var new_model: Model is noinit

	# Populates the given DocModel.
	redef fun apply do
		doc.populate(self)
	end

	# Should we exclude this `mproject` from the documentation?
	fun ignore_mentity(mentity: MEntity): Bool do
		if mentity isa MModule then
			return mentity.is_fictive or mentity.is_test_suite
		else if mentity isa MClass then
			return mentity.visibility < ctx.min_visibility
		else if mentity isa MClassDef then
			return ignore_mentity(mentity.mclass)
		else if mentity isa MProperty then
			return ignore_mentity(mentity.intro_mclassdef) or
				mentity.visibility < ctx.min_visibility or
				(ctx.opt_no_attributes.value and mentity isa MAttribute) or
				mentity isa MInnerClass
		else if mentity isa MPropDef then
			return ignore_mentity(mentity.mclassdef) or
				ignore_mentity(mentity.mproperty)
		end
		return false
	end
end

# TODO Should I rebuild a new Model from filtered data?
redef class DocModel

	# MProjects that will be documented.
	var mprojects = new HashSet[MProject]

	# MGroups that will be documented.
	var mgroups = new HashSet[MGroup]

	# MModules that will be documented.
	var mmodules = new HashSet[MModule]

	# MClasses that will be documented.
	var mclasses = new HashSet[MClass]

	# MClassDefs that will be documented.
	var mclassdefs = new HashSet[MClassDef]

	# MProperties that will be documented.
	var mproperties = new HashSet[MProperty]

	# MPropdefs that will be documented.
	var mpropdefs = new HashSet[MPropDef]

	# Populate `self` from internal `model`.
	fun populate(v: ExtractionPhase) do
		populate_mprojects(v)
		populate_mclasses(v)
		populate_mproperties(v)
	end

	# Populates the `mprojects` set.
	private fun populate_mprojects(v: ExtractionPhase) do
		for mproject in model.mprojects do
			if v.ignore_mentity(mproject) then continue
			self.mprojects.add mproject
			for mgroup in mproject.mgroups do
				if v.ignore_mentity(mgroup) then continue
				self.mgroups.add mgroup
				for mmodule in mgroup.mmodules do
					if v.ignore_mentity(mmodule) then continue
					self.mmodules.add mmodule
				end
			end
		end
	end

	# Populates the `mclasses` set.
	private fun populate_mclasses(v: ExtractionPhase) do
		for mclass in model.mclasses do
			if v.ignore_mentity(mclass) then continue
			self.mclasses.add mclass
			for mclassdef in mclass.mclassdefs do
				if v.ignore_mentity(mclassdef) then continue
				self.mclassdefs.add mclassdef
			end
		end
	end

	# Populates the `mproperties` set.
	private fun populate_mproperties(v: ExtractionPhase) do
		for mproperty in model.mproperties do
			if v.ignore_mentity(mproperty) then continue
			self.mproperties.add mproperty
			for mpropdef in mproperty.mpropdefs do
				if v.ignore_mentity(mpropdef) then continue
				self.mpropdefs.add mpropdef
			end
		end
	end

	# Lists all MEntities in the model.
	#
	# FIXME invalidate cache if `self` is modified.
	var mentities: Collection[MEntity] is lazy do
		var res = new HashSet[MEntity]
		res.add_all mprojects
		res.add_all mgroups
		res.add_all mmodules
		res.add_all mclasses
		res.add_all mclassdefs
		res.add_all mproperties
		res.add_all mpropdefs
		return res
	end

	# Searches MEntities that match `name`.
	fun mentities_by_name(name: String): Array[MEntity] do
		var res = new Array[MEntity]
		for mentity in mentities do
			if mentity.name != name then continue
			res.add mentity
		end
		return res
	end
end
