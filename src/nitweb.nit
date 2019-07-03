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
import doc::api

redef class ToolContext

	# Path to app config file.
	var opt_config = new OptionString("Path to app config file", "--config")

	# Host name to bind on (will overwrite the config one).
	var opt_host = new OptionString("Host to bind the server on", "--host")

	# Port number to bind on (will overwrite the config one).
	var opt_port = new OptionInt("Port number to use", -1, "--port")

	# --no-private
	var opt_no_private = new OptionBool("Do not show private entities", "--no-private")

	# --no-fictive
	var opt_no_fictive = new OptionBool("Do not show fictive entities", "--no-fictive")

	# --no-test
	var opt_no_test = new OptionBool("Do not show test related entities", "--no-test")

	# --no-attribute
	var opt_no_attribute = new OptionBool("Do not show attributes", "--no-attribute")

	# --no-empty-doc
	var opt_no_empty_doc = new OptionBool("Do not undocumented entities", "--no-empty-doc")

	# Web rendering phase.
	var webphase: Phase = new NitwebPhase(self, null)

	init do
		super
		option_context.add_option(opt_config, opt_host, opt_port, opt_no_private,
			opt_no_fictive, opt_no_test, opt_no_attribute, opt_no_empty_doc)
	end
end

# Phase that builds the model and wait for http request to serve pages.
private class NitwebPhase
	super Phase

	# Build the nitweb config from `toolcontext` options.
	fun build_config(toolcontext: ToolContext, mainmodule: MModule): NitwebConfig do

		var model = toolcontext.modelbuilder.model

		var filter = new ModelFilter(
			if toolcontext.opt_no_private.value then protected_visibility else private_visibility,
			accept_fictive = not toolcontext.opt_no_fictive.value,
			accept_empty_doc = not toolcontext.opt_no_empty_doc.value,
			accept_test = not toolcontext.opt_no_test.value,
			accept_attribute = not toolcontext.opt_no_attribute.value
		)

		var catalog = build_catalog(toolcontext.modelbuilder, filter)

		var config = new NitwebConfig(model, mainmodule, toolcontext.modelbuilder, filter, catalog)
		var config_file = toolcontext.opt_config.value
		if config_file == null then config.default_config_file = "nitweb.ini"
		config.parse_options(args)
		var opt_host = toolcontext.opt_host.value
		if opt_host != null then config.ini["app.host"] = opt_host
		var opt_port = toolcontext.opt_port.value
		if opt_port >= 0 then config.ini["app.port"] = opt_port.to_s
		return config
	end

	redef fun process_mainmodule(mainmodule, mmodules)
	do
		var config = build_config(toolcontext, mainmodule)
		config.model.index # pre load model index
		config.model.nitdoc_md_processor = config.md_processor

		var app = new App

		app.use_before("/*", new SessionInit)
		app.use_before("/*", new RequestClock)
		app.use("/api", new APIRouter(config))
		app.use("/login", new GithubLogin(config.github_client_id))
		app.use("/oauth", new GithubOAuthCallBack(config.github_client_id, config.github_client_secret))
		app.use("/logout", new GithubLogout)
		app.use("/*", new StaticHandler(toolcontext.share_dir / "nitweb", "index.html"))
		app.use_after("/*", new PopLogger(info_level))

		app.listen(config.app_host, config.app_port)
	end

	# Build the catalog
	#
	# This method should be called at nitweb startup.
	fun build_catalog(modelbuilder: ModelBuilder, filter: nullable ModelFilter): Catalog do
		var catalog = new Catalog(modelbuilder)
		var mpackages = modelbuilder.model.collect_mpackages(filter)
		# Compute the poset
		for p in mpackages do
			var g = p.root
			assert g != null
			modelbuilder.scan_group(g)

			catalog.deps.add_node(p)
			for gg in p.mgroups do for m in gg.mmodules do
				for im in m.in_importation.direct_greaters do
					var ip = im.mpackage
					if ip == null or ip == p then continue
					catalog.deps.add_edge(p, ip)
				end
			end
		end
		# Build the catalog
		for mpackage in mpackages do
			catalog.package_page(mpackage)
			catalog.git_info(mpackage)
			catalog.mpackage_stats(mpackage)
		end
		return catalog
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
