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

# Generate a support module for each module that contain a class annotated with `is actor`
# See `nit/lib/actors/actors.nit` for the abstraction on which the generated classes are based
module actors_generation_phase

import actors_injection_phase
import modelize
import gen_nit
import modelbuilder

private class ActorPhase
	super Phase

	var generated_actor_modules = new Array[String]

	# Source code of the actor classes to generate
	var actors = new Array[String]

	# Source code of the message classes to generate
	var messages = new Array[String]

	# Source code of the proxy classes to generate
	var proxys = new Array[String]

	# Redefinitions of annotated classes
	var redef_classes = new Array[String]

	fun generate_actor_classes(mclassdef: MClassDef, mmod: MModule) do
		if not mmod.generate_actor_submodule then mmod.generate_actor_submodule = true

		# Get the name of the annotated class
		var classname = mclassdef.name

		# Generate the actor class
		if mclassdef.is_intro then actors.add(
"""
class Actor{{{classname}}}
	super Actor
	redef type E: nullable {{{classname}}}
end
""")
		######## Generate the Messages classes ########

		# Get all the methods definitions
		var propdefs = new Array[MPropDef]
		for propdef in mclassdef.mpropdefs do
			if propdef.is_intro then propdefs.add(propdef)
		end

		var methods = new Array[MMethodDef]
		for p in propdefs do
			if p isa MMethodDef then
				# TODO: find a better way to exclude constructors,
				# getters/setters and the "async" (the actor)
				if p.name.has("=") or p.name.has("async") or p.mproperty.is_init then continue
				methods.add(p)
			end
		end

		# Generate the superclass for all Messages classes (each actor has its own Message super class)
		var msg_class_name = "Message" + classname

		if mclassdef.is_intro then messages.add(
"""
class {{{msg_class_name}}}
	super Message
	redef type E: {{{classname}}}
end
""")
		# Generate every Message class based on the methods of the annotated class
		var proxy_calls = new Array[String]
		for m in methods do
			# Signature of the method
			var signature = m.msignature

			# Name of the method
			var method_name = m.name

			# Attributes of the `Message` class if needed
			# Corresponds to the parameters of the proxied method
			var msg_attributes = new Array[String]

			# Signature of the proxy corresponding method
			var proxy_sign = ""

			# Values for the body of the `invoke` method of the generated Message class
			# Used if the call must return a value
			var return_value = ""
			var return_parenthesis = ""

			# Params to send to `instance` in the `invoke` method
			var params = ""

			# Values for the generated proxy method
			var return_signature = ""
			var return_statement = ""

			if signature != null then
				var proxy_params= new Array[String]

				# Deal with parameters
				var mparameters = signature.mparameters
				if mparameters.length > 0 then
					var parameters = new Array[String]
					proxy_sign += "("
					for p in mparameters do
						var n = p.name
						var t = p.mtype.name
						msg_attributes.add("var " + n + ": " + t)
						proxy_params.add(n + ": " + t)
						parameters.add(n)
					end
					proxy_sign += proxy_params.join(", ") + ")"
					params = "(" + parameters.join(", ") + ")"
				end

				# Deal with the return if any
				var ret_type = signature.return_mtype
				if ret_type != null then
					msg_attributes.add("var ret = new Future[{ret_type.name}]")
					return_value = "ret.set_value("
					return_parenthesis = ")"
					return_signature = ": Future[{ret_type.name}]"
					return_statement = "return msg.ret"
				end
			end

			# Name of the Message class
			var name = classname + "Message" + method_name

			# The effective Message Class
			messages.add(
"""
class {{{name}}}
	super {{{msg_class_name}}}

	{{{msg_attributes.join("\n")}}}

	redef fun invoke(instance) do {{{return_value}}}instance.{{{method_name}}}{{{params}}}{{{return_parenthesis}}}
end
""")


			# The actual proxy call
			proxy_calls.add(
"""
redef fun {{{method_name}}}{{{proxy_sign}}}{{{return_signature}}} do
	var msg = new {{{name}}}{{{params}}}
	actor.mailbox.push(msg)
	{{{return_statement}}}
end
""")
		end

		# At this point, all msg classes should be good
		# All of the functions of the proxy too

		# Let's generate the proxy class then

		var redef_virtual_type = ""
		if mclassdef.is_intro then redef_virtual_type = "redef type E: Actor{classname}"
		proxys.add(
"""
redef class Proxy{{{classname}}}

	{{{redef_virtual_type}}}

	init proxy(base_class: {{{classname}}}) do
		actor = new Actor{{{classname}}}(base_class)
		actor.start
	end

	{{{proxy_calls.join("\n\n")}}}
end
""")

	if mclassdef.is_intro then redef_classes.add(
"""
redef class {{{classname}}}
	var m = new Mutex
	var lazy_proxy: Proxy{{{classname}}} is lazy do return new Proxy{{{classname}}}.proxy(self)

	redef fun async: Proxy{{{classname}}} do
		m.lock
		var p = lazy_proxy
		m.unlock
		return p
	end
end
""")

	end

	redef fun process_nmodule(nmodule) do
		var mmod = nmodule.mmodule
		if mmod == null then return

		if generated_actor_modules.has(mmod.name) then return

		var mclasses_defs = mmod.mclassdefs
		for mclass_def in mclasses_defs do
			var mclass = mclass_def.mclass
			var actor = mclass.actor
			if actor != null then generate_actor_classes(mclass_def, mmod)
		end

	end

	redef fun process_annotated_node(nclass, nat)
	do
		if nat.n_atid.n_id.text != "actor" then return

		if not nclass isa AStdClassdef then
			toolcontext.error(nat.location, "Syntax Error: only a class can be annotated as an actor.")
			return
		end
	end

	redef fun process_nmodule_after(nmodule) do
		var first_mmodule = nmodule.mmodule
		if first_mmodule == null then return

		# Be careful not to generate useless submodules !
		if not first_mmodule.generate_actor_submodule then return

		# Name of the support module
		var module_name

		# Path to the support module
		module_name = "actors_{first_mmodule.name}"

		# We assume a module using actors has a `filepath` not null
		var mmodule_path = first_mmodule.filepath.as(not null).dirname

		var module_path = "{mmodule_path}/{module_name}.nit"

		var nit_module = new NitModule(module_name)
		nit_module.annotations.add "no_warning(\"missing-doc\")"

		nit_module.header = """
		# This file is generated by nitactors (threaded version)
		# Do not modify, instead use the generated services.
		"""

		# for mmod in mmodules do nit_module.imports.add mmod.name
		nit_module.imports.add first_mmodule.name

		generated_actor_modules.add(module_name)
		var idx = generated_actor_modules.index_of(module_name)
		for i in [0..idx[ do nit_module.imports.add(generated_actor_modules[i])

		nit_module.content.add "####################### Redef classes #########################"
		for c in redef_classes do nit_module.content.add( c + "\n\n" )

		nit_module.content.add "####################### Actor classes #########################"
		for c in actors do nit_module.content.add( c + "\n\n" )

		nit_module.content.add "####################### Messages classes ######################"
		for c in messages do nit_module.content.add( c + "\n\n" )

		nit_module.content.add "####################### Proxy classes #########################"
		for c in proxys do nit_module.content.add( c + "\n\n" )

		# Write support module
		nit_module.write_to_file module_path

		actors.clear
		messages.clear
		proxys.clear
		redef_classes.clear

		toolcontext.modelbuilder.inject_module_subimportation(first_mmodule, module_path)
	end
end

redef class MModule
	# Do we need to generate the actor submodule ?
	var generate_actor_submodule = false
end

redef class ToolContext
	# Generate actors
	var actor_phase: Phase = new ActorPhase(self, [modelize_class_phase, modelize_property_phase])
end
