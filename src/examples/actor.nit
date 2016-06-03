intrude import modelize_class
intrude import modelize_property

redef class ModelBuilder
	redef fun build_a_mclass(nmodule, nclassdef)
	do
		super

		# Catch the wanted annotation
		var at = nclassdef.get_single_annotation("actor", self)
		if at == null then return
		nclassdef.debug("Actor!")

		# Get context information
		var mod = nmodule.mmodule
		if mod == null then return
		var mclass = nclassdef.mclass
		if mclass == null then return
		if mclass.intro_mmodule != mod then
			error(at, "`actor` can only be used at introductions.")
			return
		end

		var l = at.location

		# Create the proxy class
		var proxy_class = new MClass(mod, "Proxy" + mclass.name, l, null, concrete_kind, public_visibility) 
		var proxy_class_definition = new MClassDef(mod, proxy_class.mclass_type, l)
		proxy_class_definition.set_supertypes([mod.object_type])

		# Register it
		mclass.proxy = proxy_class

		nclassdef.debug("finished building proxy class !")
	end

	redef fun build_properties(nclassdef)
	do
		super

		# Get context information
		var mclass = nclassdef.mclass
		if mclass == null then return
		var proxy_mclass = mclass.proxy
		if proxy_mclass == null then return
		var mclass_def = nclassdef.mclassdef
		if mclass_def == null then return
		var proxy_mclass_def = proxy_mclass.classdef

		# Adds an `async` attribute in the worker class which is the proxy class
		if mclass_def.is_intro then
			var async = new MMethod(mclass_def, "async", mclass.location, public_visibility)
			var async_def = new MMethodDef(mclass_def, async, mclass.location)
			async_def.msignature = new MSignature(new Array[MParameter], proxy_mclass.mclass_type)
			async_def.is_abstract = true

			nclassdef.debug("Added async!")
		end
		# For each introduced property
		for method in mclass_def.mpropdefs do
			if not method isa MMethodDef then continue
			if not method.is_intro then continue

			# Create a proxied method
			var proxy_method = new MMethod(proxy_mclass_def, method.name, proxy_mclass.location, method.mproperty.visibility)
			var proxy_method_def = new MMethodDef(proxy_mclass_def, proxy_method, proxy_mclass.location)
			nclassdef.debug("added one proxied method!")

			# Get the signature of the method ( a Future if there is a return type)
			var signature = method.msignature
			if signature != null then
				var parameters = signature.mparameters
				var s_return_type = signature.return_mtype
				if s_return_type != null then
					var future_mclasses = mclass_def.model.get_mclasses_by_name("Future")
					assert future_mclasses != null
					var future_mclass = future_mclasses.first
					var return_type = future_mclass.get_mtype([s_return_type])
					proxy_method_def.msignature = new MSignature(parameters, return_type)
				else
					proxy_method_def.msignature = new MSignature(parameters, null)
				end
			end
			proxy_method_def.is_abstract = true
		end
	end
end

redef class MClass
	var proxy: nullable MClass = null
end
