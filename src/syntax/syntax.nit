# This file is part of NIT ( http://www.nitlanguage.org ).
#
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

# Full syntax analysis of NIT AST.
# Detect syntax and some metamodel errors.
module syntax

import mmloader
import mmbuilder
import typing
import icode_generation
import extern_inline
import extern_type_inheritance

# Loader of nit source files
class SrcModuleLoader
	super ModuleLoader
	redef type MODULE: MMSrcModule

	redef fun file_type do return "nit"

	redef fun parse_file(context, file, filename, name, dir)
	do
		var name_is_valid = name.to_s.length > 0 and name.to_s.chars[0].is_lower
		for char in name.to_s.chars do if not char.is_digit and not char.is_letter and not char == '_'
		then
			name_is_valid = false
			break
		end
		if not name_is_valid then
			context.error( null, "{filename}: Error module name \"{name}\", must start with a lower case letter and contain only letters, digits and '_'." )
		end

		var source = new SourceFile(filename, file)
		var lexer = new Lexer(source)
		var parser = new Parser(lexer)
		var node_tree = parser.parse
		if node_tree.n_base == null then
			var err = node_tree.n_eof
			assert err isa AError
			context.fatal_error(err.location, err.message)
		end
		var node_module = node_tree.n_base
		assert node_module != null
		var module_loc = new Location.with_file(source)
		var mod = new MMSrcModule(context, node_module, dir, name, module_loc)
		return mod
	end

	redef fun process_metamodel(context, mod)
	do
		mod.process_supermodules(context)
		context.info("Syntax analysis for module: {mod.name}", 2)
		mod.process_syntax(context)
	end

	init do end
end

redef class MMSrcModule
	# Loading and syntax analysis of super modules
	private fun process_supermodules(tc: ToolContext)
	do
		node.import_super_modules(tc, self)
	end

	# Syntax analysis and MM construction for the module
	# Require than supermodules are processed
	private fun process_syntax(tc: ToolContext)
	do
		do_mmbuilder(tc)
		tc.check_errors

		do_typing(tc)
		tc.check_errors

		generate_icode(tc)
		tc.check_errors

		if not tc.keep_ast then clear_ast
	end
end

redef class ToolContext
	# Should the AST be preserved in source modules after syntax processing?
	# Default is false.
	readable writable var _keep_ast: Bool = false
end
