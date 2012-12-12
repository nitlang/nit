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

# Collect metrics about genericity usage
module genericity_metrics

private import metrics_base
private import inheritance_metrics

redef class MClass
	# Inheritance
	private var nogp: Int = 0		# (NOP) Number of generic parents (direct superclasses)
	private var nogpc: Int = 0 		# (NOPC) Number of generic class parents
	private var nogpi: Int = 0		# (NOPI) Number of generic interface parents
	private var noga: Int = 0		# (NOA) Number of generic ancestors (direct and indirect)
	private var nogac: Int = 0		# (NOAC) Number of generic class ancestors
	private var nogai: Int = 0		# (NOAI) Number of generic interface ancestors
	private var nogc: Int = 0    	# (NOC) Number of generic children (direct subclasses)
	private var nogcc: Int = 0 		# (NOCC) Number of generic class children
	private var nogci: Int = 0		# (NOCI) Number of generic interface children
	private var nogd: Int = 0    	# (NOD) Number of generic descendants (direct and indirect)
	private var nogdc: Int = 0 		# (NODC) Number of generic class descendants
	private var nogdi: Int = 0		# (NODI) Number of generic interface descendants
	private var ditg: Int = 0		# (DIT) Length of longest path to the root hierarchy and consisting only of generic edges
	private var ditgc: Int = 0		# (DITC) Length of longest path to the root hierarchy and consisting only of generic extends edges
	private var ditgi: Int = 0		# (DITI) Length of longest path to the root hierarchy and consisting only of generic implements edges

	# User Defined inheritance
	private var nogpud: Int = 0		# (NOPUD) Number of parents (direct superclasses)
	private var nogpcud: Int = 0 	# (NOPCUD) Number of class parents
	private var nogpiud: Int = 0	# (NOPIUD) Number of interface parents
	private var nogaud: Int = 0		# (NOAUD) Number of ancestors (direct and indirect)
	private var nogacud: Int = 0	# (NOACUD) Number of class ancestors
	private var nogaiud: Int = 0	# (NOAIUD) Number of interface ancestors
	private var nogcud: Int = 0  	# (NOCUD) Number of children (direct subclasses)
	private var nogccud: Int = 0 	# (NOCCUD) Number of class children
	private var nogciud: Int = 0	# (NOCIUD) Number of interface children
	private var nogdud: Int = 0  	# (NODUD) Number of descendants (direct and indirect)
	private var nogdcud: Int = 0 	# (NODCUD) Number of class descendants
	private var nogdiud: Int = 0	# (NODIUD) Number of interface descendants
	private var ditgud: Int = 0		# (DITUD) Depth in Inheritance Tree (maximum distance to root of the hierarchy)
	private var ditgcud: Int = 0	# (DITCUD) Length of longest path to the root hierarchy and consisting only of extends edges
	private var ditgiud: Int = 0	# (DITIUD) Length of longest path to the root hierarchy and consisting only of extends implements

	private fun compute_class_genericity_metrics(model: Model) do
		# inheritance metrics
		self.nogp = model.extract_generics(parents).length
		self.nogpc = model.extract_generics(model.extract_classes(parents)).length
		self.nogpi = model.extract_generics(model.extract_interfaces(parents)).length
		self.noga = model.extract_generics(ancestors).length
		self.nogac = model.extract_generics(model.extract_classes(ancestors)).length
		self.nogai = model.extract_generics(model.extract_interfaces(ancestors)).length
		self.nogc = model.extract_generics(children(model)).length
		self.nogcc = model.extract_generics(model.extract_classes(children(model))).length
		self.nogci = model.extract_generics(model.extract_interfaces(children(model))).length
		self.nogd = model.extract_generics(descendants).length
		self.nogdc = model.extract_generics(model.extract_classes(descendants)).length
		self.nogdi = model.extract_generics(model.extract_interfaces(descendants)).length
		self.ditg = gen_path_to_object.length
		self.ditgc = gen_class_path_to_object.length
		self.ditgi = gen_interface_path_to_object.length

		# used defined metrics
		self.nogpud = model.extract_generics(model.extract_user_defined(parents)).length
		self.nogpcud = model.extract_generics(model.extract_user_defined(model.extract_classes(parents))).length
		self.nogpiud = model.extract_generics(model.extract_user_defined(model.extract_interfaces(parents))).length
		self.nogaud = model.extract_generics(model.extract_user_defined(ancestors)).length
		self.nogacud = model.extract_generics(model.extract_user_defined(model.extract_classes(ancestors))).length
		self.nogaiud = model.extract_generics(model.extract_user_defined(model.extract_interfaces(ancestors))).length
		self.nogcud = model.extract_generics(model.extract_user_defined(children(model))).length
		self.nogccud = model.extract_generics(model.extract_user_defined(model.extract_classes(children(model)))).length
		self.nogciud = model.extract_generics(model.extract_user_defined(model.extract_interfaces(children(model)))).length
		self.nogdud = model.extract_generics(model.extract_user_defined(descendants)).length
		self.nogdcud = model.extract_generics(model.extract_user_defined(model.extract_classes(descendants))).length
		self.nogdiud = model.extract_generics(model.extract_user_defined(model.extract_interfaces(descendants))).length
		self.ditgud = model.extract_generics(model.extract_user_defined(path_to_object)).length
		self.ditgcud = model.extract_generics(model.extract_user_defined(model.extract_classes(path_to_object))).length
		self.ditgiud = model.extract_generics(model.extract_user_defined(model.extract_interfaces(path_to_object))).length
	end

	# Return the longest path from class to root hierarchy following only generic relations
	fun gen_path_to_object: Array[MClass] do
		var path = new Array[MClass]
		if not self.arity > 0 then return path
		var max_dit: nullable Int = null
		var max_parent: nullable MClass = null
		var parent_path: nullable Array[MClass] = null

		for p in parents do
			var dit = p.gen_path_to_object.length
			if max_dit == null or dit >= max_dit then
				max_dit = dit
				max_parent = p
				parent_path = p.gen_path_to_object
			end
		end

		if max_parent != null and parent_path != null then
			path.add(max_parent)
			path.add_all(parent_path)
		end

		return path
	end

	# Return the longest path from class to root hierarchy following only classes relations
	fun gen_class_path_to_object: Array[MClass] do
		var path = new Array[MClass]
		if not self.is_class or not self.arity > 0 then return path
		var max_dit: nullable Int = null
		var max_parent: nullable MClass = null
		var parent_path: nullable Array[MClass] = null

		for p in parents do
			var dit = p.gen_class_path_to_object.length
			if max_dit == null or dit >= max_dit then
				max_dit = dit
				max_parent = p
				parent_path = p.gen_class_path_to_object
			end
		end

		if max_parent != null and parent_path != null then
			path.add(max_parent)
			path.add_all(parent_path)
		end

		return path
	end

	# Return the longest path from class to root hierarchy following only interfaces relations
	fun gen_interface_path_to_object: Array[MClass] do
		var path = new Array[MClass]
		if not self.is_interface or not self.arity > 0 then return path
		var max_dit: nullable Int = null
		var max_parent: nullable MClass = null
		var parent_path: nullable Array[MClass] = null

		for p in parents do
			var dit = p.gen_interface_path_to_object.length
			if max_dit == null or dit >= max_dit then
				max_dit = dit
				max_parent = p
				parent_path = p.gen_interface_path_to_object
			end
		end

		if max_parent != null and parent_path != null then
			path.add(max_parent)
			path.add_all(parent_path)
		end

		return path
	end
end

redef class MModule

	private var gdit = ""			# (DIT) Global Depth in Inheritance Tree
	private var gdui = "" 			# (DUI) Proportion of types that either implement an interface or extend another type other than Object
	private var gccdui = "" 			# (CCDUI) Proportion of classes that extend some other class.
	private var gcidui = "" 			# (CIDUI) Proportion of classes that implement some other interface.
	private var giidui = "" 			# (IIDUI) Proportion of interfaces that extend some other interface.
	private var ginhf = ""			# (IF) Proportion of types Inherited From, that is, those types that are either extended or implemented
	private var gccif = ""			# (CCIF) Proportion of classes extended by some other class.
	private var gicif = ""			# (ICIF) Proportion of interfaces implemented by some other class.
	private var giiif = ""			# (IIIF) Proportion of interfaces extended by some other interface.

	fun compute_module_genericity_metrics(model: Model) do
		var ditsum = 0
		var dui_count = 0
		var ccdui_count = 0
		var cidui_count = 0
		var iidui_count = 0
		var if_count = 0
		var ccif_count = 0
		var icif_count = 0
		var iiif_count = 0

		for mmodule in self.in_nesting.greaters do
			for mclass in mmodule.intro_mclasses do
				if not mclass.arity > 0 then continue
				ditsum += mclass.gen_path_to_object.length
				if mclass.arity > 0 and mclass.is_dui_eligible then dui_count += 1
				if mclass.arity > 0 and mclass.is_ccdui_eligible then ccdui_count += 1
				if mclass.arity > 0 and mclass.is_cidui_eligible then cidui_count += 1
				if mclass.arity > 0 and mclass.is_iidui_eligible then iidui_count += 1
				if mclass.arity > 0 and mclass.is_if_eligible(model) then if_count += 1
				if mclass.arity > 0 and mclass.is_ccif_eligible(model) then ccif_count += 1
				if mclass.arity > 0 and mclass.is_icif_eligible(model) then icif_count += 1
				if mclass.arity > 0 and mclass.is_iiif_eligible(model) then iiif_count += 1
			end
		end

		gdit = div(ditsum, ngc + ngi)
		gdui = div(dui_count * 100, ngc + ngi)
		gccdui = div(ccdui_count * 100, ngc)
		gcidui = div(cidui_count * 100, ngc)
		giidui = div(iidui_count * 100, ngi)
		ginhf = div(if_count * 100, ngc + ngi)
		gccif = div(ccif_count * 100, ngc)
		gicif = div(icif_count * 100, ngi)
		giiif = div(iiif_count * 100, ngi)
	end
end

# Print inheritance usage metrics
fun compute_genericity_metrics(toolcontext: ToolContext, model: Model)
do
	compute_inheritance_metrics(toolcontext, model)

	# compute modules scalar metrics
	for mmodule in model.mmodules do
		mmodule.compute_module_genericity_metrics(model)
	end

	# compute class scalar metrics
	for mclass in model.mclasses do
		mclass.compute_class_genericity_metrics(model)
	end
	
	# global summary metrics
	var nc: Int = 0				# (NC)  Number of Classes
	var ni: Int = 0				# (NI)  Number of Interfaces
	var ncud: Int = 0			# (NCUD) Number of Classes User Defined
	var niud: Int = 0			# (NIUD) Number of Interfaces User Defined
		
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
	
	var ditsum = 0
	var dui_count = 0
	var ccdui_count = 0
	var cidui_count = 0
	var iidui_count = 0
	var if_count = 0
	var ccif_count = 0
	var icif_count = 0
	var iiif_count = 0
	
	# (UD -> UD) User-defined summary inheritance metrics
	var ditud = ""
	var uddui = "" 				# (UDDUI) Proportion user-defined of types that either implement an interface or extend another type
	var udccdui = "" 			# (UDCCDUI) Proportion of user-defined classes that extend some other class.
	var udcidui = "" 			# (UDCIDUI) Proportion of user-defined classes that implement some other interface.
	var udiidui = "" 			# (UDIIDUI) Proportion of user-defined interfaces that extend some other interface.
	var udinhf = ""				# (UDIF) Proportion of UD types Inherited From, that is, those types that are either extended or implemented
	var udccif = ""				# (UDCCIF) Proportion of UD classes extended by some other class.
	var udicif = ""				# (UDICIF) Proportion of UD interfaces implemented by some other class.
	var udiiif = ""				# (UDIIIF) Proportion of UD interfaces extended by some other interface.

	
	
	var ditudsum = 0
	var uddui_count = 0
	var udccdui_count = 0
	var udcidui_count = 0
	var udiidui_count = 0
	var udif_count = 0
	var udccif_count = 0
	var udicif_count = 0
	var udiiif_count = 0
	
	var nb_gen = 0
	for mclass in model.mclasses do
		if not mclass.arity > 0 then continue 
		ditsum += mclass.ditg
		ditudsum += mclass.ditgud

		# * -> *
		if mclass.is_dui_eligible then dui_count += 1
		if mclass.is_ccdui_eligible then ccdui_count += 1
		if mclass.is_cidui_eligible then cidui_count += 1
		if mclass.is_iidui_eligible then iidui_count += 1
		if mclass.is_if_eligible(model) then if_count += 1
		if mclass.is_ccif_eligible(model) then ccif_count += 1
		if mclass.is_icif_eligible(model) then icif_count += 1
		if mclass.is_iiif_eligible(model) then iiif_count += 1

		# UD -> *
		if mclass.is_uddui_eligible then uddui_count += 1
		if mclass.is_udccdui_eligible then udccdui_count += 1
		if mclass.is_udcidui_eligible then udcidui_count += 1
		if mclass.is_udiidui_eligible then udiidui_count += 1
		if mclass.is_udif_eligible(model) then udif_count += 1
		if mclass.is_udccif_eligible(model) then udccif_count += 1
		if mclass.is_udicif_eligible(model) then udicif_count += 1
		if mclass.is_udiiif_eligible(model) then udiiif_count += 1

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
	
	uddui = div(uddui_count * 100, ncud + niud)
	udccdui = div(udccdui_count * 100, ncud)
	udcidui = div(udcidui_count * 100, ncud)
	udiidui = div(udiidui_count * 100, niud)
	udinhf = div(if_count * 100, ncud + niud)
	udccif = div(ccif_count * 100, ncud)
	udicif = div(icif_count * 100, niud)
	udiiif = div(iiif_count * 100, niud)

	#TODO Comment monitorer l'évolution de la signature générique ? C[T, U] <: B <: A[V]

	# CSV generation
	if toolcontext.opt_generate_csv.value then
		# inheritance metrics
		var inheritanceCSV = new CSVDocument(toolcontext.output_dir.join_path("inheritance_genericity_metrics.csv"))
		inheritanceCSV.set_header("scope", "GDIT", "GDUI", "GCCDUI", "GCIDUI", "GIIDUI", "GIF", "GCCIF", "GICIF", "GIIIF")
		inheritanceCSV.add_line("global", dit, dui, ccdui, cidui, iidui, inhf, ccif, icif, iiif)
		inheritanceCSV.add_line("UD -> *", ditud, uddui, udccdui, udcidui, udiidui, udinhf, udccif, udicif, udiiif)
		for m in model.mmodules do
			if m.intro_mclasses.is_empty and m.in_nesting.greaters.length == 1 then continue
			inheritanceCSV.add_line(m.name, m.gdit, m.gdui, m.gccdui, m.gcidui, m.giidui, m.ginhf, m.gccif, m.gicif, m.giiif)
		end
		inheritanceCSV.save

		# scalar metrics
		var scalarCSV = new CSVDocument(toolcontext.output_dir.join_path("global_scalar_generic_metrics.csv"))
		var udscalarCSV = new CSVDocument(toolcontext.output_dir.join_path("ud_scalar_generic_metrics.csv"))
		scalarCSV.set_header("mclass", "type", "FT", "DITG", "DITGC", "DITGI", "NOGP", "NOGPC", "NOGPI", "NOGA", "NOGAC", "NOGAI", "NOGC", "NOGCC", "NOGCI", "NOGD", "NOGDC", "NOGDI")
		udscalarCSV.set_header("mclass", "type", "FT", "DITGUD", "DITGCUD", "DITGIUD", "NOGPUD", "NOGPCUD", "NOGPIUD", "NOGAUD", "NOGACUD", "NOGAIUD", "NOGCUD", "NOGCCUD", "NOGCIUD", "NOGDUD", "NOGDCUD", "NOGDIUD")
		for c in model.mclasses do
			if not c.arity > 0 then continue
			var name = c.name
			var typ = "class"
			if c.is_interface then typ = "interface"
			scalarCSV.add_line(name, typ, c.arity, c.ditg, c.ditgc, c.ditgi, c.nogp, c.nogpc, c.nogpi, c.noga, c.nogac, c.nogai, c.nogc, c.nogcc, c.nogci, c.nogd, c.nogdc, c.nogdi)
			udscalarCSV.add_line(name, typ, c.arity, c.ditgud, c.ditgcud, c.ditgiud, c.nogpud, c.nogpcud, c.nogpiud, c.nogaud, c.nogacud, c.nogaiud, c.nogcud, c.nogccud, c.nogciud, c.nogdud, c.nogdcud, c.nogdiud)
		end
		scalarCSV.save
		udscalarCSV.save
	end
end
