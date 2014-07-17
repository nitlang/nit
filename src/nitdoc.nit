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

# Documentation generator for the nit language.
# Generate API documentation in HTML format from nit source code.
module nitdoc

import modelbuilder
import doc

# process options
var toolcontext = new ToolContext
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse(arguments)

if mmodules.is_empty then return
mbuilder.run_phases
var mainmodule: MModule
if mmodules.length == 1 then
	mainmodule = mmodules.first
else
	mainmodule = new MModule(model, null, "<main>", new Location(null, 0, 0, 0, 0))
	mainmodule.is_fictive = true
	mainmodule.set_imported_mmodules(mmodules)
end

# generate doc
var nitdoc = new Nitdoc(toolcontext, model, mainmodule)
nitdoc.generate

