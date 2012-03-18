# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006-2008 Floréal Morandat <morandat@lirmm.fr>
# Copyright 2008 Jean Privat <jean@pryen.org>
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


# Base module for nit tools that load, manipulate or transform NIT models
package abstracttool

import mmloader
import syntax
private import nit_version

abstract class AbstractCompiler
	super ToolContext

	init(tool_name: String)
	do
		_tool_name = tool_name
		super
		register_loader(new SrcModuleLoader)
	end

	# The name of the tool
	# Used in help messages for instance
	readable var _tool_name: String

	fun exec_cmd_line
	do
		process_options

		if opt_version.value then
			print "{tool_name} version {nit_version}"
			exit(0)
		end

		if opt_help.value then
			print "usage: {tool_name} [options] file..."
			option_context.usage
			exit(0)
		end

		if option_context.rest.length == 0 then
			print "usage: {tool_name} [options] file..."
			option_context.usage
			exit(1)
		end

		var rest = option_context.rest
		var to_do = new Array[MMModule]
		info("Syntax analysis",1)
		for i in [0..rest.length[ do
			var mod = get_module_from_filename(rest[i])
			to_do.add(mod)
		end
		if opt_log.value then
			dump_context_info
		end

		if not to_do.is_empty and not opt_only_metamodel.value and not opt_only_parse.value then
			perform_work(to_do)
		end
	end

	fun perform_work(mods: Array[MMModule]) is abstract

	fun dump_context_info
	do
		for mod in module_hierarchy do
			mod.dump_module_info(log_directory)
		end	
		var tab = new Array[MMModule]
		tab.add_all(module_hierarchy)
		var name = module_hierarchy.select_smallests(tab).join("-")

		var f = new OFStream.open("{log_directory}/{name}.full_class_hierarchy.new.dot")
			f.write(class_hierarchy.to_dot)
		f.close

		f = new OFStream.open("{log_directory}/{name}.module_hierarchy.new.dot")
			f.write(module_hierarchy.to_dot)
		f.close
	end
end

redef class MMModule
	fun dump_module_info(directory: String)
	do
		var fname = "{directory}/{name}"
		var f = new OFStream.open("{fname}.class_hierarchy.new.dot")
		f.write(class_specialization_hierarchy.to_dot)
		f.close

		f = new OFStream.open("{fname}.properties.log")
		for cla in local_classes do
			cla.dump_properties(f)
			f.write("\n")
		end
		f.close
	end
end

redef class MMLocalClass
	fun dump_properties(file: OStream)
	do
		file.write("class {self}\n")
		if global.visibility_level == 3 and not self == global.intro then
			file.write("\tclass not visible in this module\n")
		else if mmmodule.visibility_for(global.mmmodule) == 0 then
			file.write("\tclass is defined later in the hierarchy\n")
		else
			for p in global_properties do
				var lp = self[p]
				file.write("\t{lp}{lp.signature_for(get_type)}\n")
			end
		end
		file.write("end # {self}\n")
	end
end
