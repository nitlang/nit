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

# `nitx`, is a command tool that displays useful informations about the code.
#
# Features:
#
# * Display comment from name/namespace
# * Display documentation page from Nitdoc in console
# * Find type usage in parameters, returns and news.
# * Find usage of a specific property.
# * Find source code related to class/property by its name.
module nitx

import modelbuilder
import doc::doc_phases::doc_console

redef class ToolContext

	# Nittx generation phase.
	var docx: Phase = new NitxPhase(self, null)

	# Used to shortcut the prompt and display directly the result in console.
	var opt_query = new OptionString("Nitx query to perform", "-q", "--query")

	init do option_context.add_option opt_query
end

# Nitx phase explores the model and prepares the console rendering.
private class NitxPhase
	super Phase
	redef fun process_mainmodule(mainmodule, mmodules)
	do
		var doc = new DocModel(mainmodule.model, mainmodule)

		var phases = [
			new ExtractionPhase(toolcontext, doc),
			new MakePagePhase(toolcontext, doc),
			new ConcernsPhase(toolcontext, doc),
			new StructurePhase(toolcontext, doc): DocPhase]

		for phase in phases do
			toolcontext.info("# {phase.class_name}", 1)
			phase.apply
		end

		# start nitx
		var nitx = new Nitx(toolcontext, doc)
		var q = toolcontext.opt_query.value
		if q != null then # shortcut prompt
			print ""
			nitx.do_query(q)
			return
		end
		nitx.start
	end
end

# build toolcontext
var toolcontext = new ToolContext
var tpl = new Template
tpl.add "Usage: nitx [OPTION]... <file.nit>... [query]\n"
tpl.add "Displays specific pieces of API information from Nit source files."
toolcontext.tooldescription = tpl.write_to_string

# process options
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(arguments)

# process
if mmodules.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mmodules)
