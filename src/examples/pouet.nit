intrude import modelize_class
intrude import modelize_property

redef class ModelBuilder
	redef fun build_a_mclass(nmodule, nclassdef)
	do
		super

		# Catch the wanted annotation
		var at = nclassdef.get_single_annotation("pouet", self)
		if at == null then return
		nclassdef.debug("Pouet!")

		# Get context information
		var m = nmodule.mmodule
		if m == null then return
		var c = nclassdef.mclass
		if c == null then return
		if c.intro_mmodule != m then
			error(at, "`pouet` can only be used at introductions.")
			return
		end
		var l = at.location

		# Create a pouet-class
		var pc = new MClass(m, "Pouet" + c.name, l, null, concrete_kind, public_visibility) 
		var pcd = new MClassDef(m, pc.mclass_type, l)
		pcd.set_supertypes([m.object_type])

		# Register it
		c.pouet = pc
	end

	redef fun build_properties(nclassdef)
	do
		super

		# Get context information
		var c = nclassdef.mclass
		if c == null then return
		var pc = c.pouet
		if pc == null then return
		var cd = nclassdef.mclassdef
		if cd == null then return
		var pcd = pc.intro

		# For each introduced property
		for md in cd.mpropdefs do
			if not md isa MMethodDef then continue
			if not md.is_intro then continue

			# Create a pouet-method
			var pm = new MMethod(pcd, md.name, pc.location, md.mproperty.visibility)
			var pmd = new MMethodDef(pcd, pm, pc.location)
			pmd.msignature = new MSignature(new Array[MParameter], null)
			pmd.is_abstract = true
		end
	end
end

redef class MClass
	var pouet: nullable MClass = null
end
