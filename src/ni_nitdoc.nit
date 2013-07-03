# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

module ni_nitdoc

import model_utils
import abstract_compiler
import html

class Nitdoc
	private var toolcontext: ToolContext
	private var model: Model
	private var modelbuilder: ModelBuilder
	private var mainmodule: MModule
	private var arguments: Array[String]
	private var destinationdir: nullable String
	private var sharedir: nullable String

	private var opt_dir = new OptionString("Directory where doc is generated", "-d", "--dir")
	private var opt_source = new OptionString("What link for source (%f for filename, %l for first line, %L for last line)", "--source")
	private var opt_sharedir = new OptionString("Directory containing the nitdoc files", "--sharedir")
	private var opt_nodot = new OptionBool("Do not generate graphes with graphiviz", "--no-dot")

	init(toolcontext: ToolContext) do
		# We need a model to collect stufs
		self.toolcontext = toolcontext
		self.arguments = toolcontext.option_context.rest
		toolcontext.option_context.add_option(opt_dir)
		toolcontext.option_context.add_option(opt_source)
		toolcontext.option_context.add_option(opt_sharedir)
		toolcontext.option_context.add_option(opt_nodot)
		process_options

		if arguments.length < 1 then
			toolcontext.option_context.usage
			exit(1)
		end

		model = new Model
		modelbuilder = new ModelBuilder(model, toolcontext)

		# Here we load an process std modules
		var mmodules = modelbuilder.parse_and_build([arguments.first])
		if mmodules.is_empty then return
		modelbuilder.full_propdef_semantic_analysis
		assert mmodules.length == 1
		self.mainmodule = mmodules.first
	end

	private fun process_options do
		if not opt_dir.value is null then
			destinationdir = opt_dir.value
		else
			destinationdir = "nitdoc_directory"
		end
		if not opt_sharedir.value is null then
			sharedir = opt_sharedir.value
		else
			var dir = "NIT_DIR".environ
			if dir.is_empty then
				dir = "{sys.program_name.dirname}/../share/nitdoc"
			else
				dir = "{dir}/share/nitdoc"
			end
			sharedir = dir
			if sharedir is null then
				print "Error: Cannot locate nitdoc share files. Uses --sharedir or envvar NIT_DIR"
				abort
			end
			dir = "{sharedir.to_s}/scripts/js-facilities.js"
			if sharedir is null then
				print "Error: Invalid nitdoc share files. Check --sharedir or envvar NIT_DIR"
				abort
			end
		end
	end

	fun start do
		if arguments.length == 1 then
			# Create destination dir if it's necessary
			if not destinationdir.file_exists then destinationdir.mkdir
			sys.system("cp -r {sharedir.to_s}/* {destinationdir.to_s}/")
		end
	end
end

class NitdocOverview
	super NitdocPage

	var amodules: Array[AModule]

	# Init with Array[AModule] to get all ifnormations about each MModule containt in a program
	# opt_nodot to inform about the graph gen
	# destination: to know where will be saved dot files
	init with(modules: Array[AModule], opt_nodot: Bool, destination: String) do
		self.amodules = modules
		self.opt_nodot = opt_nodot
		self.destinationdir = destination
	end

	redef fun head do
		super
		add("title").text("Overview | Nit Standard Library")
	end

end

class NitdocPage
	super HTMLPage
	var opt_nodot: Bool
	var destinationdir : String

	redef fun head do
		add("meta").attr("charset", "utf-8")
		add("script").attr("type", "text/javascript").attr("src", "scripts/jquery-1.7.1.min.js")
		add("script").attr("type", "text/javascript").attr("src", "quicksearch-list.js")
		add("script").attr("type", "text/javascript").attr("src", "scripts/js-facilities.js")
		add("link").attr("rel", "stylesheet").attr("href", "styles/main.css").attr("type", "text/css").attr("media", "screen")
	end

	redef fun body do header
	fun header do end
end

# Create a tool context to handle options and paths
var toolcontext = new ToolContext
toolcontext.process_options

# Here we launch the nit index
var nitdoc = new Nitdoc(toolcontext)
nitdoc.start
