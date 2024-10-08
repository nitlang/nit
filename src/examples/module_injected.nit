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

# Sample program that show how to load (and run) a program from a String
module module_injected

import nitc::parser_util
import nitc::astprinter
import nitc::interpreter

# 3 god classes
var tc = new ToolContext
tc.keep_going = true
var model = new Model
var mb = new ModelBuilder(model, tc)

# Parse the module
var amodule = tc.parse_module("print 42")
# Add it to the model through the model builder
var mmodule = mb.load_rt_module(null, amodule, "-")
assert mmodule != null
# Do the semantic analysis
mb.run_phases

amodule.dump_tree
var main_method = amodule.n_classdefs.last.n_propdefs.first
main_method.print_tree
assert main_method isa AMethPropdef

var interpreter = new NaiveInterpreter(mb, mmodule, new Array[String])
interpreter.start(mmodule)
