# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Use this tool to check namespaces in a Expert TOC file.
module check_namespaces

import doc::doc_phases::doc_extract
import modelbuilder

redef class ToolContext

	# Input file to check.
	var opt_input = new OptionString("Input file to check", "-c", "--check-file")

	# Nitdoc generation phase.
	var docphase: Phase = new CheckNamespace(self, null)

	init do
		super
		option_context.add_option opt_input
	end
end

# TOC generator phase
private class DocCheckNamespaces
	super DocPhase

	redef fun apply do
		var input = ctx.opt_input.value
		if input == null then
			print "Error: option `--check-file` is required for this tool"
			sys.exit 1
			return
		end
		if not input.file_exists then
			print "Error: unable to open select list `{input}`"
			sys.exit 1
			return
		end

		# for p in doc.mpackages do
		#	print "Package {p}"
		#	for g in p.mgroups do
		#		print " Group {g.full_name}"
		#		for m in g.mmodules do
		#			print "  Module {m}"
		#			for cd in m.mclassdefs do
		#				# print "   Class {cd}"
		#			end
		#		end
		#	end
		# end

		var fr = new FileReader.open(input)
		var line_nb = 1
		for line in fr.read_lines do
			line = line.trim
			var res = doc.mentities_by_namespace(line)
			if res.length == 0 then
				print "Warning: namespace {line} not found at line {line_nb}"
			else if res.length > 1 then
				print "Warning: conflict for namespace {line} at line {line_nb}"
			end
			line_nb += 1
		end
		fr.close
	end
end


# Nitdoc phase explores the model and generate pages for each mentities found
private class CheckNamespace
	super Phase
	redef fun process_mainmodule(mainmodule, mmodules)
	do
		var doc = new DocModel(mainmodule.model, mainmodule)

		var phases = [
			new ExtractionPhase(toolcontext, doc),
			new DocCheckNamespaces(toolcontext, doc): DocPhase]

		for phase in phases do
			toolcontext.info("# {phase.class_name}", 1)
			phase.apply
		end
	end
end

# build toolcontext
var toolcontext = new ToolContext
var tpl = new Template
tpl.add "Usage: check_namespaces [OPTION]... <file.nit>...\n"
tpl.add "Check the namespaces found on expert TOC files."
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
