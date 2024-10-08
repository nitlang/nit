# This file is part of NIT ( https://nitlanguage.org ).
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

# Tool generating boilerplate code linking RESTful actions to Nit methods
module nitrestful

import gen_nit

import frontend

private class RestfulPhase
	super Phase

	# Classes with methods marked with the `restful` annotation
	var restful_classes = new HashSet[MClassDef]

	redef fun process_annotated_node(node, nat)
	do
		# Skip if we are not interested
		var text = nat.n_atid.n_id.text
		if text != "restful" then return

		if not node isa AMethPropdef then
			toolcontext.error(nat.location,
				"Syntax Error: `restful` can only be applied on method definitions")
			return
		end

		var mpropdef = node.mpropdef
		if mpropdef == null then return
		var mproperty = mpropdef.mproperty
		var mclassdef = mpropdef.mclassdef
		var mmodule = mclassdef.mmodule

		var http_resources = new Array[String]
		var http_methods = new Array[String]
		for arg in nat.n_args do
			var str = arg.as_string
			var id = arg.collect_text
			if str != null then
				# String -> rename resource
				http_resources.add str
			else if arg isa ATypeExpr and not id.chars.has("[") then
				# Class id -> HTTP method
				http_methods.add id
			else if id == "async" then
				mproperty.restful_async = true
			else
				toolcontext.error(nat.location,
					"Syntax Error: `restful` expects String literals or ids as arguments.")
				return
			end
		end

		# Test subclass of `RestfulAction`
		var sup_class_name = "RestfulAction"
		var sup_class = toolcontext.modelbuilder.try_get_mclass_by_name(
			nat, mmodule, sup_class_name)
		var in_hierarchy = mclassdef.in_hierarchy
		if in_hierarchy == null or sup_class == null then return
		var sup_classes = in_hierarchy.greaters
		if not sup_classes.has(sup_class.intro) then
			toolcontext.error(nat.location,
				"Syntax Error: `restful` is only valid within subclasses of `{sup_class_name}`")
			return
		end

		# Register the property
		mclassdef.restful_methods.add mproperty
		restful_classes.add mclassdef

		if http_resources.not_empty then mproperty.restful_resources = http_resources
		mproperty.restful_verbs = http_methods
	end
end

redef class MClassDef

	# Methods with the `restful` annotation in this class
	private var restful_methods = new Array[MMethod]
end

redef class MMethod
	# HTTP access methods, e.g. `GET, POST, PUT or DELETE`
	private var restful_verbs = new Array[String] is lazy

	# Associated resources within an action, e.g. `foo` in `http://localhost/foo?arg=bar`
	private var restful_resources: Array[String] = [name] is lazy

	# Is this a `restful` method to be executed asynchronously
	private var restful_async = false
end

redef class ToolContext
	# Generate serialization and deserialization methods on `auto_serializable` annotated classes.
	var restful_phase: Phase = new RestfulPhase(self, [modelize_class_phase])

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

redef class MType
	# Write code in `template` to parse the argument `arg_name` to this parameter type
	private fun gen_arg_convert(template: Template, arg_name: String)
	do
		if self.name == "String" or self.name == "nullable String" then
			# String are used as is
			template.add """
			var out_{{{arg_name}}} = in_{{{arg_name}}}
"""
		else
			# Deserialize everything else
			template.add """
			var out_{{{arg_name}}} = deserialize_arg(in_{{{arg_name}}}, "{{{self.name}}}")
"""
		end
	end

	# Does this parameter type needs to be checked before calling the method?
	#
	# Some nullable types do not need to be check as `null` values are acceptable.
	private fun needs_type_check: Bool do return true
end

redef class MNullableType
	redef fun needs_type_check do return name != "nullable String" and name != "nullable Object"
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

var nit_module = new NitModule(module_name)
nit_module.annotations.add """generated"""
nit_module.annotations.add """no_warning("parentheses")"""
nit_module.header = """
# This file is generated by nitrestful
# Do not modify, instead refine the generated services.
"""

for mmod in mmodules do
	nit_module.imports.add mmod.name
end

var phase = toolcontext.restful_phase
assert phase isa RestfulPhase

for mclassdef in phase.restful_classes do
	var mclass = mclassdef.mclass

	var t = new Template
	nit_module.content.add t

	var classes = new Template
	nit_module.content.add classes

	t.add """
redef class {{{mclass}}}
	redef fun prepare_respond_and_close(request, truncated_uri, http_server)
	do
		var resources = truncated_uri.split("/")
		if resources.not_empty and resources.first.is_empty then resources.shift

		if resources.length != 1 then
			super
			return
		end
		var resource = resources.first

"""
	var methods = mclassdef.restful_methods
	for i in methods.length.times, method in methods do
		var msig = method.intro.msignature
		if msig == null then continue

		# Condition to select this method from a request
		var conds = new Array[String]

		# Name of the resource from the method or as renamed
		var resource_conds = new Array[String]
		for resource in method.restful_resources do resource_conds.add "resource == \"{resource}\""
		conds.add "(" + resource_conds.join(" or ") + ")"

		# HTTP methods/verbs
		if method.restful_verbs.not_empty then
			var method_conds = new Array[String]
			for meth in method.restful_verbs do method_conds.add "request.method == \"{meth}\""
			conds.add "(" + method_conds.join(" or ") + ")"
		end

		t.add """
		if {{{conds.join(" and ")}}} then
"""

		# Extract the arguments from the request for the method call
		var args = new Array[String]
		var isas = new Array[String]
		for param in msig.mparameters do

			t.add """
			var in_{{{param.name}}} = request.string_arg("{{{param.name}}}")
"""

			var mtype = param.mtype
			var bound_mtype = mclassdef.bound_mtype
			var resolved_mtype = mtype.resolve_for(bound_mtype, bound_mtype, mclassdef.mmodule, true)
			var resolved_type_name = resolved_mtype.name

			resolved_mtype.gen_arg_convert(t, param.name)

			var arg = "out_{param.name}"
			args.add arg

			if mtype.needs_type_check then
				isas.add "{arg} isa {mtype.name}"
			end

			t.add "\n"
		end

		if isas.not_empty then t.add """
			if {{{isas.join(" and ")}}} then
"""

		var sig = ""
		if args.not_empty then sig = "({args.join(", ")})"

		if not method.restful_async then
			# Synchronous method
			t.add """
				var response = {{{method.name}}}{{{sig}}}
				http_server.respond response
				http_server.close
				return
"""
		else
			# Asynchronous method
			var task_name = "Task_{mclass}_{method.name}"
			args.unshift "http_server"
			args.unshift "request"
			args.unshift "self"

			t.add """
				var task = new {{{task_name}}}({{{args.join(", ")}}})
				self.thread_pool.execute task
				return
"""

			var thread_attribs = new Array[String]
			for param in msig.mparameters do
				thread_attribs.add """
	private var out_{{{param.name}}}: {{{param.mtype}}}"""
			end

			classes.add """

# Generated task to execute {{{mclass}}}::{{{method.name}}}
class {{{task_name}}}
	super RestfulTask

	redef type A: {{{mclass}}}

{{{thread_attribs.join("\n")}}}

	redef fun indirect_restful_method
	do
		return action.{{{method.name}}}{{{sig}}}
	end
end
"""
		end

		if isas.not_empty then t.add """
			end
"""
		t.add """
		end
"""
	end

	t.add """
		super
	end
end"""
end

# Write support module
if module_path != null then
	# To file
	nit_module.write_to_file module_path
else
	# To stdout
	nit_module.write_to stdout
end
