# This file is part of NIT ( https://nitlanguage.org ).
#
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

# Injects model for the classes annotated with "is actor" so
# that the later generated code can be properly used for compilation
module actors_injection_phase

import modelize_class
intrude import modelize_property
import parser_util

redef class ModelBuilder
	redef fun build_a_mclass(nmodule, nclassdef)
	do
		super

		# Catch the wanted annotation
		var at = nclassdef.get_single_annotation("actor", self)
		if at == null then return

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

		var injected_name = "Proxy"

		# Create the actor class
		var actor_class = new MClass(mod, injected_name + mclass.name, l, null, concrete_kind, public_visibility)
		var actor_class_definition = new MClassDef(mod, actor_class.mclass_type, l)
		actor_class_definition.set_supertypes([mod.object_type])
		var proxy_classes = mclass.model.get_mclasses_by_name("Proxy")
		assert proxy_classes != null
		var proxy_class = proxy_classes.first
		actor_class_definition.supertypes.add(proxy_class.mclass_type)

		# Register it
		mclass.actor = actor_class
	end

	redef fun build_properties(nclassdef)
	do
		if nclassdef.build_properties_is_done then return
		super

		# Get context information
		var mclass = nclassdef.mclass
		if mclass == null then return
		var mclass_def = nclassdef.mclassdef
		if mclass_def == null then return

		var actor_mclass = mclass.actor
		if actor_mclass == null then return
		var actor_mclass_def = actor_mclass.mclassdefs.first

		# Adds an `async` attribute in the worker class which is the actor class
		if mclass_def.is_intro then
			var async = new MMethod(mclass_def, "async", mclass.location, public_visibility)
			var async_def = new MMethodDef(mclass_def, async, mclass.location)
			async_def.msignature = new MSignature(new Array[MParameter], actor_mclass.mclass_type)
			async_def.is_abstract = true
		end

		# For each introduced property
		for method in mclass_def.mpropdefs do
			if not method isa MMethodDef then continue
			if not method.is_intro then continue
			if method.name == "async" then continue

			# Create a proxied method
			var actor_method = new MMethod(actor_mclass_def, method.name, actor_mclass.location, method.mproperty.visibility)
			var actor_method_def = new MMethodDef(actor_mclass_def, actor_method, actor_mclass.location)

			# Get the signature of the method ( replacing the return value with a Future if there is one)
			var signature = method.msignature
			if signature != null then
				var parameters = signature.mparameters
				var s_return_type = signature.return_mtype
				if s_return_type != null then
					var future_mclasses = mclass_def.model.get_mclasses_by_name("Future")
					assert future_mclasses != null
					var future_mclass = future_mclasses.first
					var return_type = future_mclass.get_mtype([s_return_type])
					actor_method_def.msignature = new MSignature(parameters, return_type)
				else
					actor_method_def.msignature = new MSignature(parameters, null)
				end
			end
			actor_method_def.is_abstract = true
		end
	end
end

redef class MClass
	# Adding the actor class to a class annotated with "is actor"
	var actor: nullable MClass = null
end
