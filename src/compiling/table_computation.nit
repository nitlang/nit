# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
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

# Compute tables for classes and modules.
package table_computation

import mmloader
private import primitive_info
import program

# Something that store color of table elements
abstract class ColorContext
	var _colors: HashMap[TableElt, Int] = new HashMap[TableElt, Int]

	# The color of a table element.
	fun color(e: TableElt): Int
	do
		return _colors[e]
	end

	# Is a table element already colored?
	fun has_color(e: TableElt): Bool
	do
		return _colors.has_key(e)
	end

	# Assign a color to a table element.
	fun color=(e: TableElt, c: Int)
	do
		_colors[e] = c
		var idx = c
		for i in [0..e.length[ do
			_colors[e.item(i)] = idx
			idx = idx + 1
		end
	end
end

# All information and results of the global analysis.
class TableInformation
	super ColorContext
	# FIXME: do something better.
	readable writable var _max_class_table_length: Int = 0
end

# A compiled class is a class in a program
class CompiledClass
	super ColorContext
	# The corresponding local class in the main module of the prgram
	readable var _local_class: MMLocalClass

	# The identifier of the class
	readable writable var _id: Int = 0

	# The full class table of the class
	readable var _class_table: Array[nullable TableElt] = new Array[nullable TableElt]

	# The full instance table of the class
	readable var _instance_table: Array[nullable TableElt] = new Array[nullable TableElt]

	# The proper class table part (no superclasses but all refinements)
	readable writable var _class_layout: TableEltComposite = new TableEltComposite(self)

	# The proper instance table part (no superclasses but all refinements)
	readable writable var _instance_layout: TableEltComposite = new TableEltComposite(self)

	init(c: MMLocalClass) do _local_class = c
end

redef class MMConcreteClass
	# The table element of the subtype check
	fun class_color_pos: TableEltClassColor do return _class_color_pos.as(not null)
	var _class_color_pos: nullable TableEltClassColor

	# The proper local class table part (nor superclasses nor refinments)
	readable var _class_layout: Array[TableElt] = new Array[TableElt]

	# The proper local instance table part (nor superclasses nor refinments)
	readable var _instance_layout: Array[TableElt] = new Array[TableElt]

	# Build the local layout of the class and feed the module table
	private fun build_layout_in(module_table: Array[ModuleTableElt])
	do
		var clt = _class_layout
		var ilt = _instance_layout

		if global.intro == self then
			module_table.add(new TableEltClassId(self))
			var cpp = new TableEltClassColor(self)
			_class_color_pos = cpp
			module_table.add(cpp)
			clt.add(new TableEltClassInitTable(self))
		end
		for p in local_local_properties do
			var pg = p.global
			if pg.intro == p then
				if p isa MMAttribute then
					ilt.add(new TableEltAttr(p))
				else if p isa MMMethod then
					clt.add(new TableEltMeth(p))
				else if p isa MMTypeProperty then
					clt.add(new TableEltVTClassId(p))
					clt.add(new TableEltVTClassColor(p))
				end
			end
			if p isa MMMethod and p.need_super then
				clt.add(new TableEltSuper(p))
			end
		end

		if not ilt.is_empty then
			var teg = new ModuleTableEltGroup
			teg.elements.append(ilt)
			module_table.add(teg)
		end

		if not clt.is_empty then
			var teg = new ModuleTableEltGroup
			teg.elements.append(clt)
			module_table.add(teg)
		end
	end
end

redef class Program
	# Information about the class tables
	readable var _table_information: TableInformation = new TableInformation

	# Associate global classes to compiled classes
	readable var _compiled_classes: HashMap[MMGlobalClass, CompiledClass] = new HashMap[MMGlobalClass, CompiledClass]

	fun do_table_computation
	do
		tc.info("Building tables",1)
		for m in main_module.mhe.greaters_and_self do
			tc.info("Building tables for module: {m.name}",2)
			m.local_analysis
		end

		tc.info("Merging all tables",2)
		do_global_table_analysis
	end

	# Do the complete global analysis
	private fun do_global_table_analysis
	do
		var smallest_classes = new Array[MMLocalClass]
		var global_properties = new HashSet[MMGlobalProperty]
		var ctab = new Array[TableElt]
		var itab = new Array[TableElt]

		ctab.add(new TableEltClassSelfId)
		ctab.add(new TableEltClassObjectSize)
		ctab.add(new TableEltClassSelfName)
		itab.add(new TableEltVftPointer)
		itab.add(new TableEltObjectId)

		var pclassid = -1
		var classid = 3

		# We have to work on ALL the classes of the module
		var classes = new Array[MMLocalClass]
		for c in main_module.local_classes do classes.add(c)
		classes.sort !cmp(x,y) = x.total_order_compare(y)

		for c in classes do
			# Associate a CompiledClass to the class
			var cc = new CompiledClass(c)
			compiled_classes[c.global] = cc

			# Assign a unique class identifier
			# (negative are for primitive classes)
			var gc = c.global
			var bm = gc.mmmodule
			if c.primitive_info != null then
				cc.id = pclassid
				pclassid = pclassid - 4
			else
				cc.id = classid
				classid = classid + 4
			end

			# Register is the class is a leaf
			if c.cshe.direct_smallers.is_empty then
				smallest_classes.add(c)
			end

			# Store the colortableelt in the class table pool
			var bc = c.global.intro
			assert bc isa MMConcreteClass
			ctab.add(bc.class_color_pos)
		end

		# Compute core and crown classes for colorization
		var crown_classes = new HashSet[MMLocalClass]
		var core_classes = new HashSet[MMLocalClass]
		for c in smallest_classes do
			while c.cshe.direct_greaters.length == 1 do
				c = c.cshe.direct_greaters.first
			end
			crown_classes.add(c)
			core_classes.add_all(c.cshe.greaters_and_self)
		end
		#print("nbclasses: {classes.length} leaves: {smallest_classes.length} crown: {crown_classes.length} core: {core_classes.length}")

		# Colorize core color for typechecks
		colorize(ctab, crown_classes, 0)

		# Compute tables for typechecks
		var maxcolor = 0
		for c in classes do
			var cc = compiled_classes[c.global]
			if core_classes.has(c) then
				# For core classes, just build the table
				build_tables_in(cc.class_table, c, ctab)
				if maxcolor < cc.class_table.length then maxcolor = cc.class_table.length
			else
				# For other classes, it's easier: just append to the parent tables
				var sc = c.cshe.direct_greaters.first
				var scc = compiled_classes[sc.global]
				assert cc.class_table.is_empty
				cc.class_table.add_all(scc.class_table)
				var bc = c.global.intro
				assert bc isa MMConcreteClass
				var colpos = bc.class_color_pos
				var colposcolor = cc.class_table.length
				table_information.color(colpos) = colposcolor
				cc.class_table.add(colpos)
				if maxcolor < colposcolor then maxcolor = colposcolor
			end
		end
		table_information.max_class_table_length = maxcolor + 1

		# Fill class table and instance tables pools
		for c in classes do
			var cc = compiled_classes[c.global]
			var cte = cc.class_layout
			var ite = cc.instance_layout
			for sc in c.crhe.greaters_and_self do
				if sc isa MMConcreteClass then
					cte.add(sc, sc.class_layout)
					ite.add(sc, sc.instance_layout)
				end
			end

			if core_classes.has(c) then
				if cte.length > 0 then
					ctab.add(cte)
				end
				if ite.length > 0 then
					itab.add(ite)
				end
			end
		end

		# Colorize all elements in pools tables
		colorize(ctab, crown_classes, maxcolor+1)
		colorize(itab, crown_classes, 0)

		# Build class and instance tables now things are colored
		table_information.max_class_table_length = 0
		for c in classes do
			var cc = compiled_classes[c.global]
			if core_classes.has(c) then
				# For core classes, just build the table
				build_tables_in(cc.class_table, c, ctab)
				build_tables_in(cc.instance_table, c, itab)
			else
				# For other classes, it's easier: just append to the parent tables
				var sc = c.cshe.direct_greaters.first
				var scc = compiled_classes[sc.global]
				cc.class_table.clear
				cc.class_table.add_all(scc.class_table)
				var bc = c.global.intro
				assert bc isa MMConcreteClass
				var colpos = bc.class_color_pos
				cc.class_table[table_information.color(colpos)] = colpos
				while cc.class_table.length <= maxcolor do
					cc.class_table.add(null)
				end
				append_to_table(cc.class_table, cc.class_layout)
				assert cc.instance_table.is_empty
				cc.instance_table.add_all(scc.instance_table)
				append_to_table(cc.instance_table, cc.instance_layout)
			end
		end
	end

	# Perform coloring
	fun colorize(elts: Array[TableElt], classes: Collection[MMLocalClass], startcolor: Int)
	do
		var colors = new HashMap[Int, Array[TableElt]]
		var rel_classes = new Array[MMLocalClass]
		for e in elts do
			var color = -1
			var len = e.length
			if table_information.has_color(e) then
				color = table_information.color(e)
			else
				rel_classes.clear
				for c in classes do
					if e.is_related_to(c) then
						rel_classes.add(c)
					end
				end
				var trycolor = startcolor
				while trycolor != color do
					color = trycolor
					for c in rel_classes do
						var idx = 0
						while idx < len do
							if colors.has_key(trycolor + idx) and not free_color(colors[trycolor + idx], c) then
								trycolor = trycolor + idx + 1
								idx = 0
							else
								idx = idx + 1
							end
						end
					end
				end
				table_information.color(e) = color
			end
			for idx in [0..len[ do
				if colors.has_key(color + idx) then
					colors[color + idx].add(e)
				else
					colors[color + idx] = [e]
				end
			end
		end
	end

	private fun free_color(es: Array[TableElt], c: MMLocalClass): Bool
	do
		for e2 in es do
			if e2.is_related_to(c) then
				return false
			end
		end
		return true
	end

	private fun append_to_table(table: Array[nullable TableElt], cmp: TableEltComposite)
	do
		for j in [0..cmp.length[ do
			var e = cmp.item(j)
			table_information.color(e) = table.length
			table.add(e)
		end
	end

	private fun build_tables_in(table: Array[nullable TableElt], c: MMLocalClass, elts: Array[TableElt])
	do
		var tab = new HashMap[Int, TableElt]
		var len = 0
		for e in elts do
			if e.is_related_to(c) then
				var col = table_information.color(e)
				var l = col + e.length
				tab[col] = e
				if len < l then
					len = l
				end
			end
		end
		var i = 0
		while i < len do
			if tab.has_key(i) then
				var e = tab[i]
				for j in [0..e.length[ do
					table[i] = e.item(j)
					i = i + 1
				end
			else
				table[i] = null
				i = i + 1
			end
		end
	end
end

redef class MMModule
	# The local table of the module (refers things introduced in the module)
	readable var _local_table: Array[ModuleTableElt] = new Array[ModuleTableElt]

	# Builds the local tables and local classes layouts
	private fun local_analysis
	do
		for c in local_classes do
			if c isa MMConcreteClass then
				c.build_layout_in(_local_table)
			end
		end
	end
end

###############################################################################

# An element of a class, an instance or a module table
interface AbsTableElt
end

# An element of a class or an instance table
# Such an elements represent method function pointers, attribute values, etc.
interface TableElt
	super AbsTableElt
	# Is the element conflict to class `c' (used for coloring)
	fun is_related_to(c: MMLocalClass): Bool is abstract

	# Number of sub-elements. 1 if none
	fun length: Int do return 1

	# Access the ith subelement.
	fun item(i: Int): TableElt do return self
end

# An element of a module table
# Such an elements represent colors or identifiers
interface ModuleTableElt
	super AbsTableElt
end

# An element of a module table that represents a group of TableElt defined in the same local class
class ModuleTableEltGroup
	super ModuleTableElt
	readable var _elements: Array[TableElt] = new Array[TableElt]
end

# An element that represents a class property
abstract class TableEltProp
	super TableElt
	readable var _property: MMLocalProperty

	init(p: MMLocalProperty)
	do
		_property = p
	end
end

# An element that represents a function pointer to a global method
class TableEltMeth
	super TableEltProp
end

# An element that represents a class color value for a virtual type
class TableEltVTClassColor
	super TableEltProp
end

# An element that represents a class id value for a virtual type
class TableEltVTClassId
	super TableEltProp
end

# An element that represents a function pointer to the super method of a local method
class TableEltSuper
	super TableEltProp
end

# An element that represents the value stored for a global attribute
class TableEltAttr
	super TableEltProp
end

# An element representing a class information
abstract class AbsTableEltClass
	super AbsTableElt
	# The local class where the information comes from
	readable var _local_class: MMLocalClass

	init(c: MMLocalClass)
	do
		_local_class = c
	end
end

# An element of a class table representing a class information
abstract class TableEltClass
	super TableElt
	super AbsTableEltClass
	redef fun is_related_to(c)
	do
		var bc = c.mmmodule[_local_class.global]
		return c.cshe <= bc
	end
end

# An element representing the id of a class in a module table
class TableEltClassId
	super ModuleTableElt
	super AbsTableEltClass
end

# An element representing the constructor marker position in a class table
class TableEltClassInitTable
	super TableEltClass
end

# An element used for a cast
# Note: this element is both a TableElt and a ModuleTableElt.
# At the TableElt offset, there is the id of the super-class
# At the ModuleTableElt offset, there is the TableElt offset (ie. the color of the super-class).
class TableEltClassColor
	super TableEltClass
	super ModuleTableElt
end

# A Group of elements introduced in the same global-class that are colored together
class TableEltComposite
	super TableElt
	var _table: Array[TableElt]
	var _cc: CompiledClass
	var _offsets: HashMap[MMLocalClass, Int]
	redef fun length do return _table.length
	redef fun is_related_to(c) do return c.cshe <= _cc.local_class

	fun add(c: MMLocalClass, tab: Array[TableElt])
	do
		_offsets[c] = _table.length
		_table.append(tab)
	end

	redef fun item(i) do return _table[i]

	init(cc: CompiledClass)
	do
		_cc = cc
		_table = new Array[TableElt]
		_offsets = new HashMap[MMLocalClass, Int]
	end
end

# The element that represent the class id
class TableEltClassSelfId
	super TableElt
	redef fun is_related_to(c) do return true
end

# The element that represent the class name
class TableEltClassSelfName
	super TableElt
	redef fun is_related_to(c) do return true
end

# The element that represent the Object Size
class TableEltClassObjectSize
	super TableElt
	redef fun is_related_to(c) do return true
end

# The element that represent the object id
class TableEltObjectId
	super TableElt
	redef fun is_related_to(c) do return true
end

# The element that
class TableEltVftPointer
	super TableElt
	redef fun is_related_to(c) do return true
end
