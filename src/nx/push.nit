#This This file is part of NIT ( http://www.nitlanguage.org ).
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
# limitations under the License.module config

# Neo4j command set for `nx`.
module push

import neo
import ls
import frontend
import nitdoc

redef class Command
	# Get the neo4j instance url from config file.
	# assert: `config.has_key("neo.url")`
	fun neo_url: String do
		if not config.has_key("neo.url") then
			print "error: config key `neo.url` not set"
			print "try `nx config set neo.url http://localhost:7474` before"
			exit(0)
		end
		return config["neo.url"]
	end
end

# Dispatch args to subcommands of `$ nx neo`.
class NeoCtrl
	super Command

	redef var name = "neo"
	redef var desc = "manage Neo4j instance"
	redef var usage = "nx neo [OPTION]... <command>"

	private var cmd_clean: NeoClean

	init(parent: Command) do
		super
		controller = new Controller
		controller.add_command new NeoStart(self)
		controller.add_command new NeoStop(self)
		controller.add_command new NeoRestart(self)
		controller.add_command new NeoStatus(self)
		controller.add_command new NeoPush(self)
		controller.add_command new NeoDoc(self)
		cmd_clean = new NeoClean(self)
		controller.add_command cmd_clean
	end
end

# Start the neo4j instance.
private class NeoStart
	super Command

	redef var name = "start"
	redef var desc = "start neo4j instance"
	redef var usage = "nx neo start [OPTIONS]..."

	var opt_quiet = new OptionBool("Start neo4j instance in quiet mode", "-q", "--quiet")

	redef init(parent) do
		super
		add_option opt_quiet
	end

	redef fun process(argv) do
		var args = process_options(argv)
		if args.length != 0 then die

		var srv = new Neo4jServer
		if opt_quiet.value then
			srv.start_quiet
		else
			srv.start
		end
	end
end

# Stop the neo4j instance.
private class NeoStop
	super Command

	redef var name = "stop"
	redef var desc = "stop neo4j instance"
	redef var usage = "nx neo stop [OPTIONS]..."

	var opt_quiet = new OptionBool("Stop neo4j instance in quiet mode", "-q", "--quiet")

	redef init(parent) do
		super
		add_option opt_quiet
	end

	redef fun process(argv) do
		var args = process_options(argv)
		if args.length != 0 then die

		var srv = new Neo4jServer
		if opt_quiet.value then
			srv.stop_quiet
		else
			srv.stop
		end
	end
end

# Restart the neo4j instance.
private class NeoRestart
	super Command

	redef var name = "restart"
	redef var desc = "restart neo4j instance"
	redef var usage = "nx neo restart [OPTIONS]..."

	var opt_quiet = new OptionBool("Restart neo4j instance in quiet mode", "-q", "--quiet")

	redef init(parent) do
		super
		add_option opt_quiet
	end

	redef fun process(argv) do
		var args = process_options(argv)
		if args.length != 0 then die

		var srv = new Neo4jServer
		if opt_quiet.value then
			srv.stop_quiet
			srv.start_quiet
		else
			srv.stop
			srv.start
		end
	end
end

# Get the neo4j instance status.
private class NeoStatus
	super Command

	redef var name = "status"
	redef var desc = "show neo4j instance status"
	redef var usage = "nx neo status [OPTIONS]..."

	redef fun process(argv) do
		var args = process_options(argv)
		if args.length != 0 then die

		var srv = new Neo4jServer
		print "Neo4j instance: {neo_url}\n"
		srv.status
	end
end

# Clean graph under `NxRepo.name`.
private class NeoClean
	super Command

	redef var name = "clean"
	redef var desc = "delete graph related to repo"
	redef var usage = "nx neo clean <repo>"

	redef fun process(argv) do
		var args = process_options(argv)
		if args.length != 1 then die
		var repo = repo(args.first)
		var client = new Neo4jClient(neo_url)
		var query = "MATCH (n:{repo.name}) OPTIONAL MATCH n-[r]-() DELETE r, n"
		client.cypher(new CypherQuery.from_string(query))
	end
end

# Push repo `Model` to neo4j instance.
private class NeoPush
	super Command

	redef var name = "push"
	redef var desc = "push repo model to Neo4j instance"
	redef var usage = "nx neo push <repo>"

	redef fun process(argv) do
		var args = process_options(argv)
		if args.length != 1 then die

		var tstart = get_time
		var repo = repo(args.first)
		var files = repo.files

		# clean current model
		toolcontext.info("Clean base for repo {repo.name}...", 1)
		parent.as(NeoCtrl).cmd_clean.process([repo.name])

		# parse model
		toolcontext.info("Parse files...", 1)
		var model = new Model
		var modelbuilder = new ModelBuilder(model, toolcontext)
		modelbuilder.parse(files)
		modelbuilder.run_phases

		# push to base
		var url = neo_url
		toolcontext.info("Push model to {url}...", 1)
		var client = new Neo4jClient(url)
		var neo_model = new NeoModel(repo.name, toolcontext, client)
		neo_model.save(model)

		toolcontext.info("Time elapsed: {get_time - tstart}s", 1)
	end
end

# Generate nitdoc for a repo stored in base.
private class NeoDoc
	super Command

	redef var name = "doc"
	redef var desc = "generate nitdoc from neo4j instance"
	redef var usage = "nx neo doc <repo>"

	redef fun process(argv) do
		var args = process_options(argv)
		if args.length != 1 then die

		var tstart = get_time
		var repo = repo(args.first)
		var url = neo_url

		# Pull from base
		toolcontext.info("Import model {repo.name} from {url}...", 1)
		var model = new Model
		var client = new Neo4jClient(url)
		var neo_model = new NeoModel(repo.name, toolcontext, client)
		neo_model.load(model)

		# generate doc
		toolcontext.info("Generate doc...", 1)

		var mbuilder = new ModelBuilder(model, toolcontext)
		var mmodules = model.mmodules
		if mmodules.is_empty then return

		var mainmodule: MModule
		if mmodules.length == 1 then
			mainmodule = mmodules.first
		else
			mainmodule = new MModule(model, null, "<main>", new Location(null, 0, 0, 0, 0))
			mainmodule.is_fictive = true
			mainmodule.set_imported_mmodules(mmodules)
		end

		var nitdoc = new Nitdoc(toolcontext, model, mainmodule)
		nitdoc.generate

		toolcontext.info("Time elapsed: {get_time - tstart} sec", 1)
	end
end


