# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# The abstract concept of model and related common things
module model_base
import location

# The container class of a Nit object-oriented model.
# A model knows modules, classes and properties and can retrieve them.
class Model
	super MEntity

	redef fun model do return self

	# Place-holder object that means no-location
	#
	# See `MEntity::location`
	var no_location = new Location(null, 0, 0, 0, 0)
end

# A named and possibly documented entity in the model.
# This class is useful to generalize presentation of entities to the human.
abstract class MEntity
	# The short (unqualified) name of this model entity.
	#
	# The short-name is based from the identifiers used to declare or denote the entity.
	# It is usually globally ambiguous but is often enough in a precise local context.
	#
	# It is suitable to use the short-name in message to the user.
	# However, special care must be used in case of potential ambiguities or name conflict.
	fun name: String is abstract

	# A fully-qualified name of this model entity.
	#
	# The full-name is based on the short name and is usually prefixed by the name of an outer entity.
	# Usually the quad (`::`) is used to separate the different names.
	#
	# The full-name is expected to be unique and unambiguous in lawful Nit models for the same kind of entity.
	#
	# It is often suitable to use it in message to the user.
	# However, some full-name could be long and verbose,
	#
	# See the specific implementation in subclasses for details.
	fun full_name: String is abstract

	# A fully-qualified C-like identifier of this model entity.
	#
	# The C-name is a name that respects the rule of identifiers in the C language:
	# it is only made of alphanumeric characters and starts with a letter (or a underscore).
	#
	# The C-name can be seen as a mangled version of the `full_name`.
	# Therefore, it is expected to be unique and unambiguous in lawful Nit models for the same kind of entity.
	#
	# The C-name is used by tools that need some identifiers in generated files to designate the
	# entity.
	#
	# Is is not suitable to use it directly with the user (e.g. in message) and
	# indirect use should be restricted (e.g. to name a web-page)
	fun c_name: String is abstract

	# The origin of the definition.
	#
	# Most model entities are defined in a specific place in the source base.
	#
	# Because most model entities have one,
	# it is simpler for the client to have a non-nullable return value.
	# For entities that lack a location, mock-up special locations are used instead.
	# By default it is `model.no_location`.
	fun location: Location do return model.no_location

	# A Model Entity has a direct link to its model
	fun model: Model is abstract

	# The indication that the entity did not pass some semantic verifications.
	#
	# This simple flag is set by a given analysis to say that the entity is broken and unusable in
	# an execution.
	# When an entity status is set to broken, it is usually associated with a error message.
	#
	# If it is safe to do so, clients of the model SHOULD just skip broken entities in their processing.
	# Clients that do not care about the executability (e.g. metrics) MAY still process the entity or
	# perform specific checks to determinate the validity of the entity.
	#
	# Note that the broken status is not propagated to enclosing and enclosed entities.
	# e.g. a broken method does not make the whole module broken.
	var is_broken = false is writable

	# Is `self` created for internal purpose?
	#
	# Fictive entities are used internally but they should not be
	# exposed to the final user.
	var is_fictive: Bool = false is writable

	# Is `self` created for unit testing purpose?
	#
	# See `nitunit`.
	var is_test: Bool = false is writable
end

# Something that represents a concern
abstract class MConcern
	super MEntity
	# The concern that contains `self` or null if `self` is the root of the concern hierarchy
	fun parent_concern: nullable MConcern is abstract
end

# A visibility (for modules, class and properties)
# Valid visibility are:
#
#  * `intrude_visibility`
#  * `public_visibility`
#  * `protected_visibility`
#  * `none_visibility`
#  * `private_visiblity`
#
# Note this class is basically an enum.
# FIXME: use a real enum once user-defined enums are available
class MVisibility
	super Comparable
	redef type OTHER: MVisibility

	redef var to_s: String

	private var level: Int

	# TODO: private init because enumeration.

	# Is self give less visibility than other
	# none < private < protected < public < intrude
	redef fun <(other)
	do
		return self.level < other.level
	end
end

# A `Comparator` to sort mentities by their names.
class MEntityNameSorter
	super Comparator

	redef type COMPARED: MEntity

	# Returns `a.name <=> b.name`.
	redef fun compare(a, b) do return a.name <=> b.name
end

# The visibility level `intrude`
fun intrude_visibility: MVisibility do return once new MVisibility("intrude", 5)
# The visibility level `public`
fun public_visibility: MVisibility do return once new MVisibility("public", 4)
# The visibility level `protected`
fun protected_visibility: MVisibility do return once new MVisibility("protected", 3)
# The visibility level `private`
fun private_visibility: MVisibility do return once new MVisibility("private", 2)
# The visibility level `none` (no visibility)
fun none_visibility: MVisibility do return once new MVisibility("none", 1)
