# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Johan Kayser <kayser.johan@gmail.com>
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

# A version of the naive Nit interpreter for PNaCl.
module pnacl_nit

import interpreter::naive_interpreter
import interpreter::debugger
import pnacl
intrude import toolcontext
intrude import loader
intrude import standard::file

# We redefine exit to start a new thread before killing the one that called exit.
redef fun exit(exit_value: Int)
do
	var dictionary = new PepperDictionary
	dictionary["exit"] = exit_value
	dictionary["exit_thread"] = "A new thread has been made available for Nit."
	create_thread
	app.post_dictionary dictionary
	exit_thread exit_value
end

#hack realpath.
redef class String
	redef fun realpath do return self

	# file_exists looks in the 'files' HashMap.
	redef fun file_exists: Bool
	do
		if sys.files.has_key(self) then return true
		return false
	end
end

redef class Sys
	# We add two HashMap for temporary file storage.
	# 'lib' stores the lib files.
	var lib = new HashMap[String, String]
	# 'files' stores the "file(s)" you want to interpret + the lib files.
	var files = new HashMap[String, String]
end

redef class ToolContext
	# We don't need 'the compute_nit_dir'.
	redef fun compute_nit_dir
	do
		return "/pnacl"
	end
end

# We have to redef some FileReader methods because we don't use NativeFiles anymore.
redef class FileReader

	# Looks in the 'files' HashMap.
	redef init open(path: String)
	do
		self.path = path
		var file = sys.files[path]
		prepare_buffer(file.length)
		_buffer.append(file)
	end

	redef fun close
	do
		end_reached = true
	end

	redef fun fill_buffer
	do
		_buffer.clear
		end_reached = true
	end

	redef fun reopen
	do
		_buffer_pos = 0
	end
end

redef class ModelBuilder
	# We don't use paths as the interpreter, so just return the argument.
	redef fun module_absolute_path(path: String): String do return path

	# We don't use paths as the interpreter, so we don't use location or lookpaths args (see the default implementation).
	redef fun search_module_in_paths(location: nullable Location, name: String, lookpaths: Collection[String]): nullable ModulePath
	do
		var candidate: nullable String = null
		var try_file = "{name}.nit"
		if try_file.file_exists then
			if candidate == null then
				candidate = try_file
			else if candidate != try_file then
				# try to disambiguate conflicting modules
				var abs_candidate = module_absolute_path(candidate)
				var abs_try_file = module_absolute_path(try_file)
				if abs_candidate != abs_try_file then
					toolcontext.error(location, "Error: conflicting module file for {name}: {candidate} {try_file}")
				end
			end
		end
		if candidate == null then return null
		return identify_file(candidate)
	end
end

class Pnacl_nit
	super PnaclApp

	# In handle_dictionary we search for the 'operation' key in dictionaries,
	# 'load' means that we are loading the Nit library,
	# 'interpret' launches the interpreter code.
	redef fun handle_dictionary(dictionary: PepperDictionary)
	do
		var d = dictionary.copy
		var operation = d["operation"]

		# If operation = 'intepret' we want to interpret some Nit code, so we execute the same code as in nit.nit.
		if operation == "interpret" then
			var args = d["args"].to_s.split(' ')
			# Create a tool context to handle options and paths
			var toolcontext = new ToolContext
			toolcontext.tooldescription = "Usage: nit [OPTION]... <file.nit>...\nInterprets and debbugs Nit programs."
			# Add an option "-o" to enable compatibilit with the tests.sh script
			var opt = new OptionString("compatibility (does noting)", "-o")
			toolcontext.option_context.add_option(opt)
			var opt_mixins = new OptionArray("Additionals module to min-in", "-m")
			toolcontext.option_context.add_option(opt_mixins)
			# We do not add other options, so process them now!
			toolcontext.process_options(args)

			# We need a model to collect stufs
			var model = new Model
			# An a model builder to parse files
			var modelbuilder = new ModelBuilder(model, toolcontext)

			var arguments = toolcontext.option_context.rest
			var progname = arguments.first
			sys.files[progname] = d["content"].to_s

			# Here we load an process all modules passed on the command line
			var mmodules = modelbuilder.parse([progname])
			mmodules.add_all modelbuilder.parse(opt_mixins.value)
			modelbuilder.run_phases

			if toolcontext.opt_only_metamodel.value then exit(0)

			var mainmodule: nullable MModule

			# Here we launch the interpreter on the main module
			if mmodules.length == 1 then
				mainmodule = mmodules.first
			else
				mainmodule = new MModule(model, null, mmodules.first.name, mmodules.first.location)
				mainmodule.set_imported_mmodules(mmodules)
			end

			var self_mm = mainmodule
			var self_args = arguments

			if toolcontext.opt_debugger_autorun.value then
				modelbuilder.run_debugger_autorun(self_mm, self_args)
			else if toolcontext.opt_debugger_mode.value then
				modelbuilder.run_debugger(self_mm, self_args)
			else
				modelbuilder.run_naive_interpreter(self_mm, self_args)
			end
		# If operation = 'load', we are loading lib files, so we store them into HashMaps and send a response to JS.
		else if operation == "load" then
			var filename = d["filename"]
			var content = d["content"]
			if filename isa String and content isa String then
				sys.lib[filename] = content
				sys.files[filename] = content
			end
			var response = new PepperDictionary
			response["operation"] = "load_response"
			response["files_number"] = sys.lib.length.to_s
			post_dictionary response
		end
	end
end

redef fun app do return once new Pnacl_nit
app.initialize # Needed to correctly set up Nit control over the Pepper API.
app.run # Wait for dictionaries.
