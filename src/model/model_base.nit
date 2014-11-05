# This file is part of NIT ( http://www.nitlanguage.org ).
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

# The container class of a Nit object-oriented model.
# A model knows modules, classes and properties and can retrieve them.
class Model
end

# A named and possibly documented entity in the model.
# This class is useful to generalize presentation of entities to the human.
abstract class MEntity
	# The short (unqualified) name of this model entity
	fun name: String is abstract

	# A Model Entity has a direct link to its model
	fun model: Model is abstract
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
