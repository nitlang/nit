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

# LLVM backend
#
# TODO complete doc
module nitllvm

import modelbuilder
import frontend
import model_utils

redef class ToolContext

	# LLVM code generation
	var llvm_phase: Phase = new LLVMPhase(self, null)
end

private class LLVMPhase
	super Phase

	redef fun process_mainmodule(mainmodule, mmodules)
	do
		var fw = new FileWriter.open("{args[0]}_Vtables.txt")
		var ll = new FileWriter.open("{args[0]}.ll")

		var llvm_classes_vtables = new HashMap[String, String]
		var llvm_functions = new HashMap[String, String]
		var llvm_attributes = new HashMap[String, String]

		print "Process process_mainmodule"
		print "mainmodule {mainmodule}"

		var full_mclass_hierarchy = mainmodule.flatten_mclass_hierarchy

		ll.write("\n\n;Class Structures\n")
		for mclass in full_mclass_hierarchy
			do
				llvm_classes_vtables[mclass.name]="%class_{mclass.name}_vtable = type \{\n"
				llvm_attributes[mclass.name]="%class_{mclass.name} = type \{%class_{mclass.name}_vtable*"

				fw.write("-----------------------------\n")
				print "-----------------------------"

				print "mclass.name:>>{mclass.name}<<"

				fw.write("Class:{mclass.name}\n")
				fw.write("\nVtable:\n")
				fw.write("**********************\n")

				var my_mproperties= mclass.all_mproperties(mainmodule,mclass.visibility)

				if my_mproperties.is_empty == false then

					for my_mproperty in my_mproperties do
						if my_mproperty isa MMethod then

							print "Method found"
							print "my_mproperty.full_name:>>{my_mproperty.full_name}<<"
							print "my_mproperty.name:>>{my_mproperty.name}<<\n"
							fw.write("Function:{my_mproperty.name}\n")

							#var my_visib=my_mproperty.visibility.to_s
							#print "my_mproperty.visibility is {my_visib}\n"

							var my_MPROPALLDEF= my_mproperty.lookup_all_definitions(mainmodule,mclass.mclass_type)
							#var my_nextDef =my_mproperty.lookup_first_definition(mainmodule, mclass.mclass_type)
							#print "my_nextDef:>>{my_nextDef.name}<<\n"
							#var my_nextDef2 =my_nextDef.lookup_next_definition(mainmodule, mclass.mclass_type)
							#print "my_nextDef2:>>{my_nextDef2.name}<<\n"

							var j=0
							for x in my_MPROPALLDEF do

								var index="{x.mclassdef.name}_{x.name}"
								print "index:>>{index}<<\n"
								fw.write("\n_{x.name}_{x.mclassdef.name}\n")
								llvm_functions[index]="define "
								print "Signature:>>{x.msignature.name}<<\n"
								if	x.msignature.return_mtype != null then
									print "Signature mtype:>>{x.msignature.return_mtype.name}<<\n"
									#llvm_functions[index]="%{llvm_functions[index]}* "
									llvm_functions[index]="{llvm_functions[index]}%{x.msignature.return_mtype.name} "
									llvm_classes_vtables[mclass.name]="{llvm_classes_vtables[mclass.name]}%{x.msignature.return_mtype.name}("
								else
									llvm_functions[index]="{llvm_functions[index]}void "
									llvm_classes_vtables[mclass.name]="{llvm_classes_vtables[mclass.name]}void("
								end

								llvm_classes_vtables[mclass.name]="{llvm_classes_vtables[mclass.name]}%class_{x.mclassdef.name}*,"

								llvm_functions[index]="{llvm_functions[index]}@{index}(%class_{mclass.name}* %this"
								var funct_params = x.msignature.mparameters


								var i=0
								for y in funct_params do

									print "Signature param mtype:>>{y.mtype.name}<<\n"
									print "Signature param name:>>{y.name}<<\n"
									llvm_functions[index]="{llvm_functions[index]},%class_{y.mtype.name} {y.name}"

									if i <funct_params.length then
										llvm_classes_vtables[mclass.name]="{llvm_classes_vtables[mclass.name]}%class_{y.mtype.name},"
									else
										llvm_classes_vtables[mclass.name]="{llvm_classes_vtables[mclass.name]}%class_{y.mtype.name}"
									end
									i=i+1
								end

								llvm_functions[index]="{llvm_functions[index]}) nounwind \{\n;Corp de la methode\n\}\n"
								if j < my_MPROPALLDEF.length then
									llvm_classes_vtables[mclass.name]="{llvm_classes_vtables[mclass.name]})* @{index},\n"
								else
									llvm_classes_vtables[mclass.name]="{llvm_classes_vtables[mclass.name]})* @{index}\n"
								end
								j=j+1

							end
						end #if my_mproperty

					end#for my_mproperty
					llvm_classes_vtables[mclass.name]="{llvm_classes_vtables[mclass.name]}\n\}\n\n"
					fw.write("**********************\n\n")
				end#if my_mproperties

				llvm_attributes[mclass.name]="\n{llvm_attributes[mclass.name]}\}\n"
				ll.write(llvm_attributes[mclass.name])

		end#for mclass
		ll.write("\n\n;Functions\n")
		for v in llvm_functions.values do ll.write(v)
		ll.write("\n\n;Classes Vtables\n")
		for v in llvm_classes_vtables.values do ll.write(v)
		ll.write("\n\ndefine i32 @main(i32 %argc, i8** %argv) nounwind \{\n\n\}")
		fw.close
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
