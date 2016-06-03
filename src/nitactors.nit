# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Transforms class annotated with "is actor" into actors
module nitactors

import frontend
private import parser_util
import annotation
import modelize
import astbuilder
private import annotation
private import astvalidation

import gen_nit

private class ActorPhase
	super Phase

	var actors = new Array[String]
	var messages = new Array[String]
	var proxys = new Array[String]
	var proxy_builders = new Array[String]
	var redef_classes = new Array[String]

	redef fun process_annotated_node(nclass, nat)
	do
		if nat.n_atid.n_id.text != "actor" then return

		if not nclass isa AStdClassdef then
			toolcontext.error(nat.location, "Syntax Error: only a class can be annotated as an actor.")
			return
		end

		# Get the module associated with this class
		var mclassdef = nclass.mclassdef
		assert mclassdef != null

		# Get the name of the annotated class
		var classname = mclassdef.name
		
		# Generate the actor class
		actors.add(
"""
class Actor{{{classname}}}
	super Actor
	redef type E: {{{classname}}}
end
""")
		######## Generate the Messages classes ########
		
		# Get all the methods definitions
		var propdefs = mclassdef.mpropdefs
		var methods = new Array[MMethodDef]
		for p in propdefs do
			if p isa MMethodDef then
				# TODO: find how to know if the method is a getter or a setter
				if p.name.has("=") then continue
				# exclude constructors
				if p.mproperty.is_init then continue
				methods.add(p)
			end
		end

		# Generate the superclass for all Messages classes
		var msg_class_name = "Message" + classname
		messages.add(
"""
class {{{msg_class_name}}}
	super Message
	redef type E: {{{classname}}}
end
""")
		# Generate every Message class based on the methods of the annotated class
		var proxy_calls = new Array[String]
		for m in methods do
			# Get the signature of the method
			var signature = m.msignature
			
			# Name of the method
			var method_name = m.name
			
			# Attributes of the `Message` class if needed
			var msg_attributes = new Array[String]
		
			# Signature of the proxy corresponding method
			var proxy_sign = ""
			
			# Values for the body of the `invoke` method of the generated Message class
			# Used if the call must return a value
			var ret_val = ""
			var ret_val2 = ""
			
			# Params to send to `instance` in the `invoke` method
			var params = ""
			
			# Values for the generated proxy method

			# Return signature
			var ret = ""

			# Return statement
			var ret2 = ""


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
					ret_val = "ret.set_value("
					ret_val2 = ")"
					ret = ": Future[{ret_type.name}]"
					ret2 = "return msg.ret"
				end
			end
			
			var name = classname + "Message" + method_name

			# The effective Message Class
			# the `join("\n"	)` is for rendering
			messages.add(
"""
class {{{name}}}
	super {{{msg_class_name}}}
	
	{{{msg_attributes.join("\n	")}}}

	redef fun invoke(instance) do {{{ret_val}}}instance.{{{method_name}}}{{{params}}}{{{ret_val2}}}
end
""")

			
# The actual proxy call
			proxy_calls.add(
"""
redef fun {{{method_name}}}{{{proxy_sign}}}{{{ret}}} do
	var msg = new {{{name}}}{{{params}}}
	actor.mailbox.push(msg)
	{{{ret2}}}
end
""")
		end

		# At this point, all msg classes should be good
		# All of the functions of the proxy too

		# Let's generate the proxy class then
		proxys.add(
"""
redef class Proxy{{{classname}}}
	var actor: Actor{{{classname}}} is noinit
	
	init proxy(base_class: {{{classname}}}) do
		actor = new Actor{{{classname}}}(base_class)
		actor.start
	end

	{{{proxy_calls.join("\n\n")}}}
end
""")

		redef_classes.add(
"""
redef class {{{classname}}}
redef fun async do return new Proxy{{{classname}}}.proxy(self)
end
""")
		
		# Generate the top level method to get a proxy of the annotated class
		
		#		# Parentheses needed if there are parameters
		#		var p1 = ""
		#		var p2 = ""
		#		# First, get the attributes for the parameters
		#		var mattributes = new Array[MAttributeDef]
		#		for a in propdefs do
		#			if a isa MAttributeDef then 
		#				# TODO: find how to avoid generating parameters for attributes
		#				# with default value or private attributes or noautoinit attributes...
		#				# if not a.mproperty.is_autoinit then continue
		#				mattributes.add(a)
		#			end
		#		end	
		#		var attributes_sign = new Array[String]
		#		var attributes_names = new Array[String]
		#		if mattributes.length > 0 then 
		#			p1 = "("
		#			p2 = ")"
		#		end
		#		for a in mattributes do
		#			var n = a.name.remove_all("_")
		#			var t = a.static_mtype.as(not null).name
		#			attributes_sign.add(n + ": " + t)
		#			attributes_names.add(n)
		#		end
		#		
		#		# The actual method
		#		proxy_builders.add(
		#"""
		#fun async_{{{classname}}}{{{p1}}}{{{attributes_sign.join(", ")}}}{{{p2}}}: Proxy{{{classname}}} do
		#	var base_class = new {{{classname}}}{{{p1}}}{{{attributes_names.join(", ")}}}{{{p2}}}
		#	return new Proxy{{{classname}}}.proxy(base_class)
		#end
		#""")
	end
end

redef class ToolContext
	# Generate actors
	var actor_phase: Phase = new ActorPhase(self, [modelize_class_phase])

	# Where do we put a single result?
	var opt_output: OptionString = new OptionString("Output file (can also be 'stdout')", "-o", "--output")

	# Where do we put the result?
	var opt_dir: OptionString = new OptionString("Output directory", "--dir")

	redef init
	do
		option_context.add_option(opt_output, opt_dir)
		super
	end
end

var toolcontext = new ToolContext
toolcontext.tooldescription = """
Usage: nitrestful [OPTION] module.nit [other_module.nit [...]]
Generates the boilerplate code to link RESTful request to static Nit methods."""

toolcontext.process_options args
var arguments = toolcontext.option_context.rest

# Check options
if toolcontext.opt_output.value != null and toolcontext.opt_dir.value != null then
	print "Error: cannot use both --dir and --output"
	exit 1
end
if arguments.length > 1 and toolcontext.opt_output.value != null then
	print "Error: --output needs a single source file. Do you prefer --dir?"
	exit 1
end

var model = new Model
var modelbuilder = new ModelBuilder(model, toolcontext)

var mmodules = modelbuilder.parse(arguments)
modelbuilder.run_phases
var first_mmodule = mmodules.first

# Name of the support module
var module_name

# Path to the support module
var module_path = toolcontext.opt_output.value
if module_path == null then
	module_name = "{first_mmodule.name}_rest"
	module_path = "{module_name}.nit"

	var dir = toolcontext.opt_dir.value
	if dir != null then module_path = dir.join_path(module_path)
else if module_path == "stdout" then
	module_name = "{first_mmodule.name}_rest"
	module_path = null
else if module_path.has_suffix(".nit") then
	module_name = module_path.basename(".nit")
else
	module_name = module_path.basename
	module_path += ".nit"
end

# NOTE: HACK because flemme de gérer les options pour le moment
module_name = "actors_{first_mmodule.name}"
module_path = "nit"

var nit_module = new NitModule(module_name + " is no_warning(\"missing-doc\")")
nit_module.header = """
# This file is generated by nitactors
# Do not modify, instead use the generated services.
"""

for mmod in mmodules do nit_module.imports.add mmod.name
nit_module.imports.add("actors")

var phase = toolcontext.actor_phase
assert phase isa ActorPhase

nit_module.content.add "####################### Redef classes #########################"
for c in phase.redef_classes do nit_module.content.add( c + "\n\n" )

nit_module.content.add "####################### Actor classes #########################"
for c in phase.actors do nit_module.content.add( c + "\n\n" )

nit_module.content.add "####################### Messages classes ######################"
for c in phase.messages do nit_module.content.add( c + "\n\n" )

nit_module.content.add "####################### Proxy classes #########################"
for c in phase.proxys do nit_module.content.add( c + "\n\n" )

#nit_module.content.add "####################### Top level functions for proxies #######"
#for c in phase.proxy_builders do nit_module.content.add( c + "\n\n" )

# Write to file
nit_module.write_to_file module_name + "." + module_path
