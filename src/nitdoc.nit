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

redef class ToolContext
	# Nitdoc generation phase.
	var docphase: Phase = new NitdocPhase(self, null)
end

private class NitdocPhase
	super Phase
	redef fun process_mainmodule(mainmodule, mmodules)
	do
		# generate doc
		toolcontext.model = mainmodule.model
		toolcontext.mainmodule = mainmodule
		var nitdoc = new Nitdoc(toolcontext)
		nitdoc.generate
	end
end

# The Nitdoc class explores the model and generate pages for each mentities found
class Nitdoc

	# ToolContext used by Nitdoc to share options.
	var ctx: ToolContext

	# Generate Nitdoc.
	fun generate do
		init_output_dir
		overview
		search
		groups
		modules
		classes
		properties
		quicksearch_list
	end

	private fun init_output_dir do
		# create destination dir if it's necessary
		var output_dir = ctx.output_dir
		if not output_dir.file_exists then output_dir.mkdir
		# locate share dir
		var sharedir = ctx.opt_sharedir.value
		if sharedir == null then
			var dir = ctx.nit_dir
			sharedir = dir/"share/nitdoc"
			if not sharedir.file_exists then
				print "Error: Cannot locate nitdoc share files. Uses --sharedir or envvar NIT_DIR"
				abort
			end
		end
		# copy shared files
		if ctx.opt_shareurl.value == null then
			sys.system("cp -r -- {sharedir.to_s.escape_to_sh}/* {output_dir.to_s.escape_to_sh}/")
		else
			sys.system("cp -r -- {sharedir.to_s.escape_to_sh}/resources/ {output_dir.to_s.escape_to_sh}/resources/")
		end

	end

	private fun overview do
		var page = new NitdocOverview(ctx)
		page.render.write_to_file("{ctx.output_dir.to_s}/{page.page_url}")
	end

	private fun search do
		var page = new NitdocSearch(ctx)
		page.render.write_to_file("{ctx.output_dir.to_s}/{page.page_url}")
	end

	private fun groups do
		for mproject in ctx.model.mprojects do
			for mgroup in mproject.mgroups.to_a do
				var page = new NitdocGroup(ctx, mgroup)
				page.render.write_to_file("{ctx.output_dir.to_s}/{page.page_url}")
			end
		end
	end

	private fun modules do
		for mmodule in ctx.model.mmodules do
			if mmodule.is_fictive or mmodule.is_test_suite then continue
			var page = new NitdocModule(ctx, mmodule)
			page.render.write_to_file("{ctx.output_dir.to_s}/{page.page_url}")
		end
	end

	private fun classes do
		for mclass in ctx.model.mclasses do
			if not ctx.filter_mclass(mclass) then continue
			var page = new NitdocClass(ctx, mclass)
			page.render.write_to_file("{ctx.output_dir.to_s}/{page.page_url}")
		end
	end

	private fun properties do
		for mproperty in ctx.model.mproperties do
			if not ctx.filter_mproperty(mproperty) then continue
			if mproperty isa MInnerClass then continue
			var page = new NitdocProperty(ctx, mproperty)
			page.render.write_to_file("{ctx.output_dir.to_s}/{page.page_url}")
		end
	end

	private fun quicksearch_list do
		var quicksearch = new QuickSearch(ctx)
		quicksearch.render.write_to_file("{ctx.output_dir.to_s}/quicksearch-list.js")
	end
end

# process options
var toolcontext = new ToolContext
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(arguments)

if mmodules.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mmodules)
