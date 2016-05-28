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

# Runs a webserver based on nitcorn that render things from model.
module nitweb

import frontend
import web

redef class ToolContext

	# Host name to bind on.
	var opt_host = new OptionString("Host to bind the server on", "--host")

	# Port number to bind on.
	var opt_port = new OptionInt("Port number to use", 3000, "--port")

	# Web rendering phase.
	var webphase: Phase = new NitwebPhase(self, null)

	init do
		super
		option_context.add_option(opt_host, opt_port)
	end
end

# Phase that builds the model and wait for http request to serve pages.
private class NitwebPhase
	super Phase
	redef fun process_mainmodule(mainmodule, mmodules)
	do
		var model = mainmodule.model
		var modelbuilder = toolcontext.modelbuilder

		# Build catalog
		var catalog = new Catalog(modelbuilder)
		for mpackage in model.mpackages do
			catalog.deps.add_node(mpackage)
			for mgroup in mpackage.mgroups do
				for mmodule in mgroup.mmodules do
					for imported in mmodule.in_importation.direct_greaters do
						var ip = imported.mpackage
						if ip == null or ip == mpackage then continue
						catalog.deps.add_edge(mpackage, ip)
					end
				end
			end
			catalog.git_info(mpackage)
			catalog.package_page(mpackage)
		end

		# Run the server
		var host = toolcontext.opt_host.value or else "localhost"
		var port = toolcontext.opt_port.value

		var app = new App

		app.use_before("/*", new RequestClock)
		app.use("/api", new APIRouter(model, modelbuilder, mainmodule, catalog))
		app.use("/*", new StaticHandler(toolcontext.share_dir / "nitweb", "index.html"))
		app.use_after("/*", new ConsoleLog)

		app.listen(host, port.to_i)
	end
end

# Group all api handlers in one router.
class APIRouter
	super Router

	# Model to pass to handlers.
	var model: Model

	# ModelBuilder to pass to handlers.
	var modelbuilder: ModelBuilder

	# Mainmodule to pass to handlers.
	var mainmodule: MModule

	# Catalog to pass to handlers.
	var catalog: Catalog

	init do
		use("/catalog", new APICatalogRouter(model, mainmodule, catalog))
		use("/list", new APIList(model, mainmodule))
		use("/search", new APISearch(model, mainmodule))
		use("/random", new APIRandom(model, mainmodule))
		use("/entity/:id", new APIEntity(model, mainmodule))
		use("/code/:id", new APIEntityCode(model, mainmodule, modelbuilder))
		use("/uml/:id", new APIEntityUML(model, mainmodule))
		use("/linearization/:id", new APIEntityLinearization(model, mainmodule))
		use("/defs/:id", new APIEntityDefs(model, mainmodule))
		use("/inheritance/:id", new APIEntityInheritance(model, mainmodule))
		use("/graph/", new APIGraphRouter(model, mainmodule))
	end
end

# build toolcontext
var toolcontext = new ToolContext
var tpl = new Template
tpl.add "Usage: nitweb [OPTION]... <file.nit>...\n"
tpl.add "Run a webserver based on nitcorn that serve pages about model."
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
