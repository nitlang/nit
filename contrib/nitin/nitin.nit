# This file is part of NIT ( http://www.nitlanguage.org ).
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
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# The Nit interactive interpreter
module nitin

import prompt

import nitc::interpreter
import nitc::frontend
import nitc::parser_util
intrude import nitc::scope

redef class ToolContext

	# --no-prompt
	var opt_no_prompt = new OptionBool("Disable writing a prompt.", "--no-prompt")

	# --source-name
	var opt_source_name = new OptionString("Set a name for the input source.", "--source-name")

	redef init do
		super
		option_context.add_option(opt_no_prompt, opt_source_name)
	end

	# Parse a full module given as a string
	#
	# Return a AModule or a AError
	fun p_module(string: String): ANode
	do
		var source_name = opt_source_name.value or else ""
		string = "\n" * last_line + string
		var source = new SourceFile.from_string(source_name, string)
		var lexer = new Lexer(source)
		var parser = new Parser(lexer)
		var tree = parser.parse

		var eof = tree.n_eof
		if eof isa AError then
			return eof
		end
		return tree.n_base.as(not null)
	end

	# The last line number read by `i_parse`
	var last_line = 0

	# Parse the input of the user as a module
	fun i_parse(prompt: String): nullable ANode
	do
		var oldtext = ""

		loop
			var s
			if opt_no_prompt.value then
				s = stdin.read_line
				if s == "" and stdin.eof then s = null
			else
				s = sys.prompt(prompt)
			end
			if s == null then return null
			if s == "" then
				if oldtext != "" then
					oldtext += "\n"
				else
					last_line += 1
				end
				continue
			end

			if s.chars.first == ':' then
				var res = new TString
				res.text = s
				return res
			end

			var text = oldtext + s + "\n"
			oldtext = ""
			var n = p_module(text)

			if n isa AParserError and (n.token isa EOF or n.token isa TBadTString or n.token isa TBadExtern) then
				# Unexpected end of file, thus continuing
				if oldtext == "" then prompt = "." * prompt.length
				oldtext = text
				continue
			end

			last_line = n.location.file.line_starts.length - 1
			prompt_add_history(text.chomp)
			return n
		end
	end
end

redef class AMethPropdef
	var injected_variables: nullable Map[Variable, Instance] = null is writable
	var new_variables: nullable Array[Variable] = null

	redef fun accept_scope_visitor(v)
	do
		var injected_variables = self.injected_variables
		if injected_variables == null then
			super
			return
		end

		# Inject main variables in the initial scope
		var scope = v.scopes.first
		for variable in injected_variables.keys do
			scope.variables[variable.name] = variable
		end

		super

		# Gather new top-level variables as main variables
		scope = v.scopes.first
		var new_variables = new Array[Variable]
		for variable in scope.variables.values do
			if not injected_variables.has_key(variable) then
				new_variables.add(variable)
			end
		end
		self.new_variables = new_variables
	end

	redef fun call_commons(v, m, a, f)
	do
		var injected_variables = self.injected_variables
		if injected_variables == null then return super

		# Inject main variables in the frame
		for variable, i in injected_variables do
			f.write_variable(variable, v, i)
		end

		var res = super

		# Update the values of the variables
		for variable in injected_variables.keys do
			injected_variables[variable] = f.read_variable(variable, v)
		end
		# Retrieve the values of the new main variables
		for variable in new_variables.as(not null) do
			injected_variables[variable] = f.read_variable(variable, v)
		end

		return res
	end
end

# Create a tool context to handle options and paths
var toolcontext = new ToolContext
toolcontext.option_context.options_before_rest = true
toolcontext.accept_no_arguments = true
toolcontext.keep_going = true
toolcontext.process_options(args)

# We need a model to collect stufs
var model = new Model
# An a model builder to parse files
var modelbuilder = new ModelBuilder(model, toolcontext)

var arguments = toolcontext.option_context.rest

# Our initial program is an empty module
var amodule = toolcontext.parse_module("")
var mmodule = modelbuilder.load_rt_module(null, amodule, "input-0")
modelbuilder.run_phases
if not toolcontext.check_errors then return
assert mmodule != null
var mmodules = [mmodule]
var mainmodule = toolcontext.make_main_module(mmodules)

# Start and run the interpreter on the empty module
var interpreter = new NaiveInterpreter(modelbuilder, mainmodule, arguments)
interpreter.start(mainmodule)

# Get the main object and the main method
var mainobj = interpreter.mainobj
assert mainobj != null
var sys_type = mainobj.mtype.as(MClassType)
var mainprop = mainmodule.try_get_primitive_method("main", sys_type.mclass)
assert mainprop != null

var main_variables = new Map[Variable, Instance]

var l = 0
loop
	# Next piece of Nit code
	var n = toolcontext.i_parse("-->")
	if n == null then
		break
	end

	# Special adhoc command
	if n isa TString then
		var s = n.text
		if s == ":q" then
			break
		else
			print "`:q` to quit"
		end
		continue
	end

	# An error
	if n isa AError then
		modelbuilder.error(n, n.message)
		toolcontext.check_errors
		continue
	end

	#n.dump_tree

	# A syntactically module!
	amodule = n.as(AModule)

	# Try to load it as a submodule
	l += 1
	var newmodule = modelbuilder.load_rt_module(mainmodule, amodule, "input-{l}")
	if newmodule == null then continue

	var main_method = null
	if amodule.n_classdefs.not_empty and amodule.n_classdefs.last isa AMainClassdef then
		main_method = amodule.n_classdefs.last.n_propdefs.first
		assert main_method isa AMethPropdef
		main_method.injected_variables = main_variables
	end

	modelbuilder.run_phases
	if not toolcontext.check_errors then
		toolcontext.error_count = 0
		continue
	end
	# Everything is fine, the module is the new main module!
	mainmodule = newmodule
	interpreter.mainmodule = mainmodule

	# Run the main if the AST contains a main
	if main_method != null then
		do
			interpreter.clear_caches
			interpreter.catch_count += 1
			interpreter.send(mainprop, [mainobj])
		catch
			var e = interpreter.last_error
			if e != null then
				var en = e.node
				if en != null then
					print "{en.location}: Runtime error: {e.message}\n{en.location.colored_line("0;31")}"
				else
					print "Runtime error: {e.message}"
				end
			end
			print interpreter.stack_trace
			interpreter.frames.clear
		end
	end
end
