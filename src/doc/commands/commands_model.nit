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

# Doc commands about a Model or a MEntity
#
# This module defines several commands to retrieve data about a Model and MEntities.
module commands_model

import commands_base
import modelize

# Retrieve the MDoc related to a MEntity
class CmdComment
	super CmdEntity

	# Allow fallback
	#
	# If `true`, the command uses `mdoc_or_fallback`.
	# Default is `true`.
	var fallback = true is optional, writable

	# Retrieve the full documentation
	#
	# If `true`, retrieves the full documentation.
	# If `false`, retrieves only the synopsis.
	# Default is `true`.
	#
	# Since the rendering the final string (md, html...) depends on the kind of
	# client, the handling of this option is delegated to submodules.
	var full_doc = true is optional, writable

	# Format to render the comment
	#
	# Can be one of `raw`, `html` or `md`.
	# Default is `raw`.
	var format = "raw" is optional, writable

	# MDoc to return
	var mdoc: nullable MDoc = null is optional, writable

	# Same states than `CmdEntity::init_mentity`
	#
	# Plus returns `WarningNoMDoc` if no MDoc was found for the MEntity.
	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		if mdoc == null then
			mdoc = if fallback then mentity.mdoc_or_fallback else mentity.mdoc
		end
		if mdoc == null then return new WarningNoMDoc(mentity)
		return res
	end

	# Render `mdoc` depending on `full_doc` and `format`
	fun render_comment: nullable Writable do
		var mdoc = self.mdoc
		if mdoc == null then return null

		if full_doc then return mdoc.documentation
		return mdoc.synopsis
	end
end

# No MDoc for `mentity`
class WarningNoMDoc
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No documentation for `{mentity.full_name}`."
end

# Get the link to a MEntity API documentation
class CmdEntityLink
	super CmdEntity

	# The link text to display
	var text: nullable String = null is optional, writable

	# The link title to display when the link is hovered
	var title: nullable String = null is optional, writable

	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		if text == null then
			text = mentity.name
		end
		if title == null then
			var mdoc = mentity.mdoc_or_fallback
			if mdoc != null then
				title = mdoc.synopsis
			end
		end
		return res
	end
end

# An abstract inheritance command
#
# For things like ancestors, parents, children and descendants.
abstract class CmdInheritance
	super CmdEntityList

	autoinit(model, mainmodule, filter, mentity, mentity_name, limit, page, count, max)

	# Mainmodule for class linearization
	var mainmodule: MModule
end

# MEntity ancestors command
#
# Retrieve all the ancestors (direct and indirect) of a MEntity.
class CmdAncestors
	super CmdInheritance

	# Include direct parents in the ancestors list
	#
	# Default is `true`.
	var parents = true is optional, writable

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		var ancestors = mentity.collect_ancestors(mainmodule, filter).to_a
		if parents then
			results = ancestors
			return res
		end

		var parents = mentity.collect_parents(mainmodule, filter)
		var mentities = new HashSet[MEntity]
		for ancestor in ancestors do
			if not parents.has(ancestor) then mentities.add ancestor
		end
		results = mentities.to_a
		return res
	end
end

# MEntity parents command
class CmdParents
	super CmdInheritance

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		results = mentity.collect_parents(mainmodule, filter).to_a
		return res
	end
end

# MEntity children command
class CmdChildren
	super CmdInheritance

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		results = mentity.collect_children(mainmodule, filter).to_a
		return res
	end
end

# MEntity descendants command
class CmdDescendants
	super CmdInheritance

	# Include direct children in the descendants list
	#
	# Default is `true`.
	var children = true is optional, writable

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		var descendants = mentity.collect_descendants(mainmodule, filter).to_a
		if children then
			results = descendants
			return res
		end

		var children = mentity.collect_children(mainmodule, filter)
		var mentities = new HashSet[MEntity]
		for descendant in descendants do
			if not children.has(descendant) then mentities.add descendant
		end
		results = mentities.to_a
		return res
	end
end

# Linearization command
#
# Collects and linearizes definitions about an MEntity.
class CmdLinearization
	super CmdInheritance

	# Same states than `CmdEntity::init_mentity`
	#
	# Plus returns `WarningNoLinearization` if no linearization can be computed
	# from the mentity.
	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		sorter = null
		results = mentity.collect_linearization(mainmodule)
		if results == null then return new WarningNoLinearization(mentity)
		return res
	end
end

# No linearization computed for `mentity`.
class WarningNoLinearization
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No linearization for `{mentity.full_name}`"
end

# A free text search command
class CmdSearch
	super CmdEntities

	# Free text command string
	var query: nullable String = null is optional, writable

	# Return states:
	# * `CmdSuccess`: everything was ok;
	# * `ErrorNoQuery`: no `query` provided.
	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res

		var query = self.query
		if query == null then return new ErrorNoQuery
		sorter = null
		results = model.find(query)
		return res
	end
end

# No query string given
class ErrorNoQuery
	super CmdError

	redef fun to_s do return "Missing search string"
end

# MEntity feature list
#
# Mostly a list of mentities defined in `mentity`.
class CmdFeatures
	super CmdEntityList

	# Same as `CmdEntity::init_mentity`
	#
	# Plus `WarningNoFeatures` if no features are found for `mentity`.
	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		var mentities = new Array[MEntity]
		if mentity isa MPackage then
			mentities.add_all mentity.collect_mgroups(filter)
			mentities.add_all mentity.collect_mmodules(filter)
		else if mentity isa MGroup then
			mentities.add_all mentity.collect_mgroups(filter)
			mentities.add_all mentity.collect_mmodules(filter)
		else if mentity isa MModule then
			mentities.add_all mentity.collect_local_mclassdefs(filter)
		else if mentity isa MClass then
			mentities.add_all mentity.collect_intro_mproperties(filter)
			mentities.add_all mentity.collect_redef_mpropdefs(filter)
		else if mentity isa MClassDef then
			mentities.add_all mentity.collect_intro_mpropdefs(filter)
			mentities.add_all mentity.collect_redef_mpropdefs(filter)
		else if mentity isa MProperty then
			mentities.add_all mentity.collect_mpropdefs(filter)
		else
			return new WarningNoFeatures(mentity)
		end
		self.results = mentities
		return res
	end
end

# TODO remove once the filters/sorters are merged
class CmdIntros
	super CmdInheritance

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		if mentity isa MModule then
			var mentities = mentity.collect_intro_mclasses(filter).to_a
			self.results = mentities
		else if mentity isa MClass then
			var mentities = mentity.collect_intro_mproperties(filter).to_a
			self.results = mentities
		else if mentity isa MClassDef then
			var mentities = mentity.collect_intro_mpropdefs(filter).to_a
			mainmodule.linearize_mpropdefs(mentities)
			self.results = mentities
		else
			return new WarningNoFeatures(mentity)
		end
		return res
	end
end

# TODO remove once the filters/sorters are merged
class CmdRedefs
	super CmdInheritance

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		if mentity isa MModule then
			var mentities = mentity.collect_redef_mclassdefs(filter).to_a
			self.results = mentities
		else if mentity isa MClass then
			var mentities = mentity.collect_redef_mpropdefs(filter).to_a
			self.results = mentities
		else if mentity isa MClassDef then
			var mentities = mentity.collect_redef_mpropdefs(filter).to_a
			mainmodule.linearize_mpropdefs(mentities)
			self.results = mentities
		else
			return new WarningNoFeatures(mentity)
		end
		return res
	end
end

# TODO remove once the filters/sorters are merged
class CmdAllProps
	super CmdInheritance

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		if mentity isa MClass then
			results = mentity.collect_accessible_mproperties(mainmodule, filter).to_a
		else
			return new WarningNoFeatures(mentity)
		end
		return res
	end
end

# No feature list for `mentity`
class WarningNoFeatures
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No features for `{mentity.full_name}`"
end

# Abstract command that returns source-code pieces
abstract class CmdCode
	super DocCommand

	autoinit(model, filter, node, format)

	# AST node to display code from
	var node: nullable ANode = null is optional, writable

	# Rendering format
	#
	# Set the output format for this piece of code.
	# Can be "raw", "html" or "ansi".
	# Default is "raw".
	#
	# This format can be different than the format used in the command response.
	# For example you can choose to render code as HTML inside a JSON object response.
	# Another example is to render raw format to put into a HTML code tag.
	var format = "raw" is optional, writable

	# Render `node` depending on the selected `format`
	fun render_code(node: ANode): Writable do
		return node.location.text
	end
end

# Cmd that finds the source code related to an `mentity`
class CmdEntityCode
	super CmdEntity
	super CmdCode

	autoinit(model, modelbuilder, filter, mentity, mentity_name, format)

	# ModelBuilder used to get AST nodes from entities
	var modelbuilder: ModelBuilder

	# Same as `CmdEntity::init_mentity`
	#
	# Plus `WarningNoCode` if no code/AST node is found for `mentity`.
	redef fun init_command do
		if node != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		if mentity isa MClass then mentity = mentity.intro
		if mentity isa MProperty then mentity = mentity.intro
		node = modelbuilder.mentity2node(mentity)
		if node == null then return new WarningNoCode(mentity)
		return res
	end
end

# No code for `mentity`
class WarningNoCode
	super CmdWarning

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "No code for `{mentity.full_name}`"
end

# Model commands

# A command that returns a list of all mentities in a model
class CmdModelEntities
	super CmdEntities

	# Kind of mentities to be returned.
	#
	# Value must be one of "packages", "groups", "modules", "classes", "classdefs",
	# "properties", "propdefs" or "all".
	#
	# Default is "all".
	var kind = "all" is optional, writable

	# Default limit is `10`
	redef var limit = 10

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res

		var mentities = new Array[MEntity]
		if kind == "packages" then
			mentities = model.collect_mpackages(filter).to_a
		else if kind == "groups" then
			mentities = model.collect_mgroups(filter).to_a
		else if kind == "modules" then
			mentities = model.collect_mmodules(filter).to_a
		else if kind == "classes" then
			mentities = model.collect_mclasses(filter).to_a
		else if kind == "classdefs" then
			mentities = model.collect_mclassdefs(filter).to_a
		else if kind == "properties" then
			mentities = model.collect_mproperties(filter).to_a
		else if kind == "propdefs" then
			mentities = model.collect_mpropdefs(filter).to_a
		else
			mentities = model.collect_mentities(filter).to_a
		end
		results = mentities
		return res
	end
end

# A command that returns a random list of mentities from a model
class CmdRandomEntities
	super CmdModelEntities

	# Always return `CmdSuccess`
	redef fun init_results do
		if results != null then return new CmdSuccess
		var res = super
		if not res isa CmdSuccess then return res
		randomize
		return res
	end

	# Randomize mentities order
	fun randomize do
		var results = self.results
		if results == null then return
		results.shuffle
	end
end
