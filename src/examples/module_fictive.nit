# This file is part of NIT ( https://nitlanguage.org ).
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

# Sample program that show how to build (and run) a synthetic program from the AST builder
import nitc::astprinter
import nitc::interpreter
import nitc::astbuilder

# 3 god classes
var tc = new ToolContext
tc.keep_going = true
var model = new Model
var mb = new ModelBuilder(model, tc)

# load the code module. While implicit in source code, we need to retrieve it for synthetic code
var acore = mb.load_module("core")
var mcore = acore.mmodule
assert mcore != null
# Loading does not perform the analysis, so force the analysis now
mb.run_phases

# A synthetic main module
var mmodule = new MModule(model, null, "m0", model.no_location)
mmodule.set_imported_mmodules([mcore]) # Close the module hierarchy
mmodule.set_visibility_for(mcore, public_visibility) # Important, or else `_name` methods will fail

# Refine Sys in the main module
var mclass = mmodule.sys_type
assert mclass != null
var mclassdef = new MClassDef(mmodule, mclass, model.no_location)
mclassdef.add_in_hierarchy # Close the classdef hierarchy

# Redefine Sys::main
var nmeth = mb.create_method_from_name("main", mclassdef, false)

# Body is `self.print(42)`
var ab = new ASTBuilder(mmodule, mclass)
var narg = ab.make_int(42)
var nrecv = ab.make_self
var mprint = mb.try_get_mproperty_by_name2(null, mmodule, mclass, "print")
assert mprint isa MMethod
var callsite = ab.create_callsite(mprint, false)
var ncall = ab.make_call(nrecv, callsite, [narg])
nmeth.n_block.add(ncall)

nmeth.dump_tree(false, false)
ncall.print_tree

var interpreter = new NaiveInterpreter(mb, mmodule, new Array[String])
interpreter.start(mmodule)
