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

redef class Model

	# Extract the subset of classes from a set of mclass
	fun extract_classes(mclasses: Collection[MClass]): Set[MClass] do
		var lst = new HashSet[MClass]
		for mclass in mclasses do if mclass.is_class then lst.add(mclass)
		return lst
	end

	# Extract the subset of interfaces from a set of mclass
	fun extract_interfaces(mclasses: Collection[MClass]): Set[MClass] do
		var lst = new HashSet[MClass]
		for mclass in mclasses do if mclass.is_interface then lst.add(mclass)
		return lst
	end

	# Extract the subset of generic classes/interfaces from a set of mclass
	fun extract_generics(mclasses: Collection[MClass]): Set[MClass] do
		var lst = new HashSet[MClass]
		for mclass in mclasses do if mclass.arity > 0 then lst.add(mclass)
		return lst
	end

	# Extract the subset of abstract classes from a set of mclass
	fun extract_abstracts(mclasses: Collection[MClass]): Set[MClass] do
		var lst = new HashSet[MClass]
		for mclass in mclasses do if mclass.is_abstract then lst.add(mclass)
		return lst
	end

	# Extract the subset of user defined classes/interfaces from a set of mclass
	fun extract_user_defined(mclasses: Collection[MClass]): Set[MClass] do
		var lst = new HashSet[MClass]
		for mclass in mclasses do if mclass.is_user_defined then lst.add(mclass)
		return lst
	end

	# Extract the subset of user defined modules from a set of mmodules
	fun extract_user_defined_modules(mmodules: Collection[MModule]): Set[MModule] do
		var lst = new HashSet[MModule]
		for mmodule in mmodules do if mmodule.is_user_defined then lst.add(mmodule)
		return lst
	end

	# Extract the subset of classes/interfaces from sl lib
	fun extract_stdlib(mclasses: Collection[MClass]): Set[MClass] do
		var lst = new HashSet[MClass]
		for mclass in mclasses do if not mclass.is_user_defined then lst.add(mclass)
		return lst
	end

	# Extract the subset of user defined modules from std lib
	fun extract_stdlib_modules(mmodules: Collection[MModule]): Set[MModule] do
		var lst = new HashSet[MModule]
		for mmodule in mmodules do if not mmodule.is_user_defined then lst.add(mmodule)
		return lst
	end
end

redef class MModule
	private fun is_user_defined: Bool do
		return self.public_owner == null or self.public_owner.name != "standard"
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

	private fun compute_scalar_metrics(model: Model) do
		# inheritance metrics
		self.nop = parents.length
		self.nopc = model.extract_classes(parents).length
		self.nopi = model.extract_interfaces(parents).length
		self.noa = ancestors.length
		self.noac = model.extract_classes(ancestors).length
		self.noai = model.extract_interfaces(ancestors).length
		self.noc = children(model).length
		self.nocc = model.extract_classes(children(model)).length
		self.noci = model.extract_interfaces(children(model)).length
		self.nod = descendants.length
		self.nodc = model.extract_classes(descendants).length
		self.nodi = model.extract_interfaces(descendants).length
		self.dit = depth_from_object
		self.ditc = model.extract_classes(path_to_object).length
		self.diti = model.extract_interfaces(path_to_object).length

		# used defined metrics
		self.nopud = model.extract_user_defined(parents).length
		self.nopcud = model.extract_user_defined(model.extract_classes(parents)).length
		self.nopiud = model.extract_user_defined(model.extract_interfaces(parents)).length
		self.noaud = model.extract_user_defined(ancestors).length
		self.noacud = model.extract_user_defined(model.extract_classes(ancestors)).length
		self.noaiud = model.extract_user_defined(model.extract_interfaces(ancestors)).length
		self.nocud = model.extract_user_defined(children(model)).length
		self.noccud = model.extract_user_defined(model.extract_classes(children(model))).length
		self.nociud = model.extract_user_defined(model.extract_interfaces(children(model))).length
		self.nodud = model.extract_user_defined(descendants).length
		self.nodcud = model.extract_user_defined(model.extract_classes(descendants)).length
		self.nodiud = model.extract_user_defined(model.extract_interfaces(descendants)).length
		self.ditud = model.extract_user_defined(path_to_object).length
		self.ditcud = model.extract_user_defined(model.extract_classes(path_to_object)).length
		self.ditiud = model.extract_user_defined(model.extract_interfaces(path_to_object)).length
	end

	private fun is_class: Bool do
		return self.kind == concrete_kind or self.kind == abstract_kind
	end

	private fun is_interface: Bool do
		return self.kind == interface_kind
	end

	private fun is_abstract: Bool do
		return self.kind == abstract_kind
	end

	private fun is_user_defined: Bool do
		var mod = self.intro_mmodule.public_owner
		return mod == null or mod.name != "standard"
	end

	# Get parents of the class (direct super classes only)
	private fun parents: Set[MClass] do
		var lst = new HashSet[MClass]
		# explore all definitions of the class (refinement)
		for mclassdef in self.mclassdefs do
			for parent in mclassdef.supertypes do
				lst.add(parent.mclass)
			end
		end
		return lst
	end

	# Get ancestors of the class (all super classes)
	private fun ancestors: Set[MClass] do
		var lst = new HashSet[MClass]
		for mclassdef in self.mclassdefs do
			for super_mclassdef in mclassdef.in_hierarchy.greaters do
				if super_mclassdef == mclassdef then continue  # skip self
				lst.add(super_mclassdef.mclass)
			end
		end
		return lst
	end

	# Get children of the class (direct subclasses only)
	private fun children(model: Model): Set[MClass] do
		var lst = new HashSet[MClass]
		for other in model.mclasses do
			if other == self then continue # skip self
			if other.parents.has(self) then
				lst.add(other)
			end
		end
		return lst
	end

	# Get children of the class (direct subclasses only)
	private fun descendants: Set[MClass] do
		var lst = new HashSet[MClass]
		for mclassdef in self.mclassdefs do
			for sub_mclassdef in mclassdef.in_hierarchy.smallers do
				if sub_mclassdef == mclassdef then continue  # skip self
				lst.add(sub_mclassdef.mclass)
			end
		end
		return lst
	end

	# Get the length of the longest path to Object
	private fun depth_from_object: Int do
		var max_depth: nullable Int = null

		for parent in self.parents do
			# direct parent is root
			if parent.parents.is_empty then
				return 1
			else
				var depth = parent.depth_from_object + 1
				if max_depth == null then
					max_depth = depth
				else
					if depth > max_depth then max_depth = depth
				end
			end
		end
		if max_depth == null then
			return 0
		else
			return max_depth
		end
	end

	# Return the longest path from class to root hierarchy
	private fun path_to_object: Array[MClass] do
		var path = new Array[MClass]
		var max_dit: nullable Int = null
		var max_parent: nullable MClass = null
		var parent_path: nullable Array[MClass] = null

		for p in parents do
			var dit = p.depth_from_object
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

	# DUI
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

	# SLDUI
	private fun is_sldui_eligible: Bool do
		if is_user_defined then return false
		for parent in parents do if parent.name != "Object" then return true
		return false
	end
	private fun is_slccdui_eligible: Bool do
		if not is_class then return false
		if is_user_defined then return false
		for parent in parents do if parent.name != "Object" and parent.is_class then return true
		return false
	end
	private fun is_slcidui_eligible: Bool do
		if not is_class then return false
		if is_user_defined then return false
		for parent in parents do if parent.name != "Object" and parent.is_interface then return true
		return false
	end
	private fun is_sliidui_eligible: Bool do
		if not is_interface then return false
		if is_user_defined then return false
		for parent in parents do if parent.name != "Object" and parent.is_interface then return true
		return false
	end

	# UDDUI

	private fun is_uddui_eligible: Bool do
		if not is_user_defined then return false
		for parent in parents do if parent.name != "Object" then return true
		return false
	end
	private fun is_udccdui_eligible: Bool do
		if not is_class then return false
		if not is_user_defined then return false
		for parent in parents do if parent.name != "Object" and parent.is_class then return true
		return false
	end
	private fun is_udcidui_eligible: Bool do
		if not is_class then return false
		if not is_user_defined then return false
		for parent in parents do if parent.name != "Object" and parent.is_interface then return true
		return false
	end
	private fun is_udiidui_eligible: Bool do
		if not is_interface then return false
		if not is_user_defined then return false
		for parent in parents do if parent.name != "Object" and parent.is_interface then return true
		return false
	end

	# UDDUIUD

	private fun is_udduiud_eligible: Bool do
		if not is_user_defined then return false
		for parent in parents do if parent.name != "Object" and parent.is_user_defined then return true
		return false
	end
	private fun is_udccduiud_eligible: Bool do
		if not is_class then return false
		if not is_user_defined then return false
		for parent in parents do if parent.name != "Object" and parent.is_class and parent.is_user_defined then return true
		return false
	end
	private fun is_udciduiud_eligible: Bool do
		if not is_class then return false
		if not is_user_defined then return false
		for parent in parents do if parent.name != "Object" and parent.is_interface and parent.is_user_defined then return true
		return false
	end
	private fun is_udiiduiud_eligible: Bool do
		if not is_interface then return false
		if not is_user_defined then return false
		for parent in parents do if parent.name != "Object" and parent.is_interface and parent.is_user_defined then return true
		return false
	end

	# IF
	private fun is_if_eligible(model: Model): Bool do return not children(model).is_empty
	private fun is_ccif_eligible(model: Model): Bool do
		if not is_class then return false
		for child in children(model) do if child.is_class then return true
		return false
	end
	private fun is_icif_eligible(model: Model): Bool do
		if not is_interface then return false
		for child in children(model) do if child.is_class then return true
		return false
	end
	private fun is_iiif_eligible(model: Model): Bool do
		if not is_interface then return false
		for child in children(model) do if child.is_interface then return true
		return false
	end

	# SLIF
	private fun is_slif_eligible(model: Model): Bool do
		if is_user_defined then return false
		return not children(model).is_empty
	end
	private fun is_slccif_eligible(model: Model): Bool do
		if not is_class then return false
		if is_user_defined then return false
		for child in children(model) do if child.is_class then return true
		return false
	end
	private fun is_slicif_eligible(model: Model): Bool do
		if not is_interface then return false
		if is_user_defined then return false
		for child in children(model) do if child.is_class then return true
		return false
	end
	private fun is_sliiif_eligible(model: Model): Bool do
		if not is_interface then return false
		if is_user_defined then return false
		for child in children(model) do if child.is_interface then return true
		return false
	end

	# SLIFSL
	private fun is_slifsl_eligible(model: Model): Bool do
		if is_user_defined then return false
		for child in children(model) do if not child.is_user_defined then return true
		return false
	end
	private fun is_slccifsl_eligible(model: Model): Bool do
		if is_class then return false
		if not is_user_defined then return false
		for child in children(model) do if not child.is_user_defined and child.is_class then return true
		return false
	end
	private fun is_slicifsl_eligible(model: Model): Bool do
		if not is_interface then return false
		if not is_user_defined then return false
		for child in children(model) do if not child.is_user_defined and child.is_class then return true
		return false
	end
	private fun is_sliiifsl_eligible(model: Model): Bool do
		if not is_interface then return false
		if not is_user_defined then return false
		for child in children(model) do if not child.is_user_defined and child.is_interface then return true
		return false
	end

	#SLIFUD
	private fun is_slifud_eligible(model: Model): Bool do
		if not is_user_defined then return false
		for child in children(model) do if child.is_user_defined then return true
		return false
	end
	private fun is_slccifud_eligible(model: Model): Bool do
		if not is_class then return false
		if not is_user_defined then return false
		for child in children(model) do if child.is_user_defined and child.is_class then return true
		return false
	end
	private fun is_slicifud_eligible(model: Model): Bool do
		if not is_interface then return false
		if not is_user_defined then return false
		for child in children(model) do if child.is_user_defined and child.is_class then return true
		return false
	end
	private fun is_sliiifud_eligible(model: Model): Bool do
		if not is_interface then return false
		if not is_user_defined then return false
		for child in children(model) do if child.is_user_defined and child.is_interface then return true
		return false
	end

	# UDIF
	private fun is_udif_eligible(model: Model): Bool do
		if not is_user_defined then return false
		return not children(model).is_empty
	end
	private fun is_udccif_eligible(model: Model): Bool do
		if not is_class then return false
		if not is_user_defined then return false
		for child in children(model) do if child.is_class then return true
		return false
	end
	private fun is_udicif_eligible(model: Model): Bool do
		if not is_interface then return false
		if not is_user_defined then return false
		for child in children(model) do if child.is_class then return true
		return false
	end
	private fun is_udiiif_eligible(model: Model): Bool do
		if not is_interface then return false
		if not is_user_defined then return false
		for child in children(model) do if child.is_interface then return true
		return false
	end
end

# Print inheritance usage metrics
fun compute_inheritance_metrics(model: Model)
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
	# dui
	var dui = "" 				# (DUI) The proportion of types that either implement an interface or extend another type other than Object
	var ccdui = "" 				# (CCDUI) The proportion of classes that extend some other class.
	var cidui = "" 				# (CIDUI) The proportion of classes that implement some other interface.
	var iidui = "" 				# (IIDUI) The proportion of interfaces that extend some other interface.
	# if
	var inhf = ""				# (IF) The proportion of types Inherited From, that is, those types that are either extended or implemented
	var ccif = ""				# (CCIF) The proportion of classes extended by some other class.
	var icif = ""				# (ICIF) The proportion of interfaces implemented by some other class.
	var iiif = ""				# (IIIF) The proportion of interfaces extended by some other interface.

	# (SL) Std-Lib summary inheritance metrics
	# sl dui
	var sldui = "" 				# (SLDUI) The proportion of std-lib types that either implement an interface or extend another std-lib type other than Object
	var slccdui = "" 			# (SLCCDUI) The proportion of std-lib classes that extend some other std-lib class.
	var slcidui = "" 			# (SLCIDUI) The proportion of std-lib classes that implement some other std-lib interface.
	var sliidui = "" 			# (SLIIDUI) The proportion of std-lib interfaces that extend some other std-lib interface.
	# sl if
	var slinhf = ""				# (SLIF) The proportion of SL types Inherited From, that is, those types that are either extended or implemented
	var slccif = ""				# (SLCCIF) The proportion of SL classes extended by some other class.
	var slicif = ""				# (SLICIF) The proportion of SL interfaces implemented by some other class.
	var sliiif = ""				# (SLIIIF) The proportion of SL interfaces extended by some other interface.
	# sl if sl
	var slinhfsl = ""				# (SLIFSL) The proportion of SL types Inherited From, that is, those types that are either extended or implemented by a SL type
	var slccifsl = ""				# (SLCCIFSL) The proportion of SL classes extended by some other SL class.
	var slicifsl = ""				# (SLICIFSL) The proportion of SL interfaces implemented by some other SL class.
	var sliiifsl = ""				# (SLIIIFSL) The proportion of SL interfaces extended by some other SL interface.
	# sl if ud
	var slinhfud = ""				# (SLIFUD) The proportion of SL types Inherited From, that is, those types that are either extended or implemented by a UD type
	var slccifud = ""				# (SLCCIFUD) The proportion of SL classes extended by some other UD class.
	var slicifud = ""				# (SLICIFUD) The proportion of SL interfaces implemented by some other UD class.
	var sliiifud = ""				# (SLIIIFUD) The proportion of SL interfaces extended by some other UD interface.

	# (UD) User-defined summary inheritance metrics
	#dui
	var uddui = "" 				# (UDDUI) The proportion user-defined of types that either implement an interface or extend another type
	var udccdui = "" 			# (UDCCDUI) The proportion of user-defined classes that extend some other class.
	var udcidui = "" 			# (UDCIDUI) The proportion of user-defined classes that implement some other interface.
	var udiidui = "" 			# (UDIIDUI) The proportion of user-defined interfaces that extend some other interface.
	# ud if
	var udinhf = ""				# (UDIF) The proportion of UD types Inherited From, that is, those types that are either extended or implemented
	var udccif = ""				# (UDCCIF) The proportion of UD classes extended by some other class.
	var udicif = ""				# (UDICIF) The proportion of UD interfaces implemented by some other class.
	var udiiif = ""				# (UDIIIF) The proportion of UD interfaces extended by some other interface.

	# (UD*UD) User-defined summary inheritance metrics
	var udduiud = "" 			# (UDDUIUD) The proportion user-defined of types that either implement an interface or extend another type user-defined
	var udccduiud = "" 			# (UDCCDUIUD) The proportion of user-defined classes that extend some other user-defined class.
	var udciduiud = "" 			# (UDCIDUIUD) The proportion of user-defined classes that implement some other user-defined interface.
	var udiiduiud = "" 			# (UDIIDUIUD) The proportion of user-defined interfaces that extend some other user-defined interface.

	# compute scalar metrics
	for mclass in model.mclasses do
		mclass.compute_scalar_metrics(model)
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

	var ditsum = 0

	var dui_count = 0
	var ccdui_count = 0
	var cidui_count = 0
	var iidui_count = 0

	var sldui_count = 0
	var slccdui_count = 0
	var slcidui_count = 0
	var sliidui_count = 0

	var uddui_count = 0
	var udccdui_count = 0
	var udcidui_count = 0
	var udiidui_count = 0

	var udduiud_count = 0
	var udccduiud_count = 0
	var udciduiud_count = 0
	var udiiduiud_count = 0

	var if_count = 0
	var ccif_count = 0
	var icif_count = 0
	var iiif_count = 0

	var slif_count = 0
	var slccif_count = 0
	var slicif_count = 0
	var sliiif_count = 0

	var slifsl_count = 0
	var slccifsl_count = 0
	var slicifsl_count = 0
	var sliiifsl_count = 0

	var slifud_count = 0
	var slccifud_count = 0
	var slicifud_count = 0
	var sliiifud_count = 0

	var udif_count = 0
	var udccif_count = 0
	var udicif_count = 0
	var udiiif_count = 0


	for mclass in model.mclasses do
		ditsum += mclass.dit

		if mclass.is_dui_eligible then dui_count += 1
		if mclass.is_ccdui_eligible then ccdui_count += 1
		if mclass.is_cidui_eligible then cidui_count += 1
		if mclass.is_iidui_eligible then iidui_count += 1

		if mclass.is_sldui_eligible then sldui_count += 1
		if mclass.is_slccdui_eligible then slccdui_count += 1
		if mclass.is_slcidui_eligible then slcidui_count += 1
		if mclass.is_sliidui_eligible then sliidui_count += 1

		if mclass.is_uddui_eligible then uddui_count += 1
		if mclass.is_udccdui_eligible then udccdui_count += 1
		if mclass.is_udcidui_eligible then udcidui_count += 1
		if mclass.is_udiidui_eligible then udiidui_count += 1

		if mclass.is_udduiud_eligible then udduiud_count += 1
		if mclass.is_udccduiud_eligible then udccduiud_count += 1
		if mclass.is_udciduiud_eligible then udciduiud_count += 1
		if mclass.is_udiiduiud_eligible then udiiduiud_count += 1

		if mclass.is_if_eligible(model) then if_count += 1
		if mclass.is_ccif_eligible(model) then ccif_count += 1
		if mclass.is_icif_eligible(model) then icif_count += 1
		if mclass.is_iiif_eligible(model) then iiif_count += 1

		if mclass.is_slif_eligible(model) then slif_count += 1
		if mclass.is_slccif_eligible(model) then slccif_count += 1
		if mclass.is_slicif_eligible(model) then slicif_count += 1
		if mclass.is_sliiif_eligible(model) then sliiif_count += 1

		if mclass.is_slifsl_eligible(model) then slifsl_count += 1
		if mclass.is_slccifsl_eligible(model) then slccifsl_count += 1
		if mclass.is_slicifsl_eligible(model) then slicifsl_count += 1
		if mclass.is_sliiifsl_eligible(model) then sliiifsl_count += 1

		if mclass.is_slifud_eligible(model) then slifud_count += 1
		if mclass.is_slccifud_eligible(model) then slccifud_count += 1
		if mclass.is_slicifud_eligible(model) then slicifud_count += 1
		if mclass.is_sliiifud_eligible(model) then sliiifud_count += 1

		if mclass.is_udif_eligible(model) then udif_count += 1
		if mclass.is_udccif_eligible(model) then udccif_count += 1
		if mclass.is_udicif_eligible(model) then udicif_count += 1
		if mclass.is_udiiif_eligible(model) then udiiif_count += 1
	end
	dit = div(ditsum, model.mclasses.length)

	dui = div(dui_count * 100, nc + ni)
	ccdui = div(ccdui_count * 100, nc)
	cidui = div(cidui_count * 100, nc)
	iidui = div(iidui_count * 100, ni)

	sldui = div(sldui_count * 100, ncsl + nisl)
	slccdui = div(slccdui_count * 100, ncsl)
	slcidui = div(slcidui_count * 100, ncsl)
	sliidui = div(sliidui_count * 100, nisl)

	uddui = div(uddui_count * 100, ncud + niud)
	udccdui = div(udccdui_count * 100, ncud)
	udcidui = div(udcidui_count * 100, ncud)
	udiidui = div(udiidui_count * 100, niud)

	udduiud = div(udduiud_count * 100, ncud + niud)
	udccduiud = div(udccduiud_count * 100, ncud)
	udciduiud = div(udciduiud_count * 100, ncud)
	udiiduiud = div(udiiduiud_count * 100, niud)

	inhf = div(if_count * 100, nc + ni)
	ccif = div(ccif_count * 100, nc)
	icif = div(icif_count * 100, ni)
	iiif = div(iiif_count * 100, ni)

	slinhf = div(slif_count * 100, ncsl + nisl)
	slccif = div(slccif_count * 100, ncsl)
	slicif = div(slicif_count * 100, nisl)
	sliiif = div(sliiif_count * 100, nisl)

	slinhfsl = div(slifsl_count * 100, ncsl + nisl)
	slccifsl = div(slccifsl_count * 100, ncsl)
	slicifsl = div(slicifsl_count * 100, nisl)
	sliiifsl = div(sliiifsl_count * 100, nisl)

	slinhfud = div(slifud_count * 100, ncsl + nisl)
	slccifud = div(slccifud_count * 100, ncsl)
	slicifud = div(slicifud_count * 100, nisl)
	sliiifud = div(sliiifud_count * 100, nisl)

	udinhf = div(if_count * 100, ncud + niud)
	udccif = div(ccif_count * 100, ncud)
	udicif = div(icif_count * 100, niud)
	udiiif = div(iiif_count * 100, niud)

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
	print "--- (SL) Std-Lib Inheritance metrics ---"
	print "(SLDUI) Proportion of SL types inheriting another type other than Object: {sldui}%"
	print "(SLCCDUI) Proportion of SL classes that extend some other class: {slccdui}%"
	print "(SLCIDUI) Proportion of SL classes that implement some other interface: {slcidui}%"
	print "(SLIIDUI) Proportion of SL interfaces that extend some other interface: {sliidui}%"
	print "(SLIF) Proportion of SL types Inherited From: {slinhf}%"
	print "(SLCCIF) Proportion of SL classes extended by class: {slccif}%"
	print "(SLICIF) Proportion of SL interfaces implemented by class: {slicif}%"
	print "(SLIIIF) Proportion of SL interfaces extended by interface: {sliiif}%"
	print "--- (SL*SL) Std-Lib Inheritance metrics ---"
	print "(SLIFSL) Proportion of SL types Inherited From by SL type: {slinhfsl}%"
	print "(SLCCIFSL) Proportion of SL classes extended by SL class: {slccifsl}%"
	print "(SLICIFSL) Proportion of SL interfaces implemented by SL class: {slicifsl}%"
	print "(SLIIIFSL) Proportion of SL interfaces extended by SL interface: {sliiifsl}%"
	print "--- (SL*UD) Std-Lib Inheritance metrics ---"
	print "(SLIFUD) Proportion of SL types Inherited From by UD type: {slinhfud}%"
	print "(SLCCIFUD) Proportion of SL classes extended by UD class: {slccifud}%"
	print "(SLICIFUD) Proportion of SL interfaces implemented by UD class: {slicifud}%"
	print "(SLIIIFUD) Proportion of SL interfaces extended by UD interface: {sliiifud}%"
	print "--- (UD) User-Defined Inheritance metrics ---"
	print "(UDDUI) Proportion of UD types inheriting another type other than Object: {uddui}%"
	print "(UDCCDUI) Proportion of UD classes that extend some other class: {udccdui}%"
	print "(UDCIDUI) Proportion of UD classes that implement some other interface: {udcidui}%"
	print "(UDIIDUI) Proportion of UD interfaces that extend some other interface: {udiidui}%"
	print "(UDIF) Proportion of UD types Inherited From: {udinhf}%"
	print "(UDCCIF) Proportion of UD classes extended by UD class: {udccif}%"
	print "(UDICIF) Proportion of UD interfaces implemented by UD class: {udicif}%"
	print "(UDIIIF) Proportion of UD interfaces extended by UD interface: {udiiif}%"
	print "--- (UD*UD) User-Defined Inheritance metrics ---"
	print "(UDDUIUD) Proportion of UD types inheriting another type other UD type: {udduiud}%"
	print "(UDCCDUIUD) Proportion of UD classes that extend some other UD class: {udccduiud}%"
	print "(UDCIDUIUD) Proportion of UD classes that implement some other UD interface: {udciduiud}%"
	print "(UDIIDUIUD) Proportion of UD interfaces that extend some other UD interface: {udiiduiud}%"
end

# TODO Third-Party metrics
# TODO CSV generation
# TODO gnu-plot generation
