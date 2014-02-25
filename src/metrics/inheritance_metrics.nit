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

# Collect metrics about inheritance usage
module inheritance_metrics

import model
private import metrics_base
import phase
import frontend

redef class ToolContext
	var inheritance_metrics_phase = new InheritanceMetricsPhase(self, null)
end

# Extract metrics about module and class hierarchies.
private class InheritanceMetricsPhase
	super Phase
	redef fun process_mainmodule(mainmodule)
	do
		if not toolcontext.opt_inheritance.value and not toolcontext.opt_all.value then return
		compute_inheritance_metrics(toolcontext, toolcontext.modelbuilder.model)
	end
end

redef class Model
	# Extract the subset of classes from a set of mclass
	private fun extract_classes(mclasses: Collection[MClass]): Set[MClass] do
		var lst = new HashSet[MClass]
		for mclass in mclasses do if mclass.is_class then lst.add(mclass)
		return lst
	end

	# Extract the subset of interfaces from a set of mclass
	private fun extract_interfaces(mclasses: Collection[MClass]): Set[MClass] do
		var lst = new HashSet[MClass]
		for mclass in mclasses do if mclass.is_interface then lst.add(mclass)
		return lst
	end

	# Extract the subset of generic classes/interfaces from a set of mclass
	private fun extract_generics(mclasses: Collection[MClass]): Set[MClass] do
		var lst = new HashSet[MClass]
		for mclass in mclasses do if mclass.arity > 0 then lst.add(mclass)
		return lst
	end

	# Extract the subset of abstract classes from a set of mclass
	private fun extract_abstracts(mclasses: Collection[MClass]): Set[MClass] do
		var lst = new HashSet[MClass]
		for mclass in mclasses do if mclass.is_abstract then lst.add(mclass)
		return lst
	end

	# Extract the subset of user defined classes/interfaces from a set of mclass
	private fun extract_user_defined(mclasses: Collection[MClass]): Set[MClass] do
		var lst = new HashSet[MClass]
		for mclass in mclasses do if mclass.is_user_defined then lst.add(mclass)
		return lst
	end

	# Extract the subset of user defined modules from a set of mmodules
	private fun extract_user_defined_modules(mmodules: Collection[MModule]): Set[MModule] do
		var lst = new HashSet[MModule]
		for mmodule in mmodules do if mmodule.is_user_defined then lst.add(mmodule)
		return lst
	end

	# Extract the subset of classes/interfaces from sl lib
	private fun extract_stdlib(mclasses: Collection[MClass]): Set[MClass] do
		var lst = new HashSet[MClass]
		for mclass in mclasses do if not mclass.is_user_defined then lst.add(mclass)
		return lst
	end

	# Extract the subset of user defined modules from std lib
	private fun extract_stdlib_modules(mmodules: Collection[MModule]): Set[MModule] do
		var lst = new HashSet[MModule]
		for mmodule in mmodules do if not mmodule.is_user_defined then lst.add(mmodule)
		return lst
	end
end

redef class MClass
	# Inheritance
	private var nop: Int = 0		# (NOP) Number of parents (direct superclasses)
	private var nopc: Int = 0 		# (NOPC) Number of class parents
	private var nopi: Int = 0		# (NOPI) Number of interface parents
	private var noa: Int = 0		# (NOA) Number of ancestors (direct and indirect)
	private var noac: Int = 0		# (NOAC) Number of class ancestors
	private var noai: Int = 0		# (NOAI) Number of interface ancestors
	private var noc: Int = 0    	# (NOC) Number of children (direct subclasses)
	private var nocc: Int = 0 		# (NOCC) Number of class children
	private var noci: Int = 0		# (NOCI) Number of interface children
	private var nod: Int = 0    	# (NOD) Number of descendants (direct and indirect)
	private var nodc: Int = 0 		# (NODC) Number of class descendants
	private var nodi: Int = 0		# (NODI) Number of interface descendants
	private var dit: Int = 0		# (DIT) Depth in Inheritance Tree (maximum distance to root of the hierarchy)
	private var ditc: Int = 0		# (DITC) Length of longest path to the root hierarchy and consisting only of extends edges
	private var diti: Int = 0		# (DITI) Length of longest path to the root hierarchy and consisting only of extends implements

	# User Defined inheritance
	private var nopud: Int = 0		# (NOPUD) Number of parents (direct superclasses)
	private var nopcud: Int = 0 	# (NOPCUD) Number of class parents
	private var nopiud: Int = 0		# (NOPIUD) Number of interface parents
	private var noaud: Int = 0		# (NOAUD) Number of ancestors (direct and indirect)
	private var noacud: Int = 0		# (NOACUD) Number of class ancestors
	private var noaiud: Int = 0		# (NOAIUD) Number of interface ancestors
	private var nocud: Int = 0  	# (NOCUD) Number of children (direct subclasses)
	private var noccud: Int = 0 	# (NOCCUD) Number of class children
	private var nociud: Int = 0		# (NOCIUD) Number of interface children
	private var nodud: Int = 0  	# (NODUD) Number of descendants (direct and indirect)
	private var nodcud: Int = 0 	# (NODCUD) Number of class descendants
	private var nodiud: Int = 0		# (NODIUD) Number of interface descendants
	private var ditud: Int = 0		# (DITUD) Depth in Inheritance Tree (maximum distance to root of the hierarchy)
	private var ditcud: Int = 0		# (DITCUD) Length of longest path to the root hierarchy and consisting only of extends edges
	private var ditiud: Int = 0		# (DITIUD) Length of longest path to the root hierarchy and consisting only of extends implements

	private fun compute_class_inheritance_metrics(model: Model) do
		# inheritance metrics
		self.nop = parents.length
		self.nopc = model.extract_classes(parents).length
		self.nopi = model.extract_interfaces(parents).length
		self.noa = ancestors.length
		self.noac = model.extract_classes(ancestors).length
		self.noai = model.extract_interfaces(ancestors).length
		self.noc = children.length
		self.nocc = model.extract_classes(children).length
		self.noci = model.extract_interfaces(children).length
		self.nod = descendants.length
		self.nodc = model.extract_classes(descendants).length
		self.nodi = model.extract_interfaces(descendants).length
		self.dit = path_to_object.length
		self.ditc = class_path_to_object.length
		self.diti = interface_path_to_object.length

		# used defined metrics
		self.nopud = model.extract_user_defined(parents).length
		self.nopcud = model.extract_user_defined(model.extract_classes(parents)).length
		self.nopiud = model.extract_user_defined(model.extract_interfaces(parents)).length
		self.noaud = model.extract_user_defined(ancestors).length
		self.noacud = model.extract_user_defined(model.extract_classes(ancestors)).length
		self.noaiud = model.extract_user_defined(model.extract_interfaces(ancestors)).length
		self.nocud = model.extract_user_defined(children).length
		self.noccud = model.extract_user_defined(model.extract_classes(children)).length
		self.nociud = model.extract_user_defined(model.extract_interfaces(children)).length
		self.nodud = model.extract_user_defined(descendants).length
		self.nodcud = model.extract_user_defined(model.extract_classes(descendants)).length
		self.nodiud = model.extract_user_defined(model.extract_interfaces(descendants)).length
		self.ditud = ud_path_to_object.length
		self.ditcud = ud_class_path_to_object.length
		self.ditiud = ud_interface_path_to_object.length
	end

	# Return the longest path from class to root hierarchy
	private fun path_to_object: Array[MClass] do
		var path = new Array[MClass]
		var max_dit: nullable Int = null
		var max_parent: nullable MClass = null
		var parent_path: nullable Array[MClass] = null

		for p in parents do
			var dit = p.path_to_object.length
			if max_dit == null or dit >= max_dit then
				max_dit = dit
				max_parent = p
				parent_path = p.path_to_object
			end
		end

		if max_parent != null and parent_path != null then
			path.add(max_parent)
			path.add_all(parent_path)
		end

		return path
	end

	# Return the longest path from class to root hierarchy
	private fun ud_path_to_object: Array[MClass] do
		var path = new Array[MClass]
		if not self.is_user_defined then return path
		var max_dit: nullable Int = null
		var max_parent: nullable MClass = null
		var parent_path: nullable Array[MClass] = null

		for p in parents do
			var dit = p.ud_path_to_object.length
			if max_dit == null or dit >= max_dit then
				max_dit = dit
				max_parent = p
				parent_path = p.ud_path_to_object
			end
		end

		if max_parent != null and parent_path != null then
			path.add(max_parent)
			path.add_all(parent_path)
		end

		return path
	end

	# Return the longest path from class to root hierarchy following only classes relations
	private fun class_path_to_object: Array[MClass] do
		var path = new Array[MClass]
		if not self.is_class then return path
		var max_dit: nullable Int = null
		var max_parent: nullable MClass = null
		var parent_path: nullable Array[MClass] = null

		for p in parents do
			var dit = p.class_path_to_object.length
			if max_dit == null or dit >= max_dit then
				max_dit = dit
				max_parent = p
				parent_path = p.class_path_to_object
			end
		end

		if max_parent != null and parent_path != null then
			path.add(max_parent)
			path.add_all(parent_path)
		end

		return path
	end

	# Return the longest path from class to root hierarchy following only interfaces relations
	private fun interface_path_to_object: Array[MClass] do
		var path = new Array[MClass]
		if not self.is_interface then return path
		var max_dit: nullable Int = null
		var max_parent: nullable MClass = null
		var parent_path: nullable Array[MClass] = null

		for p in parents do
			var dit = p.interface_path_to_object.length
			if max_dit == null or dit >= max_dit then
				max_dit = dit
				max_parent = p
				parent_path = p.interface_path_to_object
			end
		end

		if max_parent != null and parent_path != null then
			path.add(max_parent)
			path.add_all(parent_path)
		end

		return path
	end

	# Return the longest path from class to root hierarchy following only ud classes relations
	private fun ud_class_path_to_object: Array[MClass] do
		var path = new Array[MClass]
		if not self.is_class or not self.is_user_defined then return path
		var max_dit: nullable Int = null
		var max_parent: nullable MClass = null
		var parent_path: nullable Array[MClass] = null

		for p in parents do
			var dit = p.ud_class_path_to_object.length
			if max_dit == null or dit >= max_dit then
				max_dit = dit
				max_parent = p
				parent_path = p.ud_class_path_to_object
			end
		end

		if max_parent != null and parent_path != null then
			path.add(max_parent)
			path.add_all(parent_path)
		end

		return path
	end

	# Return the longest path from class to root hierarchy following only ud interfaces relations
	private fun ud_interface_path_to_object: Array[MClass] do
		var path = new Array[MClass]
		if not self.is_interface or not self.is_user_defined then return path
		var max_dit: nullable Int = null
		var max_parent: nullable MClass = null
		var parent_path: nullable Array[MClass] = null

		for p in parents do
			var dit = p.ud_interface_path_to_object.length
			if max_dit == null or dit >= max_dit then
				max_dit = dit
				max_parent = p
				parent_path = p.ud_interface_path_to_object
			end
		end

		if max_parent != null and parent_path != null then
			path.add(max_parent)
			path.add_all(parent_path)
		end

		return path
	end

	# * -> * DUI

	private fun is_dui_eligible: Bool do
		for parent in parents do if parent.name != "Object" then return true
		return false
	end
	private fun is_ccdui_eligible: Bool do
		if not is_class then return false
		for parent in parents do if parent.name != "Object" and parent.is_class then return true
		return false
	end
	private fun is_cidui_eligible: Bool do
		if not is_class then return false
		for parent in parents do if parent.name != "Object" and parent.is_interface then return true
		return false
	end
	private fun is_iidui_eligible: Bool do
		if not is_interface then return false
		for parent in parents do if parent.name != "Object" and parent.is_interface then return true
		return false
	end
	private fun is_if_eligible(model: Model): Bool do return not children.is_empty
	private fun is_ccif_eligible(model: Model): Bool do
		if not is_class then return false
		for child in children do if child.is_class then return true
		return false
	end
	private fun is_icif_eligible(model: Model): Bool do
		if not is_interface then return false
		for child in children do if child.is_class then return true
		return false
	end
	private fun is_iiif_eligible(model: Model): Bool do
		if not is_interface then return false
		for child in children do if child.is_interface then return true
		return false
	end

	# SL -> * DUI

	private fun is_sldui_eligible: Bool do
		if is_user_defined then return false
		for parent in parents do if parent.name != "Object" then return true
		return false
	end
	private fun is_slccdui_eligible: Bool do
		if is_user_defined then return false
		if not is_class then return false
		for parent in parents do if parent.name != "Object" and parent.is_class then return true
		return false
	end
	private fun is_slcidui_eligible: Bool do
		if is_user_defined then return false
		if not is_class then return false
		for parent in parents do if parent.name != "Object" and parent.is_interface then return true
		return false
	end
	private fun is_sliidui_eligible: Bool do
		if is_user_defined then return false
		if not is_interface then return false
		for parent in parents do if parent.name != "Object" and parent.is_interface then return true
		return false
	end
	private fun is_slif_eligible(model: Model): Bool do
		if is_user_defined then return false
		return not children.is_empty
	end
	private fun is_slccif_eligible(model: Model): Bool do
		if is_user_defined then return false
		if not is_class then return false
		for child in children do if child.is_class then return true
		return false
	end
	private fun is_slicif_eligible(model: Model): Bool do
		if is_user_defined then return false
		if not is_interface then return false
		for child in children do if child.is_class then return true
		return false
	end
	private fun is_sliiif_eligible(model: Model): Bool do
		if is_user_defined then return false
		if not is_interface then return false
		for child in children do if child.is_interface then return true
		return false
	end

	# SL -> SL

	private fun is_slifsl_eligible(model: Model): Bool do
		if is_user_defined then return false
		for child in children do if not child.is_user_defined then return true
		return false
	end
	private fun is_slccifsl_eligible(model: Model): Bool do
		if is_user_defined then return false
		if is_class then return false
		for child in children do if not child.is_user_defined and child.is_class then return true
		return false
	end
	private fun is_slicifsl_eligible(model: Model): Bool do
		if is_user_defined then return false
		if not is_interface then return false
		for child in children do if not child.is_user_defined and child.is_class then return true
		return false
	end
	private fun is_sliiifsl_eligible(model: Model): Bool do
		if is_user_defined then return false
		if not is_interface then return false
		for child in children do if not child.is_user_defined and child.is_interface then return true
		return false
	end

	# SL -> UD

	private fun is_slifud_eligible(model: Model): Bool do
		if is_user_defined then return false
		for child in children do if child.is_user_defined then return true
		return false
	end
	private fun is_slccifud_eligible(model: Model): Bool do
		if is_user_defined then return false
		if not is_class then return false
		for child in children do if child.is_user_defined and child.is_class then return true
		return false
	end
	private fun is_slicifud_eligible(model: Model): Bool do
		if is_user_defined then return false
		if not is_interface then return false
		for child in children do if child.is_user_defined and child.is_class then return true
		return false
	end
	private fun is_sliiifud_eligible(model: Model): Bool do
		if is_user_defined then return false
		if not is_interface then return false
		for child in children do if child.is_user_defined and child.is_interface then return true
		return false
	end

	# UD -> *

	private fun is_uddui_eligible: Bool do
		if not is_user_defined then return false
		for parent in parents do if parent.name != "Object" then return true
		return false
	end
	private fun is_udccdui_eligible: Bool do
		if not is_user_defined then return false
		if not is_class then return false
		for parent in parents do if parent.name != "Object" and parent.is_class then return true
		return false
	end
	private fun is_udcidui_eligible: Bool do
		if not is_user_defined then return false
		if not is_class then return false
		for parent in parents do if parent.name != "Object" and parent.is_interface then return true
		return false
	end
	private fun is_udiidui_eligible: Bool do
		if not is_user_defined then return false
		if not is_interface then return false
		for parent in parents do if parent.name != "Object" and parent.is_interface then return true
		return false
	end
	private fun is_udif_eligible(model: Model): Bool do
		if not is_user_defined then return false
		return not children.is_empty
	end
	private fun is_udccif_eligible(model: Model): Bool do
		if not is_user_defined then return false
		if not is_class then return false
		for child in children do if child.is_class then return true
		return false
	end
	private fun is_udicif_eligible(model: Model): Bool do
		if not is_user_defined then return false
		if not is_interface then return false
		for child in children do if child.is_class then return true
		return false
	end
	private fun is_udiiif_eligible(model: Model): Bool do
		if not is_user_defined then return false
		if not is_interface then return false
		for child in children do if child.is_interface then return true
		return false
	end

	# UD -> SL

	private fun is_udduisl_eligible: Bool do
		if not is_user_defined then return false
		for parent in parents do if not parent.is_user_defined and parent.name != "Object" then return true
		return false
	end
	private fun is_udccduisl_eligible: Bool do
		if not is_user_defined then return false
		if not is_class then return false
		for parent in parents do if not parent.is_user_defined and parent.name != "Object" and parent.is_class then return true
		return false
	end
	private fun is_udciduisl_eligible: Bool do
		if not is_user_defined then return false
		if not is_class then return false
		for parent in parents do if not parent.is_user_defined and parent.name != "Object" and parent.is_interface then return true
		return false
	end
	private fun is_udiiduisl_eligible: Bool do
		if not is_user_defined then return false
		if not is_interface then return false
		for parent in parents do if not parent.is_user_defined and parent.name != "Object" and parent.is_interface then return true
		return false
	end

	# UD -> UD

	private fun is_udduiud_eligible: Bool do
		if not is_user_defined then return false
		for parent in parents do if parent.name != "Object" and parent.is_user_defined then return true
		return false
	end
	private fun is_udccduiud_eligible: Bool do
		if not is_user_defined then return false
		if not is_class then return false
		for parent in parents do if parent.name != "Object" and parent.is_class and parent.is_user_defined then return true
		return false
	end
	private fun is_udciduiud_eligible: Bool do
		if not is_user_defined then return false
		if not is_class then return false
		for parent in parents do if parent.name != "Object" and parent.is_interface and parent.is_user_defined then return true
		return false
	end
	private fun is_udiiduiud_eligible: Bool do
		if not is_user_defined then return false
		if not is_interface then return false
		for parent in parents do if parent.name != "Object" and parent.is_interface and parent.is_user_defined then return true
		return false
	end
	private fun is_udifud_eligible(model: Model): Bool do
		if not is_user_defined then return false
		return not children.is_empty
	end
	private fun is_udccifud_eligible(model: Model): Bool do
		if not is_user_defined then return false
		if not is_class then return false
		for child in children do if child.is_user_defined and child.is_class then return true
		return false
	end
	private fun is_udicifud_eligible(model: Model): Bool do
		if not is_user_defined then return false
		if not is_interface then return false
		for child in children do if child.is_user_defined and child.is_class then return true
		return false
	end
	private fun is_udiiifud_eligible(model: Model): Bool do
		if not is_user_defined then return false
		if not is_interface then return false
		for child in children do if child.is_user_defined and child.is_interface then return true
		return false
	end
end

redef class MModule

	private var nm: Int = 0			# (NC)  Number of Modules
	private var nc: Int = 0			# (NC)  Number of Classes
	private var ni: Int = 0			# (NI)  Number of Interfaces
	private var nac : Int = 0		# (NAC) Number of Abstract Classes
	private var ngc : Int = 0		# (NGC) Number of Generic Classes
	private var ngi : Int = 0		# (NGI) Number of Generic Interfaces

	private var dit = ""			# (DIT) Global Depth in Inheritance Tree
	private var dui = "" 			# (DUI) Proportion of types that either implement an interface or extend another type other than Object
	private var ccdui = "" 			# (CCDUI) Proportion of classes that extend some other class.
	private var cidui = "" 			# (CIDUI) Proportion of classes that implement some other interface.
	private var iidui = "" 			# (IIDUI) Proportion of interfaces that extend some other interface.
	private var inhf = ""			# (IF) Proportion of types Inherited From, that is, those types that are either extended or implemented
	private var ccif = ""			# (CCIF) Proportion of classes extended by some other class.
	private var icif = ""			# (ICIF) Proportion of interfaces implemented by some other class.
	private var iiif = ""			# (IIIF) Proportion of interfaces extended by some other interface.

	private fun compute_module_inheritance_metrics(model: Model) do
		var ditsum = 0
		var dui_count = 0
		var ccdui_count = 0
		var cidui_count = 0
		var iidui_count = 0
		var if_count = 0
		var ccif_count = 0
		var icif_count = 0
		var iiif_count = 0
		var count = 0
		for mmodule in self.in_nesting.greaters do
			for mclass in mmodule.intro_mclasses do
				count += 1
				if mclass.is_class then nc += 1
				if mclass.is_class and mclass.arity > 0 then ngc += 1
				if mclass.is_class and mclass.is_abstract then nac += 1
				if mclass.is_interface then ni += 1
				if mclass.is_interface and mclass.arity > 0 then ngi += 1
				ditsum += mclass.path_to_object.length
				if mclass.is_dui_eligible then dui_count += 1
				if mclass.is_ccdui_eligible then ccdui_count += 1
				if mclass.is_cidui_eligible then cidui_count += 1
				if mclass.is_iidui_eligible then iidui_count += 1
				if mclass.is_if_eligible(model) then if_count += 1
				if mclass.is_ccif_eligible(model) then ccif_count += 1
				if mclass.is_icif_eligible(model) then icif_count += 1
				if mclass.is_iiif_eligible(model) then iiif_count += 1
			end
		end

		self.nm = self.in_nesting.greaters.length
		dit = div(ditsum, count)
		dui = div(dui_count * 100, count)
		ccdui = div(ccdui_count * 100, nc)
		cidui = div(cidui_count * 100, nc)
		iidui = div(iidui_count * 100, ni)
		inhf = div(if_count * 100, count)
		ccif = div(ccif_count * 100, nc)
		icif = div(icif_count * 100, ni)
		iiif = div(iiif_count * 100, ni)
	end
end

# Print inheritance usage metrics
fun compute_inheritance_metrics(toolcontext: ToolContext, model: Model)
do
	# global summary metrics
	var nmd: Int = 0			# (NMD) Number of Modules
	var nc: Int = 0				# (NC)  Number of Classes
	var ni: Int = 0				# (NI)  Number of Interfaces
	var nac : Int = 0			# (NAC) Number of Abstract Classes
	var ngc : Int = 0			# (NGC) Number of Generic Classes
	var ngi : Int = 0			# (NGI) Number of Generic Interfaces
	# (SL) Std-Lib summary metrics
	var nmdsl: Int = 0			# (NMDSL) Number of Modules in Std-Lib
	var ncsl: Int = 0			# (NCSL) Number of Classes in Std-Lib
	var nisl: Int = 0			# (NISL) Number of Interfaces in Std-Lib
	var nacsl : Int = 0		# (NACSL) Number of Abstract Classes in Std-Lib
	var ngcsl : Int = 0		# (NGCSL) Number of Generic Classes in Std-Lib
	var ngisl : Int = 0		# (NGISL) Number of Generic Interfaces in Std-Lib
	# (UD) User-Defined summary metrics
	var nmdud: Int = 0			# (NMDUD) Number of Modules User Defined
	var ncud: Int = 0			# (NCUD) Number of Classes User Defined
	var niud: Int = 0			# (NIUD) Number of Interfaces User Defined
	var nacud : Int = 0			# (NACUD) Number of Abstract Classes User Defined
	var ngcud : Int = 0			# (NGCUD) Number of Generic Classes User Defined
	var ngiud : Int = 0			# (NGIUD) Number of Generic Interfaces User Defined

	# global summary inheritance metrics
	var dit = ""				# (DIT) Global Depth in Inheritance Tree
	var dui = "" 				# (DUI) Proportion of types that either implement an interface or extend another type other than Object
	var ccdui = "" 				# (CCDUI) Proportion of classes that extend some other class.
	var cidui = "" 				# (CIDUI) Proportion of classes that implement some other interface.
	var iidui = "" 				# (IIDUI) Proportion of interfaces that extend some other interface.
	var inhf = ""				# (IF) Proportion of types Inherited From, that is, those types that are either extended or implemented
	var ccif = ""				# (CCIF) Proportion of classes extended by some other class.
	var icif = ""				# (ICIF) Proportion of interfaces implemented by some other class.
	var iiif = ""				# (IIIF) Proportion of interfaces extended by some other interface.

	# (SL -> *) Std-Lib summary inheritance metrics
	var sldui = "" 				# (SLDUI) Proportion of std-lib types that either implement an interface or extend another std-lib type other than Object
	var slccdui = "" 			# (SLCCDUI) Proportion of std-lib classes that extend some other std-lib class.
	var slcidui = "" 			# (SLCIDUI) Proportion of std-lib classes that implement some other std-lib interface.
	var sliidui = "" 			# (SLIIDUI) Proportion of std-lib interfaces that extend some other std-lib interface.
	var slinhf = ""				# (SLIF) Proportion of SL types Inherited From, that is, those types that are either extended or implemented
	var slccif = ""				# (SLCCIF) Proportion of SL classes extended by some other class.
	var slicif = ""				# (SLICIF) Proportion of SL interfaces implemented by some other class.
	var sliiif = ""				# (SLIIIF) Proportion of SL interfaces extended by some other interface.

	# (SL -> SL) Std-Lib summary inheritance metrics
	var slinhfsl = ""				# (SLIFSL) Proportion of SL types Inherited From, that is, those types that are either extended or implemented by a SL type
	var slccifsl = ""				# (SLCCIFSL) Proportion of SL classes extended by some other SL class.
	var slicifsl = ""				# (SLICIFSL) Proportion of SL interfaces implemented by some other SL class.
	var sliiifsl = ""				# (SLIIIFSL) Proportion of SL interfaces extended by some other SL interface.

	# (SL -> UD) Std-Lib summary inheritance metrics
	var slinhfud = ""				# (SLIFUD) Proportion of SL types Inherited From, that is, those types that are either extended or implemented by a UD type
	var slccifud = ""				# (SLCCIFUD) Proportion of SL classes extended by some other UD class.
	var slicifud = ""				# (SLICIFUD) Proportion of SL interfaces implemented by some other UD class.
	var sliiifud = ""				# (SLIIIFUD) Proportion of SL interfaces extended by some other UD interface.

	# (UD -> *) User-defined summary inheritance metrics
	var uddui = "" 				# (UDDUI) Proportion user-defined of types that either implement an interface or extend another type
	var udccdui = "" 			# (UDCCDUI) Proportion of user-defined classes that extend some other class.
	var udcidui = "" 			# (UDCIDUI) Proportion of user-defined classes that implement some other interface.
	var udiidui = "" 			# (UDIIDUI) Proportion of user-defined interfaces that extend some other interface.
	var udinhf = ""				# (UDIF) Proportion of UD types Inherited From, that is, those types that are either extended or implemented
	var udccif = ""				# (UDCCIF) Proportion of UD classes extended by some other class.
	var udicif = ""				# (UDICIF) Proportion of UD interfaces implemented by some other class.
	var udiiif = ""				# (UDIIIF) Proportion of UD interfaces extended by some other interface.

	# (UD -> SL) User-defined summary inheritance metrics
	var udduisl = "" 			# (UDDUISL) Proportion user-defined of types that either implement an interface or extend another type SL
	var udccduisl = "" 			# (UDCCDUISL) Proportion of user-defined classes that extend some other SL class.
	var udciduisl = "" 			# (UDCIDUISL) Proportion of user-defined classes that implement some other SL interface.
	var udiiduisl = "" 			# (UDIIDUISL) Proportion of user-defined interfaces that extend some other SL interface.

	# (UD -> UD) User-defined summary inheritance metrics
	var ditud = ""
	var udduiud = "" 			# (UDDUIUD) Proportion user-defined of types that either implement an interface or extend another type user-defined
	var udccduiud = "" 			# (UDCCDUIUD) Proportion of user-defined classes that extend some other user-defined class.
	var udciduiud = "" 			# (UDCIDUIUD) Proportion of user-defined classes that implement some other user-defined interface.
	var udiiduiud = "" 			# (UDIIDUIUD) Proportion of user-defined interfaces that extend some other user-defined interface.
	var udinhfud = ""			# (UDIFUD) Proportion of UD types Inherited From, that is, those types that are either extended or implemented by another UD type
	var udccifud = ""			# (UDCCIFUD) Proportion of UD classes extended by some other UD class.
	var udicifud = ""			# (UDICIFUD) Proportion of UD interfaces implemented by some other UD class.
	var udiiifud = ""			# (UDIIIFUD) Proportion of UD interfaces extended by some other UD interface.

	# compute modules scalar metrics
	for mmodule in model.mmodules do
		mmodule.compute_module_inheritance_metrics(model)
	end

	# compute class scalar metrics
	for mclass in model.mclasses do
		mclass.compute_class_inheritance_metrics(model)
	end

	# compute summary metrics

	# compute global summary metrics
	nmd = model.mmodules.length
	nc = model.extract_classes(model.mclasses).length
	ni = model.extract_interfaces(model.mclasses).length
	nac = model.extract_abstracts(model.mclasses).length
	ngc = model.extract_generics(model.extract_classes(model.mclasses)).length
	ngi = model.extract_generics(model.extract_interfaces(model.mclasses)).length
	# compute std-lib summary metrics
	nmdsl = model.extract_stdlib_modules(model.mmodules).length
	ncsl = model.extract_stdlib(model.extract_classes(model.mclasses)).length
	nisl = model.extract_stdlib(model.extract_interfaces(model.mclasses)).length
	nacsl = model.extract_stdlib(model.extract_abstracts(model.mclasses)).length
	ngcsl = model.extract_stdlib(model.extract_generics(model.extract_classes(model.mclasses))).length
	ngisl = model.extract_stdlib(model.extract_generics(model.extract_interfaces(model.mclasses))).length
	# compute user-defined summary metrics
	nmdud = model.extract_user_defined_modules(model.mmodules).length
	ncud = model.extract_user_defined(model.extract_classes(model.mclasses)).length
	niud = model.extract_user_defined(model.extract_interfaces(model.mclasses)).length
	nacud = model.extract_user_defined(model.extract_abstracts(model.mclasses)).length
	ngcud = model.extract_user_defined(model.extract_generics(model.extract_classes(model.mclasses))).length
	ngiud = model.extract_user_defined(model.extract_generics(model.extract_interfaces(model.mclasses))).length

	# compute inheritance summary metrics

	# * -> *
	var ditsum = 0
	var ditudsum = 0

	var dui_count = 0
	var ccdui_count = 0
	var cidui_count = 0
	var iidui_count = 0
	var if_count = 0
	var ccif_count = 0
	var icif_count = 0
	var iiif_count = 0

	# SL -> *
	var sldui_count = 0
	var slccdui_count = 0
	var slcidui_count = 0
	var sliidui_count = 0
	var slif_count = 0
	var slccif_count = 0
	var slicif_count = 0
	var sliiif_count = 0

	# SL -> SL
	var slifsl_count = 0
	var slccifsl_count = 0
	var slicifsl_count = 0
	var sliiifsl_count = 0

	# SL -> UD
	var slifud_count = 0
	var slccifud_count = 0
	var slicifud_count = 0
	var sliiifud_count = 0

	# UD -> *
	var uddui_count = 0
	var udccdui_count = 0
	var udcidui_count = 0
	var udiidui_count = 0
	var udif_count = 0
	var udccif_count = 0
	var udicif_count = 0
	var udiiif_count = 0

	# UD -> SL
	var udduisl_count = 0
	var udccduisl_count = 0
	var udciduisl_count = 0
	var udiiduisl_count = 0

	# UD -> UD
	var udduiud_count = 0
	var udccduiud_count = 0
	var udciduiud_count = 0
	var udiiduiud_count = 0
	var udifud_count = 0
	var udccifud_count = 0
	var udicifud_count = 0
	var udiiifud_count = 0

	for mclass in model.mclasses do
		ditsum += mclass.dit
		ditudsum += mclass.ditud

		# * -> *
		if mclass.is_dui_eligible then dui_count += 1
		if mclass.is_ccdui_eligible then ccdui_count += 1
		if mclass.is_cidui_eligible then cidui_count += 1
		if mclass.is_iidui_eligible then iidui_count += 1
		if mclass.is_if_eligible(model) then if_count += 1
		if mclass.is_ccif_eligible(model) then ccif_count += 1
		if mclass.is_icif_eligible(model) then icif_count += 1
		if mclass.is_iiif_eligible(model) then iiif_count += 1

		# SL -> *
		if mclass.is_sldui_eligible then sldui_count += 1
		if mclass.is_slccdui_eligible then slccdui_count += 1
		if mclass.is_slcidui_eligible then slcidui_count += 1
		if mclass.is_sliidui_eligible then sliidui_count += 1
		if mclass.is_slif_eligible(model) then slif_count += 1
		if mclass.is_slccif_eligible(model) then slccif_count += 1
		if mclass.is_slicif_eligible(model) then slicif_count += 1
		if mclass.is_sliiif_eligible(model) then sliiif_count += 1

		# SL -> SL
		if mclass.is_slifsl_eligible(model) then slifsl_count += 1
		if mclass.is_slccifsl_eligible(model) then slccifsl_count += 1
		if mclass.is_slicifsl_eligible(model) then slicifsl_count += 1
		if mclass.is_sliiifsl_eligible(model) then sliiifsl_count += 1

		# SL -> UD
		if mclass.is_slifud_eligible(model) then slifud_count += 1
		if mclass.is_slccifud_eligible(model) then slccifud_count += 1
		if mclass.is_slicifud_eligible(model) then slicifud_count += 1
		if mclass.is_sliiifud_eligible(model) then sliiifud_count += 1

		# UD -> *
		if mclass.is_uddui_eligible then uddui_count += 1
		if mclass.is_udccdui_eligible then udccdui_count += 1
		if mclass.is_udcidui_eligible then udcidui_count += 1
		if mclass.is_udiidui_eligible then udiidui_count += 1
		if mclass.is_udif_eligible(model) then udif_count += 1
		if mclass.is_udccif_eligible(model) then udccif_count += 1
		if mclass.is_udicif_eligible(model) then udicif_count += 1
		if mclass.is_udiiif_eligible(model) then udiiif_count += 1

		# UD -> SL
		if mclass.is_udduisl_eligible then udduisl_count += 1
		if mclass.is_udccduisl_eligible then udccduisl_count += 1
		if mclass.is_udciduisl_eligible then udciduisl_count += 1
		if mclass.is_udiiduisl_eligible then udiiduisl_count += 1

		# UD -> UD
		if mclass.is_udduiud_eligible then udduiud_count += 1
		if mclass.is_udccduiud_eligible then udccduiud_count += 1
		if mclass.is_udciduiud_eligible then udciduiud_count += 1
		if mclass.is_udiiduiud_eligible then udiiduiud_count += 1
		if mclass.is_udifud_eligible(model) then udifud_count += 1
		if mclass.is_udccifud_eligible(model) then udccifud_count += 1
		if mclass.is_udicifud_eligible(model) then udicifud_count += 1
		if mclass.is_udiiifud_eligible(model) then udiiifud_count += 1
	end

	# * -> *
	dit = div(ditsum, model.mclasses.length)
	ditud = div(ditudsum, ncud + niud)
	dui = div(dui_count * 100, model.mclasses.length)
	ccdui = div(ccdui_count * 100, nc)
	cidui = div(cidui_count * 100, nc)
	iidui = div(iidui_count * 100, ni)
	inhf = div(if_count * 100, nc + ni)
	ccif = div(ccif_count * 100, nc)
	icif = div(icif_count * 100, ni)
	iiif = div(iiif_count * 100, ni)

	# SL -> *
	sldui = div(sldui_count * 100, ncsl + nisl)
	slccdui = div(slccdui_count * 100, ncsl)
	slcidui = div(slcidui_count * 100, ncsl)
	sliidui = div(sliidui_count * 100, nisl)
	slinhf = div(slif_count * 100, ncsl + nisl)
	slccif = div(slccif_count * 100, ncsl)
	slicif = div(slicif_count * 100, nisl)
	sliiif = div(sliiif_count * 100, nisl)

	# SL -> SL
	slinhfsl = div(slifsl_count * 100, ncsl + nisl)
	slccifsl = div(slccifsl_count * 100, ncsl)
	slicifsl = div(slicifsl_count * 100, nisl)
	sliiifsl = div(sliiifsl_count * 100, nisl)

	# SL -> UD
	slinhfud = div(slifud_count * 100, ncsl + nisl)
	slccifud = div(slccifud_count * 100, ncsl)
	slicifud = div(slicifud_count * 100, nisl)
	sliiifud = div(sliiifud_count * 100, nisl)

	# UD -> *
	uddui = div(uddui_count * 100, ncud + niud)
	udccdui = div(udccdui_count * 100, ncud)
	udcidui = div(udcidui_count * 100, ncud)
	udiidui = div(udiidui_count * 100, niud)
	udinhf = div(if_count * 100, ncud + niud)
	udccif = div(ccif_count * 100, ncud)
	udicif = div(icif_count * 100, niud)
	udiiif = div(iiif_count * 100, niud)

	# UD -> SL
	udduisl = div(udduisl_count * 100, ncud + niud)
	udccduisl = div(udccduisl_count * 100, ncud)
	udciduisl = div(udciduisl_count * 100, ncud)
	udiiduisl = div(udiiduisl_count * 100, niud)

	# UD -> UD
	udduiud = div(udduiud_count * 100, ncud + niud)
	udccduiud = div(udccduiud_count * 100, ncud)
	udciduiud = div(udciduiud_count * 100, ncud)
	udiiduiud = div(udiiduiud_count * 100, niud)
	udinhfud = div(udifud_count * 100, ncud + niud)
	udccifud = div(udccifud_count * 100, ncud)
	udicifud = div(udicifud_count * 100, niud)
	udiiifud = div(udiiifud_count * 100, niud)

	# CSV generation
	if toolcontext.opt_generate_csv.value then
		# summary_metrics
		var summaryCSV = new CSVDocument(toolcontext.output_dir.join_path("summary_metrics.csv"))
		summaryCSV.set_header("scope", "NMD", "NC", "NI", "NAC", "NGC", "NGI")
		summaryCSV.add_line("global", nmd, nc, ni, nac, ngc, ngi)
		summaryCSV.add_line("std-lib", nmdsl, ncsl, nisl, nacsl, ngcsl, ngisl)
		summaryCSV.add_line("user-defined", nmdud, ncud, niud, nacud, ngcud, ngiud)
		for m in model.mmodules do
			summaryCSV.add_line(m.name, m.nm, m.nc, m.ni, m.nac, m.ngc, m.ngi)
		end
		summaryCSV.save

		# inheritance metrics
		var inheritanceCSV = new CSVDocument(toolcontext.output_dir.join_path("inheritance_metrics.csv"))
		inheritanceCSV.set_header("scope", "DIT", "DUI", "CCDUI", "CIDUI", "IIDUI", "IF", "CCIF", "ICIF", "IIIF")
		inheritanceCSV.add_line("global", dit, dui, ccdui, cidui, iidui, inhf, ccif, icif, iiif)
		inheritanceCSV.add_line("SL -> *", "", sldui, slccdui, slcidui, sliidui, slinhf, slccif, slicif, sliiif)
		inheritanceCSV.add_line("SL -> SL", "", sldui, slccdui, slcidui, sliidui, slinhfsl, slccifsl, slicifsl, sliiifsl)
		inheritanceCSV.add_line("SL -> UD", "", 0, 0, 0, 0, slinhfud, slccifud, slicifud, sliiifud)
		inheritanceCSV.add_line("UD -> *", "", uddui, udccdui, udcidui, udiidui, udinhf, udccif, udicif, udiiif)
		inheritanceCSV.add_line("UD -> SL", "", udduisl, udccduisl, udciduisl, udiiduisl, 0, 0, 0, 0)
		inheritanceCSV.add_line("UD -> UD", ditud, udduiud, udccduiud, udciduiud, udiiduiud, udinhfud, udccifud, udicifud, udiiifud)
		for m in model.mmodules do
			if m.intro_mclasses.is_empty and m.in_nesting.greaters.length == 1 then continue
			inheritanceCSV.add_line(m.name, m.dit, m.dui, m.ccdui, m.cidui, m.iidui, m.inhf, m.ccif, m.icif, m.iiif)
		end
		inheritanceCSV.save

		# scalar metrics
		var scalarCSV = new CSVDocument(toolcontext.output_dir.join_path("global_scalar_metrics.csv"))
		var udscalarCSV = new CSVDocument(toolcontext.output_dir.join_path("ud_scalar_metrics.csv"))
		scalarCSV.set_header("mclass", "type", "FT", "DIT", "DITC", "DITI", "NOP", "NOPC", "NOPI", "NOA", "NOAC", "NOAI", "NOC", "NOCC", "NOCI", "NOD", "NODC", "NODI")
		udscalarCSV.set_header("mclass", "type", "FT","DITUD", "DITCUD", "DITIUD", "NOPUD", "NOPCUD", "NOPIUD", "NOAUD", "NOACUD", "NOAIUD", "NOCUD", "NOCCUD", "NOCIUD", "NODUD", "NODCUD", "NODIUD")
		for mclass in model.mclasses do
			var name = mclass.name
			var typ = "class"
			if mclass.is_interface then typ = "interface"
			scalarCSV.add_line(name, typ, mclass.arity, mclass.dit, mclass.ditc, mclass.diti, mclass.nop, mclass.nopc, mclass.nopi, mclass.noa, mclass.noac, mclass.noai, mclass.noc, mclass.nocc, mclass.noci, mclass.nod, mclass.nodc, mclass.nodi)
			udscalarCSV.add_line(name, typ, mclass.arity, mclass.ditud, mclass.ditcud, mclass.ditiud, mclass.nopud, mclass.nopcud, mclass.nopiud, mclass.noaud, mclass.noacud, mclass.noaiud, mclass.nocud, mclass.noccud, mclass.nociud, mclass.nodud, mclass.nodcud, mclass.nodiud)
		end
		scalarCSV.save
		udscalarCSV.save
	end

	print "--- Global Summary metrics ---"
	print "(NMD) Number of Modules: {nmd}"
	print "(NC)  Number of Classes: {nc}"
	print "(NI)  Number of Interfaces: {ni}"
	print "(NAC)  Number of Abstract Classes: {nac}"
	print "(NGC)  Number of Generic Classes: {ngc}"
	print "(NGI)  Number of Generic Interfaces: {ngi}"
	print "--- (SL) Std-Lib Summary metrics ---"
	print "(NMDSL) Number of Modules: {nmdsl}"
	print "(NCSL)  Number of Classes: {ncsl}"
	print "(NISL)  Number of Interfaces: {nisl}"
	print "(NACSL)  Number of Abstract Classes: {nacsl}"
	print "(NGCSL)  Number of Generic Classes: {ngcsl}"
	print "(NGISL)  Number of Generic Interfaces: {ngisl}"
	print "--- (UD) User-Defined Summary metrics ---"
	print "(NMDUD) Number of Modules: {nmdud}"
	print "(NCUD)  Number of Classes: {ncud}"
	print "(NIUD)  Number of Interfaces: {niud}"
	print "(NACUD)  Number of Abstract Classes: {nacud}"
	print "(NGCUD)  Number of Generic Classes: {ngcud}"
	print "(NGIUD)  Number of Generic Interfaces: {ngiud}"
	print ""
	print "--- Global Inheritance metrics ---"
	print "(DIT) Global Depth in Inheritance Tree: {dit}"
	print "(DUI) Proportion of types inheriting another type other than Object: {dui}%"
	print "(CCDUI) Proportion of classes that extend some other class: {ccdui}%"
	print "(CIDUI) Proportion of classes that implement some other interface: {cidui}%"
	print "(IIDUI) Proportion of interfaces that extend some other interface: {iidui}%"
	print "(IF) Proportion of types Inherited From: {inhf}%"
	print "(CCIF) Proportion of classes extended by class: {ccif}%"
	print "(ICIF) Proportion of interfaces implemented by class: {icif}%"
	print "(IIIF) Proportion of interfaces extended by interface: {iiif}%"
	print ""
	print "--- (SL -> *) Std-Lib Inheritance metrics ---"
	print "(SLDUI) Proportion of SL types inheriting another type other than Object: {sldui}%"
	print "(SLCCDUI) Proportion of SL classes that extend some other class: {slccdui}%"
	print "(SLCIDUI) Proportion of SL classes that implement some other interface: {slcidui}%"
	print "(SLIIDUI) Proportion of SL interfaces that extend some other interface: {sliidui}%"
	print "(SLIF) Proportion of SL types Inherited From: {slinhf}%"
	print "(SLCCIF) Proportion of SL classes extended by class: {slccif}%"
	print "(SLICIF) Proportion of SL interfaces implemented by class: {slicif}%"
	print "(SLIIIF) Proportion of SL interfaces extended by interface: {sliiif}%"
	print ""
	print "--- (SL -> SL) Std-Lib Inheritance metrics ---"
	print "(SLIFSL) Proportion of SL types Inherited From by SL type: {slinhfsl}%"
	print "(SLCCIFSL) Proportion of SL classes extended by SL class: {slccifsl}%"
	print "(SLICIFSL) Proportion of SL interfaces implemented by SL class: {slicifsl}%"
	print "(SLIIIFSL) Proportion of SL interfaces extended by SL interface: {sliiifsl}%"
	print ""
	print "--- (SL->UD) Std-Lib Inheritance metrics ---"
	print "(SLIFUD) Proportion of SL types Inherited From by UD type: {slinhfud}%"
	print "(SLCCIFUD) Proportion of SL classes extended by UD class: {slccifud}%"
	print "(SLICIFUD) Proportion of SL interfaces implemented by UD class: {slicifud}%"
	print "(SLIIIFUD) Proportion of SL interfaces extended by UD interface: {sliiifud}%"
	print ""
	print "--- (UD->*) User-Defined Inheritance metrics ---"
	print "(UDDUI) Proportion of UD types inheriting another type other than Object: {uddui}%"
	print "(UDCCDUI) Proportion of UD classes that extend some other class: {udccdui}%"
	print "(UDCIDUI) Proportion of UD classes that implement some other interface: {udcidui}%"
	print "(UDIIDUI) Proportion of UD interfaces that extend some other interface: {udiidui}%"
	print "(UDIF) Proportion of UD types Inherited From: {udinhf}%"
	print "(UDCCIF) Proportion of UD classes extended by class: {udccif}%"
	print "(UDICIF) Proportion of UD interfaces implemented by class: {udicif}%"
	print "(UDIIIF) Proportion of UD interfaces extended by interface: {udiiif}%"
	print ""
	print "--- (UD -> SL) User-Defined Inheritance metrics ---"
	print "(UDDUISL) Proportion of UD types inheriting another type other SL type: {udduisl}%"
	print "(UDCCDUISL) Proportion of UD classes that extend some other SL class: {udccduisl}%"
	print "(UDCIDUISL) Proportion of UD classes that implement some other SL interface: {udciduisl}%"
	print "(UDIIDUISL) Proportion of UD interfaces that extend some other SL interface: {udiiduisl}%"
	print ""
	print "--- (UD -> UD) User-Defined Inheritance metrics ---"
	print "(UDDUIUD) Proportion of UD types inheriting another type other UD type: {udduiud}%"
	print "(UDCCDUIUD) Proportion of UD classes that extend some other UD class: {udccduiud}%"
	print "(UDCIDUIUD) Proportion of UD classes that implement some other UD interface: {udciduiud}%"
	print "(UDIIDUIUD) Proportion of UD interfaces that extend some other UD interface: {udiiduiud}%"
	print "(UDIFUD) Proportion of UD types Inherited From: {udinhfud}%"
	print "(UDCCIFUD) Proportion of UD classes extended by UD class: {udccifud}%"
	print "(UDICIFUD) Proportion of UD interfaces implemented by UD class: {udicifud}%"
	print "(UDIIIFUD) Proportion of UD interfaces extended by UD interface: {udiiifud}%"
end

# TODO Third-Party metrics
# TODO gnu-plot generation
