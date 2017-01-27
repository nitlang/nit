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

# LLVM backend for the Nit compiler (Work in progress)
#
# # Features and TODO list
#
# - [x] Generate basic class structures
# - [x] Generate LLVM function signatures
# - [ ] Generate LLVM implementation code
# - [ ] Attributes
# - [ ] Intern methods
# - [ ] Generic and other types
# - [ ] Support the FFI with C
#
# # References
#
# * http://llvm.org/docs/WritingAnLLVMBackend.html
# * http://llvm.org/docs/LangRef.html
# * http://llvm.org/releases/2.6/docs/tutorial/JITTutorial1.html
module nitllvm

import modelbuilder
import frontend
import model_utils

redef class ToolContext
	# --output
	var opt_output = new OptionString("Output file", "-o", "--output")

	init do option_context.add_option opt_output

	# LLVM code generation
	var llvm_phase: Phase = new LLVMPhase(self, null)
end

private class LLVMPhase
	super Phase

	redef fun process_mainmodule(mainmodule, mmodules)
	do
		# Prepare LLVM code in memory
		var llvm_classes_vfts = new HashMap[String, String]
		var llvm_functions = new HashMap[String, String]
		var llvm_attributes = new HashMap[String, String]

		for mclass in mainmodule.flatten_mclass_hierarchy do
			var class_vft = ["%class_{mclass.name}_vft = type \{\n"]
			var class_vft_entries = new Array[String]
			var class_attributes = ["\n%class_{mclass.name} = type \{%class_{mclass.name}_vft*"] # TODO

			var mproperties = mclass.all_mproperties(mainmodule, private_visibility)
			for mproperty in mproperties do
				if mproperty isa MMethod then

					var mpropdefs = mproperty.lookup_all_definitions(mainmodule, mclass.mclass_type)
					for mpropdef in mpropdefs do

						var class_vft_entry = ["\t"]

						var index = "{mpropdef.mclassdef.name}_{mpropdef.name}"
						var llvm_function = ["define "]
						if mpropdef.msignature.return_mtype != null then
							llvm_function.add "%{mpropdef.msignature.return_mtype.name} "
							class_vft_entry.add "%{mpropdef.msignature.return_mtype.name}("
						else
							llvm_function.add "void "
							class_vft_entry.add "void("
						end

						var params = new Array[String]

						# Receiver
						params.add "%class_{mpropdef.mclassdef.name}*"
						llvm_function.add "@{index}(%class_{mclass.name}* %this"

						for param in mpropdef.msignature.mparameters do
							llvm_function.add ",%class_{param.mtype.name} %{param.name}"
							params.add "%class_{param.mtype.name}"
						end
						class_vft_entry.add params.join(",")

						llvm_function.add """) nounwind {
	; Method body TODO
	ret void
}
"""
						class_vft_entry.add ")*"
						# TODO use the suffix " @{index}" on the previous line?
						# Without it is no so much a VFT, but I couldn't get it to compile otherwise

						llvm_functions[index] = llvm_function.join("")
						class_vft_entries.add class_vft_entry.join("")
					end
				end
			end

			class_vft.add class_vft_entries.join(",\n")
			class_vft.add "\n\}\n\n"
			llvm_classes_vfts[mclass.name] = class_vft.join("")

			class_attributes.add "\}\n"
			llvm_attributes[mclass.name] = class_attributes.join("")
		end

		# Write LLVM code to file
		var ll: Writer
		var llvm_output_file = toolcontext.opt_output.value
		if llvm_output_file != null then
			ll = llvm_output_file.to_path.open_wo
		else ll = sys.stdout

		ll.write "\n; Class Structures\n"
		for class_name, llvm_code in llvm_attributes do ll.write llvm_code

		ll.write "\n; Functions\n"
		for llvm_code in llvm_functions.values do ll.write llvm_code

		ll.write "\n; Classes VFTs\n"
		for llvm_code in llvm_classes_vfts.values do ll.write llvm_code

		ll.write """
define i32 @main(i32 %argc, i8** %argv) nounwind {
	; TODO
	ret i32 7 ; for debugging purposes
}
"""
		ll.close
	end
end

# process options
var toolcontext = new ToolContext
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(arguments)

if mmodules.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mmodules)
