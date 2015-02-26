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

# Base entities shared by all the nitdoc code.
module doc_base

import toolcontext
import model_utils
import model_ext

# The model of a Nitdoc documentation.
#
# `DocModel` contains the list of the `DocPage` to be generated.
#
# The model is populated through `DocPhase` to be constructed.
# It is a placeholder to share data between each phase.
class DocModel

	# `DocPage` composing the documentation.
	#
	# This is where `DocPhase` store and access pages to produce documentation.
	var pages = new Array[DocPage]

	# Nit `Model` from which we extract the documentation.
	var model: Model is writable

	# The entry point of the `model`.
	var mainmodule: MModule is writable
end

# A documentation page abstraction.
#
# The page contains a link to the `root` of the `DocComposite` that compose the
# the page.
class DocPage

	# Title of this page.
	var title: String is writable

	# Root element of the page.
	#
	# `DocPhase` access the structure of the page from the `DocRoot`.
	var root = new DocRoot

	redef fun to_s do return title
end

# `DocPage` elements that can be nested in another.
#
# `DocComposite` is an abstraction for everything that go in a `DocPage` like
# sections, articles, images, lists, graphs...
#
# It provides base services for nesting mechanisms following the
# *Composite pattern*.
# The composed structure is a tree from a `DocRoot` that can be manipulated
# recursively.
abstract class DocComposite

	# Parent element.
	var parent: nullable DocComposite = null

	# Does `self` have a `parent`?
	fun is_root: Bool do return parent == null

	# Children elements contained in `self`.
	#
	# Children are ordered, this order can be changed by the `DocPhase`.
	var children = new Array[DocComposite]

	# Does `self` have `children`?
	fun is_empty: Bool do return children.is_empty

	# Add a `child` to `self`.
	#
	# Shortcut for `children.add`.
	fun add_child(child: DocComposite) do
		children.add child
	end
end

# The `DocComposite` element that contains all the other.
#
# The root uses a specific subclass to provide different a different behavior
# than other `DocComposite` elements.
class DocRoot
	super DocComposite

	# No op for `RootSection`.
	redef fun parent=(p) do end
end

# Base page elements.

# `DocSection` are used to break the documentation page into meaningfull parts.
#
# The content of the documentation summary is based on the section structure
# contained in the DocComposite tree.
class DocSection
	super DocComposite
end

# `DocArticle` are pieces of documentation.
#
# They maintains the content (text, list, image...) of a documentation page.
class DocArticle
	super DocComposite
end

# A DocPhase is a step in the production of a Nitdoc documentation.
#
# Phases work from a `DocModel`.
# Specific phases are used to populate, organize, enhance and render the content
# of the documentation pages.
#
# See `doc_phases` for available DocPhase.
class DocPhase

	# Link to the ToolContext to access Nitdoc tool options.
	var ctx: ToolContext

	# `DocModel` used by this phase to work.
	var doc: DocModel

	# Starting point of a `DocPhase`.
	#
	# This is where the behavior of the phase is implemented.
	# Phases can populate, edit or render the `doc` from here.
	fun apply is abstract
end

redef class ToolContext

	# Directory where the Nitdoc is rendered.
	var opt_dir = new OptionString("output directory", "-d", "--dir")

	# Shortcut for `opt_dir.value` with default "doc".
	var output_dir: String is lazy do return opt_dir.value or else "doc"

	redef init do
		super
		option_context.add_option(opt_dir)
	end
end

# Catalog properties by kind.
class PropertiesByKind
	# The virtual types.
	var virtual_types = new PropertyGroup[MVirtualTypeProp]("Virtual types")

	# The constructors.
	var constructors = new PropertyGroup[MMethod]("Contructors")

	# The attributes.
	var attributes = new PropertyGroup[MAttribute]("Attributes")

	# The methods.
	var methods = new PropertyGroup[MMethod]("Methods")

	# The inner classes.
	var inner_classes = new PropertyGroup[MInnerClass]("Inner classes")

	# All the groups.
	#
	# Sorted in the order they are displayed to the user.
	var groups: SequenceRead[PropertyGroup[MProperty]] = [
			virtual_types,
			constructors,
			attributes,
			methods,
			inner_classes: PropertyGroup[MProperty]]

	# Add each the specified property to the appropriate list.
	init with_elements(properties: Collection[MProperty]) do add_all(properties)

	# Add the specified property to the appropriate list.
	fun add(property: MProperty) do
		if property isa MMethod then
			if property.is_init then
				constructors.add property
			else
				methods.add property
			end
		else if property isa MVirtualTypeProp then
			virtual_types.add property
		else if property isa MAttribute then
			attributes.add property
		else if property isa MInnerClass then
			inner_classes.add property
		else
			abort
		end
	end

	# Add each the specified property to the appropriate list.
	fun add_all(properties: Collection[MProperty]) do
		for p in properties do add(p)
	end

	# Sort each group with the specified comparator.
	fun sort_groups(comparator: Comparator) do
		for g in groups do comparator.sort(g)
	end
end

# An ordered list of properties of the same kind.
class PropertyGroup[E: MProperty]
	super Array[E]

	# The title of the group, as displayed to the user.
	var title: String
end

redef class MEntity
	# Name displayed in console for debug and tests.
	fun nitdoc_name: String do return name.html_escape
end

redef class MClassDef
	redef fun nitdoc_name do return mclass.nitdoc_name
end

redef class MPropDef
	redef fun nitdoc_name do return mproperty.nitdoc_name
end
