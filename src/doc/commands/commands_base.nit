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

# Documentation commands
#
# A DocCommand returns data about a model, an entity or a piece of documentation.
#
# Each command assumes a different goal like getting the comment of an entity,
# getting a list of packages, getting an UML class diagram etc.
#
# Commands are used by documentation tools to build up documentation ressources
# like Nitweb, Nitx, Nitdoc or documentation cards within READMEs.
module commands_base

import model::model_index

# Documentation command
#
# An abstract command that works on a Model.
#
# Since they are used by a wide variety of clients, initialization of DocCommands
# works in two steps.
#
# First, you pass the data you already have to the command at init:
# ~~~nitish
# var c1 = new CmdEntity(view, mentity_name = "Array")
# var c2 = new CmdEntity(view, mentity = my_entity)
# ~~~
#
# Then, you call `init_command` to initialize the missing field from the stub data:
# ~~~nitish
# var r1 = c1.init_command
# assert c1.mentity != null
# assert r1 isa CmdSuccess
#
# var r2 = c2.init_command
# assert c2.mentity_name != null
# assert r2 isa CmdSuccess
# ~~~
#
# See `init_command` for more details about the returned statuses.
abstract class DocCommand

	# Model to retrieve data for
	var model: Model

	# ModelFilter to apply if any
	var filter: nullable ModelFilter

	# Initialize the command
	#
	# Returns a command message that gives the status of the command initialization.
	#
	# There is 3 categories of messages:
	# * `CmdSuccess`: when the command that initialized correctly;
	# * `CmdError`: when the command cannot be initialized;
	# * `CmdWarning`: when something is wrong with the command but a result still can be produced.
	#
	# Warnings are generally used to distinguish empty list or mdoc from no data at all.
	fun init_command: CmdMessage do return new CmdSuccess

	# Return a new filter for that command execution.
	fun cmd_filter: ModelFilter do
		var filter = self.filter
		if filter == null then return new ModelFilter
		return new ModelFilter.from(filter)
	end
end

# Command message
#
# A message returned by a command.
# Messages are used to inform the client of the command initialization status and results.
# Mostly, messages are used to check if a command is in an error state.
abstract class CmdMessage
end

# Command Success
#
# Returned when the command was performed without any error or warning.
class CmdSuccess
	super CmdMessage
end

# Command Error
#
# Command errors are returned when the command cannot provide results because
# of a problem on the user-end (i.e. Bad command name, MEntity not found etc.).
abstract class CmdError
	super CmdMessage
end

# Command Warning
#
# Command warnings are returned when the command cannot provide results because
# of a problem on the model-end (i.e. No documentation for a MEntity, no code etc.)
abstract class CmdWarning
	super CmdMessage
end

# Basic commands

# A command about a MEntity
class CmdEntity
	super DocCommand

	# MEntity this command is about
	#
	# Alternatively you can provide a `mentity_name`.
	var mentity: nullable MEntity = null is optional, writable

	# Name of the mentity this command is about
	#
	# Alternatively you can directly provide the `mentity`.
	var mentity_name: nullable String = null is optional, writable

	# Initialize the command mentity.
	#
	# If not already set, tries to find the `mentity` from the `mentity_name`.
	#
	# This function try to match `mentity_name` both as a `full_name` and
	# `name`.
	#
	# Return states:
	# * `CmdSuccess`: everything was ok;
	# * `ErrorMEntityNoName`: no `mentity` and no `mentity_name` provided;
	# * `ErrorMEntityNotFound`: no mentity for `mentity_name`;
	# * `ErrorMEntityConflict`: `mentity_name` was a non-qualified name that
	#   returns more than one MEntity.
	fun init_mentity: CmdMessage do
		if mentity != null then
			if mentity_name == null then mentity_name = mentity.as(not null).full_name
			return new CmdSuccess
		end

		var mentity_name = self.mentity_name
		if mentity_name == null or mentity_name.is_empty then return new ErrorMEntityNoName

		mentity = model.mentity_by_full_name(mentity_name)
		if mentity == null then
			var mentities = model.mentities_by_name(mentity_name)
			if mentities.is_empty then
				var suggest = model.find(mentity_name, 3)
				return new ErrorMEntityNotFound(mentity_name, suggest)
			else if mentities.length > 1 then
				return new ErrorMEntityConflict(mentity_name, mentities)
			end
			mentity = mentities.first
		end
		return new CmdSuccess
	end

	# See `init_mentity`.
	redef fun init_command do return init_mentity
end

# No MEntity name provided
class ErrorMEntityNoName
	super CmdError
	redef fun to_s do return "No entity name provided"
end

# No MEntity matching `mentity_name`
class ErrorMEntityNotFound
	super CmdError

	# MEntity name provided
	var mentity_name: String

	# Suggestions matching the `mentity_name`.
	var suggestions: Array[MEntity]

	redef fun to_s do
		var res = new Buffer
		res.append "No entity for `{mentity_name}`.\n"
		res.append "Did you mean: "
		for mentity in suggestions do
			res.append " `{mentity.full_name}`"
			if mentity != suggestions.last then res.append ","
		end
		return res.write_to_string
	end
end

# Multiple MEntities matching `mentity_name`
class ErrorMEntityConflict
	super CmdError

	# MEntity name provided
	var mentity_name: String

	# Conflicts for `mentity_name`
	var conflicts: Array[MEntity]

	redef fun to_s do
		var res = new Buffer
		res.append "Multiple entities for `{mentity_name}`:"
		for mentity in conflicts do
			res.append " `{mentity.full_name}`"
			if mentity != conflicts.last then res.append ","
		end
		return res.write_to_string
	end
end

# A command that returns a list of results
abstract class CmdList
	super DocCommand

	# Type of result
	type ITEM: Object

	# Limit the items in the list
	var limit: nullable Int = null is optional, writable

	# Page to display
	var page: nullable Int = null is optional, writable

	# Total number of ret
	var count: nullable Int = null is optional, writable

	# Total number of pages
	var max: nullable Int = null is optional, writable

	# Comparator used to sort the list
	var sorter: nullable Comparator = null is writable

	# Items in the list
	var results: nullable Array[ITEM] = null is writable

	# `init_command` is used to factorize the sorting and pagination of results
	#
	# See `init_results` for the result list initialization.
	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res
		res = init_results
		if not res isa CmdSuccess then return res
		sort
		paginate
		return res
	end

	# Initialize the `results` list
	#
	# This method must be redefined by CmdList subclasses.
	fun init_results: CmdMessage do return new CmdSuccess

	# Sort `mentities` with `sorter`
	fun sort do
		var results = self.results
		if results == null then return
		var sorter = self.sorter
		if sorter == null then return
		sorter.sort(results)
	end

	# Paginate the results
	#
	# This methods keeps only a subset of `results` depending on the current `page` and the
	# number of elements to return set by `limit`.
	#
	# The `count` can be specified when `results` does not contain all the results.
	# For example when the results are already limited from a DB statement.
	fun paginate do
		var results = self.results
		if results == null then return

		var limit = self.limit
		if limit == null then return

		var page = self.page
		if page == null or page <= 0 then page = 1

		var count = self.count
		if count == null then count = results.length

		var max = count / limit
		if max == 0 then
			page = 1
			max = 1
		else if page > max then
			page = max
		end

		var lstart = (page - 1) * limit
		var lend = limit
		if lstart + lend > count then lend = count - lstart
		self.results = results.subarray(lstart, lend)
		self.max = max
		self.limit = limit
		self.page = page
		self.count = count
	end
end

# A list of mentities
abstract class CmdEntities
	super CmdList

	redef type ITEM: MEntity

	redef var sorter = new MEntityNameSorter
end

# A command about a MEntity that returns a list of mentities
abstract class CmdEntityList
	super CmdEntity
	super CmdEntities

	autoinit(model, filter, mentity, mentity_name, limit, page, count, max)

	redef fun init_command do
		var res = init_mentity
		if not res isa CmdSuccess then return res
		res = init_results
		if not res isa CmdSuccess then return res
		sort
		paginate
		return res
	end
end
