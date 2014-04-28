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

import frontend
import transform
import annotations

# Toolcontext allow to handle options and pathes
var toolcontext = new ToolContext
toolcontext.process_options(args)
toolcontext.phases.add_node(toolcontext.transform_phase)

# We need a model to repesent higher level concepts like MModules, MClasses etc...
var model = new Model

# ModelBuilder is used to create and populate a new model
var modelbuilder = new ModelBuilder(model, toolcontext)


var arguments = toolcontext.option_context.rest
if arguments.is_empty then
	toolcontext.option_context.usage
	return
end
if arguments.length > 1 then
	print "Too much arguments: {arguments.join(" ")}"
	toolcontext.option_context.usage
	return
end
var progname = arguments.first

# Here we parse the source code and generate the model
var mmodules = modelbuilder.parse([progname])
if mmodules.is_empty then return
modelbuilder.run_phases

# Define the main module
var mainmodule
if mmodules.length == 1 then
	mainmodule = mmodules.first
else
	mainmodule = new MModule(model, null, mmodules.first.name, mmodules.first.location)
	mainmodule.set_imported_mmodules(mmodules)
end

# Search for each MDoc associated to entities in model

# Browses modules
#for mmodule in model.mmodules do
	
	var mmodule = mainmodule # Only test 'Foo' module and not imported ones
	print "-> MODULE {mmodule}"
	if mmodule.mdoc != null and mmodule.mdoc.content != null then
		var annot_in_module: Bool = false
		for mcomment_line in mmodule.mdoc.content do
			# Do not print these annotations (for clear output in console but not mandatory)
			if not mcomment_line.chars.is_empty and mcomment_line.chars.first != '@' then
				print mcomment_line
			else
				annot_in_module = true
			end
		end
		
		# Aibility to get annotations of the current module
		if annot_in_module then
			annot_in_module = false
			print "\n*** Test output for annotations :"
			for annot in mmodule.mdoc.annotations do print " {annot.name} - {annot.value}"
			print "###\n"
		end
	end
	if mmodule.mclassdefs.length > 0 then print ""

	# Browses classes
	for mclass in mmodule.mclassdefs do
		print "  -> CLASS {mclass}"
		if mclass.mdoc != null and mclass.mdoc.content != null then
			var annot_in_class: Bool = false
			for ccomment_line in mclass.mdoc.content do
				if not ccomment_line.chars.is_empty and ccomment_line.chars.first != '@' then
					print "  {ccomment_line}"
				else
					annot_in_class = true
				end
			end

			if annot_in_class then
				annot_in_class = false
				print "\n  *** Test output for annotations :"
				for annot in mclass.mdoc.annotations do print "  {annot.name} - {annot.value}"
				print "  ###\n"
			end

		end
		if mclass.mpropdefs.length > 0 then print ""

		# Browses properties
		for mproperty in mclass.mpropdefs do
			print "    -> PROPERTY {mproperty}"
			if mproperty.mdoc != null and mproperty.mdoc.content != null then
				var annot_in_prop: Bool = false
				for pcomment_line in mproperty.mdoc.content do
					if not pcomment_line.chars.is_empty and pcomment_line.chars.first != '@' then
						print "    {pcomment_line}"
					else
						annot_in_prop = true
					end
				end

				if annot_in_prop then
					annot_in_prop = false
					print "\n    *** Test output for annotations :"
					for annot in mproperty.mdoc.annotations do print "    {annot.name} - {annot.value}"
					print "    ###\n"
				end

			end
			if mproperty.mdoc != null and mclass.mpropdefs.index_of(mproperty) != mclass.mpropdefs.length - 1 then print ""
		end
		if mmodule.mclassdefs.index_of(mclass) != mmodule.mclassdefs.length - 1 then print ""
	end
	print ""

#end
