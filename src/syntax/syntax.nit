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
package syntax

import mmloader
import mmbuilder
import typing

# Loader of nit source files
class SrcModuleLoader
special ModuleLoader
	redef type MODULE: MMSrcModule

	redef meth file_type do return "nit"

	redef meth parse_file(context, file, filename, name, dir)
	do
		var lexer = new Lexer(file, filename)
		var parser = new Parser(lexer)
		var node_tree = parser.parse
		if node_tree.n_base == null then
			var err = node_tree.n_eof
			assert err isa PError
			context.error("{err.locate}: {err.message}")
			exit(1)
		end
		var node_module = node_tree.n_base
		assert node_module isa AModule
		var module = new MMSrcModule(context, node_module, dir, name, filename)
		return module
	end

	redef meth process_metamodel(context, module)
	do
		module.process_supermodules(context)
		module.process_syntax(context)
	end

	init do end
end

redef class MMSrcModule
	# Loading and syntax analysis of super modules
	private meth process_supermodules(tc: ToolContext)
	do
		node.import_super_modules(tc, self)
	end

	# Syntax analysis and MM construction for the module
	# Require than supermodules are processed
	private meth process_syntax(tc: ToolContext)
	do
		do_mmbuilder(tc)
		if tc.error_count > 0 then exit(1)

		do_typing(tc)
		if tc.error_count > 0 then exit(1)
	end
end

