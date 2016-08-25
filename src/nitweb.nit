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

import popcorn::pop_config
import popcorn::pop_auth
import frontend
import web

redef class NitwebConfig

	# Github client id used for Github OAuth login.
	#
	# * key: `github.client_id`
	# * default: ``
	var github_client_id: String is lazy do return value_or_default("github.client.id", "")

	# Github client secret used for Github OAuth login.
	#
	# * key: `github.client_secret`
	# * default: ``
	var github_client_secret: String is lazy do
		return value_or_default("github.client.secret", "")
	end
end

redef class ToolContext

	# Path to app config file.
	var opt_config = new OptionString("Path to app config file", "--config")

	# Host name to bind on (will overwrite the config one).
	var opt_host = new OptionString("Host to bind the server on", "--host")

	# Port number to bind on (will overwrite the config one).
	var opt_port = new OptionInt("Port number to use", -1, "--port")

	# Web rendering phase.
	var webphase: Phase = new NitwebPhase(self, null)

	init do
		super
		option_context.add_option(opt_config, opt_host, opt_port)
	end
end

# Phase that builds the model and wait for http request to serve pages.
private class NitwebPhase
	super Phase

	# Build the nitweb config from `toolcontext` options.
	fun build_config(toolcontext: ToolContext, mainmodule: MModule): NitwebConfig do
		var config_file = toolcontext.opt_config.value
		if config_file == null then config_file = "nitweb.ini"
		var config = new NitwebConfig(
			config_file,
			toolcontext.modelbuilder.model,
			mainmodule,
			toolcontext.modelbuilder)
		var opt_host = toolcontext.opt_host.value
		if opt_host != null then config["app.host"] = opt_host
		var opt_port = toolcontext.opt_port.value
		if opt_port >= 0 then config["app.port"] = opt_port.to_s
		return config
	end

	redef fun process_mainmodule(mainmodule, mmodules)
	do
		var config = build_config(toolcontext, mainmodule)

		var app = new App

		app.use_before("/*", new SessionInit)
		app.use_before("/*", new RequestClock)
		app.use("/api", new NitwebAPIRouter(config))
		app.use("/login", new GithubLogin(config.github_client_id))
		app.use("/oauth", new GithubOAuthCallBack(config.github_client_id, config.github_client_secret))
		app.use("/logout", new GithubLogout)
		app.use("/*", new StaticHandler(toolcontext.share_dir / "nitweb", "index.html"))
		app.use_after("/*", new ConsoleLog)

		app.listen(config.app_host, config.app_port)
	end
end

# Group all api handlers in one router.
class NitwebAPIRouter
	super APIRouter

	init do
		use("/catalog", new APICatalogRouter(config))
		use("/list", new APIList(config))
		use("/search", new APISearch(config))
		use("/random", new APIRandom(config))
		use("/entity/:id", new APIEntity(config))
		use("/code/:id", new APIEntityCode(config))
		use("/uml/:id", new APIEntityUML(config))
		use("/linearization/:id", new APIEntityLinearization(config))
		use("/defs/:id", new APIEntityDefs(config))
		use("/feedback/", new APIFeedbackRouter(config))
		use("/inheritance/:id", new APIEntityInheritance(config))
		use("/graph/", new APIGraphRouter(config))
		use("/docdown/", new APIDocdown(config))
		use("/metrics/", new APIMetricsRouter(config))
		use("/user", new GithubUser)
	end
end

# build toolcontext
var toolcontext = new ToolContext
var tpl = new Template
tpl.add "Usage: nitweb [OPTION]... <file.nit>...\n"
tpl.add "Run a webserver based on nitcorn that serves pages about model."
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
