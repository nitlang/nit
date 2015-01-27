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

# Base entities shared by all the nitdoc code.
module doc_base

import toolcontext
import doc_model

redef class ToolContext
	var opt_dir = new OptionString("output directory", "-d", "--dir")
	var opt_source = new OptionString("link for source (%f for filename, %l for first line, %L for last line)", "--source")
	var opt_sharedir = new OptionString("directory containing nitdoc assets", "--sharedir")
	var opt_shareurl = new OptionString("use shareurl instead of copy shared files", "--shareurl")
	var opt_no_attributes = new OptionBool("ignore the attributes",
			"--no-attributes")
	var opt_nodot = new OptionBool("do not generate graphes with graphviz", "--no-dot")
	var opt_private = new OptionBool("also generate private API", "--private")

	var opt_custom_title = new OptionString("custom title for homepage", "--custom-title")
	var opt_custom_brand = new OptionString("custom link to external site", "--custom-brand")
	var opt_custom_intro = new OptionString("custom intro text for homepage", "--custom-overview-text")
	var opt_custom_footer = new OptionString("custom footer text", "--custom-footer-text")

	var opt_github_upstream = new OptionString("Git branch where edited commits will be pulled into (ex: user:repo:branch)", "--github-upstream")
	var opt_github_base_sha1 = new OptionString("Git sha1 of base commit used to create pull request", "--github-base-sha1")
	var opt_github_gitdir = new OptionString("Git working directory used to resolve path name (ex: /home/me/myproject/)", "--github-gitdir")

	var opt_piwik_tracker = new OptionString("Piwik tracker URL (ex: nitlanguage.org/piwik/)", "--piwik-tracker")
	var opt_piwik_site_id = new OptionString("Piwik site ID", "--piwik-site-id")

	var output_dir: String
	var min_visibility: MVisibility

	var model: Model is noinit, writable
	var mainmodule: MModule is noinit, writable

	redef init do
		super

		var opts = option_context
		opts.add_option(opt_dir, opt_source, opt_sharedir, opt_shareurl,
				opt_no_attributes, opt_nodot, opt_private)
		opts.add_option(opt_custom_title, opt_custom_footer, opt_custom_intro, opt_custom_brand)
		opts.add_option(opt_github_upstream, opt_github_base_sha1, opt_github_gitdir)
		opts.add_option(opt_piwik_tracker, opt_piwik_site_id)

		var tpl = new Template
		tpl.add "Usage: nitdoc [OPTION]... <file.nit>...\n"
		tpl.add "Generates HTML pages of API documentation from Nit source files."
		tooldescription = tpl.write_to_string
	end

	redef fun process_options(args) do
		super

		# output dir
		var output_dir = opt_dir.value
		if output_dir == null then
			output_dir = "doc"
		end
		self.output_dir = output_dir
		# min visibility
		if opt_private.value then
			min_visibility = none_visibility
		else
			min_visibility = protected_visibility
		end
		# github urls
		var gh_upstream = opt_github_upstream.value
		var gh_base_sha = opt_github_base_sha1.value
		var gh_gitdir = opt_github_gitdir.value
		if not gh_upstream == null or not gh_base_sha == null or not gh_gitdir == null then
			if gh_upstream == null or gh_base_sha == null or gh_gitdir == null then
				print "Error: Options {opt_github_upstream.names.first}, {opt_github_base_sha1.names.first} and {opt_github_gitdir.names.first} are required to enable the GitHub plugin"
				abort
			end
		end
	end

	# Filter the entity based on the options specified by the user.
	#
	# Return `true` if the specified entity has to be included in the generated
	# documentation
	fun filter_mclass(mclass: MClass): Bool do
		return mclass.visibility >= min_visibility
	end

	# Filter the entity based on the options specified by the user.
	#
	# Return `true` if the specified entity has to be included in the generated
	# documentation
	fun filter_mproperty(mproperty: MProperty): Bool do
		return mproperty.visibility >= min_visibility and
			not (opt_no_attributes.value and mproperty isa MAttribute)
	end

	# Sort MEntities by name.
	var name_sorter = new MEntityNameSorter
end

